/*
* Copyright (c) 2020 - 2024 Renesas Electronics Corporation and/or its affiliates
*
* SPDX-License-Identifier: BSD-3-Clause
*/

/***********************************************************************************************************************
 * File Name    : board_init.h
 * Description  : This module calls any initialization code specific to this BSP.
 **********************************************************************************************************************/

/*******************************************************************************************************************//**
 * @ingroup BOARD_RZV2N_EVK
 * @defgroup BOARD_RZV2N_EVK_INIT
 * @brief Board specific code for the RZV2N-EVK Board
 *
 * This include file is specific to the RZV2N-EVK board.
 *
 * @{
 **********************************************************************************************************************/

#ifndef BOARD_INIT_H
#define BOARD_INIT_H

/** Common macro for FSP header files. There is also a corresponding FSP_FOOTER macro at the end of this file. */
FSP_HEADER

/***********************************************************************************************************************
 * Macro definitions
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * Typedef definitions
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * Exported global variables
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * Exported global functions (to be accessed by other files)
 **********************************************************************************************************************/
void bsp_init(void * p_args);

/** Common macro for FSP header files. There is also a corresponding FSP_HEADER macro at the top of this file. */
FSP_FOOTER

#endif                                 /* BOARD_INIT_H */

/** @} (end defgroup BOARD_RZV2N_EVK_INIT) */
