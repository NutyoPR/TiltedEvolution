#pragma once

enum class FormEnum : uint32_t
{
    EMPTY_ID = 0,
    TES4 = 0x34534554,
    GRUP = 0x50555247,
    REFR = 0x52464552,
    ACHR = 0x52484341,
    CELL = 0x4C4C4543,
    CLMT = 0x544D4C43,
    CONT = 0x544E4F43,
    NPC_ = 0x5F43504E,
    GMST = 0x54534D47,
};

enum class ChunkId : uint32_t
{
    NO_CHUNK = 0,
    HEDR_ID = 0x52444548,
    MAST_ID = 0x5453414d,
    DELE_ID = 0x454c4544,
    SCRD_ID = 0x44524353,
    SCRS_ID = 0x53524353,
    NAME_ID = 0x454d414e,
    OBND_ID = 0x444e424f,
    MODL_ID = 0x4c444f4d,
    MODD_ID = 0x44444f4d,
    MOSD_ID = 0x44534f4d,
    MOD2_ID = 0x32444f4d,
    MOD3_ID = 0x33444f4d,
    MOD4_ID = 0x34444f4d,
    MOD5_ID = 0x35444f4d,
    MODT_ID = 0x54444f4d,
    MO2T_ID = 0x54324f4d,
    MO3T_ID = 0x54334f4d,
    MO4T_ID = 0x54344f4d,
    MO5T_ID = 0x54354f4d,
    MODS_ID = 0x53444f4d,
    MO2S_ID = 0x53324f4d,
    MO3S_ID = 0x53334f4d,
    MO4S_ID = 0x53344f4d,
    MO5S_ID = 0x53354f4d,
    MODC_ID = 0x43444f4d,
    MO2C_ID = 0x43324f4d,
    MO3C_ID = 0x43334f4d,
    MO4C_ID = 0x43344f4d,
    MO5C_ID = 0x43354f4d,
    MO2F_ID = 0x46324f4d,
    MO3F_ID = 0x46334f4d,
    MO4F_ID = 0x46344f4d,
    MO5F_ID = 0x46354f4d,
    CVPA_ID = 0x41505643,
    CDIX_ID = 0x58494443,
    FVPA_ID = 0x41505646,
    KFFZ_ID = 0x5a46464b,
    NIFZ_ID = 0x5a46494e,
    NIFT_ID = 0x5446494e,
    ANAM_ID = 0x4d414e41,
    BNAM_ID = 0x4d414e42,
    CNAM_ID = 0x4d414e43,
    DNAM_ID = 0x4d414e44,
    ENAM_ID = 0x4d414e45,
    FNAM_ID = 0x4d414e46,
    GNAM_ID = 0x4d414e47,
    HNAM_ID = 0x4d414e48,
    INAM_ID = 0x4d414e49,
    JNAM_ID = 0x4d414e4a,
    KNAM_ID = 0x4d414e4b,
    LNAM_ID = 0x4d414e4c,
    MNAM_ID = 0x4d414e4d,
    NNAM_ID = 0x4d414e4e,
    ONAM_ID = 0x4d414e4f,
    PNAM_ID = 0x4d414e50,
    CLNM_ID = 0x4d414e51,
    QNAM_ID = 0x4d414e51,
    RNAM_ID = 0x4d414e52,
    SNAM_ID = 0x4d414e53,
    TNAM_ID = 0x4d414e54,
    UNAM_ID = 0x4d414e55,
    VNAM_ID = 0x4d414e56,
    WNAM_ID = 0x4d414e57,
    XNAM_ID = 0x4d414e58,
    YNAM_ID = 0x4d414e59,
    ZNAM_ID = 0x4d414e5a,
    NAM1_ID = 0x314d414e,
    NAM2_ID = 0x324d414e,
    NAM3_ID = 0x334d414e,
    NAM4_ID = 0x344d414e,
    NAM5_ID = 0x354d414e,
    NAM6_ID = 0x364d414e,
    NAM7_ID = 0x374d414e,
    NAM8_ID = 0x384d414e,
    NAM9_ID = 0x394d414e,
    NAM0_ID = 0x304d414e,
    NAMA_ID = 0x414d414e,
    SPCT_ID = 0x54435053,
    COCT_ID = 0x54434f43,
    LLCT_ID = 0x54434c4c,
    PTRN_ID = 0x4e525450,
    ATTX_ID = 0x58545441,
    WTMX_ID = 0x584d5457,
    FTYP_ID = 0x50595446,
    PFRN_ID = 0x4e524650,
    WKMV_ID = 0x564d4b57,
    RNMV_ID = 0x564d4e52,
    SWMV_ID = 0x564d5753,
    FLMV_ID = 0x564d4c46,
    SNMV_ID = 0x564d4e53,
    SPMV_ID = 0x564d5053,
    QUAL_ID = 0x4c415551,
    DOFT_ID = 0x54464f44,
    SOFT_ID = 0x54464f53,
    DPLT_ID = 0x544c5044,
    SPOR_ID = 0x524f5053,
    OCOR_ID = 0x524f434f,
    GWOR_ID = 0x524f5747,
    ECOR_ID = 0x524f4345,
    CRIF_ID = 0x46495243,
    FCPL_ID = 0x4c504346,
    SHRT_ID = 0x54524853,
    RCLR_ID = 0x524c4352,
    RPLD_ID = 0x444c5052,
    RPLI_ID = 0x494c5052,
    RLDM_ID = 0x4d444c52,
    RDAT_ID = 0x54414452,
    RDOB_ID = 0x424f4452,
    RDOJ_ID = 0x4a4f4452,
    RDOT_ID = 0x544f4452,
    RDWT_ID = 0x54574452,
    RDMP_ID = 0x504d4452,
    RDLN_ID = 0x4e4c4452,
    RDGS_ID = 0x53474452,
    RDMD_ID = 0x444d4452,
    RDMO_ID = 0x4f4d4452,
    RDSD_ID = 0x44534452,
    RDSA_ID = 0x41534452,
    XIDX_ID = 0x58444958,
    XACT_ID = 0x54434158,
    XOWN_ID = 0x4e574f58,
    XGLB_ID = 0x424c4758,
    XRNK_ID = 0x4b4e5258,
    XHLT_ID = 0x544c4858,
    XHLP_ID = 0x504c4858,
    XUSE_ID = 0x45535558,
    XTIM_ID = 0x4d495458,
    XCNT_ID = 0x544e4358,
    XCHG_ID = 0x47484358,
    XSOL_ID = 0x4c4f5358,
    XSCL_ID = 0x4c435358,
    XLOC_ID = 0x434f4c58,
    XTEL_ID = 0x4c455458,
    XTNM_ID = 0x4d4e5458,
    XMRK_ID = 0x4b524d58,
    XEDL_ID = 0x4c444558,
    XPSL_ID = 0x4c535058,
    XSED_ID = 0x44455358,
    XPCI_ID = 0x49435058,
    XRGD_ID = 0x44475258,
    XRGB_ID = 0x42475258,
    XLOD_ID = 0x444f4c58,
    XESP_ID = 0x50534558,
    XRTM_ID = 0x4d545258,
    XLKR_ID = 0x524b4c58,
    XLKT_ID = 0x544b4c58,
    XATR_ID = 0x52544158,
    XATP_ID = 0x50544158,
    XACR_ID = 0x52434158,
    XAPD_ID = 0x44504158,
    XAPR_ID = 0x52504158,
    XMRC_ID = 0x43524d58,
    XHRS_ID = 0x53524858,
    XPSN_ID = 0x4e535058,
    XPSC_ID = 0x43535058,
    XSPC_ID = 0x43505358,
    XASP_ID = 0x50534158,
    XLCM_ID = 0x4d434c58,
    XDCR_ID = 0x52434458,
    XRDS_ID = 0x53445258,
    XRAD_ID = 0x44415258,
    XLMB_ID = 0x424d4c58,
    XMBR_ID = 0x52424d58,
    XMBO_ID = 0x4f424d58,
    XEMI_ID = 0x494d4558,
    XRDO_ID = 0x4f445258,
    XCGD_ID = 0x44474358,
    XCLC_ID = 0x434c4358,
    XCLL_ID = 0x4c4c4358,
    XCLW_ID = 0x574c4358,
    XCWT_ID = 0x54574358,
    XCLR_ID = 0x524c4358,
    XCLM_ID = 0x4d4c4358,
    XCMT_ID = 0x544d4358,
    XCMO_ID = 0x4f4d4358,
    XCET_ID = 0x54454358,
    XCCM_ID = 0x4d434358,
    XCIM_ID = 0x4d494358,
    XCAS_ID = 0x53414358,
    XPWR_ID = 0x52575058,
    XRFB_ID = 0x42465258,
    XWLT_ID = 0x544c5758,
    XLTW_ID = 0x57544c58,
    XNVP_ID = 0x50564e58,
    XNDP_ID = 0x50444e58,
    XLCR_ID = 0x504c4358,
    XPRM_ID = 0x4d525058,
    XPRD_ID = 0x44525058,
    XPPA_ID = 0x41505058,
    XOCP_ID = 0x50434f58,
    XORD_ID = 0x44524f58,
    XPOD_ID = 0x444f5058,
    XPTL_ID = 0x4c545058,
    XROO_ID = 0x4f4f5258,
    XRMR_ID = 0x524d5258,
    XLRM_ID = 0x4d524c58,
    XMBP_ID = 0x50424d58,
    XTRI_ID = 0x49525458,
    XAMC_ID = 0x434d4158,
    XAMT_ID = 0x544d4158,
    XEZN_ID = 0x4e5a4558,
    XLCN_ID = 0x4e434c58,
    XLRT_ID = 0x54524c58,
    XLRL_ID = 0x4c524c58,
    XLIB_ID = 0x42494c58,
    XIBS_ID = 0x53424958,
    XIS2_ID = 0x32534958,
    XLIG_ID = 0x47494c58,
    XHTW_ID = 0x57544858,
    XFVC_ID = 0x43564658,
    XALP_ID = 0x504c4158,
    XHOR_ID = 0x524f4858,
    XENC_ID = 0x434e4558,
    XILL_ID = 0x4c4c4958,
    XWNT_ID = 0x544e5758,
    XWEM_ID = 0x4d455758,
    XCVL_ID = 0x4c564358,
    XCVR_ID = 0x52564358,
    XWCD_ID = 0x55435758,
    XWCS_ID = 0x53435758,
    XWCN_ID = 0x4e435758,
    XCZR_ID = 0x525a4358,
    XCZC_ID = 0x435a4358,
    XCZA_ID = 0x415a4358,
    XBSD_ID = 0x44534258,
    XRFG_ID = 0x47465258,
    XLYR_ID = 0x52594c58,
    XMSP_ID = 0x50534d58,
    XCRI_ID = 0x49524358,
    XPRI_ID = 0x49525058,
    XPDD_ID = 0x44445058,
    XWSD_ID = 0x44535758,
    XILW_ID = 0x574c4958,
    XGDR_ID = 0x52444758,
    XWPG_ID = 0x47505758,
    XWPN_ID = 0x4e505758,
    XPLK_ID = 0x4b4c5058,
    XIVG_ID = 0x47564958,
    MTYP_ID = 0x5059544d,
    SPED_ID = 0x44455053,
    ACTN_ID = 0x4e544341,
    STPR_ID = 0x52505453,
    APPR_ID = 0x52505041,
    APGD_ID = 0x44475041,
    SOUL_ID = 0x4c554f53,
    SLCP_ID = 0x50434c53,
    CIDA_ID = 0x41445443,
    CIS1_ID = 0x31534943,
    CIS2_ID = 0x32534943,
    CITC_ID = 0x43544943,
    TRDT_ID = 0x54445254,
    TRDA_ID = 0x41445254,
    TCLT_ID = 0x544c4354,
    TCLF_ID = 0x464c4354,
    TWAT_ID = 0x54415754,
    TIFC_ID = 0x43464954,
    TSCE_ID = 0x45435354,
    ESCE_ID = 0x45435345,
    ESCS_ID = 0x53435345,
    ESBS_ID = 0x53425345,
    ESHS_ID = 0x53485345,
    ESAS_ID = 0x53415345,
    ATTN_ID = 0x4e545441,
    WIDX_ID = 0x58444957,
    MODQ_ID = 0x51444f4d,
    DATA_ID = 0x41544144,
    ATDM_ID = 0x4d445441,
    ACBS_ID = 0x53424341,
    ATTR_ID = 0x52545441,
    ATKD_ID = 0x444b5441,
    ATKE_ID = 0x454b5441,
    ATKR_ID = 0x524b5441,
    ATKW_ID = 0x574b5441,
    ATKS_ID = 0x534b5441,
    ATKT_ID = 0x544b5441,
    UNWP_ID = 0x50574e55,
    RBPC_ID = 0x43504252,
    DESC_ID = 0x43534544,
    INDX_ID = 0x58444e49,
    STRV_ID = 0x56525453,
    INTV_ID = 0x56544e49,
    FLTV_ID = 0x56544c46,
    ITMC_ID = 0x434d5449,
    ITMS_ID = 0x534d5449,
    ITME_ID = 0x454d5449,
    FLTR_ID = 0x52544c46,
    DODT_ID = 0x54444f44,
    NPAC_ID = 0x4341504e,
    ND3D_ID = 0x4433444e,
    ANIS_ID = 0x53494e41,
    CNTO_ID = 0x4f544e43,
    SPLO_ID = 0x4f4c5053,
    REPL_ID = 0x4c504552,
    MDOB_ID = 0x424f444d,
    BIPL_ID = 0x4c504942,
    LVLO_ID = 0x4f4c564c,
    LLOF_ID = 0x464f4c4c,
    LVLD_ID = 0x444c564c,
    LVLM_ID = 0x4d4c564c,
    LVLF_ID = 0x464c564c,
    LVLG_ID = 0x474c564c,
    LVSG_ID = 0x4753564c,
    LLKC_ID = 0x434b4c4c,
    EFID_ID = 0x44494645,
    EFIT_ID = 0x54494645,
    AVIT_ID = 0x54495641,
    SCIT_ID = 0x54494353,
    SPIT_ID = 0x54495053,
    ENIT_ID = 0x54494e45,
    EITM_ID = 0x4d544945,
    EAMT_ID = 0x544d4145,
    PKID_ID = 0x44494b50,
    PKDT_ID = 0x54444b50,
    PLDT_ID = 0x54444c50,
    PLD2_ID = 0x32444c50,
    PSDT_ID = 0x54445350,
    PTDT_ID = 0x54445450,
    PTD2_ID = 0x32445450,
    PTDA_ID = 0x41445450,
    PT2A_ID = 0x41325450,
    PKDD_ID = 0x44444b50,
    PKED_ID = 0x44454b50,
    PKND_ID = 0x444e4b50,
    PKFD_ID = 0x44464b50,
    PKW3_ID = 0x33574b50,
    PUID_ID = 0x44495550,
    PKPT_ID = 0x54504b50,
    PKES_ID = 0x32454b50,
    PKCU_ID = 0x55434b50,
    PKC2_ID = 0x32434b50,
    PKAM_ID = 0x4d414b50,
    POBA_ID = 0x41424f50,
    POEA_ID = 0x41454f50,
    POCA_ID = 0x41434f50,
    PRCB_ID = 0x42435250,
    PFOR_ID = 0x524f4650,
    PFO2_ID = 0x324f4650,
    PDTO_ID = 0x4f544450,
    BIDX_ID = 0x58444942,
    BPTM_ID = 0x4d545042,
    BPTF_ID = 0x46545042,
    BMDT_ID = 0x54444d42,
    BMCT_ID = 0x54434d42,
    BODT_ID = 0x54444f42,
    BOD2_ID = 0x32444f42,
    PFIG_ID = 0x47494650,
    PFPC_ID = 0x43504650,
    KSIZ_ID = 0x5a49534b,
    KWDA_ID = 0x4144574b,
    MVRF_ID = 0x4652564d,
    AGTY_ID = 0x59544741,
    AGFD_ID = 0x44464741,
    AGSC_ID = 0x43534741,
    AGSX_ID = 0x58534741,
    ICON_ID = 0x4e4f4349,
    ICO2_ID = 0x324f4349,
    SCRI_ID = 0x49524353,
    SCHR_ID = 0x52484353,
    SCVR_ID = 0x52564353,
    SCTX_ID = 0x58544353,
    SCDA_ID = 0x41444353,
    SCRO_ID = 0x4f524353,
    SCRV_ID = 0x56524353,
    SLCS_ID = 0x53434c53,
    SLSD_ID = 0x44534c53,
    SLLD_ID = 0x444c4c53,
    SLFD_ID = 0x44464c53,
    SLUD_ID = 0x44554c53,
    VHGT_ID = 0x54474856,
    VNML_ID = 0x4c4d4e56,
    VCLR_ID = 0x524c4356,
    BTXT_ID = 0x54585442,
    ATXT_ID = 0x54585441,
    VTXT_ID = 0x54585456,
    MPCD_ID = 0x4443504d,
    AIDT_ID = 0x54444941,
    PGRP_ID = 0x50524750,
    PGRC_ID = 0x52524750,
    PGRI_ID = 0x49524750,
    PGRL_ID = 0x4c524750,
    PGAG_ID = 0x47414750,
    LVCR_ID = 0x5243564c,
    GMDT_ID = 0x54444d47,
    QSTI_ID = 0x49545351,
    QSDT_ID = 0x54445351,
    QSTA_ID = 0x41545351,
    QOBJ_ID = 0x4a424f51,
    QTGL_ID = 0x4c475451,
    TPIC_ID = 0x43495054,
    QSTR_ID = 0x52545351,
    WHGT_ID = 0x54474857,
    EDID_ID = 0x44494445,
    FULL_ID = 0x4c4c5546,
    MHDT_ID = 0x5444484d,
    TVDT_ID = 0x54445654,
    LODH_ID = 0x48444f4c,
    LODV_ID = 0x56444f4c,
    LODS_ID = 0x53444f4c,
    LODT_ID = 0x54444f4c,
    LODC_ID = 0x43444f4c,
    LODN_ID = 0x4e444f4c,
    FGGS_ID = 0x53474746,
    FGGA_ID = 0x41474746,
    FGTS_ID = 0x53544746,
    HCLR_ID = 0x524c4348,
    HCLF_ID = 0x464c4348,
    BCLF_ID = 0x464c4342,
    HLTX_ID = 0x58544c48,
    OFST_ID = 0x5453464f,
    CLSZ_ID = 0x5a534c43,
    SNDD_ID = 0x44444e53,
    SDSC_ID = 0x43534453,
    SNDX_ID = 0x58444e53,
    CSCR_ID = 0x52435343,
    CSDT_ID = 0x54445343,
    CSDI_ID = 0x49445343,
    CSDC_ID = 0x43445343,
    CS2H_ID = 0x48325343,
    CS2D_ID = 0x44325343,
    CS2K_ID = 0x4b325343,
    CS2E_ID = 0x45325343,
    CS2F_ID = 0x46325343,
    CSGD_ID = 0x44475343,
    CSME_ID = 0x454d5343,
    CSRA_ID = 0x41525343,
    CSLR_ID = 0x524c5343,
    CSCV_ID = 0x56435343,
    CSFL_ID = 0x4c465343,
    WLST_ID = 0x54534c57,
    LVSR_ID = 0x5053564c,
    EFSD_ID = 0x44534645,
    IDLC_ID = 0x434c4449,
    IDLA_ID = 0x414c4449,
    IDLF_ID = 0x464c4449,
    IDLT_ID = 0x544c4449,
    IDLB_ID = 0x424c4449,
    IDLN_ID = 0x4e4c4449,
    BIDS_ID = 0x53444942,
    BAMT_ID = 0x544d4142,
    PROD_ID = 0x444f5250,
    NVNM_ID = 0x4d4e564e,
    NVER_ID = 0x5245564e,
    DEST_ID = 0x54534544,
    DSTD_ID = 0x44545344,
    DSTA_ID = 0x41545344,
    DSTF_ID = 0x46545344,
    DMDL_ID = 0x4c444d44,
    DMDT_ID = 0x54444d44,
    DMDS_ID = 0x53444d44,
    DMDC_ID = 0x43444d44,
    TX00_ID = 0x30305854,
    TX01_ID = 0x31305854,
    TX02_ID = 0x32305854,
    TX03_ID = 0x33305854,
    TX04_ID = 0x34305854,
    TX05_ID = 0x35305854,
    TX06_ID = 0x36305854,
    TX07_ID = 0x37305854,
    TX08_ID = 0x38305854,
    TX09_ID = 0x39305854,
    _0TX_ID = 0x58543030,
    DMTL_ID = 0x4c544d44,
    NVMI_ID = 0x494d564e,
    NVCI_ID = 0x4943564e,
    NVPP_ID = 0x5050564e,
    BPTN_ID = 0x4e545042,
    BPNN_ID = 0x4e4e5042,
    BPNT_ID = 0x544e5042,
    BPNI_ID = 0x494e5042,
    BPND_ID = 0x444e5042,
    ETYP_ID = 0x50595445,
    WBDT_ID = 0x54444257,
    FNPR_ID = 0x52504e46,
    FNMK_ID = 0x4b4d4e46,
    PRKE_ID = 0x454b5250,
    PRKF_ID = 0x464b5250,
    PRKC_ID = 0x434b5250,
    EPFT_ID = 0x54465045,
    EPFB_ID = 0x42465045,
    EPFD_ID = 0x44465045,
    EPF2_ID = 0x32465045,
    EPF3_ID = 0x33465045,
    PRKL_ID = 0x4c4b5250,
    PRKR_ID = 0x524b5250,
    PRKZ_ID = 0x5a4b5250,
    ITID_ID = 0x44495449,
    ITXT_ID = 0x54585449,
    ISCR_ID = 0x52435349,
    ISIZ_ID = 0x5a495349,
    BSIZ_ID = 0x5a495342,
    CRDT_ID = 0x54445243,
    COED_ID = 0x44454f43,
    SIAD_ID = 0x44414900,
    EIAD_ID = 0x444149ff,
    IMSP_ID = 0x50534d49,
    GDRD_ID = 0x52444757,
    VTCK_ID = 0x4b435456,
    TPLT_ID = 0x544c5054,
    TPTA_ID = 0x41545054,
    LTPT_ID = 0x5450544c,
    LTPC_ID = 0x4350544c,
    MICO_ID = 0x4f43494d,
    MIC2_ID = 0x3243494d,
    NEXT_ID = 0x5458454e,
    LTMP_ID = 0x504d544c,
    RAFD_ID = 0x44464152,
    RAFB_ID = 0x42464152,
    RAFS_ID = 0x53464152,
    RAFL_ID = 0x4c464152,
    RAFN_ID = 0x4e464152,
    RALH_ID = 0x484c4152,
    RALN_ID = 0x4e4c4152,
    RAGA_ID = 0x41474152,
    RAGN_ID = 0x4e474152,
    RAPS_ID = 0x53504152,
    WCTR_ID = 0x52544357,
    LCPR_ID = 0x5250434c,
    ACPR_ID = 0x52504341,
    RCPR_ID = 0x52504352,
    LCUN_ID = 0x4e55434c,
    ACUN_ID = 0x4e554341,
    RCUN_ID = 0x4e554352,
    LCSR_ID = 0x5253434c,
    ACSR_ID = 0x52534341,
    RCSR_ID = 0x52534352,
    LCEC_ID = 0x4345434c,
    ACEC_ID = 0x43454341,
    RCEC_ID = 0x43454352,
    LCID_ID = 0x4449434c,
    ACID_ID = 0x44494341,
    LCEP_ID = 0x5045434c,
    ACEP_ID = 0x50454341,
    ALID_ID = 0x44494c41,
    ALCC_ID = 0x43434c41,
    ALFA_ID = 0x41464c41,
    ALFE_ID = 0x45464c41,
    ALNA_ID = 0x414e4c41,
    ALNT_ID = 0x544e4c41,
    ALFD_ID = 0x44464c41,
    ALFI_ID = 0x49464c41,
    ALEQ_ID = 0x51454c41,
    ALEA_ID = 0x41454c41,
    ALLS_ID = 0x534c4c41,
    ALFL_ID = 0x4c464c41,
    ALST_ID = 0x54534c41,
    ALFR_ID = 0x52464c41,
    ALRT_ID = 0x54524c41,
    ALCO_ID = 0x4f434c41,
    ALCA_ID = 0x41434c41,
    ALCL_ID = 0x4c434c41,
    ALUA_ID = 0x41554c41,
    ALSC_ID = 0x43534c41,
    ALDN_ID = 0x4e444c41,
    ALSP_ID = 0x50534c41,
    ALFC_ID = 0x43464c41,
    ALPC_ID = 0x43504c41,
    ALED_ID = 0x44454c41,
    ALLA_ID = 0x414c4c41,
    ALDI_ID = 0x49444c41,
    ALFV_ID = 0x56464c41,
    ALCS_ID = 0x53434c41,
    ALMI_ID = 0x494d4c41,
    MLDS_ID = 0x53444c4d,
    MLDI_ID = 0x49444c4d,
    MLDE_ID = 0x45444c4d,
    MPRT_ID = 0x5452504d,
    FPRT_ID = 0x54525046,
    MCHT_ID = 0x5448434d,
    FCHT_ID = 0x54484346,
    AVSK_ID = 0x4b535641,
    VMAD_ID = 0x44414d56,
    MTNM_ID = 0x4d4e544d,
    MSPD_ID = 0x4450534d,
    JAIL_ID = 0x4c49414a,
    WAIT_ID = 0x54494157,
    STOL_ID = 0x4c4f5453,
    PLCN_ID = 0x4e434c50,
    CRGR_ID = 0x52475243,
    CRVA_ID = 0x41565243,
    XXXX_ID = 0x58585858,
    HTID_ID = 0x44495448,
    DMAX_ID = 0x58414d44,
    DMIN_ID = 0x4e494d44,
    DEMO_ID = 0x4f4d4544,
    DEVA_ID = 0x41564544,
    PHKV_ID = 0x564b4850,
    PHWT_ID = 0x54574850,
    PHTN_ID = 0x4e544850,
    VEND_ID = 0x444e4556,
    VENV_ID = 0x564e4556,
    VENC_ID = 0x434e4556,
    PLVD_ID = 0x44564c50,
    JOUT_ID = 0x54554f4a,
    DALC_ID = 0x434c4144,
    HEAD_ID = 0x44414548,
    TINT_ID = 0x544e4954,
    TINC_ID = 0x434e4954,
    TIND_ID = 0x444e4954,
    TINV_ID = 0x564e4954,
    TINI_ID = 0x494e4954,
    TINL_ID = 0x4c4e4954,
    TINP_ID = 0x504e4954,
    TIAS_ID = 0x53414954,
    TIRS_ID = 0x53524954,
    TTGP_ID = 0x50475454,
    TTGE_ID = 0x45475454,
    TTEN_ID = 0x50475454,
    TTET_ID = 0x54455454,
    TTEC_ID = 0x43455454,
    TTED_ID = 0x44455454,
    TTEF_ID = 0x46455454,
    TETI_ID = 0x49544554,
    TEND_ID = 0x444e4554,
    TTEB_ID = 0x42455454,
    MPAI_ID = 0x4941504d,
    MPAV_ID = 0x5641504d,
    RPRM_ID = 0x4d525052,
    RPRF_ID = 0x46525052,
    AHCM_ID = 0x4d434841,
    AHCF_ID = 0x46434841,
    FTST_ID = 0x54535446,
    FTSM_ID = 0x4d535446,
    FTSF_ID = 0x46535446,
    DFTM_ID = 0x4d544644,
    DFTF_ID = 0x46544644,
    MSDK_ID = 0x4b44534d,
    MSDV_ID = 0x5644534d,
    MSID_ID = 0x4449534d,
    MSM0_ID = 0x304d534d,
    MSM1_ID = 0x314d534d,
    MPGN_ID = 0x4e47504d,
    MPGP_ID = 0x5047504d,
    MPPC_ID = 0x4350504d,
    MPPN_ID = 0x4e50504d,
    MPPM_ID = 0x4d50504d,
    MPPT_ID = 0x5450504d,
    MPPI_ID = 0x4950504d,
    MPPV_ID = 0x5650504d,
    MPPS_ID = 0x5350504d,
    MPPK_ID = 0x4b50504d,
    MPPF_ID = 0x4650504d,
    MPGS_ID = 0x5347504d,
    MLSI_ID = 0x49534c4d,
    MRSV_ID = 0x5653524d,
    MWGT_ID = 0x5447574d,
    MXWT_ID = 0x5457584d,
    FMRI_ID = 0x49524d46,
    FMRN_ID = 0x4e524d46,
    FMRS_ID = 0x53524d46,
    FMRC_ID = 0x43524d46,
    FMRB_ID = 0x42524d46,
    FMRD_ID = 0x44524d46,
    FMIN_ID = 0x4e494d46,
    WMAP_ID = 0x50414d57,
    PTOP_ID = 0x504f5450,
    NTOP_ID = 0x504f544e,
    NETO_ID = 0x4f54454e,
    QTOP_ID = 0x504f5451,
    DTID_ID = 0x44495444,
    DTGT_ID = 0x54475444,
    NPOT_ID = 0x544f504e,
    NNGT_ID = 0x54474e4e,
    NNUT_ID = 0x54554e4e,
    NQUT_ID = 0x5455514e,
    NPOS_ID = 0x534f504e,
    NNGS_ID = 0x53474e4e,
    NNUS_ID = 0x53554e4e,
    NQUS_ID = 0x5355514e,
    STSC_ID = 0x43535453,
    INTT_ID = 0x54544e49,
    ROSE_ID = 0x45534f52,
    GREE_ID = 0x45455247,
    PERI_ID = 0x4b524550,
    ACTV_ID = 0x56544341,
    CRIS_ID = 0x53495243,
    TIQS_ID = 0x53514954,
    SCQS_ID = 0x53514353,
    IOVR_ID = 0x52564f49,
    INCC_ID = 0x43434e49,
    WAMD_ID = 0x444d4157,
    SRAC_ID = 0x43415253,
    SADD_ID = 0x44444153,
    SAKD_ID = 0x444b4153,
    STKD_ID = 0x444b5453,
    SGNM_ID = 0x4d4e4753,
    SAPT_ID = 0x54504153,
    SRAF_ID = 0x46415253,
    OBTE_ID = 0x4554424f,
    OBML_ID = 0x4c4d424f,
    OBLT_ID = 0x544c424f,
    OBTM_ID = 0x4d54424f,
    OBTS_ID = 0x5354424f,
    OBTF_ID = 0x4654424f,
    OBTL_ID = 0x4c54424f,
    OBFL_ID = 0x4c46424f,
    STOP_ID = 0x504f5453,
    WZMD_ID = 0x444d5a57,
    INRD_ID = 0x44524e49,
    DAMA_ID = 0x414d4144,
    DAMC_ID = 0x434d4144,
    PRPS_ID = 0x53505250,
    RADR_ID = 0x52444152,
    REPT_ID = 0x54504552,
    AVMG_ID = 0x474d5641,
    AVFL_ID = 0x4c465641,
    AORD_ID = 0x44524f41,
    AOR2_ID = 0x32524f41,
    NTRM_ID = 0x4d52544e,
    CUSD_ID = 0x44535543,
    SSPN_ID = 0x4e505353,
    STCP_ID = 0x50435453,
    VISI_ID = 0x49534956,
    PCMB_ID = 0x424d4350,
    FIMD_ID = 0x444d4946,
    RVIS_ID = 0x53495652,
    WLEV_ID = 0x56454c57,
    BSMP_ID = 0x504d5342,
    BSMB_ID = 0x424d5342,
    BSMS_ID = 0x534d5342,
    BMMP_ID = 0x504d4d42,
    MASE_ID = 0x4553414d,
    LFSP_ID = 0x5053464c,
    LFSD_ID = 0x4453464c,
};