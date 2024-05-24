/*
* Copyright (c) 2020 - 2024 Renesas Electronics Corporation and/or its affiliates
*
* SPDX-License-Identifier: BSD-3-Clause
*/

/**********************************************************************************************************************
 * File Name    : bsp_irq.c
 * Version      : 1.00
 * Description  : bsp_irq (non secure) source code
 *********************************************************************************************************************/

/***********************************************************************************************************************
 * Includes   <System Includes> , "Project Includes"
 **********************************************************************************************************************/
#include "bsp_api.h"
#include "bsp_irq_sense.h"

/***********************************************************************************************************************
 * Macro definitions
 **********************************************************************************************************************/
#define BSP_PRV_CLEAR_REG_MAX          (13U)
#define BSP_PRV_ALL_BIT_CLEAR          (0xFFFFFFFFU)

#define BSP_PRV_ID_MASK                (0x000003FFU)
#define BSP_PRV_INTERRUPTABLE_NUM      (32U)

#define BSP_PRV_DISABLE_SPI_SEL        (0x3FF)
#define BSP_PRV_SPI_SEL_ALL_DISABLE    (0x3FFFFFFFU)
#define BSP_PRV_SPI_SEL_SETTING_NUM    (3)
#define BSP_PRV_SPI_SEL_LENGTH         (10UL)

/***********************************************************************************************************************
 * Typedef definitions
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * Exported global variables (to be accessed by other files)
 **********************************************************************************************************************/
extern fsp_vector_t g_vector_table[BSP_ICU_VECTOR_MAX_ENTRIES + BSP_CORTEX_VECTOR_TABLE_ENTRIES];

/* This table is used to store the context in the ISR. */
void * gp_renesas_isr_context[BSP_ICU_VECTOR_MAX_ENTRIES + BSP_CORTEX_VECTOR_TABLE_ENTRIES];

extern uint32_t g_gicd_icdicfr_init_array[BSP_GIC_ICFGR_MAX];
extern uint8_t  g_detect_type_sel_int[BSP_FEATURE_SELECT_IRQSEL_MAX];

/* GIC current interrpt ID and variable. */
uint16_t g_current_interrupt_num[BSP_PRV_INTERRUPTABLE_NUM];
uint8_t  g_current_interrupt_pointer = 0;

extern uint8_t g_gic_detect_type[BSP_ICU_VECTOR_MAX_ENTRIES + BSP_CORTEX_VECTOR_TABLE_ENTRIES];
extern uint8_t g_gic_sel_int_detect_type[BSP_FEATURE_SELECT_IRQSEL_MAX];

/***********************************************************************************************************************
 * External symbols
 **********************************************************************************************************************/
#if defined(BSP_FEATURE_ICU_HAS_SELECT_INT)
const bsp_interrupt_event_t g_interrupt_event_link_select[BSP_ICU_VECTOR_MAX_ENTRIES -
                                                          BSP_FEATURE_ICU_FIXED_INTSEL_COUNT]  BSP_WEAK_REFERENCE =
{
    (bsp_interrupt_event_t) IRQSEL_NONE
};
#endif

/***********************************************************************************************************************
 * Private global variables and functions
 **********************************************************************************************************************/

/*******************************************************************************************************************//**
 * @addtogroup BSP_MCU
 *
 * @{
 **********************************************************************************************************************/

/** @} (end addtogroup BSP_MCU) */

/*******************************************************************************************************************//**
 *        Using the vector table information section that has been built by the linker and placed into ROM in the
 * .vector_info. section, this function will initialize the ICU so that configured ELC events will trigger interrupts
 * in the NVIC.
 *
 **********************************************************************************************************************/
void bsp_irq_cfg (void)
{
    uint32_t            gicd_reg_num;
    uint32_t            irq_num;
    uint32_t            select_num;
    uint32_t            cnt;
    volatile uint32_t * p_reg_addr;

    R_INTC_GIC->GICC_ICCICR_b.EN = 0;

    R_INTC_GIC->GICC_ICCPMR_b.P = BSP_FEATURE_INTC_IRQ_PRIORITY_MASK;

    R_INTC_GIC->GICC_ICCBPR_b.BP = BSP_FEATURE_INTC_BINARY_POINT;

    R_INTC_GIC->GICC_ICCICR_b.EN = 1;

    R_INTC_GIC->GICD_ICDDCR_b.EN = 0;

#if defined(BSP_FEATURE_ICU_HAS_SELECT_INT)

    /* Rewrite interrupt detection type table for Select interrupt */
    /* irq number of start select interrupt */
    irq_num    = BSP_FEATURE_ICU_FIXED_INTSEL_COUNT + BSP_SELECT_INT_START_ELEMENT + BSP_CORTEX_VECTOR_TABLE_ENTRIES;
    select_num = BSP_SELECT_INT_START_ELEMENT;
    for (cnt = 0;
         ((cnt < BSP_SELECT_INT_NUM) && (IRQSEL_NONE != g_interrupt_event_link_select[select_num]));
         cnt++)
    {
        g_gic_detect_type[irq_num] = g_gic_sel_int_detect_type[g_interrupt_event_link_select[select_num]];
        irq_num++;
        select_num++;
    }
#endif

    /* Clear the Pending bit for the all interrupts. */
    p_reg_addr = &R_INTC_GIC->GICD_ICDICPRn;
    for (gicd_reg_num = 0; gicd_reg_num < BSP_PRV_CLEAR_REG_MAX; gicd_reg_num++)
    {
        R_BSP_IoRegWrite32((p_reg_addr + gicd_reg_num), BSP_PRV_ALL_BIT_CLEAR, 0, BSP_IO_NONMASK_ACCESS_32);
    }

    /* Clear the Active bit for the all interrupts. */
    p_reg_addr = (volatile uint32_t *) &R_INTC_GIC->GICD_ICDABRn;
    for (gicd_reg_num = 0; gicd_reg_num < BSP_PRV_CLEAR_REG_MAX; gicd_reg_num++)
    {
        R_BSP_IoRegWrite32((p_reg_addr + gicd_reg_num), BSP_PRV_ALL_BIT_CLEAR, 0, BSP_IO_NONMASK_ACCESS_32);
    }

    R_INTC_GIC->GICD_ICDDCR_b.EN = 1;

#if defined(BSP_FEATURE_ICU_HAS_SELECT_INT)
    {
        uint32_t            sel_num;
        volatile uint32_t * intr8selx_addr = &R_INTC->INTR8SEL0;

        sel_num = BSP_SELECT_INT_START_ELEMENT;
        for (cnt = 0; cnt < BSP_SELECT_INT_NUM; cnt++)
        {
            if (g_interrupt_event_link_select[sel_num] != IRQSEL_NONE)
            {
                uint32_t sel_register_num = sel_num / BSP_PRV_SPI_SEL_SETTING_NUM;
                uint32_t sel_bit_num      = sel_num % BSP_PRV_SPI_SEL_SETTING_NUM;
                uint32_t spi_sel;

                spi_sel  = intr8selx_addr[sel_register_num];
                spi_sel &= ~(R_INTC_INTR8SEL0_R8SPI0_SEL0_Msk << (BSP_PRV_SPI_SEL_LENGTH * sel_bit_num));
                spi_sel |= g_interrupt_event_link_select[sel_num] << (BSP_PRV_SPI_SEL_LENGTH * sel_bit_num);
                intr8selx_addr[sel_register_num] = spi_sel;
                sel_num++;
            }
            else
            {
                break;
            }
        }
    }
#endif
}

/*******************************************************************************************************************//**
 * This function is called first when an interrupt is generated and branches to each interrupt isr function.
 *
 * @param[in]  id    GIC INTID used to identify the interrupt.
 **********************************************************************************************************************/
void bsp_common_interrupt_handler (uint32_t id)
{
    uint16_t gic_intid;

    /* Get interruot ID (GIC INTID). */
    gic_intid = (uint16_t) (id & BSP_PRV_ID_MASK);

    if (BSP_GIC_SPECIAL_ID != gic_intid)
    {
        /* Remain the interrupt number */
        g_current_interrupt_num[g_current_interrupt_pointer++] =
            (uint16_t) (gic_intid - BSP_CORTEX_VECTOR_TABLE_ENTRIES);

        __asm volatile ("dmb");

        __enable_irq();

        /* Branch to an interrupt handler. */
        g_vector_table[gic_intid]();
        __disable_irq();
        g_current_interrupt_pointer--;
    }
}
