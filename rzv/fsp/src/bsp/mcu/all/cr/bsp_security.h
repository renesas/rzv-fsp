/*
* Copyright (c) 2020 - 2024 Renesas Electronics Corporation and/or its affiliates
*
* SPDX-License-Identifier: BSD-3-Clause
*/

#ifndef BSP_SECURITY_H
#define BSP_SECURITY_H

/** Common macro for FSP header files. There is also a corresponding FSP_FOOTER macro at the end of this file. */
FSP_HEADER

/***********************************************************************************************************************
 * Macro definitions
 **********************************************************************************************************************/

#if BSP_FEATURE_BSP_ACCESS_CONTROL_SET_SUPPORT

#define R_BSP_MASTER_ACCESS_CONTROL_SET(ip, level, direction)    {FSP_CRITICAL_SECTION_DEFINE;                                          \
                                                                  FSP_CRITICAL_SECTION_ENTER;                                           \
                                                                  BSP_MST_ACCCNT_REG_ ## ip = (BSP_MST_ACCCNT_REG_ ## ip                \
                                                                  & ~(((uint32_t) (R_SYSC_SYS_MSTACCCTL0_SXMDMC_AWPU_Msk                \
                                                                  | R_SYSC_SYS_MSTACCCTL0_SXMDMC_AWNS_Msk))                             \
                                                                  << (BSP_MST_ACCCNT_POS_ ## ip + direction))                           \
                                                                  | (R_SYSC_SYS_MSTACCCTL0_SXMDMC_AWSEL_Msk                             \
                                                                  << (BSP_MST_ACCCNT_POS_ ## ip + direction))                           \
                                                                  | (level << (BSP_MST_ACCCNT_POS_ ## ip + direction)));                \
                                                                  FSP_CRITICAL_SECTION_EXIT;}

#define R_BSP_SLAVE_ACCESS_CONTROL_SET(ip, level, direction)     {FSP_CRITICAL_SECTION_DEFINE;                                          \
                                                                  FSP_CRITICAL_SECTION_ENTER;                                           \
                                                                  BSP_SLV_ACCCNT_REG_ ## ip = (BSP_SLV_ACCCNT_REG_ ## ip                \
                                                                  & ~(((uint32_t) (R_TZC_REGION_ID_ACCESS_0_NRE_Msk)) << (direction))   \
                                                                  | (level << (direction)));                                            \
                                                                  FSP_CRITICAL_SECTION_EXIT;}

#define BSP_MST_ACCCNT_LEVEL_NONPRIVILEGED_NONSECURE    (2U)
#define BSP_MST_ACCCNT_LEVEL_PRIVILEGED_NONSECURE       (3U)
#define BSP_MST_ACCCNT_LEVEL_NONPRIVILEGED_SECURE       (0U)
#define BSP_MST_ACCCNT_LEVEL_PRIVILEGED_SECURE          (1U)

#define BSP_MST_ACCCNT_WRITE_DIRECTION                  (0U)
#define BSP_MST_ACCCNT_READ_DIRECTION                   (4U)

#define BSP_MST_ACCCNT_REG_BSP_MST_ACCCNT_DMAC0         (R_SYSC->SYS_MSTACCCTL0)
#define BSP_MST_ACCCNT_POS_BSP_MST_ACCCNT_DMAC0         (R_SYSC_SYS_MSTACCCTL0_SXMDMC_AWPU_Pos)
#define BSP_MST_ACCCNT_REG_BSP_MST_ACCCNT_DMAC1         (R_SYSC->SYS_MSTACCCTL0)
#define BSP_MST_ACCCNT_POS_BSP_MST_ACCCNT_DMAC1         (R_SYSC_SYS_MSTACCCTL0_SXADMC00_AWPU_Pos)
#define BSP_MST_ACCCNT_REG_BSP_MST_ACCCNT_DMAC2         (R_SYSC->SYS_MSTACCCTL0)
#define BSP_MST_ACCCNT_POS_BSP_MST_ACCCNT_DMAC2         (R_SYSC_SYS_MSTACCCTL0_SXADMC1_AWPU_Pos)
#define BSP_MST_ACCCNT_REG_BSP_MST_ACCCNT_DMAC3         (R_SYSC->SYS_MSTACCCTL0)
#define BSP_MST_ACCCNT_POS_BSP_MST_ACCCNT_DMAC3         (R_SYSC_SYS_MSTACCCTL0_SXRDMC0_AWPU_Pos)
#define BSP_MST_ACCCNT_REG_BSP_MST_ACCCNT_DMAC4         (R_SYSC->SYS_MSTACCCTL1)
#define BSP_MST_ACCCNT_POS_BSP_MST_ACCCNT_DMAC4         (R_SYSC_SYS_MSTACCCTL1_SXMDMC1_AWPU_Pos)

#define BSP_SLV_ACCCNT_LEVEL_NONPRIVILEGED_NONSECURE    (0xF)
#define BSP_SLV_ACCCNT_LEVEL_PRIVILEGED_NONSECURE       (0xB)
#define BSP_SLV_ACCCNT_LEVEL_NONPRIVILEGED_SECURE       (0x3)
#define BSP_SLV_ACCCNT_LEVEL_PRIVILEGED_SECURE          (0x2)

#define BSP_SLV_ACCCNT_WRITE_DIRECTION                  (16U)
#define BSP_SLV_ACCCNT_READ_DIRECTION                   (0U)

#define BSP_SLV_ACCCNT_REG_BSP_SLV_ACCCNT_SRAMM         (R_TZC_SRAMM->REGION_ID_ACCESS_0)
#define BSP_SLV_ACCCNT_REG_BSP_SLV_ACCCNT_SRAMA         (R_TZC_SRAMA->REGION_ID_ACCESS_0)
#define BSP_SLV_ACCCNT_REG_BSP_SLV_ACCCNT_DDR01         (R_TZC_DDR01->REGION_ID_ACCESS_0)
#define BSP_SLV_ACCCNT_REG_BSP_SLV_ACCCNT_DDR11         (R_TZC_DDR11->REGION_ID_ACCESS_0)

/***********************************************************************************************************************
 * Typedef definitions
 **********************************************************************************************************************/

#ifndef BSP_OVERRIDE_BSP_MST_ACC_CONTROL_IP_T

typedef enum e_bsp_mst_acccnt
{
    BSP_MST_ACCCNT_DMAC0,
    BSP_MST_ACCCNT_DMAC1,
    BSP_MST_ACCCNT_DMAC2,
    BSP_MST_ACCCNT_DMAC3,
    BSP_MST_ACCCNT_DMAC4
} bsp_mst_acccnt_t;

#endif

#ifndef BSP_OVERRIDE_BSP_SLV_ACC_CONTROL_IP_T

typedef enum e_bsp_slv_acccnt
{
    BSP_SLV_ACCCNT_SRAMM,
    BSP_SLV_ACCCNT_SRAMA,
    BSP_SLV_ACCCNT_DDR01,
    BSP_SLV_ACCCNT_DDR11
} bsp_slv_acccnt_t;

#endif

#endif

/***********************************************************************************************************************
 * Exported global variables
 **********************************************************************************************************************/
void R_BSP_SecurityInit(void);

/***********************************************************************************************************************
 * Exported global functions (to be accessed by other files)
 **********************************************************************************************************************/

/** Common macro for FSP header files. There is also a corresponding FSP_HEADER macro at the top of this file. */
FSP_FOOTER

#endif                                 /* BSP_SECURITY_H */
