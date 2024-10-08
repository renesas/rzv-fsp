/*
* Copyright (c) 2020 - 2024 Renesas Electronics Corporation and/or its affiliates
*
* SPDX-License-Identifier: BSD-3-Clause
*/

#ifndef FSP_VERSION_H
#define FSP_VERSION_H

/***********************************************************************************************************************
 * Includes
 **********************************************************************************************************************/

/* Includes board and MCU related header files. */
#include "bsp_api.h"

/*******************************************************************************************************************//**
 * @addtogroup RENESAS_COMMON
 * @{
 **********************************************************************************************************************/

/**********************************************************************************************************************
 * Macro definitions
 **********************************************************************************************************************/

/** FSP pack major version. */
#define FSP_VERSION_MAJOR (2U)

/** FSP pack minor version. */
#define FSP_VERSION_MINOR (0U)

/** FSP pack patch version. */
#define FSP_VERSION_PATCH (2U)

/** FSP pack version build number (currently unused). */
#define FSP_VERSION_BUILD           (0U)

/** Public FSP version name. */
#define FSP_VERSION_STRING          ("2.0.2")

/** Unique FSP version ID. */
#define FSP_VERSION_BUILD_STRING    ("Built with RZ/V Flexible Software Package version 2.0.2")

/**********************************************************************************************************************
 * Typedef definitions
 **********************************************************************************************************************/

/** FSP Pack version structure */
typedef union st_fsp_pack_version
{
    /** Version id */
    uint32_t version_id;

    /** Code version parameters, little endian order. */
    struct
    {
        uint8_t build;                 ///< Build version of FSP Pack
        uint8_t patch;                 ///< Patch version of FSP Pack
        uint8_t minor;                 ///< Minor version of FSP Pack
        uint8_t major;                 ///< Major version of FSP Pack
    };
} fsp_pack_version_t;

/** @} */

#endif
