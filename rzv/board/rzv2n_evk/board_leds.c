/*
* Copyright (c) 2020 - 2024 Renesas Electronics Corporation and/or its affiliates
*
* SPDX-License-Identifier: BSD-3-Clause
*/

/***********************************************************************************************************************
 * File Name    : board_leds.c
 * Description  : This module has information about the LEDs on this board.
 **********************************************************************************************************************/

/*******************************************************************************************************************//**
 * @addtogroup BOARD_RZV2N_EVK_LEDS
 *
 * @{
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * Includes
 **********************************************************************************************************************/
#include "bsp_api.h"
#if defined(BOARD_RZV2N_EVK)

/***********************************************************************************************************************
 * Macro definitions
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * Typedef definitions
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * Private global variables and functions
 *********************************************************************************************************************/

/** An array of monitor LEDs on the board. */
static const uint16_t g_bsp_prv_leds[] =
{
    (uint16_t) BSP_IO_PORT_00_PIN_00,  ///< LD5 : P00
    (uint16_t) BSP_IO_PORT_00_PIN_01,  ///< LD6 : P01
};

/***********************************************************************************************************************
 * Exported global variables (to be accessed by other files)
 **********************************************************************************************************************/

/** Structure with LED information for this board. */

const bsp_leds_t g_bsp_leds =
{
    .led_count = (uint16_t) ((sizeof(g_bsp_prv_leds) / sizeof(g_bsp_prv_leds[0]))),
    .p_leds    = &g_bsp_prv_leds[0]
};

/***********************************************************************************************************************
 * Exported global variables (to be accessed by other files)
 **********************************************************************************************************************/

#endif                                 /* BOARD_RZV2N_EVK */

/** @} (end addtogroup BOARD_RZV2N_EVK_LEDS) */
