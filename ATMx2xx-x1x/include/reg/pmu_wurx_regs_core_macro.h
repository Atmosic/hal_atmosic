/*                                                                           */
/* File:       pmu_wurx_regs_core_macro.h                                    */
/*                                                                           */
/* Arguments:  /cad/tools/cadence/blueprint_3.7.5/Linux-64bit/blueprint -eval*/
/*             $DEFINE_PROPERTY=1; -ansic pmu_wurx_regs_core.rdl             */
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


#ifndef __REG_PMU_WURX_REGS_CORE_H__
#define __REG_PMU_WURX_REGS_CORE_H__

/**
 *****************************************************************************
 * @defgroup PMU_WURX_REGS_CORE pmu_wurx_regs_core
 * @ingroup AT_REG
 * @brief pmu_wurx_regs_core definitions.
 * @{
 *****************************************************************************
 */

/* macros for BlueprintGlobalNameSpace::WURX_wurx_general */
/**
 * @defgroup pmu_wurx_regs_core_wurx_general wurx_general
 * @brief Wake-up RX general registers definitions.
 * @{
 */
#ifndef __WURX_WURX_GENERAL_MACRO__
#define __WURX_WURX_GENERAL_MACRO__

/* macros for field wurx_select */
/**
 * @defgroup pmu_wurx_regs_core_wurx_select_field wurx_select_field
 * @brief macros for field wurx_select
 * @details which algorithm to use: 0: algorithm 0, 1: algorithm 1
 * @{
 */
#define WURX_WURX_GENERAL__WURX_SELECT__SHIFT                                 0
#define WURX_WURX_GENERAL__WURX_SELECT__WIDTH                                 1
#define WURX_WURX_GENERAL__WURX_SELECT__MASK                        0x00000001U
#define WURX_WURX_GENERAL__WURX_SELECT__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define WURX_WURX_GENERAL__WURX_SELECT__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define WURX_WURX_GENERAL__WURX_SELECT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define WURX_WURX_GENERAL__WURX_SELECT__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define WURX_WURX_GENERAL__WURX_SELECT__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define WURX_WURX_GENERAL__WURX_SELECT__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define WURX_WURX_GENERAL__WURX_SELECT__RESET_VALUE                 0x00000000U
/** @} */

/* macros for field wurx0_en_ovr */
/**
 * @defgroup pmu_wurx_regs_core_wurx0_en_ovr_field wurx0_en_ovr_field
 * @brief macros for field wurx0_en_ovr
 * @details override wurx0_en
 * @{
 */
#define WURX_WURX_GENERAL__WURX0_EN_OVR__SHIFT                                1
#define WURX_WURX_GENERAL__WURX0_EN_OVR__WIDTH                                1
#define WURX_WURX_GENERAL__WURX0_EN_OVR__MASK                       0x00000002U
#define WURX_WURX_GENERAL__WURX0_EN_OVR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define WURX_WURX_GENERAL__WURX0_EN_OVR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define WURX_WURX_GENERAL__WURX0_EN_OVR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define WURX_WURX_GENERAL__WURX0_EN_OVR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define WURX_WURX_GENERAL__WURX0_EN_OVR__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define WURX_WURX_GENERAL__WURX0_EN_OVR__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define WURX_WURX_GENERAL__WURX0_EN_OVR__RESET_VALUE                0x00000000U
/** @} */

/* macros for field wurx0_en_val */
/**
 * @defgroup pmu_wurx_regs_core_wurx0_en_val_field wurx0_en_val_field
 * @brief macros for field wurx0_en_val
 * @details override value for wurx0_en
 * @{
 */
#define WURX_WURX_GENERAL__WURX0_EN_VAL__SHIFT                                2
#define WURX_WURX_GENERAL__WURX0_EN_VAL__WIDTH                                1
#define WURX_WURX_GENERAL__WURX0_EN_VAL__MASK                       0x00000004U
#define WURX_WURX_GENERAL__WURX0_EN_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000004U) >> 2)
#define WURX_WURX_GENERAL__WURX0_EN_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 2) & 0x00000004U)
#define WURX_WURX_GENERAL__WURX0_EN_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | (((uint32_t)(src) <<\
                    2) & 0x00000004U)
#define WURX_WURX_GENERAL__WURX0_EN_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 2) & ~0x00000004U)))
#define WURX_WURX_GENERAL__WURX0_EN_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(1) << 2)
#define WURX_WURX_GENERAL__WURX0_EN_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(0) << 2)
#define WURX_WURX_GENERAL__WURX0_EN_VAL__RESET_VALUE                0x00000000U
/** @} */

/* macros for field wurx1_en_ovr */
/**
 * @defgroup pmu_wurx_regs_core_wurx1_en_ovr_field wurx1_en_ovr_field
 * @brief macros for field wurx1_en_ovr
 * @details override wurx1_en
 * @{
 */
#define WURX_WURX_GENERAL__WURX1_EN_OVR__SHIFT                                3
#define WURX_WURX_GENERAL__WURX1_EN_OVR__WIDTH                                1
#define WURX_WURX_GENERAL__WURX1_EN_OVR__MASK                       0x00000008U
#define WURX_WURX_GENERAL__WURX1_EN_OVR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000008U) >> 3)
#define WURX_WURX_GENERAL__WURX1_EN_OVR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 3) & 0x00000008U)
#define WURX_WURX_GENERAL__WURX1_EN_OVR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | (((uint32_t)(src) <<\
                    3) & 0x00000008U)
#define WURX_WURX_GENERAL__WURX1_EN_OVR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 3) & ~0x00000008U)))
#define WURX_WURX_GENERAL__WURX1_EN_OVR__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((uint32_t)(1) << 3)
#define WURX_WURX_GENERAL__WURX1_EN_OVR__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((uint32_t)(0) << 3)
#define WURX_WURX_GENERAL__WURX1_EN_OVR__RESET_VALUE                0x00000000U
/** @} */

/* macros for field wurx1_en_val */
/**
 * @defgroup pmu_wurx_regs_core_wurx1_en_val_field wurx1_en_val_field
 * @brief macros for field wurx1_en_val
 * @details override value for wurx1_en
 * @{
 */
#define WURX_WURX_GENERAL__WURX1_EN_VAL__SHIFT                                4
#define WURX_WURX_GENERAL__WURX1_EN_VAL__WIDTH                                1
#define WURX_WURX_GENERAL__WURX1_EN_VAL__MASK                       0x00000010U
#define WURX_WURX_GENERAL__WURX1_EN_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000010U) >> 4)
#define WURX_WURX_GENERAL__WURX1_EN_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 4) & 0x00000010U)
#define WURX_WURX_GENERAL__WURX1_EN_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | (((uint32_t)(src) <<\
                    4) & 0x00000010U)
#define WURX_WURX_GENERAL__WURX1_EN_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 4) & ~0x00000010U)))
#define WURX_WURX_GENERAL__WURX1_EN_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(1) << 4)
#define WURX_WURX_GENERAL__WURX1_EN_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(0) << 4)
#define WURX_WURX_GENERAL__WURX1_EN_VAL__RESET_VALUE                0x00000000U
/** @} */

/* macros for field bias_amp */
/**
 * @defgroup pmu_wurx_regs_core_bias_amp_field bias_amp_field
 * @brief macros for field bias_amp
 * @details bias current for the amplifier
 * @{
 */
#define WURX_WURX_GENERAL__BIAS_AMP__SHIFT                                    5
#define WURX_WURX_GENERAL__BIAS_AMP__WIDTH                                    3
#define WURX_WURX_GENERAL__BIAS_AMP__MASK                           0x000000e0U
#define WURX_WURX_GENERAL__BIAS_AMP__READ(src) \
                    (((uint32_t)(src)\
                    & 0x000000e0U) >> 5)
#define WURX_WURX_GENERAL__BIAS_AMP__WRITE(src) \
                    (((uint32_t)(src)\
                    << 5) & 0x000000e0U)
#define WURX_WURX_GENERAL__BIAS_AMP__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000e0U) | (((uint32_t)(src) <<\
                    5) & 0x000000e0U)
#define WURX_WURX_GENERAL__BIAS_AMP__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 5) & ~0x000000e0U)))
#define WURX_WURX_GENERAL__BIAS_AMP__RESET_VALUE                    0x00000004U
/** @} */

/* macros for field wurx_default_cal */
/**
 * @defgroup pmu_wurx_regs_core_wurx_default_cal_field wurx_default_cal_field
 * @brief macros for field wurx_default_cal
 * @details starting point for cal or override value
 * @{
 */
#define WURX_WURX_GENERAL__WURX_DEFAULT_CAL__SHIFT                            8
#define WURX_WURX_GENERAL__WURX_DEFAULT_CAL__WIDTH                            8
#define WURX_WURX_GENERAL__WURX_DEFAULT_CAL__MASK                   0x0000ff00U
#define WURX_WURX_GENERAL__WURX_DEFAULT_CAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000ff00U) >> 8)
#define WURX_WURX_GENERAL__WURX_DEFAULT_CAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x0000ff00U)
#define WURX_WURX_GENERAL__WURX_DEFAULT_CAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ff00U) | (((uint32_t)(src) <<\
                    8) & 0x0000ff00U)
#define WURX_WURX_GENERAL__WURX_DEFAULT_CAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x0000ff00U)))
#define WURX_WURX_GENERAL__WURX_DEFAULT_CAL__RESET_VALUE            0x00000064U
/** @} */

/* macros for field analog_cal_ovr */
/**
 * @defgroup pmu_wurx_regs_core_analog_cal_ovr_field analog_cal_ovr_field
 * @brief macros for field analog_cal_ovr
 * @details override for cal bits for open loop testing
 * @{
 */
#define WURX_WURX_GENERAL__ANALOG_CAL_OVR__SHIFT                             16
#define WURX_WURX_GENERAL__ANALOG_CAL_OVR__WIDTH                              1
#define WURX_WURX_GENERAL__ANALOG_CAL_OVR__MASK                     0x00010000U
#define WURX_WURX_GENERAL__ANALOG_CAL_OVR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00010000U) >> 16)
#define WURX_WURX_GENERAL__ANALOG_CAL_OVR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00010000U)
#define WURX_WURX_GENERAL__ANALOG_CAL_OVR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00010000U) | (((uint32_t)(src) <<\
                    16) & 0x00010000U)
#define WURX_WURX_GENERAL__ANALOG_CAL_OVR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00010000U)))
#define WURX_WURX_GENERAL__ANALOG_CAL_OVR__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00010000U) | ((uint32_t)(1) << 16)
#define WURX_WURX_GENERAL__ANALOG_CAL_OVR__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00010000U) | ((uint32_t)(0) << 16)
#define WURX_WURX_GENERAL__ANALOG_CAL_OVR__RESET_VALUE              0x00000000U
/** @} */

/* macros for field wurx_thr_cal_en */
/**
 * @defgroup pmu_wurx_regs_core_wurx_thr_cal_en_field wurx_thr_cal_en_field
 * @brief macros for field wurx_thr_cal_en
 * @details enable for threshold calibration algorithm
 * @{
 */
#define WURX_WURX_GENERAL__WURX_THR_CAL_EN__SHIFT                            17
#define WURX_WURX_GENERAL__WURX_THR_CAL_EN__WIDTH                             1
#define WURX_WURX_GENERAL__WURX_THR_CAL_EN__MASK                    0x00020000U
#define WURX_WURX_GENERAL__WURX_THR_CAL_EN__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00020000U) >> 17)
#define WURX_WURX_GENERAL__WURX_THR_CAL_EN__WRITE(src) \
                    (((uint32_t)(src)\
                    << 17) & 0x00020000U)
#define WURX_WURX_GENERAL__WURX_THR_CAL_EN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | (((uint32_t)(src) <<\
                    17) & 0x00020000U)
#define WURX_WURX_GENERAL__WURX_THR_CAL_EN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 17) & ~0x00020000U)))
#define WURX_WURX_GENERAL__WURX_THR_CAL_EN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(1) << 17)
#define WURX_WURX_GENERAL__WURX_THR_CAL_EN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(0) << 17)
#define WURX_WURX_GENERAL__WURX_THR_CAL_EN__RESET_VALUE             0x00000001U
/** @} */

/* macros for field analog_ampcalp */
/**
 * @defgroup pmu_wurx_regs_core_analog_ampcalp_field analog_ampcalp_field
 * @brief macros for field analog_ampcalp
 * @details calibration for amplifier, p input
 * @{
 */
#define WURX_WURX_GENERAL__ANALOG_AMPCALP__SHIFT                             18
#define WURX_WURX_GENERAL__ANALOG_AMPCALP__WIDTH                              3
#define WURX_WURX_GENERAL__ANALOG_AMPCALP__MASK                     0x001c0000U
#define WURX_WURX_GENERAL__ANALOG_AMPCALP__READ(src) \
                    (((uint32_t)(src)\
                    & 0x001c0000U) >> 18)
#define WURX_WURX_GENERAL__ANALOG_AMPCALP__WRITE(src) \
                    (((uint32_t)(src)\
                    << 18) & 0x001c0000U)
#define WURX_WURX_GENERAL__ANALOG_AMPCALP__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x001c0000U) | (((uint32_t)(src) <<\
                    18) & 0x001c0000U)
#define WURX_WURX_GENERAL__ANALOG_AMPCALP__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 18) & ~0x001c0000U)))
#define WURX_WURX_GENERAL__ANALOG_AMPCALP__RESET_VALUE              0x00000004U
/** @} */

/* macros for field analog_ampcaln */
/**
 * @defgroup pmu_wurx_regs_core_analog_ampcaln_field analog_ampcaln_field
 * @brief macros for field analog_ampcaln
 * @details calibration for amplifier, n input
 * @{
 */
#define WURX_WURX_GENERAL__ANALOG_AMPCALN__SHIFT                             21
#define WURX_WURX_GENERAL__ANALOG_AMPCALN__WIDTH                              3
#define WURX_WURX_GENERAL__ANALOG_AMPCALN__MASK                     0x00e00000U
#define WURX_WURX_GENERAL__ANALOG_AMPCALN__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00e00000U) >> 21)
#define WURX_WURX_GENERAL__ANALOG_AMPCALN__WRITE(src) \
                    (((uint32_t)(src)\
                    << 21) & 0x00e00000U)
#define WURX_WURX_GENERAL__ANALOG_AMPCALN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00e00000U) | (((uint32_t)(src) <<\
                    21) & 0x00e00000U)
#define WURX_WURX_GENERAL__ANALOG_AMPCALN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 21) & ~0x00e00000U)))
#define WURX_WURX_GENERAL__ANALOG_AMPCALN__RESET_VALUE              0x00000004U
/** @} */

/* macros for field atbsel */
/**
 * @defgroup pmu_wurx_regs_core_atbsel_field atbsel_field
 * @brief macros for field atbsel
 * @details atb select
 * @{
 */
#define WURX_WURX_GENERAL__ATBSEL__SHIFT                                     24
#define WURX_WURX_GENERAL__ATBSEL__WIDTH                                      4
#define WURX_WURX_GENERAL__ATBSEL__MASK                             0x0f000000U
#define WURX_WURX_GENERAL__ATBSEL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0f000000U) >> 24)
#define WURX_WURX_GENERAL__ATBSEL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0x0f000000U)
#define WURX_WURX_GENERAL__ATBSEL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0f000000U) | (((uint32_t)(src) <<\
                    24) & 0x0f000000U)
#define WURX_WURX_GENERAL__ATBSEL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x0f000000U)))
#define WURX_WURX_GENERAL__ATBSEL__RESET_VALUE                      0x00000000U
/** @} */

/* macros for field wakeup0_ovr */
/**
 * @defgroup pmu_wurx_regs_core_wakeup0_ovr_field wakeup0_ovr_field
 * @brief macros for field wakeup0_ovr
 * @details wakeup0 override
 * @{
 */
#define WURX_WURX_GENERAL__WAKEUP0_OVR__SHIFT                                28
#define WURX_WURX_GENERAL__WAKEUP0_OVR__WIDTH                                 1
#define WURX_WURX_GENERAL__WAKEUP0_OVR__MASK                        0x10000000U
#define WURX_WURX_GENERAL__WAKEUP0_OVR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x10000000U) >> 28)
#define WURX_WURX_GENERAL__WAKEUP0_OVR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 28) & 0x10000000U)
#define WURX_WURX_GENERAL__WAKEUP0_OVR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x10000000U) | (((uint32_t)(src) <<\
                    28) & 0x10000000U)
#define WURX_WURX_GENERAL__WAKEUP0_OVR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 28) & ~0x10000000U)))
#define WURX_WURX_GENERAL__WAKEUP0_OVR__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x10000000U) | ((uint32_t)(1) << 28)
#define WURX_WURX_GENERAL__WAKEUP0_OVR__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x10000000U) | ((uint32_t)(0) << 28)
#define WURX_WURX_GENERAL__WAKEUP0_OVR__RESET_VALUE                 0x00000000U
/** @} */

/* macros for field wakeup0_ovr_val */
/**
 * @defgroup pmu_wurx_regs_core_wakeup0_ovr_val_field wakeup0_ovr_val_field
 * @brief macros for field wakeup0_ovr_val
 * @details wakeup0 override value
 * @{
 */
#define WURX_WURX_GENERAL__WAKEUP0_OVR_VAL__SHIFT                            29
#define WURX_WURX_GENERAL__WAKEUP0_OVR_VAL__WIDTH                             1
#define WURX_WURX_GENERAL__WAKEUP0_OVR_VAL__MASK                    0x20000000U
#define WURX_WURX_GENERAL__WAKEUP0_OVR_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x20000000U) >> 29)
#define WURX_WURX_GENERAL__WAKEUP0_OVR_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 29) & 0x20000000U)
#define WURX_WURX_GENERAL__WAKEUP0_OVR_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x20000000U) | (((uint32_t)(src) <<\
                    29) & 0x20000000U)
#define WURX_WURX_GENERAL__WAKEUP0_OVR_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 29) & ~0x20000000U)))
#define WURX_WURX_GENERAL__WAKEUP0_OVR_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x20000000U) | ((uint32_t)(1) << 29)
#define WURX_WURX_GENERAL__WAKEUP0_OVR_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x20000000U) | ((uint32_t)(0) << 29)
#define WURX_WURX_GENERAL__WAKEUP0_OVR_VAL__RESET_VALUE             0x00000000U
/** @} */

/* macros for field wakeup1_ovr */
/**
 * @defgroup pmu_wurx_regs_core_wakeup1_ovr_field wakeup1_ovr_field
 * @brief macros for field wakeup1_ovr
 * @details wakeup1 override
 * @{
 */
#define WURX_WURX_GENERAL__WAKEUP1_OVR__SHIFT                                30
#define WURX_WURX_GENERAL__WAKEUP1_OVR__WIDTH                                 1
#define WURX_WURX_GENERAL__WAKEUP1_OVR__MASK                        0x40000000U
#define WURX_WURX_GENERAL__WAKEUP1_OVR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x40000000U) >> 30)
#define WURX_WURX_GENERAL__WAKEUP1_OVR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 30) & 0x40000000U)
#define WURX_WURX_GENERAL__WAKEUP1_OVR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x40000000U) | (((uint32_t)(src) <<\
                    30) & 0x40000000U)
#define WURX_WURX_GENERAL__WAKEUP1_OVR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 30) & ~0x40000000U)))
#define WURX_WURX_GENERAL__WAKEUP1_OVR__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x40000000U) | ((uint32_t)(1) << 30)
#define WURX_WURX_GENERAL__WAKEUP1_OVR__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x40000000U) | ((uint32_t)(0) << 30)
#define WURX_WURX_GENERAL__WAKEUP1_OVR__RESET_VALUE                 0x00000000U
/** @} */

/* macros for field wakeup1_ovr_val */
/**
 * @defgroup pmu_wurx_regs_core_wakeup1_ovr_val_field wakeup1_ovr_val_field
 * @brief macros for field wakeup1_ovr_val
 * @details wakeup1 override value
 * @{
 */
#define WURX_WURX_GENERAL__WAKEUP1_OVR_VAL__SHIFT                            31
#define WURX_WURX_GENERAL__WAKEUP1_OVR_VAL__WIDTH                             1
#define WURX_WURX_GENERAL__WAKEUP1_OVR_VAL__MASK                    0x80000000U
#define WURX_WURX_GENERAL__WAKEUP1_OVR_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x80000000U) >> 31)
#define WURX_WURX_GENERAL__WAKEUP1_OVR_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 31) & 0x80000000U)
#define WURX_WURX_GENERAL__WAKEUP1_OVR_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x80000000U) | (((uint32_t)(src) <<\
                    31) & 0x80000000U)
#define WURX_WURX_GENERAL__WAKEUP1_OVR_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 31) & ~0x80000000U)))
#define WURX_WURX_GENERAL__WAKEUP1_OVR_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x80000000U) | ((uint32_t)(1) << 31)
#define WURX_WURX_GENERAL__WAKEUP1_OVR_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x80000000U) | ((uint32_t)(0) << 31)
#define WURX_WURX_GENERAL__WAKEUP1_OVR_VAL__RESET_VALUE             0x00000000U
/** @} */
#define WURX_WURX_GENERAL__TYPE                                        uint32_t
#define WURX_WURX_GENERAL__READ                                     0xffffffffU
#define WURX_WURX_GENERAL__WRITE                                    0xffffffffU
#define WURX_WURX_GENERAL__PRESERVED                                0x00000000U
#define WURX_WURX_GENERAL__RESET_VALUE                              0x00926480U

#endif /* __WURX_WURX_GENERAL_MACRO__ */

/** @} end of wurx_general */

/* macros for BlueprintGlobalNameSpace::WURX_wurx0_0 */
/**
 * @defgroup pmu_wurx_regs_core_wurx0_0 wurx0_0
 * @brief Wake-up RX unique ID, algorithm 0 definitions.
 * @{
 */
#ifndef __WURX_WURX0_0_MACRO__
#define __WURX_WURX0_0_MACRO__

/* macros for field wurx0_uid */
/**
 * @defgroup pmu_wurx_regs_core_wurx0_uid_field wurx0_uid_field
 * @brief macros for field wurx0_uid
 * @details User ID, upper 16 bits for group ID, lower 16 bits for user ID
 * @{
 */
#define WURX_WURX0_0__WURX0_UID__SHIFT                                        0
#define WURX_WURX0_0__WURX0_UID__WIDTH                                       32
#define WURX_WURX0_0__WURX0_UID__MASK                               0xffffffffU
#define WURX_WURX0_0__WURX0_UID__READ(src)      ((uint32_t)(src) & 0xffffffffU)
#define WURX_WURX0_0__WURX0_UID__WRITE(src)     ((uint32_t)(src) & 0xffffffffU)
#define WURX_WURX0_0__WURX0_UID__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffffffffU) | ((uint32_t)(src) &\
                    0xffffffffU)
#define WURX_WURX0_0__WURX0_UID__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0xffffffffU)))
#define WURX_WURX0_0__WURX0_UID__RESET_VALUE                        0xaaaaaaaaU
/** @} */
#define WURX_WURX0_0__TYPE                                             uint32_t
#define WURX_WURX0_0__READ                                          0xffffffffU
#define WURX_WURX0_0__WRITE                                         0xffffffffU
#define WURX_WURX0_0__PRESERVED                                     0x00000000U
#define WURX_WURX0_0__RESET_VALUE                                   0xaaaaaaaaU

#endif /* __WURX_WURX0_0_MACRO__ */

/** @} end of wurx0_0 */

/* macros for BlueprintGlobalNameSpace::WURX_wurx0_1 */
/**
 * @defgroup pmu_wurx_regs_core_wurx0_1 wurx0_1
 * @brief Wake-up RX global ID, algorithm 0 definitions.
 * @{
 */
#ifndef __WURX_WURX0_1_MACRO__
#define __WURX_WURX0_1_MACRO__

/* macros for field wurx0_gid */
/**
 * @defgroup pmu_wurx_regs_core_wurx0_gid_field wurx0_gid_field
 * @brief macros for field wurx0_gid
 * @details Global ID
 * @{
 */
#define WURX_WURX0_1__WURX0_GID__SHIFT                                        0
#define WURX_WURX0_1__WURX0_GID__WIDTH                                       32
#define WURX_WURX0_1__WURX0_GID__MASK                               0xffffffffU
#define WURX_WURX0_1__WURX0_GID__READ(src)      ((uint32_t)(src) & 0xffffffffU)
#define WURX_WURX0_1__WURX0_GID__WRITE(src)     ((uint32_t)(src) & 0xffffffffU)
#define WURX_WURX0_1__WURX0_GID__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffffffffU) | ((uint32_t)(src) &\
                    0xffffffffU)
#define WURX_WURX0_1__WURX0_GID__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0xffffffffU)))
#define WURX_WURX0_1__WURX0_GID__RESET_VALUE                        0xffffffffU
/** @} */
#define WURX_WURX0_1__TYPE                                             uint32_t
#define WURX_WURX0_1__READ                                          0xffffffffU
#define WURX_WURX0_1__WRITE                                         0xffffffffU
#define WURX_WURX0_1__PRESERVED                                     0x00000000U
#define WURX_WURX0_1__RESET_VALUE                                   0xffffffffU

#endif /* __WURX_WURX0_1_MACRO__ */

/** @} end of wurx0_1 */

/* macros for BlueprintGlobalNameSpace::WURX_wurx0_2 */
/**
 * @defgroup pmu_wurx_regs_core_wurx0_2 wurx0_2
 * @brief Wake-up RX settings, algorithm 0 definitions.
 * @{
 */
#ifndef __WURX_WURX0_2_MACRO__
#define __WURX_WURX0_2_MACRO__

/* macros for field wurx0_err_threshold */
/**
 * @defgroup pmu_wurx_regs_core_wurx0_err_threshold_field wurx0_err_threshold_field
 * @brief macros for field wurx0_err_threshold
 * @details number of bits of error between RX ID and detected ID
 * @{
 */
#define WURX_WURX0_2__WURX0_ERR_THRESHOLD__SHIFT                              0
#define WURX_WURX0_2__WURX0_ERR_THRESHOLD__WIDTH                              6
#define WURX_WURX0_2__WURX0_ERR_THRESHOLD__MASK                     0x0000003fU
#define WURX_WURX0_2__WURX0_ERR_THRESHOLD__READ(src) \
                    ((uint32_t)(src)\
                    & 0x0000003fU)
#define WURX_WURX0_2__WURX0_ERR_THRESHOLD__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x0000003fU)
#define WURX_WURX0_2__WURX0_ERR_THRESHOLD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000003fU) | ((uint32_t)(src) &\
                    0x0000003fU)
#define WURX_WURX0_2__WURX0_ERR_THRESHOLD__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x0000003fU)))
#define WURX_WURX0_2__WURX0_ERR_THRESHOLD__RESET_VALUE              0x0000001fU
/** @} */

/* macros for field wurx0_too_lo1 */
/**
 * @defgroup pmu_wurx_regs_core_wurx0_too_lo1_field wurx0_too_lo1_field
 * @brief macros for field wurx0_too_lo1
 * @details number of samples that threshold is too low before linear increase in cal
 * @{
 */
#define WURX_WURX0_2__WURX0_TOO_LO1__SHIFT                                    6
#define WURX_WURX0_2__WURX0_TOO_LO1__WIDTH                                    5
#define WURX_WURX0_2__WURX0_TOO_LO1__MASK                           0x000007c0U
#define WURX_WURX0_2__WURX0_TOO_LO1__READ(src) \
                    (((uint32_t)(src)\
                    & 0x000007c0U) >> 6)
#define WURX_WURX0_2__WURX0_TOO_LO1__WRITE(src) \
                    (((uint32_t)(src)\
                    << 6) & 0x000007c0U)
#define WURX_WURX0_2__WURX0_TOO_LO1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000007c0U) | (((uint32_t)(src) <<\
                    6) & 0x000007c0U)
#define WURX_WURX0_2__WURX0_TOO_LO1__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 6) & ~0x000007c0U)))
#define WURX_WURX0_2__WURX0_TOO_LO1__RESET_VALUE                    0x00000005U
/** @} */

/* macros for field wurx0_too_lo2 */
/**
 * @defgroup pmu_wurx_regs_core_wurx0_too_lo2_field wurx0_too_lo2_field
 * @brief macros for field wurx0_too_lo2
 * @details number of samples that threshold is too low before binary cal
 * @{
 */
#define WURX_WURX0_2__WURX0_TOO_LO2__SHIFT                                   11
#define WURX_WURX0_2__WURX0_TOO_LO2__WIDTH                                    5
#define WURX_WURX0_2__WURX0_TOO_LO2__MASK                           0x0000f800U
#define WURX_WURX0_2__WURX0_TOO_LO2__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000f800U) >> 11)
#define WURX_WURX0_2__WURX0_TOO_LO2__WRITE(src) \
                    (((uint32_t)(src)\
                    << 11) & 0x0000f800U)
#define WURX_WURX0_2__WURX0_TOO_LO2__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000f800U) | (((uint32_t)(src) <<\
                    11) & 0x0000f800U)
#define WURX_WURX0_2__WURX0_TOO_LO2__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 11) & ~0x0000f800U)))
#define WURX_WURX0_2__WURX0_TOO_LO2__RESET_VALUE                    0x0000000aU
/** @} */

/* macros for field wurx0_too_hi */
/**
 * @defgroup pmu_wurx_regs_core_wurx0_too_hi_field wurx0_too_hi_field
 * @brief macros for field wurx0_too_hi
 * @details number of samples that threshold is too high before binary cal
 * @{
 */
#define WURX_WURX0_2__WURX0_TOO_HI__SHIFT                                    16
#define WURX_WURX0_2__WURX0_TOO_HI__WIDTH                                     5
#define WURX_WURX0_2__WURX0_TOO_HI__MASK                            0x001f0000U
#define WURX_WURX0_2__WURX0_TOO_HI__READ(src) \
                    (((uint32_t)(src)\
                    & 0x001f0000U) >> 16)
#define WURX_WURX0_2__WURX0_TOO_HI__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x001f0000U)
#define WURX_WURX0_2__WURX0_TOO_HI__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x001f0000U) | (((uint32_t)(src) <<\
                    16) & 0x001f0000U)
#define WURX_WURX0_2__WURX0_TOO_HI__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x001f0000U)))
#define WURX_WURX0_2__WURX0_TOO_HI__RESET_VALUE                     0x0000000aU
/** @} */

/* macros for field wurx0_corr_length */
/**
 * @defgroup pmu_wurx_regs_core_wurx0_corr_length_field wurx0_corr_length_field
 * @brief macros for field wurx0_corr_length
 * @details number of symbols in one ID
 * @{
 */
#define WURX_WURX0_2__WURX0_CORR_LENGTH__SHIFT                               21
#define WURX_WURX0_2__WURX0_CORR_LENGTH__WIDTH                                6
#define WURX_WURX0_2__WURX0_CORR_LENGTH__MASK                       0x07e00000U
#define WURX_WURX0_2__WURX0_CORR_LENGTH__READ(src) \
                    (((uint32_t)(src)\
                    & 0x07e00000U) >> 21)
#define WURX_WURX0_2__WURX0_CORR_LENGTH__WRITE(src) \
                    (((uint32_t)(src)\
                    << 21) & 0x07e00000U)
#define WURX_WURX0_2__WURX0_CORR_LENGTH__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x07e00000U) | (((uint32_t)(src) <<\
                    21) & 0x07e00000U)
#define WURX_WURX0_2__WURX0_CORR_LENGTH__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 21) & ~0x07e00000U)))
#define WURX_WURX0_2__WURX0_CORR_LENGTH__RESET_VALUE                0x00000020U
/** @} */

/* macros for field wurx0_thr_length */
/**
 * @defgroup pmu_wurx_regs_core_wurx0_thr_length_field wurx0_thr_length_field
 * @brief macros for field wurx0_thr_length
 * @details how many sybmols to adjust threshold on, thr_length = 1: 2 symbols
 * @{
 */
#define WURX_WURX0_2__WURX0_THR_LENGTH__SHIFT                                27
#define WURX_WURX0_2__WURX0_THR_LENGTH__WIDTH                                 4
#define WURX_WURX0_2__WURX0_THR_LENGTH__MASK                        0x78000000U
#define WURX_WURX0_2__WURX0_THR_LENGTH__READ(src) \
                    (((uint32_t)(src)\
                    & 0x78000000U) >> 27)
#define WURX_WURX0_2__WURX0_THR_LENGTH__WRITE(src) \
                    (((uint32_t)(src)\
                    << 27) & 0x78000000U)
#define WURX_WURX0_2__WURX0_THR_LENGTH__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x78000000U) | (((uint32_t)(src) <<\
                    27) & 0x78000000U)
#define WURX_WURX0_2__WURX0_THR_LENGTH__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 27) & ~0x78000000U)))
#define WURX_WURX0_2__WURX0_THR_LENGTH__RESET_VALUE                 0x00000001U
/** @} */
#define WURX_WURX0_2__TYPE                                             uint32_t
#define WURX_WURX0_2__READ                                          0x7fffffffU
#define WURX_WURX0_2__WRITE                                         0x7fffffffU
#define WURX_WURX0_2__PRESERVED                                     0x00000000U
#define WURX_WURX0_2__RESET_VALUE                                   0x0c0a515fU

#endif /* __WURX_WURX0_2_MACRO__ */

/** @} end of wurx0_2 */

/* macros for BlueprintGlobalNameSpace::WURX_wurx0_3 */
/**
 * @defgroup pmu_wurx_regs_core_wurx0_3 wurx0_3
 * @brief Wake-up RX settings, algorithm 0 definitions.
 * @{
 */
#ifndef __WURX_WURX0_3_MACRO__
#define __WURX_WURX0_3_MACRO__

/* macros for field wurx0_energy_toolow */
/**
 * @defgroup pmu_wurx_regs_core_wurx0_energy_toolow_field wurx0_energy_toolow_field
 * @brief macros for field wurx0_energy_toolow
 * @details received energy less than this --> decrease threshold
 * @{
 */
#define WURX_WURX0_3__WURX0_ENERGY_TOOLOW__SHIFT                              0
#define WURX_WURX0_3__WURX0_ENERGY_TOOLOW__WIDTH                              9
#define WURX_WURX0_3__WURX0_ENERGY_TOOLOW__MASK                     0x000001ffU
#define WURX_WURX0_3__WURX0_ENERGY_TOOLOW__READ(src) \
                    ((uint32_t)(src)\
                    & 0x000001ffU)
#define WURX_WURX0_3__WURX0_ENERGY_TOOLOW__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x000001ffU)
#define WURX_WURX0_3__WURX0_ENERGY_TOOLOW__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000001ffU) | ((uint32_t)(src) &\
                    0x000001ffU)
#define WURX_WURX0_3__WURX0_ENERGY_TOOLOW__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000001ffU)))
#define WURX_WURX0_3__WURX0_ENERGY_TOOLOW__RESET_VALUE              0x00000004U
/** @} */

/* macros for field wurx0_energy_toohigh */
/**
 * @defgroup pmu_wurx_regs_core_wurx0_energy_toohigh_field wurx0_energy_toohigh_field
 * @brief macros for field wurx0_energy_toohigh
 * @details received energy more than this --> increase threshold
 * @{
 */
#define WURX_WURX0_3__WURX0_ENERGY_TOOHIGH__SHIFT                             9
#define WURX_WURX0_3__WURX0_ENERGY_TOOHIGH__WIDTH                            10
#define WURX_WURX0_3__WURX0_ENERGY_TOOHIGH__MASK                    0x0007fe00U
#define WURX_WURX0_3__WURX0_ENERGY_TOOHIGH__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0007fe00U) >> 9)
#define WURX_WURX0_3__WURX0_ENERGY_TOOHIGH__WRITE(src) \
                    (((uint32_t)(src)\
                    << 9) & 0x0007fe00U)
#define WURX_WURX0_3__WURX0_ENERGY_TOOHIGH__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0007fe00U) | (((uint32_t)(src) <<\
                    9) & 0x0007fe00U)
#define WURX_WURX0_3__WURX0_ENERGY_TOOHIGH__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 9) & ~0x0007fe00U)))
#define WURX_WURX0_3__WURX0_ENERGY_TOOHIGH__RESET_VALUE             0x00000006U
/** @} */

/* macros for field wurx0_sym1_threshold */
/**
 * @defgroup pmu_wurx_regs_core_wurx0_sym1_threshold_field wurx0_sym1_threshold_field
 * @brief macros for field wurx0_sym1_threshold
 * @details number of counts above this means symbol 1 is detected
 * @{
 */
#define WURX_WURX0_3__WURX0_SYM1_THRESHOLD__SHIFT                            19
#define WURX_WURX0_3__WURX0_SYM1_THRESHOLD__WIDTH                            10
#define WURX_WURX0_3__WURX0_SYM1_THRESHOLD__MASK                    0x1ff80000U
#define WURX_WURX0_3__WURX0_SYM1_THRESHOLD__READ(src) \
                    (((uint32_t)(src)\
                    & 0x1ff80000U) >> 19)
#define WURX_WURX0_3__WURX0_SYM1_THRESHOLD__WRITE(src) \
                    (((uint32_t)(src)\
                    << 19) & 0x1ff80000U)
#define WURX_WURX0_3__WURX0_SYM1_THRESHOLD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x1ff80000U) | (((uint32_t)(src) <<\
                    19) & 0x1ff80000U)
#define WURX_WURX0_3__WURX0_SYM1_THRESHOLD__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 19) & ~0x1ff80000U)))
#define WURX_WURX0_3__WURX0_SYM1_THRESHOLD__RESET_VALUE             0x00000002U
/** @} */

/* macros for field wurx0_clk_freq */
/**
 * @defgroup pmu_wurx_regs_core_wurx0_clk_freq_field wurx0_clk_freq_field
 * @brief macros for field wurx0_clk_freq
 * @details 0 - 16KHz, 1- 32KHz
 * @{
 */
#define WURX_WURX0_3__WURX0_CLK_FREQ__SHIFT                                  29
#define WURX_WURX0_3__WURX0_CLK_FREQ__WIDTH                                   1
#define WURX_WURX0_3__WURX0_CLK_FREQ__MASK                          0x20000000U
#define WURX_WURX0_3__WURX0_CLK_FREQ__READ(src) \
                    (((uint32_t)(src)\
                    & 0x20000000U) >> 29)
#define WURX_WURX0_3__WURX0_CLK_FREQ__WRITE(src) \
                    (((uint32_t)(src)\
                    << 29) & 0x20000000U)
#define WURX_WURX0_3__WURX0_CLK_FREQ__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x20000000U) | (((uint32_t)(src) <<\
                    29) & 0x20000000U)
#define WURX_WURX0_3__WURX0_CLK_FREQ__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 29) & ~0x20000000U)))
#define WURX_WURX0_3__WURX0_CLK_FREQ__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x20000000U) | ((uint32_t)(1) << 29)
#define WURX_WURX0_3__WURX0_CLK_FREQ__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x20000000U) | ((uint32_t)(0) << 29)
#define WURX_WURX0_3__WURX0_CLK_FREQ__RESET_VALUE                   0x00000001U
/** @} */
#define WURX_WURX0_3__TYPE                                             uint32_t
#define WURX_WURX0_3__READ                                          0x3fffffffU
#define WURX_WURX0_3__WRITE                                         0x3fffffffU
#define WURX_WURX0_3__PRESERVED                                     0x00000000U
#define WURX_WURX0_3__RESET_VALUE                                   0x20100c04U

#endif /* __WURX_WURX0_3_MACRO__ */

/** @} end of wurx0_3 */

/* macros for BlueprintGlobalNameSpace::WURX_wurx0_4 */
/**
 * @defgroup pmu_wurx_regs_core_wurx0_4 wurx0_4
 * @brief Wake-up RX settings, algorithm 0 definitions.
 * @{
 */
#ifndef __WURX_WURX0_4_MACRO__
#define __WURX_WURX0_4_MACRO__

/* macros for field wurx0_timer_max */
/**
 * @defgroup pmu_wurx_regs_core_wurx0_timer_max_field wurx0_timer_max_field
 * @brief macros for field wurx0_timer_max
 * @details number of cycles in one symbol period - 1
 * @{
 */
#define WURX_WURX0_4__WURX0_TIMER_MAX__SHIFT                                  0
#define WURX_WURX0_4__WURX0_TIMER_MAX__WIDTH                                 10
#define WURX_WURX0_4__WURX0_TIMER_MAX__MASK                         0x000003ffU
#define WURX_WURX0_4__WURX0_TIMER_MAX__READ(src) \
                    ((uint32_t)(src)\
                    & 0x000003ffU)
#define WURX_WURX0_4__WURX0_TIMER_MAX__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x000003ffU)
#define WURX_WURX0_4__WURX0_TIMER_MAX__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000003ffU) | ((uint32_t)(src) &\
                    0x000003ffU)
#define WURX_WURX0_4__WURX0_TIMER_MAX__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000003ffU)))
#define WURX_WURX0_4__WURX0_TIMER_MAX__RESET_VALUE                  0x0000000fU
/** @} */

/* macros for field wurx0_sym_silent_thr */
/**
 * @defgroup pmu_wurx_regs_core_wurx0_sym_silent_thr_field wurx0_sym_silent_thr_field
 * @brief macros for field wurx0_sym_silent_thr
 * @details number of consecutive 0's considered as noise in a sym window
 * @{
 */
#define WURX_WURX0_4__WURX0_SYM_SILENT_THR__SHIFT                            10
#define WURX_WURX0_4__WURX0_SYM_SILENT_THR__WIDTH                             5
#define WURX_WURX0_4__WURX0_SYM_SILENT_THR__MASK                    0x00007c00U
#define WURX_WURX0_4__WURX0_SYM_SILENT_THR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00007c00U) >> 10)
#define WURX_WURX0_4__WURX0_SYM_SILENT_THR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 10) & 0x00007c00U)
#define WURX_WURX0_4__WURX0_SYM_SILENT_THR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00007c00U) | (((uint32_t)(src) <<\
                    10) & 0x00007c00U)
#define WURX_WURX0_4__WURX0_SYM_SILENT_THR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 10) & ~0x00007c00U)))
#define WURX_WURX0_4__WURX0_SYM_SILENT_THR__RESET_VALUE             0x00000008U
/** @} */

/* macros for field wurx0_init_cal_step */
/**
 * @defgroup pmu_wurx_regs_core_wurx0_init_cal_step_field wurx0_init_cal_step_field
 * @brief macros for field wurx0_init_cal_step
 * @details initial cal step
 * @{
 */
#define WURX_WURX0_4__WURX0_INIT_CAL_STEP__SHIFT                             15
#define WURX_WURX0_4__WURX0_INIT_CAL_STEP__WIDTH                              8
#define WURX_WURX0_4__WURX0_INIT_CAL_STEP__MASK                     0x007f8000U
#define WURX_WURX0_4__WURX0_INIT_CAL_STEP__READ(src) \
                    (((uint32_t)(src)\
                    & 0x007f8000U) >> 15)
#define WURX_WURX0_4__WURX0_INIT_CAL_STEP__WRITE(src) \
                    (((uint32_t)(src)\
                    << 15) & 0x007f8000U)
#define WURX_WURX0_4__WURX0_INIT_CAL_STEP__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x007f8000U) | (((uint32_t)(src) <<\
                    15) & 0x007f8000U)
#define WURX_WURX0_4__WURX0_INIT_CAL_STEP__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 15) & ~0x007f8000U)))
#define WURX_WURX0_4__WURX0_INIT_CAL_STEP__RESET_VALUE              0x00000064U
/** @} */

/* macros for field wurx0_cal_silent_thr */
/**
 * @defgroup pmu_wurx_regs_core_wurx0_cal_silent_thr_field wurx0_cal_silent_thr_field
 * @brief macros for field wurx0_cal_silent_thr
 * @details number of consecutive 0's considered as noise in a thr window
 * @{
 */
#define WURX_WURX0_4__WURX0_CAL_SILENT_THR__SHIFT                            23
#define WURX_WURX0_4__WURX0_CAL_SILENT_THR__WIDTH                             7
#define WURX_WURX0_4__WURX0_CAL_SILENT_THR__MASK                    0x3f800000U
#define WURX_WURX0_4__WURX0_CAL_SILENT_THR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x3f800000U) >> 23)
#define WURX_WURX0_4__WURX0_CAL_SILENT_THR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 23) & 0x3f800000U)
#define WURX_WURX0_4__WURX0_CAL_SILENT_THR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x3f800000U) | (((uint32_t)(src) <<\
                    23) & 0x3f800000U)
#define WURX_WURX0_4__WURX0_CAL_SILENT_THR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 23) & ~0x3f800000U)))
#define WURX_WURX0_4__WURX0_CAL_SILENT_THR__RESET_VALUE             0x00000008U
/** @} */
#define WURX_WURX0_4__TYPE                                             uint32_t
#define WURX_WURX0_4__READ                                          0x3fffffffU
#define WURX_WURX0_4__WRITE                                         0x3fffffffU
#define WURX_WURX0_4__PRESERVED                                     0x00000000U
#define WURX_WURX0_4__RESET_VALUE                                   0x0432200fU

#endif /* __WURX_WURX0_4_MACRO__ */

/** @} end of wurx0_4 */

/* macros for BlueprintGlobalNameSpace::WURX_wurx0_rb */
/**
 * @defgroup pmu_wurx_regs_core_wurx0_rb wurx0_rb
 * @brief Wake-up RX read-out bits, algorithm 0 definitions.
 * @{
 */
#ifndef __WURX_WURX0_RB_MACRO__
#define __WURX_WURX0_RB_MACRO__

/* macros for field wurx0_state */
/**
 * @defgroup pmu_wurx_regs_core_wurx0_state_field wurx0_state_field
 * @brief macros for field wurx0_state
 * @details FSM state
 * @{
 */
#define WURX_WURX0_RB__WURX0_STATE__SHIFT                                     0
#define WURX_WURX0_RB__WURX0_STATE__WIDTH                                     2
#define WURX_WURX0_RB__WURX0_STATE__MASK                            0x00000003U
#define WURX_WURX0_RB__WURX0_STATE__READ(src)   ((uint32_t)(src) & 0x00000003U)
#define WURX_WURX0_RB__WURX0_STATE__RESET_VALUE                     0x00000000U
/** @} */

/* macros for field wurx0_out_energy */
/**
 * @defgroup pmu_wurx_regs_core_wurx0_out_energy_field wurx0_out_energy_field
 * @brief macros for field wurx0_out_energy
 * @details symbol energy
 * @{
 */
#define WURX_WURX0_RB__WURX0_OUT_ENERGY__SHIFT                                2
#define WURX_WURX0_RB__WURX0_OUT_ENERGY__WIDTH                               10
#define WURX_WURX0_RB__WURX0_OUT_ENERGY__MASK                       0x00000ffcU
#define WURX_WURX0_RB__WURX0_OUT_ENERGY__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000ffcU) >> 2)
#define WURX_WURX0_RB__WURX0_OUT_ENERGY__RESET_VALUE                0x00000000U
/** @} */

/* macros for field wurx0_cal_step */
/**
 * @defgroup pmu_wurx_regs_core_wurx0_cal_step_field wurx0_cal_step_field
 * @brief macros for field wurx0_cal_step
 * @details FSM binary cal step
 * @{
 */
#define WURX_WURX0_RB__WURX0_CAL_STEP__SHIFT                                 12
#define WURX_WURX0_RB__WURX0_CAL_STEP__WIDTH                                  8
#define WURX_WURX0_RB__WURX0_CAL_STEP__MASK                         0x000ff000U
#define WURX_WURX0_RB__WURX0_CAL_STEP__READ(src) \
                    (((uint32_t)(src)\
                    & 0x000ff000U) >> 12)
#define WURX_WURX0_RB__WURX0_CAL_STEP__RESET_VALUE                  0x00000000U
/** @} */

/* macros for field wurx0_monitor_2hi */
/**
 * @defgroup pmu_wurx_regs_core_wurx0_monitor_2hi_field wurx0_monitor_2hi_field
 * @brief macros for field wurx0_monitor_2hi
 * @details number of consecutive symbols with too high energy
 * @{
 */
#define WURX_WURX0_RB__WURX0_MONITOR_2HI__SHIFT                              20
#define WURX_WURX0_RB__WURX0_MONITOR_2HI__WIDTH                               5
#define WURX_WURX0_RB__WURX0_MONITOR_2HI__MASK                      0x01f00000U
#define WURX_WURX0_RB__WURX0_MONITOR_2HI__READ(src) \
                    (((uint32_t)(src)\
                    & 0x01f00000U) >> 20)
#define WURX_WURX0_RB__WURX0_MONITOR_2HI__RESET_VALUE               0x00000000U
/** @} */

/* macros for field wurx0_monitor_2lo */
/**
 * @defgroup pmu_wurx_regs_core_wurx0_monitor_2lo_field wurx0_monitor_2lo_field
 * @brief macros for field wurx0_monitor_2lo
 * @details number of consecutive symbols with too low energy
 * @{
 */
#define WURX_WURX0_RB__WURX0_MONITOR_2LO__SHIFT                              25
#define WURX_WURX0_RB__WURX0_MONITOR_2LO__WIDTH                               5
#define WURX_WURX0_RB__WURX0_MONITOR_2LO__MASK                      0x3e000000U
#define WURX_WURX0_RB__WURX0_MONITOR_2LO__READ(src) \
                    (((uint32_t)(src)\
                    & 0x3e000000U) >> 25)
#define WURX_WURX0_RB__WURX0_MONITOR_2LO__RESET_VALUE               0x00000000U
/** @} */
#define WURX_WURX0_RB__TYPE                                            uint32_t
#define WURX_WURX0_RB__READ                                         0x3fffffffU
#define WURX_WURX0_RB__PRESERVED                                    0x00000000U
#define WURX_WURX0_RB__RESET_VALUE                                  0x00000000U

#endif /* __WURX_WURX0_RB_MACRO__ */

/** @} end of wurx0_rb */

/* macros for BlueprintGlobalNameSpace::WURX_wurx1_0 */
/**
 * @defgroup pmu_wurx_regs_core_wurx1_0 wurx1_0
 * @brief Wake-up RX settings, algorithm 1 definitions.
 * @{
 */
#ifndef __WURX_WURX1_0_MACRO__
#define __WURX_WURX1_0_MACRO__

/* macros for field wurx1_thr_min */
/**
 * @defgroup pmu_wurx_regs_core_wurx1_thr_min_field wurx1_thr_min_field
 * @brief macros for field wurx1_thr_min
 * @details decrease thr if energy less than this in a thr period
 * @{
 */
#define WURX_WURX1_0__WURX1_THR_MIN__SHIFT                                    0
#define WURX_WURX1_0__WURX1_THR_MIN__WIDTH                                   12
#define WURX_WURX1_0__WURX1_THR_MIN__MASK                           0x00000fffU
#define WURX_WURX1_0__WURX1_THR_MIN__READ(src)  ((uint32_t)(src) & 0x00000fffU)
#define WURX_WURX1_0__WURX1_THR_MIN__WRITE(src) ((uint32_t)(src) & 0x00000fffU)
#define WURX_WURX1_0__WURX1_THR_MIN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000fffU) | ((uint32_t)(src) &\
                    0x00000fffU)
#define WURX_WURX1_0__WURX1_THR_MIN__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000fffU)))
#define WURX_WURX1_0__WURX1_THR_MIN__RESET_VALUE                    0x00000001U
/** @} */

/* macros for field wurx1_thr_max */
/**
 * @defgroup pmu_wurx_regs_core_wurx1_thr_max_field wurx1_thr_max_field
 * @brief macros for field wurx1_thr_max
 * @details increase thr if energy more than this in a thr period
 * @{
 */
#define WURX_WURX1_0__WURX1_THR_MAX__SHIFT                                   12
#define WURX_WURX1_0__WURX1_THR_MAX__WIDTH                                   12
#define WURX_WURX1_0__WURX1_THR_MAX__MASK                           0x00fff000U
#define WURX_WURX1_0__WURX1_THR_MAX__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00fff000U) >> 12)
#define WURX_WURX1_0__WURX1_THR_MAX__WRITE(src) \
                    (((uint32_t)(src)\
                    << 12) & 0x00fff000U)
#define WURX_WURX1_0__WURX1_THR_MAX__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00fff000U) | (((uint32_t)(src) <<\
                    12) & 0x00fff000U)
#define WURX_WURX1_0__WURX1_THR_MAX__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 12) & ~0x00fff000U)))
#define WURX_WURX1_0__WURX1_THR_MAX__RESET_VALUE                    0x000000c8U
/** @} */

/* macros for field wurx1_thr_step */
/**
 * @defgroup pmu_wurx_regs_core_wurx1_thr_step_field wurx1_thr_step_field
 * @brief macros for field wurx1_thr_step
 * @details step for changing threshold
 * @{
 */
#define WURX_WURX1_0__WURX1_THR_STEP__SHIFT                                  24
#define WURX_WURX1_0__WURX1_THR_STEP__WIDTH                                   4
#define WURX_WURX1_0__WURX1_THR_STEP__MASK                          0x0f000000U
#define WURX_WURX1_0__WURX1_THR_STEP__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0f000000U) >> 24)
#define WURX_WURX1_0__WURX1_THR_STEP__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0x0f000000U)
#define WURX_WURX1_0__WURX1_THR_STEP__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0f000000U) | (((uint32_t)(src) <<\
                    24) & 0x0f000000U)
#define WURX_WURX1_0__WURX1_THR_STEP__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x0f000000U)))
#define WURX_WURX1_0__WURX1_THR_STEP__RESET_VALUE                   0x00000001U
/** @} */

/* macros for field wurx1_max_rep */
/**
 * @defgroup pmu_wurx_regs_core_wurx1_max_rep_field wurx1_max_rep_field
 * @brief macros for field wurx1_max_rep
 * @details number of repititions before we wakeup (currently only 1 works)
 * @{
 */
#define WURX_WURX1_0__WURX1_MAX_REP__SHIFT                                   28
#define WURX_WURX1_0__WURX1_MAX_REP__WIDTH                                    3
#define WURX_WURX1_0__WURX1_MAX_REP__MASK                           0x70000000U
#define WURX_WURX1_0__WURX1_MAX_REP__READ(src) \
                    (((uint32_t)(src)\
                    & 0x70000000U) >> 28)
#define WURX_WURX1_0__WURX1_MAX_REP__WRITE(src) \
                    (((uint32_t)(src)\
                    << 28) & 0x70000000U)
#define WURX_WURX1_0__WURX1_MAX_REP__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x70000000U) | (((uint32_t)(src) <<\
                    28) & 0x70000000U)
#define WURX_WURX1_0__WURX1_MAX_REP__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 28) & ~0x70000000U)))
#define WURX_WURX1_0__WURX1_MAX_REP__RESET_VALUE                    0x00000001U
/** @} */

/* macros for field wurx1_clk_freq */
/**
 * @defgroup pmu_wurx_regs_core_wurx1_clk_freq_field wurx1_clk_freq_field
 * @brief macros for field wurx1_clk_freq
 * @details 0 - 16KHz, 1- 32KHz
 * @{
 */
#define WURX_WURX1_0__WURX1_CLK_FREQ__SHIFT                                  31
#define WURX_WURX1_0__WURX1_CLK_FREQ__WIDTH                                   1
#define WURX_WURX1_0__WURX1_CLK_FREQ__MASK                          0x80000000U
#define WURX_WURX1_0__WURX1_CLK_FREQ__READ(src) \
                    (((uint32_t)(src)\
                    & 0x80000000U) >> 31)
#define WURX_WURX1_0__WURX1_CLK_FREQ__WRITE(src) \
                    (((uint32_t)(src)\
                    << 31) & 0x80000000U)
#define WURX_WURX1_0__WURX1_CLK_FREQ__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x80000000U) | (((uint32_t)(src) <<\
                    31) & 0x80000000U)
#define WURX_WURX1_0__WURX1_CLK_FREQ__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 31) & ~0x80000000U)))
#define WURX_WURX1_0__WURX1_CLK_FREQ__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x80000000U) | ((uint32_t)(1) << 31)
#define WURX_WURX1_0__WURX1_CLK_FREQ__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x80000000U) | ((uint32_t)(0) << 31)
#define WURX_WURX1_0__WURX1_CLK_FREQ__RESET_VALUE                   0x00000000U
/** @} */
#define WURX_WURX1_0__TYPE                                             uint32_t
#define WURX_WURX1_0__READ                                          0xffffffffU
#define WURX_WURX1_0__WRITE                                         0xffffffffU
#define WURX_WURX1_0__PRESERVED                                     0x00000000U
#define WURX_WURX1_0__RESET_VALUE                                   0x110c8001U

#endif /* __WURX_WURX1_0_MACRO__ */

/** @} end of wurx1_0 */

/* macros for BlueprintGlobalNameSpace::WURX_wurx1_1 */
/**
 * @defgroup pmu_wurx_regs_core_wurx1_1 wurx1_1
 * @brief Wake-up RX settings, algorithm 1 definitions.
 * @{
 */
#ifndef __WURX_WURX1_1_MACRO__
#define __WURX_WURX1_1_MACRO__

/* macros for field wurx1_thr_timer_max */
/**
 * @defgroup pmu_wurx_regs_core_wurx1_thr_timer_max_field wurx1_thr_timer_max_field
 * @brief macros for field wurx1_thr_timer_max
 * @details determines thr check window
 * @{
 */
#define WURX_WURX1_1__WURX1_THR_TIMER_MAX__SHIFT                              0
#define WURX_WURX1_1__WURX1_THR_TIMER_MAX__WIDTH                             12
#define WURX_WURX1_1__WURX1_THR_TIMER_MAX__MASK                     0x00000fffU
#define WURX_WURX1_1__WURX1_THR_TIMER_MAX__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000fffU)
#define WURX_WURX1_1__WURX1_THR_TIMER_MAX__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000fffU)
#define WURX_WURX1_1__WURX1_THR_TIMER_MAX__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000fffU) | ((uint32_t)(src) &\
                    0x00000fffU)
#define WURX_WURX1_1__WURX1_THR_TIMER_MAX__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000fffU)))
#define WURX_WURX1_1__WURX1_THR_TIMER_MAX__RESET_VALUE              0x0000010bU
/** @} */
#define WURX_WURX1_1__TYPE                                             uint32_t
#define WURX_WURX1_1__READ                                          0x00000fffU
#define WURX_WURX1_1__WRITE                                         0x00000fffU
#define WURX_WURX1_1__PRESERVED                                     0x00000000U
#define WURX_WURX1_1__RESET_VALUE                                   0x0000010bU

#endif /* __WURX_WURX1_1_MACRO__ */

/** @} end of wurx1_1 */

/* macros for BlueprintGlobalNameSpace::WURX_wurx1_rb */
/**
 * @defgroup pmu_wurx_regs_core_wurx1_rb wurx1_rb
 * @brief Wake-up RX read-out bits, algorithm 1 definitions.
 * @{
 */
#ifndef __WURX_WURX1_RB_MACRO__
#define __WURX_WURX1_RB_MACRO__

/* macros for field analog_cal */
/**
 * @defgroup pmu_wurx_regs_core_analog_cal_field analog_cal_field
 * @brief macros for field analog_cal
 * @details read back analog cal value --> make it common for both algorithms
 * @{
 */
#define WURX_WURX1_RB__ANALOG_CAL__SHIFT                                      0
#define WURX_WURX1_RB__ANALOG_CAL__WIDTH                                      8
#define WURX_WURX1_RB__ANALOG_CAL__MASK                             0x000000ffU
#define WURX_WURX1_RB__ANALOG_CAL__READ(src)    ((uint32_t)(src) & 0x000000ffU)
#define WURX_WURX1_RB__ANALOG_CAL__RESET_VALUE                      0x00000000U
/** @} */

/* macros for field cnt_det0 */
/**
 * @defgroup pmu_wurx_regs_core_cnt_det0_field cnt_det0_field
 * @brief macros for field cnt_det0
 * @details number of wake_det[0]
 * @{
 */
#define WURX_WURX1_RB__CNT_DET0__SHIFT                                        8
#define WURX_WURX1_RB__CNT_DET0__WIDTH                                       10
#define WURX_WURX1_RB__CNT_DET0__MASK                               0x0003ff00U
#define WURX_WURX1_RB__CNT_DET0__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0003ff00U) >> 8)
#define WURX_WURX1_RB__CNT_DET0__RESET_VALUE                        0x00000000U
/** @} */

/* macros for field cnt_det1 */
/**
 * @defgroup pmu_wurx_regs_core_cnt_det1_field cnt_det1_field
 * @brief macros for field cnt_det1
 * @details number of wake_det[1]
 * @{
 */
#define WURX_WURX1_RB__CNT_DET1__SHIFT                                       18
#define WURX_WURX1_RB__CNT_DET1__WIDTH                                       10
#define WURX_WURX1_RB__CNT_DET1__MASK                               0x0ffc0000U
#define WURX_WURX1_RB__CNT_DET1__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0ffc0000U) >> 18)
#define WURX_WURX1_RB__CNT_DET1__RESET_VALUE                        0x00000000U
/** @} */
#define WURX_WURX1_RB__TYPE                                            uint32_t
#define WURX_WURX1_RB__READ                                         0x0fffffffU
#define WURX_WURX1_RB__PRESERVED                                    0x00000000U
#define WURX_WURX1_RB__RESET_VALUE                                  0x00000000U

#endif /* __WURX_WURX1_RB_MACRO__ */

/** @} end of wurx1_rb */

/* macros for BlueprintGlobalNameSpace::WURX_wurx_spare */
/**
 * @defgroup pmu_wurx_regs_core_wurx_spare wurx_spare
 * @brief Wake-up RX spare bits definitions.
 * @{
 */
#ifndef __WURX_WURX_SPARE_MACRO__
#define __WURX_WURX_SPARE_MACRO__

/* macros for field spares */
/**
 * @defgroup pmu_wurx_regs_core_spares_field spares_field
 * @brief macros for field spares
 * @details wurx local register spare bits
 * @{
 */
#define WURX_WURX_SPARE__SPARES__SHIFT                                        0
#define WURX_WURX_SPARE__SPARES__WIDTH                                       32
#define WURX_WURX_SPARE__SPARES__MASK                               0xffffffffU
#define WURX_WURX_SPARE__SPARES__READ(src)      ((uint32_t)(src) & 0xffffffffU)
#define WURX_WURX_SPARE__SPARES__WRITE(src)     ((uint32_t)(src) & 0xffffffffU)
#define WURX_WURX_SPARE__SPARES__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffffffffU) | ((uint32_t)(src) &\
                    0xffffffffU)
#define WURX_WURX_SPARE__SPARES__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0xffffffffU)))
#define WURX_WURX_SPARE__SPARES__RESET_VALUE                        0x00000000U
/** @} */
#define WURX_WURX_SPARE__TYPE                                          uint32_t
#define WURX_WURX_SPARE__READ                                       0xffffffffU
#define WURX_WURX_SPARE__WRITE                                      0xffffffffU
#define WURX_WURX_SPARE__PRESERVED                                  0x00000000U
#define WURX_WURX_SPARE__RESET_VALUE                                0x00000000U

#endif /* __WURX_WURX_SPARE_MACRO__ */

/** @} end of wurx_spare */

/* macros for BlueprintGlobalNameSpace::WURX_core_id */
/**
 * @defgroup pmu_wurx_regs_core_core_id core_id
 * @brief Core ID definitions.
 * @{
 */
#ifndef __WURX_CORE_ID_MACRO__
#define __WURX_CORE_ID_MACRO__

/* macros for field id */
/**
 * @defgroup pmu_wurx_regs_core_id_field id_field
 * @brief macros for field id
 * @details WURX in ASCII
 * @{
 */
#define WURX_CORE_ID__ID__SHIFT                                               0
#define WURX_CORE_ID__ID__WIDTH                                              32
#define WURX_CORE_ID__ID__MASK                                      0xffffffffU
#define WURX_CORE_ID__ID__READ(src)             ((uint32_t)(src) & 0xffffffffU)
#define WURX_CORE_ID__ID__RESET_VALUE                               0x57555258U
/** @} */
#define WURX_CORE_ID__TYPE                                             uint32_t
#define WURX_CORE_ID__READ                                          0xffffffffU
#define WURX_CORE_ID__PRESERVED                                     0x00000000U
#define WURX_CORE_ID__RESET_VALUE                                   0x57555258U

#endif /* __WURX_CORE_ID_MACRO__ */

/** @} end of core_id */

/** @} end of PMU_WURX_REGS_CORE */
#endif /* __REG_PMU_WURX_REGS_CORE_H__ */
