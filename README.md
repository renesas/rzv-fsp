## Overview

Flexible Software Package (FSP) for Renesas RZ/V MPU Series

FSP is the next generation Arm® MPU software package from Renesas, that enables HMI devices and IoT connectivity through production ready peripheral drivers, FreeRTOS, and portable middleware stacks.
FSP includes best-in-class HAL drivers with high performance and low memory footprint. Middleware stacks with FreeRTOS integration are included to ease implementation of complex modules like communication.
The e² studio IDE provides support with intuitive configurators and intelligent code generation to make programming and debugging easier and faster.

FSP uses an open software ecosystem and provides flexibility in using your preferred RTOS, legacy code, and third-party ecosystem solutions.

### Current Release

[FSP v2.0.2](https://github.com/renesas/rzv-fsp/releases/tag/v2.0.2)

### Supported RZ/V MPU Kits

- [RZ/V2L Evaluation Board Kit](https://www.renesas.com/us/en/products/microcontrollers-microprocessors/rz-mpus/rzv2l-evaluation-board-kit-rzv2l-evaluation-board-kit)
- [RZ/V2H Quad-core Vision AI MPU Evaluation Kit](https://www.renesas.com/us/en/products/microcontrollers-microprocessors/rz-mpus/rzv2h-evk-rzv2h-quad-core-vision-ai-mpu-evaluation-kit)

### Supported Software Packaged with FSP

For a list of software modules packaged with FSP, see [Supported Software](SUPPORTED_SOFTWARE.md).

### Product Security Advisories

[Product Security Advisories](https://github.com/renesas/rzv-fsp/issues?q=label%3Aproduct_security_advisory) for FSP and third party software (where available) are tagged with the 'product_security_advisory' label. Please check these issues for information from the respective vendors for affected versions and a recommended workaround or patch upgrade.

### Known Issues

[Visit GitHub Issues for this project.](https://github.com/renesas/rzv-fsp/issues)

[Critical issues](https://github.com/renesas/rzv-fsp/issues?q=label%3Acritical+is%3Aclosed) that cause an MPU to operate out of the hardware manual documented specifications are tagged with the 'critical' label. Please check critical issues before going to production for a workaround or recommended patch upgrade.

### Setup Instructions

#### For existing users that are using FSP with e² studio

- FSP versions of 2.0.0 and later require a minimum e² studio version of 2024-07.

If you have already installed a previous FSP release that included e² studio then you can download the packs separately. These are available for download under the Assets section for each release. There is a zipped version, RZV_FSP_Packs_\<version\>.zip, and an installer version, RZV_FSP_Packs_\<version\>.exe.

#### For new users that are using FSP with e² studio

1.      Download the FSP with e² studio Installer from the Assets section of the [current release](https://github.com/renesas/rzv-fsp/releases/tag/v2.0.2).
2.      Run the installer. This will install the e² studio tool, FSP packs, GCC toolchain and other tools required to use this software. No additional installations are required.

<!--
#### If using RA Smart Configurator (RASC) with IAR Embedded Workbench or Keil MDK ####

1.  See [RA SC User Guide for MDK and IAR](https://renesas.github.io/fsp/_s_t_a_r_t__d_e_v.html#RASC-MDK-IAR-user-guide).
-->

### Starting Development

1. Open e² studio and click File > New > C/C++ Project.
2. In the window that pops up, choose Renesas RZ/V in the left pane.

### Related Links

FSP Releases :  https://github.com/renesas/rzv-fsp/releases

FSP Documentation : https://renesas.github.io/rzv-fsp

FSP Webpage: www.renesas.com/rzv/fsp

RZ/V2L Product Information : www.renesas.com/rzv2l

RZ/V2H Product Information : www.renesas.com/rzv2h

e² studio : www.renesas.com/e2studio

Example Projects : www.renesas.com/rzv/example-projects

Knowledge Base: https://en-support.renesas.com/knowledgeBase/category/31087

Support: www.renesas.com/support
