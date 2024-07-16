/*
* Copyright (c) 2020 - 2024 Renesas Electronics Corporation and/or its affiliates
*
* SPDX-License-Identifier: BSD-3-Clause
*/

/***********************************************************************************************************************
 * Includes   <System Includes> , "Project Includes"
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * Macro definitions
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * Typedef definitions
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * Private function prototypes
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * Exported global variables (to be accessed by other files)
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * Private global variables and functions
 **********************************************************************************************************************/

    .global bsp_mpu_init
    .global bsp_mpu_enable

    .type bsp_mpu_init, "function"

bsp_mpu_init:

    mcr  p15, #0, r0, c6, c2, #0               /* Set RGNR */
    isb                                        /* Ensuring memory access complete */
    mcr  p15, #0, r1, c6, c1, #0               /* Write Rt to DRBAR */
    dsb                                        /* Ensuring memory access complete */
    mcr  p15, #0, r3, c6, c1, #4               /* Write Rt to DRACR */
    dsb                                        /* Ensuring memory access complete */
    mcr  p15, #0, r2, c6, c1, #2               /* Write Rt to DRSR */
    dsb                                        /* Ensuring memory access complete */
    bx  lr

    .type bsp_mpu_enable, "function"

bsp_mpu_enable:

    mov  r0, #1                               /* Set SCTLR.M bit to 1 */
    mrc  p15, #0, r1, c1, c0, #0
    orr  r1, r1, r0
    dsb                                       /* Ensuring memory access complete */
    mcr  p15, #0, r1, c1, c0, #0
    isb                                       /* Ensuring Context-changing */
    bx  lr