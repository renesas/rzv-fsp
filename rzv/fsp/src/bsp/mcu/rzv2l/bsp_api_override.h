/*
* Copyright (c) 2020 - 2024 Renesas Electronics Corporation and/or its affiliates
*
* SPDX-License-Identifier: BSD-3-Clause
*/

/*******************************************************************************************************************//**
 * @addtogroup BSP_MCU_RZV2L
 * @{
 **********************************************************************************************************************/

/** @} (end addtogroup BSP_MCU_RZV2L) */

#ifndef BSP_API_OVERRIDE_H
#define BSP_API_OVERRIDE_H

/***********************************************************************************************************************
 * Includes   <System Includes> , "Project Includes"
 **********************************************************************************************************************/

/* BSP Common Includes. */
#include "../all/cm/bsp_common.h"

/* BSP MCU Specific Includes. */
#include "../all/bsp_io.h"
#include "../all/bsp_group_irq.h"
#include "../all/bsp_clocks.h"
#include "../all/bsp_module_stop.h"
#include "../all/bsp_io_register.h"
#include "../all/cm/bsp_irq.h"
#include "../all/cm/bsp_security.h"

/* Factory MCU information. */
#include "../../../../inc/fsp_features.h"

/* BSP Common Includes (Other than bsp_common.h) */
#include "../all/bsp_delay.h"
#include "../all/bsp_mcu_api.h"

#endif
