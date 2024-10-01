/*
* Copyright (c) 2020 - 2024 Renesas Electronics Corporation and/or its affiliates
*
* SPDX-License-Identifier: BSD-3-Clause
*/

/**********************************************************************************************************************
 * File Name    : i3c_b_iobitmask.h
 * Version      : 1.00
 * Description  : IO bit mask file for i3c.
 *********************************************************************************************************************/

#ifndef I3C_B_IOBITMASK_H
#define I3C_B_IOBITMASK_H

#define R_I3C_B_PRTS_PRTMD_Msk            (0x00000001UL)
#define R_I3C_B_PRTS_PRTMD_Pos            (0UL)
#define R_I3C_B_BCTL_INCBA_Msk            (0x00000001UL)
#define R_I3C_B_BCTL_INCBA_Pos            (0UL)
#define R_I3C_B_BCTL_HJACKCTL_Msk         (0x00000100UL)
#define R_I3C_B_BCTL_HJACKCTL_Pos         (8UL)
#define R_I3C_B_BCTL_ABT_Msk              (0x20000000UL)
#define R_I3C_B_BCTL_ABT_Pos              (29UL)
#define R_I3C_B_BCTL_RSM_Msk              (0x40000000UL)
#define R_I3C_B_BCTL_RSM_Pos              (30UL)
#define R_I3C_B_BCTL_BUSE_Msk             (0x80000000UL)
#define R_I3C_B_BCTL_BUSE_Pos             (31UL)
#define R_I3C_B_MSDVAD_MDYAD_Msk          (0x007F0000UL)
#define R_I3C_B_MSDVAD_MDYAD_Pos          (16UL)
#define R_I3C_B_MSDVAD_MDYADV_Msk         (0x80000000UL)
#define R_I3C_B_MSDVAD_MDYADV_Pos         (31UL)
#define R_I3C_B_RSTCTL_RI3C_BRST_Msk      (0x00000001UL)
#define R_I3C_B_RSTCTL_RI3C_BRST_Pos      (0UL)
#define R_I3C_B_RSTCTL_CMDQRST_Msk        (0x00000002UL)
#define R_I3C_B_RSTCTL_CMDQRST_Pos        (1UL)
#define R_I3C_B_RSTCTL_RSPQRST_Msk        (0x00000004UL)
#define R_I3C_B_RSTCTL_RSPQRST_Pos        (2UL)
#define R_I3C_B_RSTCTL_TDBRST_Msk         (0x00000008UL)
#define R_I3C_B_RSTCTL_TDBRST_Pos         (3UL)
#define R_I3C_B_RSTCTL_RDBRST_Msk         (0x00000010UL)
#define R_I3C_B_RSTCTL_RDBRST_Pos         (4UL)
#define R_I3C_B_RSTCTL_IBIQRST_Msk        (0x00000020UL)
#define R_I3C_B_RSTCTL_IBIQRST_Pos        (5UL)
#define R_I3C_B_RSTCTL_RSQRST_Msk         (0x00000040UL)
#define R_I3C_B_RSTCTL_RSQRST_Pos         (6UL)
#define R_I3C_B_RSTCTL_INTLRST_Msk        (0x00010000UL)
#define R_I3C_B_RSTCTL_INTLRST_Pos        (16UL)
#define R_I3C_B_PRSST_CRMS_Msk            (0x00000004UL)
#define R_I3C_B_PRSST_CRMS_Pos            (2UL)
#define R_I3C_B_PRSST_TRMD_Msk            (0x00000010UL)
#define R_I3C_B_PRSST_TRMD_Pos            (4UL)
#define R_I3C_B_PRSST_PRSSTWP_Msk         (0x00000080UL)
#define R_I3C_B_PRSST_PRSSTWP_Pos         (7UL)
#define R_I3C_B_INST_INEF_Msk             (0x00000400UL)
#define R_I3C_B_INST_INEF_Pos             (10UL)
#define R_I3C_B_INSTE_INEE_Msk            (0x00000400UL)
#define R_I3C_B_INSTE_INEE_Pos            (10UL)
#define R_I3C_B_INIE_INEIE_Msk            (0x00000400UL)
#define R_I3C_B_INIE_INEIE_Pos            (10UL)
#define R_I3C_B_INSTFC_INEFC_Msk          (0x00000400UL)
#define R_I3C_B_INSTFC_INEFC_Pos          (10UL)
#define R_I3C_B_DVCT_IDX_Msk              (0x00F80000UL)
#define R_I3C_B_DVCT_IDX_Pos              (19UL)
#define R_I3C_B_IBINCTL_NRHJCTL_Msk       (0x00000001UL)
#define R_I3C_B_IBINCTL_NRHJCTL_Pos       (0UL)
#define R_I3C_B_IBINCTL_NRMRCTL_Msk       (0x00000002UL)
#define R_I3C_B_IBINCTL_NRMRCTL_Pos       (1UL)
#define R_I3C_B_IBINCTL_NRSIRCTL_Msk      (0x00000008UL)
#define R_I3C_B_IBINCTL_NRSIRCTL_Pos      (3UL)
#define R_I3C_B_BFCTL_MALE_Msk            (0x00000001UL)
#define R_I3C_B_BFCTL_MALE_Pos            (0UL)
#define R_I3C_B_BFCTL_NALE_Msk            (0x00000002UL)
#define R_I3C_B_BFCTL_NALE_Pos            (1UL)
#define R_I3C_B_BFCTL_SALE_Msk            (0x00000004UL)
#define R_I3C_B_BFCTL_SALE_Pos            (2UL)
#define R_I3C_B_BFCTL_SCSYNE_Msk          (0x00000100UL)
#define R_I3C_B_BFCTL_SCSYNE_Pos          (8UL)
#define R_I3C_B_BFCTL_SMBS_Msk            (0x00001000UL)
#define R_I3C_B_BFCTL_SMBS_Pos            (12UL)
#define R_I3C_B_BFCTL_FMPE_Msk            (0x00004000UL)
#define R_I3C_B_BFCTL_FMPE_Pos            (14UL)
#define R_I3C_B_BFCTL_HSME_Msk            (0x00008000UL)
#define R_I3C_B_BFCTL_HSME_Pos            (15UL)
#define R_I3C_B_SVCTL_GCAE_Msk            (0x00000001UL)
#define R_I3C_B_SVCTL_GCAE_Pos            (0UL)
#define R_I3C_B_SVCTL_HSMCE_Msk           (0x00000020UL)
#define R_I3C_B_SVCTL_HSMCE_Pos           (5UL)
#define R_I3C_B_SVCTL_DVIDE_Msk           (0x00000040UL)
#define R_I3C_B_SVCTL_DVIDE_Pos           (6UL)
#define R_I3C_B_SVCTL_HOAE_Msk            (0x00008000UL)
#define R_I3C_B_SVCTL_HOAE_Pos            (15UL)
#define R_I3C_B_SVCTL_SVAE0_Msk           (0x00010000UL)
#define R_I3C_B_SVCTL_SVAE0_Pos           (16UL)
#define R_I3C_B_SVCTL_SVAE1_Msk           (0x00020000UL)
#define R_I3C_B_SVCTL_SVAE1_Pos           (17UL)
#define R_I3C_B_SVCTL_SVAE2_Msk           (0x00040000UL)
#define R_I3C_B_SVCTL_SVAE2_Pos           (18UL)
#define R_I3C_B_REFCKCTL_IREFCKS_Msk      (0x00000007UL)
#define R_I3C_B_REFCKCTL_IREFCKS_Pos      (0UL)
#define R_I3C_B_STDBR_SBRLO_Msk           (0x000000FFUL)
#define R_I3C_B_STDBR_SBRLO_Pos           (0UL)
#define R_I3C_B_STDBR_SBRHO_Msk           (0x0000FF00UL)
#define R_I3C_B_STDBR_SBRHO_Pos           (8UL)
#define R_I3C_B_STDBR_SBRLP_Msk           (0x003F0000UL)
#define R_I3C_B_STDBR_SBRLP_Pos           (16UL)
#define R_I3C_B_STDBR_SBRHP_Msk           (0x3F000000UL)
#define R_I3C_B_STDBR_SBRHP_Pos           (24UL)
#define R_I3C_B_STDBR_DSBRPO_Msk          (0x80000000UL)
#define R_I3C_B_STDBR_DSBRPO_Pos          (31UL)
#define R_I3C_B_EXTBR_EBRLO_Msk           (0x000000FFUL)
#define R_I3C_B_EXTBR_EBRLO_Pos           (0UL)
#define R_I3C_B_EXTBR_EBRHO_Msk           (0x0000FF00UL)
#define R_I3C_B_EXTBR_EBRHO_Pos           (8UL)
#define R_I3C_B_EXTBR_EBRLP_Msk           (0x003F0000UL)
#define R_I3C_B_EXTBR_EBRLP_Pos           (16UL)
#define R_I3C_B_EXTBR_EBRHP_Msk           (0x3F000000UL)
#define R_I3C_B_EXTBR_EBRHP_Pos           (24UL)
#define R_I3C_B_BFRECDT_FRECYC_Msk        (0x000001FFUL)
#define R_I3C_B_BFRECDT_FRECYC_Pos        (0UL)
#define R_I3C_B_BAVLCDT_AVLCYC_Msk        (0x000001FFUL)
#define R_I3C_B_BAVLCDT_AVLCYC_Pos        (0UL)
#define R_I3C_B_BIDLCDT_IDLCYC_Msk        (0x0003FFFFUL)
#define R_I3C_B_BIDLCDT_IDLCYC_Pos        (0UL)
#define R_I3C_B_OUTCTL_SDOC_Msk           (0x00000001UL)
#define R_I3C_B_OUTCTL_SDOC_Pos           (0UL)
#define R_I3C_B_OUTCTL_SCOC_Msk           (0x00000002UL)
#define R_I3C_B_OUTCTL_SCOC_Pos           (1UL)
#define R_I3C_B_OUTCTL_SOCWP_Msk          (0x00000004UL)
#define R_I3C_B_OUTCTL_SOCWP_Pos          (2UL)
#define R_I3C_B_OUTCTL_EXCYC_Msk          (0x00000010UL)
#define R_I3C_B_OUTCTL_EXCYC_Pos          (4UL)
#define R_I3C_B_OUTCTL_SDOD_Msk           (0x00000700UL)
#define R_I3C_B_OUTCTL_SDOD_Pos           (8UL)
#define R_I3C_B_OUTCTL_SDODCS_Msk         (0x00008000UL)
#define R_I3C_B_OUTCTL_SDODCS_Pos         (15UL)
#define R_I3C_B_INCTL_DNFS_Msk            (0x0000000FUL)
#define R_I3C_B_INCTL_DNFS_Pos            (0UL)
#define R_I3C_B_INCTL_DNFE_Msk            (0x00000010UL)
#define R_I3C_B_INCTL_DNFE_Pos            (4UL)
#define R_I3C_B_TMOCTL_TODTS_Msk          (0x00000003UL)
#define R_I3C_B_TMOCTL_TODTS_Pos          (0UL)
#define R_I3C_B_TMOCTL_TOLCTL_Msk         (0x00000010UL)
#define R_I3C_B_TMOCTL_TOLCTL_Pos         (4UL)
#define R_I3C_B_TMOCTL_TOHCTL_Msk         (0x00000020UL)
#define R_I3C_B_TMOCTL_TOHCTL_Pos         (5UL)
#define R_I3C_B_TMOCTL_TOMDS_Msk          (0x000000C0UL)
#define R_I3C_B_TMOCTL_TOMDS_Pos          (6UL)
#define R_I3C_B_WUCTL_WUACKS_Msk          (0x00000001UL)
#define R_I3C_B_WUCTL_WUACKS_Pos          (0UL)
#define R_I3C_B_WUCTL_WUANFS_Msk          (0x00000010UL)
#define R_I3C_B_WUCTL_WUANFS_Pos          (4UL)
#define R_I3C_B_WUCTL_WUFSYNE_Msk         (0x00000040UL)
#define R_I3C_B_WUCTL_WUFSYNE_Pos         (6UL)
#define R_I3C_B_WUCTL_WUFE_Msk            (0x00000080UL)
#define R_I3C_B_WUCTL_WUFE_Pos            (7UL)
#define R_I3C_B_ACKCTL_ACKR_Msk           (0x00000001UL)
#define R_I3C_B_ACKCTL_ACKR_Pos           (0UL)
#define R_I3C_B_ACKCTL_ACKT_Msk           (0x00000002UL)
#define R_I3C_B_ACKCTL_ACKT_Pos           (1UL)
#define R_I3C_B_ACKCTL_ACKTWP_Msk         (0x00000004UL)
#define R_I3C_B_ACKCTL_ACKTWP_Pos         (2UL)
#define R_I3C_B_SCSTRCTL_ACKTWE_Msk       (0x00000001UL)
#define R_I3C_B_SCSTRCTL_ACKTWE_Pos       (0UL)
#define R_I3C_B_SCSTRCTL_RWE_Msk          (0x00000002UL)
#define R_I3C_B_SCSTRCTL_RWE_Pos          (1UL)
#define R_I3C_B_SCSTLCTL_STLCYC_Msk       (0x0000FFFFUL)
#define R_I3C_B_SCSTLCTL_STLCYC_Pos       (0UL)
#define R_I3C_B_SCSTLCTL_AAPE_Msk         (0x10000000UL)
#define R_I3C_B_SCSTLCTL_AAPE_Pos         (28UL)
#define R_I3C_B_SCSTLCTL_PARPE_Msk        (0x40000000UL)
#define R_I3C_B_SCSTLCTL_PARPE_Pos        (30UL)
#define R_I3C_B_SCSTLCTL_ACKPE_Msk        (0x80000000UL)
#define R_I3C_B_SCSTLCTL_ACKPE_Pos        (31UL)
#define R_I3C_B_SVTDLG0_STDLG_Msk         (0xFFFF0000UL)
#define R_I3C_B_SVTDLG0_STDLG_Pos         (16UL)
#define R_I3C_B_STCTL_STOE_Msk            (0x00000001UL)
#define R_I3C_B_STCTL_STOE_Pos            (0UL)
#define R_I3C_B_ATCTL_MREFOE_Msk          (0x00000002UL)
#define R_I3C_B_ATCTL_MREFOE_Pos          (1UL)
#define R_I3C_B_ATCTL_AMEOE_Msk           (0x00000004UL)
#define R_I3C_B_ATCTL_AMEOE_Pos           (2UL)
#define R_I3C_B_ATCTL_CDIV_Msk            (0x0000FF00UL)
#define R_I3C_B_ATCTL_CDIV_Pos            (8UL)
#define R_I3C_B_ATTRG_ATSTRG_Msk          (0x00000001UL)
#define R_I3C_B_ATTRG_ATSTRG_Pos          (0UL)
#define R_I3C_B_ATCCNTE_ATCE_Msk          (0x00000001UL)
#define R_I3C_B_ATCCNTE_ATCE_Pos          (0UL)
#define R_I3C_B_CNDCTL_STCND_Msk          (0x00000001UL)
#define R_I3C_B_CNDCTL_STCND_Pos          (0UL)
#define R_I3C_B_CNDCTL_SRCND_Msk          (0x00000002UL)
#define R_I3C_B_CNDCTL_SRCND_Pos          (1UL)
#define R_I3C_B_CNDCTL_SPCND_Msk          (0x00000004UL)
#define R_I3C_B_CNDCTL_SPCND_Pos          (2UL)
#define R_I3C_B_NCMDQP_NCMDQP_Msk         (0xFFFFFFFFUL)
#define R_I3C_B_NCMDQP_NCMDQP_Pos         (0UL)
#define R_I3C_B_NRSPQP_NRSPQP_Msk         (0xFFFFFFFFUL)
#define R_I3C_B_NRSPQP_NRSPQP_Pos         (0UL)
#define R_I3C_B_NTDTBP0_NTDTBP0_Msk       (0xFFFFFFFFUL)
#define R_I3C_B_NTDTBP0_NTDTBP0_Pos       (0UL)
#define R_I3C_B_NTDTBP0_BY_NTDTBP0_Msk    (0xFFUL)
#define R_I3C_B_NTDTBP0_BY_NTDTBP0_Pos    (0UL)
#define R_I3C_B_NIBIQP_NIBIQP_Msk         (0xFFFFFFFFUL)
#define R_I3C_B_NIBIQP_NIBIQP_Pos         (0UL)
#define R_I3C_B_NRSQP_NRSQP_Msk           (0xFFFFFFFFUL)
#define R_I3C_B_NRSQP_NRSQP_Pos           (0UL)
#define R_I3C_B_NQTHCTL_CMDQTH_Msk        (0x00000003UL)
#define R_I3C_B_NQTHCTL_CMDQTH_Pos        (0UL)
#define R_I3C_B_NQTHCTL_RSPQTH_Msk        (0x00000300UL)
#define R_I3C_B_NQTHCTL_RSPQTH_Pos        (8UL)
#define R_I3C_B_NQTHCTL_IBIDSSZ_Msk       (0x00FF0000UL)
#define R_I3C_B_NQTHCTL_IBIDSSZ_Pos       (16UL)
#define R_I3C_B_NQTHCTL_IBIQTH_Msk        (0x07000000UL)
#define R_I3C_B_NQTHCTL_IBIQTH_Pos        (24UL)
#define R_I3C_B_NTBTHCTL0_TXDBTH_Msk      (0x00000007UL)
#define R_I3C_B_NTBTHCTL0_TXDBTH_Pos      (0UL)
#define R_I3C_B_NTBTHCTL0_RXDBTH_Msk      (0x00000700UL)
#define R_I3C_B_NTBTHCTL0_RXDBTH_Pos      (8UL)
#define R_I3C_B_NTBTHCTL0_TXSTTH_Msk      (0x00070000UL)
#define R_I3C_B_NTBTHCTL0_TXSTTH_Pos      (16UL)
#define R_I3C_B_NTBTHCTL0_RXSTTH_Msk      (0x07000000UL)
#define R_I3C_B_NTBTHCTL0_RXSTTH_Pos      (24UL)
#define R_I3C_B_NRQTHCTL_RSQTH_Msk        (0x00000001UL)
#define R_I3C_B_NRQTHCTL_RSQTH_Pos        (0UL)
#define R_I3C_B_BST_STCNDDF_Msk           (0x00000001UL)
#define R_I3C_B_BST_STCNDDF_Pos           (0UL)
#define R_I3C_B_BST_SPCNDDF_Msk           (0x00000002UL)
#define R_I3C_B_BST_SPCNDDF_Pos           (1UL)
#define R_I3C_B_BST_NACKDF_Msk            (0x00000010UL)
#define R_I3C_B_BST_NACKDF_Pos            (4UL)
#define R_I3C_B_BST_TENDF_Msk             (0x00000100UL)
#define R_I3C_B_BST_TENDF_Pos             (8UL)
#define R_I3C_B_BST_ALF_Msk               (0x00010000UL)
#define R_I3C_B_BST_ALF_Pos               (16UL)
#define R_I3C_B_BST_TODF_Msk              (0x00100000UL)
#define R_I3C_B_BST_TODF_Pos              (20UL)
#define R_I3C_B_BST_WUCNDDF_Msk           (0x01000000UL)
#define R_I3C_B_BST_WUCNDDF_Pos           (24UL)
#define R_I3C_B_BSTE_STCNDDE_Msk          (0x00000001UL)
#define R_I3C_B_BSTE_STCNDDE_Pos          (0UL)
#define R_I3C_B_BSTE_SPCNDDE_Msk          (0x00000002UL)
#define R_I3C_B_BSTE_SPCNDDE_Pos          (1UL)
#define R_I3C_B_BSTE_NACKDE_Msk           (0x00000010UL)
#define R_I3C_B_BSTE_NACKDE_Pos           (4UL)
#define R_I3C_B_BSTE_TENDE_Msk            (0x00000100UL)
#define R_I3C_B_BSTE_TENDE_Pos            (8UL)
#define R_I3C_B_BSTE_ALE_Msk              (0x00010000UL)
#define R_I3C_B_BSTE_ALE_Pos              (16UL)
#define R_I3C_B_BSTE_TODE_Msk             (0x00100000UL)
#define R_I3C_B_BSTE_TODE_Pos             (20UL)
#define R_I3C_B_BSTE_WUCNDDE_Msk          (0x01000000UL)
#define R_I3C_B_BSTE_WUCNDDE_Pos          (24UL)
#define R_I3C_B_BIE_STCNDDIE_Msk          (0x00000001UL)
#define R_I3C_B_BIE_STCNDDIE_Pos          (0UL)
#define R_I3C_B_BIE_SPCNDDIE_Msk          (0x00000002UL)
#define R_I3C_B_BIE_SPCNDDIE_Pos          (1UL)
#define R_I3C_B_BIE_NACKDIE_Msk           (0x00000010UL)
#define R_I3C_B_BIE_NACKDIE_Pos           (4UL)
#define R_I3C_B_BIE_TENDIE_Msk            (0x00000100UL)
#define R_I3C_B_BIE_TENDIE_Pos            (8UL)
#define R_I3C_B_BIE_ALIE_Msk              (0x00010000UL)
#define R_I3C_B_BIE_ALIE_Pos              (16UL)
#define R_I3C_B_BIE_TODIE_Msk             (0x00100000UL)
#define R_I3C_B_BIE_TODIE_Pos             (20UL)
#define R_I3C_B_BIE_WUCNDDIE_Msk          (0x01000000UL)
#define R_I3C_B_BIE_WUCNDDIE_Pos          (24UL)
#define R_I3C_B_BSTFC_STCNDDFC_Msk        (0x00000001UL)
#define R_I3C_B_BSTFC_STCNDDFC_Pos        (0UL)
#define R_I3C_B_BSTFC_SPCNDDFC_Msk        (0x00000002UL)
#define R_I3C_B_BSTFC_SPCNDDFC_Pos        (1UL)
#define R_I3C_B_BSTFC_NACKDFC_Msk         (0x00000010UL)
#define R_I3C_B_BSTFC_NACKDFC_Pos         (4UL)
#define R_I3C_B_BSTFC_TENDFC_Msk          (0x00000100UL)
#define R_I3C_B_BSTFC_TENDFC_Pos          (8UL)
#define R_I3C_B_BSTFC_ALFC_Msk            (0x00010000UL)
#define R_I3C_B_BSTFC_ALFC_Pos            (16UL)
#define R_I3C_B_BSTFC_TODFC_Msk           (0x00100000UL)
#define R_I3C_B_BSTFC_TODFC_Pos           (20UL)
#define R_I3C_B_BSTFC_WUCNDDFC_Msk        (0x01000000UL)
#define R_I3C_B_BSTFC_WUCNDDFC_Pos        (24UL)
#define R_I3C_B_NTST_TDBEF0_Msk           (0x00000001UL)
#define R_I3C_B_NTST_TDBEF0_Pos           (0UL)
#define R_I3C_B_NTST_RDBFF0_Msk           (0x00000002UL)
#define R_I3C_B_NTST_RDBFF0_Pos           (1UL)
#define R_I3C_B_NTST_IBIQEFF_Msk          (0x00000004UL)
#define R_I3C_B_NTST_IBIQEFF_Pos          (2UL)
#define R_I3C_B_NTST_CMDQEF_Msk           (0x00000008UL)
#define R_I3C_B_NTST_CMDQEF_Pos           (3UL)
#define R_I3C_B_NTST_RSPQFF_Msk           (0x00000010UL)
#define R_I3C_B_NTST_RSPQFF_Pos           (4UL)
#define R_I3C_B_NTST_TABTF_Msk            (0x00000020UL)
#define R_I3C_B_NTST_TABTF_Pos            (5UL)
#define R_I3C_B_NTST_TEF_Msk              (0x00000200UL)
#define R_I3C_B_NTST_TEF_Pos              (9UL)
#define R_I3C_B_NTST_RSQFF_Msk            (0x00100000UL)
#define R_I3C_B_NTST_RSQFF_Pos            (20UL)
#define R_I3C_B_NTSTE_TDBEE0_Msk          (0x00000001UL)
#define R_I3C_B_NTSTE_TDBEE0_Pos          (0UL)
#define R_I3C_B_NTSTE_RDBFE0_Msk          (0x00000002UL)
#define R_I3C_B_NTSTE_RDBFE0_Pos          (1UL)
#define R_I3C_B_NTSTE_IBIQEFE_Msk         (0x00000004UL)
#define R_I3C_B_NTSTE_IBIQEFE_Pos         (2UL)
#define R_I3C_B_NTSTE_CMDQEE_Msk          (0x00000008UL)
#define R_I3C_B_NTSTE_CMDQEE_Pos          (3UL)
#define R_I3C_B_NTSTE_RSPQFE_Msk          (0x00000010UL)
#define R_I3C_B_NTSTE_RSPQFE_Pos          (4UL)
#define R_I3C_B_NTSTE_TABTE_Msk           (0x00000020UL)
#define R_I3C_B_NTSTE_TABTE_Pos           (5UL)
#define R_I3C_B_NTSTE_TEE_Msk             (0x00000200UL)
#define R_I3C_B_NTSTE_TEE_Pos             (9UL)
#define R_I3C_B_NTSTE_RSQFE_Msk           (0x00100000UL)
#define R_I3C_B_NTSTE_RSQFE_Pos           (20UL)
#define R_I3C_B_NTIE_TDBEIE0_Msk          (0x00000001UL)
#define R_I3C_B_NTIE_TDBEIE0_Pos          (0UL)
#define R_I3C_B_NTIE_RDBFIE0_Msk          (0x00000002UL)
#define R_I3C_B_NTIE_RDBFIE0_Pos          (1UL)
#define R_I3C_B_NTIE_IBIQEFIE_Msk         (0x00000004UL)
#define R_I3C_B_NTIE_IBIQEFIE_Pos         (2UL)
#define R_I3C_B_NTIE_CMDQEIE_Msk          (0x00000008UL)
#define R_I3C_B_NTIE_CMDQEIE_Pos          (3UL)
#define R_I3C_B_NTIE_RSPQFIE_Msk          (0x00000010UL)
#define R_I3C_B_NTIE_RSPQFIE_Pos          (4UL)
#define R_I3C_B_NTIE_TABTIE_Msk           (0x00000020UL)
#define R_I3C_B_NTIE_TABTIE_Pos           (5UL)
#define R_I3C_B_NTIE_TEIE_Msk             (0x00000200UL)
#define R_I3C_B_NTIE_TEIE_Pos             (9UL)
#define R_I3C_B_NTIE_RSQFIE_Msk           (0x00100000UL)
#define R_I3C_B_NTIE_RSQFIE_Pos           (20UL)
#define R_I3C_B_NTSTFC_TDBEFC0_Msk        (0x00000001UL)
#define R_I3C_B_NTSTFC_TDBEFC0_Pos        (0UL)
#define R_I3C_B_NTSTFC_RDBFFC0_Msk        (0x00000002UL)
#define R_I3C_B_NTSTFC_RDBFFC0_Pos        (1UL)
#define R_I3C_B_NTSTFC_IBIQEFFC_Msk       (0x00000004UL)
#define R_I3C_B_NTSTFC_IBIQEFFC_Pos       (2UL)
#define R_I3C_B_NTSTFC_CMDQEFC_Msk        (0x00000008UL)
#define R_I3C_B_NTSTFC_CMDQEFC_Pos        (3UL)
#define R_I3C_B_NTSTFC_RSPQFFC_Msk        (0x00000010UL)
#define R_I3C_B_NTSTFC_RSPQFFC_Pos        (4UL)
#define R_I3C_B_NTSTFC_TABTFC_Msk         (0x00000020UL)
#define R_I3C_B_NTSTFC_TABTFC_Pos         (5UL)
#define R_I3C_B_NTSTFC_TEFC_Msk           (0x00000200UL)
#define R_I3C_B_NTSTFC_TEFC_Pos           (9UL)
#define R_I3C_B_NTSTFC_RSQFFC_Msk         (0x00100000UL)
#define R_I3C_B_NTSTFC_RSQFFC_Pos         (20UL)
#define R_I3C_B_BCST_BFREF_Msk            (0x00000001UL)
#define R_I3C_B_BCST_BFREF_Pos            (0UL)
#define R_I3C_B_BCST_BAVLF_Msk            (0x00000002UL)
#define R_I3C_B_BCST_BAVLF_Pos            (1UL)
#define R_I3C_B_BCST_BIDLF_Msk            (0x00000004UL)
#define R_I3C_B_BCST_BIDLF_Pos            (2UL)
#define R_I3C_B_SVST_GCAF_Msk             (0x00000001UL)
#define R_I3C_B_SVST_GCAF_Pos             (0UL)
#define R_I3C_B_SVST_HSMCF_Msk            (0x00000020UL)
#define R_I3C_B_SVST_HSMCF_Pos            (5UL)
#define R_I3C_B_SVST_DVIDF_Msk            (0x00000040UL)
#define R_I3C_B_SVST_DVIDF_Pos            (6UL)
#define R_I3C_B_SVST_HOAF_Msk             (0x00008000UL)
#define R_I3C_B_SVST_HOAF_Pos             (15UL)
#define R_I3C_B_SVST_SVAF0_Msk            (0x00010000UL)
#define R_I3C_B_SVST_SVAF0_Pos            (16UL)
#define R_I3C_B_SVST_SVAF1_Msk            (0x00020000UL)
#define R_I3C_B_SVST_SVAF1_Pos            (17UL)
#define R_I3C_B_SVST_SVAF2_Msk            (0x00040000UL)
#define R_I3C_B_SVST_SVAF2_Pos            (18UL)
#define R_I3C_B_WUST_WUASYNF_Msk          (0x00000001UL)
#define R_I3C_B_WUST_WUASYNF_Pos          (0UL)
#define R_I3C_B_MRCCPT_MRCCPT_Msk         (0xFFFFFFFFUL)
#define R_I3C_B_MRCCPT_MRCCPT_Pos         (0UL)
#define R_I3C_B_DATBAS0_DVSTAD_Msk        (0x0000007FUL)
#define R_I3C_B_DATBAS0_DVSTAD_Pos        (0UL)
#define R_I3C_B_DATBAS0_DVIBIPL_Msk       (0x00001000UL)
#define R_I3C_B_DATBAS0_DVIBIPL_Pos       (12UL)
#define R_I3C_B_DATBAS0_DVSIRRJ_Msk       (0x00002000UL)
#define R_I3C_B_DATBAS0_DVSIRRJ_Pos       (13UL)
#define R_I3C_B_DATBAS0_DVMRRJ_Msk        (0x00004000UL)
#define R_I3C_B_DATBAS0_DVMRRJ_Pos        (14UL)
#define R_I3C_B_DATBAS0_DVIBITS_Msk       (0x00008000UL)
#define R_I3C_B_DATBAS0_DVIBITS_Pos       (15UL)
#define R_I3C_B_DATBAS0_DVDYAD_Msk        (0x00FF0000UL)
#define R_I3C_B_DATBAS0_DVDYAD_Pos        (16UL)
#define R_I3C_B_DATBAS0_DVNACK_Msk        (0x60000000UL)
#define R_I3C_B_DATBAS0_DVNACK_Pos        (29UL)
#define R_I3C_B_DATBAS0_DVTYP_Msk         (0x80000000UL)
#define R_I3C_B_DATBAS0_DVTYP_Pos         (31UL)
#define R_I3C_B_DATBAS1_DVSTAD_Msk        (0x0000007FUL)
#define R_I3C_B_DATBAS1_DVSTAD_Pos        (0UL)
#define R_I3C_B_DATBAS1_DVIBIPL_Msk       (0x00001000UL)
#define R_I3C_B_DATBAS1_DVIBIPL_Pos       (12UL)
#define R_I3C_B_DATBAS1_DVSIRRJ_Msk       (0x00002000UL)
#define R_I3C_B_DATBAS1_DVSIRRJ_Pos       (13UL)
#define R_I3C_B_DATBAS1_DVMRRJ_Msk        (0x00004000UL)
#define R_I3C_B_DATBAS1_DVMRRJ_Pos        (14UL)
#define R_I3C_B_DATBAS1_DVIBITS_Msk       (0x00008000UL)
#define R_I3C_B_DATBAS1_DVIBITS_Pos       (15UL)
#define R_I3C_B_DATBAS1_DVDYAD_Msk        (0x00FF0000UL)
#define R_I3C_B_DATBAS1_DVDYAD_Pos        (16UL)
#define R_I3C_B_DATBAS1_DVNACK_Msk        (0x60000000UL)
#define R_I3C_B_DATBAS1_DVNACK_Pos        (29UL)
#define R_I3C_B_DATBAS1_DVTYP_Msk         (0x80000000UL)
#define R_I3C_B_DATBAS1_DVTYP_Pos         (31UL)
#define R_I3C_B_DATBAS2_DVSTAD_Msk        (0x0000007FUL)
#define R_I3C_B_DATBAS2_DVSTAD_Pos        (0UL)
#define R_I3C_B_DATBAS2_DVIBIPL_Msk       (0x00001000UL)
#define R_I3C_B_DATBAS2_DVIBIPL_Pos       (12UL)
#define R_I3C_B_DATBAS2_DVSIRRJ_Msk       (0x00002000UL)
#define R_I3C_B_DATBAS2_DVSIRRJ_Pos       (13UL)
#define R_I3C_B_DATBAS2_DVMRRJ_Msk        (0x00004000UL)
#define R_I3C_B_DATBAS2_DVMRRJ_Pos        (14UL)
#define R_I3C_B_DATBAS2_DVIBITS_Msk       (0x00008000UL)
#define R_I3C_B_DATBAS2_DVIBITS_Pos       (15UL)
#define R_I3C_B_DATBAS2_DVDYAD_Msk        (0x00FF0000UL)
#define R_I3C_B_DATBAS2_DVDYAD_Pos        (16UL)
#define R_I3C_B_DATBAS2_DVNACK_Msk        (0x60000000UL)
#define R_I3C_B_DATBAS2_DVNACK_Pos        (29UL)
#define R_I3C_B_DATBAS2_DVTYP_Msk         (0x80000000UL)
#define R_I3C_B_DATBAS2_DVTYP_Pos         (31UL)
#define R_I3C_B_DATBAS3_DVSTAD_Msk        (0x0000007FUL)
#define R_I3C_B_DATBAS3_DVSTAD_Pos        (0UL)
#define R_I3C_B_DATBAS3_DVIBIPL_Msk       (0x00001000UL)
#define R_I3C_B_DATBAS3_DVIBIPL_Pos       (12UL)
#define R_I3C_B_DATBAS3_DVSIRRJ_Msk       (0x00002000UL)
#define R_I3C_B_DATBAS3_DVSIRRJ_Pos       (13UL)
#define R_I3C_B_DATBAS3_DVMRRJ_Msk        (0x00004000UL)
#define R_I3C_B_DATBAS3_DVMRRJ_Pos        (14UL)
#define R_I3C_B_DATBAS3_DVIBITS_Msk       (0x00008000UL)
#define R_I3C_B_DATBAS3_DVIBITS_Pos       (15UL)
#define R_I3C_B_DATBAS3_DVDYAD_Msk        (0x00FF0000UL)
#define R_I3C_B_DATBAS3_DVDYAD_Pos        (16UL)
#define R_I3C_B_DATBAS3_DVNACK_Msk        (0x60000000UL)
#define R_I3C_B_DATBAS3_DVNACK_Pos        (29UL)
#define R_I3C_B_DATBAS3_DVTYP_Msk         (0x80000000UL)
#define R_I3C_B_DATBAS3_DVTYP_Pos         (31UL)
#define R_I3C_B_DATBAS4_DVSTAD_Msk        (0x0000007FUL)
#define R_I3C_B_DATBAS4_DVSTAD_Pos        (0UL)
#define R_I3C_B_DATBAS4_DVIBIPL_Msk       (0x00001000UL)
#define R_I3C_B_DATBAS4_DVIBIPL_Pos       (12UL)
#define R_I3C_B_DATBAS4_DVSIRRJ_Msk       (0x00002000UL)
#define R_I3C_B_DATBAS4_DVSIRRJ_Pos       (13UL)
#define R_I3C_B_DATBAS4_DVMRRJ_Msk        (0x00004000UL)
#define R_I3C_B_DATBAS4_DVMRRJ_Pos        (14UL)
#define R_I3C_B_DATBAS4_DVIBITS_Msk       (0x00008000UL)
#define R_I3C_B_DATBAS4_DVIBITS_Pos       (15UL)
#define R_I3C_B_DATBAS4_DVDYAD_Msk        (0x00FF0000UL)
#define R_I3C_B_DATBAS4_DVDYAD_Pos        (16UL)
#define R_I3C_B_DATBAS4_DVNACK_Msk        (0x60000000UL)
#define R_I3C_B_DATBAS4_DVNACK_Pos        (29UL)
#define R_I3C_B_DATBAS4_DVTYP_Msk         (0x80000000UL)
#define R_I3C_B_DATBAS4_DVTYP_Pos         (31UL)
#define R_I3C_B_DATBAS5_DVSTAD_Msk        (0x0000007FUL)
#define R_I3C_B_DATBAS5_DVSTAD_Pos        (0UL)
#define R_I3C_B_DATBAS5_DVIBIPL_Msk       (0x00001000UL)
#define R_I3C_B_DATBAS5_DVIBIPL_Pos       (12UL)
#define R_I3C_B_DATBAS5_DVSIRRJ_Msk       (0x00002000UL)
#define R_I3C_B_DATBAS5_DVSIRRJ_Pos       (13UL)
#define R_I3C_B_DATBAS5_DVMRRJ_Msk        (0x00004000UL)
#define R_I3C_B_DATBAS5_DVMRRJ_Pos        (14UL)
#define R_I3C_B_DATBAS5_DVIBITS_Msk       (0x00008000UL)
#define R_I3C_B_DATBAS5_DVIBITS_Pos       (15UL)
#define R_I3C_B_DATBAS5_DVDYAD_Msk        (0x00FF0000UL)
#define R_I3C_B_DATBAS5_DVDYAD_Pos        (16UL)
#define R_I3C_B_DATBAS5_DVNACK_Msk        (0x60000000UL)
#define R_I3C_B_DATBAS5_DVNACK_Pos        (29UL)
#define R_I3C_B_DATBAS5_DVTYP_Msk         (0x80000000UL)
#define R_I3C_B_DATBAS5_DVTYP_Pos         (31UL)
#define R_I3C_B_DATBAS6_DVSTAD_Msk        (0x0000007FUL)
#define R_I3C_B_DATBAS6_DVSTAD_Pos        (0UL)
#define R_I3C_B_DATBAS6_DVIBIPL_Msk       (0x00001000UL)
#define R_I3C_B_DATBAS6_DVIBIPL_Pos       (12UL)
#define R_I3C_B_DATBAS6_DVSIRRJ_Msk       (0x00002000UL)
#define R_I3C_B_DATBAS6_DVSIRRJ_Pos       (13UL)
#define R_I3C_B_DATBAS6_DVMRRJ_Msk        (0x00004000UL)
#define R_I3C_B_DATBAS6_DVMRRJ_Pos        (14UL)
#define R_I3C_B_DATBAS6_DVIBITS_Msk       (0x00008000UL)
#define R_I3C_B_DATBAS6_DVIBITS_Pos       (15UL)
#define R_I3C_B_DATBAS6_DVDYAD_Msk        (0x00FF0000UL)
#define R_I3C_B_DATBAS6_DVDYAD_Pos        (16UL)
#define R_I3C_B_DATBAS6_DVNACK_Msk        (0x60000000UL)
#define R_I3C_B_DATBAS6_DVNACK_Pos        (29UL)
#define R_I3C_B_DATBAS6_DVTYP_Msk         (0x80000000UL)
#define R_I3C_B_DATBAS6_DVTYP_Pos         (31UL)
#define R_I3C_B_DATBAS7_DVSTAD_Msk        (0x0000007FUL)
#define R_I3C_B_DATBAS7_DVSTAD_Pos        (0UL)
#define R_I3C_B_DATBAS7_DVIBIPL_Msk       (0x00001000UL)
#define R_I3C_B_DATBAS7_DVIBIPL_Pos       (12UL)
#define R_I3C_B_DATBAS7_DVSIRRJ_Msk       (0x00002000UL)
#define R_I3C_B_DATBAS7_DVSIRRJ_Pos       (13UL)
#define R_I3C_B_DATBAS7_DVMRRJ_Msk        (0x00004000UL)
#define R_I3C_B_DATBAS7_DVMRRJ_Pos        (14UL)
#define R_I3C_B_DATBAS7_DVIBITS_Msk       (0x00008000UL)
#define R_I3C_B_DATBAS7_DVIBITS_Pos       (15UL)
#define R_I3C_B_DATBAS7_DVDYAD_Msk        (0x00FF0000UL)
#define R_I3C_B_DATBAS7_DVDYAD_Pos        (16UL)
#define R_I3C_B_DATBAS7_DVNACK_Msk        (0x60000000UL)
#define R_I3C_B_DATBAS7_DVNACK_Pos        (29UL)
#define R_I3C_B_DATBAS7_DVTYP_Msk         (0x80000000UL)
#define R_I3C_B_DATBAS7_DVTYP_Pos         (31UL)
#define R_I3C_B_SDATBAS0_SDSTAD_Msk       (0x000003FFUL)
#define R_I3C_B_SDATBAS0_SDSTAD_Pos       (0UL)
#define R_I3C_B_SDATBAS0_SDADLS_Msk       (0x00000400UL)
#define R_I3C_B_SDATBAS0_SDADLS_Pos       (10UL)
#define R_I3C_B_SDATBAS0_SDIBIPL_Msk      (0x00001000UL)
#define R_I3C_B_SDATBAS0_SDIBIPL_Pos      (12UL)
#define R_I3C_B_SDATBAS0_SDDYAD_Msk       (0x007F0000UL)
#define R_I3C_B_SDATBAS0_SDDYAD_Pos       (16UL)
#define R_I3C_B_SDATBAS1_SDSTAD_Msk       (0x000003FFUL)
#define R_I3C_B_SDATBAS1_SDSTAD_Pos       (0UL)
#define R_I3C_B_SDATBAS1_SDADLS_Msk       (0x00000400UL)
#define R_I3C_B_SDATBAS1_SDADLS_Pos       (10UL)
#define R_I3C_B_SDATBAS1_SDIBIPL_Msk      (0x00001000UL)
#define R_I3C_B_SDATBAS1_SDIBIPL_Pos      (12UL)
#define R_I3C_B_SDATBAS1_SDDYAD_Msk       (0x007F0000UL)
#define R_I3C_B_SDATBAS1_SDDYAD_Pos       (16UL)
#define R_I3C_B_SDATBAS2_SDSTAD_Msk       (0x000003FFUL)
#define R_I3C_B_SDATBAS2_SDSTAD_Pos       (0UL)
#define R_I3C_B_SDATBAS2_SDADLS_Msk       (0x00000400UL)
#define R_I3C_B_SDATBAS2_SDADLS_Pos       (10UL)
#define R_I3C_B_SDATBAS2_SDIBIPL_Msk      (0x00001000UL)
#define R_I3C_B_SDATBAS2_SDIBIPL_Pos      (12UL)
#define R_I3C_B_SDATBAS2_SDDYAD_Msk       (0x007F0000UL)
#define R_I3C_B_SDATBAS2_SDDYAD_Pos       (16UL)
#define R_I3C_B_MSDCT0_RBCR0_Msk          (0x00000100UL)
#define R_I3C_B_MSDCT0_RBCR0_Pos          (8UL)
#define R_I3C_B_MSDCT0_RBCR1_Msk          (0x00000200UL)
#define R_I3C_B_MSDCT0_RBCR1_Pos          (9UL)
#define R_I3C_B_MSDCT0_RBCR2_Msk          (0x00000400UL)
#define R_I3C_B_MSDCT0_RBCR2_Pos          (10UL)
#define R_I3C_B_MSDCT0_RBCR3_Msk          (0x00000800UL)
#define R_I3C_B_MSDCT0_RBCR3_Pos          (11UL)
#define R_I3C_B_MSDCT0_RBCR76_Msk         (0x0000C000UL)
#define R_I3C_B_MSDCT0_RBCR76_Pos         (14UL)
#define R_I3C_B_MSDCT1_RBCR0_Msk          (0x00000100UL)
#define R_I3C_B_MSDCT1_RBCR0_Pos          (8UL)
#define R_I3C_B_MSDCT1_RBCR1_Msk          (0x00000200UL)
#define R_I3C_B_MSDCT1_RBCR1_Pos          (9UL)
#define R_I3C_B_MSDCT1_RBCR2_Msk          (0x00000400UL)
#define R_I3C_B_MSDCT1_RBCR2_Pos          (10UL)
#define R_I3C_B_MSDCT1_RBCR3_Msk          (0x00000800UL)
#define R_I3C_B_MSDCT1_RBCR3_Pos          (11UL)
#define R_I3C_B_MSDCT1_RBCR76_Msk         (0x0000C000UL)
#define R_I3C_B_MSDCT1_RBCR76_Pos         (14UL)
#define R_I3C_B_MSDCT2_RBCR0_Msk          (0x00000100UL)
#define R_I3C_B_MSDCT2_RBCR0_Pos          (8UL)
#define R_I3C_B_MSDCT2_RBCR1_Msk          (0x00000200UL)
#define R_I3C_B_MSDCT2_RBCR1_Pos          (9UL)
#define R_I3C_B_MSDCT2_RBCR2_Msk          (0x00000400UL)
#define R_I3C_B_MSDCT2_RBCR2_Pos          (10UL)
#define R_I3C_B_MSDCT2_RBCR3_Msk          (0x00000800UL)
#define R_I3C_B_MSDCT2_RBCR3_Pos          (11UL)
#define R_I3C_B_MSDCT2_RBCR76_Msk         (0x0000C000UL)
#define R_I3C_B_MSDCT2_RBCR76_Pos         (14UL)
#define R_I3C_B_MSDCT3_RBCR0_Msk          (0x00000100UL)
#define R_I3C_B_MSDCT3_RBCR0_Pos          (8UL)
#define R_I3C_B_MSDCT3_RBCR1_Msk          (0x00000200UL)
#define R_I3C_B_MSDCT3_RBCR1_Pos          (9UL)
#define R_I3C_B_MSDCT3_RBCR2_Msk          (0x00000400UL)
#define R_I3C_B_MSDCT3_RBCR2_Pos          (10UL)
#define R_I3C_B_MSDCT3_RBCR3_Msk          (0x00000800UL)
#define R_I3C_B_MSDCT3_RBCR3_Pos          (11UL)
#define R_I3C_B_MSDCT3_RBCR76_Msk         (0x0000C000UL)
#define R_I3C_B_MSDCT3_RBCR76_Pos         (14UL)
#define R_I3C_B_MSDCT4_RBCR0_Msk          (0x00000100UL)
#define R_I3C_B_MSDCT4_RBCR0_Pos          (8UL)
#define R_I3C_B_MSDCT4_RBCR1_Msk          (0x00000200UL)
#define R_I3C_B_MSDCT4_RBCR1_Pos          (9UL)
#define R_I3C_B_MSDCT4_RBCR2_Msk          (0x00000400UL)
#define R_I3C_B_MSDCT4_RBCR2_Pos          (10UL)
#define R_I3C_B_MSDCT4_RBCR3_Msk          (0x00000800UL)
#define R_I3C_B_MSDCT4_RBCR3_Pos          (11UL)
#define R_I3C_B_MSDCT4_RBCR76_Msk         (0x0000C000UL)
#define R_I3C_B_MSDCT4_RBCR76_Pos         (14UL)
#define R_I3C_B_MSDCT5_RBCR0_Msk          (0x00000100UL)
#define R_I3C_B_MSDCT5_RBCR0_Pos          (8UL)
#define R_I3C_B_MSDCT5_RBCR1_Msk          (0x00000200UL)
#define R_I3C_B_MSDCT5_RBCR1_Pos          (9UL)
#define R_I3C_B_MSDCT5_RBCR2_Msk          (0x00000400UL)
#define R_I3C_B_MSDCT5_RBCR2_Pos          (10UL)
#define R_I3C_B_MSDCT5_RBCR3_Msk          (0x00000800UL)
#define R_I3C_B_MSDCT5_RBCR3_Pos          (11UL)
#define R_I3C_B_MSDCT5_RBCR76_Msk         (0x0000C000UL)
#define R_I3C_B_MSDCT5_RBCR76_Pos         (14UL)
#define R_I3C_B_MSDCT6_RBCR0_Msk          (0x00000100UL)
#define R_I3C_B_MSDCT6_RBCR0_Pos          (8UL)
#define R_I3C_B_MSDCT6_RBCR1_Msk          (0x00000200UL)
#define R_I3C_B_MSDCT6_RBCR1_Pos          (9UL)
#define R_I3C_B_MSDCT6_RBCR2_Msk          (0x00000400UL)
#define R_I3C_B_MSDCT6_RBCR2_Pos          (10UL)
#define R_I3C_B_MSDCT6_RBCR3_Msk          (0x00000800UL)
#define R_I3C_B_MSDCT6_RBCR3_Pos          (11UL)
#define R_I3C_B_MSDCT6_RBCR76_Msk         (0x0000C000UL)
#define R_I3C_B_MSDCT6_RBCR76_Pos         (14UL)
#define R_I3C_B_MSDCT7_RBCR0_Msk          (0x00000100UL)
#define R_I3C_B_MSDCT7_RBCR0_Pos          (8UL)
#define R_I3C_B_MSDCT7_RBCR1_Msk          (0x00000200UL)
#define R_I3C_B_MSDCT7_RBCR1_Pos          (9UL)
#define R_I3C_B_MSDCT7_RBCR2_Msk          (0x00000400UL)
#define R_I3C_B_MSDCT7_RBCR2_Pos          (10UL)
#define R_I3C_B_MSDCT7_RBCR3_Msk          (0x00000800UL)
#define R_I3C_B_MSDCT7_RBCR3_Pos          (11UL)
#define R_I3C_B_MSDCT7_RBCR76_Msk         (0x0000C000UL)
#define R_I3C_B_MSDCT7_RBCR76_Pos         (14UL)
#define R_I3C_B_EXDATBAS_EDSTAD_Msk       (0x0000007FUL)
#define R_I3C_B_EXDATBAS_EDSTAD_Pos       (0UL)
#define R_I3C_B_EXDATBAS_EDDYAD_Msk       (0x00FF0000UL)
#define R_I3C_B_EXDATBAS_EDDYAD_Pos       (16UL)
#define R_I3C_B_EXDATBAS_EDNACK_Msk       (0x60000000UL)
#define R_I3C_B_EXDATBAS_EDNACK_Pos       (29UL)
#define R_I3C_B_EXDATBAS_EDTYP_Msk        (0x80000000UL)
#define R_I3C_B_EXDATBAS_EDTYP_Pos        (31UL)
#define R_I3C_B_SVDCT_TDCR_Msk            (0x000000FFUL)
#define R_I3C_B_SVDCT_TDCR_Pos            (0UL)
#define R_I3C_B_SVDCT_TBCR0_Msk           (0x00000100UL)
#define R_I3C_B_SVDCT_TBCR0_Pos           (8UL)
#define R_I3C_B_SVDCT_TBCR1_Msk           (0x00000200UL)
#define R_I3C_B_SVDCT_TBCR1_Pos           (9UL)
#define R_I3C_B_SVDCT_TBCR2_Msk           (0x00000400UL)
#define R_I3C_B_SVDCT_TBCR2_Pos           (10UL)
#define R_I3C_B_SVDCT_TBCR3_Msk           (0x00000800UL)
#define R_I3C_B_SVDCT_TBCR3_Pos           (11UL)
#define R_I3C_B_SVDCT_TBCR76_Msk          (0x0000C000UL)
#define R_I3C_B_SVDCT_TBCR76_Pos          (14UL)
#define R_I3C_B_SDCTPIDL_SDCTPIDL_Msk     (0xFFFFFFFFUL)
#define R_I3C_B_SDCTPIDL_SDCTPIDL_Pos     (0UL)
#define R_I3C_B_SDCTPIDH_SDCTPIDH_Msk     (0xFFFFFFFFUL)
#define R_I3C_B_SDCTPIDH_SDCTPIDH_Pos     (0UL)
#define R_I3C_B_SVDVAD0_SVAD_Msk          (0x03FF0000UL)
#define R_I3C_B_SVDVAD0_SVAD_Pos          (16UL)
#define R_I3C_B_SVDVAD0_SADLG_Msk         (0x08000000UL)
#define R_I3C_B_SVDVAD0_SADLG_Pos         (27UL)
#define R_I3C_B_SVDVAD0_SSTADV_Msk        (0x40000000UL)
#define R_I3C_B_SVDVAD0_SSTADV_Pos        (30UL)
#define R_I3C_B_SVDVAD0_SDYADV_Msk        (0x80000000UL)
#define R_I3C_B_SVDVAD0_SDYADV_Pos        (31UL)
#define R_I3C_B_SVDVAD1_SVAD_Msk          (0x03FF0000UL)
#define R_I3C_B_SVDVAD1_SVAD_Pos          (16UL)
#define R_I3C_B_SVDVAD1_SADLG_Msk         (0x08000000UL)
#define R_I3C_B_SVDVAD1_SADLG_Pos         (27UL)
#define R_I3C_B_SVDVAD1_SSTADV_Msk        (0x40000000UL)
#define R_I3C_B_SVDVAD1_SSTADV_Pos        (30UL)
#define R_I3C_B_SVDVAD1_SDYADV_Msk        (0x80000000UL)
#define R_I3C_B_SVDVAD1_SDYADV_Pos        (31UL)
#define R_I3C_B_SVDVAD2_SVAD_Msk          (0x03FF0000UL)
#define R_I3C_B_SVDVAD2_SVAD_Pos          (16UL)
#define R_I3C_B_SVDVAD2_SADLG_Msk         (0x08000000UL)
#define R_I3C_B_SVDVAD2_SADLG_Pos         (27UL)
#define R_I3C_B_SVDVAD2_SSTADV_Msk        (0x40000000UL)
#define R_I3C_B_SVDVAD2_SSTADV_Pos        (30UL)
#define R_I3C_B_SVDVAD2_SDYADV_Msk        (0x80000000UL)
#define R_I3C_B_SVDVAD2_SDYADV_Pos        (31UL)
#define R_I3C_B_CSECMD_SVIRQE_Msk         (0x00000001UL)
#define R_I3C_B_CSECMD_SVIRQE_Pos         (0UL)
#define R_I3C_B_CSECMD_MSRQE_Msk          (0x00000002UL)
#define R_I3C_B_CSECMD_MSRQE_Pos          (1UL)
#define R_I3C_B_CSECMD_HJEVE_Msk          (0x00000008UL)
#define R_I3C_B_CSECMD_HJEVE_Pos          (3UL)
#define R_I3C_B_CEACTST_ACTST_Msk         (0x0000000FUL)
#define R_I3C_B_CEACTST_ACTST_Pos         (0UL)
#define R_I3C_B_CMWLG_MWLG_Msk            (0x0000FFFFUL)
#define R_I3C_B_CMWLG_MWLG_Pos            (0UL)
#define R_I3C_B_CMRLG_MRLG_Msk            (0x0000FFFFUL)
#define R_I3C_B_CMRLG_MRLG_Pos            (0UL)
#define R_I3C_B_CMRLG_IBIPSZ_Msk          (0x00FF0000UL)
#define R_I3C_B_CMRLG_IBIPSZ_Pos          (16UL)
#define R_I3C_B_CETSTMD_TSTMD_Msk         (0x000000FFUL)
#define R_I3C_B_CETSTMD_TSTMD_Pos         (0UL)
#define R_I3C_B_CGDVST_PNDINT_Msk         (0x0000000FUL)
#define R_I3C_B_CGDVST_PNDINT_Pos         (0UL)
#define R_I3C_B_CGDVST_PRTE_Msk           (0x00000020UL)
#define R_I3C_B_CGDVST_PRTE_Pos           (5UL)
#define R_I3C_B_CGDVST_ACTMD_Msk          (0x000000C0UL)
#define R_I3C_B_CGDVST_ACTMD_Pos          (6UL)
#define R_I3C_B_CGDVST_VDRSV_Msk          (0x0000FF00UL)
#define R_I3C_B_CGDVST_VDRSV_Pos          (8UL)
#define R_I3C_B_CMDSPW_MSWDR_Msk          (0x00000007UL)
#define R_I3C_B_CMDSPW_MSWDR_Pos          (0UL)
#define R_I3C_B_CMDSPR_MSRDR_Msk          (0x00000007UL)
#define R_I3C_B_CMDSPR_MSRDR_Pos          (0UL)
#define R_I3C_B_CMDSPR_CDTTIM_Msk         (0x00000038UL)
#define R_I3C_B_CMDSPR_CDTTIM_Pos         (3UL)
#define R_I3C_B_CMDSPT_MRTTIM_Msk         (0x00FFFFFFUL)
#define R_I3C_B_CMDSPT_MRTTIM_Pos         (0UL)
#define R_I3C_B_CMDSPT_MRTE_Msk           (0x80000000UL)
#define R_I3C_B_CMDSPT_MRTE_Pos           (31UL)
#define R_I3C_B_CETSM_SPTSYN_Msk          (0x00000001UL)
#define R_I3C_B_CETSM_SPTSYN_Pos          (0UL)
#define R_I3C_B_CETSM_SPTASYN0_Msk        (0x00000002UL)
#define R_I3C_B_CETSM_SPTASYN0_Pos        (1UL)
#define R_I3C_B_CETSM_SPTASYN1_Msk        (0x00000004UL)
#define R_I3C_B_CETSM_SPTASYN1_Pos        (2UL)
#define R_I3C_B_CETSM_FREQ_Msk            (0x0000FF00UL)
#define R_I3C_B_CETSM_FREQ_Pos            (8UL)
#define R_I3C_B_CETSM_INAC_Msk            (0x00FF0000UL)
#define R_I3C_B_CETSM_INAC_Pos            (16UL)
#define R_I3C_B_CETSS_SYNE_Msk            (0x00000001UL)
#define R_I3C_B_CETSS_SYNE_Pos            (0UL)
#define R_I3C_B_CETSS_ASYNE_Msk           (0x00000006UL)
#define R_I3C_B_CETSS_ASYNE_Pos           (1UL)
#define R_I3C_B_CETSS_ICOVF_Msk           (0x00000080UL)
#define R_I3C_B_CETSS_ICOVF_Pos           (7UL)
#define R_I3C_B_BITCNT_BCNT_Msk           (0x0000001FUL)
#define R_I3C_B_BITCNT_BCNT_Pos           (0UL)
#define R_I3C_B_NQSTLV_CMDQFLV_Msk        (0x000000FFUL)
#define R_I3C_B_NQSTLV_CMDQFLV_Pos        (0UL)
#define R_I3C_B_NQSTLV_RSPQLV_Msk         (0x0000FF00UL)
#define R_I3C_B_NQSTLV_RSPQLV_Pos         (8UL)
#define R_I3C_B_NQSTLV_IBIQLV_Msk         (0x00FF0000UL)
#define R_I3C_B_NQSTLV_IBIQLV_Pos         (16UL)
#define R_I3C_B_NQSTLV_IBISCNT_Msk        (0x1F000000UL)
#define R_I3C_B_NQSTLV_IBISCNT_Pos        (24UL)
#define R_I3C_B_NDBSTLV0_TDBFLV_Msk       (0x000000FFUL)
#define R_I3C_B_NDBSTLV0_TDBFLV_Pos       (0UL)
#define R_I3C_B_NDBSTLV0_RDBLV_Msk        (0x0000FF00UL)
#define R_I3C_B_NDBSTLV0_RDBLV_Pos        (8UL)
#define R_I3C_B_NRSQSTLV_RSQLV_Msk        (0x000000FFUL)
#define R_I3C_B_NRSQSTLV_RSQLV_Pos        (0UL)
#define R_I3C_B_PRSTDBG_SCILV_Msk         (0x00000001UL)
#define R_I3C_B_PRSTDBG_SCILV_Pos         (0UL)
#define R_I3C_B_PRSTDBG_SDILV_Msk         (0x00000002UL)
#define R_I3C_B_PRSTDBG_SDILV_Pos         (1UL)
#define R_I3C_B_PRSTDBG_SCOLV_Msk         (0x00000004UL)
#define R_I3C_B_PRSTDBG_SCOLV_Pos         (2UL)
#define R_I3C_B_PRSTDBG_SDOLV_Msk         (0x00000008UL)
#define R_I3C_B_PRSTDBG_SDOLV_Pos         (3UL)
#define R_I3C_B_MSERRCNT_M2ECNT_Msk       (0x000000FFUL)
#define R_I3C_B_MSERRCNT_M2ECNT_Pos       (0UL)
#define R_I3C_B_SC1CPT_SC1CPT_Msk         (0x0000FFFFUL)
#define R_I3C_B_SC1CPT_SC1CPT_Pos         (0UL)
#define R_I3C_B_SC2CPT_SC2CPT_Msk         (0x0000FFFFUL)
#define R_I3C_B_SC2CPT_SC2CPT_Pos         (0UL)

#endif