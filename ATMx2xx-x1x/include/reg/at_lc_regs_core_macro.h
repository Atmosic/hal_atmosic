/*                                                                           */
/* File:       at_lc_regs_core_macro.h                                       */
/*                                                                           */
/* Arguments:  /cad/tools/cadence/blueprint_3.7.5/Linux-64bit/blueprint -eval*/
/*             $DEFINE_PROPERTY=1; -ansic at_lc_regs_core.rdl                */
/*                                                                           */
/* Blueprint:   3.7.5 (Wed Feb 1 23:58:40 PST 2012)                          */
/* Machine:    gull                                                          */
/* OS:         Linux 2.6.32-696.13.2.el6.x86_64                              */
/* Description:                                                              */
/*                                                                           */
/* No Description Provided                                                   */
/*                                                                           */
/* Copyright (C) 2024 Atmosic Technologies.  All rights reserved             */
/*                                                                           */


#ifndef __REG_AT_LC_REGS_CORE_H__
#define __REG_AT_LC_REGS_CORE_H__

/**
 *****************************************************************************
 * @defgroup AT_LC_REGS_CORE at_lc_regs_core
 * @ingroup AT_REG
 * @brief at_lc_regs_core definitions.
 * @{
 *****************************************************************************
 */

/* macros for BlueprintGlobalNameSpace::ATLC_lc_ctrl0 */
/**
 * @defgroup at_lc_regs_core_lc_ctrl0 lc_ctrl0
 * @brief Contains register fields associated with lc_ctrl0. definitions.
 * @{
 */
#ifndef __ATLC_LC_CTRL0_MACRO__
#define __ATLC_LC_CTRL0_MACRO__

/* macros for field at_lc_md */
/**
 * @defgroup at_lc_regs_core_at_lc_md_field at_lc_md_field
 * @brief macros for field at_lc_md
 * @details 1 = use atmosic lc, 0 = use ceva lc
 * @{
 */
#define ATLC_LC_CTRL0__AT_LC_MD__SHIFT                                        0
#define ATLC_LC_CTRL0__AT_LC_MD__WIDTH                                        1
#define ATLC_LC_CTRL0__AT_LC_MD__MASK                               0x00000001U
#define ATLC_LC_CTRL0__AT_LC_MD__READ(src)      ((uint32_t)(src) & 0x00000001U)
#define ATLC_LC_CTRL0__AT_LC_MD__WRITE(src)     ((uint32_t)(src) & 0x00000001U)
#define ATLC_LC_CTRL0__AT_LC_MD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define ATLC_LC_CTRL0__AT_LC_MD__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define ATLC_LC_CTRL0__AT_LC_MD__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define ATLC_LC_CTRL0__AT_LC_MD__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define ATLC_LC_CTRL0__AT_LC_MD__RESET_VALUE                        0x00000000U
/** @} */

/* macros for field op_md */
/**
 * @defgroup at_lc_regs_core_op_md_field op_md_field
 * @brief macros for field op_md
 * @details operation mode 1 = host, 0 = device
 * @{
 */
#define ATLC_LC_CTRL0__OP_MD__SHIFT                                           1
#define ATLC_LC_CTRL0__OP_MD__WIDTH                                           1
#define ATLC_LC_CTRL0__OP_MD__MASK                                  0x00000002U
#define ATLC_LC_CTRL0__OP_MD__READ(src)  (((uint32_t)(src) & 0x00000002U) >> 1)
#define ATLC_LC_CTRL0__OP_MD__WRITE(src) (((uint32_t)(src) << 1) & 0x00000002U)
#define ATLC_LC_CTRL0__OP_MD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define ATLC_LC_CTRL0__OP_MD__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define ATLC_LC_CTRL0__OP_MD__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define ATLC_LC_CTRL0__OP_MD__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define ATLC_LC_CTRL0__OP_MD__RESET_VALUE                           0x00000000U
/** @} */

/* macros for field flw_md */
/**
 * @defgroup at_lc_regs_core_flw_md_field flw_md_field
 * @brief macros for field flw_md
 * @details flow cmode 1 = tcp, 0 = udp
 * @{
 */
#define ATLC_LC_CTRL0__FLW_MD__SHIFT                                          2
#define ATLC_LC_CTRL0__FLW_MD__WIDTH                                          1
#define ATLC_LC_CTRL0__FLW_MD__MASK                                 0x00000004U
#define ATLC_LC_CTRL0__FLW_MD__READ(src) (((uint32_t)(src) & 0x00000004U) >> 2)
#define ATLC_LC_CTRL0__FLW_MD__WRITE(src) \
                    (((uint32_t)(src)\
                    << 2) & 0x00000004U)
#define ATLC_LC_CTRL0__FLW_MD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | (((uint32_t)(src) <<\
                    2) & 0x00000004U)
#define ATLC_LC_CTRL0__FLW_MD__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 2) & ~0x00000004U)))
#define ATLC_LC_CTRL0__FLW_MD__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(1) << 2)
#define ATLC_LC_CTRL0__FLW_MD__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(0) << 2)
#define ATLC_LC_CTRL0__FLW_MD__RESET_VALUE                          0x00000000U
/** @} */

/* macros for field pwr_dn */
/**
 * @defgroup at_lc_regs_core_pwr_dn_field pwr_dn_field
 * @brief macros for field pwr_dn
 * @details power down
 * @{
 */
#define ATLC_LC_CTRL0__PWR_DN__SHIFT                                          3
#define ATLC_LC_CTRL0__PWR_DN__WIDTH                                          1
#define ATLC_LC_CTRL0__PWR_DN__MASK                                 0x00000008U
#define ATLC_LC_CTRL0__PWR_DN__READ(src) (((uint32_t)(src) & 0x00000008U) >> 3)
#define ATLC_LC_CTRL0__PWR_DN__WRITE(src) \
                    (((uint32_t)(src)\
                    << 3) & 0x00000008U)
#define ATLC_LC_CTRL0__PWR_DN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | (((uint32_t)(src) <<\
                    3) & 0x00000008U)
#define ATLC_LC_CTRL0__PWR_DN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 3) & ~0x00000008U)))
#define ATLC_LC_CTRL0__PWR_DN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((uint32_t)(1) << 3)
#define ATLC_LC_CTRL0__PWR_DN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((uint32_t)(0) << 3)
#define ATLC_LC_CTRL0__PWR_DN__RESET_VALUE                          0x00000000U
/** @} */

/* macros for field dr */
/**
 * @defgroup at_lc_regs_core_dr_field dr_field
 * @brief macros for field dr
 * @details data rate 00 = 1 Mbps, 01 = 2 Mbps, 10 = 250 Kbps
 * @{
 */
#define ATLC_LC_CTRL0__DR__SHIFT                                              4
#define ATLC_LC_CTRL0__DR__WIDTH                                              2
#define ATLC_LC_CTRL0__DR__MASK                                     0x00000030U
#define ATLC_LC_CTRL0__DR__READ(src)     (((uint32_t)(src) & 0x00000030U) >> 4)
#define ATLC_LC_CTRL0__DR__WRITE(src)    (((uint32_t)(src) << 4) & 0x00000030U)
#define ATLC_LC_CTRL0__DR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000030U) | (((uint32_t)(src) <<\
                    4) & 0x00000030U)
#define ATLC_LC_CTRL0__DR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 4) & ~0x00000030U)))
#define ATLC_LC_CTRL0__DR__RESET_VALUE                              0x00000001U
/** @} */

/* macros for field aa_en */
/**
 * @defgroup at_lc_regs_core_aa_en_field aa_en_field
 * @brief macros for field aa_en
 * @details enable autoacknowledgment
 * @{
 */
#define ATLC_LC_CTRL0__AA_EN__SHIFT                                           6
#define ATLC_LC_CTRL0__AA_EN__WIDTH                                           1
#define ATLC_LC_CTRL0__AA_EN__MASK                                  0x00000040U
#define ATLC_LC_CTRL0__AA_EN__READ(src)  (((uint32_t)(src) & 0x00000040U) >> 6)
#define ATLC_LC_CTRL0__AA_EN__WRITE(src) (((uint32_t)(src) << 6) & 0x00000040U)
#define ATLC_LC_CTRL0__AA_EN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000040U) | (((uint32_t)(src) <<\
                    6) & 0x00000040U)
#define ATLC_LC_CTRL0__AA_EN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 6) & ~0x00000040U)))
#define ATLC_LC_CTRL0__AA_EN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000040U) | ((uint32_t)(1) << 6)
#define ATLC_LC_CTRL0__AA_EN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000040U) | ((uint32_t)(0) << 6)
#define ATLC_LC_CTRL0__AA_EN__RESET_VALUE                           0x00000001U
/** @} */

/* macros for field rt_en */
/**
 * @defgroup at_lc_regs_core_rt_en_field rt_en_field
 * @brief macros for field rt_en
 * @details enable retransmission
 * @{
 */
#define ATLC_LC_CTRL0__RT_EN__SHIFT                                           7
#define ATLC_LC_CTRL0__RT_EN__WIDTH                                           1
#define ATLC_LC_CTRL0__RT_EN__MASK                                  0x00000080U
#define ATLC_LC_CTRL0__RT_EN__READ(src)  (((uint32_t)(src) & 0x00000080U) >> 7)
#define ATLC_LC_CTRL0__RT_EN__WRITE(src) (((uint32_t)(src) << 7) & 0x00000080U)
#define ATLC_LC_CTRL0__RT_EN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000080U) | (((uint32_t)(src) <<\
                    7) & 0x00000080U)
#define ATLC_LC_CTRL0__RT_EN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 7) & ~0x00000080U)))
#define ATLC_LC_CTRL0__RT_EN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000080U) | ((uint32_t)(1) << 7)
#define ATLC_LC_CTRL0__RT_EN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000080U) | ((uint32_t)(0) << 7)
#define ATLC_LC_CTRL0__RT_EN__RESET_VALUE                           0x00000001U
/** @} */

/* macros for field wht_en */
/**
 * @defgroup at_lc_regs_core_wht_en_field wht_en_field
 * @brief macros for field wht_en
 * @details enable whitenning
 * @{
 */
#define ATLC_LC_CTRL0__WHT_EN__SHIFT                                          8
#define ATLC_LC_CTRL0__WHT_EN__WIDTH                                          1
#define ATLC_LC_CTRL0__WHT_EN__MASK                                 0x00000100U
#define ATLC_LC_CTRL0__WHT_EN__READ(src) (((uint32_t)(src) & 0x00000100U) >> 8)
#define ATLC_LC_CTRL0__WHT_EN__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x00000100U)
#define ATLC_LC_CTRL0__WHT_EN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000100U) | (((uint32_t)(src) <<\
                    8) & 0x00000100U)
#define ATLC_LC_CTRL0__WHT_EN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x00000100U)))
#define ATLC_LC_CTRL0__WHT_EN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000100U) | ((uint32_t)(1) << 8)
#define ATLC_LC_CTRL0__WHT_EN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000100U) | ((uint32_t)(0) << 8)
#define ATLC_LC_CTRL0__WHT_EN__RESET_VALUE                          0x00000001U
/** @} */

/* macros for field crypt_md */
/**
 * @defgroup at_lc_regs_core_crypt_md_field crypt_md_field
 * @brief macros for field crypt_md
 * @details crypto mode 000 = no crypto 001 = counter, 010 = ebc, 011 = cbc
 * @{
 */
#define ATLC_LC_CTRL0__CRYPT_MD__SHIFT                                        9
#define ATLC_LC_CTRL0__CRYPT_MD__WIDTH                                        3
#define ATLC_LC_CTRL0__CRYPT_MD__MASK                               0x00000e00U
#define ATLC_LC_CTRL0__CRYPT_MD__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000e00U) >> 9)
#define ATLC_LC_CTRL0__CRYPT_MD__WRITE(src) \
                    (((uint32_t)(src)\
                    << 9) & 0x00000e00U)
#define ATLC_LC_CTRL0__CRYPT_MD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000e00U) | (((uint32_t)(src) <<\
                    9) & 0x00000e00U)
#define ATLC_LC_CTRL0__CRYPT_MD__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 9) & ~0x00000e00U)))
#define ATLC_LC_CTRL0__CRYPT_MD__RESET_VALUE                        0x00000000U
/** @} */

/* macros for field sync_en */
/**
 * @defgroup at_lc_regs_core_sync_en_field sync_en_field
 * @brief macros for field sync_en
 * @details enable sync word 0 and/or sync word 1
 * @{
 */
#define ATLC_LC_CTRL0__SYNC_EN__SHIFT                                        12
#define ATLC_LC_CTRL0__SYNC_EN__WIDTH                                         2
#define ATLC_LC_CTRL0__SYNC_EN__MASK                                0x00003000U
#define ATLC_LC_CTRL0__SYNC_EN__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00003000U) >> 12)
#define ATLC_LC_CTRL0__SYNC_EN__WRITE(src) \
                    (((uint32_t)(src)\
                    << 12) & 0x00003000U)
#define ATLC_LC_CTRL0__SYNC_EN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00003000U) | (((uint32_t)(src) <<\
                    12) & 0x00003000U)
#define ATLC_LC_CTRL0__SYNC_EN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 12) & ~0x00003000U)))
#define ATLC_LC_CTRL0__SYNC_EN__RESET_VALUE                         0x00000001U
/** @} */

/* macros for field crc_len */
/**
 * @defgroup at_lc_regs_core_crc_len_field crc_len_field
 * @brief macros for field crc_len
 * @details crc length in bytes - valid between 0 and 4
 * @{
 */
#define ATLC_LC_CTRL0__CRC_LEN__SHIFT                                        16
#define ATLC_LC_CTRL0__CRC_LEN__WIDTH                                         3
#define ATLC_LC_CTRL0__CRC_LEN__MASK                                0x00070000U
#define ATLC_LC_CTRL0__CRC_LEN__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00070000U) >> 16)
#define ATLC_LC_CTRL0__CRC_LEN__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00070000U)
#define ATLC_LC_CTRL0__CRC_LEN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00070000U) | (((uint32_t)(src) <<\
                    16) & 0x00070000U)
#define ATLC_LC_CTRL0__CRC_LEN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00070000U)))
#define ATLC_LC_CTRL0__CRC_LEN__RESET_VALUE                         0x00000001U
/** @} */

/* macros for field addr_len */
/**
 * @defgroup at_lc_regs_core_addr_len_field addr_len_field
 * @brief macros for field addr_len
 * @details address length in bytes - valid between 0 and 1
 * @{
 */
#define ATLC_LC_CTRL0__ADDR_LEN__SHIFT                                       20
#define ATLC_LC_CTRL0__ADDR_LEN__WIDTH                                        3
#define ATLC_LC_CTRL0__ADDR_LEN__MASK                               0x00700000U
#define ATLC_LC_CTRL0__ADDR_LEN__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00700000U) >> 20)
#define ATLC_LC_CTRL0__ADDR_LEN__WRITE(src) \
                    (((uint32_t)(src)\
                    << 20) & 0x00700000U)
#define ATLC_LC_CTRL0__ADDR_LEN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00700000U) | (((uint32_t)(src) <<\
                    20) & 0x00700000U)
#define ATLC_LC_CTRL0__ADDR_LEN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 20) & ~0x00700000U)))
#define ATLC_LC_CTRL0__ADDR_LEN__RESET_VALUE                        0x00000001U
/** @} */

/* macros for field sync_len */
/**
 * @defgroup at_lc_regs_core_sync_len_field sync_len_field
 * @brief macros for field sync_len
 * @details sync word length in bytes - valid between 2 and 4
 * @{
 */
#define ATLC_LC_CTRL0__SYNC_LEN__SHIFT                                       24
#define ATLC_LC_CTRL0__SYNC_LEN__WIDTH                                        3
#define ATLC_LC_CTRL0__SYNC_LEN__MASK                               0x07000000U
#define ATLC_LC_CTRL0__SYNC_LEN__READ(src) \
                    (((uint32_t)(src)\
                    & 0x07000000U) >> 24)
#define ATLC_LC_CTRL0__SYNC_LEN__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0x07000000U)
#define ATLC_LC_CTRL0__SYNC_LEN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x07000000U) | (((uint32_t)(src) <<\
                    24) & 0x07000000U)
#define ATLC_LC_CTRL0__SYNC_LEN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x07000000U)))
#define ATLC_LC_CTRL0__SYNC_LEN__RESET_VALUE                        0x00000004U
/** @} */
#define ATLC_LC_CTRL0__TYPE                                            uint32_t
#define ATLC_LC_CTRL0__READ                                         0x07773fffU
#define ATLC_LC_CTRL0__WRITE                                        0x07773fffU
#define ATLC_LC_CTRL0__PRESERVED                                    0x00000000U
#define ATLC_LC_CTRL0__RESET_VALUE                                  0x041111d0U

#endif /* __ATLC_LC_CTRL0_MACRO__ */

/** @} end of lc_ctrl0 */

/* macros for BlueprintGlobalNameSpace::ATLC_lc_ctrl1 */
/**
 * @defgroup at_lc_regs_core_lc_ctrl1 lc_ctrl1
 * @brief Contains register fields associated with lc_ctrl1. definitions.
 * @{
 */
#ifndef __ATLC_LC_CTRL1_MACRO__
#define __ATLC_LC_CTRL1_MACRO__

/* macros for field pyld_len */
/**
 * @defgroup at_lc_regs_core_pyld_len_field pyld_len_field
 * @brief macros for field pyld_len
 * @details payload length in bytes used in UDP mode
 * @{
 */
#define ATLC_LC_CTRL1__PYLD_LEN__SHIFT                                        0
#define ATLC_LC_CTRL1__PYLD_LEN__WIDTH                                        8
#define ATLC_LC_CTRL1__PYLD_LEN__MASK                               0x000000ffU
#define ATLC_LC_CTRL1__PYLD_LEN__READ(src)      ((uint32_t)(src) & 0x000000ffU)
#define ATLC_LC_CTRL1__PYLD_LEN__WRITE(src)     ((uint32_t)(src) & 0x000000ffU)
#define ATLC_LC_CTRL1__PYLD_LEN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define ATLC_LC_CTRL1__PYLD_LEN__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000000ffU)))
#define ATLC_LC_CTRL1__PYLD_LEN__RESET_VALUE                        0x00000020U
/** @} */

/* macros for field pyld_len_wdth */
/**
 * @defgroup at_lc_regs_core_pyld_len_wdth_field pyld_len_wdth_field
 * @brief macros for field pyld_len_wdth
 * @details width of payload length field in the header used in TCP mode [6-8]1
 * @{
 */
#define ATLC_LC_CTRL1__PYLD_LEN_WDTH__SHIFT                                   8
#define ATLC_LC_CTRL1__PYLD_LEN_WDTH__WIDTH                                   4
#define ATLC_LC_CTRL1__PYLD_LEN_WDTH__MASK                          0x00000f00U
#define ATLC_LC_CTRL1__PYLD_LEN_WDTH__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000f00U) >> 8)
#define ATLC_LC_CTRL1__PYLD_LEN_WDTH__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x00000f00U)
#define ATLC_LC_CTRL1__PYLD_LEN_WDTH__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000f00U) | (((uint32_t)(src) <<\
                    8) & 0x00000f00U)
#define ATLC_LC_CTRL1__PYLD_LEN_WDTH__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x00000f00U)))
#define ATLC_LC_CTRL1__PYLD_LEN_WDTH__RESET_VALUE                   0x00000006U
/** @} */
#define ATLC_LC_CTRL1__TYPE                                            uint32_t
#define ATLC_LC_CTRL1__READ                                         0x00000fffU
#define ATLC_LC_CTRL1__WRITE                                        0x00000fffU
#define ATLC_LC_CTRL1__PRESERVED                                    0x00000000U
#define ATLC_LC_CTRL1__RESET_VALUE                                  0x00000620U

#endif /* __ATLC_LC_CTRL1_MACRO__ */

/** @} end of lc_ctrl1 */

/* macros for BlueprintGlobalNameSpace::ATLC_lc_ctrl2 */
/**
 * @defgroup at_lc_regs_core_lc_ctrl2 lc_ctrl2
 * @brief Contains register fields associated with lc_ctrl2. definitions.
 * @{
 */
#ifndef __ATLC_LC_CTRL2_MACRO__
#define __ATLC_LC_CTRL2_MACRO__

/* macros for field rx_to */
/**
 * @defgroup at_lc_regs_core_rx_to_field rx_to_field
 * @brief macros for field rx_to
 * @details receive window time out in micro seconds
 * @{
 */
#define ATLC_LC_CTRL2__RX_TO__SHIFT                                           0
#define ATLC_LC_CTRL2__RX_TO__WIDTH                                          16
#define ATLC_LC_CTRL2__RX_TO__MASK                                  0x0000ffffU
#define ATLC_LC_CTRL2__RX_TO__READ(src)         ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_LC_CTRL2__RX_TO__WRITE(src)        ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_LC_CTRL2__RX_TO__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ffffU) | ((uint32_t)(src) &\
                    0x0000ffffU)
#define ATLC_LC_CTRL2__RX_TO__VERIFY(src) (!(((uint32_t)(src) & ~0x0000ffffU)))
#define ATLC_LC_CTRL2__RX_TO__RESET_VALUE                           0x000000c8U
/** @} */

/* macros for field tx_ack_to */
/**
 * @defgroup at_lc_regs_core_tx_ack_to_field tx_ack_to_field
 * @brief macros for field tx_ack_to
 * @details tx acknowledgment timeout in micro seconds
 * @{
 */
#define ATLC_LC_CTRL2__TX_ACK_TO__SHIFT                                      16
#define ATLC_LC_CTRL2__TX_ACK_TO__WIDTH                                      16
#define ATLC_LC_CTRL2__TX_ACK_TO__MASK                              0xffff0000U
#define ATLC_LC_CTRL2__TX_ACK_TO__READ(src) \
                    (((uint32_t)(src)\
                    & 0xffff0000U) >> 16)
#define ATLC_LC_CTRL2__TX_ACK_TO__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0xffff0000U)
#define ATLC_LC_CTRL2__TX_ACK_TO__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffff0000U) | (((uint32_t)(src) <<\
                    16) & 0xffff0000U)
#define ATLC_LC_CTRL2__TX_ACK_TO__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0xffff0000U)))
#define ATLC_LC_CTRL2__TX_ACK_TO__RESET_VALUE                       0x000000c8U
/** @} */
#define ATLC_LC_CTRL2__TYPE                                            uint32_t
#define ATLC_LC_CTRL2__READ                                         0xffffffffU
#define ATLC_LC_CTRL2__WRITE                                        0xffffffffU
#define ATLC_LC_CTRL2__PRESERVED                                    0x00000000U
#define ATLC_LC_CTRL2__RESET_VALUE                                  0x00c800c8U

#endif /* __ATLC_LC_CTRL2_MACRO__ */

/** @} end of lc_ctrl2 */

/* macros for BlueprintGlobalNameSpace::ATLC_lc_ctrl3 */
/**
 * @defgroup at_lc_regs_core_lc_ctrl3 lc_ctrl3
 * @brief Contains register fields associated with lc_ctrl3. definitions.
 * @{
 */
#ifndef __ATLC_LC_CTRL3_MACRO__
#define __ATLC_LC_CTRL3_MACRO__

/* macros for field artd */
/**
 * @defgroup at_lc_regs_core_artd_field artd_field
 * @brief macros for field artd
 * @details auto retransmit delay = 250 us * (artd + 1)
 * @{
 */
#define ATLC_LC_CTRL3__ARTD__SHIFT                                            0
#define ATLC_LC_CTRL3__ARTD__WIDTH                                            4
#define ATLC_LC_CTRL3__ARTD__MASK                                   0x0000000fU
#define ATLC_LC_CTRL3__ARTD__READ(src)          ((uint32_t)(src) & 0x0000000fU)
#define ATLC_LC_CTRL3__ARTD__WRITE(src)         ((uint32_t)(src) & 0x0000000fU)
#define ATLC_LC_CTRL3__ARTD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000000fU) | ((uint32_t)(src) &\
                    0x0000000fU)
#define ATLC_LC_CTRL3__ARTD__VERIFY(src)  (!(((uint32_t)(src) & ~0x0000000fU)))
#define ATLC_LC_CTRL3__ARTD__RESET_VALUE                            0x00000000U
/** @} */

/* macros for field artmx */
/**
 * @defgroup at_lc_regs_core_artmx_field artmx_field
 * @brief macros for field artmx
 * @details auto retransmit count for maximum number of retransmit
 * @{
 */
#define ATLC_LC_CTRL3__ARTMX__SHIFT                                           4
#define ATLC_LC_CTRL3__ARTMX__WIDTH                                           4
#define ATLC_LC_CTRL3__ARTMX__MASK                                  0x000000f0U
#define ATLC_LC_CTRL3__ARTMX__READ(src)  (((uint32_t)(src) & 0x000000f0U) >> 4)
#define ATLC_LC_CTRL3__ARTMX__WRITE(src) (((uint32_t)(src) << 4) & 0x000000f0U)
#define ATLC_LC_CTRL3__ARTMX__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000f0U) | (((uint32_t)(src) <<\
                    4) & 0x000000f0U)
#define ATLC_LC_CTRL3__ARTMX__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 4) & ~0x000000f0U)))
#define ATLC_LC_CTRL3__ARTMX__RESET_VALUE                           0x00000000U
/** @} */
#define ATLC_LC_CTRL3__TYPE                                            uint32_t
#define ATLC_LC_CTRL3__READ                                         0x000000ffU
#define ATLC_LC_CTRL3__WRITE                                        0x000000ffU
#define ATLC_LC_CTRL3__PRESERVED                                    0x00000000U
#define ATLC_LC_CTRL3__RESET_VALUE                                  0x00000000U

#endif /* __ATLC_LC_CTRL3_MACRO__ */

/** @} end of lc_ctrl3 */

/* macros for BlueprintGlobalNameSpace::ATLC_lc_ctrl4 */
/**
 * @defgroup at_lc_regs_core_lc_ctrl4 lc_ctrl4
 * @brief Contains register fields associated with lc_ctrl4. definitions.
 * @{
 */
#ifndef __ATLC_LC_CTRL4_MACRO__
#define __ATLC_LC_CTRL4_MACRO__

/* macros for field chnl_hp_en */
/**
 * @defgroup at_lc_regs_core_chnl_hp_en_field chnl_hp_en_field
 * @brief macros for field chnl_hp_en
 * @details enable auto channel hopping
 * @{
 */
#define ATLC_LC_CTRL4__CHNL_HP_EN__SHIFT                                      0
#define ATLC_LC_CTRL4__CHNL_HP_EN__WIDTH                                      1
#define ATLC_LC_CTRL4__CHNL_HP_EN__MASK                             0x00000001U
#define ATLC_LC_CTRL4__CHNL_HP_EN__READ(src)    ((uint32_t)(src) & 0x00000001U)
#define ATLC_LC_CTRL4__CHNL_HP_EN__WRITE(src)   ((uint32_t)(src) & 0x00000001U)
#define ATLC_LC_CTRL4__CHNL_HP_EN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define ATLC_LC_CTRL4__CHNL_HP_EN__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define ATLC_LC_CTRL4__CHNL_HP_EN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define ATLC_LC_CTRL4__CHNL_HP_EN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define ATLC_LC_CTRL4__CHNL_HP_EN__RESET_VALUE                      0x00000000U
/** @} */

/* macros for field chnl_idx */
/**
 * @defgroup at_lc_regs_core_chnl_idx_field chnl_idx_field
 * @brief macros for field chnl_idx
 * @details F = 2370 + chnl_idx MHz
 * @{
 */
#define ATLC_LC_CTRL4__CHNL_IDX__SHIFT                                        8
#define ATLC_LC_CTRL4__CHNL_IDX__WIDTH                                        7
#define ATLC_LC_CTRL4__CHNL_IDX__MASK                               0x00007f00U
#define ATLC_LC_CTRL4__CHNL_IDX__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00007f00U) >> 8)
#define ATLC_LC_CTRL4__CHNL_IDX__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x00007f00U)
#define ATLC_LC_CTRL4__CHNL_IDX__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00007f00U) | (((uint32_t)(src) <<\
                    8) & 0x00007f00U)
#define ATLC_LC_CTRL4__CHNL_IDX__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x00007f00U)))
#define ATLC_LC_CTRL4__CHNL_IDX__RESET_VALUE                        0x00000001U
/** @} */

/* macros for field tx_pwr */
/**
 * @defgroup at_lc_regs_core_tx_pwr_field tx_pwr_field
 * @brief macros for field tx_pwr
 * @details tx power pass directly to radio
 * @{
 */
#define ATLC_LC_CTRL4__TX_PWR__SHIFT                                         16
#define ATLC_LC_CTRL4__TX_PWR__WIDTH                                          4
#define ATLC_LC_CTRL4__TX_PWR__MASK                                 0x000f0000U
#define ATLC_LC_CTRL4__TX_PWR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x000f0000U) >> 16)
#define ATLC_LC_CTRL4__TX_PWR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x000f0000U)
#define ATLC_LC_CTRL4__TX_PWR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000f0000U) | (((uint32_t)(src) <<\
                    16) & 0x000f0000U)
#define ATLC_LC_CTRL4__TX_PWR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x000f0000U)))
#define ATLC_LC_CTRL4__TX_PWR__RESET_VALUE                          0x00000001U
/** @} */
#define ATLC_LC_CTRL4__TYPE                                            uint32_t
#define ATLC_LC_CTRL4__READ                                         0x000f7f01U
#define ATLC_LC_CTRL4__WRITE                                        0x000f7f01U
#define ATLC_LC_CTRL4__PRESERVED                                    0x00000000U
#define ATLC_LC_CTRL4__RESET_VALUE                                  0x00010100U

#endif /* __ATLC_LC_CTRL4_MACRO__ */

/** @} end of lc_ctrl4 */

/* macros for BlueprintGlobalNameSpace::ATLC_lc_ctrl5 */
/**
 * @defgroup at_lc_regs_core_lc_ctrl5 lc_ctrl5
 * @brief Contains register fields associated with lc_ctrl5. definitions.
 * @{
 */
#ifndef __ATLC_LC_CTRL5_MACRO__
#define __ATLC_LC_CTRL5_MACRO__

/* macros for field endianness */
/**
 * @defgroup at_lc_regs_core_endianness_field endianness_field
 * @brief macros for field endianness
 * @details 0 = lsb of each byte LSB is transmitted first, 1 = msb of each byte MSB is transmitted first
 * @{
 */
#define ATLC_LC_CTRL5__ENDIANNESS__SHIFT                                      0
#define ATLC_LC_CTRL5__ENDIANNESS__WIDTH                                      1
#define ATLC_LC_CTRL5__ENDIANNESS__MASK                             0x00000001U
#define ATLC_LC_CTRL5__ENDIANNESS__READ(src)    ((uint32_t)(src) & 0x00000001U)
#define ATLC_LC_CTRL5__ENDIANNESS__WRITE(src)   ((uint32_t)(src) & 0x00000001U)
#define ATLC_LC_CTRL5__ENDIANNESS__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define ATLC_LC_CTRL5__ENDIANNESS__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define ATLC_LC_CTRL5__ENDIANNESS__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define ATLC_LC_CTRL5__ENDIANNESS__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define ATLC_LC_CTRL5__ENDIANNESS__RESET_VALUE                      0x00000000U
/** @} */
#define ATLC_LC_CTRL5__TYPE                                            uint32_t
#define ATLC_LC_CTRL5__READ                                         0x00000001U
#define ATLC_LC_CTRL5__WRITE                                        0x00000001U
#define ATLC_LC_CTRL5__PRESERVED                                    0x00000000U
#define ATLC_LC_CTRL5__RESET_VALUE                                  0x00000000U

#endif /* __ATLC_LC_CTRL5_MACRO__ */

/** @} end of lc_ctrl5 */

/* macros for BlueprintGlobalNameSpace::ATLC_lc_ctrl6 */
/**
 * @defgroup at_lc_regs_core_lc_ctrl6 lc_ctrl6
 * @brief Contains register fields associated with lc_ctrl6. definitions.
 * @{
 */
#ifndef __ATLC_LC_CTRL6_MACRO__
#define __ATLC_LC_CTRL6_MACRO__

/* macros for field clken */
/**
 * @defgroup at_lc_regs_core_clken_field clken_field
 * @brief macros for field clken
 * @details overwrite the hw controlled clken
 * @{
 */
#define ATLC_LC_CTRL6__CLKEN__SHIFT                                           0
#define ATLC_LC_CTRL6__CLKEN__WIDTH                                           1
#define ATLC_LC_CTRL6__CLKEN__MASK                                  0x00000001U
#define ATLC_LC_CTRL6__CLKEN__READ(src)         ((uint32_t)(src) & 0x00000001U)
#define ATLC_LC_CTRL6__CLKEN__WRITE(src)        ((uint32_t)(src) & 0x00000001U)
#define ATLC_LC_CTRL6__CLKEN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define ATLC_LC_CTRL6__CLKEN__VERIFY(src) (!(((uint32_t)(src) & ~0x00000001U)))
#define ATLC_LC_CTRL6__CLKEN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define ATLC_LC_CTRL6__CLKEN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define ATLC_LC_CTRL6__CLKEN__RESET_VALUE                           0x00000000U
/** @} */

/* macros for field crypt_gclken */
/**
 * @defgroup at_lc_regs_core_crypt_gclken_field crypt_gclken_field
 * @brief macros for field crypt_gclken
 * @details overwrite the hw controlled crypt_gclken
 * @{
 */
#define ATLC_LC_CTRL6__CRYPT_GCLKEN__SHIFT                                    1
#define ATLC_LC_CTRL6__CRYPT_GCLKEN__WIDTH                                    1
#define ATLC_LC_CTRL6__CRYPT_GCLKEN__MASK                           0x00000002U
#define ATLC_LC_CTRL6__CRYPT_GCLKEN__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define ATLC_LC_CTRL6__CRYPT_GCLKEN__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define ATLC_LC_CTRL6__CRYPT_GCLKEN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define ATLC_LC_CTRL6__CRYPT_GCLKEN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define ATLC_LC_CTRL6__CRYPT_GCLKEN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define ATLC_LC_CTRL6__CRYPT_GCLKEN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define ATLC_LC_CTRL6__CRYPT_GCLKEN__RESET_VALUE                    0x00000000U
/** @} */

/* macros for field hgclken */
/**
 * @defgroup at_lc_regs_core_hgclken_field hgclken_field
 * @brief macros for field hgclken
 * @details overwrite the hw controlled hgclken
 * @{
 */
#define ATLC_LC_CTRL6__HGCLKEN__SHIFT                                         2
#define ATLC_LC_CTRL6__HGCLKEN__WIDTH                                         1
#define ATLC_LC_CTRL6__HGCLKEN__MASK                                0x00000004U
#define ATLC_LC_CTRL6__HGCLKEN__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000004U) >> 2)
#define ATLC_LC_CTRL6__HGCLKEN__WRITE(src) \
                    (((uint32_t)(src)\
                    << 2) & 0x00000004U)
#define ATLC_LC_CTRL6__HGCLKEN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | (((uint32_t)(src) <<\
                    2) & 0x00000004U)
#define ATLC_LC_CTRL6__HGCLKEN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 2) & ~0x00000004U)))
#define ATLC_LC_CTRL6__HGCLKEN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(1) << 2)
#define ATLC_LC_CTRL6__HGCLKEN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(0) << 2)
#define ATLC_LC_CTRL6__HGCLKEN__RESET_VALUE                         0x00000000U
/** @} */
#define ATLC_LC_CTRL6__TYPE                                            uint32_t
#define ATLC_LC_CTRL6__READ                                         0x00000007U
#define ATLC_LC_CTRL6__WRITE                                        0x00000007U
#define ATLC_LC_CTRL6__PRESERVED                                    0x00000000U
#define ATLC_LC_CTRL6__RESET_VALUE                                  0x00000000U

#endif /* __ATLC_LC_CTRL6_MACRO__ */

/** @} end of lc_ctrl6 */

/* macros for BlueprintGlobalNameSpace::ATLC_lc_ctrl7 */
/**
 * @defgroup at_lc_regs_core_lc_ctrl7 lc_ctrl7
 * @brief Contains register fields associated with lc_ctrl7. definitions.
 * @{
 */
#ifndef __ATLC_LC_CTRL7_MACRO__
#define __ATLC_LC_CTRL7_MACRO__

/* macros for field dbg_sel */
/**
 * @defgroup at_lc_regs_core_dbg_sel_field dbg_sel_field
 * @brief macros for field dbg_sel
 * @details debug bus select
 * @{
 */
#define ATLC_LC_CTRL7__DBG_SEL__SHIFT                                         0
#define ATLC_LC_CTRL7__DBG_SEL__WIDTH                                         4
#define ATLC_LC_CTRL7__DBG_SEL__MASK                                0x0000000fU
#define ATLC_LC_CTRL7__DBG_SEL__READ(src)       ((uint32_t)(src) & 0x0000000fU)
#define ATLC_LC_CTRL7__DBG_SEL__WRITE(src)      ((uint32_t)(src) & 0x0000000fU)
#define ATLC_LC_CTRL7__DBG_SEL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000000fU) | ((uint32_t)(src) &\
                    0x0000000fU)
#define ATLC_LC_CTRL7__DBG_SEL__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x0000000fU)))
#define ATLC_LC_CTRL7__DBG_SEL__RESET_VALUE                         0x00000000U
/** @} */
#define ATLC_LC_CTRL7__TYPE                                            uint32_t
#define ATLC_LC_CTRL7__READ                                         0x0000000fU
#define ATLC_LC_CTRL7__WRITE                                        0x0000000fU
#define ATLC_LC_CTRL7__PRESERVED                                    0x00000000U
#define ATLC_LC_CTRL7__RESET_VALUE                                  0x00000000U

#endif /* __ATLC_LC_CTRL7_MACRO__ */

/** @} end of lc_ctrl7 */

/* macros for BlueprintGlobalNameSpace::ATLC_mdm_ctrl0 */
/**
 * @defgroup at_lc_regs_core_mdm_ctrl0 mdm_ctrl0
 * @brief Contains register fields associated with mdm_ctrl0. definitions.
 * @{
 */
#ifndef __ATLC_MDM_CTRL0_MACRO__
#define __ATLC_MDM_CTRL0_MACRO__

/* macros for field rx_en_low_tm */
/**
 * @defgroup at_lc_regs_core_rx_en_low_tm_field rx_en_low_tm_field
 * @brief macros for field rx_en_low_tm
 * @details number of 8 MHz clock rx_en need to be deasserted before asserted to look for packet
 * @{
 */
#define ATLC_MDM_CTRL0__RX_EN_LOW_TM__SHIFT                                   0
#define ATLC_MDM_CTRL0__RX_EN_LOW_TM__WIDTH                                   8
#define ATLC_MDM_CTRL0__RX_EN_LOW_TM__MASK                          0x000000ffU
#define ATLC_MDM_CTRL0__RX_EN_LOW_TM__READ(src) ((uint32_t)(src) & 0x000000ffU)
#define ATLC_MDM_CTRL0__RX_EN_LOW_TM__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x000000ffU)
#define ATLC_MDM_CTRL0__RX_EN_LOW_TM__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define ATLC_MDM_CTRL0__RX_EN_LOW_TM__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000000ffU)))
#define ATLC_MDM_CTRL0__RX_EN_LOW_TM__RESET_VALUE                   0x00000008U
/** @} */
#define ATLC_MDM_CTRL0__TYPE                                           uint32_t
#define ATLC_MDM_CTRL0__READ                                        0x000000ffU
#define ATLC_MDM_CTRL0__WRITE                                       0x000000ffU
#define ATLC_MDM_CTRL0__PRESERVED                                   0x00000000U
#define ATLC_MDM_CTRL0__RESET_VALUE                                 0x00000008U

#endif /* __ATLC_MDM_CTRL0_MACRO__ */

/** @} end of mdm_ctrl0 */

/* macros for BlueprintGlobalNameSpace::ATLC_lc_lp_ctrl0 */
/**
 * @defgroup at_lc_regs_core_lc_lp_ctrl0 lc_lp_ctrl0
 * @brief Contains register fields associated with lc_lp_ctrl0. definitions.
 * @{
 */
#ifndef __ATLC_LC_LP_CTRL0_MACRO__
#define __ATLC_LC_LP_CTRL0_MACRO__

/* macros for field osc_slp_en */
/**
 * @defgroup at_lc_regs_core_osc_slp_en_field osc_slp_en_field
 * @brief macros for field osc_slp_en
 * @details Enable oscillator to power down during sleep state
 * @{
 */
#define ATLC_LC_LP_CTRL0__OSC_SLP_EN__SHIFT                                   0
#define ATLC_LC_LP_CTRL0__OSC_SLP_EN__WIDTH                                   1
#define ATLC_LC_LP_CTRL0__OSC_SLP_EN__MASK                          0x00000001U
#define ATLC_LC_LP_CTRL0__OSC_SLP_EN__READ(src) ((uint32_t)(src) & 0x00000001U)
#define ATLC_LC_LP_CTRL0__OSC_SLP_EN__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define ATLC_LC_LP_CTRL0__OSC_SLP_EN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define ATLC_LC_LP_CTRL0__OSC_SLP_EN__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define ATLC_LC_LP_CTRL0__OSC_SLP_EN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define ATLC_LC_LP_CTRL0__OSC_SLP_EN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define ATLC_LC_LP_CTRL0__OSC_SLP_EN__RESET_VALUE                   0x00000000U
/** @} */

/* macros for field radio_slp_en */
/**
 * @defgroup at_lc_regs_core_radio_slp_en_field radio_slp_en_field
 * @brief macros for field radio_slp_en
 * @details Enable radio to power down during sleep state
 * @{
 */
#define ATLC_LC_LP_CTRL0__RADIO_SLP_EN__SHIFT                                 1
#define ATLC_LC_LP_CTRL0__RADIO_SLP_EN__WIDTH                                 1
#define ATLC_LC_LP_CTRL0__RADIO_SLP_EN__MASK                        0x00000002U
#define ATLC_LC_LP_CTRL0__RADIO_SLP_EN__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define ATLC_LC_LP_CTRL0__RADIO_SLP_EN__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define ATLC_LC_LP_CTRL0__RADIO_SLP_EN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define ATLC_LC_LP_CTRL0__RADIO_SLP_EN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define ATLC_LC_LP_CTRL0__RADIO_SLP_EN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define ATLC_LC_LP_CTRL0__RADIO_SLP_EN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define ATLC_LC_LP_CTRL0__RADIO_SLP_EN__RESET_VALUE                 0x00000000U
/** @} */

/* macros for field extwu_dis */
/**
 * @defgroup at_lc_regs_core_extwu_dis_field extwu_dis_field
 * @brief macros for field extwu_dis
 * @details External wakeup disable
 * @{
 */
#define ATLC_LC_LP_CTRL0__EXTWU_DIS__SHIFT                                    3
#define ATLC_LC_LP_CTRL0__EXTWU_DIS__WIDTH                                    1
#define ATLC_LC_LP_CTRL0__EXTWU_DIS__MASK                           0x00000008U
#define ATLC_LC_LP_CTRL0__EXTWU_DIS__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000008U) >> 3)
#define ATLC_LC_LP_CTRL0__EXTWU_DIS__WRITE(src) \
                    (((uint32_t)(src)\
                    << 3) & 0x00000008U)
#define ATLC_LC_LP_CTRL0__EXTWU_DIS__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | (((uint32_t)(src) <<\
                    3) & 0x00000008U)
#define ATLC_LC_LP_CTRL0__EXTWU_DIS__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 3) & ~0x00000008U)))
#define ATLC_LC_LP_CTRL0__EXTWU_DIS__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((uint32_t)(1) << 3)
#define ATLC_LC_LP_CTRL0__EXTWU_DIS__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((uint32_t)(0) << 3)
#define ATLC_LC_LP_CTRL0__EXTWU_DIS__RESET_VALUE                    0x00000000U
/** @} */

/* macros for field slp */
/**
 * @defgroup at_lc_regs_core_slp_field slp_field
 * @brief macros for field slp
 * @details Go tinto sleep state
 * @{
 */
#define ATLC_LC_LP_CTRL0__SLP__SHIFT                                          4
#define ATLC_LC_LP_CTRL0__SLP__WIDTH                                          1
#define ATLC_LC_LP_CTRL0__SLP__MASK                                 0x00000010U
#define ATLC_LC_LP_CTRL0__SLP__READ(src) (((uint32_t)(src) & 0x00000010U) >> 4)
#define ATLC_LC_LP_CTRL0__SLP__WRITE(src) \
                    (((uint32_t)(src)\
                    << 4) & 0x00000010U)
#define ATLC_LC_LP_CTRL0__SLP__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | (((uint32_t)(src) <<\
                    4) & 0x00000010U)
#define ATLC_LC_LP_CTRL0__SLP__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 4) & ~0x00000010U)))
#define ATLC_LC_LP_CTRL0__SLP__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(1) << 4)
#define ATLC_LC_LP_CTRL0__SLP__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(0) << 4)
#define ATLC_LC_LP_CTRL0__SLP__RESET_VALUE                          0x00000000U
/** @} */

/* macros for field sw_wu_req */
/**
 * @defgroup at_lc_regs_core_sw_wu_req_field sw_wu_req_field
 * @brief macros for field sw_wu_req
 * @details Software wakeup request
 * @{
 */
#define ATLC_LC_LP_CTRL0__SW_WU_REQ__SHIFT                                    5
#define ATLC_LC_LP_CTRL0__SW_WU_REQ__WIDTH                                    1
#define ATLC_LC_LP_CTRL0__SW_WU_REQ__MASK                           0x00000020U
#define ATLC_LC_LP_CTRL0__SW_WU_REQ__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000020U) >> 5)
#define ATLC_LC_LP_CTRL0__SW_WU_REQ__WRITE(src) \
                    (((uint32_t)(src)\
                    << 5) & 0x00000020U)
#define ATLC_LC_LP_CTRL0__SW_WU_REQ__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | (((uint32_t)(src) <<\
                    5) & 0x00000020U)
#define ATLC_LC_LP_CTRL0__SW_WU_REQ__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 5) & ~0x00000020U)))
#define ATLC_LC_LP_CTRL0__SW_WU_REQ__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | ((uint32_t)(1) << 5)
#define ATLC_LC_LP_CTRL0__SW_WU_REQ__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | ((uint32_t)(0) << 5)
#define ATLC_LC_LP_CTRL0__SW_WU_REQ__RESET_VALUE                    0x00000000U
/** @} */
#define ATLC_LC_LP_CTRL0__TYPE                                         uint32_t
#define ATLC_LC_LP_CTRL0__READ                                      0x0000003bU
#define ATLC_LC_LP_CTRL0__WRITE                                     0x0000003bU
#define ATLC_LC_LP_CTRL0__PRESERVED                                 0x00000000U
#define ATLC_LC_LP_CTRL0__RESET_VALUE                               0x00000000U

#endif /* __ATLC_LC_LP_CTRL0_MACRO__ */

/** @} end of lc_lp_ctrl0 */

/* macros for BlueprintGlobalNameSpace::ATLC_lc_lp_ctrl1 */
/**
 * @defgroup at_lc_regs_core_lc_lp_ctrl1 lc_lp_ctrl1
 * @brief Contains register fields associated with lc_lp_ctrl1. definitions.
 * @{
 */
#ifndef __ATLC_LC_LP_CTRL1_MACRO__
#define __ATLC_LC_LP_CTRL1_MACRO__

/* macros for field wrm */
/**
 * @defgroup at_lc_regs_core_wrm_field wrm_field
 * @brief macros for field wrm
 * @details radio settling time in low power clock cyle
 * @{
 */
#define ATLC_LC_LP_CTRL1__WRM__SHIFT                                          0
#define ATLC_LC_LP_CTRL1__WRM__WIDTH                                         10
#define ATLC_LC_LP_CTRL1__WRM__MASK                                 0x000003ffU
#define ATLC_LC_LP_CTRL1__WRM__READ(src)        ((uint32_t)(src) & 0x000003ffU)
#define ATLC_LC_LP_CTRL1__WRM__WRITE(src)       ((uint32_t)(src) & 0x000003ffU)
#define ATLC_LC_LP_CTRL1__WRM__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000003ffU) | ((uint32_t)(src) &\
                    0x000003ffU)
#define ATLC_LC_LP_CTRL1__WRM__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000003ffU)))
#define ATLC_LC_LP_CTRL1__WRM__RESET_VALUE                          0x00000050U
/** @} */

/* macros for field wosc */
/**
 * @defgroup at_lc_regs_core_wosc_field wosc_field
 * @brief macros for field wosc
 * @details PLL settling time following sleep timer expiration in low power clock cyle
 * @{
 */
#define ATLC_LC_LP_CTRL1__WOSC__SHIFT                                        10
#define ATLC_LC_LP_CTRL1__WOSC__WIDTH                                        11
#define ATLC_LC_LP_CTRL1__WOSC__MASK                                0x001ffc00U
#define ATLC_LC_LP_CTRL1__WOSC__READ(src) \
                    (((uint32_t)(src)\
                    & 0x001ffc00U) >> 10)
#define ATLC_LC_LP_CTRL1__WOSC__WRITE(src) \
                    (((uint32_t)(src)\
                    << 10) & 0x001ffc00U)
#define ATLC_LC_LP_CTRL1__WOSC__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x001ffc00U) | (((uint32_t)(src) <<\
                    10) & 0x001ffc00U)
#define ATLC_LC_LP_CTRL1__WOSC__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 10) & ~0x001ffc00U)))
#define ATLC_LC_LP_CTRL1__WOSC__RESET_VALUE                         0x00000064U
/** @} */

/* macros for field wext */
/**
 * @defgroup at_lc_regs_core_wext_field wext_field
 * @brief macros for field wext
 * @details PLL settling time following external wakeup request in low power clock cyle
 * @{
 */
#define ATLC_LC_LP_CTRL1__WEXT__SHIFT                                        21
#define ATLC_LC_LP_CTRL1__WEXT__WIDTH                                        11
#define ATLC_LC_LP_CTRL1__WEXT__MASK                                0xffe00000U
#define ATLC_LC_LP_CTRL1__WEXT__READ(src) \
                    (((uint32_t)(src)\
                    & 0xffe00000U) >> 21)
#define ATLC_LC_LP_CTRL1__WEXT__WRITE(src) \
                    (((uint32_t)(src)\
                    << 21) & 0xffe00000U)
#define ATLC_LC_LP_CTRL1__WEXT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffe00000U) | (((uint32_t)(src) <<\
                    21) & 0xffe00000U)
#define ATLC_LC_LP_CTRL1__WEXT__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 21) & ~0xffe00000U)))
#define ATLC_LC_LP_CTRL1__WEXT__RESET_VALUE                         0x00000064U
/** @} */
#define ATLC_LC_LP_CTRL1__TYPE                                         uint32_t
#define ATLC_LC_LP_CTRL1__READ                                      0xffffffffU
#define ATLC_LC_LP_CTRL1__WRITE                                     0xffffffffU
#define ATLC_LC_LP_CTRL1__PRESERVED                                 0x00000000U
#define ATLC_LC_LP_CTRL1__RESET_VALUE                               0x0c819050U

#endif /* __ATLC_LC_LP_CTRL1_MACRO__ */

/** @} end of lc_lp_ctrl1 */

/* macros for BlueprintGlobalNameSpace::ATLC_lc_lp_ctrl2 */
/**
 * @defgroup at_lc_regs_core_lc_lp_ctrl2 lc_lp_ctrl2
 * @brief Contains register fields associated with lc_lp_ctrl2. definitions.
 * @{
 */
#ifndef __ATLC_LC_LP_CTRL2_MACRO__
#define __ATLC_LC_LP_CTRL2_MACRO__

/* macros for field slp_tm */
/**
 * @defgroup at_lc_regs_core_slp_tm_field slp_tm_field
 * @brief macros for field slp_tm
 * @details Deep sleep time
 * @{
 */
#define ATLC_LC_LP_CTRL2__SLP_TM__SHIFT                                       0
#define ATLC_LC_LP_CTRL2__SLP_TM__WIDTH                                      32
#define ATLC_LC_LP_CTRL2__SLP_TM__MASK                              0xffffffffU
#define ATLC_LC_LP_CTRL2__SLP_TM__READ(src)     ((uint32_t)(src) & 0xffffffffU)
#define ATLC_LC_LP_CTRL2__SLP_TM__WRITE(src)    ((uint32_t)(src) & 0xffffffffU)
#define ATLC_LC_LP_CTRL2__SLP_TM__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffffffffU) | ((uint32_t)(src) &\
                    0xffffffffU)
#define ATLC_LC_LP_CTRL2__SLP_TM__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0xffffffffU)))
#define ATLC_LC_LP_CTRL2__SLP_TM__RESET_VALUE                       0x00000000U
/** @} */
#define ATLC_LC_LP_CTRL2__TYPE                                         uint32_t
#define ATLC_LC_LP_CTRL2__READ                                      0xffffffffU
#define ATLC_LC_LP_CTRL2__WRITE                                     0xffffffffU
#define ATLC_LC_LP_CTRL2__PRESERVED                                 0x00000000U
#define ATLC_LC_LP_CTRL2__RESET_VALUE                               0x00000000U

#endif /* __ATLC_LC_LP_CTRL2_MACRO__ */

/** @} end of lc_lp_ctrl2 */

/* macros for BlueprintGlobalNameSpace::ATLC_lc_lp_ctrl3 */
/**
 * @defgroup at_lc_regs_core_lc_lp_ctrl3 lc_lp_ctrl3
 * @brief Contains register fields associated with lc_lp_ctrl3. definitions.
 * @{
 */
#ifndef __ATLC_LC_LP_CTRL3_MACRO__
#define __ATLC_LC_LP_CTRL3_MACRO__

/* macros for field slp_cntr */
/**
 * @defgroup at_lc_regs_core_slp_cntr_field slp_cntr_field
 * @brief macros for field slp_cntr
 * @details Deep sleep counter
 * @{
 */
#define ATLC_LC_LP_CTRL3__SLP_CNTR__SHIFT                                     0
#define ATLC_LC_LP_CTRL3__SLP_CNTR__WIDTH                                    32
#define ATLC_LC_LP_CTRL3__SLP_CNTR__MASK                            0xffffffffU
#define ATLC_LC_LP_CTRL3__SLP_CNTR__READ(src)   ((uint32_t)(src) & 0xffffffffU)
#define ATLC_LC_LP_CTRL3__SLP_CNTR__RESET_VALUE                     0x00000000U
/** @} */
#define ATLC_LC_LP_CTRL3__TYPE                                         uint32_t
#define ATLC_LC_LP_CTRL3__READ                                      0xffffffffU
#define ATLC_LC_LP_CTRL3__PRESERVED                                 0x00000000U
#define ATLC_LC_LP_CTRL3__RESET_VALUE                               0x00000000U

#endif /* __ATLC_LC_LP_CTRL3_MACRO__ */

/** @} end of lc_lp_ctrl3 */

/* macros for BlueprintGlobalNameSpace::ATLC_ifg */
/**
 * @defgroup at_lc_regs_core_ifg ifg
 * @brief Contains register fields associated with ifg. definitions.
 * @{
 */
#ifndef __ATLC_IFG_MACRO__
#define __ATLC_IFG_MACRO__

/* macros for field vl */
/**
 * @defgroup at_lc_regs_core_vl_field vl_field
 * @brief macros for field vl
 * @details interframe gap in micro seconds
 * @{
 */
#define ATLC_IFG__VL__SHIFT                                                   0
#define ATLC_IFG__VL__WIDTH                                                   8
#define ATLC_IFG__VL__MASK                                          0x000000ffU
#define ATLC_IFG__VL__READ(src)                 ((uint32_t)(src) & 0x000000ffU)
#define ATLC_IFG__VL__WRITE(src)                ((uint32_t)(src) & 0x000000ffU)
#define ATLC_IFG__VL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define ATLC_IFG__VL__VERIFY(src)         (!(((uint32_t)(src) & ~0x000000ffU)))
#define ATLC_IFG__VL__RESET_VALUE                                   0x00000082U
/** @} */
#define ATLC_IFG__TYPE                                                 uint32_t
#define ATLC_IFG__READ                                              0x000000ffU
#define ATLC_IFG__WRITE                                             0x000000ffU
#define ATLC_IFG__PRESERVED                                         0x00000000U
#define ATLC_IFG__RESET_VALUE                                       0x00000082U

#endif /* __ATLC_IFG_MACRO__ */

/** @} end of ifg */

/* macros for BlueprintGlobalNameSpace::ATLC_pwrud_1mbps */
/**
 * @defgroup at_lc_regs_core_pwrud_1mbps pwrud_1mbps
 * @brief Contains register fields associated with pwrud_1mbps. definitions.
 * @{
 */
#ifndef __ATLC_PWRUD_1MBPS_MACRO__
#define __ATLC_PWRUD_1MBPS_MACRO__

/* macros for field rx_pwrup */
/**
 * @defgroup at_lc_regs_core_rx_pwrup_field rx_pwrup_field
 * @brief macros for field rx_pwrup
 * @details rx powerup time in micro seconds
 * @{
 */
#define ATLC_PWRUD_1MBPS__RX_PWRUP__SHIFT                                     0
#define ATLC_PWRUD_1MBPS__RX_PWRUP__WIDTH                                     8
#define ATLC_PWRUD_1MBPS__RX_PWRUP__MASK                            0x000000ffU
#define ATLC_PWRUD_1MBPS__RX_PWRUP__READ(src)   ((uint32_t)(src) & 0x000000ffU)
#define ATLC_PWRUD_1MBPS__RX_PWRUP__WRITE(src)  ((uint32_t)(src) & 0x000000ffU)
#define ATLC_PWRUD_1MBPS__RX_PWRUP__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define ATLC_PWRUD_1MBPS__RX_PWRUP__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000000ffU)))
#define ATLC_PWRUD_1MBPS__RX_PWRUP__RESET_VALUE                     0x00000058U
/** @} */

/* macros for field tx_pwrup */
/**
 * @defgroup at_lc_regs_core_tx_pwrup_field tx_pwrup_field
 * @brief macros for field tx_pwrup
 * @details tx powerup time in micro seconds
 * @{
 */
#define ATLC_PWRUD_1MBPS__TX_PWRUP__SHIFT                                     8
#define ATLC_PWRUD_1MBPS__TX_PWRUP__WIDTH                                     8
#define ATLC_PWRUD_1MBPS__TX_PWRUP__MASK                            0x0000ff00U
#define ATLC_PWRUD_1MBPS__TX_PWRUP__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000ff00U) >> 8)
#define ATLC_PWRUD_1MBPS__TX_PWRUP__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x0000ff00U)
#define ATLC_PWRUD_1MBPS__TX_PWRUP__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ff00U) | (((uint32_t)(src) <<\
                    8) & 0x0000ff00U)
#define ATLC_PWRUD_1MBPS__TX_PWRUP__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x0000ff00U)))
#define ATLC_PWRUD_1MBPS__TX_PWRUP__RESET_VALUE                     0x00000032U
/** @} */

/* macros for field tx_pwrdn */
/**
 * @defgroup at_lc_regs_core_tx_pwrdn_field tx_pwrdn_field
 * @brief macros for field tx_pwrdn
 * @details tx powerdn time in micro seconds
 * @{
 */
#define ATLC_PWRUD_1MBPS__TX_PWRDN__SHIFT                                    16
#define ATLC_PWRUD_1MBPS__TX_PWRDN__WIDTH                                     8
#define ATLC_PWRUD_1MBPS__TX_PWRDN__MASK                            0x00ff0000U
#define ATLC_PWRUD_1MBPS__TX_PWRDN__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00ff0000U) >> 16)
#define ATLC_PWRUD_1MBPS__TX_PWRDN__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00ff0000U)
#define ATLC_PWRUD_1MBPS__TX_PWRDN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00ff0000U) | (((uint32_t)(src) <<\
                    16) & 0x00ff0000U)
#define ATLC_PWRUD_1MBPS__TX_PWRDN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00ff0000U)))
#define ATLC_PWRUD_1MBPS__TX_PWRDN__RESET_VALUE                     0x00000002U
/** @} */
#define ATLC_PWRUD_1MBPS__TYPE                                         uint32_t
#define ATLC_PWRUD_1MBPS__READ                                      0x00ffffffU
#define ATLC_PWRUD_1MBPS__WRITE                                     0x00ffffffU
#define ATLC_PWRUD_1MBPS__PRESERVED                                 0x00000000U
#define ATLC_PWRUD_1MBPS__RESET_VALUE                               0x00023258U

#endif /* __ATLC_PWRUD_1MBPS_MACRO__ */

/** @} end of pwrud_1mbps */

/* macros for BlueprintGlobalNameSpace::ATLC_pwrud_2mbps */
/**
 * @defgroup at_lc_regs_core_pwrud_2mbps pwrud_2mbps
 * @brief Contains register fields associated with pwrud_2mbps. definitions.
 * @{
 */
#ifndef __ATLC_PWRUD_2MBPS_MACRO__
#define __ATLC_PWRUD_2MBPS_MACRO__

/* macros for field rx_pwrup */
/**
 * @defgroup at_lc_regs_core_rx_pwrup_field rx_pwrup_field
 * @brief macros for field rx_pwrup
 * @details rx powerup time in micro seconds
 * @{
 */
#define ATLC_PWRUD_2MBPS__RX_PWRUP__SHIFT                                     0
#define ATLC_PWRUD_2MBPS__RX_PWRUP__WIDTH                                     8
#define ATLC_PWRUD_2MBPS__RX_PWRUP__MASK                            0x000000ffU
#define ATLC_PWRUD_2MBPS__RX_PWRUP__READ(src)   ((uint32_t)(src) & 0x000000ffU)
#define ATLC_PWRUD_2MBPS__RX_PWRUP__WRITE(src)  ((uint32_t)(src) & 0x000000ffU)
#define ATLC_PWRUD_2MBPS__RX_PWRUP__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define ATLC_PWRUD_2MBPS__RX_PWRUP__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000000ffU)))
#define ATLC_PWRUD_2MBPS__RX_PWRUP__RESET_VALUE                     0x00000058U
/** @} */

/* macros for field tx_pwrup */
/**
 * @defgroup at_lc_regs_core_tx_pwrup_field tx_pwrup_field
 * @brief macros for field tx_pwrup
 * @details tx powerup time in micro seconds
 * @{
 */
#define ATLC_PWRUD_2MBPS__TX_PWRUP__SHIFT                                     8
#define ATLC_PWRUD_2MBPS__TX_PWRUP__WIDTH                                     8
#define ATLC_PWRUD_2MBPS__TX_PWRUP__MASK                            0x0000ff00U
#define ATLC_PWRUD_2MBPS__TX_PWRUP__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000ff00U) >> 8)
#define ATLC_PWRUD_2MBPS__TX_PWRUP__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x0000ff00U)
#define ATLC_PWRUD_2MBPS__TX_PWRUP__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ff00U) | (((uint32_t)(src) <<\
                    8) & 0x0000ff00U)
#define ATLC_PWRUD_2MBPS__TX_PWRUP__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x0000ff00U)))
#define ATLC_PWRUD_2MBPS__TX_PWRUP__RESET_VALUE                     0x00000032U
/** @} */

/* macros for field tx_pwrdn */
/**
 * @defgroup at_lc_regs_core_tx_pwrdn_field tx_pwrdn_field
 * @brief macros for field tx_pwrdn
 * @details tx powerdn time in micro seconds
 * @{
 */
#define ATLC_PWRUD_2MBPS__TX_PWRDN__SHIFT                                    16
#define ATLC_PWRUD_2MBPS__TX_PWRDN__WIDTH                                     8
#define ATLC_PWRUD_2MBPS__TX_PWRDN__MASK                            0x00ff0000U
#define ATLC_PWRUD_2MBPS__TX_PWRDN__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00ff0000U) >> 16)
#define ATLC_PWRUD_2MBPS__TX_PWRDN__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00ff0000U)
#define ATLC_PWRUD_2MBPS__TX_PWRDN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00ff0000U) | (((uint32_t)(src) <<\
                    16) & 0x00ff0000U)
#define ATLC_PWRUD_2MBPS__TX_PWRDN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00ff0000U)))
#define ATLC_PWRUD_2MBPS__TX_PWRDN__RESET_VALUE                     0x00000002U
/** @} */
#define ATLC_PWRUD_2MBPS__TYPE                                         uint32_t
#define ATLC_PWRUD_2MBPS__READ                                      0x00ffffffU
#define ATLC_PWRUD_2MBPS__WRITE                                     0x00ffffffU
#define ATLC_PWRUD_2MBPS__PRESERVED                                 0x00000000U
#define ATLC_PWRUD_2MBPS__RESET_VALUE                               0x00023258U

#endif /* __ATLC_PWRUD_2MBPS_MACRO__ */

/** @} end of pwrud_2mbps */

/* macros for BlueprintGlobalNameSpace::ATLC_pwrud_250kbps */
/**
 * @defgroup at_lc_regs_core_pwrud_250kbps pwrud_250kbps
 * @brief Contains register fields associated with pwrud_250kbps. definitions.
 * @{
 */
#ifndef __ATLC_PWRUD_250KBPS_MACRO__
#define __ATLC_PWRUD_250KBPS_MACRO__

/* macros for field rx_pwrup */
/**
 * @defgroup at_lc_regs_core_rx_pwrup_field rx_pwrup_field
 * @brief macros for field rx_pwrup
 * @details rx powerup time in micro seconds
 * @{
 */
#define ATLC_PWRUD_250KBPS__RX_PWRUP__SHIFT                                   0
#define ATLC_PWRUD_250KBPS__RX_PWRUP__WIDTH                                   8
#define ATLC_PWRUD_250KBPS__RX_PWRUP__MASK                          0x000000ffU
#define ATLC_PWRUD_250KBPS__RX_PWRUP__READ(src) ((uint32_t)(src) & 0x000000ffU)
#define ATLC_PWRUD_250KBPS__RX_PWRUP__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x000000ffU)
#define ATLC_PWRUD_250KBPS__RX_PWRUP__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define ATLC_PWRUD_250KBPS__RX_PWRUP__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000000ffU)))
#define ATLC_PWRUD_250KBPS__RX_PWRUP__RESET_VALUE                   0x00000058U
/** @} */

/* macros for field tx_pwrup */
/**
 * @defgroup at_lc_regs_core_tx_pwrup_field tx_pwrup_field
 * @brief macros for field tx_pwrup
 * @details tx powerup time in micro seconds
 * @{
 */
#define ATLC_PWRUD_250KBPS__TX_PWRUP__SHIFT                                   8
#define ATLC_PWRUD_250KBPS__TX_PWRUP__WIDTH                                   8
#define ATLC_PWRUD_250KBPS__TX_PWRUP__MASK                          0x0000ff00U
#define ATLC_PWRUD_250KBPS__TX_PWRUP__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000ff00U) >> 8)
#define ATLC_PWRUD_250KBPS__TX_PWRUP__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x0000ff00U)
#define ATLC_PWRUD_250KBPS__TX_PWRUP__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ff00U) | (((uint32_t)(src) <<\
                    8) & 0x0000ff00U)
#define ATLC_PWRUD_250KBPS__TX_PWRUP__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x0000ff00U)))
#define ATLC_PWRUD_250KBPS__TX_PWRUP__RESET_VALUE                   0x00000032U
/** @} */

/* macros for field tx_pwrdn */
/**
 * @defgroup at_lc_regs_core_tx_pwrdn_field tx_pwrdn_field
 * @brief macros for field tx_pwrdn
 * @details tx powerdn time in micro seconds
 * @{
 */
#define ATLC_PWRUD_250KBPS__TX_PWRDN__SHIFT                                  16
#define ATLC_PWRUD_250KBPS__TX_PWRDN__WIDTH                                   8
#define ATLC_PWRUD_250KBPS__TX_PWRDN__MASK                          0x00ff0000U
#define ATLC_PWRUD_250KBPS__TX_PWRDN__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00ff0000U) >> 16)
#define ATLC_PWRUD_250KBPS__TX_PWRDN__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00ff0000U)
#define ATLC_PWRUD_250KBPS__TX_PWRDN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00ff0000U) | (((uint32_t)(src) <<\
                    16) & 0x00ff0000U)
#define ATLC_PWRUD_250KBPS__TX_PWRDN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00ff0000U)))
#define ATLC_PWRUD_250KBPS__TX_PWRDN__RESET_VALUE                   0x00000002U
/** @} */
#define ATLC_PWRUD_250KBPS__TYPE                                       uint32_t
#define ATLC_PWRUD_250KBPS__READ                                    0x00ffffffU
#define ATLC_PWRUD_250KBPS__WRITE                                   0x00ffffffU
#define ATLC_PWRUD_250KBPS__PRESERVED                               0x00000000U
#define ATLC_PWRUD_250KBPS__RESET_VALUE                             0x00023258U

#endif /* __ATLC_PWRUD_250KBPS_MACRO__ */

/** @} end of pwrud_250kbps */

/* macros for BlueprintGlobalNameSpace::ATLC_rtx_wait */
/**
 * @defgroup at_lc_regs_core_rtx_wait rtx_wait
 * @brief Contains register fields associated with rtx_wait. definitions.
 * @{
 */
#ifndef __ATLC_RTX_WAIT_MACRO__
#define __ATLC_RTX_WAIT_MACRO__

/* macros for field tx_rx */
/**
 * @defgroup at_lc_regs_core_tx_rx_field tx_rx_field
 * @brief macros for field tx_rx
 * @details tx to rx transition wait time in micro seconds
 * @{
 */
#define ATLC_RTX_WAIT__TX_RX__SHIFT                                           0
#define ATLC_RTX_WAIT__TX_RX__WIDTH                                           8
#define ATLC_RTX_WAIT__TX_RX__MASK                                  0x000000ffU
#define ATLC_RTX_WAIT__TX_RX__READ(src)         ((uint32_t)(src) & 0x000000ffU)
#define ATLC_RTX_WAIT__TX_RX__WRITE(src)        ((uint32_t)(src) & 0x000000ffU)
#define ATLC_RTX_WAIT__TX_RX__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define ATLC_RTX_WAIT__TX_RX__VERIFY(src) (!(((uint32_t)(src) & ~0x000000ffU)))
#define ATLC_RTX_WAIT__TX_RX__RESET_VALUE                           0x00000082U
/** @} */

/* macros for field rx_tx */
/**
 * @defgroup at_lc_regs_core_rx_tx_field rx_tx_field
 * @brief macros for field rx_tx
 * @details rx to tx transition wait time in micro seconds
 * @{
 */
#define ATLC_RTX_WAIT__RX_TX__SHIFT                                           8
#define ATLC_RTX_WAIT__RX_TX__WIDTH                                           8
#define ATLC_RTX_WAIT__RX_TX__MASK                                  0x0000ff00U
#define ATLC_RTX_WAIT__RX_TX__READ(src)  (((uint32_t)(src) & 0x0000ff00U) >> 8)
#define ATLC_RTX_WAIT__RX_TX__WRITE(src) (((uint32_t)(src) << 8) & 0x0000ff00U)
#define ATLC_RTX_WAIT__RX_TX__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ff00U) | (((uint32_t)(src) <<\
                    8) & 0x0000ff00U)
#define ATLC_RTX_WAIT__RX_TX__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x0000ff00U)))
#define ATLC_RTX_WAIT__RX_TX__RESET_VALUE                           0x00000082U
/** @} */
#define ATLC_RTX_WAIT__TYPE                                            uint32_t
#define ATLC_RTX_WAIT__READ                                         0x0000ffffU
#define ATLC_RTX_WAIT__WRITE                                        0x0000ffffU
#define ATLC_RTX_WAIT__PRESERVED                                    0x00000000U
#define ATLC_RTX_WAIT__RESET_VALUE                                  0x00008282U

#endif /* __ATLC_RTX_WAIT_MACRO__ */

/** @} end of rtx_wait */

/* macros for BlueprintGlobalNameSpace::ATLC_lc_st0 */
/**
 * @defgroup at_lc_regs_core_lc_st0 lc_st0
 * @brief Contains register fields associated with lc_st0. definitions.
 * @{
 */
#ifndef __ATLC_LC_ST0_MACRO__
#define __ATLC_LC_ST0_MACRO__

/* macros for field art_cntr */
/**
 * @defgroup at_lc_regs_core_art_cntr_field art_cntr_field
 * @brief macros for field art_cntr
 * @details number of auto retransmit
 * @{
 */
#define ATLC_LC_ST0__ART_CNTR__SHIFT                                          0
#define ATLC_LC_ST0__ART_CNTR__WIDTH                                          8
#define ATLC_LC_ST0__ART_CNTR__MASK                                 0x000000ffU
#define ATLC_LC_ST0__ART_CNTR__READ(src)        ((uint32_t)(src) & 0x000000ffU)
#define ATLC_LC_ST0__ART_CNTR__RESET_VALUE                          0x00000000U
/** @} */

/* macros for field artmx_cntr */
/**
 * @defgroup at_lc_regs_core_artmx_cntr_field artmx_cntr_field
 * @brief macros for field artmx_cntr
 * @details number of times max auto retransmit is exceeded i.e., packet loss
 * @{
 */
#define ATLC_LC_ST0__ARTMX_CNTR__SHIFT                                        8
#define ATLC_LC_ST0__ARTMX_CNTR__WIDTH                                        8
#define ATLC_LC_ST0__ARTMX_CNTR__MASK                               0x0000ff00U
#define ATLC_LC_ST0__ARTMX_CNTR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000ff00U) >> 8)
#define ATLC_LC_ST0__ARTMX_CNTR__RESET_VALUE                        0x00000000U
/** @} */

/* macros for field crc_err_cntr */
/**
 * @defgroup at_lc_regs_core_crc_err_cntr_field crc_err_cntr_field
 * @brief macros for field crc_err_cntr
 * @details number of crc error packets
 * @{
 */
#define ATLC_LC_ST0__CRC_ERR_CNTR__SHIFT                                     16
#define ATLC_LC_ST0__CRC_ERR_CNTR__WIDTH                                      8
#define ATLC_LC_ST0__CRC_ERR_CNTR__MASK                             0x00ff0000U
#define ATLC_LC_ST0__CRC_ERR_CNTR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00ff0000U) >> 16)
#define ATLC_LC_ST0__CRC_ERR_CNTR__RESET_VALUE                      0x00000000U
/** @} */

/* macros for field tx_ack_to_cntr */
/**
 * @defgroup at_lc_regs_core_tx_ack_to_cntr_field tx_ack_to_cntr_field
 * @brief macros for field tx_ack_to_cntr
 * @details number of tx acknowledgement time out counter
 * @{
 */
#define ATLC_LC_ST0__TX_ACK_TO_CNTR__SHIFT                                   24
#define ATLC_LC_ST0__TX_ACK_TO_CNTR__WIDTH                                    8
#define ATLC_LC_ST0__TX_ACK_TO_CNTR__MASK                           0xff000000U
#define ATLC_LC_ST0__TX_ACK_TO_CNTR__READ(src) \
                    (((uint32_t)(src)\
                    & 0xff000000U) >> 24)
#define ATLC_LC_ST0__TX_ACK_TO_CNTR__RESET_VALUE                    0x00000000U
/** @} */
#define ATLC_LC_ST0__TYPE                                              uint32_t
#define ATLC_LC_ST0__READ                                           0xffffffffU
#define ATLC_LC_ST0__PRESERVED                                      0x00000000U
#define ATLC_LC_ST0__RESET_VALUE                                    0x00000000U

#endif /* __ATLC_LC_ST0_MACRO__ */

/** @} end of lc_st0 */

/* macros for BlueprintGlobalNameSpace::ATLC_lc_st0_clr */
/**
 * @defgroup at_lc_regs_core_lc_st0_clr lc_st0_clr
 * @brief Contains register fields associated with lc_st0_clr. definitions.
 * @{
 */
#ifndef __ATLC_LC_ST0_CLR_MACRO__
#define __ATLC_LC_ST0_CLR_MACRO__

/* macros for field art_cntr */
/**
 * @defgroup at_lc_regs_core_art_cntr_field art_cntr_field
 * @brief macros for field art_cntr
 * @details write 1 to clear
 * @{
 */
#define ATLC_LC_ST0_CLR__ART_CNTR__SHIFT                                      0
#define ATLC_LC_ST0_CLR__ART_CNTR__WIDTH                                      1
#define ATLC_LC_ST0_CLR__ART_CNTR__MASK                             0x00000001U
#define ATLC_LC_ST0_CLR__ART_CNTR__READ(src)    ((uint32_t)(src) & 0x00000001U)
#define ATLC_LC_ST0_CLR__ART_CNTR__WRITE(src)   ((uint32_t)(src) & 0x00000001U)
#define ATLC_LC_ST0_CLR__ART_CNTR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define ATLC_LC_ST0_CLR__ART_CNTR__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define ATLC_LC_ST0_CLR__ART_CNTR__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define ATLC_LC_ST0_CLR__ART_CNTR__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define ATLC_LC_ST0_CLR__ART_CNTR__RESET_VALUE                      0x00000000U
/** @} */

/* macros for field artmx_cntr */
/**
 * @defgroup at_lc_regs_core_artmx_cntr_field artmx_cntr_field
 * @brief macros for field artmx_cntr
 * @details write 1 to clear
 * @{
 */
#define ATLC_LC_ST0_CLR__ARTMX_CNTR__SHIFT                                    1
#define ATLC_LC_ST0_CLR__ARTMX_CNTR__WIDTH                                    1
#define ATLC_LC_ST0_CLR__ARTMX_CNTR__MASK                           0x00000002U
#define ATLC_LC_ST0_CLR__ARTMX_CNTR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define ATLC_LC_ST0_CLR__ARTMX_CNTR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define ATLC_LC_ST0_CLR__ARTMX_CNTR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define ATLC_LC_ST0_CLR__ARTMX_CNTR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define ATLC_LC_ST0_CLR__ARTMX_CNTR__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define ATLC_LC_ST0_CLR__ARTMX_CNTR__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define ATLC_LC_ST0_CLR__ARTMX_CNTR__RESET_VALUE                    0x00000000U
/** @} */

/* macros for field crc_err_cntr */
/**
 * @defgroup at_lc_regs_core_crc_err_cntr_field crc_err_cntr_field
 * @brief macros for field crc_err_cntr
 * @details write 1 to clear
 * @{
 */
#define ATLC_LC_ST0_CLR__CRC_ERR_CNTR__SHIFT                                  2
#define ATLC_LC_ST0_CLR__CRC_ERR_CNTR__WIDTH                                  1
#define ATLC_LC_ST0_CLR__CRC_ERR_CNTR__MASK                         0x00000004U
#define ATLC_LC_ST0_CLR__CRC_ERR_CNTR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000004U) >> 2)
#define ATLC_LC_ST0_CLR__CRC_ERR_CNTR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 2) & 0x00000004U)
#define ATLC_LC_ST0_CLR__CRC_ERR_CNTR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | (((uint32_t)(src) <<\
                    2) & 0x00000004U)
#define ATLC_LC_ST0_CLR__CRC_ERR_CNTR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 2) & ~0x00000004U)))
#define ATLC_LC_ST0_CLR__CRC_ERR_CNTR__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(1) << 2)
#define ATLC_LC_ST0_CLR__CRC_ERR_CNTR__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(0) << 2)
#define ATLC_LC_ST0_CLR__CRC_ERR_CNTR__RESET_VALUE                  0x00000000U
/** @} */

/* macros for field tx_ack_to_cntr */
/**
 * @defgroup at_lc_regs_core_tx_ack_to_cntr_field tx_ack_to_cntr_field
 * @brief macros for field tx_ack_to_cntr
 * @details write 1 to clear
 * @{
 */
#define ATLC_LC_ST0_CLR__TX_ACK_TO_CNTR__SHIFT                                3
#define ATLC_LC_ST0_CLR__TX_ACK_TO_CNTR__WIDTH                                1
#define ATLC_LC_ST0_CLR__TX_ACK_TO_CNTR__MASK                       0x00000008U
#define ATLC_LC_ST0_CLR__TX_ACK_TO_CNTR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000008U) >> 3)
#define ATLC_LC_ST0_CLR__TX_ACK_TO_CNTR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 3) & 0x00000008U)
#define ATLC_LC_ST0_CLR__TX_ACK_TO_CNTR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | (((uint32_t)(src) <<\
                    3) & 0x00000008U)
#define ATLC_LC_ST0_CLR__TX_ACK_TO_CNTR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 3) & ~0x00000008U)))
#define ATLC_LC_ST0_CLR__TX_ACK_TO_CNTR__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((uint32_t)(1) << 3)
#define ATLC_LC_ST0_CLR__TX_ACK_TO_CNTR__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((uint32_t)(0) << 3)
#define ATLC_LC_ST0_CLR__TX_ACK_TO_CNTR__RESET_VALUE                0x00000000U
/** @} */
#define ATLC_LC_ST0_CLR__TYPE                                          uint32_t
#define ATLC_LC_ST0_CLR__READ                                       0x0000000fU
#define ATLC_LC_ST0_CLR__WRITE                                      0x0000000fU
#define ATLC_LC_ST0_CLR__PRESERVED                                  0x00000000U
#define ATLC_LC_ST0_CLR__RESET_VALUE                                0x00000000U

#endif /* __ATLC_LC_ST0_CLR_MACRO__ */

/** @} end of lc_st0_clr */

/* macros for BlueprintGlobalNameSpace::ATLC_lc_st1 */
/**
 * @defgroup at_lc_regs_core_lc_st1 lc_st1
 * @brief Contains register fields associated with lc_st1. definitions.
 * @{
 */
#ifndef __ATLC_LC_ST1_MACRO__
#define __ATLC_LC_ST1_MACRO__

/* macros for field us_cntr */
/**
 * @defgroup at_lc_regs_core_us_cntr_field us_cntr_field
 * @brief macros for field us_cntr
 * @details free running micro second counter
 * @{
 */
#define ATLC_LC_ST1__US_CNTR__SHIFT                                           0
#define ATLC_LC_ST1__US_CNTR__WIDTH                                           8
#define ATLC_LC_ST1__US_CNTR__MASK                                  0x000000ffU
#define ATLC_LC_ST1__US_CNTR__READ(src)         ((uint32_t)(src) & 0x000000ffU)
#define ATLC_LC_ST1__US_CNTR__RESET_VALUE                           0x00000000U
/** @} */
#define ATLC_LC_ST1__TYPE                                              uint32_t
#define ATLC_LC_ST1__READ                                           0x000000ffU
#define ATLC_LC_ST1__PRESERVED                                      0x00000000U
#define ATLC_LC_ST1__RESET_VALUE                                    0x00000000U

#endif /* __ATLC_LC_ST1_MACRO__ */

/** @} end of lc_st1 */

/* macros for BlueprintGlobalNameSpace::ATLC_wht_ctrl */
/**
 * @defgroup at_lc_regs_core_wht_ctrl wht_ctrl
 * @brief Contains register fields associated with wht_ctrl. definitions.
 * @{
 */
#ifndef __ATLC_WHT_CTRL_MACRO__
#define __ATLC_WHT_CTRL_MACRO__

/* macros for field seed */
/**
 * @defgroup at_lc_regs_core_seed_field seed_field
 * @brief macros for field seed
 * @details seed for whitening
 * @{
 */
#define ATLC_WHT_CTRL__SEED__SHIFT                                            0
#define ATLC_WHT_CTRL__SEED__WIDTH                                            8
#define ATLC_WHT_CTRL__SEED__MASK                                   0x000000ffU
#define ATLC_WHT_CTRL__SEED__READ(src)          ((uint32_t)(src) & 0x000000ffU)
#define ATLC_WHT_CTRL__SEED__WRITE(src)         ((uint32_t)(src) & 0x000000ffU)
#define ATLC_WHT_CTRL__SEED__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define ATLC_WHT_CTRL__SEED__VERIFY(src)  (!(((uint32_t)(src) & ~0x000000ffU)))
#define ATLC_WHT_CTRL__SEED__RESET_VALUE                            0x00000000U
/** @} */
#define ATLC_WHT_CTRL__TYPE                                            uint32_t
#define ATLC_WHT_CTRL__READ                                         0x000000ffU
#define ATLC_WHT_CTRL__WRITE                                        0x000000ffU
#define ATLC_WHT_CTRL__PRESERVED                                    0x00000000U
#define ATLC_WHT_CTRL__RESET_VALUE                                  0x00000000U

#endif /* __ATLC_WHT_CTRL_MACRO__ */

/** @} end of wht_ctrl */

/* macros for BlueprintGlobalNameSpace::ATLC_nd_ctrl */
/**
 * @defgroup at_lc_regs_core_nd_ctrl nd_ctrl
 * @brief Contains register fields associated with nd_ctrl. definitions.
 * @{
 */
#ifndef __ATLC_ND_CTRL_MACRO__
#define __ATLC_ND_CTRL_MACRO__

/* macros for field nd0_en */
/**
 * @defgroup at_lc_regs_core_nd0_en_field nd0_en_field
 * @brief macros for field nd0_en
 * @details enable receive node 0
 * @{
 */
#define ATLC_ND_CTRL__ND0_EN__SHIFT                                           0
#define ATLC_ND_CTRL__ND0_EN__WIDTH                                           1
#define ATLC_ND_CTRL__ND0_EN__MASK                                  0x00000001U
#define ATLC_ND_CTRL__ND0_EN__READ(src)         ((uint32_t)(src) & 0x00000001U)
#define ATLC_ND_CTRL__ND0_EN__WRITE(src)        ((uint32_t)(src) & 0x00000001U)
#define ATLC_ND_CTRL__ND0_EN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define ATLC_ND_CTRL__ND0_EN__VERIFY(src) (!(((uint32_t)(src) & ~0x00000001U)))
#define ATLC_ND_CTRL__ND0_EN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define ATLC_ND_CTRL__ND0_EN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define ATLC_ND_CTRL__ND0_EN__RESET_VALUE                           0x00000000U
/** @} */

/* macros for field nd1_en */
/**
 * @defgroup at_lc_regs_core_nd1_en_field nd1_en_field
 * @brief macros for field nd1_en
 * @details enable receive node 1
 * @{
 */
#define ATLC_ND_CTRL__ND1_EN__SHIFT                                           1
#define ATLC_ND_CTRL__ND1_EN__WIDTH                                           1
#define ATLC_ND_CTRL__ND1_EN__MASK                                  0x00000002U
#define ATLC_ND_CTRL__ND1_EN__READ(src)  (((uint32_t)(src) & 0x00000002U) >> 1)
#define ATLC_ND_CTRL__ND1_EN__WRITE(src) (((uint32_t)(src) << 1) & 0x00000002U)
#define ATLC_ND_CTRL__ND1_EN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define ATLC_ND_CTRL__ND1_EN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define ATLC_ND_CTRL__ND1_EN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define ATLC_ND_CTRL__ND1_EN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define ATLC_ND_CTRL__ND1_EN__RESET_VALUE                           0x00000000U
/** @} */

/* macros for field nd2_en */
/**
 * @defgroup at_lc_regs_core_nd2_en_field nd2_en_field
 * @brief macros for field nd2_en
 * @details enable receive node 2
 * @{
 */
#define ATLC_ND_CTRL__ND2_EN__SHIFT                                           2
#define ATLC_ND_CTRL__ND2_EN__WIDTH                                           1
#define ATLC_ND_CTRL__ND2_EN__MASK                                  0x00000004U
#define ATLC_ND_CTRL__ND2_EN__READ(src)  (((uint32_t)(src) & 0x00000004U) >> 2)
#define ATLC_ND_CTRL__ND2_EN__WRITE(src) (((uint32_t)(src) << 2) & 0x00000004U)
#define ATLC_ND_CTRL__ND2_EN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | (((uint32_t)(src) <<\
                    2) & 0x00000004U)
#define ATLC_ND_CTRL__ND2_EN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 2) & ~0x00000004U)))
#define ATLC_ND_CTRL__ND2_EN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(1) << 2)
#define ATLC_ND_CTRL__ND2_EN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(0) << 2)
#define ATLC_ND_CTRL__ND2_EN__RESET_VALUE                           0x00000000U
/** @} */

/* macros for field nd3_en */
/**
 * @defgroup at_lc_regs_core_nd3_en_field nd3_en_field
 * @brief macros for field nd3_en
 * @details enable receive node 3
 * @{
 */
#define ATLC_ND_CTRL__ND3_EN__SHIFT                                           3
#define ATLC_ND_CTRL__ND3_EN__WIDTH                                           1
#define ATLC_ND_CTRL__ND3_EN__MASK                                  0x00000008U
#define ATLC_ND_CTRL__ND3_EN__READ(src)  (((uint32_t)(src) & 0x00000008U) >> 3)
#define ATLC_ND_CTRL__ND3_EN__WRITE(src) (((uint32_t)(src) << 3) & 0x00000008U)
#define ATLC_ND_CTRL__ND3_EN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | (((uint32_t)(src) <<\
                    3) & 0x00000008U)
#define ATLC_ND_CTRL__ND3_EN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 3) & ~0x00000008U)))
#define ATLC_ND_CTRL__ND3_EN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((uint32_t)(1) << 3)
#define ATLC_ND_CTRL__ND3_EN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((uint32_t)(0) << 3)
#define ATLC_ND_CTRL__ND3_EN__RESET_VALUE                           0x00000000U
/** @} */

/* macros for field nd4_en */
/**
 * @defgroup at_lc_regs_core_nd4_en_field nd4_en_field
 * @brief macros for field nd4_en
 * @details enable receive node 4
 * @{
 */
#define ATLC_ND_CTRL__ND4_EN__SHIFT                                           4
#define ATLC_ND_CTRL__ND4_EN__WIDTH                                           1
#define ATLC_ND_CTRL__ND4_EN__MASK                                  0x00000010U
#define ATLC_ND_CTRL__ND4_EN__READ(src)  (((uint32_t)(src) & 0x00000010U) >> 4)
#define ATLC_ND_CTRL__ND4_EN__WRITE(src) (((uint32_t)(src) << 4) & 0x00000010U)
#define ATLC_ND_CTRL__ND4_EN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | (((uint32_t)(src) <<\
                    4) & 0x00000010U)
#define ATLC_ND_CTRL__ND4_EN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 4) & ~0x00000010U)))
#define ATLC_ND_CTRL__ND4_EN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(1) << 4)
#define ATLC_ND_CTRL__ND4_EN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(0) << 4)
#define ATLC_ND_CTRL__ND4_EN__RESET_VALUE                           0x00000000U
/** @} */

/* macros for field nd5_en */
/**
 * @defgroup at_lc_regs_core_nd5_en_field nd5_en_field
 * @brief macros for field nd5_en
 * @details enable receive node 5
 * @{
 */
#define ATLC_ND_CTRL__ND5_EN__SHIFT                                           5
#define ATLC_ND_CTRL__ND5_EN__WIDTH                                           1
#define ATLC_ND_CTRL__ND5_EN__MASK                                  0x00000020U
#define ATLC_ND_CTRL__ND5_EN__READ(src)  (((uint32_t)(src) & 0x00000020U) >> 5)
#define ATLC_ND_CTRL__ND5_EN__WRITE(src) (((uint32_t)(src) << 5) & 0x00000020U)
#define ATLC_ND_CTRL__ND5_EN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | (((uint32_t)(src) <<\
                    5) & 0x00000020U)
#define ATLC_ND_CTRL__ND5_EN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 5) & ~0x00000020U)))
#define ATLC_ND_CTRL__ND5_EN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | ((uint32_t)(1) << 5)
#define ATLC_ND_CTRL__ND5_EN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | ((uint32_t)(0) << 5)
#define ATLC_ND_CTRL__ND5_EN__RESET_VALUE                           0x00000000U
/** @} */

/* macros for field nd6_en */
/**
 * @defgroup at_lc_regs_core_nd6_en_field nd6_en_field
 * @brief macros for field nd6_en
 * @details enable receive node 6
 * @{
 */
#define ATLC_ND_CTRL__ND6_EN__SHIFT                                           6
#define ATLC_ND_CTRL__ND6_EN__WIDTH                                           1
#define ATLC_ND_CTRL__ND6_EN__MASK                                  0x00000040U
#define ATLC_ND_CTRL__ND6_EN__READ(src)  (((uint32_t)(src) & 0x00000040U) >> 6)
#define ATLC_ND_CTRL__ND6_EN__WRITE(src) (((uint32_t)(src) << 6) & 0x00000040U)
#define ATLC_ND_CTRL__ND6_EN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000040U) | (((uint32_t)(src) <<\
                    6) & 0x00000040U)
#define ATLC_ND_CTRL__ND6_EN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 6) & ~0x00000040U)))
#define ATLC_ND_CTRL__ND6_EN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000040U) | ((uint32_t)(1) << 6)
#define ATLC_ND_CTRL__ND6_EN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000040U) | ((uint32_t)(0) << 6)
#define ATLC_ND_CTRL__ND6_EN__RESET_VALUE                           0x00000000U
/** @} */

/* macros for field nd7_en */
/**
 * @defgroup at_lc_regs_core_nd7_en_field nd7_en_field
 * @brief macros for field nd7_en
 * @details enable receive node 7
 * @{
 */
#define ATLC_ND_CTRL__ND7_EN__SHIFT                                           7
#define ATLC_ND_CTRL__ND7_EN__WIDTH                                           1
#define ATLC_ND_CTRL__ND7_EN__MASK                                  0x00000080U
#define ATLC_ND_CTRL__ND7_EN__READ(src)  (((uint32_t)(src) & 0x00000080U) >> 7)
#define ATLC_ND_CTRL__ND7_EN__WRITE(src) (((uint32_t)(src) << 7) & 0x00000080U)
#define ATLC_ND_CTRL__ND7_EN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000080U) | (((uint32_t)(src) <<\
                    7) & 0x00000080U)
#define ATLC_ND_CTRL__ND7_EN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 7) & ~0x00000080U)))
#define ATLC_ND_CTRL__ND7_EN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000080U) | ((uint32_t)(1) << 7)
#define ATLC_ND_CTRL__ND7_EN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000080U) | ((uint32_t)(0) << 7)
#define ATLC_ND_CTRL__ND7_EN__RESET_VALUE                           0x00000000U
/** @} */
#define ATLC_ND_CTRL__TYPE                                             uint32_t
#define ATLC_ND_CTRL__READ                                          0x000000ffU
#define ATLC_ND_CTRL__WRITE                                         0x000000ffU
#define ATLC_ND_CTRL__PRESERVED                                     0x00000000U
#define ATLC_ND_CTRL__RESET_VALUE                                   0x00000000U

#endif /* __ATLC_ND_CTRL_MACRO__ */

/** @} end of nd_ctrl */

/* macros for BlueprintGlobalNameSpace::ATLC_sync_wrd0 */
/**
 * @defgroup at_lc_regs_core_sync_wrd0 sync_wrd0
 * @brief Contains register fields associated with sync_wrd0. definitions.
 * @{
 */
#ifndef __ATLC_SYNC_WRD0_MACRO__
#define __ATLC_SYNC_WRD0_MACRO__

/* macros for field vl */
/**
 * @defgroup at_lc_regs_core_vl_field vl_field
 * @brief macros for field vl
 * @details synchronization word 0
 * @{
 */
#define ATLC_SYNC_WRD0__VL__SHIFT                                             0
#define ATLC_SYNC_WRD0__VL__WIDTH                                            32
#define ATLC_SYNC_WRD0__VL__MASK                                    0xffffffffU
#define ATLC_SYNC_WRD0__VL__READ(src)           ((uint32_t)(src) & 0xffffffffU)
#define ATLC_SYNC_WRD0__VL__WRITE(src)          ((uint32_t)(src) & 0xffffffffU)
#define ATLC_SYNC_WRD0__VL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffffffffU) | ((uint32_t)(src) &\
                    0xffffffffU)
#define ATLC_SYNC_WRD0__VL__VERIFY(src)   (!(((uint32_t)(src) & ~0xffffffffU)))
#define ATLC_SYNC_WRD0__VL__RESET_VALUE                             0x8e89bed6U
/** @} */
#define ATLC_SYNC_WRD0__TYPE                                           uint32_t
#define ATLC_SYNC_WRD0__READ                                        0xffffffffU
#define ATLC_SYNC_WRD0__WRITE                                       0xffffffffU
#define ATLC_SYNC_WRD0__PRESERVED                                   0x00000000U
#define ATLC_SYNC_WRD0__RESET_VALUE                                 0x8e89bed6U

#endif /* __ATLC_SYNC_WRD0_MACRO__ */

/** @} end of sync_wrd0 */

/* macros for BlueprintGlobalNameSpace::ATLC_sync_wrd1 */
/**
 * @defgroup at_lc_regs_core_sync_wrd1 sync_wrd1
 * @brief Contains register fields associated with sync_wrd1. definitions.
 * @{
 */
#ifndef __ATLC_SYNC_WRD1_MACRO__
#define __ATLC_SYNC_WRD1_MACRO__

/* macros for field vl */
/**
 * @defgroup at_lc_regs_core_vl_field vl_field
 * @brief macros for field vl
 * @details synchronization word 1
 * @{
 */
#define ATLC_SYNC_WRD1__VL__SHIFT                                             0
#define ATLC_SYNC_WRD1__VL__WIDTH                                            32
#define ATLC_SYNC_WRD1__VL__MASK                                    0xffffffffU
#define ATLC_SYNC_WRD1__VL__READ(src)           ((uint32_t)(src) & 0xffffffffU)
#define ATLC_SYNC_WRD1__VL__WRITE(src)          ((uint32_t)(src) & 0xffffffffU)
#define ATLC_SYNC_WRD1__VL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffffffffU) | ((uint32_t)(src) &\
                    0xffffffffU)
#define ATLC_SYNC_WRD1__VL__VERIFY(src)   (!(((uint32_t)(src) & ~0xffffffffU)))
#define ATLC_SYNC_WRD1__VL__RESET_VALUE                             0x5367a431U
/** @} */
#define ATLC_SYNC_WRD1__TYPE                                           uint32_t
#define ATLC_SYNC_WRD1__READ                                        0xffffffffU
#define ATLC_SYNC_WRD1__WRITE                                       0xffffffffU
#define ATLC_SYNC_WRD1__PRESERVED                                   0x00000000U
#define ATLC_SYNC_WRD1__RESET_VALUE                                 0x5367a431U

#endif /* __ATLC_SYNC_WRD1_MACRO__ */

/** @} end of sync_wrd1 */

/* macros for BlueprintGlobalNameSpace::ATLC_rx_addr0 */
/**
 * @defgroup at_lc_regs_core_rx_addr0 rx_addr0
 * @brief Contains register fields associated with rx_addr0. definitions.
 * @{
 */
#ifndef __ATLC_RX_ADDR0_MACRO__
#define __ATLC_RX_ADDR0_MACRO__

/* macros for field vl */
/**
 * @defgroup at_lc_regs_core_vl_field vl_field
 * @brief macros for field vl
 * @details rx addr of rx node 0 and tx_addr for tx node 0
 * @{
 */
#define ATLC_RX_ADDR0__VL__SHIFT                                              0
#define ATLC_RX_ADDR0__VL__WIDTH                                              8
#define ATLC_RX_ADDR0__VL__MASK                                     0x000000ffU
#define ATLC_RX_ADDR0__VL__READ(src)            ((uint32_t)(src) & 0x000000ffU)
#define ATLC_RX_ADDR0__VL__WRITE(src)           ((uint32_t)(src) & 0x000000ffU)
#define ATLC_RX_ADDR0__VL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define ATLC_RX_ADDR0__VL__VERIFY(src)    (!(((uint32_t)(src) & ~0x000000ffU)))
#define ATLC_RX_ADDR0__VL__RESET_VALUE                              0x00000000U
/** @} */
#define ATLC_RX_ADDR0__TYPE                                            uint32_t
#define ATLC_RX_ADDR0__READ                                         0x000000ffU
#define ATLC_RX_ADDR0__WRITE                                        0x000000ffU
#define ATLC_RX_ADDR0__PRESERVED                                    0x00000000U
#define ATLC_RX_ADDR0__RESET_VALUE                                  0x00000000U

#endif /* __ATLC_RX_ADDR0_MACRO__ */

/** @} end of rx_addr0 */

/* macros for BlueprintGlobalNameSpace::ATLC_rx_addr1 */
/**
 * @defgroup at_lc_regs_core_rx_addr1 rx_addr1
 * @brief Contains register fields associated with rx_addr1. definitions.
 * @{
 */
#ifndef __ATLC_RX_ADDR1_MACRO__
#define __ATLC_RX_ADDR1_MACRO__

/* macros for field vl */
/**
 * @defgroup at_lc_regs_core_vl_field vl_field
 * @brief macros for field vl
 * @details rx addr of rx node 1 and tx_addr for tx node 1
 * @{
 */
#define ATLC_RX_ADDR1__VL__SHIFT                                              0
#define ATLC_RX_ADDR1__VL__WIDTH                                              8
#define ATLC_RX_ADDR1__VL__MASK                                     0x000000ffU
#define ATLC_RX_ADDR1__VL__READ(src)            ((uint32_t)(src) & 0x000000ffU)
#define ATLC_RX_ADDR1__VL__WRITE(src)           ((uint32_t)(src) & 0x000000ffU)
#define ATLC_RX_ADDR1__VL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define ATLC_RX_ADDR1__VL__VERIFY(src)    (!(((uint32_t)(src) & ~0x000000ffU)))
#define ATLC_RX_ADDR1__VL__RESET_VALUE                              0x00000000U
/** @} */
#define ATLC_RX_ADDR1__TYPE                                            uint32_t
#define ATLC_RX_ADDR1__READ                                         0x000000ffU
#define ATLC_RX_ADDR1__WRITE                                        0x000000ffU
#define ATLC_RX_ADDR1__PRESERVED                                    0x00000000U
#define ATLC_RX_ADDR1__RESET_VALUE                                  0x00000000U

#endif /* __ATLC_RX_ADDR1_MACRO__ */

/** @} end of rx_addr1 */

/* macros for BlueprintGlobalNameSpace::ATLC_rx_addr2 */
/**
 * @defgroup at_lc_regs_core_rx_addr2 rx_addr2
 * @brief Contains register fields associated with rx_addr2. definitions.
 * @{
 */
#ifndef __ATLC_RX_ADDR2_MACRO__
#define __ATLC_RX_ADDR2_MACRO__

/* macros for field vl */
/**
 * @defgroup at_lc_regs_core_vl_field vl_field
 * @brief macros for field vl
 * @details rx addr of rx node 2 and tx_addr for tx node 2
 * @{
 */
#define ATLC_RX_ADDR2__VL__SHIFT                                              0
#define ATLC_RX_ADDR2__VL__WIDTH                                              8
#define ATLC_RX_ADDR2__VL__MASK                                     0x000000ffU
#define ATLC_RX_ADDR2__VL__READ(src)            ((uint32_t)(src) & 0x000000ffU)
#define ATLC_RX_ADDR2__VL__WRITE(src)           ((uint32_t)(src) & 0x000000ffU)
#define ATLC_RX_ADDR2__VL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define ATLC_RX_ADDR2__VL__VERIFY(src)    (!(((uint32_t)(src) & ~0x000000ffU)))
#define ATLC_RX_ADDR2__VL__RESET_VALUE                              0x00000000U
/** @} */
#define ATLC_RX_ADDR2__TYPE                                            uint32_t
#define ATLC_RX_ADDR2__READ                                         0x000000ffU
#define ATLC_RX_ADDR2__WRITE                                        0x000000ffU
#define ATLC_RX_ADDR2__PRESERVED                                    0x00000000U
#define ATLC_RX_ADDR2__RESET_VALUE                                  0x00000000U

#endif /* __ATLC_RX_ADDR2_MACRO__ */

/** @} end of rx_addr2 */

/* macros for BlueprintGlobalNameSpace::ATLC_rx_addr3 */
/**
 * @defgroup at_lc_regs_core_rx_addr3 rx_addr3
 * @brief Contains register fields associated with rx_addr3. definitions.
 * @{
 */
#ifndef __ATLC_RX_ADDR3_MACRO__
#define __ATLC_RX_ADDR3_MACRO__

/* macros for field vl */
/**
 * @defgroup at_lc_regs_core_vl_field vl_field
 * @brief macros for field vl
 * @details rx addr of rx node 3 and tx_addr for tx node 3
 * @{
 */
#define ATLC_RX_ADDR3__VL__SHIFT                                              0
#define ATLC_RX_ADDR3__VL__WIDTH                                              8
#define ATLC_RX_ADDR3__VL__MASK                                     0x000000ffU
#define ATLC_RX_ADDR3__VL__READ(src)            ((uint32_t)(src) & 0x000000ffU)
#define ATLC_RX_ADDR3__VL__WRITE(src)           ((uint32_t)(src) & 0x000000ffU)
#define ATLC_RX_ADDR3__VL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define ATLC_RX_ADDR3__VL__VERIFY(src)    (!(((uint32_t)(src) & ~0x000000ffU)))
#define ATLC_RX_ADDR3__VL__RESET_VALUE                              0x00000000U
/** @} */
#define ATLC_RX_ADDR3__TYPE                                            uint32_t
#define ATLC_RX_ADDR3__READ                                         0x000000ffU
#define ATLC_RX_ADDR3__WRITE                                        0x000000ffU
#define ATLC_RX_ADDR3__PRESERVED                                    0x00000000U
#define ATLC_RX_ADDR3__RESET_VALUE                                  0x00000000U

#endif /* __ATLC_RX_ADDR3_MACRO__ */

/** @} end of rx_addr3 */

/* macros for BlueprintGlobalNameSpace::ATLC_rx_addr4 */
/**
 * @defgroup at_lc_regs_core_rx_addr4 rx_addr4
 * @brief Contains register fields associated with rx_addr4. definitions.
 * @{
 */
#ifndef __ATLC_RX_ADDR4_MACRO__
#define __ATLC_RX_ADDR4_MACRO__

/* macros for field vl */
/**
 * @defgroup at_lc_regs_core_vl_field vl_field
 * @brief macros for field vl
 * @details rx addr of rx node 4 and tx_addr for tx node 4
 * @{
 */
#define ATLC_RX_ADDR4__VL__SHIFT                                              0
#define ATLC_RX_ADDR4__VL__WIDTH                                              8
#define ATLC_RX_ADDR4__VL__MASK                                     0x000000ffU
#define ATLC_RX_ADDR4__VL__READ(src)            ((uint32_t)(src) & 0x000000ffU)
#define ATLC_RX_ADDR4__VL__WRITE(src)           ((uint32_t)(src) & 0x000000ffU)
#define ATLC_RX_ADDR4__VL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define ATLC_RX_ADDR4__VL__VERIFY(src)    (!(((uint32_t)(src) & ~0x000000ffU)))
#define ATLC_RX_ADDR4__VL__RESET_VALUE                              0x00000000U
/** @} */
#define ATLC_RX_ADDR4__TYPE                                            uint32_t
#define ATLC_RX_ADDR4__READ                                         0x000000ffU
#define ATLC_RX_ADDR4__WRITE                                        0x000000ffU
#define ATLC_RX_ADDR4__PRESERVED                                    0x00000000U
#define ATLC_RX_ADDR4__RESET_VALUE                                  0x00000000U

#endif /* __ATLC_RX_ADDR4_MACRO__ */

/** @} end of rx_addr4 */

/* macros for BlueprintGlobalNameSpace::ATLC_rx_addr5 */
/**
 * @defgroup at_lc_regs_core_rx_addr5 rx_addr5
 * @brief Contains register fields associated with rx_addr5. definitions.
 * @{
 */
#ifndef __ATLC_RX_ADDR5_MACRO__
#define __ATLC_RX_ADDR5_MACRO__

/* macros for field vl */
/**
 * @defgroup at_lc_regs_core_vl_field vl_field
 * @brief macros for field vl
 * @details rx addr of rx node 5 and tx_addr for tx node 5
 * @{
 */
#define ATLC_RX_ADDR5__VL__SHIFT                                              0
#define ATLC_RX_ADDR5__VL__WIDTH                                              8
#define ATLC_RX_ADDR5__VL__MASK                                     0x000000ffU
#define ATLC_RX_ADDR5__VL__READ(src)            ((uint32_t)(src) & 0x000000ffU)
#define ATLC_RX_ADDR5__VL__WRITE(src)           ((uint32_t)(src) & 0x000000ffU)
#define ATLC_RX_ADDR5__VL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define ATLC_RX_ADDR5__VL__VERIFY(src)    (!(((uint32_t)(src) & ~0x000000ffU)))
#define ATLC_RX_ADDR5__VL__RESET_VALUE                              0x00000000U
/** @} */
#define ATLC_RX_ADDR5__TYPE                                            uint32_t
#define ATLC_RX_ADDR5__READ                                         0x000000ffU
#define ATLC_RX_ADDR5__WRITE                                        0x000000ffU
#define ATLC_RX_ADDR5__PRESERVED                                    0x00000000U
#define ATLC_RX_ADDR5__RESET_VALUE                                  0x00000000U

#endif /* __ATLC_RX_ADDR5_MACRO__ */

/** @} end of rx_addr5 */

/* macros for BlueprintGlobalNameSpace::ATLC_rx_addr6 */
/**
 * @defgroup at_lc_regs_core_rx_addr6 rx_addr6
 * @brief Contains register fields associated with rx_addr6. definitions.
 * @{
 */
#ifndef __ATLC_RX_ADDR6_MACRO__
#define __ATLC_RX_ADDR6_MACRO__

/* macros for field vl */
/**
 * @defgroup at_lc_regs_core_vl_field vl_field
 * @brief macros for field vl
 * @details rx addr of rx node 6 and tx_addr for tx node 6
 * @{
 */
#define ATLC_RX_ADDR6__VL__SHIFT                                              0
#define ATLC_RX_ADDR6__VL__WIDTH                                              8
#define ATLC_RX_ADDR6__VL__MASK                                     0x000000ffU
#define ATLC_RX_ADDR6__VL__READ(src)            ((uint32_t)(src) & 0x000000ffU)
#define ATLC_RX_ADDR6__VL__WRITE(src)           ((uint32_t)(src) & 0x000000ffU)
#define ATLC_RX_ADDR6__VL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define ATLC_RX_ADDR6__VL__VERIFY(src)    (!(((uint32_t)(src) & ~0x000000ffU)))
#define ATLC_RX_ADDR6__VL__RESET_VALUE                              0x00000000U
/** @} */
#define ATLC_RX_ADDR6__TYPE                                            uint32_t
#define ATLC_RX_ADDR6__READ                                         0x000000ffU
#define ATLC_RX_ADDR6__WRITE                                        0x000000ffU
#define ATLC_RX_ADDR6__PRESERVED                                    0x00000000U
#define ATLC_RX_ADDR6__RESET_VALUE                                  0x00000000U

#endif /* __ATLC_RX_ADDR6_MACRO__ */

/** @} end of rx_addr6 */

/* macros for BlueprintGlobalNameSpace::ATLC_rx_addr7 */
/**
 * @defgroup at_lc_regs_core_rx_addr7 rx_addr7
 * @brief Contains register fields associated with rx_addr7. definitions.
 * @{
 */
#ifndef __ATLC_RX_ADDR7_MACRO__
#define __ATLC_RX_ADDR7_MACRO__

/* macros for field vl */
/**
 * @defgroup at_lc_regs_core_vl_field vl_field
 * @brief macros for field vl
 * @details rx addr of rx node 7 and tx_addr for tx node 7
 * @{
 */
#define ATLC_RX_ADDR7__VL__SHIFT                                              0
#define ATLC_RX_ADDR7__VL__WIDTH                                              8
#define ATLC_RX_ADDR7__VL__MASK                                     0x000000ffU
#define ATLC_RX_ADDR7__VL__READ(src)            ((uint32_t)(src) & 0x000000ffU)
#define ATLC_RX_ADDR7__VL__WRITE(src)           ((uint32_t)(src) & 0x000000ffU)
#define ATLC_RX_ADDR7__VL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define ATLC_RX_ADDR7__VL__VERIFY(src)    (!(((uint32_t)(src) & ~0x000000ffU)))
#define ATLC_RX_ADDR7__VL__RESET_VALUE                              0x00000000U
/** @} */
#define ATLC_RX_ADDR7__TYPE                                            uint32_t
#define ATLC_RX_ADDR7__READ                                         0x000000ffU
#define ATLC_RX_ADDR7__WRITE                                        0x000000ffU
#define ATLC_RX_ADDR7__PRESERVED                                    0x00000000U
#define ATLC_RX_ADDR7__RESET_VALUE                                  0x00000000U

#endif /* __ATLC_RX_ADDR7_MACRO__ */

/** @} end of rx_addr7 */

/* macros for BlueprintGlobalNameSpace::ATLC_tff0_addr */
/**
 * @defgroup at_lc_regs_core_tff0_addr tff0_addr
 * @brief Contains register fields associated with tff0_addr. definitions.
 * @{
 */
#ifndef __ATLC_TFF0_ADDR_MACRO__
#define __ATLC_TFF0_ADDR_MACRO__

/* macros for field st */
/**
 * @defgroup at_lc_regs_core_st_field st_field
 * @brief macros for field st
 * @details tx fifo node 0 start addr
 * @{
 */
#define ATLC_TFF0_ADDR__ST__SHIFT                                             0
#define ATLC_TFF0_ADDR__ST__WIDTH                                            16
#define ATLC_TFF0_ADDR__ST__MASK                                    0x0000ffffU
#define ATLC_TFF0_ADDR__ST__READ(src)           ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_TFF0_ADDR__ST__WRITE(src)          ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_TFF0_ADDR__ST__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ffffU) | ((uint32_t)(src) &\
                    0x0000ffffU)
#define ATLC_TFF0_ADDR__ST__VERIFY(src)   (!(((uint32_t)(src) & ~0x0000ffffU)))
#define ATLC_TFF0_ADDR__ST__RESET_VALUE                             0x00000000U
/** @} */

/* macros for field ed */
/**
 * @defgroup at_lc_regs_core_ed_field ed_field
 * @brief macros for field ed
 * @details tx fifo node 0 end addr
 * @{
 */
#define ATLC_TFF0_ADDR__ED__SHIFT                                            16
#define ATLC_TFF0_ADDR__ED__WIDTH                                            16
#define ATLC_TFF0_ADDR__ED__MASK                                    0xffff0000U
#define ATLC_TFF0_ADDR__ED__READ(src)   (((uint32_t)(src) & 0xffff0000U) >> 16)
#define ATLC_TFF0_ADDR__ED__WRITE(src)  (((uint32_t)(src) << 16) & 0xffff0000U)
#define ATLC_TFF0_ADDR__ED__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffff0000U) | (((uint32_t)(src) <<\
                    16) & 0xffff0000U)
#define ATLC_TFF0_ADDR__ED__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0xffff0000U)))
#define ATLC_TFF0_ADDR__ED__RESET_VALUE                             0x0000031eU
/** @} */
#define ATLC_TFF0_ADDR__TYPE                                           uint32_t
#define ATLC_TFF0_ADDR__READ                                        0xffffffffU
#define ATLC_TFF0_ADDR__WRITE                                       0xffffffffU
#define ATLC_TFF0_ADDR__PRESERVED                                   0x00000000U
#define ATLC_TFF0_ADDR__RESET_VALUE                                 0x031e0000U

#endif /* __ATLC_TFF0_ADDR_MACRO__ */

/** @} end of tff0_addr */

/* macros for BlueprintGlobalNameSpace::ATLC_rff0_addr */
/**
 * @defgroup at_lc_regs_core_rff0_addr rff0_addr
 * @brief Contains register fields associated with rff0_addr. definitions.
 * @{
 */
#ifndef __ATLC_RFF0_ADDR_MACRO__
#define __ATLC_RFF0_ADDR_MACRO__

/* macros for field st */
/**
 * @defgroup at_lc_regs_core_st_field st_field
 * @brief macros for field st
 * @details rx fifo node 0 start addr
 * @{
 */
#define ATLC_RFF0_ADDR__ST__SHIFT                                             0
#define ATLC_RFF0_ADDR__ST__WIDTH                                            16
#define ATLC_RFF0_ADDR__ST__MASK                                    0x0000ffffU
#define ATLC_RFF0_ADDR__ST__READ(src)           ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_RFF0_ADDR__ST__WRITE(src)          ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_RFF0_ADDR__ST__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ffffU) | ((uint32_t)(src) &\
                    0x0000ffffU)
#define ATLC_RFF0_ADDR__ST__VERIFY(src)   (!(((uint32_t)(src) & ~0x0000ffffU)))
#define ATLC_RFF0_ADDR__ST__RESET_VALUE                             0x00000320U
/** @} */

/* macros for field ed */
/**
 * @defgroup at_lc_regs_core_ed_field ed_field
 * @brief macros for field ed
 * @details rx fifo node 0 end addr
 * @{
 */
#define ATLC_RFF0_ADDR__ED__SHIFT                                            16
#define ATLC_RFF0_ADDR__ED__WIDTH                                            16
#define ATLC_RFF0_ADDR__ED__MASK                                    0xffff0000U
#define ATLC_RFF0_ADDR__ED__READ(src)   (((uint32_t)(src) & 0xffff0000U) >> 16)
#define ATLC_RFF0_ADDR__ED__WRITE(src)  (((uint32_t)(src) << 16) & 0xffff0000U)
#define ATLC_RFF0_ADDR__ED__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffff0000U) | (((uint32_t)(src) <<\
                    16) & 0xffff0000U)
#define ATLC_RFF0_ADDR__ED__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0xffff0000U)))
#define ATLC_RFF0_ADDR__ED__RESET_VALUE                             0x0000063eU
/** @} */
#define ATLC_RFF0_ADDR__TYPE                                           uint32_t
#define ATLC_RFF0_ADDR__READ                                        0xffffffffU
#define ATLC_RFF0_ADDR__WRITE                                       0xffffffffU
#define ATLC_RFF0_ADDR__PRESERVED                                   0x00000000U
#define ATLC_RFF0_ADDR__RESET_VALUE                                 0x063e0320U

#endif /* __ATLC_RFF0_ADDR_MACRO__ */

/** @} end of rff0_addr */

/* macros for BlueprintGlobalNameSpace::ATLC_tff1_addr */
/**
 * @defgroup at_lc_regs_core_tff1_addr tff1_addr
 * @brief Contains register fields associated with tff1_addr. definitions.
 * @{
 */
#ifndef __ATLC_TFF1_ADDR_MACRO__
#define __ATLC_TFF1_ADDR_MACRO__

/* macros for field st */
/**
 * @defgroup at_lc_regs_core_st_field st_field
 * @brief macros for field st
 * @details tx fifo node 1 start addr
 * @{
 */
#define ATLC_TFF1_ADDR__ST__SHIFT                                             0
#define ATLC_TFF1_ADDR__ST__WIDTH                                            16
#define ATLC_TFF1_ADDR__ST__MASK                                    0x0000ffffU
#define ATLC_TFF1_ADDR__ST__READ(src)           ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_TFF1_ADDR__ST__WRITE(src)          ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_TFF1_ADDR__ST__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ffffU) | ((uint32_t)(src) &\
                    0x0000ffffU)
#define ATLC_TFF1_ADDR__ST__VERIFY(src)   (!(((uint32_t)(src) & ~0x0000ffffU)))
#define ATLC_TFF1_ADDR__ST__RESET_VALUE                             0x00000640U
/** @} */

/* macros for field ed */
/**
 * @defgroup at_lc_regs_core_ed_field ed_field
 * @brief macros for field ed
 * @details tx fifo node 1 end addr
 * @{
 */
#define ATLC_TFF1_ADDR__ED__SHIFT                                            16
#define ATLC_TFF1_ADDR__ED__WIDTH                                            16
#define ATLC_TFF1_ADDR__ED__MASK                                    0xffff0000U
#define ATLC_TFF1_ADDR__ED__READ(src)   (((uint32_t)(src) & 0xffff0000U) >> 16)
#define ATLC_TFF1_ADDR__ED__WRITE(src)  (((uint32_t)(src) << 16) & 0xffff0000U)
#define ATLC_TFF1_ADDR__ED__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffff0000U) | (((uint32_t)(src) <<\
                    16) & 0xffff0000U)
#define ATLC_TFF1_ADDR__ED__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0xffff0000U)))
#define ATLC_TFF1_ADDR__ED__RESET_VALUE                             0x0000095eU
/** @} */
#define ATLC_TFF1_ADDR__TYPE                                           uint32_t
#define ATLC_TFF1_ADDR__READ                                        0xffffffffU
#define ATLC_TFF1_ADDR__WRITE                                       0xffffffffU
#define ATLC_TFF1_ADDR__PRESERVED                                   0x00000000U
#define ATLC_TFF1_ADDR__RESET_VALUE                                 0x095e0640U

#endif /* __ATLC_TFF1_ADDR_MACRO__ */

/** @} end of tff1_addr */

/* macros for BlueprintGlobalNameSpace::ATLC_rff1_addr */
/**
 * @defgroup at_lc_regs_core_rff1_addr rff1_addr
 * @brief Contains register fields associated with rff1_addr. definitions.
 * @{
 */
#ifndef __ATLC_RFF1_ADDR_MACRO__
#define __ATLC_RFF1_ADDR_MACRO__

/* macros for field st */
/**
 * @defgroup at_lc_regs_core_st_field st_field
 * @brief macros for field st
 * @details rx fifo node 1 start addr
 * @{
 */
#define ATLC_RFF1_ADDR__ST__SHIFT                                             0
#define ATLC_RFF1_ADDR__ST__WIDTH                                            16
#define ATLC_RFF1_ADDR__ST__MASK                                    0x0000ffffU
#define ATLC_RFF1_ADDR__ST__READ(src)           ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_RFF1_ADDR__ST__WRITE(src)          ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_RFF1_ADDR__ST__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ffffU) | ((uint32_t)(src) &\
                    0x0000ffffU)
#define ATLC_RFF1_ADDR__ST__VERIFY(src)   (!(((uint32_t)(src) & ~0x0000ffffU)))
#define ATLC_RFF1_ADDR__ST__RESET_VALUE                             0x00000960U
/** @} */

/* macros for field ed */
/**
 * @defgroup at_lc_regs_core_ed_field ed_field
 * @brief macros for field ed
 * @details rx fifo node 1 end addr
 * @{
 */
#define ATLC_RFF1_ADDR__ED__SHIFT                                            16
#define ATLC_RFF1_ADDR__ED__WIDTH                                            16
#define ATLC_RFF1_ADDR__ED__MASK                                    0xffff0000U
#define ATLC_RFF1_ADDR__ED__READ(src)   (((uint32_t)(src) & 0xffff0000U) >> 16)
#define ATLC_RFF1_ADDR__ED__WRITE(src)  (((uint32_t)(src) << 16) & 0xffff0000U)
#define ATLC_RFF1_ADDR__ED__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffff0000U) | (((uint32_t)(src) <<\
                    16) & 0xffff0000U)
#define ATLC_RFF1_ADDR__ED__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0xffff0000U)))
#define ATLC_RFF1_ADDR__ED__RESET_VALUE                             0x00000c7eU
/** @} */
#define ATLC_RFF1_ADDR__TYPE                                           uint32_t
#define ATLC_RFF1_ADDR__READ                                        0xffffffffU
#define ATLC_RFF1_ADDR__WRITE                                       0xffffffffU
#define ATLC_RFF1_ADDR__PRESERVED                                   0x00000000U
#define ATLC_RFF1_ADDR__RESET_VALUE                                 0x0c7e0960U

#endif /* __ATLC_RFF1_ADDR_MACRO__ */

/** @} end of rff1_addr */

/* macros for BlueprintGlobalNameSpace::ATLC_tff2_addr */
/**
 * @defgroup at_lc_regs_core_tff2_addr tff2_addr
 * @brief Contains register fields associated with tff2_addr. definitions.
 * @{
 */
#ifndef __ATLC_TFF2_ADDR_MACRO__
#define __ATLC_TFF2_ADDR_MACRO__

/* macros for field st */
/**
 * @defgroup at_lc_regs_core_st_field st_field
 * @brief macros for field st
 * @details tx fifo node 2 start addr
 * @{
 */
#define ATLC_TFF2_ADDR__ST__SHIFT                                             0
#define ATLC_TFF2_ADDR__ST__WIDTH                                            16
#define ATLC_TFF2_ADDR__ST__MASK                                    0x0000ffffU
#define ATLC_TFF2_ADDR__ST__READ(src)           ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_TFF2_ADDR__ST__WRITE(src)          ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_TFF2_ADDR__ST__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ffffU) | ((uint32_t)(src) &\
                    0x0000ffffU)
#define ATLC_TFF2_ADDR__ST__VERIFY(src)   (!(((uint32_t)(src) & ~0x0000ffffU)))
#define ATLC_TFF2_ADDR__ST__RESET_VALUE                             0x00000c80U
/** @} */

/* macros for field ed */
/**
 * @defgroup at_lc_regs_core_ed_field ed_field
 * @brief macros for field ed
 * @details tx fifo node 2 end addr
 * @{
 */
#define ATLC_TFF2_ADDR__ED__SHIFT                                            16
#define ATLC_TFF2_ADDR__ED__WIDTH                                            16
#define ATLC_TFF2_ADDR__ED__MASK                                    0xffff0000U
#define ATLC_TFF2_ADDR__ED__READ(src)   (((uint32_t)(src) & 0xffff0000U) >> 16)
#define ATLC_TFF2_ADDR__ED__WRITE(src)  (((uint32_t)(src) << 16) & 0xffff0000U)
#define ATLC_TFF2_ADDR__ED__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffff0000U) | (((uint32_t)(src) <<\
                    16) & 0xffff0000U)
#define ATLC_TFF2_ADDR__ED__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0xffff0000U)))
#define ATLC_TFF2_ADDR__ED__RESET_VALUE                             0x00000f9eU
/** @} */
#define ATLC_TFF2_ADDR__TYPE                                           uint32_t
#define ATLC_TFF2_ADDR__READ                                        0xffffffffU
#define ATLC_TFF2_ADDR__WRITE                                       0xffffffffU
#define ATLC_TFF2_ADDR__PRESERVED                                   0x00000000U
#define ATLC_TFF2_ADDR__RESET_VALUE                                 0x0f9e0c80U

#endif /* __ATLC_TFF2_ADDR_MACRO__ */

/** @} end of tff2_addr */

/* macros for BlueprintGlobalNameSpace::ATLC_rff2_addr */
/**
 * @defgroup at_lc_regs_core_rff2_addr rff2_addr
 * @brief Contains register fields associated with rff2_addr. definitions.
 * @{
 */
#ifndef __ATLC_RFF2_ADDR_MACRO__
#define __ATLC_RFF2_ADDR_MACRO__

/* macros for field st */
/**
 * @defgroup at_lc_regs_core_st_field st_field
 * @brief macros for field st
 * @details rx fifo node 2 start addr
 * @{
 */
#define ATLC_RFF2_ADDR__ST__SHIFT                                             0
#define ATLC_RFF2_ADDR__ST__WIDTH                                            16
#define ATLC_RFF2_ADDR__ST__MASK                                    0x0000ffffU
#define ATLC_RFF2_ADDR__ST__READ(src)           ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_RFF2_ADDR__ST__WRITE(src)          ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_RFF2_ADDR__ST__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ffffU) | ((uint32_t)(src) &\
                    0x0000ffffU)
#define ATLC_RFF2_ADDR__ST__VERIFY(src)   (!(((uint32_t)(src) & ~0x0000ffffU)))
#define ATLC_RFF2_ADDR__ST__RESET_VALUE                             0x00000fa0U
/** @} */

/* macros for field ed */
/**
 * @defgroup at_lc_regs_core_ed_field ed_field
 * @brief macros for field ed
 * @details rx fifo node 2 end addr
 * @{
 */
#define ATLC_RFF2_ADDR__ED__SHIFT                                            16
#define ATLC_RFF2_ADDR__ED__WIDTH                                            16
#define ATLC_RFF2_ADDR__ED__MASK                                    0xffff0000U
#define ATLC_RFF2_ADDR__ED__READ(src)   (((uint32_t)(src) & 0xffff0000U) >> 16)
#define ATLC_RFF2_ADDR__ED__WRITE(src)  (((uint32_t)(src) << 16) & 0xffff0000U)
#define ATLC_RFF2_ADDR__ED__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffff0000U) | (((uint32_t)(src) <<\
                    16) & 0xffff0000U)
#define ATLC_RFF2_ADDR__ED__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0xffff0000U)))
#define ATLC_RFF2_ADDR__ED__RESET_VALUE                             0x000012beU
/** @} */
#define ATLC_RFF2_ADDR__TYPE                                           uint32_t
#define ATLC_RFF2_ADDR__READ                                        0xffffffffU
#define ATLC_RFF2_ADDR__WRITE                                       0xffffffffU
#define ATLC_RFF2_ADDR__PRESERVED                                   0x00000000U
#define ATLC_RFF2_ADDR__RESET_VALUE                                 0x12be0fa0U

#endif /* __ATLC_RFF2_ADDR_MACRO__ */

/** @} end of rff2_addr */

/* macros for BlueprintGlobalNameSpace::ATLC_tff3_addr */
/**
 * @defgroup at_lc_regs_core_tff3_addr tff3_addr
 * @brief Contains register fields associated with tff3_addr. definitions.
 * @{
 */
#ifndef __ATLC_TFF3_ADDR_MACRO__
#define __ATLC_TFF3_ADDR_MACRO__

/* macros for field st */
/**
 * @defgroup at_lc_regs_core_st_field st_field
 * @brief macros for field st
 * @details tx fifo node 3 start addr
 * @{
 */
#define ATLC_TFF3_ADDR__ST__SHIFT                                             0
#define ATLC_TFF3_ADDR__ST__WIDTH                                            16
#define ATLC_TFF3_ADDR__ST__MASK                                    0x0000ffffU
#define ATLC_TFF3_ADDR__ST__READ(src)           ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_TFF3_ADDR__ST__WRITE(src)          ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_TFF3_ADDR__ST__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ffffU) | ((uint32_t)(src) &\
                    0x0000ffffU)
#define ATLC_TFF3_ADDR__ST__VERIFY(src)   (!(((uint32_t)(src) & ~0x0000ffffU)))
#define ATLC_TFF3_ADDR__ST__RESET_VALUE                             0x000012c0U
/** @} */

/* macros for field ed */
/**
 * @defgroup at_lc_regs_core_ed_field ed_field
 * @brief macros for field ed
 * @details tx fifo node 3 end addr
 * @{
 */
#define ATLC_TFF3_ADDR__ED__SHIFT                                            16
#define ATLC_TFF3_ADDR__ED__WIDTH                                            16
#define ATLC_TFF3_ADDR__ED__MASK                                    0xffff0000U
#define ATLC_TFF3_ADDR__ED__READ(src)   (((uint32_t)(src) & 0xffff0000U) >> 16)
#define ATLC_TFF3_ADDR__ED__WRITE(src)  (((uint32_t)(src) << 16) & 0xffff0000U)
#define ATLC_TFF3_ADDR__ED__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffff0000U) | (((uint32_t)(src) <<\
                    16) & 0xffff0000U)
#define ATLC_TFF3_ADDR__ED__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0xffff0000U)))
#define ATLC_TFF3_ADDR__ED__RESET_VALUE                             0x000015deU
/** @} */
#define ATLC_TFF3_ADDR__TYPE                                           uint32_t
#define ATLC_TFF3_ADDR__READ                                        0xffffffffU
#define ATLC_TFF3_ADDR__WRITE                                       0xffffffffU
#define ATLC_TFF3_ADDR__PRESERVED                                   0x00000000U
#define ATLC_TFF3_ADDR__RESET_VALUE                                 0x15de12c0U

#endif /* __ATLC_TFF3_ADDR_MACRO__ */

/** @} end of tff3_addr */

/* macros for BlueprintGlobalNameSpace::ATLC_rff3_addr */
/**
 * @defgroup at_lc_regs_core_rff3_addr rff3_addr
 * @brief Contains register fields associated with rff3_addr. definitions.
 * @{
 */
#ifndef __ATLC_RFF3_ADDR_MACRO__
#define __ATLC_RFF3_ADDR_MACRO__

/* macros for field st */
/**
 * @defgroup at_lc_regs_core_st_field st_field
 * @brief macros for field st
 * @details rx fifo node 3 start addr
 * @{
 */
#define ATLC_RFF3_ADDR__ST__SHIFT                                             0
#define ATLC_RFF3_ADDR__ST__WIDTH                                            16
#define ATLC_RFF3_ADDR__ST__MASK                                    0x0000ffffU
#define ATLC_RFF3_ADDR__ST__READ(src)           ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_RFF3_ADDR__ST__WRITE(src)          ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_RFF3_ADDR__ST__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ffffU) | ((uint32_t)(src) &\
                    0x0000ffffU)
#define ATLC_RFF3_ADDR__ST__VERIFY(src)   (!(((uint32_t)(src) & ~0x0000ffffU)))
#define ATLC_RFF3_ADDR__ST__RESET_VALUE                             0x000015e0U
/** @} */

/* macros for field ed */
/**
 * @defgroup at_lc_regs_core_ed_field ed_field
 * @brief macros for field ed
 * @details rx fifo node 3 end addr
 * @{
 */
#define ATLC_RFF3_ADDR__ED__SHIFT                                            16
#define ATLC_RFF3_ADDR__ED__WIDTH                                            16
#define ATLC_RFF3_ADDR__ED__MASK                                    0xffff0000U
#define ATLC_RFF3_ADDR__ED__READ(src)   (((uint32_t)(src) & 0xffff0000U) >> 16)
#define ATLC_RFF3_ADDR__ED__WRITE(src)  (((uint32_t)(src) << 16) & 0xffff0000U)
#define ATLC_RFF3_ADDR__ED__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffff0000U) | (((uint32_t)(src) <<\
                    16) & 0xffff0000U)
#define ATLC_RFF3_ADDR__ED__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0xffff0000U)))
#define ATLC_RFF3_ADDR__ED__RESET_VALUE                             0x000018feU
/** @} */
#define ATLC_RFF3_ADDR__TYPE                                           uint32_t
#define ATLC_RFF3_ADDR__READ                                        0xffffffffU
#define ATLC_RFF3_ADDR__WRITE                                       0xffffffffU
#define ATLC_RFF3_ADDR__PRESERVED                                   0x00000000U
#define ATLC_RFF3_ADDR__RESET_VALUE                                 0x18fe15e0U

#endif /* __ATLC_RFF3_ADDR_MACRO__ */

/** @} end of rff3_addr */

/* macros for BlueprintGlobalNameSpace::ATLC_tff4_addr */
/**
 * @defgroup at_lc_regs_core_tff4_addr tff4_addr
 * @brief Contains register fields associated with tff4_addr. definitions.
 * @{
 */
#ifndef __ATLC_TFF4_ADDR_MACRO__
#define __ATLC_TFF4_ADDR_MACRO__

/* macros for field st */
/**
 * @defgroup at_lc_regs_core_st_field st_field
 * @brief macros for field st
 * @details tx fifo node 4 start addr
 * @{
 */
#define ATLC_TFF4_ADDR__ST__SHIFT                                             0
#define ATLC_TFF4_ADDR__ST__WIDTH                                            16
#define ATLC_TFF4_ADDR__ST__MASK                                    0x0000ffffU
#define ATLC_TFF4_ADDR__ST__READ(src)           ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_TFF4_ADDR__ST__WRITE(src)          ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_TFF4_ADDR__ST__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ffffU) | ((uint32_t)(src) &\
                    0x0000ffffU)
#define ATLC_TFF4_ADDR__ST__VERIFY(src)   (!(((uint32_t)(src) & ~0x0000ffffU)))
#define ATLC_TFF4_ADDR__ST__RESET_VALUE                             0x00001900U
/** @} */

/* macros for field ed */
/**
 * @defgroup at_lc_regs_core_ed_field ed_field
 * @brief macros for field ed
 * @details tx fifo node 4 end addr
 * @{
 */
#define ATLC_TFF4_ADDR__ED__SHIFT                                            16
#define ATLC_TFF4_ADDR__ED__WIDTH                                            16
#define ATLC_TFF4_ADDR__ED__MASK                                    0xffff0000U
#define ATLC_TFF4_ADDR__ED__READ(src)   (((uint32_t)(src) & 0xffff0000U) >> 16)
#define ATLC_TFF4_ADDR__ED__WRITE(src)  (((uint32_t)(src) << 16) & 0xffff0000U)
#define ATLC_TFF4_ADDR__ED__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffff0000U) | (((uint32_t)(src) <<\
                    16) & 0xffff0000U)
#define ATLC_TFF4_ADDR__ED__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0xffff0000U)))
#define ATLC_TFF4_ADDR__ED__RESET_VALUE                             0x00001c1eU
/** @} */
#define ATLC_TFF4_ADDR__TYPE                                           uint32_t
#define ATLC_TFF4_ADDR__READ                                        0xffffffffU
#define ATLC_TFF4_ADDR__WRITE                                       0xffffffffU
#define ATLC_TFF4_ADDR__PRESERVED                                   0x00000000U
#define ATLC_TFF4_ADDR__RESET_VALUE                                 0x1c1e1900U

#endif /* __ATLC_TFF4_ADDR_MACRO__ */

/** @} end of tff4_addr */

/* macros for BlueprintGlobalNameSpace::ATLC_rff4_addr */
/**
 * @defgroup at_lc_regs_core_rff4_addr rff4_addr
 * @brief Contains register fields associated with rff4_addr. definitions.
 * @{
 */
#ifndef __ATLC_RFF4_ADDR_MACRO__
#define __ATLC_RFF4_ADDR_MACRO__

/* macros for field st */
/**
 * @defgroup at_lc_regs_core_st_field st_field
 * @brief macros for field st
 * @details rx fifo node 4 start addr
 * @{
 */
#define ATLC_RFF4_ADDR__ST__SHIFT                                             0
#define ATLC_RFF4_ADDR__ST__WIDTH                                            16
#define ATLC_RFF4_ADDR__ST__MASK                                    0x0000ffffU
#define ATLC_RFF4_ADDR__ST__READ(src)           ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_RFF4_ADDR__ST__WRITE(src)          ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_RFF4_ADDR__ST__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ffffU) | ((uint32_t)(src) &\
                    0x0000ffffU)
#define ATLC_RFF4_ADDR__ST__VERIFY(src)   (!(((uint32_t)(src) & ~0x0000ffffU)))
#define ATLC_RFF4_ADDR__ST__RESET_VALUE                             0x00001c20U
/** @} */

/* macros for field ed */
/**
 * @defgroup at_lc_regs_core_ed_field ed_field
 * @brief macros for field ed
 * @details rx fifo node 4 end addr
 * @{
 */
#define ATLC_RFF4_ADDR__ED__SHIFT                                            16
#define ATLC_RFF4_ADDR__ED__WIDTH                                            16
#define ATLC_RFF4_ADDR__ED__MASK                                    0xffff0000U
#define ATLC_RFF4_ADDR__ED__READ(src)   (((uint32_t)(src) & 0xffff0000U) >> 16)
#define ATLC_RFF4_ADDR__ED__WRITE(src)  (((uint32_t)(src) << 16) & 0xffff0000U)
#define ATLC_RFF4_ADDR__ED__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffff0000U) | (((uint32_t)(src) <<\
                    16) & 0xffff0000U)
#define ATLC_RFF4_ADDR__ED__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0xffff0000U)))
#define ATLC_RFF4_ADDR__ED__RESET_VALUE                             0x00001f3eU
/** @} */
#define ATLC_RFF4_ADDR__TYPE                                           uint32_t
#define ATLC_RFF4_ADDR__READ                                        0xffffffffU
#define ATLC_RFF4_ADDR__WRITE                                       0xffffffffU
#define ATLC_RFF4_ADDR__PRESERVED                                   0x00000000U
#define ATLC_RFF4_ADDR__RESET_VALUE                                 0x1f3e1c20U

#endif /* __ATLC_RFF4_ADDR_MACRO__ */

/** @} end of rff4_addr */

/* macros for BlueprintGlobalNameSpace::ATLC_tff5_addr */
/**
 * @defgroup at_lc_regs_core_tff5_addr tff5_addr
 * @brief Contains register fields associated with tff5_addr. definitions.
 * @{
 */
#ifndef __ATLC_TFF5_ADDR_MACRO__
#define __ATLC_TFF5_ADDR_MACRO__

/* macros for field st */
/**
 * @defgroup at_lc_regs_core_st_field st_field
 * @brief macros for field st
 * @details tx fifo node 5 start addr
 * @{
 */
#define ATLC_TFF5_ADDR__ST__SHIFT                                             0
#define ATLC_TFF5_ADDR__ST__WIDTH                                            16
#define ATLC_TFF5_ADDR__ST__MASK                                    0x0000ffffU
#define ATLC_TFF5_ADDR__ST__READ(src)           ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_TFF5_ADDR__ST__WRITE(src)          ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_TFF5_ADDR__ST__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ffffU) | ((uint32_t)(src) &\
                    0x0000ffffU)
#define ATLC_TFF5_ADDR__ST__VERIFY(src)   (!(((uint32_t)(src) & ~0x0000ffffU)))
#define ATLC_TFF5_ADDR__ST__RESET_VALUE                             0x00001f40U
/** @} */

/* macros for field ed */
/**
 * @defgroup at_lc_regs_core_ed_field ed_field
 * @brief macros for field ed
 * @details tx fifo node 5 end addr
 * @{
 */
#define ATLC_TFF5_ADDR__ED__SHIFT                                            16
#define ATLC_TFF5_ADDR__ED__WIDTH                                            16
#define ATLC_TFF5_ADDR__ED__MASK                                    0xffff0000U
#define ATLC_TFF5_ADDR__ED__READ(src)   (((uint32_t)(src) & 0xffff0000U) >> 16)
#define ATLC_TFF5_ADDR__ED__WRITE(src)  (((uint32_t)(src) << 16) & 0xffff0000U)
#define ATLC_TFF5_ADDR__ED__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffff0000U) | (((uint32_t)(src) <<\
                    16) & 0xffff0000U)
#define ATLC_TFF5_ADDR__ED__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0xffff0000U)))
#define ATLC_TFF5_ADDR__ED__RESET_VALUE                             0x0000225eU
/** @} */
#define ATLC_TFF5_ADDR__TYPE                                           uint32_t
#define ATLC_TFF5_ADDR__READ                                        0xffffffffU
#define ATLC_TFF5_ADDR__WRITE                                       0xffffffffU
#define ATLC_TFF5_ADDR__PRESERVED                                   0x00000000U
#define ATLC_TFF5_ADDR__RESET_VALUE                                 0x225e1f40U

#endif /* __ATLC_TFF5_ADDR_MACRO__ */

/** @} end of tff5_addr */

/* macros for BlueprintGlobalNameSpace::ATLC_rff5_addr */
/**
 * @defgroup at_lc_regs_core_rff5_addr rff5_addr
 * @brief Contains register fields associated with rff5_addr. definitions.
 * @{
 */
#ifndef __ATLC_RFF5_ADDR_MACRO__
#define __ATLC_RFF5_ADDR_MACRO__

/* macros for field st */
/**
 * @defgroup at_lc_regs_core_st_field st_field
 * @brief macros for field st
 * @details rx fifo node 5 start addr
 * @{
 */
#define ATLC_RFF5_ADDR__ST__SHIFT                                             0
#define ATLC_RFF5_ADDR__ST__WIDTH                                            16
#define ATLC_RFF5_ADDR__ST__MASK                                    0x0000ffffU
#define ATLC_RFF5_ADDR__ST__READ(src)           ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_RFF5_ADDR__ST__WRITE(src)          ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_RFF5_ADDR__ST__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ffffU) | ((uint32_t)(src) &\
                    0x0000ffffU)
#define ATLC_RFF5_ADDR__ST__VERIFY(src)   (!(((uint32_t)(src) & ~0x0000ffffU)))
#define ATLC_RFF5_ADDR__ST__RESET_VALUE                             0x00002260U
/** @} */

/* macros for field ed */
/**
 * @defgroup at_lc_regs_core_ed_field ed_field
 * @brief macros for field ed
 * @details rx fifo node 5 end addr
 * @{
 */
#define ATLC_RFF5_ADDR__ED__SHIFT                                            16
#define ATLC_RFF5_ADDR__ED__WIDTH                                            16
#define ATLC_RFF5_ADDR__ED__MASK                                    0xffff0000U
#define ATLC_RFF5_ADDR__ED__READ(src)   (((uint32_t)(src) & 0xffff0000U) >> 16)
#define ATLC_RFF5_ADDR__ED__WRITE(src)  (((uint32_t)(src) << 16) & 0xffff0000U)
#define ATLC_RFF5_ADDR__ED__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffff0000U) | (((uint32_t)(src) <<\
                    16) & 0xffff0000U)
#define ATLC_RFF5_ADDR__ED__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0xffff0000U)))
#define ATLC_RFF5_ADDR__ED__RESET_VALUE                             0x0000257eU
/** @} */
#define ATLC_RFF5_ADDR__TYPE                                           uint32_t
#define ATLC_RFF5_ADDR__READ                                        0xffffffffU
#define ATLC_RFF5_ADDR__WRITE                                       0xffffffffU
#define ATLC_RFF5_ADDR__PRESERVED                                   0x00000000U
#define ATLC_RFF5_ADDR__RESET_VALUE                                 0x257e2260U

#endif /* __ATLC_RFF5_ADDR_MACRO__ */

/** @} end of rff5_addr */

/* macros for BlueprintGlobalNameSpace::ATLC_tff6_addr */
/**
 * @defgroup at_lc_regs_core_tff6_addr tff6_addr
 * @brief Contains register fields associated with tff6_addr. definitions.
 * @{
 */
#ifndef __ATLC_TFF6_ADDR_MACRO__
#define __ATLC_TFF6_ADDR_MACRO__

/* macros for field st */
/**
 * @defgroup at_lc_regs_core_st_field st_field
 * @brief macros for field st
 * @details tx fifo node 6 start addr
 * @{
 */
#define ATLC_TFF6_ADDR__ST__SHIFT                                             0
#define ATLC_TFF6_ADDR__ST__WIDTH                                            16
#define ATLC_TFF6_ADDR__ST__MASK                                    0x0000ffffU
#define ATLC_TFF6_ADDR__ST__READ(src)           ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_TFF6_ADDR__ST__WRITE(src)          ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_TFF6_ADDR__ST__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ffffU) | ((uint32_t)(src) &\
                    0x0000ffffU)
#define ATLC_TFF6_ADDR__ST__VERIFY(src)   (!(((uint32_t)(src) & ~0x0000ffffU)))
#define ATLC_TFF6_ADDR__ST__RESET_VALUE                             0x00002580U
/** @} */

/* macros for field ed */
/**
 * @defgroup at_lc_regs_core_ed_field ed_field
 * @brief macros for field ed
 * @details tx fifo node 6 end addr
 * @{
 */
#define ATLC_TFF6_ADDR__ED__SHIFT                                            16
#define ATLC_TFF6_ADDR__ED__WIDTH                                            16
#define ATLC_TFF6_ADDR__ED__MASK                                    0xffff0000U
#define ATLC_TFF6_ADDR__ED__READ(src)   (((uint32_t)(src) & 0xffff0000U) >> 16)
#define ATLC_TFF6_ADDR__ED__WRITE(src)  (((uint32_t)(src) << 16) & 0xffff0000U)
#define ATLC_TFF6_ADDR__ED__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffff0000U) | (((uint32_t)(src) <<\
                    16) & 0xffff0000U)
#define ATLC_TFF6_ADDR__ED__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0xffff0000U)))
#define ATLC_TFF6_ADDR__ED__RESET_VALUE                             0x0000289eU
/** @} */
#define ATLC_TFF6_ADDR__TYPE                                           uint32_t
#define ATLC_TFF6_ADDR__READ                                        0xffffffffU
#define ATLC_TFF6_ADDR__WRITE                                       0xffffffffU
#define ATLC_TFF6_ADDR__PRESERVED                                   0x00000000U
#define ATLC_TFF6_ADDR__RESET_VALUE                                 0x289e2580U

#endif /* __ATLC_TFF6_ADDR_MACRO__ */

/** @} end of tff6_addr */

/* macros for BlueprintGlobalNameSpace::ATLC_rff6_addr */
/**
 * @defgroup at_lc_regs_core_rff6_addr rff6_addr
 * @brief Contains register fields associated with rff6_addr. definitions.
 * @{
 */
#ifndef __ATLC_RFF6_ADDR_MACRO__
#define __ATLC_RFF6_ADDR_MACRO__

/* macros for field st */
/**
 * @defgroup at_lc_regs_core_st_field st_field
 * @brief macros for field st
 * @details rx fifo node 6 start addr
 * @{
 */
#define ATLC_RFF6_ADDR__ST__SHIFT                                             0
#define ATLC_RFF6_ADDR__ST__WIDTH                                            16
#define ATLC_RFF6_ADDR__ST__MASK                                    0x0000ffffU
#define ATLC_RFF6_ADDR__ST__READ(src)           ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_RFF6_ADDR__ST__WRITE(src)          ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_RFF6_ADDR__ST__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ffffU) | ((uint32_t)(src) &\
                    0x0000ffffU)
#define ATLC_RFF6_ADDR__ST__VERIFY(src)   (!(((uint32_t)(src) & ~0x0000ffffU)))
#define ATLC_RFF6_ADDR__ST__RESET_VALUE                             0x000028a0U
/** @} */

/* macros for field ed */
/**
 * @defgroup at_lc_regs_core_ed_field ed_field
 * @brief macros for field ed
 * @details rx fifo node 6 end addr
 * @{
 */
#define ATLC_RFF6_ADDR__ED__SHIFT                                            16
#define ATLC_RFF6_ADDR__ED__WIDTH                                            16
#define ATLC_RFF6_ADDR__ED__MASK                                    0xffff0000U
#define ATLC_RFF6_ADDR__ED__READ(src)   (((uint32_t)(src) & 0xffff0000U) >> 16)
#define ATLC_RFF6_ADDR__ED__WRITE(src)  (((uint32_t)(src) << 16) & 0xffff0000U)
#define ATLC_RFF6_ADDR__ED__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffff0000U) | (((uint32_t)(src) <<\
                    16) & 0xffff0000U)
#define ATLC_RFF6_ADDR__ED__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0xffff0000U)))
#define ATLC_RFF6_ADDR__ED__RESET_VALUE                             0x00002bbeU
/** @} */
#define ATLC_RFF6_ADDR__TYPE                                           uint32_t
#define ATLC_RFF6_ADDR__READ                                        0xffffffffU
#define ATLC_RFF6_ADDR__WRITE                                       0xffffffffU
#define ATLC_RFF6_ADDR__PRESERVED                                   0x00000000U
#define ATLC_RFF6_ADDR__RESET_VALUE                                 0x2bbe28a0U

#endif /* __ATLC_RFF6_ADDR_MACRO__ */

/** @} end of rff6_addr */

/* macros for BlueprintGlobalNameSpace::ATLC_tff7_addr */
/**
 * @defgroup at_lc_regs_core_tff7_addr tff7_addr
 * @brief Contains register fields associated with tff7_addr. definitions.
 * @{
 */
#ifndef __ATLC_TFF7_ADDR_MACRO__
#define __ATLC_TFF7_ADDR_MACRO__

/* macros for field st */
/**
 * @defgroup at_lc_regs_core_st_field st_field
 * @brief macros for field st
 * @details tx fifo node 7 start addr
 * @{
 */
#define ATLC_TFF7_ADDR__ST__SHIFT                                             0
#define ATLC_TFF7_ADDR__ST__WIDTH                                            16
#define ATLC_TFF7_ADDR__ST__MASK                                    0x0000ffffU
#define ATLC_TFF7_ADDR__ST__READ(src)           ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_TFF7_ADDR__ST__WRITE(src)          ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_TFF7_ADDR__ST__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ffffU) | ((uint32_t)(src) &\
                    0x0000ffffU)
#define ATLC_TFF7_ADDR__ST__VERIFY(src)   (!(((uint32_t)(src) & ~0x0000ffffU)))
#define ATLC_TFF7_ADDR__ST__RESET_VALUE                             0x00002bc0U
/** @} */

/* macros for field ed */
/**
 * @defgroup at_lc_regs_core_ed_field ed_field
 * @brief macros for field ed
 * @details tx fifo node 7 end addr
 * @{
 */
#define ATLC_TFF7_ADDR__ED__SHIFT                                            16
#define ATLC_TFF7_ADDR__ED__WIDTH                                            16
#define ATLC_TFF7_ADDR__ED__MASK                                    0xffff0000U
#define ATLC_TFF7_ADDR__ED__READ(src)   (((uint32_t)(src) & 0xffff0000U) >> 16)
#define ATLC_TFF7_ADDR__ED__WRITE(src)  (((uint32_t)(src) << 16) & 0xffff0000U)
#define ATLC_TFF7_ADDR__ED__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffff0000U) | (((uint32_t)(src) <<\
                    16) & 0xffff0000U)
#define ATLC_TFF7_ADDR__ED__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0xffff0000U)))
#define ATLC_TFF7_ADDR__ED__RESET_VALUE                             0x00002edeU
/** @} */
#define ATLC_TFF7_ADDR__TYPE                                           uint32_t
#define ATLC_TFF7_ADDR__READ                                        0xffffffffU
#define ATLC_TFF7_ADDR__WRITE                                       0xffffffffU
#define ATLC_TFF7_ADDR__PRESERVED                                   0x00000000U
#define ATLC_TFF7_ADDR__RESET_VALUE                                 0x2ede2bc0U

#endif /* __ATLC_TFF7_ADDR_MACRO__ */

/** @} end of tff7_addr */

/* macros for BlueprintGlobalNameSpace::ATLC_rff7_addr */
/**
 * @defgroup at_lc_regs_core_rff7_addr rff7_addr
 * @brief Contains register fields associated with rff7_addr. definitions.
 * @{
 */
#ifndef __ATLC_RFF7_ADDR_MACRO__
#define __ATLC_RFF7_ADDR_MACRO__

/* macros for field st */
/**
 * @defgroup at_lc_regs_core_st_field st_field
 * @brief macros for field st
 * @details rx fifo node 7 start addr
 * @{
 */
#define ATLC_RFF7_ADDR__ST__SHIFT                                             0
#define ATLC_RFF7_ADDR__ST__WIDTH                                            16
#define ATLC_RFF7_ADDR__ST__MASK                                    0x0000ffffU
#define ATLC_RFF7_ADDR__ST__READ(src)           ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_RFF7_ADDR__ST__WRITE(src)          ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_RFF7_ADDR__ST__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ffffU) | ((uint32_t)(src) &\
                    0x0000ffffU)
#define ATLC_RFF7_ADDR__ST__VERIFY(src)   (!(((uint32_t)(src) & ~0x0000ffffU)))
#define ATLC_RFF7_ADDR__ST__RESET_VALUE                             0x00002ee0U
/** @} */

/* macros for field ed */
/**
 * @defgroup at_lc_regs_core_ed_field ed_field
 * @brief macros for field ed
 * @details rx fifo node 7 end addr
 * @{
 */
#define ATLC_RFF7_ADDR__ED__SHIFT                                            16
#define ATLC_RFF7_ADDR__ED__WIDTH                                            16
#define ATLC_RFF7_ADDR__ED__MASK                                    0xffff0000U
#define ATLC_RFF7_ADDR__ED__READ(src)   (((uint32_t)(src) & 0xffff0000U) >> 16)
#define ATLC_RFF7_ADDR__ED__WRITE(src)  (((uint32_t)(src) << 16) & 0xffff0000U)
#define ATLC_RFF7_ADDR__ED__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffff0000U) | (((uint32_t)(src) <<\
                    16) & 0xffff0000U)
#define ATLC_RFF7_ADDR__ED__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0xffff0000U)))
#define ATLC_RFF7_ADDR__ED__RESET_VALUE                             0x000031feU
/** @} */
#define ATLC_RFF7_ADDR__TYPE                                           uint32_t
#define ATLC_RFF7_ADDR__READ                                        0xffffffffU
#define ATLC_RFF7_ADDR__WRITE                                       0xffffffffU
#define ATLC_RFF7_ADDR__PRESERVED                                   0x00000000U
#define ATLC_RFF7_ADDR__RESET_VALUE                                 0x31fe2ee0U

#endif /* __ATLC_RFF7_ADDR_MACRO__ */

/** @} end of rff7_addr */

/* macros for BlueprintGlobalNameSpace::ATLC_tff0_rptr */
/**
 * @defgroup at_lc_regs_core_tff0_rptr tff0_rptr
 * @brief Contains register fields associated with tff0_rptr. definitions.
 * @{
 */
#ifndef __ATLC_TFF0_RPTR_MACRO__
#define __ATLC_TFF0_RPTR_MACRO__

/* macros for field vl */
/**
 * @defgroup at_lc_regs_core_vl_field vl_field
 * @brief macros for field vl
 * @details tx fifo node 0 read pointer
 * @{
 */
#define ATLC_TFF0_RPTR__VL__SHIFT                                             0
#define ATLC_TFF0_RPTR__VL__WIDTH                                            16
#define ATLC_TFF0_RPTR__VL__MASK                                    0x0000ffffU
#define ATLC_TFF0_RPTR__VL__READ(src)           ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_TFF0_RPTR__VL__RESET_VALUE                             0x00000000U
/** @} */
#define ATLC_TFF0_RPTR__TYPE                                           uint32_t
#define ATLC_TFF0_RPTR__READ                                        0x0000ffffU
#define ATLC_TFF0_RPTR__PRESERVED                                   0x00000000U
#define ATLC_TFF0_RPTR__RESET_VALUE                                 0x00000000U

#endif /* __ATLC_TFF0_RPTR_MACRO__ */

/** @} end of tff0_rptr */

/* macros for BlueprintGlobalNameSpace::ATLC_tff0_wptr */
/**
 * @defgroup at_lc_regs_core_tff0_wptr tff0_wptr
 * @brief Contains register fields associated with tff0_wptr. definitions.
 * @{
 */
#ifndef __ATLC_TFF0_WPTR_MACRO__
#define __ATLC_TFF0_WPTR_MACRO__

/* macros for field vl */
/**
 * @defgroup at_lc_regs_core_vl_field vl_field
 * @brief macros for field vl
 * @details tx fifo node 0 write pointer
 * @{
 */
#define ATLC_TFF0_WPTR__VL__SHIFT                                             0
#define ATLC_TFF0_WPTR__VL__WIDTH                                            16
#define ATLC_TFF0_WPTR__VL__MASK                                    0x0000ffffU
#define ATLC_TFF0_WPTR__VL__READ(src)           ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_TFF0_WPTR__VL__WRITE(src)          ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_TFF0_WPTR__VL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ffffU) | ((uint32_t)(src) &\
                    0x0000ffffU)
#define ATLC_TFF0_WPTR__VL__VERIFY(src)   (!(((uint32_t)(src) & ~0x0000ffffU)))
#define ATLC_TFF0_WPTR__VL__RESET_VALUE                             0x00000000U
/** @} */
#define ATLC_TFF0_WPTR__TYPE                                           uint32_t
#define ATLC_TFF0_WPTR__READ                                        0x0000ffffU
#define ATLC_TFF0_WPTR__WRITE                                       0x0000ffffU
#define ATLC_TFF0_WPTR__PRESERVED                                   0x00000000U
#define ATLC_TFF0_WPTR__RESET_VALUE                                 0x00000000U

#endif /* __ATLC_TFF0_WPTR_MACRO__ */

/** @} end of tff0_wptr */

/* macros for BlueprintGlobalNameSpace::ATLC_rff0_rptr */
/**
 * @defgroup at_lc_regs_core_rff0_rptr rff0_rptr
 * @brief Contains register fields associated with rff0_rptr. definitions.
 * @{
 */
#ifndef __ATLC_RFF0_RPTR_MACRO__
#define __ATLC_RFF0_RPTR_MACRO__

/* macros for field vl */
/**
 * @defgroup at_lc_regs_core_vl_field vl_field
 * @brief macros for field vl
 * @details rx fifo node 0 read pointer
 * @{
 */
#define ATLC_RFF0_RPTR__VL__SHIFT                                             0
#define ATLC_RFF0_RPTR__VL__WIDTH                                            16
#define ATLC_RFF0_RPTR__VL__MASK                                    0x0000ffffU
#define ATLC_RFF0_RPTR__VL__READ(src)           ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_RFF0_RPTR__VL__WRITE(src)          ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_RFF0_RPTR__VL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ffffU) | ((uint32_t)(src) &\
                    0x0000ffffU)
#define ATLC_RFF0_RPTR__VL__VERIFY(src)   (!(((uint32_t)(src) & ~0x0000ffffU)))
#define ATLC_RFF0_RPTR__VL__RESET_VALUE                             0x00000000U
/** @} */
#define ATLC_RFF0_RPTR__TYPE                                           uint32_t
#define ATLC_RFF0_RPTR__READ                                        0x0000ffffU
#define ATLC_RFF0_RPTR__WRITE                                       0x0000ffffU
#define ATLC_RFF0_RPTR__PRESERVED                                   0x00000000U
#define ATLC_RFF0_RPTR__RESET_VALUE                                 0x00000000U

#endif /* __ATLC_RFF0_RPTR_MACRO__ */

/** @} end of rff0_rptr */

/* macros for BlueprintGlobalNameSpace::ATLC_rff0_wptr */
/**
 * @defgroup at_lc_regs_core_rff0_wptr rff0_wptr
 * @brief Contains register fields associated with rff0_wptr. definitions.
 * @{
 */
#ifndef __ATLC_RFF0_WPTR_MACRO__
#define __ATLC_RFF0_WPTR_MACRO__

/* macros for field vl */
/**
 * @defgroup at_lc_regs_core_vl_field vl_field
 * @brief macros for field vl
 * @details rx fifo node 0 write pointer
 * @{
 */
#define ATLC_RFF0_WPTR__VL__SHIFT                                             0
#define ATLC_RFF0_WPTR__VL__WIDTH                                            16
#define ATLC_RFF0_WPTR__VL__MASK                                    0x0000ffffU
#define ATLC_RFF0_WPTR__VL__READ(src)           ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_RFF0_WPTR__VL__RESET_VALUE                             0x00000000U
/** @} */
#define ATLC_RFF0_WPTR__TYPE                                           uint32_t
#define ATLC_RFF0_WPTR__READ                                        0x0000ffffU
#define ATLC_RFF0_WPTR__PRESERVED                                   0x00000000U
#define ATLC_RFF0_WPTR__RESET_VALUE                                 0x00000000U

#endif /* __ATLC_RFF0_WPTR_MACRO__ */

/** @} end of rff0_wptr */

/* macros for BlueprintGlobalNameSpace::ATLC_tff1_rptr */
/**
 * @defgroup at_lc_regs_core_tff1_rptr tff1_rptr
 * @brief Contains register fields associated with tff1_rptr. definitions.
 * @{
 */
#ifndef __ATLC_TFF1_RPTR_MACRO__
#define __ATLC_TFF1_RPTR_MACRO__

/* macros for field vl */
/**
 * @defgroup at_lc_regs_core_vl_field vl_field
 * @brief macros for field vl
 * @details tx fifo node 1 read pointer
 * @{
 */
#define ATLC_TFF1_RPTR__VL__SHIFT                                             0
#define ATLC_TFF1_RPTR__VL__WIDTH                                            16
#define ATLC_TFF1_RPTR__VL__MASK                                    0x0000ffffU
#define ATLC_TFF1_RPTR__VL__READ(src)           ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_TFF1_RPTR__VL__RESET_VALUE                             0x00000000U
/** @} */
#define ATLC_TFF1_RPTR__TYPE                                           uint32_t
#define ATLC_TFF1_RPTR__READ                                        0x0000ffffU
#define ATLC_TFF1_RPTR__PRESERVED                                   0x00000000U
#define ATLC_TFF1_RPTR__RESET_VALUE                                 0x00000000U

#endif /* __ATLC_TFF1_RPTR_MACRO__ */

/** @} end of tff1_rptr */

/* macros for BlueprintGlobalNameSpace::ATLC_tff1_wptr */
/**
 * @defgroup at_lc_regs_core_tff1_wptr tff1_wptr
 * @brief Contains register fields associated with tff1_wptr. definitions.
 * @{
 */
#ifndef __ATLC_TFF1_WPTR_MACRO__
#define __ATLC_TFF1_WPTR_MACRO__

/* macros for field vl */
/**
 * @defgroup at_lc_regs_core_vl_field vl_field
 * @brief macros for field vl
 * @details tx fifo node 1 write pointer
 * @{
 */
#define ATLC_TFF1_WPTR__VL__SHIFT                                             0
#define ATLC_TFF1_WPTR__VL__WIDTH                                            16
#define ATLC_TFF1_WPTR__VL__MASK                                    0x0000ffffU
#define ATLC_TFF1_WPTR__VL__READ(src)           ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_TFF1_WPTR__VL__WRITE(src)          ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_TFF1_WPTR__VL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ffffU) | ((uint32_t)(src) &\
                    0x0000ffffU)
#define ATLC_TFF1_WPTR__VL__VERIFY(src)   (!(((uint32_t)(src) & ~0x0000ffffU)))
#define ATLC_TFF1_WPTR__VL__RESET_VALUE                             0x00000000U
/** @} */
#define ATLC_TFF1_WPTR__TYPE                                           uint32_t
#define ATLC_TFF1_WPTR__READ                                        0x0000ffffU
#define ATLC_TFF1_WPTR__WRITE                                       0x0000ffffU
#define ATLC_TFF1_WPTR__PRESERVED                                   0x00000000U
#define ATLC_TFF1_WPTR__RESET_VALUE                                 0x00000000U

#endif /* __ATLC_TFF1_WPTR_MACRO__ */

/** @} end of tff1_wptr */

/* macros for BlueprintGlobalNameSpace::ATLC_rff1_rptr */
/**
 * @defgroup at_lc_regs_core_rff1_rptr rff1_rptr
 * @brief Contains register fields associated with rff1_rptr. definitions.
 * @{
 */
#ifndef __ATLC_RFF1_RPTR_MACRO__
#define __ATLC_RFF1_RPTR_MACRO__

/* macros for field vl */
/**
 * @defgroup at_lc_regs_core_vl_field vl_field
 * @brief macros for field vl
 * @details rx fifo node 1 read pointer
 * @{
 */
#define ATLC_RFF1_RPTR__VL__SHIFT                                             0
#define ATLC_RFF1_RPTR__VL__WIDTH                                            16
#define ATLC_RFF1_RPTR__VL__MASK                                    0x0000ffffU
#define ATLC_RFF1_RPTR__VL__READ(src)           ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_RFF1_RPTR__VL__WRITE(src)          ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_RFF1_RPTR__VL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ffffU) | ((uint32_t)(src) &\
                    0x0000ffffU)
#define ATLC_RFF1_RPTR__VL__VERIFY(src)   (!(((uint32_t)(src) & ~0x0000ffffU)))
#define ATLC_RFF1_RPTR__VL__RESET_VALUE                             0x00000000U
/** @} */
#define ATLC_RFF1_RPTR__TYPE                                           uint32_t
#define ATLC_RFF1_RPTR__READ                                        0x0000ffffU
#define ATLC_RFF1_RPTR__WRITE                                       0x0000ffffU
#define ATLC_RFF1_RPTR__PRESERVED                                   0x00000000U
#define ATLC_RFF1_RPTR__RESET_VALUE                                 0x00000000U

#endif /* __ATLC_RFF1_RPTR_MACRO__ */

/** @} end of rff1_rptr */

/* macros for BlueprintGlobalNameSpace::ATLC_rff1_wptr */
/**
 * @defgroup at_lc_regs_core_rff1_wptr rff1_wptr
 * @brief Contains register fields associated with rff1_wptr. definitions.
 * @{
 */
#ifndef __ATLC_RFF1_WPTR_MACRO__
#define __ATLC_RFF1_WPTR_MACRO__

/* macros for field vl */
/**
 * @defgroup at_lc_regs_core_vl_field vl_field
 * @brief macros for field vl
 * @details rx fifo node 1 write pointer
 * @{
 */
#define ATLC_RFF1_WPTR__VL__SHIFT                                             0
#define ATLC_RFF1_WPTR__VL__WIDTH                                            16
#define ATLC_RFF1_WPTR__VL__MASK                                    0x0000ffffU
#define ATLC_RFF1_WPTR__VL__READ(src)           ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_RFF1_WPTR__VL__RESET_VALUE                             0x00000000U
/** @} */
#define ATLC_RFF1_WPTR__TYPE                                           uint32_t
#define ATLC_RFF1_WPTR__READ                                        0x0000ffffU
#define ATLC_RFF1_WPTR__PRESERVED                                   0x00000000U
#define ATLC_RFF1_WPTR__RESET_VALUE                                 0x00000000U

#endif /* __ATLC_RFF1_WPTR_MACRO__ */

/** @} end of rff1_wptr */

/* macros for BlueprintGlobalNameSpace::ATLC_tff2_rptr */
/**
 * @defgroup at_lc_regs_core_tff2_rptr tff2_rptr
 * @brief Contains register fields associated with tff2_rptr. definitions.
 * @{
 */
#ifndef __ATLC_TFF2_RPTR_MACRO__
#define __ATLC_TFF2_RPTR_MACRO__

/* macros for field vl */
/**
 * @defgroup at_lc_regs_core_vl_field vl_field
 * @brief macros for field vl
 * @details tx fifo node 2 read pointer
 * @{
 */
#define ATLC_TFF2_RPTR__VL__SHIFT                                             0
#define ATLC_TFF2_RPTR__VL__WIDTH                                            16
#define ATLC_TFF2_RPTR__VL__MASK                                    0x0000ffffU
#define ATLC_TFF2_RPTR__VL__READ(src)           ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_TFF2_RPTR__VL__RESET_VALUE                             0x00000000U
/** @} */
#define ATLC_TFF2_RPTR__TYPE                                           uint32_t
#define ATLC_TFF2_RPTR__READ                                        0x0000ffffU
#define ATLC_TFF2_RPTR__PRESERVED                                   0x00000000U
#define ATLC_TFF2_RPTR__RESET_VALUE                                 0x00000000U

#endif /* __ATLC_TFF2_RPTR_MACRO__ */

/** @} end of tff2_rptr */

/* macros for BlueprintGlobalNameSpace::ATLC_tff2_wptr */
/**
 * @defgroup at_lc_regs_core_tff2_wptr tff2_wptr
 * @brief Contains register fields associated with tff2_wptr. definitions.
 * @{
 */
#ifndef __ATLC_TFF2_WPTR_MACRO__
#define __ATLC_TFF2_WPTR_MACRO__

/* macros for field vl */
/**
 * @defgroup at_lc_regs_core_vl_field vl_field
 * @brief macros for field vl
 * @details tx fifo node 2 write pointer
 * @{
 */
#define ATLC_TFF2_WPTR__VL__SHIFT                                             0
#define ATLC_TFF2_WPTR__VL__WIDTH                                            16
#define ATLC_TFF2_WPTR__VL__MASK                                    0x0000ffffU
#define ATLC_TFF2_WPTR__VL__READ(src)           ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_TFF2_WPTR__VL__WRITE(src)          ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_TFF2_WPTR__VL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ffffU) | ((uint32_t)(src) &\
                    0x0000ffffU)
#define ATLC_TFF2_WPTR__VL__VERIFY(src)   (!(((uint32_t)(src) & ~0x0000ffffU)))
#define ATLC_TFF2_WPTR__VL__RESET_VALUE                             0x00000000U
/** @} */
#define ATLC_TFF2_WPTR__TYPE                                           uint32_t
#define ATLC_TFF2_WPTR__READ                                        0x0000ffffU
#define ATLC_TFF2_WPTR__WRITE                                       0x0000ffffU
#define ATLC_TFF2_WPTR__PRESERVED                                   0x00000000U
#define ATLC_TFF2_WPTR__RESET_VALUE                                 0x00000000U

#endif /* __ATLC_TFF2_WPTR_MACRO__ */

/** @} end of tff2_wptr */

/* macros for BlueprintGlobalNameSpace::ATLC_rff2_rptr */
/**
 * @defgroup at_lc_regs_core_rff2_rptr rff2_rptr
 * @brief Contains register fields associated with rff2_rptr. definitions.
 * @{
 */
#ifndef __ATLC_RFF2_RPTR_MACRO__
#define __ATLC_RFF2_RPTR_MACRO__

/* macros for field vl */
/**
 * @defgroup at_lc_regs_core_vl_field vl_field
 * @brief macros for field vl
 * @details rx fifo node 2 read pointer
 * @{
 */
#define ATLC_RFF2_RPTR__VL__SHIFT                                             0
#define ATLC_RFF2_RPTR__VL__WIDTH                                            16
#define ATLC_RFF2_RPTR__VL__MASK                                    0x0000ffffU
#define ATLC_RFF2_RPTR__VL__READ(src)           ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_RFF2_RPTR__VL__WRITE(src)          ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_RFF2_RPTR__VL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ffffU) | ((uint32_t)(src) &\
                    0x0000ffffU)
#define ATLC_RFF2_RPTR__VL__VERIFY(src)   (!(((uint32_t)(src) & ~0x0000ffffU)))
#define ATLC_RFF2_RPTR__VL__RESET_VALUE                             0x00000000U
/** @} */
#define ATLC_RFF2_RPTR__TYPE                                           uint32_t
#define ATLC_RFF2_RPTR__READ                                        0x0000ffffU
#define ATLC_RFF2_RPTR__WRITE                                       0x0000ffffU
#define ATLC_RFF2_RPTR__PRESERVED                                   0x00000000U
#define ATLC_RFF2_RPTR__RESET_VALUE                                 0x00000000U

#endif /* __ATLC_RFF2_RPTR_MACRO__ */

/** @} end of rff2_rptr */

/* macros for BlueprintGlobalNameSpace::ATLC_rff2_wptr */
/**
 * @defgroup at_lc_regs_core_rff2_wptr rff2_wptr
 * @brief Contains register fields associated with rff2_wptr. definitions.
 * @{
 */
#ifndef __ATLC_RFF2_WPTR_MACRO__
#define __ATLC_RFF2_WPTR_MACRO__

/* macros for field vl */
/**
 * @defgroup at_lc_regs_core_vl_field vl_field
 * @brief macros for field vl
 * @details rx fifo node 2 write pointer
 * @{
 */
#define ATLC_RFF2_WPTR__VL__SHIFT                                             0
#define ATLC_RFF2_WPTR__VL__WIDTH                                            16
#define ATLC_RFF2_WPTR__VL__MASK                                    0x0000ffffU
#define ATLC_RFF2_WPTR__VL__READ(src)           ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_RFF2_WPTR__VL__RESET_VALUE                             0x00000000U
/** @} */
#define ATLC_RFF2_WPTR__TYPE                                           uint32_t
#define ATLC_RFF2_WPTR__READ                                        0x0000ffffU
#define ATLC_RFF2_WPTR__PRESERVED                                   0x00000000U
#define ATLC_RFF2_WPTR__RESET_VALUE                                 0x00000000U

#endif /* __ATLC_RFF2_WPTR_MACRO__ */

/** @} end of rff2_wptr */

/* macros for BlueprintGlobalNameSpace::ATLC_tff3_rptr */
/**
 * @defgroup at_lc_regs_core_tff3_rptr tff3_rptr
 * @brief Contains register fields associated with tff3_rptr. definitions.
 * @{
 */
#ifndef __ATLC_TFF3_RPTR_MACRO__
#define __ATLC_TFF3_RPTR_MACRO__

/* macros for field vl */
/**
 * @defgroup at_lc_regs_core_vl_field vl_field
 * @brief macros for field vl
 * @details tx fifo node 3 read pointer
 * @{
 */
#define ATLC_TFF3_RPTR__VL__SHIFT                                             0
#define ATLC_TFF3_RPTR__VL__WIDTH                                            16
#define ATLC_TFF3_RPTR__VL__MASK                                    0x0000ffffU
#define ATLC_TFF3_RPTR__VL__READ(src)           ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_TFF3_RPTR__VL__RESET_VALUE                             0x00000000U
/** @} */
#define ATLC_TFF3_RPTR__TYPE                                           uint32_t
#define ATLC_TFF3_RPTR__READ                                        0x0000ffffU
#define ATLC_TFF3_RPTR__PRESERVED                                   0x00000000U
#define ATLC_TFF3_RPTR__RESET_VALUE                                 0x00000000U

#endif /* __ATLC_TFF3_RPTR_MACRO__ */

/** @} end of tff3_rptr */

/* macros for BlueprintGlobalNameSpace::ATLC_tff3_wptr */
/**
 * @defgroup at_lc_regs_core_tff3_wptr tff3_wptr
 * @brief Contains register fields associated with tff3_wptr. definitions.
 * @{
 */
#ifndef __ATLC_TFF3_WPTR_MACRO__
#define __ATLC_TFF3_WPTR_MACRO__

/* macros for field vl */
/**
 * @defgroup at_lc_regs_core_vl_field vl_field
 * @brief macros for field vl
 * @details tx fifo node 3 write pointer
 * @{
 */
#define ATLC_TFF3_WPTR__VL__SHIFT                                             0
#define ATLC_TFF3_WPTR__VL__WIDTH                                            16
#define ATLC_TFF3_WPTR__VL__MASK                                    0x0000ffffU
#define ATLC_TFF3_WPTR__VL__READ(src)           ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_TFF3_WPTR__VL__WRITE(src)          ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_TFF3_WPTR__VL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ffffU) | ((uint32_t)(src) &\
                    0x0000ffffU)
#define ATLC_TFF3_WPTR__VL__VERIFY(src)   (!(((uint32_t)(src) & ~0x0000ffffU)))
#define ATLC_TFF3_WPTR__VL__RESET_VALUE                             0x00000000U
/** @} */
#define ATLC_TFF3_WPTR__TYPE                                           uint32_t
#define ATLC_TFF3_WPTR__READ                                        0x0000ffffU
#define ATLC_TFF3_WPTR__WRITE                                       0x0000ffffU
#define ATLC_TFF3_WPTR__PRESERVED                                   0x00000000U
#define ATLC_TFF3_WPTR__RESET_VALUE                                 0x00000000U

#endif /* __ATLC_TFF3_WPTR_MACRO__ */

/** @} end of tff3_wptr */

/* macros for BlueprintGlobalNameSpace::ATLC_rff3_rptr */
/**
 * @defgroup at_lc_regs_core_rff3_rptr rff3_rptr
 * @brief Contains register fields associated with rff3_rptr. definitions.
 * @{
 */
#ifndef __ATLC_RFF3_RPTR_MACRO__
#define __ATLC_RFF3_RPTR_MACRO__

/* macros for field vl */
/**
 * @defgroup at_lc_regs_core_vl_field vl_field
 * @brief macros for field vl
 * @details rx fifo node 3 read pointer
 * @{
 */
#define ATLC_RFF3_RPTR__VL__SHIFT                                             0
#define ATLC_RFF3_RPTR__VL__WIDTH                                            16
#define ATLC_RFF3_RPTR__VL__MASK                                    0x0000ffffU
#define ATLC_RFF3_RPTR__VL__READ(src)           ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_RFF3_RPTR__VL__WRITE(src)          ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_RFF3_RPTR__VL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ffffU) | ((uint32_t)(src) &\
                    0x0000ffffU)
#define ATLC_RFF3_RPTR__VL__VERIFY(src)   (!(((uint32_t)(src) & ~0x0000ffffU)))
#define ATLC_RFF3_RPTR__VL__RESET_VALUE                             0x00000000U
/** @} */
#define ATLC_RFF3_RPTR__TYPE                                           uint32_t
#define ATLC_RFF3_RPTR__READ                                        0x0000ffffU
#define ATLC_RFF3_RPTR__WRITE                                       0x0000ffffU
#define ATLC_RFF3_RPTR__PRESERVED                                   0x00000000U
#define ATLC_RFF3_RPTR__RESET_VALUE                                 0x00000000U

#endif /* __ATLC_RFF3_RPTR_MACRO__ */

/** @} end of rff3_rptr */

/* macros for BlueprintGlobalNameSpace::ATLC_rff3_wptr */
/**
 * @defgroup at_lc_regs_core_rff3_wptr rff3_wptr
 * @brief Contains register fields associated with rff3_wptr. definitions.
 * @{
 */
#ifndef __ATLC_RFF3_WPTR_MACRO__
#define __ATLC_RFF3_WPTR_MACRO__

/* macros for field vl */
/**
 * @defgroup at_lc_regs_core_vl_field vl_field
 * @brief macros for field vl
 * @details rx fifo node 3 write pointer
 * @{
 */
#define ATLC_RFF3_WPTR__VL__SHIFT                                             0
#define ATLC_RFF3_WPTR__VL__WIDTH                                            16
#define ATLC_RFF3_WPTR__VL__MASK                                    0x0000ffffU
#define ATLC_RFF3_WPTR__VL__READ(src)           ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_RFF3_WPTR__VL__RESET_VALUE                             0x00000000U
/** @} */
#define ATLC_RFF3_WPTR__TYPE                                           uint32_t
#define ATLC_RFF3_WPTR__READ                                        0x0000ffffU
#define ATLC_RFF3_WPTR__PRESERVED                                   0x00000000U
#define ATLC_RFF3_WPTR__RESET_VALUE                                 0x00000000U

#endif /* __ATLC_RFF3_WPTR_MACRO__ */

/** @} end of rff3_wptr */

/* macros for BlueprintGlobalNameSpace::ATLC_tff4_rptr */
/**
 * @defgroup at_lc_regs_core_tff4_rptr tff4_rptr
 * @brief Contains register fields associated with tff4_rptr. definitions.
 * @{
 */
#ifndef __ATLC_TFF4_RPTR_MACRO__
#define __ATLC_TFF4_RPTR_MACRO__

/* macros for field vl */
/**
 * @defgroup at_lc_regs_core_vl_field vl_field
 * @brief macros for field vl
 * @details tx fifo node 4 read pointer
 * @{
 */
#define ATLC_TFF4_RPTR__VL__SHIFT                                             0
#define ATLC_TFF4_RPTR__VL__WIDTH                                            16
#define ATLC_TFF4_RPTR__VL__MASK                                    0x0000ffffU
#define ATLC_TFF4_RPTR__VL__READ(src)           ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_TFF4_RPTR__VL__RESET_VALUE                             0x00000000U
/** @} */
#define ATLC_TFF4_RPTR__TYPE                                           uint32_t
#define ATLC_TFF4_RPTR__READ                                        0x0000ffffU
#define ATLC_TFF4_RPTR__PRESERVED                                   0x00000000U
#define ATLC_TFF4_RPTR__RESET_VALUE                                 0x00000000U

#endif /* __ATLC_TFF4_RPTR_MACRO__ */

/** @} end of tff4_rptr */

/* macros for BlueprintGlobalNameSpace::ATLC_tff4_wptr */
/**
 * @defgroup at_lc_regs_core_tff4_wptr tff4_wptr
 * @brief Contains register fields associated with tff4_wptr. definitions.
 * @{
 */
#ifndef __ATLC_TFF4_WPTR_MACRO__
#define __ATLC_TFF4_WPTR_MACRO__

/* macros for field vl */
/**
 * @defgroup at_lc_regs_core_vl_field vl_field
 * @brief macros for field vl
 * @details tx fifo node 4 write pointer
 * @{
 */
#define ATLC_TFF4_WPTR__VL__SHIFT                                             0
#define ATLC_TFF4_WPTR__VL__WIDTH                                            16
#define ATLC_TFF4_WPTR__VL__MASK                                    0x0000ffffU
#define ATLC_TFF4_WPTR__VL__READ(src)           ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_TFF4_WPTR__VL__WRITE(src)          ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_TFF4_WPTR__VL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ffffU) | ((uint32_t)(src) &\
                    0x0000ffffU)
#define ATLC_TFF4_WPTR__VL__VERIFY(src)   (!(((uint32_t)(src) & ~0x0000ffffU)))
#define ATLC_TFF4_WPTR__VL__RESET_VALUE                             0x00000000U
/** @} */
#define ATLC_TFF4_WPTR__TYPE                                           uint32_t
#define ATLC_TFF4_WPTR__READ                                        0x0000ffffU
#define ATLC_TFF4_WPTR__WRITE                                       0x0000ffffU
#define ATLC_TFF4_WPTR__PRESERVED                                   0x00000000U
#define ATLC_TFF4_WPTR__RESET_VALUE                                 0x00000000U

#endif /* __ATLC_TFF4_WPTR_MACRO__ */

/** @} end of tff4_wptr */

/* macros for BlueprintGlobalNameSpace::ATLC_rff4_rptr */
/**
 * @defgroup at_lc_regs_core_rff4_rptr rff4_rptr
 * @brief Contains register fields associated with rff4_rptr. definitions.
 * @{
 */
#ifndef __ATLC_RFF4_RPTR_MACRO__
#define __ATLC_RFF4_RPTR_MACRO__

/* macros for field vl */
/**
 * @defgroup at_lc_regs_core_vl_field vl_field
 * @brief macros for field vl
 * @details rx fifo node 4 read pointer
 * @{
 */
#define ATLC_RFF4_RPTR__VL__SHIFT                                             0
#define ATLC_RFF4_RPTR__VL__WIDTH                                            16
#define ATLC_RFF4_RPTR__VL__MASK                                    0x0000ffffU
#define ATLC_RFF4_RPTR__VL__READ(src)           ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_RFF4_RPTR__VL__WRITE(src)          ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_RFF4_RPTR__VL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ffffU) | ((uint32_t)(src) &\
                    0x0000ffffU)
#define ATLC_RFF4_RPTR__VL__VERIFY(src)   (!(((uint32_t)(src) & ~0x0000ffffU)))
#define ATLC_RFF4_RPTR__VL__RESET_VALUE                             0x00000000U
/** @} */
#define ATLC_RFF4_RPTR__TYPE                                           uint32_t
#define ATLC_RFF4_RPTR__READ                                        0x0000ffffU
#define ATLC_RFF4_RPTR__WRITE                                       0x0000ffffU
#define ATLC_RFF4_RPTR__PRESERVED                                   0x00000000U
#define ATLC_RFF4_RPTR__RESET_VALUE                                 0x00000000U

#endif /* __ATLC_RFF4_RPTR_MACRO__ */

/** @} end of rff4_rptr */

/* macros for BlueprintGlobalNameSpace::ATLC_rff4_wptr */
/**
 * @defgroup at_lc_regs_core_rff4_wptr rff4_wptr
 * @brief Contains register fields associated with rff4_wptr. definitions.
 * @{
 */
#ifndef __ATLC_RFF4_WPTR_MACRO__
#define __ATLC_RFF4_WPTR_MACRO__

/* macros for field vl */
/**
 * @defgroup at_lc_regs_core_vl_field vl_field
 * @brief macros for field vl
 * @details rx fifo node 4 write pointer
 * @{
 */
#define ATLC_RFF4_WPTR__VL__SHIFT                                             0
#define ATLC_RFF4_WPTR__VL__WIDTH                                            16
#define ATLC_RFF4_WPTR__VL__MASK                                    0x0000ffffU
#define ATLC_RFF4_WPTR__VL__READ(src)           ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_RFF4_WPTR__VL__RESET_VALUE                             0x00000000U
/** @} */
#define ATLC_RFF4_WPTR__TYPE                                           uint32_t
#define ATLC_RFF4_WPTR__READ                                        0x0000ffffU
#define ATLC_RFF4_WPTR__PRESERVED                                   0x00000000U
#define ATLC_RFF4_WPTR__RESET_VALUE                                 0x00000000U

#endif /* __ATLC_RFF4_WPTR_MACRO__ */

/** @} end of rff4_wptr */

/* macros for BlueprintGlobalNameSpace::ATLC_tff5_rptr */
/**
 * @defgroup at_lc_regs_core_tff5_rptr tff5_rptr
 * @brief Contains register fields associated with tff5_rptr. definitions.
 * @{
 */
#ifndef __ATLC_TFF5_RPTR_MACRO__
#define __ATLC_TFF5_RPTR_MACRO__

/* macros for field vl */
/**
 * @defgroup at_lc_regs_core_vl_field vl_field
 * @brief macros for field vl
 * @details tx fifo node 5 read pointer
 * @{
 */
#define ATLC_TFF5_RPTR__VL__SHIFT                                             0
#define ATLC_TFF5_RPTR__VL__WIDTH                                            16
#define ATLC_TFF5_RPTR__VL__MASK                                    0x0000ffffU
#define ATLC_TFF5_RPTR__VL__READ(src)           ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_TFF5_RPTR__VL__RESET_VALUE                             0x00000000U
/** @} */
#define ATLC_TFF5_RPTR__TYPE                                           uint32_t
#define ATLC_TFF5_RPTR__READ                                        0x0000ffffU
#define ATLC_TFF5_RPTR__PRESERVED                                   0x00000000U
#define ATLC_TFF5_RPTR__RESET_VALUE                                 0x00000000U

#endif /* __ATLC_TFF5_RPTR_MACRO__ */

/** @} end of tff5_rptr */

/* macros for BlueprintGlobalNameSpace::ATLC_tff5_wptr */
/**
 * @defgroup at_lc_regs_core_tff5_wptr tff5_wptr
 * @brief Contains register fields associated with tff5_wptr. definitions.
 * @{
 */
#ifndef __ATLC_TFF5_WPTR_MACRO__
#define __ATLC_TFF5_WPTR_MACRO__

/* macros for field vl */
/**
 * @defgroup at_lc_regs_core_vl_field vl_field
 * @brief macros for field vl
 * @details tx fifo node 5 write pointer
 * @{
 */
#define ATLC_TFF5_WPTR__VL__SHIFT                                             0
#define ATLC_TFF5_WPTR__VL__WIDTH                                            16
#define ATLC_TFF5_WPTR__VL__MASK                                    0x0000ffffU
#define ATLC_TFF5_WPTR__VL__READ(src)           ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_TFF5_WPTR__VL__WRITE(src)          ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_TFF5_WPTR__VL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ffffU) | ((uint32_t)(src) &\
                    0x0000ffffU)
#define ATLC_TFF5_WPTR__VL__VERIFY(src)   (!(((uint32_t)(src) & ~0x0000ffffU)))
#define ATLC_TFF5_WPTR__VL__RESET_VALUE                             0x00000000U
/** @} */
#define ATLC_TFF5_WPTR__TYPE                                           uint32_t
#define ATLC_TFF5_WPTR__READ                                        0x0000ffffU
#define ATLC_TFF5_WPTR__WRITE                                       0x0000ffffU
#define ATLC_TFF5_WPTR__PRESERVED                                   0x00000000U
#define ATLC_TFF5_WPTR__RESET_VALUE                                 0x00000000U

#endif /* __ATLC_TFF5_WPTR_MACRO__ */

/** @} end of tff5_wptr */

/* macros for BlueprintGlobalNameSpace::ATLC_rff5_rptr */
/**
 * @defgroup at_lc_regs_core_rff5_rptr rff5_rptr
 * @brief Contains register fields associated with rff5_rptr. definitions.
 * @{
 */
#ifndef __ATLC_RFF5_RPTR_MACRO__
#define __ATLC_RFF5_RPTR_MACRO__

/* macros for field vl */
/**
 * @defgroup at_lc_regs_core_vl_field vl_field
 * @brief macros for field vl
 * @details rx fifo node 5 read pointer
 * @{
 */
#define ATLC_RFF5_RPTR__VL__SHIFT                                             0
#define ATLC_RFF5_RPTR__VL__WIDTH                                            16
#define ATLC_RFF5_RPTR__VL__MASK                                    0x0000ffffU
#define ATLC_RFF5_RPTR__VL__READ(src)           ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_RFF5_RPTR__VL__WRITE(src)          ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_RFF5_RPTR__VL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ffffU) | ((uint32_t)(src) &\
                    0x0000ffffU)
#define ATLC_RFF5_RPTR__VL__VERIFY(src)   (!(((uint32_t)(src) & ~0x0000ffffU)))
#define ATLC_RFF5_RPTR__VL__RESET_VALUE                             0x00000000U
/** @} */
#define ATLC_RFF5_RPTR__TYPE                                           uint32_t
#define ATLC_RFF5_RPTR__READ                                        0x0000ffffU
#define ATLC_RFF5_RPTR__WRITE                                       0x0000ffffU
#define ATLC_RFF5_RPTR__PRESERVED                                   0x00000000U
#define ATLC_RFF5_RPTR__RESET_VALUE                                 0x00000000U

#endif /* __ATLC_RFF5_RPTR_MACRO__ */

/** @} end of rff5_rptr */

/* macros for BlueprintGlobalNameSpace::ATLC_rff5_wptr */
/**
 * @defgroup at_lc_regs_core_rff5_wptr rff5_wptr
 * @brief Contains register fields associated with rff5_wptr. definitions.
 * @{
 */
#ifndef __ATLC_RFF5_WPTR_MACRO__
#define __ATLC_RFF5_WPTR_MACRO__

/* macros for field vl */
/**
 * @defgroup at_lc_regs_core_vl_field vl_field
 * @brief macros for field vl
 * @details rx fifo node 5 write pointer
 * @{
 */
#define ATLC_RFF5_WPTR__VL__SHIFT                                             0
#define ATLC_RFF5_WPTR__VL__WIDTH                                            16
#define ATLC_RFF5_WPTR__VL__MASK                                    0x0000ffffU
#define ATLC_RFF5_WPTR__VL__READ(src)           ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_RFF5_WPTR__VL__RESET_VALUE                             0x00000000U
/** @} */
#define ATLC_RFF5_WPTR__TYPE                                           uint32_t
#define ATLC_RFF5_WPTR__READ                                        0x0000ffffU
#define ATLC_RFF5_WPTR__PRESERVED                                   0x00000000U
#define ATLC_RFF5_WPTR__RESET_VALUE                                 0x00000000U

#endif /* __ATLC_RFF5_WPTR_MACRO__ */

/** @} end of rff5_wptr */

/* macros for BlueprintGlobalNameSpace::ATLC_tff6_rptr */
/**
 * @defgroup at_lc_regs_core_tff6_rptr tff6_rptr
 * @brief Contains register fields associated with tff6_rptr. definitions.
 * @{
 */
#ifndef __ATLC_TFF6_RPTR_MACRO__
#define __ATLC_TFF6_RPTR_MACRO__

/* macros for field vl */
/**
 * @defgroup at_lc_regs_core_vl_field vl_field
 * @brief macros for field vl
 * @details tx fifo node 6 read pointer
 * @{
 */
#define ATLC_TFF6_RPTR__VL__SHIFT                                             0
#define ATLC_TFF6_RPTR__VL__WIDTH                                            16
#define ATLC_TFF6_RPTR__VL__MASK                                    0x0000ffffU
#define ATLC_TFF6_RPTR__VL__READ(src)           ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_TFF6_RPTR__VL__RESET_VALUE                             0x00000000U
/** @} */
#define ATLC_TFF6_RPTR__TYPE                                           uint32_t
#define ATLC_TFF6_RPTR__READ                                        0x0000ffffU
#define ATLC_TFF6_RPTR__PRESERVED                                   0x00000000U
#define ATLC_TFF6_RPTR__RESET_VALUE                                 0x00000000U

#endif /* __ATLC_TFF6_RPTR_MACRO__ */

/** @} end of tff6_rptr */

/* macros for BlueprintGlobalNameSpace::ATLC_tff6_wptr */
/**
 * @defgroup at_lc_regs_core_tff6_wptr tff6_wptr
 * @brief Contains register fields associated with tff6_wptr. definitions.
 * @{
 */
#ifndef __ATLC_TFF6_WPTR_MACRO__
#define __ATLC_TFF6_WPTR_MACRO__

/* macros for field vl */
/**
 * @defgroup at_lc_regs_core_vl_field vl_field
 * @brief macros for field vl
 * @details tx fifo node 6 write pointer
 * @{
 */
#define ATLC_TFF6_WPTR__VL__SHIFT                                             0
#define ATLC_TFF6_WPTR__VL__WIDTH                                            16
#define ATLC_TFF6_WPTR__VL__MASK                                    0x0000ffffU
#define ATLC_TFF6_WPTR__VL__READ(src)           ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_TFF6_WPTR__VL__WRITE(src)          ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_TFF6_WPTR__VL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ffffU) | ((uint32_t)(src) &\
                    0x0000ffffU)
#define ATLC_TFF6_WPTR__VL__VERIFY(src)   (!(((uint32_t)(src) & ~0x0000ffffU)))
#define ATLC_TFF6_WPTR__VL__RESET_VALUE                             0x00000000U
/** @} */
#define ATLC_TFF6_WPTR__TYPE                                           uint32_t
#define ATLC_TFF6_WPTR__READ                                        0x0000ffffU
#define ATLC_TFF6_WPTR__WRITE                                       0x0000ffffU
#define ATLC_TFF6_WPTR__PRESERVED                                   0x00000000U
#define ATLC_TFF6_WPTR__RESET_VALUE                                 0x00000000U

#endif /* __ATLC_TFF6_WPTR_MACRO__ */

/** @} end of tff6_wptr */

/* macros for BlueprintGlobalNameSpace::ATLC_rff6_rptr */
/**
 * @defgroup at_lc_regs_core_rff6_rptr rff6_rptr
 * @brief Contains register fields associated with rff6_rptr. definitions.
 * @{
 */
#ifndef __ATLC_RFF6_RPTR_MACRO__
#define __ATLC_RFF6_RPTR_MACRO__

/* macros for field vl */
/**
 * @defgroup at_lc_regs_core_vl_field vl_field
 * @brief macros for field vl
 * @details rx fifo node 6 read pointer
 * @{
 */
#define ATLC_RFF6_RPTR__VL__SHIFT                                             0
#define ATLC_RFF6_RPTR__VL__WIDTH                                            16
#define ATLC_RFF6_RPTR__VL__MASK                                    0x0000ffffU
#define ATLC_RFF6_RPTR__VL__READ(src)           ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_RFF6_RPTR__VL__WRITE(src)          ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_RFF6_RPTR__VL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ffffU) | ((uint32_t)(src) &\
                    0x0000ffffU)
#define ATLC_RFF6_RPTR__VL__VERIFY(src)   (!(((uint32_t)(src) & ~0x0000ffffU)))
#define ATLC_RFF6_RPTR__VL__RESET_VALUE                             0x00000000U
/** @} */
#define ATLC_RFF6_RPTR__TYPE                                           uint32_t
#define ATLC_RFF6_RPTR__READ                                        0x0000ffffU
#define ATLC_RFF6_RPTR__WRITE                                       0x0000ffffU
#define ATLC_RFF6_RPTR__PRESERVED                                   0x00000000U
#define ATLC_RFF6_RPTR__RESET_VALUE                                 0x00000000U

#endif /* __ATLC_RFF6_RPTR_MACRO__ */

/** @} end of rff6_rptr */

/* macros for BlueprintGlobalNameSpace::ATLC_rff6_wptr */
/**
 * @defgroup at_lc_regs_core_rff6_wptr rff6_wptr
 * @brief Contains register fields associated with rff6_wptr. definitions.
 * @{
 */
#ifndef __ATLC_RFF6_WPTR_MACRO__
#define __ATLC_RFF6_WPTR_MACRO__

/* macros for field vl */
/**
 * @defgroup at_lc_regs_core_vl_field vl_field
 * @brief macros for field vl
 * @details rx fifo node 6 write pointer
 * @{
 */
#define ATLC_RFF6_WPTR__VL__SHIFT                                             0
#define ATLC_RFF6_WPTR__VL__WIDTH                                            16
#define ATLC_RFF6_WPTR__VL__MASK                                    0x0000ffffU
#define ATLC_RFF6_WPTR__VL__READ(src)           ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_RFF6_WPTR__VL__RESET_VALUE                             0x00000000U
/** @} */
#define ATLC_RFF6_WPTR__TYPE                                           uint32_t
#define ATLC_RFF6_WPTR__READ                                        0x0000ffffU
#define ATLC_RFF6_WPTR__PRESERVED                                   0x00000000U
#define ATLC_RFF6_WPTR__RESET_VALUE                                 0x00000000U

#endif /* __ATLC_RFF6_WPTR_MACRO__ */

/** @} end of rff6_wptr */

/* macros for BlueprintGlobalNameSpace::ATLC_tff7_rptr */
/**
 * @defgroup at_lc_regs_core_tff7_rptr tff7_rptr
 * @brief Contains register fields associated with tff7_rptr. definitions.
 * @{
 */
#ifndef __ATLC_TFF7_RPTR_MACRO__
#define __ATLC_TFF7_RPTR_MACRO__

/* macros for field vl */
/**
 * @defgroup at_lc_regs_core_vl_field vl_field
 * @brief macros for field vl
 * @details tx fifo node 7 read pointer
 * @{
 */
#define ATLC_TFF7_RPTR__VL__SHIFT                                             0
#define ATLC_TFF7_RPTR__VL__WIDTH                                            16
#define ATLC_TFF7_RPTR__VL__MASK                                    0x0000ffffU
#define ATLC_TFF7_RPTR__VL__READ(src)           ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_TFF7_RPTR__VL__RESET_VALUE                             0x00000000U
/** @} */
#define ATLC_TFF7_RPTR__TYPE                                           uint32_t
#define ATLC_TFF7_RPTR__READ                                        0x0000ffffU
#define ATLC_TFF7_RPTR__PRESERVED                                   0x00000000U
#define ATLC_TFF7_RPTR__RESET_VALUE                                 0x00000000U

#endif /* __ATLC_TFF7_RPTR_MACRO__ */

/** @} end of tff7_rptr */

/* macros for BlueprintGlobalNameSpace::ATLC_tff7_wptr */
/**
 * @defgroup at_lc_regs_core_tff7_wptr tff7_wptr
 * @brief Contains register fields associated with tff7_wptr. definitions.
 * @{
 */
#ifndef __ATLC_TFF7_WPTR_MACRO__
#define __ATLC_TFF7_WPTR_MACRO__

/* macros for field vl */
/**
 * @defgroup at_lc_regs_core_vl_field vl_field
 * @brief macros for field vl
 * @details tx fifo node 7 write pointer
 * @{
 */
#define ATLC_TFF7_WPTR__VL__SHIFT                                             0
#define ATLC_TFF7_WPTR__VL__WIDTH                                            16
#define ATLC_TFF7_WPTR__VL__MASK                                    0x0000ffffU
#define ATLC_TFF7_WPTR__VL__READ(src)           ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_TFF7_WPTR__VL__WRITE(src)          ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_TFF7_WPTR__VL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ffffU) | ((uint32_t)(src) &\
                    0x0000ffffU)
#define ATLC_TFF7_WPTR__VL__VERIFY(src)   (!(((uint32_t)(src) & ~0x0000ffffU)))
#define ATLC_TFF7_WPTR__VL__RESET_VALUE                             0x00000000U
/** @} */
#define ATLC_TFF7_WPTR__TYPE                                           uint32_t
#define ATLC_TFF7_WPTR__READ                                        0x0000ffffU
#define ATLC_TFF7_WPTR__WRITE                                       0x0000ffffU
#define ATLC_TFF7_WPTR__PRESERVED                                   0x00000000U
#define ATLC_TFF7_WPTR__RESET_VALUE                                 0x00000000U

#endif /* __ATLC_TFF7_WPTR_MACRO__ */

/** @} end of tff7_wptr */

/* macros for BlueprintGlobalNameSpace::ATLC_rff7_rptr */
/**
 * @defgroup at_lc_regs_core_rff7_rptr rff7_rptr
 * @brief Contains register fields associated with rff7_rptr. definitions.
 * @{
 */
#ifndef __ATLC_RFF7_RPTR_MACRO__
#define __ATLC_RFF7_RPTR_MACRO__

/* macros for field vl */
/**
 * @defgroup at_lc_regs_core_vl_field vl_field
 * @brief macros for field vl
 * @details rx fifo node 7 read pointer
 * @{
 */
#define ATLC_RFF7_RPTR__VL__SHIFT                                             0
#define ATLC_RFF7_RPTR__VL__WIDTH                                            16
#define ATLC_RFF7_RPTR__VL__MASK                                    0x0000ffffU
#define ATLC_RFF7_RPTR__VL__READ(src)           ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_RFF7_RPTR__VL__WRITE(src)          ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_RFF7_RPTR__VL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ffffU) | ((uint32_t)(src) &\
                    0x0000ffffU)
#define ATLC_RFF7_RPTR__VL__VERIFY(src)   (!(((uint32_t)(src) & ~0x0000ffffU)))
#define ATLC_RFF7_RPTR__VL__RESET_VALUE                             0x00000000U
/** @} */
#define ATLC_RFF7_RPTR__TYPE                                           uint32_t
#define ATLC_RFF7_RPTR__READ                                        0x0000ffffU
#define ATLC_RFF7_RPTR__WRITE                                       0x0000ffffU
#define ATLC_RFF7_RPTR__PRESERVED                                   0x00000000U
#define ATLC_RFF7_RPTR__RESET_VALUE                                 0x00000000U

#endif /* __ATLC_RFF7_RPTR_MACRO__ */

/** @} end of rff7_rptr */

/* macros for BlueprintGlobalNameSpace::ATLC_rff7_wptr */
/**
 * @defgroup at_lc_regs_core_rff7_wptr rff7_wptr
 * @brief Contains register fields associated with rff7_wptr. definitions.
 * @{
 */
#ifndef __ATLC_RFF7_WPTR_MACRO__
#define __ATLC_RFF7_WPTR_MACRO__

/* macros for field vl */
/**
 * @defgroup at_lc_regs_core_vl_field vl_field
 * @brief macros for field vl
 * @details rx fifo node 7 write pointer
 * @{
 */
#define ATLC_RFF7_WPTR__VL__SHIFT                                             0
#define ATLC_RFF7_WPTR__VL__WIDTH                                            16
#define ATLC_RFF7_WPTR__VL__MASK                                    0x0000ffffU
#define ATLC_RFF7_WPTR__VL__READ(src)           ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_RFF7_WPTR__VL__RESET_VALUE                             0x00000000U
/** @} */
#define ATLC_RFF7_WPTR__TYPE                                           uint32_t
#define ATLC_RFF7_WPTR__READ                                        0x0000ffffU
#define ATLC_RFF7_WPTR__PRESERVED                                   0x00000000U
#define ATLC_RFF7_WPTR__RESET_VALUE                                 0x00000000U

#endif /* __ATLC_RFF7_WPTR_MACRO__ */

/** @} end of rff7_wptr */

/* macros for BlueprintGlobalNameSpace::ATLC_crc_plynml */
/**
 * @defgroup at_lc_regs_core_crc_plynml crc_plynml
 * @brief Contains register fields associated with crc_plynml. definitions.
 * @{
 */
#ifndef __ATLC_CRC_PLYNML_MACRO__
#define __ATLC_CRC_PLYNML_MACRO__

/* macros for field vl */
/**
 * @defgroup at_lc_regs_core_vl_field vl_field
 * @brief macros for field vl
 * @details crc polynomial
 * @{
 */
#define ATLC_CRC_PLYNML__VL__SHIFT                                            0
#define ATLC_CRC_PLYNML__VL__WIDTH                                           32
#define ATLC_CRC_PLYNML__VL__MASK                                   0xffffffffU
#define ATLC_CRC_PLYNML__VL__READ(src)          ((uint32_t)(src) & 0xffffffffU)
#define ATLC_CRC_PLYNML__VL__WRITE(src)         ((uint32_t)(src) & 0xffffffffU)
#define ATLC_CRC_PLYNML__VL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffffffffU) | ((uint32_t)(src) &\
                    0xffffffffU)
#define ATLC_CRC_PLYNML__VL__VERIFY(src)  (!(((uint32_t)(src) & ~0xffffffffU)))
#define ATLC_CRC_PLYNML__VL__RESET_VALUE                            0x00000000U
/** @} */
#define ATLC_CRC_PLYNML__TYPE                                          uint32_t
#define ATLC_CRC_PLYNML__READ                                       0xffffffffU
#define ATLC_CRC_PLYNML__WRITE                                      0xffffffffU
#define ATLC_CRC_PLYNML__PRESERVED                                  0x00000000U
#define ATLC_CRC_PLYNML__RESET_VALUE                                0x00000000U

#endif /* __ATLC_CRC_PLYNML_MACRO__ */

/** @} end of crc_plynml */

/* macros for BlueprintGlobalNameSpace::ATLC_crc */
/**
 * @defgroup at_lc_regs_core_crc crc
 * @brief Contains register fields associated with crc. definitions.
 * @{
 */
#ifndef __ATLC_CRC_MACRO__
#define __ATLC_CRC_MACRO__

/* macros for field vl */
/**
 * @defgroup at_lc_regs_core_vl_field vl_field
 * @brief macros for field vl
 * @details crc value
 * @{
 */
#define ATLC_CRC__VL__SHIFT                                                   0
#define ATLC_CRC__VL__WIDTH                                                  32
#define ATLC_CRC__VL__MASK                                          0xffffffffU
#define ATLC_CRC__VL__READ(src)                 ((uint32_t)(src) & 0xffffffffU)
#define ATLC_CRC__VL__WRITE(src)                ((uint32_t)(src) & 0xffffffffU)
#define ATLC_CRC__VL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffffffffU) | ((uint32_t)(src) &\
                    0xffffffffU)
#define ATLC_CRC__VL__VERIFY(src)         (!(((uint32_t)(src) & ~0xffffffffU)))
#define ATLC_CRC__VL__RESET_VALUE                                   0x00000000U
/** @} */
#define ATLC_CRC__TYPE                                                 uint32_t
#define ATLC_CRC__READ                                              0xffffffffU
#define ATLC_CRC__WRITE                                             0xffffffffU
#define ATLC_CRC__PRESERVED                                         0x00000000U
#define ATLC_CRC__RESET_VALUE                                       0x00000000U

#endif /* __ATLC_CRC_MACRO__ */

/** @} end of crc */

/* macros for BlueprintGlobalNameSpace::ATLC_cmd */
/**
 * @defgroup at_lc_regs_core_cmd cmd
 * @brief Contains register fields associated with cmd. definitions.
 * @{
 */
#ifndef __ATLC_CMD_MACRO__
#define __ATLC_CMD_MACRO__

/* macros for field vl */
/**
 * @defgroup at_lc_regs_core_vl_field vl_field
 * @brief macros for field vl
 * @details sw needs to clear to idle after issuing command 0x00 idle 0x01 power down 0x02 start tx flow 0x03 start rx flow 0x04 flush tx fifo 0x05 flush rx fifo
 * @{
 */
#define ATLC_CMD__VL__SHIFT                                                   0
#define ATLC_CMD__VL__WIDTH                                                  16
#define ATLC_CMD__VL__MASK                                          0x0000ffffU
#define ATLC_CMD__VL__READ(src)                 ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_CMD__VL__WRITE(src)                ((uint32_t)(src) & 0x0000ffffU)
#define ATLC_CMD__VL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ffffU) | ((uint32_t)(src) &\
                    0x0000ffffU)
#define ATLC_CMD__VL__VERIFY(src)         (!(((uint32_t)(src) & ~0x0000ffffU)))
#define ATLC_CMD__VL__RESET_VALUE                                   0x00000000U
/** @} */
#define ATLC_CMD__TYPE                                                 uint32_t
#define ATLC_CMD__READ                                              0x0000ffffU
#define ATLC_CMD__WRITE                                             0x0000ffffU
#define ATLC_CMD__PRESERVED                                         0x00000000U
#define ATLC_CMD__RESET_VALUE                                       0x00000000U

#endif /* __ATLC_CMD_MACRO__ */

/** @} end of cmd */

/* macros for BlueprintGlobalNameSpace::ATLC_nd_st */
/**
 * @defgroup at_lc_regs_core_nd_st nd_st
 * @brief Contains register fields associated with nd_st. definitions.
 * @{
 */
#ifndef __ATLC_ND_ST_MACRO__
#define __ATLC_ND_ST_MACRO__

/* macros for field rx_drdy_nd */
/**
 * @defgroup at_lc_regs_core_rx_drdy_nd_field rx_drdy_nd_field
 * @brief macros for field rx_drdy_nd
 * @details node number for the receive data ready interrupt
 * @{
 */
#define ATLC_ND_ST__RX_DRDY_ND__SHIFT                                         0
#define ATLC_ND_ST__RX_DRDY_ND__WIDTH                                         3
#define ATLC_ND_ST__RX_DRDY_ND__MASK                                0x00000007U
#define ATLC_ND_ST__RX_DRDY_ND__READ(src)       ((uint32_t)(src) & 0x00000007U)
#define ATLC_ND_ST__RX_DRDY_ND__RESET_VALUE                         0x00000000U
/** @} */

/* macros for field rff_of_nd */
/**
 * @defgroup at_lc_regs_core_rff_of_nd_field rff_of_nd_field
 * @brief macros for field rff_of_nd
 * @details node number for the receive fifo overflow interrupt
 * @{
 */
#define ATLC_ND_ST__RFF_OF_ND__SHIFT                                          4
#define ATLC_ND_ST__RFF_OF_ND__WIDTH                                          3
#define ATLC_ND_ST__RFF_OF_ND__MASK                                 0x00000070U
#define ATLC_ND_ST__RFF_OF_ND__READ(src) (((uint32_t)(src) & 0x00000070U) >> 4)
#define ATLC_ND_ST__RFF_OF_ND__RESET_VALUE                          0x00000000U
/** @} */

/* macros for field tff_uf_nd */
/**
 * @defgroup at_lc_regs_core_tff_uf_nd_field tff_uf_nd_field
 * @brief macros for field tff_uf_nd
 * @details node number for the receive fifo underflow interrupt
 * @{
 */
#define ATLC_ND_ST__TFF_UF_ND__SHIFT                                          8
#define ATLC_ND_ST__TFF_UF_ND__WIDTH                                          3
#define ATLC_ND_ST__TFF_UF_ND__MASK                                 0x00000700U
#define ATLC_ND_ST__TFF_UF_ND__READ(src) (((uint32_t)(src) & 0x00000700U) >> 8)
#define ATLC_ND_ST__TFF_UF_ND__RESET_VALUE                          0x00000000U
/** @} */

/* macros for field rmff_of_nd */
/**
 * @defgroup at_lc_regs_core_rmff_of_nd_field rmff_of_nd_field
 * @brief macros for field rmff_of_nd
 * @details node number for the memory receive fifo overflow interrupt
 * @{
 */
#define ATLC_ND_ST__RMFF_OF_ND__SHIFT                                        12
#define ATLC_ND_ST__RMFF_OF_ND__WIDTH                                         3
#define ATLC_ND_ST__RMFF_OF_ND__MASK                                0x00007000U
#define ATLC_ND_ST__RMFF_OF_ND__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00007000U) >> 12)
#define ATLC_ND_ST__RMFF_OF_ND__RESET_VALUE                         0x00000000U
/** @} */

/* macros for field tmff_uf_nd */
/**
 * @defgroup at_lc_regs_core_tmff_uf_nd_field tmff_uf_nd_field
 * @brief macros for field tmff_uf_nd
 * @details node number for the memory transmit fifo underflow interrupt
 * @{
 */
#define ATLC_ND_ST__TMFF_UF_ND__SHIFT                                        16
#define ATLC_ND_ST__TMFF_UF_ND__WIDTH                                         3
#define ATLC_ND_ST__TMFF_UF_ND__MASK                                0x00070000U
#define ATLC_ND_ST__TMFF_UF_ND__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00070000U) >> 16)
#define ATLC_ND_ST__TMFF_UF_ND__RESET_VALUE                         0x00000000U
/** @} */
#define ATLC_ND_ST__TYPE                                               uint32_t
#define ATLC_ND_ST__READ                                            0x00077777U
#define ATLC_ND_ST__PRESERVED                                       0x00000000U
#define ATLC_ND_ST__RESET_VALUE                                     0x00000000U

#endif /* __ATLC_ND_ST_MACRO__ */

/** @} end of nd_st */

/* macros for BlueprintGlobalNameSpace::ATLC_irq */
/**
 * @defgroup at_lc_regs_core_irq irq
 * @brief Contains register fields associated with irq. definitions.
 * @{
 */
#ifndef __ATLC_IRQ_MACRO__
#define __ATLC_IRQ_MACRO__

/* macros for field tx_dsnt */
/**
 * @defgroup at_lc_regs_core_tx_dsnt_field tx_dsnt_field
 * @brief macros for field tx_dsnt
 * @details interrupt for transmit data sent
 * @{
 */
#define ATLC_IRQ__TX_DSNT__SHIFT                                              0
#define ATLC_IRQ__TX_DSNT__WIDTH                                              1
#define ATLC_IRQ__TX_DSNT__MASK                                     0x00000001U
#define ATLC_IRQ__TX_DSNT__READ(src)            ((uint32_t)(src) & 0x00000001U)
#define ATLC_IRQ__TX_DSNT__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define ATLC_IRQ__TX_DSNT__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define ATLC_IRQ__TX_DSNT__RESET_VALUE                              0x00000000U
/** @} */

/* macros for field rx_drdy */
/**
 * @defgroup at_lc_regs_core_rx_drdy_field rx_drdy_field
 * @brief macros for field rx_drdy
 * @details interrupt for receive data ready
 * @{
 */
#define ATLC_IRQ__RX_DRDY__SHIFT                                              1
#define ATLC_IRQ__RX_DRDY__WIDTH                                              1
#define ATLC_IRQ__RX_DRDY__MASK                                     0x00000002U
#define ATLC_IRQ__RX_DRDY__READ(src)     (((uint32_t)(src) & 0x00000002U) >> 1)
#define ATLC_IRQ__RX_DRDY__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define ATLC_IRQ__RX_DRDY__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define ATLC_IRQ__RX_DRDY__RESET_VALUE                              0x00000000U
/** @} */

/* macros for field max_rt */
/**
 * @defgroup at_lc_regs_core_max_rt_field max_rt_field
 * @brief macros for field max_rt
 * @details interrupt for maximum number of retransmission
 * @{
 */
#define ATLC_IRQ__MAX_RT__SHIFT                                               2
#define ATLC_IRQ__MAX_RT__WIDTH                                               1
#define ATLC_IRQ__MAX_RT__MASK                                      0x00000004U
#define ATLC_IRQ__MAX_RT__READ(src)      (((uint32_t)(src) & 0x00000004U) >> 2)
#define ATLC_IRQ__MAX_RT__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(1) << 2)
#define ATLC_IRQ__MAX_RT__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(0) << 2)
#define ATLC_IRQ__MAX_RT__RESET_VALUE                               0x00000000U
/** @} */

/* macros for field rx_to */
/**
 * @defgroup at_lc_regs_core_rx_to_field rx_to_field
 * @brief macros for field rx_to
 * @details interrupt for receive time out
 * @{
 */
#define ATLC_IRQ__RX_TO__SHIFT                                                3
#define ATLC_IRQ__RX_TO__WIDTH                                                1
#define ATLC_IRQ__RX_TO__MASK                                       0x00000008U
#define ATLC_IRQ__RX_TO__READ(src)       (((uint32_t)(src) & 0x00000008U) >> 3)
#define ATLC_IRQ__RX_TO__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((uint32_t)(1) << 3)
#define ATLC_IRQ__RX_TO__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((uint32_t)(0) << 3)
#define ATLC_IRQ__RX_TO__RESET_VALUE                                0x00000000U
/** @} */

/* macros for field rff_of */
/**
 * @defgroup at_lc_regs_core_rff_of_field rff_of_field
 * @brief macros for field rff_of
 * @details interrupt for receive fifo overflow
 * @{
 */
#define ATLC_IRQ__RFF_OF__SHIFT                                               4
#define ATLC_IRQ__RFF_OF__WIDTH                                               1
#define ATLC_IRQ__RFF_OF__MASK                                      0x00000010U
#define ATLC_IRQ__RFF_OF__READ(src)      (((uint32_t)(src) & 0x00000010U) >> 4)
#define ATLC_IRQ__RFF_OF__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(1) << 4)
#define ATLC_IRQ__RFF_OF__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(0) << 4)
#define ATLC_IRQ__RFF_OF__RESET_VALUE                               0x00000000U
/** @} */

/* macros for field tff_uf */
/**
 * @defgroup at_lc_regs_core_tff_uf_field tff_uf_field
 * @brief macros for field tff_uf
 * @details interrupt for transmit fifo underflow
 * @{
 */
#define ATLC_IRQ__TFF_UF__SHIFT                                               5
#define ATLC_IRQ__TFF_UF__WIDTH                                               1
#define ATLC_IRQ__TFF_UF__MASK                                      0x00000020U
#define ATLC_IRQ__TFF_UF__READ(src)      (((uint32_t)(src) & 0x00000020U) >> 5)
#define ATLC_IRQ__TFF_UF__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | ((uint32_t)(1) << 5)
#define ATLC_IRQ__TFF_UF__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | ((uint32_t)(0) << 5)
#define ATLC_IRQ__TFF_UF__RESET_VALUE                               0x00000000U
/** @} */

/* macros for field rmff_of */
/**
 * @defgroup at_lc_regs_core_rmff_of_field rmff_of_field
 * @brief macros for field rmff_of
 * @details interrupt for memory receive fifo overflow
 * @{
 */
#define ATLC_IRQ__RMFF_OF__SHIFT                                              6
#define ATLC_IRQ__RMFF_OF__WIDTH                                              1
#define ATLC_IRQ__RMFF_OF__MASK                                     0x00000040U
#define ATLC_IRQ__RMFF_OF__READ(src)     (((uint32_t)(src) & 0x00000040U) >> 6)
#define ATLC_IRQ__RMFF_OF__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000040U) | ((uint32_t)(1) << 6)
#define ATLC_IRQ__RMFF_OF__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000040U) | ((uint32_t)(0) << 6)
#define ATLC_IRQ__RMFF_OF__RESET_VALUE                              0x00000000U
/** @} */

/* macros for field tmff_uf */
/**
 * @defgroup at_lc_regs_core_tmff_uf_field tmff_uf_field
 * @brief macros for field tmff_uf
 * @details interrupt for memory transmit fifo underflow
 * @{
 */
#define ATLC_IRQ__TMFF_UF__SHIFT                                              7
#define ATLC_IRQ__TMFF_UF__WIDTH                                              1
#define ATLC_IRQ__TMFF_UF__MASK                                     0x00000080U
#define ATLC_IRQ__TMFF_UF__READ(src)     (((uint32_t)(src) & 0x00000080U) >> 7)
#define ATLC_IRQ__TMFF_UF__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000080U) | ((uint32_t)(1) << 7)
#define ATLC_IRQ__TMFF_UF__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000080U) | ((uint32_t)(0) << 7)
#define ATLC_IRQ__TMFF_UF__RESET_VALUE                              0x00000000U
/** @} */
#define ATLC_IRQ__TYPE                                                 uint32_t
#define ATLC_IRQ__READ                                              0x000000ffU
#define ATLC_IRQ__PRESERVED                                         0x00000000U
#define ATLC_IRQ__RESET_VALUE                                       0x00000000U

#endif /* __ATLC_IRQ_MACRO__ */

/** @} end of irq */

/* macros for BlueprintGlobalNameSpace::ATLC_irqm */
/**
 * @defgroup at_lc_regs_core_irqm irqm
 * @brief Contains register fields associated with irqm. definitions.
 * @{
 */
#ifndef __ATLC_IRQM_MACRO__
#define __ATLC_IRQM_MACRO__

/* macros for field tx_dsnt */
/**
 * @defgroup at_lc_regs_core_tx_dsnt_field tx_dsnt_field
 * @brief macros for field tx_dsnt
 * @details interrupt mask for transmit data sent
 * @{
 */
#define ATLC_IRQM__TX_DSNT__SHIFT                                             0
#define ATLC_IRQM__TX_DSNT__WIDTH                                             1
#define ATLC_IRQM__TX_DSNT__MASK                                    0x00000001U
#define ATLC_IRQM__TX_DSNT__READ(src)           ((uint32_t)(src) & 0x00000001U)
#define ATLC_IRQM__TX_DSNT__WRITE(src)          ((uint32_t)(src) & 0x00000001U)
#define ATLC_IRQM__TX_DSNT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define ATLC_IRQM__TX_DSNT__VERIFY(src)   (!(((uint32_t)(src) & ~0x00000001U)))
#define ATLC_IRQM__TX_DSNT__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define ATLC_IRQM__TX_DSNT__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define ATLC_IRQM__TX_DSNT__RESET_VALUE                             0x00000000U
/** @} */

/* macros for field rx_drdy */
/**
 * @defgroup at_lc_regs_core_rx_drdy_field rx_drdy_field
 * @brief macros for field rx_drdy
 * @details interrupt mask for receive data ready
 * @{
 */
#define ATLC_IRQM__RX_DRDY__SHIFT                                             1
#define ATLC_IRQM__RX_DRDY__WIDTH                                             1
#define ATLC_IRQM__RX_DRDY__MASK                                    0x00000002U
#define ATLC_IRQM__RX_DRDY__READ(src)    (((uint32_t)(src) & 0x00000002U) >> 1)
#define ATLC_IRQM__RX_DRDY__WRITE(src)   (((uint32_t)(src) << 1) & 0x00000002U)
#define ATLC_IRQM__RX_DRDY__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define ATLC_IRQM__RX_DRDY__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define ATLC_IRQM__RX_DRDY__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define ATLC_IRQM__RX_DRDY__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define ATLC_IRQM__RX_DRDY__RESET_VALUE                             0x00000000U
/** @} */

/* macros for field max_rt */
/**
 * @defgroup at_lc_regs_core_max_rt_field max_rt_field
 * @brief macros for field max_rt
 * @details interrupt mask for maximum number of retransmission
 * @{
 */
#define ATLC_IRQM__MAX_RT__SHIFT                                              2
#define ATLC_IRQM__MAX_RT__WIDTH                                              1
#define ATLC_IRQM__MAX_RT__MASK                                     0x00000004U
#define ATLC_IRQM__MAX_RT__READ(src)     (((uint32_t)(src) & 0x00000004U) >> 2)
#define ATLC_IRQM__MAX_RT__WRITE(src)    (((uint32_t)(src) << 2) & 0x00000004U)
#define ATLC_IRQM__MAX_RT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | (((uint32_t)(src) <<\
                    2) & 0x00000004U)
#define ATLC_IRQM__MAX_RT__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 2) & ~0x00000004U)))
#define ATLC_IRQM__MAX_RT__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(1) << 2)
#define ATLC_IRQM__MAX_RT__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(0) << 2)
#define ATLC_IRQM__MAX_RT__RESET_VALUE                              0x00000000U
/** @} */

/* macros for field rx_to */
/**
 * @defgroup at_lc_regs_core_rx_to_field rx_to_field
 * @brief macros for field rx_to
 * @details interrupt mask for receive time out
 * @{
 */
#define ATLC_IRQM__RX_TO__SHIFT                                               3
#define ATLC_IRQM__RX_TO__WIDTH                                               1
#define ATLC_IRQM__RX_TO__MASK                                      0x00000008U
#define ATLC_IRQM__RX_TO__READ(src)      (((uint32_t)(src) & 0x00000008U) >> 3)
#define ATLC_IRQM__RX_TO__WRITE(src)     (((uint32_t)(src) << 3) & 0x00000008U)
#define ATLC_IRQM__RX_TO__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | (((uint32_t)(src) <<\
                    3) & 0x00000008U)
#define ATLC_IRQM__RX_TO__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 3) & ~0x00000008U)))
#define ATLC_IRQM__RX_TO__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((uint32_t)(1) << 3)
#define ATLC_IRQM__RX_TO__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((uint32_t)(0) << 3)
#define ATLC_IRQM__RX_TO__RESET_VALUE                               0x00000000U
/** @} */

/* macros for field rff_of */
/**
 * @defgroup at_lc_regs_core_rff_of_field rff_of_field
 * @brief macros for field rff_of
 * @details interrupt mask for receive fifo overflow
 * @{
 */
#define ATLC_IRQM__RFF_OF__SHIFT                                              4
#define ATLC_IRQM__RFF_OF__WIDTH                                              1
#define ATLC_IRQM__RFF_OF__MASK                                     0x00000010U
#define ATLC_IRQM__RFF_OF__READ(src)     (((uint32_t)(src) & 0x00000010U) >> 4)
#define ATLC_IRQM__RFF_OF__WRITE(src)    (((uint32_t)(src) << 4) & 0x00000010U)
#define ATLC_IRQM__RFF_OF__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | (((uint32_t)(src) <<\
                    4) & 0x00000010U)
#define ATLC_IRQM__RFF_OF__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 4) & ~0x00000010U)))
#define ATLC_IRQM__RFF_OF__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(1) << 4)
#define ATLC_IRQM__RFF_OF__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(0) << 4)
#define ATLC_IRQM__RFF_OF__RESET_VALUE                              0x00000000U
/** @} */

/* macros for field tff_uf */
/**
 * @defgroup at_lc_regs_core_tff_uf_field tff_uf_field
 * @brief macros for field tff_uf
 * @details interrupt mask for transmit fifo underflow
 * @{
 */
#define ATLC_IRQM__TFF_UF__SHIFT                                              5
#define ATLC_IRQM__TFF_UF__WIDTH                                              1
#define ATLC_IRQM__TFF_UF__MASK                                     0x00000020U
#define ATLC_IRQM__TFF_UF__READ(src)     (((uint32_t)(src) & 0x00000020U) >> 5)
#define ATLC_IRQM__TFF_UF__WRITE(src)    (((uint32_t)(src) << 5) & 0x00000020U)
#define ATLC_IRQM__TFF_UF__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | (((uint32_t)(src) <<\
                    5) & 0x00000020U)
#define ATLC_IRQM__TFF_UF__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 5) & ~0x00000020U)))
#define ATLC_IRQM__TFF_UF__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | ((uint32_t)(1) << 5)
#define ATLC_IRQM__TFF_UF__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | ((uint32_t)(0) << 5)
#define ATLC_IRQM__TFF_UF__RESET_VALUE                              0x00000000U
/** @} */

/* macros for field rmff_of */
/**
 * @defgroup at_lc_regs_core_rmff_of_field rmff_of_field
 * @brief macros for field rmff_of
 * @details interrupt mask for memory receive fifo overflow
 * @{
 */
#define ATLC_IRQM__RMFF_OF__SHIFT                                             6
#define ATLC_IRQM__RMFF_OF__WIDTH                                             1
#define ATLC_IRQM__RMFF_OF__MASK                                    0x00000040U
#define ATLC_IRQM__RMFF_OF__READ(src)    (((uint32_t)(src) & 0x00000040U) >> 6)
#define ATLC_IRQM__RMFF_OF__WRITE(src)   (((uint32_t)(src) << 6) & 0x00000040U)
#define ATLC_IRQM__RMFF_OF__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000040U) | (((uint32_t)(src) <<\
                    6) & 0x00000040U)
#define ATLC_IRQM__RMFF_OF__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 6) & ~0x00000040U)))
#define ATLC_IRQM__RMFF_OF__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000040U) | ((uint32_t)(1) << 6)
#define ATLC_IRQM__RMFF_OF__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000040U) | ((uint32_t)(0) << 6)
#define ATLC_IRQM__RMFF_OF__RESET_VALUE                             0x00000000U
/** @} */

/* macros for field tmff_uf */
/**
 * @defgroup at_lc_regs_core_tmff_uf_field tmff_uf_field
 * @brief macros for field tmff_uf
 * @details interrupt mask for memory transmit fifo underflow
 * @{
 */
#define ATLC_IRQM__TMFF_UF__SHIFT                                             7
#define ATLC_IRQM__TMFF_UF__WIDTH                                             1
#define ATLC_IRQM__TMFF_UF__MASK                                    0x00000080U
#define ATLC_IRQM__TMFF_UF__READ(src)    (((uint32_t)(src) & 0x00000080U) >> 7)
#define ATLC_IRQM__TMFF_UF__WRITE(src)   (((uint32_t)(src) << 7) & 0x00000080U)
#define ATLC_IRQM__TMFF_UF__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000080U) | (((uint32_t)(src) <<\
                    7) & 0x00000080U)
#define ATLC_IRQM__TMFF_UF__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 7) & ~0x00000080U)))
#define ATLC_IRQM__TMFF_UF__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000080U) | ((uint32_t)(1) << 7)
#define ATLC_IRQM__TMFF_UF__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000080U) | ((uint32_t)(0) << 7)
#define ATLC_IRQM__TMFF_UF__RESET_VALUE                             0x00000000U
/** @} */
#define ATLC_IRQM__TYPE                                                uint32_t
#define ATLC_IRQM__READ                                             0x000000ffU
#define ATLC_IRQM__WRITE                                            0x000000ffU
#define ATLC_IRQM__PRESERVED                                        0x00000000U
#define ATLC_IRQM__RESET_VALUE                                      0x00000000U

#endif /* __ATLC_IRQM_MACRO__ */

/** @} end of irqm */

/* macros for BlueprintGlobalNameSpace::ATLC_irq_set */
/**
 * @defgroup at_lc_regs_core_irq_set irq_set
 * @brief Contains register fields associated with irq_set. definitions.
 * @{
 */
#ifndef __ATLC_IRQ_SET_MACRO__
#define __ATLC_IRQ_SET_MACRO__

/* macros for field tx_dsnt */
/**
 * @defgroup at_lc_regs_core_tx_dsnt_field tx_dsnt_field
 * @brief macros for field tx_dsnt
 * @details interrupt for transmit data sent, write 1 to set
 * @{
 */
#define ATLC_IRQ_SET__TX_DSNT__SHIFT                                          0
#define ATLC_IRQ_SET__TX_DSNT__WIDTH                                          1
#define ATLC_IRQ_SET__TX_DSNT__MASK                                 0x00000001U
#define ATLC_IRQ_SET__TX_DSNT__READ(src)        ((uint32_t)(src) & 0x00000001U)
#define ATLC_IRQ_SET__TX_DSNT__WRITE(src)       ((uint32_t)(src) & 0x00000001U)
#define ATLC_IRQ_SET__TX_DSNT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define ATLC_IRQ_SET__TX_DSNT__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define ATLC_IRQ_SET__TX_DSNT__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define ATLC_IRQ_SET__TX_DSNT__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define ATLC_IRQ_SET__TX_DSNT__RESET_VALUE                          0x00000000U
/** @} */

/* macros for field rx_drdy */
/**
 * @defgroup at_lc_regs_core_rx_drdy_field rx_drdy_field
 * @brief macros for field rx_drdy
 * @details interrupt for receive data ready, write 1 to set
 * @{
 */
#define ATLC_IRQ_SET__RX_DRDY__SHIFT                                          1
#define ATLC_IRQ_SET__RX_DRDY__WIDTH                                          1
#define ATLC_IRQ_SET__RX_DRDY__MASK                                 0x00000002U
#define ATLC_IRQ_SET__RX_DRDY__READ(src) (((uint32_t)(src) & 0x00000002U) >> 1)
#define ATLC_IRQ_SET__RX_DRDY__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define ATLC_IRQ_SET__RX_DRDY__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define ATLC_IRQ_SET__RX_DRDY__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define ATLC_IRQ_SET__RX_DRDY__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define ATLC_IRQ_SET__RX_DRDY__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define ATLC_IRQ_SET__RX_DRDY__RESET_VALUE                          0x00000000U
/** @} */

/* macros for field max_rt */
/**
 * @defgroup at_lc_regs_core_max_rt_field max_rt_field
 * @brief macros for field max_rt
 * @details interrupt for maximum number of retransmission, write 1 to set
 * @{
 */
#define ATLC_IRQ_SET__MAX_RT__SHIFT                                           2
#define ATLC_IRQ_SET__MAX_RT__WIDTH                                           1
#define ATLC_IRQ_SET__MAX_RT__MASK                                  0x00000004U
#define ATLC_IRQ_SET__MAX_RT__READ(src)  (((uint32_t)(src) & 0x00000004U) >> 2)
#define ATLC_IRQ_SET__MAX_RT__WRITE(src) (((uint32_t)(src) << 2) & 0x00000004U)
#define ATLC_IRQ_SET__MAX_RT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | (((uint32_t)(src) <<\
                    2) & 0x00000004U)
#define ATLC_IRQ_SET__MAX_RT__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 2) & ~0x00000004U)))
#define ATLC_IRQ_SET__MAX_RT__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(1) << 2)
#define ATLC_IRQ_SET__MAX_RT__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(0) << 2)
#define ATLC_IRQ_SET__MAX_RT__RESET_VALUE                           0x00000000U
/** @} */

/* macros for field rx_to */
/**
 * @defgroup at_lc_regs_core_rx_to_field rx_to_field
 * @brief macros for field rx_to
 * @details interrupt for receive time out, write 1 to set
 * @{
 */
#define ATLC_IRQ_SET__RX_TO__SHIFT                                            3
#define ATLC_IRQ_SET__RX_TO__WIDTH                                            1
#define ATLC_IRQ_SET__RX_TO__MASK                                   0x00000008U
#define ATLC_IRQ_SET__RX_TO__READ(src)   (((uint32_t)(src) & 0x00000008U) >> 3)
#define ATLC_IRQ_SET__RX_TO__WRITE(src)  (((uint32_t)(src) << 3) & 0x00000008U)
#define ATLC_IRQ_SET__RX_TO__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | (((uint32_t)(src) <<\
                    3) & 0x00000008U)
#define ATLC_IRQ_SET__RX_TO__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 3) & ~0x00000008U)))
#define ATLC_IRQ_SET__RX_TO__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((uint32_t)(1) << 3)
#define ATLC_IRQ_SET__RX_TO__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((uint32_t)(0) << 3)
#define ATLC_IRQ_SET__RX_TO__RESET_VALUE                            0x00000000U
/** @} */

/* macros for field rff_of */
/**
 * @defgroup at_lc_regs_core_rff_of_field rff_of_field
 * @brief macros for field rff_of
 * @details interrupt for receive fifo overflow, write 1 to set
 * @{
 */
#define ATLC_IRQ_SET__RFF_OF__SHIFT                                           4
#define ATLC_IRQ_SET__RFF_OF__WIDTH                                           1
#define ATLC_IRQ_SET__RFF_OF__MASK                                  0x00000010U
#define ATLC_IRQ_SET__RFF_OF__READ(src)  (((uint32_t)(src) & 0x00000010U) >> 4)
#define ATLC_IRQ_SET__RFF_OF__WRITE(src) (((uint32_t)(src) << 4) & 0x00000010U)
#define ATLC_IRQ_SET__RFF_OF__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | (((uint32_t)(src) <<\
                    4) & 0x00000010U)
#define ATLC_IRQ_SET__RFF_OF__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 4) & ~0x00000010U)))
#define ATLC_IRQ_SET__RFF_OF__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(1) << 4)
#define ATLC_IRQ_SET__RFF_OF__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(0) << 4)
#define ATLC_IRQ_SET__RFF_OF__RESET_VALUE                           0x00000000U
/** @} */

/* macros for field tff_uf */
/**
 * @defgroup at_lc_regs_core_tff_uf_field tff_uf_field
 * @brief macros for field tff_uf
 * @details interrupt for transmit fifo underflow, write 1 to set
 * @{
 */
#define ATLC_IRQ_SET__TFF_UF__SHIFT                                           5
#define ATLC_IRQ_SET__TFF_UF__WIDTH                                           1
#define ATLC_IRQ_SET__TFF_UF__MASK                                  0x00000020U
#define ATLC_IRQ_SET__TFF_UF__READ(src)  (((uint32_t)(src) & 0x00000020U) >> 5)
#define ATLC_IRQ_SET__TFF_UF__WRITE(src) (((uint32_t)(src) << 5) & 0x00000020U)
#define ATLC_IRQ_SET__TFF_UF__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | (((uint32_t)(src) <<\
                    5) & 0x00000020U)
#define ATLC_IRQ_SET__TFF_UF__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 5) & ~0x00000020U)))
#define ATLC_IRQ_SET__TFF_UF__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | ((uint32_t)(1) << 5)
#define ATLC_IRQ_SET__TFF_UF__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | ((uint32_t)(0) << 5)
#define ATLC_IRQ_SET__TFF_UF__RESET_VALUE                           0x00000000U
/** @} */

/* macros for field rmff_of */
/**
 * @defgroup at_lc_regs_core_rmff_of_field rmff_of_field
 * @brief macros for field rmff_of
 * @details interrupt for memory receive fifo overflow, write 1 to set
 * @{
 */
#define ATLC_IRQ_SET__RMFF_OF__SHIFT                                          6
#define ATLC_IRQ_SET__RMFF_OF__WIDTH                                          1
#define ATLC_IRQ_SET__RMFF_OF__MASK                                 0x00000040U
#define ATLC_IRQ_SET__RMFF_OF__READ(src) (((uint32_t)(src) & 0x00000040U) >> 6)
#define ATLC_IRQ_SET__RMFF_OF__WRITE(src) \
                    (((uint32_t)(src)\
                    << 6) & 0x00000040U)
#define ATLC_IRQ_SET__RMFF_OF__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000040U) | (((uint32_t)(src) <<\
                    6) & 0x00000040U)
#define ATLC_IRQ_SET__RMFF_OF__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 6) & ~0x00000040U)))
#define ATLC_IRQ_SET__RMFF_OF__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000040U) | ((uint32_t)(1) << 6)
#define ATLC_IRQ_SET__RMFF_OF__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000040U) | ((uint32_t)(0) << 6)
#define ATLC_IRQ_SET__RMFF_OF__RESET_VALUE                          0x00000000U
/** @} */

/* macros for field tmff_uf */
/**
 * @defgroup at_lc_regs_core_tmff_uf_field tmff_uf_field
 * @brief macros for field tmff_uf
 * @details interrupt for memory transmit fifo underflow, write 1 to set
 * @{
 */
#define ATLC_IRQ_SET__TMFF_UF__SHIFT                                          7
#define ATLC_IRQ_SET__TMFF_UF__WIDTH                                          1
#define ATLC_IRQ_SET__TMFF_UF__MASK                                 0x00000080U
#define ATLC_IRQ_SET__TMFF_UF__READ(src) (((uint32_t)(src) & 0x00000080U) >> 7)
#define ATLC_IRQ_SET__TMFF_UF__WRITE(src) \
                    (((uint32_t)(src)\
                    << 7) & 0x00000080U)
#define ATLC_IRQ_SET__TMFF_UF__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000080U) | (((uint32_t)(src) <<\
                    7) & 0x00000080U)
#define ATLC_IRQ_SET__TMFF_UF__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 7) & ~0x00000080U)))
#define ATLC_IRQ_SET__TMFF_UF__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000080U) | ((uint32_t)(1) << 7)
#define ATLC_IRQ_SET__TMFF_UF__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000080U) | ((uint32_t)(0) << 7)
#define ATLC_IRQ_SET__TMFF_UF__RESET_VALUE                          0x00000000U
/** @} */
#define ATLC_IRQ_SET__TYPE                                             uint32_t
#define ATLC_IRQ_SET__READ                                          0x000000ffU
#define ATLC_IRQ_SET__WRITE                                         0x000000ffU
#define ATLC_IRQ_SET__PRESERVED                                     0x00000000U
#define ATLC_IRQ_SET__RESET_VALUE                                   0x00000000U

#endif /* __ATLC_IRQ_SET_MACRO__ */

/** @} end of irq_set */

/* macros for BlueprintGlobalNameSpace::ATLC_irq_clr */
/**
 * @defgroup at_lc_regs_core_irq_clr irq_clr
 * @brief Contains register fields associated with irq_clr. definitions.
 * @{
 */
#ifndef __ATLC_IRQ_CLR_MACRO__
#define __ATLC_IRQ_CLR_MACRO__

/* macros for field tx_dsnt */
/**
 * @defgroup at_lc_regs_core_tx_dsnt_field tx_dsnt_field
 * @brief macros for field tx_dsnt
 * @details interrupt for transmit data sent, write 1 to clear
 * @{
 */
#define ATLC_IRQ_CLR__TX_DSNT__SHIFT                                          0
#define ATLC_IRQ_CLR__TX_DSNT__WIDTH                                          1
#define ATLC_IRQ_CLR__TX_DSNT__MASK                                 0x00000001U
#define ATLC_IRQ_CLR__TX_DSNT__READ(src)        ((uint32_t)(src) & 0x00000001U)
#define ATLC_IRQ_CLR__TX_DSNT__WRITE(src)       ((uint32_t)(src) & 0x00000001U)
#define ATLC_IRQ_CLR__TX_DSNT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define ATLC_IRQ_CLR__TX_DSNT__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define ATLC_IRQ_CLR__TX_DSNT__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define ATLC_IRQ_CLR__TX_DSNT__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define ATLC_IRQ_CLR__TX_DSNT__RESET_VALUE                          0x00000000U
/** @} */

/* macros for field rx_drdy */
/**
 * @defgroup at_lc_regs_core_rx_drdy_field rx_drdy_field
 * @brief macros for field rx_drdy
 * @details interrupt for receive data ready, write 1 to clear
 * @{
 */
#define ATLC_IRQ_CLR__RX_DRDY__SHIFT                                          1
#define ATLC_IRQ_CLR__RX_DRDY__WIDTH                                          1
#define ATLC_IRQ_CLR__RX_DRDY__MASK                                 0x00000002U
#define ATLC_IRQ_CLR__RX_DRDY__READ(src) (((uint32_t)(src) & 0x00000002U) >> 1)
#define ATLC_IRQ_CLR__RX_DRDY__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define ATLC_IRQ_CLR__RX_DRDY__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define ATLC_IRQ_CLR__RX_DRDY__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define ATLC_IRQ_CLR__RX_DRDY__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define ATLC_IRQ_CLR__RX_DRDY__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define ATLC_IRQ_CLR__RX_DRDY__RESET_VALUE                          0x00000000U
/** @} */

/* macros for field max_rt */
/**
 * @defgroup at_lc_regs_core_max_rt_field max_rt_field
 * @brief macros for field max_rt
 * @details interrupt for maximum number of retransmission, write 1 to clear
 * @{
 */
#define ATLC_IRQ_CLR__MAX_RT__SHIFT                                           2
#define ATLC_IRQ_CLR__MAX_RT__WIDTH                                           1
#define ATLC_IRQ_CLR__MAX_RT__MASK                                  0x00000004U
#define ATLC_IRQ_CLR__MAX_RT__READ(src)  (((uint32_t)(src) & 0x00000004U) >> 2)
#define ATLC_IRQ_CLR__MAX_RT__WRITE(src) (((uint32_t)(src) << 2) & 0x00000004U)
#define ATLC_IRQ_CLR__MAX_RT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | (((uint32_t)(src) <<\
                    2) & 0x00000004U)
#define ATLC_IRQ_CLR__MAX_RT__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 2) & ~0x00000004U)))
#define ATLC_IRQ_CLR__MAX_RT__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(1) << 2)
#define ATLC_IRQ_CLR__MAX_RT__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(0) << 2)
#define ATLC_IRQ_CLR__MAX_RT__RESET_VALUE                           0x00000000U
/** @} */

/* macros for field rx_to */
/**
 * @defgroup at_lc_regs_core_rx_to_field rx_to_field
 * @brief macros for field rx_to
 * @details interrupt for receive time out, write 1 to clear
 * @{
 */
#define ATLC_IRQ_CLR__RX_TO__SHIFT                                            3
#define ATLC_IRQ_CLR__RX_TO__WIDTH                                            1
#define ATLC_IRQ_CLR__RX_TO__MASK                                   0x00000008U
#define ATLC_IRQ_CLR__RX_TO__READ(src)   (((uint32_t)(src) & 0x00000008U) >> 3)
#define ATLC_IRQ_CLR__RX_TO__WRITE(src)  (((uint32_t)(src) << 3) & 0x00000008U)
#define ATLC_IRQ_CLR__RX_TO__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | (((uint32_t)(src) <<\
                    3) & 0x00000008U)
#define ATLC_IRQ_CLR__RX_TO__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 3) & ~0x00000008U)))
#define ATLC_IRQ_CLR__RX_TO__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((uint32_t)(1) << 3)
#define ATLC_IRQ_CLR__RX_TO__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((uint32_t)(0) << 3)
#define ATLC_IRQ_CLR__RX_TO__RESET_VALUE                            0x00000000U
/** @} */

/* macros for field rff_of */
/**
 * @defgroup at_lc_regs_core_rff_of_field rff_of_field
 * @brief macros for field rff_of
 * @details interrupt for receive fifo overflow, write 1 to clear
 * @{
 */
#define ATLC_IRQ_CLR__RFF_OF__SHIFT                                           4
#define ATLC_IRQ_CLR__RFF_OF__WIDTH                                           1
#define ATLC_IRQ_CLR__RFF_OF__MASK                                  0x00000010U
#define ATLC_IRQ_CLR__RFF_OF__READ(src)  (((uint32_t)(src) & 0x00000010U) >> 4)
#define ATLC_IRQ_CLR__RFF_OF__WRITE(src) (((uint32_t)(src) << 4) & 0x00000010U)
#define ATLC_IRQ_CLR__RFF_OF__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | (((uint32_t)(src) <<\
                    4) & 0x00000010U)
#define ATLC_IRQ_CLR__RFF_OF__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 4) & ~0x00000010U)))
#define ATLC_IRQ_CLR__RFF_OF__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(1) << 4)
#define ATLC_IRQ_CLR__RFF_OF__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(0) << 4)
#define ATLC_IRQ_CLR__RFF_OF__RESET_VALUE                           0x00000000U
/** @} */

/* macros for field tff_uf */
/**
 * @defgroup at_lc_regs_core_tff_uf_field tff_uf_field
 * @brief macros for field tff_uf
 * @details interrupt for transmit fifo underflow, write 1 to clear
 * @{
 */
#define ATLC_IRQ_CLR__TFF_UF__SHIFT                                           5
#define ATLC_IRQ_CLR__TFF_UF__WIDTH                                           1
#define ATLC_IRQ_CLR__TFF_UF__MASK                                  0x00000020U
#define ATLC_IRQ_CLR__TFF_UF__READ(src)  (((uint32_t)(src) & 0x00000020U) >> 5)
#define ATLC_IRQ_CLR__TFF_UF__WRITE(src) (((uint32_t)(src) << 5) & 0x00000020U)
#define ATLC_IRQ_CLR__TFF_UF__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | (((uint32_t)(src) <<\
                    5) & 0x00000020U)
#define ATLC_IRQ_CLR__TFF_UF__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 5) & ~0x00000020U)))
#define ATLC_IRQ_CLR__TFF_UF__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | ((uint32_t)(1) << 5)
#define ATLC_IRQ_CLR__TFF_UF__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | ((uint32_t)(0) << 5)
#define ATLC_IRQ_CLR__TFF_UF__RESET_VALUE                           0x00000000U
/** @} */

/* macros for field rmff_of */
/**
 * @defgroup at_lc_regs_core_rmff_of_field rmff_of_field
 * @brief macros for field rmff_of
 * @details interrupt for memory receive fifo overflow, write 1 to clear
 * @{
 */
#define ATLC_IRQ_CLR__RMFF_OF__SHIFT                                          6
#define ATLC_IRQ_CLR__RMFF_OF__WIDTH                                          1
#define ATLC_IRQ_CLR__RMFF_OF__MASK                                 0x00000040U
#define ATLC_IRQ_CLR__RMFF_OF__READ(src) (((uint32_t)(src) & 0x00000040U) >> 6)
#define ATLC_IRQ_CLR__RMFF_OF__WRITE(src) \
                    (((uint32_t)(src)\
                    << 6) & 0x00000040U)
#define ATLC_IRQ_CLR__RMFF_OF__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000040U) | (((uint32_t)(src) <<\
                    6) & 0x00000040U)
#define ATLC_IRQ_CLR__RMFF_OF__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 6) & ~0x00000040U)))
#define ATLC_IRQ_CLR__RMFF_OF__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000040U) | ((uint32_t)(1) << 6)
#define ATLC_IRQ_CLR__RMFF_OF__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000040U) | ((uint32_t)(0) << 6)
#define ATLC_IRQ_CLR__RMFF_OF__RESET_VALUE                          0x00000000U
/** @} */

/* macros for field tmff_uf */
/**
 * @defgroup at_lc_regs_core_tmff_uf_field tmff_uf_field
 * @brief macros for field tmff_uf
 * @details interrupt for memory transmit fifo underflow, write 1 to clear
 * @{
 */
#define ATLC_IRQ_CLR__TMFF_UF__SHIFT                                          7
#define ATLC_IRQ_CLR__TMFF_UF__WIDTH                                          1
#define ATLC_IRQ_CLR__TMFF_UF__MASK                                 0x00000080U
#define ATLC_IRQ_CLR__TMFF_UF__READ(src) (((uint32_t)(src) & 0x00000080U) >> 7)
#define ATLC_IRQ_CLR__TMFF_UF__WRITE(src) \
                    (((uint32_t)(src)\
                    << 7) & 0x00000080U)
#define ATLC_IRQ_CLR__TMFF_UF__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000080U) | (((uint32_t)(src) <<\
                    7) & 0x00000080U)
#define ATLC_IRQ_CLR__TMFF_UF__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 7) & ~0x00000080U)))
#define ATLC_IRQ_CLR__TMFF_UF__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000080U) | ((uint32_t)(1) << 7)
#define ATLC_IRQ_CLR__TMFF_UF__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000080U) | ((uint32_t)(0) << 7)
#define ATLC_IRQ_CLR__TMFF_UF__RESET_VALUE                          0x00000000U
/** @} */
#define ATLC_IRQ_CLR__TYPE                                             uint32_t
#define ATLC_IRQ_CLR__READ                                          0x000000ffU
#define ATLC_IRQ_CLR__WRITE                                         0x000000ffU
#define ATLC_IRQ_CLR__PRESERVED                                     0x00000000U
#define ATLC_IRQ_CLR__RESET_VALUE                                   0x00000000U

#endif /* __ATLC_IRQ_CLR_MACRO__ */

/** @} end of irq_clr */

/* macros for BlueprintGlobalNameSpace::ATLC_aeskey0 */
/**
 * @defgroup at_lc_regs_core_aeskey0 aeskey0
 * @brief Contains register fields associated with aeskey0. definitions.
 * @{
 */
#ifndef __ATLC_AESKEY0_MACRO__
#define __ATLC_AESKEY0_MACRO__

/* macros for field vl */
/**
 * @defgroup at_lc_regs_core_vl_field vl_field
 * @brief macros for field vl
 * @details AES key [31:0]
 * @{
 */
#define ATLC_AESKEY0__VL__SHIFT                                               0
#define ATLC_AESKEY0__VL__WIDTH                                              32
#define ATLC_AESKEY0__VL__MASK                                      0xffffffffU
#define ATLC_AESKEY0__VL__READ(src)             ((uint32_t)(src) & 0xffffffffU)
#define ATLC_AESKEY0__VL__WRITE(src)            ((uint32_t)(src) & 0xffffffffU)
#define ATLC_AESKEY0__VL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffffffffU) | ((uint32_t)(src) &\
                    0xffffffffU)
#define ATLC_AESKEY0__VL__VERIFY(src)     (!(((uint32_t)(src) & ~0xffffffffU)))
#define ATLC_AESKEY0__VL__RESET_VALUE                               0x00000000U
/** @} */
#define ATLC_AESKEY0__TYPE                                             uint32_t
#define ATLC_AESKEY0__READ                                          0xffffffffU
#define ATLC_AESKEY0__WRITE                                         0xffffffffU
#define ATLC_AESKEY0__PRESERVED                                     0x00000000U
#define ATLC_AESKEY0__RESET_VALUE                                   0x00000000U

#endif /* __ATLC_AESKEY0_MACRO__ */

/** @} end of aeskey0 */

/* macros for BlueprintGlobalNameSpace::ATLC_aeskey1 */
/**
 * @defgroup at_lc_regs_core_aeskey1 aeskey1
 * @brief Contains register fields associated with aeskey1. definitions.
 * @{
 */
#ifndef __ATLC_AESKEY1_MACRO__
#define __ATLC_AESKEY1_MACRO__

/* macros for field vl */
/**
 * @defgroup at_lc_regs_core_vl_field vl_field
 * @brief macros for field vl
 * @details AES key [63:32]
 * @{
 */
#define ATLC_AESKEY1__VL__SHIFT                                               0
#define ATLC_AESKEY1__VL__WIDTH                                              32
#define ATLC_AESKEY1__VL__MASK                                      0xffffffffU
#define ATLC_AESKEY1__VL__READ(src)             ((uint32_t)(src) & 0xffffffffU)
#define ATLC_AESKEY1__VL__WRITE(src)            ((uint32_t)(src) & 0xffffffffU)
#define ATLC_AESKEY1__VL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffffffffU) | ((uint32_t)(src) &\
                    0xffffffffU)
#define ATLC_AESKEY1__VL__VERIFY(src)     (!(((uint32_t)(src) & ~0xffffffffU)))
#define ATLC_AESKEY1__VL__RESET_VALUE                               0x00000000U
/** @} */
#define ATLC_AESKEY1__TYPE                                             uint32_t
#define ATLC_AESKEY1__READ                                          0xffffffffU
#define ATLC_AESKEY1__WRITE                                         0xffffffffU
#define ATLC_AESKEY1__PRESERVED                                     0x00000000U
#define ATLC_AESKEY1__RESET_VALUE                                   0x00000000U

#endif /* __ATLC_AESKEY1_MACRO__ */

/** @} end of aeskey1 */

/* macros for BlueprintGlobalNameSpace::ATLC_aeskey2 */
/**
 * @defgroup at_lc_regs_core_aeskey2 aeskey2
 * @brief Contains register fields associated with aeskey2. definitions.
 * @{
 */
#ifndef __ATLC_AESKEY2_MACRO__
#define __ATLC_AESKEY2_MACRO__

/* macros for field vl */
/**
 * @defgroup at_lc_regs_core_vl_field vl_field
 * @brief macros for field vl
 * @details AES key [95:64]
 * @{
 */
#define ATLC_AESKEY2__VL__SHIFT                                               0
#define ATLC_AESKEY2__VL__WIDTH                                              32
#define ATLC_AESKEY2__VL__MASK                                      0xffffffffU
#define ATLC_AESKEY2__VL__READ(src)             ((uint32_t)(src) & 0xffffffffU)
#define ATLC_AESKEY2__VL__WRITE(src)            ((uint32_t)(src) & 0xffffffffU)
#define ATLC_AESKEY2__VL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffffffffU) | ((uint32_t)(src) &\
                    0xffffffffU)
#define ATLC_AESKEY2__VL__VERIFY(src)     (!(((uint32_t)(src) & ~0xffffffffU)))
#define ATLC_AESKEY2__VL__RESET_VALUE                               0x00000000U
/** @} */
#define ATLC_AESKEY2__TYPE                                             uint32_t
#define ATLC_AESKEY2__READ                                          0xffffffffU
#define ATLC_AESKEY2__WRITE                                         0xffffffffU
#define ATLC_AESKEY2__PRESERVED                                     0x00000000U
#define ATLC_AESKEY2__RESET_VALUE                                   0x00000000U

#endif /* __ATLC_AESKEY2_MACRO__ */

/** @} end of aeskey2 */

/* macros for BlueprintGlobalNameSpace::ATLC_aeskey3 */
/**
 * @defgroup at_lc_regs_core_aeskey3 aeskey3
 * @brief Contains register fields associated with aeskey3. definitions.
 * @{
 */
#ifndef __ATLC_AESKEY3_MACRO__
#define __ATLC_AESKEY3_MACRO__

/* macros for field vl */
/**
 * @defgroup at_lc_regs_core_vl_field vl_field
 * @brief macros for field vl
 * @details AES key [127:96]
 * @{
 */
#define ATLC_AESKEY3__VL__SHIFT                                               0
#define ATLC_AESKEY3__VL__WIDTH                                              32
#define ATLC_AESKEY3__VL__MASK                                      0xffffffffU
#define ATLC_AESKEY3__VL__READ(src)             ((uint32_t)(src) & 0xffffffffU)
#define ATLC_AESKEY3__VL__WRITE(src)            ((uint32_t)(src) & 0xffffffffU)
#define ATLC_AESKEY3__VL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffffffffU) | ((uint32_t)(src) &\
                    0xffffffffU)
#define ATLC_AESKEY3__VL__VERIFY(src)     (!(((uint32_t)(src) & ~0xffffffffU)))
#define ATLC_AESKEY3__VL__RESET_VALUE                               0x00000000U
/** @} */
#define ATLC_AESKEY3__TYPE                                             uint32_t
#define ATLC_AESKEY3__READ                                          0xffffffffU
#define ATLC_AESKEY3__WRITE                                         0xffffffffU
#define ATLC_AESKEY3__PRESERVED                                     0x00000000U
#define ATLC_AESKEY3__RESET_VALUE                                   0x00000000U

#endif /* __ATLC_AESKEY3_MACRO__ */

/** @} end of aeskey3 */

/* macros for BlueprintGlobalNameSpace::ATLC_id */
/**
 * @defgroup at_lc_regs_core_id id
 * @brief Contains register fields associated with id. definitions.
 * @{
 */
#ifndef __ATLC_ID_MACRO__
#define __ATLC_ID_MACRO__

/* macros for field id */
/**
 * @defgroup at_lc_regs_core_id_field id_field
 * @brief macros for field id
 * @details 'ATLC' in ASCII
 * @{
 */
#define ATLC_ID__ID__SHIFT                                                    0
#define ATLC_ID__ID__WIDTH                                                   32
#define ATLC_ID__ID__MASK                                           0xffffffffU
#define ATLC_ID__ID__READ(src)                  ((uint32_t)(src) & 0xffffffffU)
#define ATLC_ID__ID__RESET_VALUE                                    0x41544c43U
/** @} */
#define ATLC_ID__TYPE                                                  uint32_t
#define ATLC_ID__READ                                               0xffffffffU
#define ATLC_ID__PRESERVED                                          0x00000000U
#define ATLC_ID__RESET_VALUE                                        0x41544c43U

#endif /* __ATLC_ID_MACRO__ */

/** @} end of id */

/** @} end of AT_LC_REGS_CORE */
#endif /* __REG_AT_LC_REGS_CORE_H__ */
