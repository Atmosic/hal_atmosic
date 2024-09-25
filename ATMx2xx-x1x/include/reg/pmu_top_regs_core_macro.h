/*                                                                           */
/* File:       pmu_top_regs_core_macro.h                                     */
/*                                                                           */
/* Arguments:  /cad/tools/cadence/blueprint_3.7.5/Linux-64bit/blueprint -eval*/
/*             $DEFINE_PROPERTY=1; -ansic pmu_top_regs_core.rdl              */
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


#ifndef __REG_PMU_TOP_REGS_CORE_H__
#define __REG_PMU_TOP_REGS_CORE_H__

/**
 *****************************************************************************
 * @defgroup PMU_TOP_REGS_CORE pmu_top_regs_core
 * @ingroup AT_REG
 * @brief pmu_top_regs_core definitions.
 * @{
 *****************************************************************************
 */

/* macros for BlueprintGlobalNameSpace::PMU_pmu0 */
/**
 * @defgroup pmu_top_regs_core_pmu0 pmu0
 * @brief timer_target_lsb - written by software definitions.
 * @{
 */
#ifndef __PMU_PMU0_MACRO__
#define __PMU_PMU0_MACRO__

/* macros for field timer_target_lsb */
/**
 * @defgroup pmu_top_regs_core_timer_target_lsb_field timer_target_lsb_field
 * @brief macros for field timer_target_lsb
 * @details written by software, target value to wake up from in soc-off mode  pmu starts from 0 and counts 32KHz clock cycles until it reaches this value to come out of soc-off mode if how2wkup reg is set to 1xx  31 lsb bits
 * @{
 */
#define PMU_PMU0__TIMER_TARGET_LSB__SHIFT                                     0
#define PMU_PMU0__TIMER_TARGET_LSB__WIDTH                                    32
#define PMU_PMU0__TIMER_TARGET_LSB__MASK                            0xffffffffU
#define PMU_PMU0__TIMER_TARGET_LSB__READ(src)   ((uint32_t)(src) & 0xffffffffU)
#define PMU_PMU0__TIMER_TARGET_LSB__WRITE(src)  ((uint32_t)(src) & 0xffffffffU)
#define PMU_PMU0__TIMER_TARGET_LSB__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffffffffU) | ((uint32_t)(src) &\
                    0xffffffffU)
#define PMU_PMU0__TIMER_TARGET_LSB__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0xffffffffU)))
#define PMU_PMU0__TIMER_TARGET_LSB__RESET_VALUE                     0x00000001U
/** @} */
#define PMU_PMU0__TYPE                                                 uint32_t
#define PMU_PMU0__READ                                              0xffffffffU
#define PMU_PMU0__WRITE                                             0xffffffffU
#define PMU_PMU0__PRESERVED                                         0x00000000U
#define PMU_PMU0__RESET_VALUE                                       0x00000001U

#endif /* __PMU_PMU0_MACRO__ */

/** @} end of pmu0 */

/* macros for BlueprintGlobalNameSpace::PMU_pmu1 */
/**
 * @defgroup pmu_top_regs_core_pmu1 pmu1
 * @brief software controlled registers definitions.
 * @{
 */
#ifndef __PMU_PMU1_MACRO__
#define __PMU_PMU1_MACRO__

/* macros for field timer_target_msb */
/**
 * @defgroup pmu_top_regs_core_timer_target_msb_field timer_target_msb_field
 * @brief macros for field timer_target_msb
 * @details written by software, target value to wake up from in soc-off mode  pmu starts from 0 and counts 32KHz clock cycles until it reaches this value to come out of soc-off mode if how2wkup reg is set to 1xx  8 msb bits
 * @{
 */
#define PMU_PMU1__TIMER_TARGET_MSB__SHIFT                                     0
#define PMU_PMU1__TIMER_TARGET_MSB__WIDTH                                     8
#define PMU_PMU1__TIMER_TARGET_MSB__MASK                            0x000000ffU
#define PMU_PMU1__TIMER_TARGET_MSB__READ(src)   ((uint32_t)(src) & 0x000000ffU)
#define PMU_PMU1__TIMER_TARGET_MSB__WRITE(src)  ((uint32_t)(src) & 0x000000ffU)
#define PMU_PMU1__TIMER_TARGET_MSB__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define PMU_PMU1__TIMER_TARGET_MSB__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000000ffU)))
#define PMU_PMU1__TIMER_TARGET_MSB__RESET_VALUE                     0x00000000U
/** @} */

/* macros for field how2wkup_pin */
/**
 * @defgroup pmu_top_regs_core_how2wkup_pin_field how2wkup_pin_field
 * @brief macros for field how2wkup_pin
 * @details written by software - xx1: pin, x1x: lpcomp, 1xx: timer
 * @{
 */
#define PMU_PMU1__HOW2WKUP_PIN__SHIFT                                         8
#define PMU_PMU1__HOW2WKUP_PIN__WIDTH                                         1
#define PMU_PMU1__HOW2WKUP_PIN__MASK                                0x00000100U
#define PMU_PMU1__HOW2WKUP_PIN__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000100U) >> 8)
#define PMU_PMU1__HOW2WKUP_PIN__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x00000100U)
#define PMU_PMU1__HOW2WKUP_PIN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000100U) | (((uint32_t)(src) <<\
                    8) & 0x00000100U)
#define PMU_PMU1__HOW2WKUP_PIN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x00000100U)))
#define PMU_PMU1__HOW2WKUP_PIN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000100U) | ((uint32_t)(1) << 8)
#define PMU_PMU1__HOW2WKUP_PIN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000100U) | ((uint32_t)(0) << 8)
#define PMU_PMU1__HOW2WKUP_PIN__RESET_VALUE                         0x00000000U
/** @} */

/* macros for field how2wkup_lpcomp */
/**
 * @defgroup pmu_top_regs_core_how2wkup_lpcomp_field how2wkup_lpcomp_field
 * @brief macros for field how2wkup_lpcomp
 * @details written by software - xx1: pin, x1x: lpcomp, 1xx: timer
 * @{
 */
#define PMU_PMU1__HOW2WKUP_LPCOMP__SHIFT                                      9
#define PMU_PMU1__HOW2WKUP_LPCOMP__WIDTH                                      1
#define PMU_PMU1__HOW2WKUP_LPCOMP__MASK                             0x00000200U
#define PMU_PMU1__HOW2WKUP_LPCOMP__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000200U) >> 9)
#define PMU_PMU1__HOW2WKUP_LPCOMP__WRITE(src) \
                    (((uint32_t)(src)\
                    << 9) & 0x00000200U)
#define PMU_PMU1__HOW2WKUP_LPCOMP__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000200U) | (((uint32_t)(src) <<\
                    9) & 0x00000200U)
#define PMU_PMU1__HOW2WKUP_LPCOMP__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 9) & ~0x00000200U)))
#define PMU_PMU1__HOW2WKUP_LPCOMP__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000200U) | ((uint32_t)(1) << 9)
#define PMU_PMU1__HOW2WKUP_LPCOMP__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000200U) | ((uint32_t)(0) << 9)
#define PMU_PMU1__HOW2WKUP_LPCOMP__RESET_VALUE                      0x00000000U
/** @} */

/* macros for field how2wkup_timer */
/**
 * @defgroup pmu_top_regs_core_how2wkup_timer_field how2wkup_timer_field
 * @brief macros for field how2wkup_timer
 * @details written by software - xx1: pin, x1x: lpcomp, 1xx: timer
 * @{
 */
#define PMU_PMU1__HOW2WKUP_TIMER__SHIFT                                      10
#define PMU_PMU1__HOW2WKUP_TIMER__WIDTH                                       1
#define PMU_PMU1__HOW2WKUP_TIMER__MASK                              0x00000400U
#define PMU_PMU1__HOW2WKUP_TIMER__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000400U) >> 10)
#define PMU_PMU1__HOW2WKUP_TIMER__WRITE(src) \
                    (((uint32_t)(src)\
                    << 10) & 0x00000400U)
#define PMU_PMU1__HOW2WKUP_TIMER__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000400U) | (((uint32_t)(src) <<\
                    10) & 0x00000400U)
#define PMU_PMU1__HOW2WKUP_TIMER__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 10) & ~0x00000400U)))
#define PMU_PMU1__HOW2WKUP_TIMER__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000400U) | ((uint32_t)(1) << 10)
#define PMU_PMU1__HOW2WKUP_TIMER__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000400U) | ((uint32_t)(0) << 10)
#define PMU_PMU1__HOW2WKUP_TIMER__RESET_VALUE                       0x00000001U
/** @} */

/* macros for field lpcomp_in_sel */
/**
 * @defgroup pmu_top_regs_core_lpcomp_in_sel_field lpcomp_in_sel_field
 * @brief macros for field lpcomp_in_sel
 * @details 0: P12, 1: P11
 * @{
 */
#define PMU_PMU1__LPCOMP_IN_SEL__SHIFT                                       11
#define PMU_PMU1__LPCOMP_IN_SEL__WIDTH                                        1
#define PMU_PMU1__LPCOMP_IN_SEL__MASK                               0x00000800U
#define PMU_PMU1__LPCOMP_IN_SEL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000800U) >> 11)
#define PMU_PMU1__LPCOMP_IN_SEL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 11) & 0x00000800U)
#define PMU_PMU1__LPCOMP_IN_SEL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000800U) | (((uint32_t)(src) <<\
                    11) & 0x00000800U)
#define PMU_PMU1__LPCOMP_IN_SEL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 11) & ~0x00000800U)))
#define PMU_PMU1__LPCOMP_IN_SEL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000800U) | ((uint32_t)(1) << 11)
#define PMU_PMU1__LPCOMP_IN_SEL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000800U) | ((uint32_t)(0) << 11)
#define PMU_PMU1__LPCOMP_IN_SEL__RESET_VALUE                        0x00000000U
/** @} */

/* macros for field compout_mux_sel */
/**
 * @defgroup pmu_top_regs_core_compout_mux_sel_field compout_mux_sel_field
 * @brief macros for field compout_mux_sel
 * @details select which test signal goes to pin_mux  3'b000: VstoreGoodtoTX  3'b001: BrownOutVbat  3'b010: VstoreGoodtoEner  3'b011: VstoreHarvStop  3'b100: mpptstartvharv  3'b101: reconfharvstage  3'b110: lpcomp_out  3'b111: pinedge_det
 * @{
 */
#define PMU_PMU1__COMPOUT_MUX_SEL__SHIFT                                     12
#define PMU_PMU1__COMPOUT_MUX_SEL__WIDTH                                      3
#define PMU_PMU1__COMPOUT_MUX_SEL__MASK                             0x00007000U
#define PMU_PMU1__COMPOUT_MUX_SEL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00007000U) >> 12)
#define PMU_PMU1__COMPOUT_MUX_SEL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 12) & 0x00007000U)
#define PMU_PMU1__COMPOUT_MUX_SEL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00007000U) | (((uint32_t)(src) <<\
                    12) & 0x00007000U)
#define PMU_PMU1__COMPOUT_MUX_SEL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 12) & ~0x00007000U)))
#define PMU_PMU1__COMPOUT_MUX_SEL__RESET_VALUE                      0x00000000U
/** @} */

/* macros for field atb_pad_en */
/**
 * @defgroup pmu_top_regs_core_atb_pad_en_field atb_pad_en_field
 * @brief macros for field atb_pad_en
 * @details atb pad enable
 * @{
 */
#define PMU_PMU1__ATB_PAD_EN__SHIFT                                          15
#define PMU_PMU1__ATB_PAD_EN__WIDTH                                           1
#define PMU_PMU1__ATB_PAD_EN__MASK                                  0x00008000U
#define PMU_PMU1__ATB_PAD_EN__READ(src) (((uint32_t)(src) & 0x00008000U) >> 15)
#define PMU_PMU1__ATB_PAD_EN__WRITE(src) \
                    (((uint32_t)(src)\
                    << 15) & 0x00008000U)
#define PMU_PMU1__ATB_PAD_EN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00008000U) | (((uint32_t)(src) <<\
                    15) & 0x00008000U)
#define PMU_PMU1__ATB_PAD_EN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 15) & ~0x00008000U)))
#define PMU_PMU1__ATB_PAD_EN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00008000U) | ((uint32_t)(1) << 15)
#define PMU_PMU1__ATB_PAD_EN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00008000U) | ((uint32_t)(0) << 15)
#define PMU_PMU1__ATB_PAD_EN__RESET_VALUE                           0x00000000U
/** @} */

/* macros for field xofaststart */
/**
 * @defgroup pmu_top_regs_core_xofaststart_field xofaststart_field
 * @brief macros for field xofaststart
 * @details enable fast start for xtal
 * @{
 */
#define PMU_PMU1__XOFASTSTART__SHIFT                                         16
#define PMU_PMU1__XOFASTSTART__WIDTH                                          3
#define PMU_PMU1__XOFASTSTART__MASK                                 0x00070000U
#define PMU_PMU1__XOFASTSTART__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00070000U) >> 16)
#define PMU_PMU1__XOFASTSTART__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00070000U)
#define PMU_PMU1__XOFASTSTART__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00070000U) | (((uint32_t)(src) <<\
                    16) & 0x00070000U)
#define PMU_PMU1__XOFASTSTART__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00070000U)))
#define PMU_PMU1__XOFASTSTART__RESET_VALUE                          0x00000006U
/** @} */

/* macros for field xosettle */
/**
 * @defgroup pmu_top_regs_core_xosettle_field xosettle_field
 * @brief macros for field xosettle
 * @details setting time for xtal
 * @{
 */
#define PMU_PMU1__XOSETTLE__SHIFT                                            19
#define PMU_PMU1__XOSETTLE__WIDTH                                             6
#define PMU_PMU1__XOSETTLE__MASK                                    0x01f80000U
#define PMU_PMU1__XOSETTLE__READ(src)   (((uint32_t)(src) & 0x01f80000U) >> 19)
#define PMU_PMU1__XOSETTLE__WRITE(src)  (((uint32_t)(src) << 19) & 0x01f80000U)
#define PMU_PMU1__XOSETTLE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x01f80000U) | (((uint32_t)(src) <<\
                    19) & 0x01f80000U)
#define PMU_PMU1__XOSETTLE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 19) & ~0x01f80000U)))
#define PMU_PMU1__XOSETTLE__RESET_VALUE                             0x00000010U
/** @} */

/* macros for field xtal_pwd */
/**
 * @defgroup pmu_top_regs_core_xtal_pwd_field xtal_pwd_field
 * @brief macros for field xtal_pwd
 * @details default is always on unless this is set or ext pwd is set
 * @{
 */
#define PMU_PMU1__XTAL_PWD__SHIFT                                            25
#define PMU_PMU1__XTAL_PWD__WIDTH                                             1
#define PMU_PMU1__XTAL_PWD__MASK                                    0x02000000U
#define PMU_PMU1__XTAL_PWD__READ(src)   (((uint32_t)(src) & 0x02000000U) >> 25)
#define PMU_PMU1__XTAL_PWD__WRITE(src)  (((uint32_t)(src) << 25) & 0x02000000U)
#define PMU_PMU1__XTAL_PWD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x02000000U) | (((uint32_t)(src) <<\
                    25) & 0x02000000U)
#define PMU_PMU1__XTAL_PWD__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 25) & ~0x02000000U)))
#define PMU_PMU1__XTAL_PWD__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x02000000U) | ((uint32_t)(1) << 25)
#define PMU_PMU1__XTAL_PWD__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x02000000U) | ((uint32_t)(0) << 25)
#define PMU_PMU1__XTAL_PWD__RESET_VALUE                             0x00000000U
/** @} */
#define PMU_PMU1__TYPE                                                 uint32_t
#define PMU_PMU1__READ                                              0x03ffffffU
#define PMU_PMU1__WRITE                                             0x03ffffffU
#define PMU_PMU1__PRESERVED                                         0x00000000U
#define PMU_PMU1__RESET_VALUE                                       0x00860400U

#endif /* __PMU_PMU1_MACRO__ */

/** @} end of pmu1 */

/* macros for BlueprintGlobalNameSpace::PMU_pmu2 */
/**
 * @defgroup pmu_top_regs_core_pmu2 pmu2
 * @brief customer writes definitions.
 * @{
 */
#ifndef __PMU_PMU2_MACRO__
#define __PMU_PMU2_MACRO__

/* macros for field xocapout */
/**
 * @defgroup pmu_top_regs_core_xocapout_field xocapout_field
 * @brief macros for field xocapout
 * @details cap on board
 * @{
 */
#define PMU_PMU2__XOCAPOUT__SHIFT                                             0
#define PMU_PMU2__XOCAPOUT__WIDTH                                             5
#define PMU_PMU2__XOCAPOUT__MASK                                    0x0000001fU
#define PMU_PMU2__XOCAPOUT__READ(src)           ((uint32_t)(src) & 0x0000001fU)
#define PMU_PMU2__XOCAPOUT__WRITE(src)          ((uint32_t)(src) & 0x0000001fU)
#define PMU_PMU2__XOCAPOUT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000001fU) | ((uint32_t)(src) &\
                    0x0000001fU)
#define PMU_PMU2__XOCAPOUT__VERIFY(src)   (!(((uint32_t)(src) & ~0x0000001fU)))
#define PMU_PMU2__XOCAPOUT__RESET_VALUE                             0x0000000cU
/** @} */

/* macros for field xocapin */
/**
 * @defgroup pmu_top_regs_core_xocapin_field xocapin_field
 * @brief macros for field xocapin
 * @details cap on board
 * @{
 */
#define PMU_PMU2__XOCAPIN__SHIFT                                              5
#define PMU_PMU2__XOCAPIN__WIDTH                                              5
#define PMU_PMU2__XOCAPIN__MASK                                     0x000003e0U
#define PMU_PMU2__XOCAPIN__READ(src)     (((uint32_t)(src) & 0x000003e0U) >> 5)
#define PMU_PMU2__XOCAPIN__WRITE(src)    (((uint32_t)(src) << 5) & 0x000003e0U)
#define PMU_PMU2__XOCAPIN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000003e0U) | (((uint32_t)(src) <<\
                    5) & 0x000003e0U)
#define PMU_PMU2__XOCAPIN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 5) & ~0x000003e0U)))
#define PMU_PMU2__XOCAPIN__RESET_VALUE                              0x0000000cU
/** @} */

/* macros for field RGuserconf */
/**
 * @defgroup pmu_top_regs_core_RGuserconf_field RGuserconf_field
 * @brief macros for field RGuserconf
 * @details 1: Harvest 1 rectifier, 0: Harvest 2 rectifier
 * @{
 */
#define PMU_PMU2__RGUSERCONF__SHIFT                                          10
#define PMU_PMU2__RGUSERCONF__WIDTH                                           1
#define PMU_PMU2__RGUSERCONF__MASK                                  0x00000400U
#define PMU_PMU2__RGUSERCONF__READ(src) (((uint32_t)(src) & 0x00000400U) >> 10)
#define PMU_PMU2__RGUSERCONF__WRITE(src) \
                    (((uint32_t)(src)\
                    << 10) & 0x00000400U)
#define PMU_PMU2__RGUSERCONF__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000400U) | (((uint32_t)(src) <<\
                    10) & 0x00000400U)
#define PMU_PMU2__RGUSERCONF__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 10) & ~0x00000400U)))
#define PMU_PMU2__RGUSERCONF__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000400U) | ((uint32_t)(1) << 10)
#define PMU_PMU2__RGUSERCONF__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000400U) | ((uint32_t)(0) << 10)
#define PMU_PMU2__RGUSERCONF__RESET_VALUE                           0x00000001U
/** @} */

/* macros for field rect_stage_default */
/**
 * @defgroup pmu_top_regs_core_rect_stage_default_field rect_stage_default_field
 * @brief macros for field rect_stage_default
 * @details default number of rectifier stages: 2^i, i=0:3
 * @{
 */
#define PMU_PMU2__RECT_STAGE_DEFAULT__SHIFT                                  11
#define PMU_PMU2__RECT_STAGE_DEFAULT__WIDTH                                   2
#define PMU_PMU2__RECT_STAGE_DEFAULT__MASK                          0x00001800U
#define PMU_PMU2__RECT_STAGE_DEFAULT__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00001800U) >> 11)
#define PMU_PMU2__RECT_STAGE_DEFAULT__WRITE(src) \
                    (((uint32_t)(src)\
                    << 11) & 0x00001800U)
#define PMU_PMU2__RECT_STAGE_DEFAULT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00001800U) | (((uint32_t)(src) <<\
                    11) & 0x00001800U)
#define PMU_PMU2__RECT_STAGE_DEFAULT__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 11) & ~0x00001800U)))
#define PMU_PMU2__RECT_STAGE_DEFAULT__RESET_VALUE                   0x00000003U
/** @} */

/* macros for field rect_counter_disable */
/**
 * @defgroup pmu_top_regs_core_rect_counter_disable_field rect_counter_disable_field
 * @brief macros for field rect_counter_disable
 * @details disable dynamic control of rectifier stages
 * @{
 */
#define PMU_PMU2__RECT_COUNTER_DISABLE__SHIFT                                13
#define PMU_PMU2__RECT_COUNTER_DISABLE__WIDTH                                 1
#define PMU_PMU2__RECT_COUNTER_DISABLE__MASK                        0x00002000U
#define PMU_PMU2__RECT_COUNTER_DISABLE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00002000U) >> 13)
#define PMU_PMU2__RECT_COUNTER_DISABLE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 13) & 0x00002000U)
#define PMU_PMU2__RECT_COUNTER_DISABLE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00002000U) | (((uint32_t)(src) <<\
                    13) & 0x00002000U)
#define PMU_PMU2__RECT_COUNTER_DISABLE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 13) & ~0x00002000U)))
#define PMU_PMU2__RECT_COUNTER_DISABLE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00002000U) | ((uint32_t)(1) << 13)
#define PMU_PMU2__RECT_COUNTER_DISABLE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00002000U) | ((uint32_t)(0) << 13)
#define PMU_PMU2__RECT_COUNTER_DISABLE__RESET_VALUE                 0x00000001U
/** @} */

/* macros for field disable_store */
/**
 * @defgroup pmu_top_regs_core_disable_store_field disable_store_field
 * @brief macros for field disable_store
 * @details disable store as a source
 * @{
 */
#define PMU_PMU2__DISABLE_STORE__SHIFT                                       14
#define PMU_PMU2__DISABLE_STORE__WIDTH                                        1
#define PMU_PMU2__DISABLE_STORE__MASK                               0x00004000U
#define PMU_PMU2__DISABLE_STORE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00004000U) >> 14)
#define PMU_PMU2__DISABLE_STORE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 14) & 0x00004000U)
#define PMU_PMU2__DISABLE_STORE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00004000U) | (((uint32_t)(src) <<\
                    14) & 0x00004000U)
#define PMU_PMU2__DISABLE_STORE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 14) & ~0x00004000U)))
#define PMU_PMU2__DISABLE_STORE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00004000U) | ((uint32_t)(1) << 14)
#define PMU_PMU2__DISABLE_STORE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00004000U) | ((uint32_t)(0) << 14)
#define PMU_PMU2__DISABLE_STORE__RESET_VALUE                        0x00000000U
/** @} */
#define PMU_PMU2__TYPE                                                 uint32_t
#define PMU_PMU2__READ                                              0x00007fffU
#define PMU_PMU2__WRITE                                             0x00007fffU
#define PMU_PMU2__PRESERVED                                         0x00000000U
#define PMU_PMU2__RESET_VALUE                                       0x00003d8cU

#endif /* __PMU_PMU2_MACRO__ */

/** @} end of pmu2 */

/* macros for BlueprintGlobalNameSpace::PMU_pmu2a */
/**
 * @defgroup pmu_top_regs_core_pmu2a pmu2a
 * @brief ate definitions.
 * @{
 */
#ifndef __PMU_PMU2A_MACRO__
#define __PMU_PMU2A_MACRO__

/* macros for field xoagc_en */
/**
 * @defgroup pmu_top_regs_core_xoagc_en_field xoagc_en_field
 * @brief macros for field xoagc_en
 * @details xoagc_en
 * @{
 */
#define PMU_PMU2A__XOAGC_EN__SHIFT                                            0
#define PMU_PMU2A__XOAGC_EN__WIDTH                                            1
#define PMU_PMU2A__XOAGC_EN__MASK                                   0x00000001U
#define PMU_PMU2A__XOAGC_EN__READ(src)          ((uint32_t)(src) & 0x00000001U)
#define PMU_PMU2A__XOAGC_EN__WRITE(src)         ((uint32_t)(src) & 0x00000001U)
#define PMU_PMU2A__XOAGC_EN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define PMU_PMU2A__XOAGC_EN__VERIFY(src)  (!(((uint32_t)(src) & ~0x00000001U)))
#define PMU_PMU2A__XOAGC_EN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define PMU_PMU2A__XOAGC_EN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define PMU_PMU2A__XOAGC_EN__RESET_VALUE                            0x00000001U
/** @} */

/* macros for field xobias */
/**
 * @defgroup pmu_top_regs_core_xobias_field xobias_field
 * @brief macros for field xobias
 * @details explain move to ate
 * @{
 */
#define PMU_PMU2A__XOBIAS__SHIFT                                              1
#define PMU_PMU2A__XOBIAS__WIDTH                                              4
#define PMU_PMU2A__XOBIAS__MASK                                     0x0000001eU
#define PMU_PMU2A__XOBIAS__READ(src)     (((uint32_t)(src) & 0x0000001eU) >> 1)
#define PMU_PMU2A__XOBIAS__WRITE(src)    (((uint32_t)(src) << 1) & 0x0000001eU)
#define PMU_PMU2A__XOBIAS__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000001eU) | (((uint32_t)(src) <<\
                    1) & 0x0000001eU)
#define PMU_PMU2A__XOBIAS__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x0000001eU)))
#define PMU_PMU2A__XOBIAS__RESET_VALUE                              0x0000000cU
/** @} */

/* macros for field rcosc32Kfreq */
/**
 * @defgroup pmu_top_regs_core_rcosc32Kfreq_field rcosc32Kfreq_field
 * @brief macros for field rcosc32Kfreq
 * @details explain move to ate
 * @{
 */
#define PMU_PMU2A__RCOSC32KFREQ__SHIFT                                        5
#define PMU_PMU2A__RCOSC32KFREQ__WIDTH                                        4
#define PMU_PMU2A__RCOSC32KFREQ__MASK                               0x000001e0U
#define PMU_PMU2A__RCOSC32KFREQ__READ(src) \
                    (((uint32_t)(src)\
                    & 0x000001e0U) >> 5)
#define PMU_PMU2A__RCOSC32KFREQ__WRITE(src) \
                    (((uint32_t)(src)\
                    << 5) & 0x000001e0U)
#define PMU_PMU2A__RCOSC32KFREQ__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000001e0U) | (((uint32_t)(src) <<\
                    5) & 0x000001e0U)
#define PMU_PMU2A__RCOSC32KFREQ__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 5) & ~0x000001e0U)))
#define PMU_PMU2A__RCOSC32KFREQ__RESET_VALUE                        0x0000000bU
/** @} */

/* macros for field rcosc32Kmode */
/**
 * @defgroup pmu_top_regs_core_rcosc32Kmode_field rcosc32Kmode_field
 * @brief macros for field rcosc32Kmode
 * @details explain move to ate
 * @{
 */
#define PMU_PMU2A__RCOSC32KMODE__SHIFT                                        9
#define PMU_PMU2A__RCOSC32KMODE__WIDTH                                        1
#define PMU_PMU2A__RCOSC32KMODE__MASK                               0x00000200U
#define PMU_PMU2A__RCOSC32KMODE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000200U) >> 9)
#define PMU_PMU2A__RCOSC32KMODE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 9) & 0x00000200U)
#define PMU_PMU2A__RCOSC32KMODE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000200U) | (((uint32_t)(src) <<\
                    9) & 0x00000200U)
#define PMU_PMU2A__RCOSC32KMODE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 9) & ~0x00000200U)))
#define PMU_PMU2A__RCOSC32KMODE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000200U) | ((uint32_t)(1) << 9)
#define PMU_PMU2A__RCOSC32KMODE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000200U) | ((uint32_t)(0) << 9)
#define PMU_PMU2A__RCOSC32KMODE__RESET_VALUE                        0x00000000U
/** @} */

/* macros for field ctr_refBG_ldo */
/**
 * @defgroup pmu_top_regs_core_ctr_refBG_ldo_field ctr_refBG_ldo_field
 * @brief macros for field ctr_refBG_ldo
 * @details ref level for ldo: Vref=25*(24+i)mV, i=0:15
 * @{
 */
#define PMU_PMU2A__CTR_REFBG_LDO__SHIFT                                      10
#define PMU_PMU2A__CTR_REFBG_LDO__WIDTH                                       4
#define PMU_PMU2A__CTR_REFBG_LDO__MASK                              0x00003c00U
#define PMU_PMU2A__CTR_REFBG_LDO__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00003c00U) >> 10)
#define PMU_PMU2A__CTR_REFBG_LDO__WRITE(src) \
                    (((uint32_t)(src)\
                    << 10) & 0x00003c00U)
#define PMU_PMU2A__CTR_REFBG_LDO__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00003c00U) | (((uint32_t)(src) <<\
                    10) & 0x00003c00U)
#define PMU_PMU2A__CTR_REFBG_LDO__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 10) & ~0x00003c00U)))
#define PMU_PMU2A__CTR_REFBG_LDO__RESET_VALUE                       0x00000007U
/** @} */

/* macros for field ctr_refldo */
/**
 * @defgroup pmu_top_regs_core_ctr_refldo_field ctr_refldo_field
 * @brief macros for field ctr_refldo
 * @details ref sel for ldo0: From refgen (BG/native). Use ctr_refBG_ldo to adjust1: From tracking reference
 * @{
 */
#define PMU_PMU2A__CTR_REFLDO__SHIFT                                         14
#define PMU_PMU2A__CTR_REFLDO__WIDTH                                          2
#define PMU_PMU2A__CTR_REFLDO__MASK                                 0x0000c000U
#define PMU_PMU2A__CTR_REFLDO__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000c000U) >> 14)
#define PMU_PMU2A__CTR_REFLDO__WRITE(src) \
                    (((uint32_t)(src)\
                    << 14) & 0x0000c000U)
#define PMU_PMU2A__CTR_REFLDO__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000c000U) | (((uint32_t)(src) <<\
                    14) & 0x0000c000U)
#define PMU_PMU2A__CTR_REFLDO__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 14) & ~0x0000c000U)))
#define PMU_PMU2A__CTR_REFLDO__RESET_VALUE                          0x00000000U
/** @} */

/* macros for field ctr_refInsel_nat */
/**
 * @defgroup pmu_top_regs_core_ctr_refInsel_nat_field ctr_refInsel_nat_field
 * @brief macros for field ctr_refInsel_nat
 * @details refgen feedback tap select for native.i=0:15 if refgen input ref = 375mV+25mV*i, reflad<15+i>11: 650mV reflad<26>9: 600mV reflad<24>7: 550mV reflad<22>5: 500mV reflad<20>3: 450mV reflad<18>
 * @{
 */
#define PMU_PMU2A__CTR_REFINSEL_NAT__SHIFT                                   16
#define PMU_PMU2A__CTR_REFINSEL_NAT__WIDTH                                    4
#define PMU_PMU2A__CTR_REFINSEL_NAT__MASK                           0x000f0000U
#define PMU_PMU2A__CTR_REFINSEL_NAT__READ(src) \
                    (((uint32_t)(src)\
                    & 0x000f0000U) >> 16)
#define PMU_PMU2A__CTR_REFINSEL_NAT__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x000f0000U)
#define PMU_PMU2A__CTR_REFINSEL_NAT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000f0000U) | (((uint32_t)(src) <<\
                    16) & 0x000f0000U)
#define PMU_PMU2A__CTR_REFINSEL_NAT__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x000f0000U)))
#define PMU_PMU2A__CTR_REFINSEL_NAT__RESET_VALUE                    0x00000009U
/** @} */

/* macros for field ctr_refInsel_pmubg */
/**
 * @defgroup pmu_top_regs_core_ctr_refInsel_pmubg_field ctr_refInsel_pmubg_field
 * @brief macros for field ctr_refInsel_pmubg
 * @details refgen feedback tap select for main bg.i=0:15 if refgen input ref = 375mV+25mV*i, reflad<15+i>11: 650mV reflad<26>9: 600mV reflad<24>7: 550mV reflad<22>5: 500mV reflad<20>3: 450mV reflad<18>
 * @{
 */
#define PMU_PMU2A__CTR_REFINSEL_PMUBG__SHIFT                                 20
#define PMU_PMU2A__CTR_REFINSEL_PMUBG__WIDTH                                  4
#define PMU_PMU2A__CTR_REFINSEL_PMUBG__MASK                         0x00f00000U
#define PMU_PMU2A__CTR_REFINSEL_PMUBG__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00f00000U) >> 20)
#define PMU_PMU2A__CTR_REFINSEL_PMUBG__WRITE(src) \
                    (((uint32_t)(src)\
                    << 20) & 0x00f00000U)
#define PMU_PMU2A__CTR_REFINSEL_PMUBG__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00f00000U) | (((uint32_t)(src) <<\
                    20) & 0x00f00000U)
#define PMU_PMU2A__CTR_REFINSEL_PMUBG__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 20) & ~0x00f00000U)))
#define PMU_PMU2A__CTR_REFINSEL_PMUBG__RESET_VALUE                  0x00000009U
/** @} */

/* macros for field ctr_ref_vddioext */
/**
 * @defgroup pmu_top_regs_core_ctr_ref_vddioext_field ctr_ref_vddioext_field
 * @brief macros for field ctr_ref_vddioext
 * @details internally generated vddio level. vddioext=25*(64+4*i)mV, i=0:125*(70+i-2)mV, i=2:7
 * @{
 */
#define PMU_PMU2A__CTR_REF_VDDIOEXT__SHIFT                                   24
#define PMU_PMU2A__CTR_REF_VDDIOEXT__WIDTH                                    3
#define PMU_PMU2A__CTR_REF_VDDIOEXT__MASK                           0x07000000U
#define PMU_PMU2A__CTR_REF_VDDIOEXT__READ(src) \
                    (((uint32_t)(src)\
                    & 0x07000000U) >> 24)
#define PMU_PMU2A__CTR_REF_VDDIOEXT__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0x07000000U)
#define PMU_PMU2A__CTR_REF_VDDIOEXT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x07000000U) | (((uint32_t)(src) <<\
                    24) & 0x07000000U)
#define PMU_PMU2A__CTR_REF_VDDIOEXT__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x07000000U)))
#define PMU_PMU2A__CTR_REF_VDDIOEXT__RESET_VALUE                    0x00000002U
/** @} */

/* macros for field ctr_ref_vddioint */
/**
 * @defgroup pmu_top_regs_core_ctr_ref_vddioint_field ctr_ref_vddioint_field
 * @brief macros for field ctr_ref_vddioint
 * @details internally generated vddio level. vddioint=25*(64+4*i)mV, i=0:125*(70+i-2)mV, i=2:7
 * @{
 */
#define PMU_PMU2A__CTR_REF_VDDIOINT__SHIFT                                   27
#define PMU_PMU2A__CTR_REF_VDDIOINT__WIDTH                                    3
#define PMU_PMU2A__CTR_REF_VDDIOINT__MASK                           0x38000000U
#define PMU_PMU2A__CTR_REF_VDDIOINT__READ(src) \
                    (((uint32_t)(src)\
                    & 0x38000000U) >> 27)
#define PMU_PMU2A__CTR_REF_VDDIOINT__WRITE(src) \
                    (((uint32_t)(src)\
                    << 27) & 0x38000000U)
#define PMU_PMU2A__CTR_REF_VDDIOINT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x38000000U) | (((uint32_t)(src) <<\
                    27) & 0x38000000U)
#define PMU_PMU2A__CTR_REF_VDDIOINT__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 27) & ~0x38000000U)))
#define PMU_PMU2A__CTR_REF_VDDIOINT__RESET_VALUE                    0x00000004U
/** @} */
#define PMU_PMU2A__TYPE                                                uint32_t
#define PMU_PMU2A__READ                                             0x3fffffffU
#define PMU_PMU2A__WRITE                                            0x3fffffffU
#define PMU_PMU2A__PRESERVED                                        0x00000000U
#define PMU_PMU2A__RESET_VALUE                                      0x22991d79U

#endif /* __PMU_PMU2A_MACRO__ */

/** @} end of pmu2a */

/* macros for BlueprintGlobalNameSpace::PMU_pmu3 */
/**
 * @defgroup pmu_top_regs_core_pmu3 pmu3
 * @brief more ate definitions.
 * @{
 */
#ifndef __PMU_PMU3_MACRO__
#define __PMU_PMU3_MACRO__

/* macros for field ctr_ref_vddaux */
/**
 * @defgroup pmu_top_regs_core_ctr_ref_vddaux_field ctr_ref_vddaux_field
 * @brief macros for field ctr_ref_vddaux
 * @details level of aux supply. vddaux=2*25*(50+5*i)mV, i=0:22*25*66mV, i=3
 * @{
 */
#define PMU_PMU3__CTR_REF_VDDAUX__SHIFT                                       0
#define PMU_PMU3__CTR_REF_VDDAUX__WIDTH                                       2
#define PMU_PMU3__CTR_REF_VDDAUX__MASK                              0x00000003U
#define PMU_PMU3__CTR_REF_VDDAUX__READ(src)     ((uint32_t)(src) & 0x00000003U)
#define PMU_PMU3__CTR_REF_VDDAUX__WRITE(src)    ((uint32_t)(src) & 0x00000003U)
#define PMU_PMU3__CTR_REF_VDDAUX__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000003U) | ((uint32_t)(src) &\
                    0x00000003U)
#define PMU_PMU3__CTR_REF_VDDAUX__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000003U)))
#define PMU_PMU3__CTR_REF_VDDAUX__RESET_VALUE                       0x00000003U
/** @} */

/* macros for field ctr_ref_avdd_active */
/**
 * @defgroup pmu_top_regs_core_ctr_ref_avdd_active_field ctr_ref_avdd_active_field
 * @brief macros for field ctr_ref_avdd_active
 * @details avdd level active. avdd=25*(33+i)mV, i=0:1425*56mV, i=15
 * @{
 */
#define PMU_PMU3__CTR_REF_AVDD_ACTIVE__SHIFT                                  2
#define PMU_PMU3__CTR_REF_AVDD_ACTIVE__WIDTH                                  4
#define PMU_PMU3__CTR_REF_AVDD_ACTIVE__MASK                         0x0000003cU
#define PMU_PMU3__CTR_REF_AVDD_ACTIVE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000003cU) >> 2)
#define PMU_PMU3__CTR_REF_AVDD_ACTIVE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 2) & 0x0000003cU)
#define PMU_PMU3__CTR_REF_AVDD_ACTIVE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000003cU) | (((uint32_t)(src) <<\
                    2) & 0x0000003cU)
#define PMU_PMU3__CTR_REF_AVDD_ACTIVE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 2) & ~0x0000003cU)))
#define PMU_PMU3__CTR_REF_AVDD_ACTIVE__RESET_VALUE                  0x00000008U
/** @} */

/* macros for field ctr_ref_avdd_hibernate */
/**
 * @defgroup pmu_top_regs_core_ctr_ref_avdd_hibernate_field ctr_ref_avdd_hibernate_field
 * @brief macros for field ctr_ref_avdd_hibernate
 * @details avdd level hibernate. avdd=25*(33+i)mV, i=0:1425*56mV, i=15
 * @{
 */
#define PMU_PMU3__CTR_REF_AVDD_HIBERNATE__SHIFT                               6
#define PMU_PMU3__CTR_REF_AVDD_HIBERNATE__WIDTH                               4
#define PMU_PMU3__CTR_REF_AVDD_HIBERNATE__MASK                      0x000003c0U
#define PMU_PMU3__CTR_REF_AVDD_HIBERNATE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x000003c0U) >> 6)
#define PMU_PMU3__CTR_REF_AVDD_HIBERNATE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 6) & 0x000003c0U)
#define PMU_PMU3__CTR_REF_AVDD_HIBERNATE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000003c0U) | (((uint32_t)(src) <<\
                    6) & 0x000003c0U)
#define PMU_PMU3__CTR_REF_AVDD_HIBERNATE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 6) & ~0x000003c0U)))
#define PMU_PMU3__CTR_REF_AVDD_HIBERNATE__RESET_VALUE               0x00000007U
/** @} */

/* macros for field ctr_ref_avdd_retain */
/**
 * @defgroup pmu_top_regs_core_ctr_ref_avdd_retain_field ctr_ref_avdd_retain_field
 * @brief macros for field ctr_ref_avdd_retain
 * @details avdd level retain. avdd=25*(33+i)mV, i=0:1425*56mV, i=15
 * @{
 */
#define PMU_PMU3__CTR_REF_AVDD_RETAIN__SHIFT                                 10
#define PMU_PMU3__CTR_REF_AVDD_RETAIN__WIDTH                                  4
#define PMU_PMU3__CTR_REF_AVDD_RETAIN__MASK                         0x00003c00U
#define PMU_PMU3__CTR_REF_AVDD_RETAIN__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00003c00U) >> 10)
#define PMU_PMU3__CTR_REF_AVDD_RETAIN__WRITE(src) \
                    (((uint32_t)(src)\
                    << 10) & 0x00003c00U)
#define PMU_PMU3__CTR_REF_AVDD_RETAIN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00003c00U) | (((uint32_t)(src) <<\
                    10) & 0x00003c00U)
#define PMU_PMU3__CTR_REF_AVDD_RETAIN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 10) & ~0x00003c00U)))
#define PMU_PMU3__CTR_REF_AVDD_RETAIN__RESET_VALUE                  0x00000008U
/** @} */

/* macros for field ctr_ref_avdd_socoff */
/**
 * @defgroup pmu_top_regs_core_ctr_ref_avdd_socoff_field ctr_ref_avdd_socoff_field
 * @brief macros for field ctr_ref_avdd_socoff
 * @details avdd level socoff. avdd=25*(33+i)mV, i=0:1425*56mV, i=15
 * @{
 */
#define PMU_PMU3__CTR_REF_AVDD_SOCOFF__SHIFT                                 14
#define PMU_PMU3__CTR_REF_AVDD_SOCOFF__WIDTH                                  4
#define PMU_PMU3__CTR_REF_AVDD_SOCOFF__MASK                         0x0003c000U
#define PMU_PMU3__CTR_REF_AVDD_SOCOFF__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0003c000U) >> 14)
#define PMU_PMU3__CTR_REF_AVDD_SOCOFF__WRITE(src) \
                    (((uint32_t)(src)\
                    << 14) & 0x0003c000U)
#define PMU_PMU3__CTR_REF_AVDD_SOCOFF__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0003c000U) | (((uint32_t)(src) <<\
                    14) & 0x0003c000U)
#define PMU_PMU3__CTR_REF_AVDD_SOCOFF__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 14) & ~0x0003c000U)))
#define PMU_PMU3__CTR_REF_AVDD_SOCOFF__RESET_VALUE                  0x00000007U
/** @} */
#define PMU_PMU3__TYPE                                                 uint32_t
#define PMU_PMU3__READ                                              0x0003ffffU
#define PMU_PMU3__WRITE                                             0x0003ffffU
#define PMU_PMU3__PRESERVED                                         0x00000000U
#define PMU_PMU3__RESET_VALUE                                       0x0001e1e3U

#endif /* __PMU_PMU3_MACRO__ */

/** @} end of pmu3 */

/* macros for BlueprintGlobalNameSpace::PMU_pmu4 */
/**
 * @defgroup pmu_top_regs_core_pmu4 pmu4
 * @brief more ate controls definitions.
 * @{
 */
#ifndef __PMU_PMU4_MACRO__
#define __PMU_PMU4_MACRO__

/* macros for field ctr_refBG_dvdd075 */
/**
 * @defgroup pmu_top_regs_core_ctr_refBG_dvdd075_field ctr_refBG_dvdd075_field
 * @brief macros for field ctr_refBG_dvdd075
 * @details dvdd ref from refgen startup. dvdd=25*(25+i)mV, i=0:3
 * @{
 */
#define PMU_PMU4__CTR_REFBG_DVDD075__SHIFT                                    0
#define PMU_PMU4__CTR_REFBG_DVDD075__WIDTH                                    2
#define PMU_PMU4__CTR_REFBG_DVDD075__MASK                           0x00000003U
#define PMU_PMU4__CTR_REFBG_DVDD075__READ(src)  ((uint32_t)(src) & 0x00000003U)
#define PMU_PMU4__CTR_REFBG_DVDD075__WRITE(src) ((uint32_t)(src) & 0x00000003U)
#define PMU_PMU4__CTR_REFBG_DVDD075__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000003U) | ((uint32_t)(src) &\
                    0x00000003U)
#define PMU_PMU4__CTR_REFBG_DVDD075__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000003U)))
#define PMU_PMU4__CTR_REFBG_DVDD075__RESET_VALUE                    0x00000002U
/** @} */

/* macros for field ctr_refBG_dvdd_active */
/**
 * @defgroup pmu_top_regs_core_ctr_refBG_dvdd_active_field ctr_refBG_dvdd_active_field
 * @brief macros for field ctr_refBG_dvdd_active
 * @details dvdd ref from refgen active. dvdd=25*(24+i)mV, i=0:24
 * @{
 */
#define PMU_PMU4__CTR_REFBG_DVDD_ACTIVE__SHIFT                                2
#define PMU_PMU4__CTR_REFBG_DVDD_ACTIVE__WIDTH                                5
#define PMU_PMU4__CTR_REFBG_DVDD_ACTIVE__MASK                       0x0000007cU
#define PMU_PMU4__CTR_REFBG_DVDD_ACTIVE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000007cU) >> 2)
#define PMU_PMU4__CTR_REFBG_DVDD_ACTIVE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 2) & 0x0000007cU)
#define PMU_PMU4__CTR_REFBG_DVDD_ACTIVE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000007cU) | (((uint32_t)(src) <<\
                    2) & 0x0000007cU)
#define PMU_PMU4__CTR_REFBG_DVDD_ACTIVE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 2) & ~0x0000007cU)))
#define PMU_PMU4__CTR_REFBG_DVDD_ACTIVE__RESET_VALUE                0x00000010U
/** @} */

/* macros for field ctr_refBG_dvdd_hibernate */
/**
 * @defgroup pmu_top_regs_core_ctr_refBG_dvdd_hibernate_field ctr_refBG_dvdd_hibernate_field
 * @brief macros for field ctr_refBG_dvdd_hibernate
 * @details dvdd ref from refgen hiberate. dvdd=25*(24+i)mV, i=0:24
 * @{
 */
#define PMU_PMU4__CTR_REFBG_DVDD_HIBERNATE__SHIFT                             7
#define PMU_PMU4__CTR_REFBG_DVDD_HIBERNATE__WIDTH                             5
#define PMU_PMU4__CTR_REFBG_DVDD_HIBERNATE__MASK                    0x00000f80U
#define PMU_PMU4__CTR_REFBG_DVDD_HIBERNATE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000f80U) >> 7)
#define PMU_PMU4__CTR_REFBG_DVDD_HIBERNATE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 7) & 0x00000f80U)
#define PMU_PMU4__CTR_REFBG_DVDD_HIBERNATE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000f80U) | (((uint32_t)(src) <<\
                    7) & 0x00000f80U)
#define PMU_PMU4__CTR_REFBG_DVDD_HIBERNATE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 7) & ~0x00000f80U)))
#define PMU_PMU4__CTR_REFBG_DVDD_HIBERNATE__RESET_VALUE             0x00000010U
/** @} */

/* macros for field ctr_refBG_dvdd_retain */
/**
 * @defgroup pmu_top_regs_core_ctr_refBG_dvdd_retain_field ctr_refBG_dvdd_retain_field
 * @brief macros for field ctr_refBG_dvdd_retain
 * @details dvdd ref from refgen retain. dvdd=25*(24+i)mV, i=0:24
 * @{
 */
#define PMU_PMU4__CTR_REFBG_DVDD_RETAIN__SHIFT                               12
#define PMU_PMU4__CTR_REFBG_DVDD_RETAIN__WIDTH                                5
#define PMU_PMU4__CTR_REFBG_DVDD_RETAIN__MASK                       0x0001f000U
#define PMU_PMU4__CTR_REFBG_DVDD_RETAIN__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0001f000U) >> 12)
#define PMU_PMU4__CTR_REFBG_DVDD_RETAIN__WRITE(src) \
                    (((uint32_t)(src)\
                    << 12) & 0x0001f000U)
#define PMU_PMU4__CTR_REFBG_DVDD_RETAIN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0001f000U) | (((uint32_t)(src) <<\
                    12) & 0x0001f000U)
#define PMU_PMU4__CTR_REFBG_DVDD_RETAIN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 12) & ~0x0001f000U)))
#define PMU_PMU4__CTR_REFBG_DVDD_RETAIN__RESET_VALUE                0x00000010U
/** @} */

/* macros for field ctr_refBG_dvdd_socoff */
/**
 * @defgroup pmu_top_regs_core_ctr_refBG_dvdd_socoff_field ctr_refBG_dvdd_socoff_field
 * @brief macros for field ctr_refBG_dvdd_socoff
 * @details dvdd ref from refgen socoff. dvdd=25*(24+i)mV, i=0:24
 * @{
 */
#define PMU_PMU4__CTR_REFBG_DVDD_SOCOFF__SHIFT                               17
#define PMU_PMU4__CTR_REFBG_DVDD_SOCOFF__WIDTH                                5
#define PMU_PMU4__CTR_REFBG_DVDD_SOCOFF__MASK                       0x003e0000U
#define PMU_PMU4__CTR_REFBG_DVDD_SOCOFF__READ(src) \
                    (((uint32_t)(src)\
                    & 0x003e0000U) >> 17)
#define PMU_PMU4__CTR_REFBG_DVDD_SOCOFF__WRITE(src) \
                    (((uint32_t)(src)\
                    << 17) & 0x003e0000U)
#define PMU_PMU4__CTR_REFBG_DVDD_SOCOFF__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x003e0000U) | (((uint32_t)(src) <<\
                    17) & 0x003e0000U)
#define PMU_PMU4__CTR_REFBG_DVDD_SOCOFF__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 17) & ~0x003e0000U)))
#define PMU_PMU4__CTR_REFBG_DVDD_SOCOFF__RESET_VALUE                0x00000010U
/** @} */
#define PMU_PMU4__TYPE                                                 uint32_t
#define PMU_PMU4__READ                                              0x003fffffU
#define PMU_PMU4__WRITE                                             0x003fffffU
#define PMU_PMU4__PRESERVED                                         0x00000000U
#define PMU_PMU4__RESET_VALUE                                       0x00210842U

#endif /* __PMU_PMU4_MACRO__ */

/** @} end of pmu4 */

/* macros for BlueprintGlobalNameSpace::PMU_pmu5 */
/**
 * @defgroup pmu_top_regs_core_pmu5 pmu5
 * @brief more pmu controls definitions.
 * @{
 */
#ifndef __PMU_PMU5_MACRO__
#define __PMU_PMU5_MACRO__

/* macros for field sw_alwayson */
/**
 * @defgroup pmu_top_regs_core_sw_alwayson_field sw_alwayson_field
 * @brief macros for field sw_alwayson
 * @details keep switcher on even in soc-off mode
 * @{
 */
#define PMU_PMU5__SW_ALWAYSON__SHIFT                                          0
#define PMU_PMU5__SW_ALWAYSON__WIDTH                                          1
#define PMU_PMU5__SW_ALWAYSON__MASK                                 0x00000001U
#define PMU_PMU5__SW_ALWAYSON__READ(src)        ((uint32_t)(src) & 0x00000001U)
#define PMU_PMU5__SW_ALWAYSON__WRITE(src)       ((uint32_t)(src) & 0x00000001U)
#define PMU_PMU5__SW_ALWAYSON__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define PMU_PMU5__SW_ALWAYSON__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define PMU_PMU5__SW_ALWAYSON__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define PMU_PMU5__SW_ALWAYSON__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define PMU_PMU5__SW_ALWAYSON__RESET_VALUE                          0x00000000U
/** @} */

/* macros for field socoff_onlydvdd1 */
/**
 * @defgroup pmu_top_regs_core_socoff_onlydvdd1_field socoff_onlydvdd1_field
 * @brief macros for field socoff_onlydvdd1
 * @details only generate dvdd in soc-off mode
 * @{
 */
#define PMU_PMU5__SOCOFF_ONLYDVDD1__SHIFT                                     1
#define PMU_PMU5__SOCOFF_ONLYDVDD1__WIDTH                                     1
#define PMU_PMU5__SOCOFF_ONLYDVDD1__MASK                            0x00000002U
#define PMU_PMU5__SOCOFF_ONLYDVDD1__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define PMU_PMU5__SOCOFF_ONLYDVDD1__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define PMU_PMU5__SOCOFF_ONLYDVDD1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define PMU_PMU5__SOCOFF_ONLYDVDD1__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define PMU_PMU5__SOCOFF_ONLYDVDD1__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define PMU_PMU5__SOCOFF_ONLYDVDD1__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define PMU_PMU5__SOCOFF_ONLYDVDD1__RESET_VALUE                     0x00000000U
/** @} */

/* macros for field ctr_refgencurr_low1 */
/**
 * @defgroup pmu_top_regs_core_ctr_refgencurr_low1_field ctr_refgencurr_low1_field
 * @brief macros for field ctr_refgencurr_low1
 * @details refgen low current setting 1
 * @{
 */
#define PMU_PMU5__CTR_REFGENCURR_LOW1__SHIFT                                  5
#define PMU_PMU5__CTR_REFGENCURR_LOW1__WIDTH                                  2
#define PMU_PMU5__CTR_REFGENCURR_LOW1__MASK                         0x00000060U
#define PMU_PMU5__CTR_REFGENCURR_LOW1__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000060U) >> 5)
#define PMU_PMU5__CTR_REFGENCURR_LOW1__WRITE(src) \
                    (((uint32_t)(src)\
                    << 5) & 0x00000060U)
#define PMU_PMU5__CTR_REFGENCURR_LOW1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000060U) | (((uint32_t)(src) <<\
                    5) & 0x00000060U)
#define PMU_PMU5__CTR_REFGENCURR_LOW1__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 5) & ~0x00000060U)))
#define PMU_PMU5__CTR_REFGENCURR_LOW1__RESET_VALUE                  0x00000003U
/** @} */

/* macros for field ctr_refgencurr_low2 */
/**
 * @defgroup pmu_top_regs_core_ctr_refgencurr_low2_field ctr_refgencurr_low2_field
 * @brief macros for field ctr_refgencurr_low2
 * @details refgen low current setting 2
 * @{
 */
#define PMU_PMU5__CTR_REFGENCURR_LOW2__SHIFT                                  7
#define PMU_PMU5__CTR_REFGENCURR_LOW2__WIDTH                                  2
#define PMU_PMU5__CTR_REFGENCURR_LOW2__MASK                         0x00000180U
#define PMU_PMU5__CTR_REFGENCURR_LOW2__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000180U) >> 7)
#define PMU_PMU5__CTR_REFGENCURR_LOW2__WRITE(src) \
                    (((uint32_t)(src)\
                    << 7) & 0x00000180U)
#define PMU_PMU5__CTR_REFGENCURR_LOW2__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000180U) | (((uint32_t)(src) <<\
                    7) & 0x00000180U)
#define PMU_PMU5__CTR_REFGENCURR_LOW2__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 7) & ~0x00000180U)))
#define PMU_PMU5__CTR_REFGENCURR_LOW2__RESET_VALUE                  0x00000003U
/** @} */

/* macros for field ctr_refharvstop */
/**
 * @defgroup pmu_top_regs_core_ctr_refharvstop_field ctr_refharvstop_field
 * @brief macros for field ctr_refharvstop
 * @details stop harvesting, look at storage cap (Vstore). vstore=2*25*(60+6*i)mV, i=0:1
 * @{
 */
#define PMU_PMU5__CTR_REFHARVSTOP__SHIFT                                      9
#define PMU_PMU5__CTR_REFHARVSTOP__WIDTH                                      1
#define PMU_PMU5__CTR_REFHARVSTOP__MASK                             0x00000200U
#define PMU_PMU5__CTR_REFHARVSTOP__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000200U) >> 9)
#define PMU_PMU5__CTR_REFHARVSTOP__WRITE(src) \
                    (((uint32_t)(src)\
                    << 9) & 0x00000200U)
#define PMU_PMU5__CTR_REFHARVSTOP__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000200U) | (((uint32_t)(src) <<\
                    9) & 0x00000200U)
#define PMU_PMU5__CTR_REFHARVSTOP__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 9) & ~0x00000200U)))
#define PMU_PMU5__CTR_REFHARVSTOP__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000200U) | ((uint32_t)(1) << 9)
#define PMU_PMU5__CTR_REFHARVSTOP__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000200U) | ((uint32_t)(0) << 9)
#define PMU_PMU5__CTR_REFHARVSTOP__RESET_VALUE                      0x00000001U
/** @} */

/* macros for field ctr_ref_serveaux */
/**
 * @defgroup pmu_top_regs_core_ctr_ref_serveaux_field ctr_ref_serveaux_field
 * @brief macros for field ctr_ref_serveaux
 * @details level to stop energizing from vbatt. vbat=25*[42,40,38,36] for i=[3:0]
 * @{
 */
#define PMU_PMU5__CTR_REF_SERVEAUX__SHIFT                                    10
#define PMU_PMU5__CTR_REF_SERVEAUX__WIDTH                                     2
#define PMU_PMU5__CTR_REF_SERVEAUX__MASK                            0x00000c00U
#define PMU_PMU5__CTR_REF_SERVEAUX__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000c00U) >> 10)
#define PMU_PMU5__CTR_REF_SERVEAUX__WRITE(src) \
                    (((uint32_t)(src)\
                    << 10) & 0x00000c00U)
#define PMU_PMU5__CTR_REF_SERVEAUX__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000c00U) | (((uint32_t)(src) <<\
                    10) & 0x00000c00U)
#define PMU_PMU5__CTR_REF_SERVEAUX__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 10) & ~0x00000c00U)))
#define PMU_PMU5__CTR_REF_SERVEAUX__RESET_VALUE                     0x00000003U
/** @} */

/* macros for field ctr_reconfharv */
/**
 * @defgroup pmu_top_regs_core_ctr_reconfharv_field ctr_reconfharv_field
 * @brief macros for field ctr_reconfharv
 * @details stop harvesting, look at Vharv. vharv=2*25*(48+4*i)mV, i=1:3, 2*900mVnat for i=0
 * @{
 */
#define PMU_PMU5__CTR_RECONFHARV__SHIFT                                      12
#define PMU_PMU5__CTR_RECONFHARV__WIDTH                                       2
#define PMU_PMU5__CTR_RECONFHARV__MASK                              0x00003000U
#define PMU_PMU5__CTR_RECONFHARV__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00003000U) >> 12)
#define PMU_PMU5__CTR_RECONFHARV__WRITE(src) \
                    (((uint32_t)(src)\
                    << 12) & 0x00003000U)
#define PMU_PMU5__CTR_RECONFHARV__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00003000U) | (((uint32_t)(src) <<\
                    12) & 0x00003000U)
#define PMU_PMU5__CTR_RECONFHARV__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 12) & ~0x00003000U)))
#define PMU_PMU5__CTR_RECONFHARV__RESET_VALUE                       0x00000001U
/** @} */

/* macros for field ctr_canharvso */
/**
 * @defgroup pmu_top_regs_core_ctr_canharvso_field ctr_canharvso_field
 * @brief macros for field ctr_canharvso
 * @details VHARV ref for the load in voltage regulation25*(43+4*i)mV, i=0:7
 * @{
 */
#define PMU_PMU5__CTR_CANHARVSO__SHIFT                                       14
#define PMU_PMU5__CTR_CANHARVSO__WIDTH                                        3
#define PMU_PMU5__CTR_CANHARVSO__MASK                               0x0001c000U
#define PMU_PMU5__CTR_CANHARVSO__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0001c000U) >> 14)
#define PMU_PMU5__CTR_CANHARVSO__WRITE(src) \
                    (((uint32_t)(src)\
                    << 14) & 0x0001c000U)
#define PMU_PMU5__CTR_CANHARVSO__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0001c000U) | (((uint32_t)(src) <<\
                    14) & 0x0001c000U)
#define PMU_PMU5__CTR_CANHARVSO__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 14) & ~0x0001c000U)))
#define PMU_PMU5__CTR_CANHARVSO__RESET_VALUE                        0x00000005U
/** @} */

/* macros for field ctr_mustharvso */
/**
 * @defgroup pmu_top_regs_core_ctr_mustharvso_field ctr_mustharvso_field
 * @brief macros for field ctr_mustharvso
 * @details VHARV ref for VSTOR in voltage regulation25*(43+4*i)mV, i=0:7
 * @{
 */
#define PMU_PMU5__CTR_MUSTHARVSO__SHIFT                                      17
#define PMU_PMU5__CTR_MUSTHARVSO__WIDTH                                       3
#define PMU_PMU5__CTR_MUSTHARVSO__MASK                              0x000e0000U
#define PMU_PMU5__CTR_MUSTHARVSO__READ(src) \
                    (((uint32_t)(src)\
                    & 0x000e0000U) >> 17)
#define PMU_PMU5__CTR_MUSTHARVSO__WRITE(src) \
                    (((uint32_t)(src)\
                    << 17) & 0x000e0000U)
#define PMU_PMU5__CTR_MUSTHARVSO__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000e0000U) | (((uint32_t)(src) <<\
                    17) & 0x000e0000U)
#define PMU_PMU5__CTR_MUSTHARVSO__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 17) & ~0x000e0000U)))
#define PMU_PMU5__CTR_MUSTHARVSO__RESET_VALUE                       0x00000007U
/** @} */

/* macros for field harv_hyst */
/**
 * @defgroup pmu_top_regs_core_harv_hyst_field harv_hyst_field
 * @brief macros for field harv_hyst
 * @details SwchReqCan/MustHarv comp hyst level
 * @{
 */
#define PMU_PMU5__HARV_HYST__SHIFT                                           20
#define PMU_PMU5__HARV_HYST__WIDTH                                            3
#define PMU_PMU5__HARV_HYST__MASK                                   0x00700000U
#define PMU_PMU5__HARV_HYST__READ(src)  (((uint32_t)(src) & 0x00700000U) >> 20)
#define PMU_PMU5__HARV_HYST__WRITE(src) (((uint32_t)(src) << 20) & 0x00700000U)
#define PMU_PMU5__HARV_HYST__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00700000U) | (((uint32_t)(src) <<\
                    20) & 0x00700000U)
#define PMU_PMU5__HARV_HYST__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 20) & ~0x00700000U)))
#define PMU_PMU5__HARV_HYST__RESET_VALUE                            0x00000001U
/** @} */
#define PMU_PMU5__TYPE                                                 uint32_t
#define PMU_PMU5__READ                                              0x007fffe3U
#define PMU_PMU5__WRITE                                             0x007fffe3U
#define PMU_PMU5__PRESERVED                                         0x00000000U
#define PMU_PMU5__RESET_VALUE                                       0x001f5fe0U

#endif /* __PMU_PMU5_MACRO__ */

/** @} end of pmu5 */

/* macros for BlueprintGlobalNameSpace::PMU_pmu6 */
/**
 * @defgroup pmu_top_regs_core_pmu6 pmu6
 * @brief comparator current controls definitions.
 * @{
 */
#ifndef __PMU_PMU6_MACRO__
#define __PMU_PMU6_MACRO__

/* macros for field ctrcuLow0 */
/**
 * @defgroup pmu_top_regs_core_ctrcuLow0_field ctrcuLow0_field
 * @brief macros for field ctrcuLow0
 * @details reset/vstore/vbat comp current for SOCOFF/HIBERNATE
 * @{
 */
#define PMU_PMU6__CTRCULOW0__SHIFT                                            0
#define PMU_PMU6__CTRCULOW0__WIDTH                                            2
#define PMU_PMU6__CTRCULOW0__MASK                                   0x00000003U
#define PMU_PMU6__CTRCULOW0__READ(src)          ((uint32_t)(src) & 0x00000003U)
#define PMU_PMU6__CTRCULOW0__WRITE(src)         ((uint32_t)(src) & 0x00000003U)
#define PMU_PMU6__CTRCULOW0__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000003U) | ((uint32_t)(src) &\
                    0x00000003U)
#define PMU_PMU6__CTRCULOW0__VERIFY(src)  (!(((uint32_t)(src) & ~0x00000003U)))
#define PMU_PMU6__CTRCULOW0__RESET_VALUE                            0x00000000U
/** @} */

/* macros for field ctrcuLow1 */
/**
 * @defgroup pmu_top_regs_core_ctrcuLow1_field ctrcuLow1_field
 * @brief macros for field ctrcuLow1
 * @details reset/vstore/vbat comp current for RETAIN
 * @{
 */
#define PMU_PMU6__CTRCULOW1__SHIFT                                            2
#define PMU_PMU6__CTRCULOW1__WIDTH                                            2
#define PMU_PMU6__CTRCULOW1__MASK                                   0x0000000cU
#define PMU_PMU6__CTRCULOW1__READ(src)   (((uint32_t)(src) & 0x0000000cU) >> 2)
#define PMU_PMU6__CTRCULOW1__WRITE(src)  (((uint32_t)(src) << 2) & 0x0000000cU)
#define PMU_PMU6__CTRCULOW1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000000cU) | (((uint32_t)(src) <<\
                    2) & 0x0000000cU)
#define PMU_PMU6__CTRCULOW1__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 2) & ~0x0000000cU)))
#define PMU_PMU6__CTRCULOW1__RESET_VALUE                            0x00000002U
/** @} */

/* macros for field ctrcuLow2 */
/**
 * @defgroup pmu_top_regs_core_ctrcuLow2_field ctrcuLow2_field
 * @brief macros for field ctrcuLow2
 * @details reset/vstore/vbat comp current for startup/ACTIVE
 * @{
 */
#define PMU_PMU6__CTRCULOW2__SHIFT                                            4
#define PMU_PMU6__CTRCULOW2__WIDTH                                            2
#define PMU_PMU6__CTRCULOW2__MASK                                   0x00000030U
#define PMU_PMU6__CTRCULOW2__READ(src)   (((uint32_t)(src) & 0x00000030U) >> 4)
#define PMU_PMU6__CTRCULOW2__WRITE(src)  (((uint32_t)(src) << 4) & 0x00000030U)
#define PMU_PMU6__CTRCULOW2__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000030U) | (((uint32_t)(src) <<\
                    4) & 0x00000030U)
#define PMU_PMU6__CTRCULOW2__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 4) & ~0x00000030U)))
#define PMU_PMU6__CTRCULOW2__RESET_VALUE                            0x00000003U
/** @} */

/* macros for field swRes_ctrcu1 */
/**
 * @defgroup pmu_top_regs_core_swRes_ctrcu1_field swRes_ctrcu1_field
 * @brief macros for field swRes_ctrcu1
 * @details swres current high for startup
 * @{
 */
#define PMU_PMU6__SWRES_CTRCU1__SHIFT                                         6
#define PMU_PMU6__SWRES_CTRCU1__WIDTH                                         6
#define PMU_PMU6__SWRES_CTRCU1__MASK                                0x00000fc0U
#define PMU_PMU6__SWRES_CTRCU1__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000fc0U) >> 6)
#define PMU_PMU6__SWRES_CTRCU1__WRITE(src) \
                    (((uint32_t)(src)\
                    << 6) & 0x00000fc0U)
#define PMU_PMU6__SWRES_CTRCU1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000fc0U) | (((uint32_t)(src) <<\
                    6) & 0x00000fc0U)
#define PMU_PMU6__SWRES_CTRCU1__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 6) & ~0x00000fc0U)))
#define PMU_PMU6__SWRES_CTRCU1__RESET_VALUE                         0x00000037U
/** @} */

/* macros for field swRes_ctrcu0 */
/**
 * @defgroup pmu_top_regs_core_swRes_ctrcu0_field swRes_ctrcu0_field
 * @brief macros for field swRes_ctrcu0
 * @details swres current low for SOCOFF (change to 23)
 * @{
 */
#define PMU_PMU6__SWRES_CTRCU0__SHIFT                                        12
#define PMU_PMU6__SWRES_CTRCU0__WIDTH                                         6
#define PMU_PMU6__SWRES_CTRCU0__MASK                                0x0003f000U
#define PMU_PMU6__SWRES_CTRCU0__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0003f000U) >> 12)
#define PMU_PMU6__SWRES_CTRCU0__WRITE(src) \
                    (((uint32_t)(src)\
                    << 12) & 0x0003f000U)
#define PMU_PMU6__SWRES_CTRCU0__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0003f000U) | (((uint32_t)(src) <<\
                    12) & 0x0003f000U)
#define PMU_PMU6__SWRES_CTRCU0__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 12) & ~0x0003f000U)))
#define PMU_PMU6__SWRES_CTRCU0__RESET_VALUE                         0x00000003U
/** @} */

/* macros for field SwchReqDVDD_ctrcu2 */
/**
 * @defgroup pmu_top_regs_core_SwchReqDVDD_ctrcu2_field SwchReqDVDD_ctrcu2_field
 * @brief macros for field SwchReqDVDD_ctrcu2
 * @details SwchReqDVDD comp current for startup/ACTIVE
 * @{
 */
#define PMU_PMU6__SWCHREQDVDD_CTRCU2__SHIFT                                  18
#define PMU_PMU6__SWCHREQDVDD_CTRCU2__WIDTH                                   2
#define PMU_PMU6__SWCHREQDVDD_CTRCU2__MASK                          0x000c0000U
#define PMU_PMU6__SWCHREQDVDD_CTRCU2__READ(src) \
                    (((uint32_t)(src)\
                    & 0x000c0000U) >> 18)
#define PMU_PMU6__SWCHREQDVDD_CTRCU2__WRITE(src) \
                    (((uint32_t)(src)\
                    << 18) & 0x000c0000U)
#define PMU_PMU6__SWCHREQDVDD_CTRCU2__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000c0000U) | (((uint32_t)(src) <<\
                    18) & 0x000c0000U)
#define PMU_PMU6__SWCHREQDVDD_CTRCU2__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 18) & ~0x000c0000U)))
#define PMU_PMU6__SWCHREQDVDD_CTRCU2__RESET_VALUE                   0x00000000U
/** @} */

/* macros for field SwchReqDVDD_ctrcu1 */
/**
 * @defgroup pmu_top_regs_core_SwchReqDVDD_ctrcu1_field SwchReqDVDD_ctrcu1_field
 * @brief macros for field SwchReqDVDD_ctrcu1
 * @details SwchReqDVDD comp current for RETAIN
 * @{
 */
#define PMU_PMU6__SWCHREQDVDD_CTRCU1__SHIFT                                  20
#define PMU_PMU6__SWCHREQDVDD_CTRCU1__WIDTH                                   3
#define PMU_PMU6__SWCHREQDVDD_CTRCU1__MASK                          0x00700000U
#define PMU_PMU6__SWCHREQDVDD_CTRCU1__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00700000U) >> 20)
#define PMU_PMU6__SWCHREQDVDD_CTRCU1__WRITE(src) \
                    (((uint32_t)(src)\
                    << 20) & 0x00700000U)
#define PMU_PMU6__SWCHREQDVDD_CTRCU1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00700000U) | (((uint32_t)(src) <<\
                    20) & 0x00700000U)
#define PMU_PMU6__SWCHREQDVDD_CTRCU1__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 20) & ~0x00700000U)))
#define PMU_PMU6__SWCHREQDVDD_CTRCU1__RESET_VALUE                   0x00000001U
/** @} */

/* macros for field SwchReqDVDD_ctrcu0 */
/**
 * @defgroup pmu_top_regs_core_SwchReqDVDD_ctrcu0_field SwchReqDVDD_ctrcu0_field
 * @brief macros for field SwchReqDVDD_ctrcu0
 * @details SwchReqDVDD comp current for SOCOFF/HIBERNATE
 * @{
 */
#define PMU_PMU6__SWCHREQDVDD_CTRCU0__SHIFT                                  23
#define PMU_PMU6__SWCHREQDVDD_CTRCU0__WIDTH                                   3
#define PMU_PMU6__SWCHREQDVDD_CTRCU0__MASK                          0x03800000U
#define PMU_PMU6__SWCHREQDVDD_CTRCU0__READ(src) \
                    (((uint32_t)(src)\
                    & 0x03800000U) >> 23)
#define PMU_PMU6__SWCHREQDVDD_CTRCU0__WRITE(src) \
                    (((uint32_t)(src)\
                    << 23) & 0x03800000U)
#define PMU_PMU6__SWCHREQDVDD_CTRCU0__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x03800000U) | (((uint32_t)(src) <<\
                    23) & 0x03800000U)
#define PMU_PMU6__SWCHREQDVDD_CTRCU0__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 23) & ~0x03800000U)))
#define PMU_PMU6__SWCHREQDVDD_CTRCU0__RESET_VALUE                   0x00000001U
/** @} */

/* macros for field SwchReqVDDIO_ctrcu2 */
/**
 * @defgroup pmu_top_regs_core_SwchReqVDDIO_ctrcu2_field SwchReqVDDIO_ctrcu2_field
 * @brief macros for field SwchReqVDDIO_ctrcu2
 * @details SwchReqVDDIO comp current for startup/ACTIVE
 * @{
 */
#define PMU_PMU6__SWCHREQVDDIO_CTRCU2__SHIFT                                 26
#define PMU_PMU6__SWCHREQVDDIO_CTRCU2__WIDTH                                  2
#define PMU_PMU6__SWCHREQVDDIO_CTRCU2__MASK                         0x0c000000U
#define PMU_PMU6__SWCHREQVDDIO_CTRCU2__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0c000000U) >> 26)
#define PMU_PMU6__SWCHREQVDDIO_CTRCU2__WRITE(src) \
                    (((uint32_t)(src)\
                    << 26) & 0x0c000000U)
#define PMU_PMU6__SWCHREQVDDIO_CTRCU2__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0c000000U) | (((uint32_t)(src) <<\
                    26) & 0x0c000000U)
#define PMU_PMU6__SWCHREQVDDIO_CTRCU2__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 26) & ~0x0c000000U)))
#define PMU_PMU6__SWCHREQVDDIO_CTRCU2__RESET_VALUE                  0x00000000U
/** @} */

/* macros for field SwchReqVDDIO_ctrcu1 */
/**
 * @defgroup pmu_top_regs_core_SwchReqVDDIO_ctrcu1_field SwchReqVDDIO_ctrcu1_field
 * @brief macros for field SwchReqVDDIO_ctrcu1
 * @details SwchReqVDDIO comp current for RETAIN
 * @{
 */
#define PMU_PMU6__SWCHREQVDDIO_CTRCU1__SHIFT                                 28
#define PMU_PMU6__SWCHREQVDDIO_CTRCU1__WIDTH                                  3
#define PMU_PMU6__SWCHREQVDDIO_CTRCU1__MASK                         0x70000000U
#define PMU_PMU6__SWCHREQVDDIO_CTRCU1__READ(src) \
                    (((uint32_t)(src)\
                    & 0x70000000U) >> 28)
#define PMU_PMU6__SWCHREQVDDIO_CTRCU1__WRITE(src) \
                    (((uint32_t)(src)\
                    << 28) & 0x70000000U)
#define PMU_PMU6__SWCHREQVDDIO_CTRCU1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x70000000U) | (((uint32_t)(src) <<\
                    28) & 0x70000000U)
#define PMU_PMU6__SWCHREQVDDIO_CTRCU1__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 28) & ~0x70000000U)))
#define PMU_PMU6__SWCHREQVDDIO_CTRCU1__RESET_VALUE                  0x00000001U
/** @} */
#define PMU_PMU6__TYPE                                                 uint32_t
#define PMU_PMU6__READ                                              0x7fffffffU
#define PMU_PMU6__WRITE                                             0x7fffffffU
#define PMU_PMU6__PRESERVED                                         0x00000000U
#define PMU_PMU6__RESET_VALUE                                       0x10903df8U

#endif /* __PMU_PMU6_MACRO__ */

/** @} end of pmu6 */

/* macros for BlueprintGlobalNameSpace::PMU_pmu7 */
/**
 * @defgroup pmu_top_regs_core_pmu7 pmu7
 * @brief more comparator_current controls definitions.
 * @{
 */
#ifndef __PMU_PMU7_MACRO__
#define __PMU_PMU7_MACRO__

/* macros for field SwchReqVDDIO_ctrcu0 */
/**
 * @defgroup pmu_top_regs_core_SwchReqVDDIO_ctrcu0_field SwchReqVDDIO_ctrcu0_field
 * @brief macros for field SwchReqVDDIO_ctrcu0
 * @details SwchReqVDDIO comp current for SOCOFF/HIBERNATE
 * @{
 */
#define PMU_PMU7__SWCHREQVDDIO_CTRCU0__SHIFT                                  0
#define PMU_PMU7__SWCHREQVDDIO_CTRCU0__WIDTH                                  3
#define PMU_PMU7__SWCHREQVDDIO_CTRCU0__MASK                         0x00000007U
#define PMU_PMU7__SWCHREQVDDIO_CTRCU0__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000007U)
#define PMU_PMU7__SWCHREQVDDIO_CTRCU0__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000007U)
#define PMU_PMU7__SWCHREQVDDIO_CTRCU0__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000007U) | ((uint32_t)(src) &\
                    0x00000007U)
#define PMU_PMU7__SWCHREQVDDIO_CTRCU0__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000007U)))
#define PMU_PMU7__SWCHREQVDDIO_CTRCU0__RESET_VALUE                  0x00000001U
/** @} */

/* macros for field SwchReqAVDD_ctrcu2 */
/**
 * @defgroup pmu_top_regs_core_SwchReqAVDD_ctrcu2_field SwchReqAVDD_ctrcu2_field
 * @brief macros for field SwchReqAVDD_ctrcu2
 * @details SwchReqAVDD comp current for startup/ACTIVE
 * @{
 */
#define PMU_PMU7__SWCHREQAVDD_CTRCU2__SHIFT                                   3
#define PMU_PMU7__SWCHREQAVDD_CTRCU2__WIDTH                                   2
#define PMU_PMU7__SWCHREQAVDD_CTRCU2__MASK                          0x00000018U
#define PMU_PMU7__SWCHREQAVDD_CTRCU2__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000018U) >> 3)
#define PMU_PMU7__SWCHREQAVDD_CTRCU2__WRITE(src) \
                    (((uint32_t)(src)\
                    << 3) & 0x00000018U)
#define PMU_PMU7__SWCHREQAVDD_CTRCU2__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000018U) | (((uint32_t)(src) <<\
                    3) & 0x00000018U)
#define PMU_PMU7__SWCHREQAVDD_CTRCU2__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 3) & ~0x00000018U)))
#define PMU_PMU7__SWCHREQAVDD_CTRCU2__RESET_VALUE                   0x00000000U
/** @} */

/* macros for field SwchReqAVDD_ctrcu1 */
/**
 * @defgroup pmu_top_regs_core_SwchReqAVDD_ctrcu1_field SwchReqAVDD_ctrcu1_field
 * @brief macros for field SwchReqAVDD_ctrcu1
 * @details SwchReqAVDD comp current for RETAIN
 * @{
 */
#define PMU_PMU7__SWCHREQAVDD_CTRCU1__SHIFT                                   5
#define PMU_PMU7__SWCHREQAVDD_CTRCU1__WIDTH                                   3
#define PMU_PMU7__SWCHREQAVDD_CTRCU1__MASK                          0x000000e0U
#define PMU_PMU7__SWCHREQAVDD_CTRCU1__READ(src) \
                    (((uint32_t)(src)\
                    & 0x000000e0U) >> 5)
#define PMU_PMU7__SWCHREQAVDD_CTRCU1__WRITE(src) \
                    (((uint32_t)(src)\
                    << 5) & 0x000000e0U)
#define PMU_PMU7__SWCHREQAVDD_CTRCU1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000e0U) | (((uint32_t)(src) <<\
                    5) & 0x000000e0U)
#define PMU_PMU7__SWCHREQAVDD_CTRCU1__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 5) & ~0x000000e0U)))
#define PMU_PMU7__SWCHREQAVDD_CTRCU1__RESET_VALUE                   0x00000001U
/** @} */

/* macros for field SwchReqAVDD_ctrcu0 */
/**
 * @defgroup pmu_top_regs_core_SwchReqAVDD_ctrcu0_field SwchReqAVDD_ctrcu0_field
 * @brief macros for field SwchReqAVDD_ctrcu0
 * @details SwchReqAVDD comp current for SOCOFF/HIBERNATE
 * @{
 */
#define PMU_PMU7__SWCHREQAVDD_CTRCU0__SHIFT                                   8
#define PMU_PMU7__SWCHREQAVDD_CTRCU0__WIDTH                                   3
#define PMU_PMU7__SWCHREQAVDD_CTRCU0__MASK                          0x00000700U
#define PMU_PMU7__SWCHREQAVDD_CTRCU0__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000700U) >> 8)
#define PMU_PMU7__SWCHREQAVDD_CTRCU0__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x00000700U)
#define PMU_PMU7__SWCHREQAVDD_CTRCU0__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000700U) | (((uint32_t)(src) <<\
                    8) & 0x00000700U)
#define PMU_PMU7__SWCHREQAVDD_CTRCU0__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x00000700U)))
#define PMU_PMU7__SWCHREQAVDD_CTRCU0__RESET_VALUE                   0x00000001U
/** @} */

/* macros for field SwchReqVAUX_ctrcu2 */
/**
 * @defgroup pmu_top_regs_core_SwchReqVAUX_ctrcu2_field SwchReqVAUX_ctrcu2_field
 * @brief macros for field SwchReqVAUX_ctrcu2
 * @details SwchReqVAUX comp current for startup/ACTIVE
 * @{
 */
#define PMU_PMU7__SWCHREQVAUX_CTRCU2__SHIFT                                  11
#define PMU_PMU7__SWCHREQVAUX_CTRCU2__WIDTH                                   2
#define PMU_PMU7__SWCHREQVAUX_CTRCU2__MASK                          0x00001800U
#define PMU_PMU7__SWCHREQVAUX_CTRCU2__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00001800U) >> 11)
#define PMU_PMU7__SWCHREQVAUX_CTRCU2__WRITE(src) \
                    (((uint32_t)(src)\
                    << 11) & 0x00001800U)
#define PMU_PMU7__SWCHREQVAUX_CTRCU2__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00001800U) | (((uint32_t)(src) <<\
                    11) & 0x00001800U)
#define PMU_PMU7__SWCHREQVAUX_CTRCU2__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 11) & ~0x00001800U)))
#define PMU_PMU7__SWCHREQVAUX_CTRCU2__RESET_VALUE                   0x00000000U
/** @} */

/* macros for field SwchReqVAUX_ctrcu1 */
/**
 * @defgroup pmu_top_regs_core_SwchReqVAUX_ctrcu1_field SwchReqVAUX_ctrcu1_field
 * @brief macros for field SwchReqVAUX_ctrcu1
 * @details SwchReqVAUX comp current for RETAIN
 * @{
 */
#define PMU_PMU7__SWCHREQVAUX_CTRCU1__SHIFT                                  13
#define PMU_PMU7__SWCHREQVAUX_CTRCU1__WIDTH                                   3
#define PMU_PMU7__SWCHREQVAUX_CTRCU1__MASK                          0x0000e000U
#define PMU_PMU7__SWCHREQVAUX_CTRCU1__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000e000U) >> 13)
#define PMU_PMU7__SWCHREQVAUX_CTRCU1__WRITE(src) \
                    (((uint32_t)(src)\
                    << 13) & 0x0000e000U)
#define PMU_PMU7__SWCHREQVAUX_CTRCU1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000e000U) | (((uint32_t)(src) <<\
                    13) & 0x0000e000U)
#define PMU_PMU7__SWCHREQVAUX_CTRCU1__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 13) & ~0x0000e000U)))
#define PMU_PMU7__SWCHREQVAUX_CTRCU1__RESET_VALUE                   0x00000001U
/** @} */

/* macros for field SwchReqVAUX_ctrcu0 */
/**
 * @defgroup pmu_top_regs_core_SwchReqVAUX_ctrcu0_field SwchReqVAUX_ctrcu0_field
 * @brief macros for field SwchReqVAUX_ctrcu0
 * @details SwchReqVAUX comp current for SOCOFF/HIBERNATE
 * @{
 */
#define PMU_PMU7__SWCHREQVAUX_CTRCU0__SHIFT                                  16
#define PMU_PMU7__SWCHREQVAUX_CTRCU0__WIDTH                                   3
#define PMU_PMU7__SWCHREQVAUX_CTRCU0__MASK                          0x00070000U
#define PMU_PMU7__SWCHREQVAUX_CTRCU0__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00070000U) >> 16)
#define PMU_PMU7__SWCHREQVAUX_CTRCU0__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00070000U)
#define PMU_PMU7__SWCHREQVAUX_CTRCU0__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00070000U) | (((uint32_t)(src) <<\
                    16) & 0x00070000U)
#define PMU_PMU7__SWCHREQVAUX_CTRCU0__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00070000U)))
#define PMU_PMU7__SWCHREQVAUX_CTRCU0__RESET_VALUE                   0x00000001U
/** @} */

/* macros for field SwchReqDVDD_hyst */
/**
 * @defgroup pmu_top_regs_core_SwchReqDVDD_hyst_field SwchReqDVDD_hyst_field
 * @brief macros for field SwchReqDVDD_hyst
 * @details DVDD comp hyst level for all states
 * @{
 */
#define PMU_PMU7__SWCHREQDVDD_HYST__SHIFT                                    19
#define PMU_PMU7__SWCHREQDVDD_HYST__WIDTH                                     2
#define PMU_PMU7__SWCHREQDVDD_HYST__MASK                            0x00180000U
#define PMU_PMU7__SWCHREQDVDD_HYST__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00180000U) >> 19)
#define PMU_PMU7__SWCHREQDVDD_HYST__WRITE(src) \
                    (((uint32_t)(src)\
                    << 19) & 0x00180000U)
#define PMU_PMU7__SWCHREQDVDD_HYST__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00180000U) | (((uint32_t)(src) <<\
                    19) & 0x00180000U)
#define PMU_PMU7__SWCHREQDVDD_HYST__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 19) & ~0x00180000U)))
#define PMU_PMU7__SWCHREQDVDD_HYST__RESET_VALUE                     0x00000000U
/** @} */

/* macros for field SwchReqVDDIO_hyst0 */
/**
 * @defgroup pmu_top_regs_core_SwchReqVDDIO_hyst0_field SwchReqVDDIO_hyst0_field
 * @brief macros for field SwchReqVDDIO_hyst0
 * @details VDDIO comp hyst level for ACTIVE
 * @{
 */
#define PMU_PMU7__SWCHREQVDDIO_HYST0__SHIFT                                  21
#define PMU_PMU7__SWCHREQVDDIO_HYST0__WIDTH                                   2
#define PMU_PMU7__SWCHREQVDDIO_HYST0__MASK                          0x00600000U
#define PMU_PMU7__SWCHREQVDDIO_HYST0__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00600000U) >> 21)
#define PMU_PMU7__SWCHREQVDDIO_HYST0__WRITE(src) \
                    (((uint32_t)(src)\
                    << 21) & 0x00600000U)
#define PMU_PMU7__SWCHREQVDDIO_HYST0__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00600000U) | (((uint32_t)(src) <<\
                    21) & 0x00600000U)
#define PMU_PMU7__SWCHREQVDDIO_HYST0__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 21) & ~0x00600000U)))
#define PMU_PMU7__SWCHREQVDDIO_HYST0__RESET_VALUE                   0x00000000U
/** @} */

/* macros for field SwchReqVDDIO_hyst1 */
/**
 * @defgroup pmu_top_regs_core_SwchReqVDDIO_hyst1_field SwchReqVDDIO_hyst1_field
 * @brief macros for field SwchReqVDDIO_hyst1
 * @details VDDIO comp hyst level for RETAIN/HIBERNATE/SOCOFF
 * @{
 */
#define PMU_PMU7__SWCHREQVDDIO_HYST1__SHIFT                                  23
#define PMU_PMU7__SWCHREQVDDIO_HYST1__WIDTH                                   2
#define PMU_PMU7__SWCHREQVDDIO_HYST1__MASK                          0x01800000U
#define PMU_PMU7__SWCHREQVDDIO_HYST1__READ(src) \
                    (((uint32_t)(src)\
                    & 0x01800000U) >> 23)
#define PMU_PMU7__SWCHREQVDDIO_HYST1__WRITE(src) \
                    (((uint32_t)(src)\
                    << 23) & 0x01800000U)
#define PMU_PMU7__SWCHREQVDDIO_HYST1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x01800000U) | (((uint32_t)(src) <<\
                    23) & 0x01800000U)
#define PMU_PMU7__SWCHREQVDDIO_HYST1__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 23) & ~0x01800000U)))
#define PMU_PMU7__SWCHREQVDDIO_HYST1__RESET_VALUE                   0x00000002U
/** @} */

/* macros for field SwchReqVDDIO_hyst2 */
/**
 * @defgroup pmu_top_regs_core_SwchReqVDDIO_hyst2_field SwchReqVDDIO_hyst2_field
 * @brief macros for field SwchReqVDDIO_hyst2
 * @details VDDIO comp hyst level for startup
 * @{
 */
#define PMU_PMU7__SWCHREQVDDIO_HYST2__SHIFT                                  25
#define PMU_PMU7__SWCHREQVDDIO_HYST2__WIDTH                                   2
#define PMU_PMU7__SWCHREQVDDIO_HYST2__MASK                          0x06000000U
#define PMU_PMU7__SWCHREQVDDIO_HYST2__READ(src) \
                    (((uint32_t)(src)\
                    & 0x06000000U) >> 25)
#define PMU_PMU7__SWCHREQVDDIO_HYST2__WRITE(src) \
                    (((uint32_t)(src)\
                    << 25) & 0x06000000U)
#define PMU_PMU7__SWCHREQVDDIO_HYST2__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x06000000U) | (((uint32_t)(src) <<\
                    25) & 0x06000000U)
#define PMU_PMU7__SWCHREQVDDIO_HYST2__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 25) & ~0x06000000U)))
#define PMU_PMU7__SWCHREQVDDIO_HYST2__RESET_VALUE                   0x00000003U
/** @} */

/* macros for field SwchReqVAUX_hyst */
/**
 * @defgroup pmu_top_regs_core_SwchReqVAUX_hyst_field SwchReqVAUX_hyst_field
 * @brief macros for field SwchReqVAUX_hyst
 * @details VDDAUX comp hyst level for all states
 * @{
 */
#define PMU_PMU7__SWCHREQVAUX_HYST__SHIFT                                    27
#define PMU_PMU7__SWCHREQVAUX_HYST__WIDTH                                     3
#define PMU_PMU7__SWCHREQVAUX_HYST__MASK                            0x38000000U
#define PMU_PMU7__SWCHREQVAUX_HYST__READ(src) \
                    (((uint32_t)(src)\
                    & 0x38000000U) >> 27)
#define PMU_PMU7__SWCHREQVAUX_HYST__WRITE(src) \
                    (((uint32_t)(src)\
                    << 27) & 0x38000000U)
#define PMU_PMU7__SWCHREQVAUX_HYST__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x38000000U) | (((uint32_t)(src) <<\
                    27) & 0x38000000U)
#define PMU_PMU7__SWCHREQVAUX_HYST__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 27) & ~0x38000000U)))
#define PMU_PMU7__SWCHREQVAUX_HYST__RESET_VALUE                     0x00000000U
/** @} */
#define PMU_PMU7__TYPE                                                 uint32_t
#define PMU_PMU7__READ                                              0x3fffffffU
#define PMU_PMU7__WRITE                                             0x3fffffffU
#define PMU_PMU7__PRESERVED                                         0x00000000U
#define PMU_PMU7__RESET_VALUE                                       0x07012121U

#endif /* __PMU_PMU7_MACRO__ */

/** @} end of pmu7 */

/* macros for BlueprintGlobalNameSpace::PMU_pmu8 */
/**
 * @defgroup pmu_top_regs_core_pmu8 pmu8
 * @brief comparator current controls/ other controls definitions.
 * @{
 */
#ifndef __PMU_PMU8_MACRO__
#define __PMU_PMU8_MACRO__

/* macros for field SwchReqAVDD_hyst0 */
/**
 * @defgroup pmu_top_regs_core_SwchReqAVDD_hyst0_field SwchReqAVDD_hyst0_field
 * @brief macros for field SwchReqAVDD_hyst0
 * @details AVDD comp hyst level for ACTIVE
 * @{
 */
#define PMU_PMU8__SWCHREQAVDD_HYST0__SHIFT                                    0
#define PMU_PMU8__SWCHREQAVDD_HYST0__WIDTH                                    2
#define PMU_PMU8__SWCHREQAVDD_HYST0__MASK                           0x00000003U
#define PMU_PMU8__SWCHREQAVDD_HYST0__READ(src)  ((uint32_t)(src) & 0x00000003U)
#define PMU_PMU8__SWCHREQAVDD_HYST0__WRITE(src) ((uint32_t)(src) & 0x00000003U)
#define PMU_PMU8__SWCHREQAVDD_HYST0__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000003U) | ((uint32_t)(src) &\
                    0x00000003U)
#define PMU_PMU8__SWCHREQAVDD_HYST0__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000003U)))
#define PMU_PMU8__SWCHREQAVDD_HYST0__RESET_VALUE                    0x00000000U
/** @} */

/* macros for field SwchReqAVDD_hyst1 */
/**
 * @defgroup pmu_top_regs_core_SwchReqAVDD_hyst1_field SwchReqAVDD_hyst1_field
 * @brief macros for field SwchReqAVDD_hyst1
 * @details AVDD comp hyst level for RETAIN/HIBERNATE/SOCOFF
 * @{
 */
#define PMU_PMU8__SWCHREQAVDD_HYST1__SHIFT                                    2
#define PMU_PMU8__SWCHREQAVDD_HYST1__WIDTH                                    2
#define PMU_PMU8__SWCHREQAVDD_HYST1__MASK                           0x0000000cU
#define PMU_PMU8__SWCHREQAVDD_HYST1__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000000cU) >> 2)
#define PMU_PMU8__SWCHREQAVDD_HYST1__WRITE(src) \
                    (((uint32_t)(src)\
                    << 2) & 0x0000000cU)
#define PMU_PMU8__SWCHREQAVDD_HYST1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000000cU) | (((uint32_t)(src) <<\
                    2) & 0x0000000cU)
#define PMU_PMU8__SWCHREQAVDD_HYST1__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 2) & ~0x0000000cU)))
#define PMU_PMU8__SWCHREQAVDD_HYST1__RESET_VALUE                    0x00000002U
/** @} */

/* macros for field SwchReqAVDD_hyst2 */
/**
 * @defgroup pmu_top_regs_core_SwchReqAVDD_hyst2_field SwchReqAVDD_hyst2_field
 * @brief macros for field SwchReqAVDD_hyst2
 * @details AVDD comp hyst level for startup
 * @{
 */
#define PMU_PMU8__SWCHREQAVDD_HYST2__SHIFT                                    4
#define PMU_PMU8__SWCHREQAVDD_HYST2__WIDTH                                    2
#define PMU_PMU8__SWCHREQAVDD_HYST2__MASK                           0x00000030U
#define PMU_PMU8__SWCHREQAVDD_HYST2__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000030U) >> 4)
#define PMU_PMU8__SWCHREQAVDD_HYST2__WRITE(src) \
                    (((uint32_t)(src)\
                    << 4) & 0x00000030U)
#define PMU_PMU8__SWCHREQAVDD_HYST2__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000030U) | (((uint32_t)(src) <<\
                    4) & 0x00000030U)
#define PMU_PMU8__SWCHREQAVDD_HYST2__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 4) & ~0x00000030U)))
#define PMU_PMU8__SWCHREQAVDD_HYST2__RESET_VALUE                    0x00000003U
/** @} */

/* macros for field ctr_trackref1_active */
/**
 * @defgroup pmu_top_regs_core_ctr_trackref1_active_field ctr_trackref1_active_field
 * @brief macros for field ctr_trackref1_active
 * @details DVDD reference from trackref in active10:0.78V16:0.88V26:1V31:1.06V
 * @{
 */
#define PMU_PMU8__CTR_TRACKREF1_ACTIVE__SHIFT                                 6
#define PMU_PMU8__CTR_TRACKREF1_ACTIVE__WIDTH                                 5
#define PMU_PMU8__CTR_TRACKREF1_ACTIVE__MASK                        0x000007c0U
#define PMU_PMU8__CTR_TRACKREF1_ACTIVE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x000007c0U) >> 6)
#define PMU_PMU8__CTR_TRACKREF1_ACTIVE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 6) & 0x000007c0U)
#define PMU_PMU8__CTR_TRACKREF1_ACTIVE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000007c0U) | (((uint32_t)(src) <<\
                    6) & 0x000007c0U)
#define PMU_PMU8__CTR_TRACKREF1_ACTIVE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 6) & ~0x000007c0U)))
#define PMU_PMU8__CTR_TRACKREF1_ACTIVE__RESET_VALUE                 0x0000001aU
/** @} */

/* macros for field ctr_trackref1_hibernate */
/**
 * @defgroup pmu_top_regs_core_ctr_trackref1_hibernate_field ctr_trackref1_hibernate_field
 * @brief macros for field ctr_trackref1_hibernate
 * @details DVDD reference from trackref in TRACK1 hibernate10:0.78V16:0.88V26:1V31:1.06V
 * @{
 */
#define PMU_PMU8__CTR_TRACKREF1_HIBERNATE__SHIFT                             11
#define PMU_PMU8__CTR_TRACKREF1_HIBERNATE__WIDTH                              5
#define PMU_PMU8__CTR_TRACKREF1_HIBERNATE__MASK                     0x0000f800U
#define PMU_PMU8__CTR_TRACKREF1_HIBERNATE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000f800U) >> 11)
#define PMU_PMU8__CTR_TRACKREF1_HIBERNATE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 11) & 0x0000f800U)
#define PMU_PMU8__CTR_TRACKREF1_HIBERNATE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000f800U) | (((uint32_t)(src) <<\
                    11) & 0x0000f800U)
#define PMU_PMU8__CTR_TRACKREF1_HIBERNATE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 11) & ~0x0000f800U)))
#define PMU_PMU8__CTR_TRACKREF1_HIBERNATE__RESET_VALUE              0x0000001aU
/** @} */

/* macros for field ctr_trackref1_retain */
/**
 * @defgroup pmu_top_regs_core_ctr_trackref1_retain_field ctr_trackref1_retain_field
 * @brief macros for field ctr_trackref1_retain
 * @details DVDD reference from trackref in TRACK1 retain10:0.78V16:0.88V26:1V31:1.06V
 * @{
 */
#define PMU_PMU8__CTR_TRACKREF1_RETAIN__SHIFT                                16
#define PMU_PMU8__CTR_TRACKREF1_RETAIN__WIDTH                                 5
#define PMU_PMU8__CTR_TRACKREF1_RETAIN__MASK                        0x001f0000U
#define PMU_PMU8__CTR_TRACKREF1_RETAIN__READ(src) \
                    (((uint32_t)(src)\
                    & 0x001f0000U) >> 16)
#define PMU_PMU8__CTR_TRACKREF1_RETAIN__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x001f0000U)
#define PMU_PMU8__CTR_TRACKREF1_RETAIN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x001f0000U) | (((uint32_t)(src) <<\
                    16) & 0x001f0000U)
#define PMU_PMU8__CTR_TRACKREF1_RETAIN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x001f0000U)))
#define PMU_PMU8__CTR_TRACKREF1_RETAIN__RESET_VALUE                 0x0000001aU
/** @} */

/* macros for field ctr_trackref1_socoff */
/**
 * @defgroup pmu_top_regs_core_ctr_trackref1_socoff_field ctr_trackref1_socoff_field
 * @brief macros for field ctr_trackref1_socoff
 * @details DVDD reference from trackref in TRACK1 socoff10:0.78V16:0.88V26:1V31:1.06V
 * @{
 */
#define PMU_PMU8__CTR_TRACKREF1_SOCOFF__SHIFT                                21
#define PMU_PMU8__CTR_TRACKREF1_SOCOFF__WIDTH                                 5
#define PMU_PMU8__CTR_TRACKREF1_SOCOFF__MASK                        0x03e00000U
#define PMU_PMU8__CTR_TRACKREF1_SOCOFF__READ(src) \
                    (((uint32_t)(src)\
                    & 0x03e00000U) >> 21)
#define PMU_PMU8__CTR_TRACKREF1_SOCOFF__WRITE(src) \
                    (((uint32_t)(src)\
                    << 21) & 0x03e00000U)
#define PMU_PMU8__CTR_TRACKREF1_SOCOFF__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x03e00000U) | (((uint32_t)(src) <<\
                    21) & 0x03e00000U)
#define PMU_PMU8__CTR_TRACKREF1_SOCOFF__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 21) & ~0x03e00000U)))
#define PMU_PMU8__CTR_TRACKREF1_SOCOFF__RESET_VALUE                 0x0000001aU
/** @} */

/* macros for field ctr_trackref07 */
/**
 * @defgroup pmu_top_regs_core_ctr_trackref07_field ctr_trackref07_field
 * @brief macros for field ctr_trackref07
 * @details DVDD reference from trackref in TRACK07 hibernate12:0.7V16:0.74V19:0.78V31:0.89V
 * @{
 */
#define PMU_PMU8__CTR_TRACKREF07__SHIFT                                      26
#define PMU_PMU8__CTR_TRACKREF07__WIDTH                                       5
#define PMU_PMU8__CTR_TRACKREF07__MASK                              0x7c000000U
#define PMU_PMU8__CTR_TRACKREF07__READ(src) \
                    (((uint32_t)(src)\
                    & 0x7c000000U) >> 26)
#define PMU_PMU8__CTR_TRACKREF07__WRITE(src) \
                    (((uint32_t)(src)\
                    << 26) & 0x7c000000U)
#define PMU_PMU8__CTR_TRACKREF07__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x7c000000U) | (((uint32_t)(src) <<\
                    26) & 0x7c000000U)
#define PMU_PMU8__CTR_TRACKREF07__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 26) & ~0x7c000000U)))
#define PMU_PMU8__CTR_TRACKREF07__RESET_VALUE                       0x00000013U
/** @} */

/* macros for field ctr_Vrectrepl */
/**
 * @defgroup pmu_top_regs_core_ctr_Vrectrepl_field ctr_Vrectrepl_field
 * @brief macros for field ctr_Vrectrepl
 * @details Set to one when RF harvesting is enabled. Otherwise zero.
 * @{
 */
#define PMU_PMU8__CTR_VRECTREPL__SHIFT                                       31
#define PMU_PMU8__CTR_VRECTREPL__WIDTH                                        1
#define PMU_PMU8__CTR_VRECTREPL__MASK                               0x80000000U
#define PMU_PMU8__CTR_VRECTREPL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x80000000U) >> 31)
#define PMU_PMU8__CTR_VRECTREPL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 31) & 0x80000000U)
#define PMU_PMU8__CTR_VRECTREPL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x80000000U) | (((uint32_t)(src) <<\
                    31) & 0x80000000U)
#define PMU_PMU8__CTR_VRECTREPL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 31) & ~0x80000000U)))
#define PMU_PMU8__CTR_VRECTREPL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x80000000U) | ((uint32_t)(1) << 31)
#define PMU_PMU8__CTR_VRECTREPL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x80000000U) | ((uint32_t)(0) << 31)
#define PMU_PMU8__CTR_VRECTREPL__RESET_VALUE                        0x00000001U
/** @} */
#define PMU_PMU8__TYPE                                                 uint32_t
#define PMU_PMU8__READ                                              0xffffffffU
#define PMU_PMU8__WRITE                                             0xffffffffU
#define PMU_PMU8__PRESERVED                                         0x00000000U
#define PMU_PMU8__RESET_VALUE                                       0xcf5ad6b8U

#endif /* __PMU_PMU8_MACRO__ */

/** @} end of pmu8 */

/* macros for BlueprintGlobalNameSpace::PMU_pmu9 */
/**
 * @defgroup pmu_top_regs_core_pmu9 pmu9
 * @brief more pmu controls definitions.
 * @{
 */
#ifndef __PMU_PMU9_MACRO__
#define __PMU_PMU9_MACRO__

/* macros for field ctr_refenergbo */
/**
 * @defgroup pmu_top_regs_core_ctr_refenergbo_field ctr_refenergbo_field
 * @brief macros for field ctr_refenergbo
 * @details VrefstogoodtoEner level. VSTOR=25*[75,64,50,44,40,36,30,20] for i=[7:0]
 * @{
 */
#define PMU_PMU9__CTR_REFENERGBO__SHIFT                                       0
#define PMU_PMU9__CTR_REFENERGBO__WIDTH                                       3
#define PMU_PMU9__CTR_REFENERGBO__MASK                              0x00000007U
#define PMU_PMU9__CTR_REFENERGBO__READ(src)     ((uint32_t)(src) & 0x00000007U)
#define PMU_PMU9__CTR_REFENERGBO__WRITE(src)    ((uint32_t)(src) & 0x00000007U)
#define PMU_PMU9__CTR_REFENERGBO__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000007U) | ((uint32_t)(src) &\
                    0x00000007U)
#define PMU_PMU9__CTR_REFENERGBO__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000007U)))
#define PMU_PMU9__CTR_REFENERGBO__RESET_VALUE                       0x00000003U
/** @} */

/* macros for field ctr_refenergbohy */
/**
 * @defgroup pmu_top_regs_core_ctr_refenergbohy_field ctr_refenergbohy_field
 * @brief macros for field ctr_refenergbohy
 * @details VrefstogoodtoEner hyst level. VSTOR=25*[71,36,26,16] for i=[3:0]
 * @{
 */
#define PMU_PMU9__CTR_REFENERGBOHY__SHIFT                                     3
#define PMU_PMU9__CTR_REFENERGBOHY__WIDTH                                     2
#define PMU_PMU9__CTR_REFENERGBOHY__MASK                            0x00000018U
#define PMU_PMU9__CTR_REFENERGBOHY__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000018U) >> 3)
#define PMU_PMU9__CTR_REFENERGBOHY__WRITE(src) \
                    (((uint32_t)(src)\
                    << 3) & 0x00000018U)
#define PMU_PMU9__CTR_REFENERGBOHY__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000018U) | (((uint32_t)(src) <<\
                    3) & 0x00000018U)
#define PMU_PMU9__CTR_REFENERGBOHY__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 3) & ~0x00000018U)))
#define PMU_PMU9__CTR_REFENERGBOHY__RESET_VALUE                     0x00000001U
/** @} */

/* macros for field ctr_refenergtx */
/**
 * @defgroup pmu_top_regs_core_ctr_refenergtx_field ctr_refenergtx_field
 * @brief macros for field ctr_refenergtx
 * @details VrefstogoodforTX. VSTOR=25*[68,64,40,32] for i=[3:0]
 * @{
 */
#define PMU_PMU9__CTR_REFENERGTX__SHIFT                                       5
#define PMU_PMU9__CTR_REFENERGTX__WIDTH                                       2
#define PMU_PMU9__CTR_REFENERGTX__MASK                              0x00000060U
#define PMU_PMU9__CTR_REFENERGTX__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000060U) >> 5)
#define PMU_PMU9__CTR_REFENERGTX__WRITE(src) \
                    (((uint32_t)(src)\
                    << 5) & 0x00000060U)
#define PMU_PMU9__CTR_REFENERGTX__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000060U) | (((uint32_t)(src) <<\
                    5) & 0x00000060U)
#define PMU_PMU9__CTR_REFENERGTX__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 5) & ~0x00000060U)))
#define PMU_PMU9__CTR_REFENERGTX__RESET_VALUE                       0x00000003U
/** @} */

/* macros for field ctr_refenergtxhy */
/**
 * @defgroup pmu_top_regs_core_ctr_refenergtxhy_field ctr_refenergtxhy_field
 * @brief macros for field ctr_refenergtxhy
 * @details VrefstogoodforTX hyst level. VSTOR=25*[64,60,28,20] for i=[3:0]
 * @{
 */
#define PMU_PMU9__CTR_REFENERGTXHY__SHIFT                                     7
#define PMU_PMU9__CTR_REFENERGTXHY__WIDTH                                     2
#define PMU_PMU9__CTR_REFENERGTXHY__MASK                            0x00000180U
#define PMU_PMU9__CTR_REFENERGTXHY__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000180U) >> 7)
#define PMU_PMU9__CTR_REFENERGTXHY__WRITE(src) \
                    (((uint32_t)(src)\
                    << 7) & 0x00000180U)
#define PMU_PMU9__CTR_REFENERGTXHY__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000180U) | (((uint32_t)(src) <<\
                    7) & 0x00000180U)
#define PMU_PMU9__CTR_REFENERGTXHY__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 7) & ~0x00000180U)))
#define PMU_PMU9__CTR_REFENERGTXHY__RESET_VALUE                     0x00000003U
/** @} */

/* macros for field ctr_mpptstartvharv */
/**
 * @defgroup pmu_top_regs_core_ctr_mpptstartvharv_field ctr_mpptstartvharv_field
 * @brief macros for field ctr_mpptstartvharv
 * @details start harvesting, look at Vharv25*[56,44,34,30] for i=[1:0]
 * @{
 */
#define PMU_PMU9__CTR_MPPTSTARTVHARV__SHIFT                                   9
#define PMU_PMU9__CTR_MPPTSTARTVHARV__WIDTH                                   2
#define PMU_PMU9__CTR_MPPTSTARTVHARV__MASK                          0x00000600U
#define PMU_PMU9__CTR_MPPTSTARTVHARV__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000600U) >> 9)
#define PMU_PMU9__CTR_MPPTSTARTVHARV__WRITE(src) \
                    (((uint32_t)(src)\
                    << 9) & 0x00000600U)
#define PMU_PMU9__CTR_MPPTSTARTVHARV__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000600U) | (((uint32_t)(src) <<\
                    9) & 0x00000600U)
#define PMU_PMU9__CTR_MPPTSTARTVHARV__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 9) & ~0x00000600U)))
#define PMU_PMU9__CTR_MPPTSTARTVHARV__RESET_VALUE                   0x00000001U
/** @} */

/* macros for field ctr_rectreplmpp */
/**
 * @defgroup pmu_top_regs_core_ctr_rectreplmpp_field ctr_rectreplmpp_field
 * @brief macros for field ctr_rectreplmpp
 * @details mppt dynamic reference for SwchReqCanHarv comp
 * @{
 */
#define PMU_PMU9__CTR_RECTREPLMPP__SHIFT                                     11
#define PMU_PMU9__CTR_RECTREPLMPP__WIDTH                                      3
#define PMU_PMU9__CTR_RECTREPLMPP__MASK                             0x00003800U
#define PMU_PMU9__CTR_RECTREPLMPP__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00003800U) >> 11)
#define PMU_PMU9__CTR_RECTREPLMPP__WRITE(src) \
                    (((uint32_t)(src)\
                    << 11) & 0x00003800U)
#define PMU_PMU9__CTR_RECTREPLMPP__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00003800U) | (((uint32_t)(src) <<\
                    11) & 0x00003800U)
#define PMU_PMU9__CTR_RECTREPLMPP__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 11) & ~0x00003800U)))
#define PMU_PMU9__CTR_RECTREPLMPP__RESET_VALUE                      0x00000007U
/** @} */

/* macros for field ctr_rectreplmpp2 */
/**
 * @defgroup pmu_top_regs_core_ctr_rectreplmpp2_field ctr_rectreplmpp2_field
 * @brief macros for field ctr_rectreplmpp2
 * @details mppt dynamic reference for SwchReqMustHarv comp
 * @{
 */
#define PMU_PMU9__CTR_RECTREPLMPP2__SHIFT                                    14
#define PMU_PMU9__CTR_RECTREPLMPP2__WIDTH                                     3
#define PMU_PMU9__CTR_RECTREPLMPP2__MASK                            0x0001c000U
#define PMU_PMU9__CTR_RECTREPLMPP2__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0001c000U) >> 14)
#define PMU_PMU9__CTR_RECTREPLMPP2__WRITE(src) \
                    (((uint32_t)(src)\
                    << 14) & 0x0001c000U)
#define PMU_PMU9__CTR_RECTREPLMPP2__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0001c000U) | (((uint32_t)(src) <<\
                    14) & 0x0001c000U)
#define PMU_PMU9__CTR_RECTREPLMPP2__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 14) & ~0x0001c000U)))
#define PMU_PMU9__CTR_RECTREPLMPP2__RESET_VALUE                     0x00000005U
/** @} */

/* macros for field ctr_ldo_lowpow */
/**
 * @defgroup pmu_top_regs_core_ctr_ldo_lowpow_field ctr_ldo_lowpow_field
 * @brief macros for field ctr_ldo_lowpow
 * @details 0: nominal LDO current, 1: ldo low power mode
 * @{
 */
#define PMU_PMU9__CTR_LDO_LOWPOW__SHIFT                                      17
#define PMU_PMU9__CTR_LDO_LOWPOW__WIDTH                                       1
#define PMU_PMU9__CTR_LDO_LOWPOW__MASK                              0x00020000U
#define PMU_PMU9__CTR_LDO_LOWPOW__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00020000U) >> 17)
#define PMU_PMU9__CTR_LDO_LOWPOW__WRITE(src) \
                    (((uint32_t)(src)\
                    << 17) & 0x00020000U)
#define PMU_PMU9__CTR_LDO_LOWPOW__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | (((uint32_t)(src) <<\
                    17) & 0x00020000U)
#define PMU_PMU9__CTR_LDO_LOWPOW__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 17) & ~0x00020000U)))
#define PMU_PMU9__CTR_LDO_LOWPOW__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(1) << 17)
#define PMU_PMU9__CTR_LDO_LOWPOW__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(0) << 17)
#define PMU_PMU9__CTR_LDO_LOWPOW__RESET_VALUE                       0x00000000U
/** @} */

/* macros for field ctr_ldo_smallPMOS */
/**
 * @defgroup pmu_top_regs_core_ctr_ldo_smallPMOS_field ctr_ldo_smallPMOS_field
 * @brief macros for field ctr_ldo_smallPMOS
 * @details Auxiliary branch with smaller PMOS if leakage is important
 * @{
 */
#define PMU_PMU9__CTR_LDO_SMALLPMOS__SHIFT                                   18
#define PMU_PMU9__CTR_LDO_SMALLPMOS__WIDTH                                    1
#define PMU_PMU9__CTR_LDO_SMALLPMOS__MASK                           0x00040000U
#define PMU_PMU9__CTR_LDO_SMALLPMOS__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00040000U) >> 18)
#define PMU_PMU9__CTR_LDO_SMALLPMOS__WRITE(src) \
                    (((uint32_t)(src)\
                    << 18) & 0x00040000U)
#define PMU_PMU9__CTR_LDO_SMALLPMOS__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | (((uint32_t)(src) <<\
                    18) & 0x00040000U)
#define PMU_PMU9__CTR_LDO_SMALLPMOS__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 18) & ~0x00040000U)))
#define PMU_PMU9__CTR_LDO_SMALLPMOS__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(1) << 18)
#define PMU_PMU9__CTR_LDO_SMALLPMOS__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(0) << 18)
#define PMU_PMU9__CTR_LDO_SMALLPMOS__RESET_VALUE                    0x00000000U
/** @} */

/* macros for field ctr_ldo_enftr */
/**
 * @defgroup pmu_top_regs_core_ctr_ldo_enftr_field ctr_ldo_enftr_field
 * @brief macros for field ctr_ldo_enftr
 * @details ldo_fast settling enable
 * @{
 */
#define PMU_PMU9__CTR_LDO_ENFTR__SHIFT                                       19
#define PMU_PMU9__CTR_LDO_ENFTR__WIDTH                                        1
#define PMU_PMU9__CTR_LDO_ENFTR__MASK                               0x00080000U
#define PMU_PMU9__CTR_LDO_ENFTR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00080000U) >> 19)
#define PMU_PMU9__CTR_LDO_ENFTR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 19) & 0x00080000U)
#define PMU_PMU9__CTR_LDO_ENFTR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00080000U) | (((uint32_t)(src) <<\
                    19) & 0x00080000U)
#define PMU_PMU9__CTR_LDO_ENFTR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 19) & ~0x00080000U)))
#define PMU_PMU9__CTR_LDO_ENFTR__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00080000U) | ((uint32_t)(1) << 19)
#define PMU_PMU9__CTR_LDO_ENFTR__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00080000U) | ((uint32_t)(0) << 19)
#define PMU_PMU9__CTR_LDO_ENFTR__RESET_VALUE                        0x00000001U
/** @} */

/* macros for field trans_wait_reg */
/**
 * @defgroup pmu_top_regs_core_trans_wait_reg_field trans_wait_reg_field
 * @brief macros for field trans_wait_reg
 * @details wait time in transient state when going from low power to active
 * @{
 */
#define PMU_PMU9__TRANS_WAIT_REG__SHIFT                                      20
#define PMU_PMU9__TRANS_WAIT_REG__WIDTH                                       7
#define PMU_PMU9__TRANS_WAIT_REG__MASK                              0x07f00000U
#define PMU_PMU9__TRANS_WAIT_REG__READ(src) \
                    (((uint32_t)(src)\
                    & 0x07f00000U) >> 20)
#define PMU_PMU9__TRANS_WAIT_REG__WRITE(src) \
                    (((uint32_t)(src)\
                    << 20) & 0x07f00000U)
#define PMU_PMU9__TRANS_WAIT_REG__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x07f00000U) | (((uint32_t)(src) <<\
                    20) & 0x07f00000U)
#define PMU_PMU9__TRANS_WAIT_REG__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 20) & ~0x07f00000U)))
#define PMU_PMU9__TRANS_WAIT_REG__RESET_VALUE                       0x00000014U
/** @} */

/* macros for field dvddlow */
/**
 * @defgroup pmu_top_regs_core_dvddlow_field dvddlow_field
 * @brief macros for field dvddlow
 * @details connect DVDDmem and DVDDmain both to a lower dvdd
 * @{
 */
#define PMU_PMU9__DVDDLOW__SHIFT                                             27
#define PMU_PMU9__DVDDLOW__WIDTH                                              1
#define PMU_PMU9__DVDDLOW__MASK                                     0x08000000U
#define PMU_PMU9__DVDDLOW__READ(src)    (((uint32_t)(src) & 0x08000000U) >> 27)
#define PMU_PMU9__DVDDLOW__WRITE(src)   (((uint32_t)(src) << 27) & 0x08000000U)
#define PMU_PMU9__DVDDLOW__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x08000000U) | (((uint32_t)(src) <<\
                    27) & 0x08000000U)
#define PMU_PMU9__DVDDLOW__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 27) & ~0x08000000U)))
#define PMU_PMU9__DVDDLOW__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x08000000U) | ((uint32_t)(1) << 27)
#define PMU_PMU9__DVDDLOW__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x08000000U) | ((uint32_t)(0) << 27)
#define PMU_PMU9__DVDDLOW__RESET_VALUE                              0x00000000U
/** @} */

/* macros for field manual_harv_disable */
/**
 * @defgroup pmu_top_regs_core_manual_harv_disable_field manual_harv_disable_field
 * @brief macros for field manual_harv_disable
 * @details manually disable harvesters
 * @{
 */
#define PMU_PMU9__MANUAL_HARV_DISABLE__SHIFT                                 28
#define PMU_PMU9__MANUAL_HARV_DISABLE__WIDTH                                  1
#define PMU_PMU9__MANUAL_HARV_DISABLE__MASK                         0x10000000U
#define PMU_PMU9__MANUAL_HARV_DISABLE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x10000000U) >> 28)
#define PMU_PMU9__MANUAL_HARV_DISABLE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 28) & 0x10000000U)
#define PMU_PMU9__MANUAL_HARV_DISABLE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x10000000U) | (((uint32_t)(src) <<\
                    28) & 0x10000000U)
#define PMU_PMU9__MANUAL_HARV_DISABLE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 28) & ~0x10000000U)))
#define PMU_PMU9__MANUAL_HARV_DISABLE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x10000000U) | ((uint32_t)(1) << 28)
#define PMU_PMU9__MANUAL_HARV_DISABLE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x10000000U) | ((uint32_t)(0) << 28)
#define PMU_PMU9__MANUAL_HARV_DISABLE__RESET_VALUE                  0x00000000U
/** @} */

/* macros for field enableHarv2Sup */
/**
 * @defgroup pmu_top_regs_core_enableHarv2Sup_field enableHarv2Sup_field
 * @brief macros for field enableHarv2Sup
 * @details enable harv to supply. If disabled it is only harv to vstore
 * @{
 */
#define PMU_PMU9__ENABLEHARV2SUP__SHIFT                                      29
#define PMU_PMU9__ENABLEHARV2SUP__WIDTH                                       1
#define PMU_PMU9__ENABLEHARV2SUP__MASK                              0x20000000U
#define PMU_PMU9__ENABLEHARV2SUP__READ(src) \
                    (((uint32_t)(src)\
                    & 0x20000000U) >> 29)
#define PMU_PMU9__ENABLEHARV2SUP__WRITE(src) \
                    (((uint32_t)(src)\
                    << 29) & 0x20000000U)
#define PMU_PMU9__ENABLEHARV2SUP__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x20000000U) | (((uint32_t)(src) <<\
                    29) & 0x20000000U)
#define PMU_PMU9__ENABLEHARV2SUP__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 29) & ~0x20000000U)))
#define PMU_PMU9__ENABLEHARV2SUP__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x20000000U) | ((uint32_t)(1) << 29)
#define PMU_PMU9__ENABLEHARV2SUP__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x20000000U) | ((uint32_t)(0) << 29)
#define PMU_PMU9__ENABLEHARV2SUP__RESET_VALUE                       0x00000001U
/** @} */
#define PMU_PMU9__TYPE                                                 uint32_t
#define PMU_PMU9__READ                                              0x3fffffffU
#define PMU_PMU9__WRITE                                             0x3fffffffU
#define PMU_PMU9__PRESERVED                                         0x00000000U
#define PMU_PMU9__RESET_VALUE                                       0x21497bebU

#endif /* __PMU_PMU9_MACRO__ */

/** @} end of pmu9 */

/* macros for BlueprintGlobalNameSpace::PMU_pmu10 */
/**
 * @defgroup pmu_top_regs_core_pmu10 pmu10
 * @brief more pmu controls/ refrence selects definitions.
 * @{
 */
#ifndef __PMU_PMU10_MACRO__
#define __PMU_PMU10_MACRO__

/* macros for field harv_ctrcu */
/**
 * @defgroup pmu_top_regs_core_harv_ctrcu_field harv_ctrcu_field
 * @brief macros for field harv_ctrcu
 * @details SwchReqCan/MustHarv comparators current
 * @{
 */
#define PMU_PMU10__HARV_CTRCU__SHIFT                                          0
#define PMU_PMU10__HARV_CTRCU__WIDTH                                          6
#define PMU_PMU10__HARV_CTRCU__MASK                                 0x0000003fU
#define PMU_PMU10__HARV_CTRCU__READ(src)        ((uint32_t)(src) & 0x0000003fU)
#define PMU_PMU10__HARV_CTRCU__WRITE(src)       ((uint32_t)(src) & 0x0000003fU)
#define PMU_PMU10__HARV_CTRCU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000003fU) | ((uint32_t)(src) &\
                    0x0000003fU)
#define PMU_PMU10__HARV_CTRCU__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x0000003fU)))
#define PMU_PMU10__HARV_CTRCU__RESET_VALUE                          0x0000000bU
/** @} */

/* macros for field bg_active */
/**
 * @defgroup pmu_top_regs_core_bg_active_field bg_active_field
 * @brief macros for field bg_active
 * @details bandgap ref for active mode, 0 for NATIVE, 1 for PMUBG
 * @{
 */
#define PMU_PMU10__BG_ACTIVE__SHIFT                                           6
#define PMU_PMU10__BG_ACTIVE__WIDTH                                           1
#define PMU_PMU10__BG_ACTIVE__MASK                                  0x00000040U
#define PMU_PMU10__BG_ACTIVE__READ(src)  (((uint32_t)(src) & 0x00000040U) >> 6)
#define PMU_PMU10__BG_ACTIVE__WRITE(src) (((uint32_t)(src) << 6) & 0x00000040U)
#define PMU_PMU10__BG_ACTIVE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000040U) | (((uint32_t)(src) <<\
                    6) & 0x00000040U)
#define PMU_PMU10__BG_ACTIVE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 6) & ~0x00000040U)))
#define PMU_PMU10__BG_ACTIVE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000040U) | ((uint32_t)(1) << 6)
#define PMU_PMU10__BG_ACTIVE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000040U) | ((uint32_t)(0) << 6)
#define PMU_PMU10__BG_ACTIVE__RESET_VALUE                           0x00000001U
/** @} */

/* macros for field bg_socoff */
/**
 * @defgroup pmu_top_regs_core_bg_socoff_field bg_socoff_field
 * @brief macros for field bg_socoff
 * @details bandgap ref for soc-off mode, 0 for NATIVE, 1 for PMUBG
 * @{
 */
#define PMU_PMU10__BG_SOCOFF__SHIFT                                           7
#define PMU_PMU10__BG_SOCOFF__WIDTH                                           1
#define PMU_PMU10__BG_SOCOFF__MASK                                  0x00000080U
#define PMU_PMU10__BG_SOCOFF__READ(src)  (((uint32_t)(src) & 0x00000080U) >> 7)
#define PMU_PMU10__BG_SOCOFF__WRITE(src) (((uint32_t)(src) << 7) & 0x00000080U)
#define PMU_PMU10__BG_SOCOFF__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000080U) | (((uint32_t)(src) <<\
                    7) & 0x00000080U)
#define PMU_PMU10__BG_SOCOFF__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 7) & ~0x00000080U)))
#define PMU_PMU10__BG_SOCOFF__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000080U) | ((uint32_t)(1) << 7)
#define PMU_PMU10__BG_SOCOFF__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000080U) | ((uint32_t)(0) << 7)
#define PMU_PMU10__BG_SOCOFF__RESET_VALUE                           0x00000000U
/** @} */

/* macros for field bg_hibernate */
/**
 * @defgroup pmu_top_regs_core_bg_hibernate_field bg_hibernate_field
 * @brief macros for field bg_hibernate
 * @details bandgap ref for hibernate mode, 0 for NATIVE, 1 for PMUBG
 * @{
 */
#define PMU_PMU10__BG_HIBERNATE__SHIFT                                        8
#define PMU_PMU10__BG_HIBERNATE__WIDTH                                        1
#define PMU_PMU10__BG_HIBERNATE__MASK                               0x00000100U
#define PMU_PMU10__BG_HIBERNATE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000100U) >> 8)
#define PMU_PMU10__BG_HIBERNATE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x00000100U)
#define PMU_PMU10__BG_HIBERNATE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000100U) | (((uint32_t)(src) <<\
                    8) & 0x00000100U)
#define PMU_PMU10__BG_HIBERNATE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x00000100U)))
#define PMU_PMU10__BG_HIBERNATE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000100U) | ((uint32_t)(1) << 8)
#define PMU_PMU10__BG_HIBERNATE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000100U) | ((uint32_t)(0) << 8)
#define PMU_PMU10__BG_HIBERNATE__RESET_VALUE                        0x00000000U
/** @} */

/* macros for field bg_retain */
/**
 * @defgroup pmu_top_regs_core_bg_retain_field bg_retain_field
 * @brief macros for field bg_retain
 * @details bandgap ref for retention mode, 0 for NATIVE, 1 for PMUBG
 * @{
 */
#define PMU_PMU10__BG_RETAIN__SHIFT                                           9
#define PMU_PMU10__BG_RETAIN__WIDTH                                           1
#define PMU_PMU10__BG_RETAIN__MASK                                  0x00000200U
#define PMU_PMU10__BG_RETAIN__READ(src)  (((uint32_t)(src) & 0x00000200U) >> 9)
#define PMU_PMU10__BG_RETAIN__WRITE(src) (((uint32_t)(src) << 9) & 0x00000200U)
#define PMU_PMU10__BG_RETAIN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000200U) | (((uint32_t)(src) <<\
                    9) & 0x00000200U)
#define PMU_PMU10__BG_RETAIN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 9) & ~0x00000200U)))
#define PMU_PMU10__BG_RETAIN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000200U) | ((uint32_t)(1) << 9)
#define PMU_PMU10__BG_RETAIN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000200U) | ((uint32_t)(0) << 9)
#define PMU_PMU10__BG_RETAIN__RESET_VALUE                           0x00000000U
/** @} */

/* macros for field vtrack_hibernate */
/**
 * @defgroup pmu_top_regs_core_vtrack_hibernate_field vtrack_hibernate_field
 * @brief macros for field vtrack_hibernate
 * @details tracking selected for hibernate , 0 for TRACK07, 1 for TRACK1
 * @{
 */
#define PMU_PMU10__VTRACK_HIBERNATE__SHIFT                                   10
#define PMU_PMU10__VTRACK_HIBERNATE__WIDTH                                    1
#define PMU_PMU10__VTRACK_HIBERNATE__MASK                           0x00000400U
#define PMU_PMU10__VTRACK_HIBERNATE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000400U) >> 10)
#define PMU_PMU10__VTRACK_HIBERNATE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 10) & 0x00000400U)
#define PMU_PMU10__VTRACK_HIBERNATE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000400U) | (((uint32_t)(src) <<\
                    10) & 0x00000400U)
#define PMU_PMU10__VTRACK_HIBERNATE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 10) & ~0x00000400U)))
#define PMU_PMU10__VTRACK_HIBERNATE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000400U) | ((uint32_t)(1) << 10)
#define PMU_PMU10__VTRACK_HIBERNATE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000400U) | ((uint32_t)(0) << 10)
#define PMU_PMU10__VTRACK_HIBERNATE__RESET_VALUE                    0x00000000U
/** @} */

/* macros for field RGpmurect_rfcapreconf_b */
/**
 * @defgroup pmu_top_regs_core_RGpmurect_rfcapreconf_b_field RGpmurect_rfcapreconf_b_field
 * @brief macros for field RGpmurect_rfcapreconf_b
 * @details Harvest1 rectifier capbank, 0: largest cap, 7: no cap
 * @{
 */
#define PMU_PMU10__RGPMURECT_RFCAPRECONF_B__SHIFT                            11
#define PMU_PMU10__RGPMURECT_RFCAPRECONF_B__WIDTH                             3
#define PMU_PMU10__RGPMURECT_RFCAPRECONF_B__MASK                    0x00003800U
#define PMU_PMU10__RGPMURECT_RFCAPRECONF_B__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00003800U) >> 11)
#define PMU_PMU10__RGPMURECT_RFCAPRECONF_B__WRITE(src) \
                    (((uint32_t)(src)\
                    << 11) & 0x00003800U)
#define PMU_PMU10__RGPMURECT_RFCAPRECONF_B__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00003800U) | (((uint32_t)(src) <<\
                    11) & 0x00003800U)
#define PMU_PMU10__RGPMURECT_RFCAPRECONF_B__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 11) & ~0x00003800U)))
#define PMU_PMU10__RGPMURECT_RFCAPRECONF_B__RESET_VALUE             0x00000007U
/** @} */

/* macros for field RGpmurect_rfcaphisens_b */
/**
 * @defgroup pmu_top_regs_core_RGpmurect_rfcaphisens_b_field RGpmurect_rfcaphisens_b_field
 * @brief macros for field RGpmurect_rfcaphisens_b
 * @details Harvest2 rectifier capbank, 0: largest cap, 15: no cap
 * @{
 */
#define PMU_PMU10__RGPMURECT_RFCAPHISENS_B__SHIFT                            14
#define PMU_PMU10__RGPMURECT_RFCAPHISENS_B__WIDTH                             4
#define PMU_PMU10__RGPMURECT_RFCAPHISENS_B__MASK                    0x0003c000U
#define PMU_PMU10__RGPMURECT_RFCAPHISENS_B__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0003c000U) >> 14)
#define PMU_PMU10__RGPMURECT_RFCAPHISENS_B__WRITE(src) \
                    (((uint32_t)(src)\
                    << 14) & 0x0003c000U)
#define PMU_PMU10__RGPMURECT_RFCAPHISENS_B__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0003c000U) | (((uint32_t)(src) <<\
                    14) & 0x0003c000U)
#define PMU_PMU10__RGPMURECT_RFCAPHISENS_B__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 14) & ~0x0003c000U)))
#define PMU_PMU10__RGPMURECT_RFCAPHISENS_B__RESET_VALUE             0x0000000fU
/** @} */

/* macros for field buck_store2core_ovr */
/**
 * @defgroup pmu_top_regs_core_buck_store2core_ovr_field buck_store2core_ovr_field
 * @brief macros for field buck_store2core_ovr
 * @details Control buckboost/buck mode from Vstor to core supplies.1: buckboost mode from Vstor to core supplies0: If VstoreGoodtoTX=1=>buck mode from Vstor to core supplies0: If VstoreGoodtoTX=0=>buckboost mode from Vstor to core supplies
 * @{
 */
#define PMU_PMU10__BUCK_STORE2CORE_OVR__SHIFT                                18
#define PMU_PMU10__BUCK_STORE2CORE_OVR__WIDTH                                 1
#define PMU_PMU10__BUCK_STORE2CORE_OVR__MASK                        0x00040000U
#define PMU_PMU10__BUCK_STORE2CORE_OVR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00040000U) >> 18)
#define PMU_PMU10__BUCK_STORE2CORE_OVR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 18) & 0x00040000U)
#define PMU_PMU10__BUCK_STORE2CORE_OVR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | (((uint32_t)(src) <<\
                    18) & 0x00040000U)
#define PMU_PMU10__BUCK_STORE2CORE_OVR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 18) & ~0x00040000U)))
#define PMU_PMU10__BUCK_STORE2CORE_OVR__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(1) << 18)
#define PMU_PMU10__BUCK_STORE2CORE_OVR__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(0) << 18)
#define PMU_PMU10__BUCK_STORE2CORE_OVR__RESET_VALUE                 0x00000000U
/** @} */

/* macros for field dvddref_active */
/**
 * @defgroup pmu_top_regs_core_dvddref_active_field dvddref_active_field
 * @brief macros for field dvddref_active
 * @details which ref to be used in active mode, 1 for REFGEN, 0 for TRACK
 * @{
 */
#define PMU_PMU10__DVDDREF_ACTIVE__SHIFT                                     19
#define PMU_PMU10__DVDDREF_ACTIVE__WIDTH                                      1
#define PMU_PMU10__DVDDREF_ACTIVE__MASK                             0x00080000U
#define PMU_PMU10__DVDDREF_ACTIVE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00080000U) >> 19)
#define PMU_PMU10__DVDDREF_ACTIVE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 19) & 0x00080000U)
#define PMU_PMU10__DVDDREF_ACTIVE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00080000U) | (((uint32_t)(src) <<\
                    19) & 0x00080000U)
#define PMU_PMU10__DVDDREF_ACTIVE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 19) & ~0x00080000U)))
#define PMU_PMU10__DVDDREF_ACTIVE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00080000U) | ((uint32_t)(1) << 19)
#define PMU_PMU10__DVDDREF_ACTIVE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00080000U) | ((uint32_t)(0) << 19)
#define PMU_PMU10__DVDDREF_ACTIVE__RESET_VALUE                      0x00000001U
/** @} */

/* macros for field dvddref_socoff */
/**
 * @defgroup pmu_top_regs_core_dvddref_socoff_field dvddref_socoff_field
 * @brief macros for field dvddref_socoff
 * @details which ref to be used in soc-off mode, 1 for REFGEN, 0 for TRACK
 * @{
 */
#define PMU_PMU10__DVDDREF_SOCOFF__SHIFT                                     20
#define PMU_PMU10__DVDDREF_SOCOFF__WIDTH                                      1
#define PMU_PMU10__DVDDREF_SOCOFF__MASK                             0x00100000U
#define PMU_PMU10__DVDDREF_SOCOFF__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00100000U) >> 20)
#define PMU_PMU10__DVDDREF_SOCOFF__WRITE(src) \
                    (((uint32_t)(src)\
                    << 20) & 0x00100000U)
#define PMU_PMU10__DVDDREF_SOCOFF__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00100000U) | (((uint32_t)(src) <<\
                    20) & 0x00100000U)
#define PMU_PMU10__DVDDREF_SOCOFF__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 20) & ~0x00100000U)))
#define PMU_PMU10__DVDDREF_SOCOFF__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00100000U) | ((uint32_t)(1) << 20)
#define PMU_PMU10__DVDDREF_SOCOFF__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00100000U) | ((uint32_t)(0) << 20)
#define PMU_PMU10__DVDDREF_SOCOFF__RESET_VALUE                      0x00000000U
/** @} */

/* macros for field dvddref_hibernate */
/**
 * @defgroup pmu_top_regs_core_dvddref_hibernate_field dvddref_hibernate_field
 * @brief macros for field dvddref_hibernate
 * @details which ref to be used in hibernate mode, 1 for REFGEN, 0 for TRACK
 * @{
 */
#define PMU_PMU10__DVDDREF_HIBERNATE__SHIFT                                  21
#define PMU_PMU10__DVDDREF_HIBERNATE__WIDTH                                   1
#define PMU_PMU10__DVDDREF_HIBERNATE__MASK                          0x00200000U
#define PMU_PMU10__DVDDREF_HIBERNATE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00200000U) >> 21)
#define PMU_PMU10__DVDDREF_HIBERNATE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 21) & 0x00200000U)
#define PMU_PMU10__DVDDREF_HIBERNATE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00200000U) | (((uint32_t)(src) <<\
                    21) & 0x00200000U)
#define PMU_PMU10__DVDDREF_HIBERNATE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 21) & ~0x00200000U)))
#define PMU_PMU10__DVDDREF_HIBERNATE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00200000U) | ((uint32_t)(1) << 21)
#define PMU_PMU10__DVDDREF_HIBERNATE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00200000U) | ((uint32_t)(0) << 21)
#define PMU_PMU10__DVDDREF_HIBERNATE__RESET_VALUE                   0x00000001U
/** @} */

/* macros for field dvddref_retain */
/**
 * @defgroup pmu_top_regs_core_dvddref_retain_field dvddref_retain_field
 * @brief macros for field dvddref_retain
 * @details which ref to be used in retain mode, 1 for REFGEN, 0 for TRACK
 * @{
 */
#define PMU_PMU10__DVDDREF_RETAIN__SHIFT                                     22
#define PMU_PMU10__DVDDREF_RETAIN__WIDTH                                      1
#define PMU_PMU10__DVDDREF_RETAIN__MASK                             0x00400000U
#define PMU_PMU10__DVDDREF_RETAIN__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00400000U) >> 22)
#define PMU_PMU10__DVDDREF_RETAIN__WRITE(src) \
                    (((uint32_t)(src)\
                    << 22) & 0x00400000U)
#define PMU_PMU10__DVDDREF_RETAIN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00400000U) | (((uint32_t)(src) <<\
                    22) & 0x00400000U)
#define PMU_PMU10__DVDDREF_RETAIN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 22) & ~0x00400000U)))
#define PMU_PMU10__DVDDREF_RETAIN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00400000U) | ((uint32_t)(1) << 22)
#define PMU_PMU10__DVDDREF_RETAIN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00400000U) | ((uint32_t)(0) << 22)
#define PMU_PMU10__DVDDREF_RETAIN__RESET_VALUE                      0x00000001U
/** @} */
#define PMU_PMU10__TYPE                                                uint32_t
#define PMU_PMU10__READ                                             0x007fffffU
#define PMU_PMU10__WRITE                                            0x007fffffU
#define PMU_PMU10__PRESERVED                                        0x00000000U
#define PMU_PMU10__RESET_VALUE                                      0x006bf84bU

#endif /* __PMU_PMU10_MACRO__ */

/** @} end of pmu10 */

/* macros for BlueprintGlobalNameSpace::PMU_pmu11 */
/**
 * @defgroup pmu_top_regs_core_pmu11 pmu11
 * @brief atb and clocks definitions.
 * @{
 */
#ifndef __PMU_PMU11_MACRO__
#define __PMU_PMU11_MACRO__

/* macros for field wurx_clk_en */
/**
 * @defgroup pmu_top_regs_core_wurx_clk_en_field wurx_clk_en_field
 * @brief macros for field wurx_clk_en
 * @details clk enable for wurx 32KHz clk
 * @{
 */
#define PMU_PMU11__WURX_CLK_EN__SHIFT                                         0
#define PMU_PMU11__WURX_CLK_EN__WIDTH                                         1
#define PMU_PMU11__WURX_CLK_EN__MASK                                0x00000001U
#define PMU_PMU11__WURX_CLK_EN__READ(src)       ((uint32_t)(src) & 0x00000001U)
#define PMU_PMU11__WURX_CLK_EN__WRITE(src)      ((uint32_t)(src) & 0x00000001U)
#define PMU_PMU11__WURX_CLK_EN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define PMU_PMU11__WURX_CLK_EN__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define PMU_PMU11__WURX_CLK_EN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define PMU_PMU11__WURX_CLK_EN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define PMU_PMU11__WURX_CLK_EN__RESET_VALUE                         0x00000000U
/** @} */

/* macros for field dig_clk_en */
/**
 * @defgroup pmu_top_regs_core_dig_clk_en_field dig_clk_en_field
 * @brief macros for field dig_clk_en
 * @details clk enable for digital 32KHz clk
 * @{
 */
#define PMU_PMU11__DIG_CLK_EN__SHIFT                                          1
#define PMU_PMU11__DIG_CLK_EN__WIDTH                                          1
#define PMU_PMU11__DIG_CLK_EN__MASK                                 0x00000002U
#define PMU_PMU11__DIG_CLK_EN__READ(src) (((uint32_t)(src) & 0x00000002U) >> 1)
#define PMU_PMU11__DIG_CLK_EN__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define PMU_PMU11__DIG_CLK_EN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define PMU_PMU11__DIG_CLK_EN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define PMU_PMU11__DIG_CLK_EN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define PMU_PMU11__DIG_CLK_EN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define PMU_PMU11__DIG_CLK_EN__RESET_VALUE                          0x00000001U
/** @} */

/* macros for field atb_en */
/**
 * @defgroup pmu_top_regs_core_atb_en_field atb_en_field
 * @brief macros for field atb_en
 * @details atb enable for pmu
 * @{
 */
#define PMU_PMU11__ATB_EN__SHIFT                                              2
#define PMU_PMU11__ATB_EN__WIDTH                                              1
#define PMU_PMU11__ATB_EN__MASK                                     0x00000004U
#define PMU_PMU11__ATB_EN__READ(src)     (((uint32_t)(src) & 0x00000004U) >> 2)
#define PMU_PMU11__ATB_EN__WRITE(src)    (((uint32_t)(src) << 2) & 0x00000004U)
#define PMU_PMU11__ATB_EN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | (((uint32_t)(src) <<\
                    2) & 0x00000004U)
#define PMU_PMU11__ATB_EN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 2) & ~0x00000004U)))
#define PMU_PMU11__ATB_EN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(1) << 2)
#define PMU_PMU11__ATB_EN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(0) << 2)
#define PMU_PMU11__ATB_EN__RESET_VALUE                              0x00000000U
/** @} */

/* macros for field atb_select */
/**
 * @defgroup pmu_top_regs_core_atb_select_field atb_select_field
 * @brief macros for field atb_select
 * @details atb selects for pmu01010 VBG600mT01001 vrefnat550T01000 refladT<2>00111 refladT<1>00110 VrefBGdvddT00101 vrefporpmuT00100 VrefBGporsocT00011 vrefstogoodtoEnerST00010 vrefstogoodforTXST00001 VrefbrowovbatT00000 DVDDmem11010 VrefTR1dvddT11001 VrefTR08dvddT11000 VrectstagerepldivlowT10111 VrectstagerepldivhighT10110 porb_pmudvdd_HT10101 Vreflpc010100 Vreflpc110011 refi_reconfT10010 refo_reconfT10001 refi_hisensT10000 refo_hisensT
 * @{
 */
#define PMU_PMU11__ATB_SELECT__SHIFT                                          3
#define PMU_PMU11__ATB_SELECT__WIDTH                                          5
#define PMU_PMU11__ATB_SELECT__MASK                                 0x000000f8U
#define PMU_PMU11__ATB_SELECT__READ(src) (((uint32_t)(src) & 0x000000f8U) >> 3)
#define PMU_PMU11__ATB_SELECT__WRITE(src) \
                    (((uint32_t)(src)\
                    << 3) & 0x000000f8U)
#define PMU_PMU11__ATB_SELECT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000f8U) | (((uint32_t)(src) <<\
                    3) & 0x000000f8U)
#define PMU_PMU11__ATB_SELECT__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 3) & ~0x000000f8U)))
#define PMU_PMU11__ATB_SELECT__RESET_VALUE                          0x00000000U
/** @} */

/* macros for field lpcomp_ref */
/**
 * @defgroup pmu_top_regs_core_lpcomp_ref_field lpcomp_ref_field
 * @brief macros for field lpcomp_ref
 * @details reference select for lpcomp25*[65,61,57,53,49,45,41,37,33,29,25,21,17,13,9,5] for i=[15:0]
 * @{
 */
#define PMU_PMU11__LPCOMP_REF__SHIFT                                          8
#define PMU_PMU11__LPCOMP_REF__WIDTH                                          4
#define PMU_PMU11__LPCOMP_REF__MASK                                 0x00000f00U
#define PMU_PMU11__LPCOMP_REF__READ(src) (((uint32_t)(src) & 0x00000f00U) >> 8)
#define PMU_PMU11__LPCOMP_REF__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x00000f00U)
#define PMU_PMU11__LPCOMP_REF__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000f00U) | (((uint32_t)(src) <<\
                    8) & 0x00000f00U)
#define PMU_PMU11__LPCOMP_REF__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x00000f00U)))
#define PMU_PMU11__LPCOMP_REF__RESET_VALUE                          0x00000008U
/** @} */

/* macros for field lpcomp_ref_hys */
/**
 * @defgroup pmu_top_regs_core_lpcomp_ref_hys_field lpcomp_ref_hys_field
 * @brief macros for field lpcomp_ref_hys
 * @details reference select for lpcomp hysteresis25*[66,62,58,54,50,46,42,38,34,30,26,22,18,14,10,6] for i=[15:0]
 * @{
 */
#define PMU_PMU11__LPCOMP_REF_HYS__SHIFT                                     12
#define PMU_PMU11__LPCOMP_REF_HYS__WIDTH                                      4
#define PMU_PMU11__LPCOMP_REF_HYS__MASK                             0x0000f000U
#define PMU_PMU11__LPCOMP_REF_HYS__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000f000U) >> 12)
#define PMU_PMU11__LPCOMP_REF_HYS__WRITE(src) \
                    (((uint32_t)(src)\
                    << 12) & 0x0000f000U)
#define PMU_PMU11__LPCOMP_REF_HYS__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000f000U) | (((uint32_t)(src) <<\
                    12) & 0x0000f000U)
#define PMU_PMU11__LPCOMP_REF_HYS__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 12) & ~0x0000f000U)))
#define PMU_PMU11__LPCOMP_REF_HYS__RESET_VALUE                      0x00000009U
/** @} */

/* macros for field lpcomp_atb_sel */
/**
 * @defgroup pmu_top_regs_core_lpcomp_atb_sel_field lpcomp_atb_sel_field
 * @brief macros for field lpcomp_atb_sel
 * @details atbselect for lpcomp
 * @{
 */
#define PMU_PMU11__LPCOMP_ATB_SEL__SHIFT                                     16
#define PMU_PMU11__LPCOMP_ATB_SEL__WIDTH                                      1
#define PMU_PMU11__LPCOMP_ATB_SEL__MASK                             0x00010000U
#define PMU_PMU11__LPCOMP_ATB_SEL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00010000U) >> 16)
#define PMU_PMU11__LPCOMP_ATB_SEL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00010000U)
#define PMU_PMU11__LPCOMP_ATB_SEL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00010000U) | (((uint32_t)(src) <<\
                    16) & 0x00010000U)
#define PMU_PMU11__LPCOMP_ATB_SEL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00010000U)))
#define PMU_PMU11__LPCOMP_ATB_SEL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00010000U) | ((uint32_t)(1) << 16)
#define PMU_PMU11__LPCOMP_ATB_SEL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00010000U) | ((uint32_t)(0) << 16)
#define PMU_PMU11__LPCOMP_ATB_SEL__RESET_VALUE                      0x00000000U
/** @} */

/* macros for field pmu_pin_mux_sel */
/**
 * @defgroup pmu_top_regs_core_pmu_pin_mux_sel_field pmu_pin_mux_sel_field
 * @brief macros for field pmu_pin_mux_sel
 * @details pin mux select from analog
 * @{
 */
#define PMU_PMU11__PMU_PIN_MUX_SEL__SHIFT                                    17
#define PMU_PMU11__PMU_PIN_MUX_SEL__WIDTH                                     2
#define PMU_PMU11__PMU_PIN_MUX_SEL__MASK                            0x00060000U
#define PMU_PMU11__PMU_PIN_MUX_SEL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00060000U) >> 17)
#define PMU_PMU11__PMU_PIN_MUX_SEL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 17) & 0x00060000U)
#define PMU_PMU11__PMU_PIN_MUX_SEL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00060000U) | (((uint32_t)(src) <<\
                    17) & 0x00060000U)
#define PMU_PMU11__PMU_PIN_MUX_SEL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 17) & ~0x00060000U)))
#define PMU_PMU11__PMU_PIN_MUX_SEL__RESET_VALUE                     0x00000000U
/** @} */

/* macros for field ctr_ref_gadc */
/**
 * @defgroup pmu_top_regs_core_ctr_ref_gadc_field ctr_ref_gadc_field
 * @brief macros for field ctr_ref_gadc
 * @details reference for gadc25*(24+i)mV, i=0:3
 * @{
 */
#define PMU_PMU11__CTR_REF_GADC__SHIFT                                       19
#define PMU_PMU11__CTR_REF_GADC__WIDTH                                        2
#define PMU_PMU11__CTR_REF_GADC__MASK                               0x00180000U
#define PMU_PMU11__CTR_REF_GADC__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00180000U) >> 19)
#define PMU_PMU11__CTR_REF_GADC__WRITE(src) \
                    (((uint32_t)(src)\
                    << 19) & 0x00180000U)
#define PMU_PMU11__CTR_REF_GADC__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00180000U) | (((uint32_t)(src) <<\
                    19) & 0x00180000U)
#define PMU_PMU11__CTR_REF_GADC__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 19) & ~0x00180000U)))
#define PMU_PMU11__CTR_REF_GADC__RESET_VALUE                        0x00000000U
/** @} */

/* macros for field gadc_cutvdd_b_ovr */
/**
 * @defgroup pmu_top_regs_core_gadc_cutvdd_b_ovr_field gadc_cutvdd_b_ovr_field
 * @brief macros for field gadc_cutvdd_b_ovr
 * @details for test
 * @{
 */
#define PMU_PMU11__GADC_CUTVDD_B_OVR__SHIFT                                  21
#define PMU_PMU11__GADC_CUTVDD_B_OVR__WIDTH                                   1
#define PMU_PMU11__GADC_CUTVDD_B_OVR__MASK                          0x00200000U
#define PMU_PMU11__GADC_CUTVDD_B_OVR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00200000U) >> 21)
#define PMU_PMU11__GADC_CUTVDD_B_OVR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 21) & 0x00200000U)
#define PMU_PMU11__GADC_CUTVDD_B_OVR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00200000U) | (((uint32_t)(src) <<\
                    21) & 0x00200000U)
#define PMU_PMU11__GADC_CUTVDD_B_OVR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 21) & ~0x00200000U)))
#define PMU_PMU11__GADC_CUTVDD_B_OVR__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00200000U) | ((uint32_t)(1) << 21)
#define PMU_PMU11__GADC_CUTVDD_B_OVR__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00200000U) | ((uint32_t)(0) << 21)
#define PMU_PMU11__GADC_CUTVDD_B_OVR__RESET_VALUE                   0x00000000U
/** @} */

/* macros for field gadc_cutvdd_b_ovr_val */
/**
 * @defgroup pmu_top_regs_core_gadc_cutvdd_b_ovr_val_field gadc_cutvdd_b_ovr_val_field
 * @brief macros for field gadc_cutvdd_b_ovr_val
 * @details for test
 * @{
 */
#define PMU_PMU11__GADC_CUTVDD_B_OVR_VAL__SHIFT                              22
#define PMU_PMU11__GADC_CUTVDD_B_OVR_VAL__WIDTH                               1
#define PMU_PMU11__GADC_CUTVDD_B_OVR_VAL__MASK                      0x00400000U
#define PMU_PMU11__GADC_CUTVDD_B_OVR_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00400000U) >> 22)
#define PMU_PMU11__GADC_CUTVDD_B_OVR_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 22) & 0x00400000U)
#define PMU_PMU11__GADC_CUTVDD_B_OVR_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00400000U) | (((uint32_t)(src) <<\
                    22) & 0x00400000U)
#define PMU_PMU11__GADC_CUTVDD_B_OVR_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 22) & ~0x00400000U)))
#define PMU_PMU11__GADC_CUTVDD_B_OVR_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00400000U) | ((uint32_t)(1) << 22)
#define PMU_PMU11__GADC_CUTVDD_B_OVR_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00400000U) | ((uint32_t)(0) << 22)
#define PMU_PMU11__GADC_CUTVDD_B_OVR_VAL__RESET_VALUE               0x00000000U
/** @} */

/* macros for field otp_disable_xtal32K_ovr_val */
/**
 * @defgroup pmu_top_regs_core_otp_disable_xtal32K_ovr_val_field otp_disable_xtal32K_ovr_val_field
 * @brief macros for field otp_disable_xtal32K_ovr_val
 * @details override for xtal32K
 * @{
 */
#define PMU_PMU11__OTP_DISABLE_XTAL32K_OVR_VAL__SHIFT                        23
#define PMU_PMU11__OTP_DISABLE_XTAL32K_OVR_VAL__WIDTH                         1
#define PMU_PMU11__OTP_DISABLE_XTAL32K_OVR_VAL__MASK                0x00800000U
#define PMU_PMU11__OTP_DISABLE_XTAL32K_OVR_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00800000U) >> 23)
#define PMU_PMU11__OTP_DISABLE_XTAL32K_OVR_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 23) & 0x00800000U)
#define PMU_PMU11__OTP_DISABLE_XTAL32K_OVR_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | (((uint32_t)(src) <<\
                    23) & 0x00800000U)
#define PMU_PMU11__OTP_DISABLE_XTAL32K_OVR_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 23) & ~0x00800000U)))
#define PMU_PMU11__OTP_DISABLE_XTAL32K_OVR_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(1) << 23)
#define PMU_PMU11__OTP_DISABLE_XTAL32K_OVR_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(0) << 23)
#define PMU_PMU11__OTP_DISABLE_XTAL32K_OVR_VAL__RESET_VALUE         0x00000000U
/** @} */
#define PMU_PMU11__TYPE                                                uint32_t
#define PMU_PMU11__READ                                             0x00ffffffU
#define PMU_PMU11__WRITE                                            0x00ffffffU
#define PMU_PMU11__PRESERVED                                        0x00000000U
#define PMU_PMU11__RESET_VALUE                                      0x00009802U

#endif /* __PMU_PMU11_MACRO__ */

/** @} end of pmu11 */

/* macros for BlueprintGlobalNameSpace::PMU_pmu12 */
/**
 * @defgroup pmu_top_regs_core_pmu12 pmu12
 * @brief test registers and overrides definitions.
 * @{
 */
#ifndef __PMU_PMU12_MACRO__
#define __PMU_PMU12_MACRO__

/* macros for field otp_ovr */
/**
 * @defgroup pmu_top_regs_core_otp_ovr_field otp_ovr_field
 * @brief macros for field otp_ovr
 * @details 1: overriding otp values for test
 * @{
 */
#define PMU_PMU12__OTP_OVR__SHIFT                                             0
#define PMU_PMU12__OTP_OVR__WIDTH                                             1
#define PMU_PMU12__OTP_OVR__MASK                                    0x00000001U
#define PMU_PMU12__OTP_OVR__READ(src)           ((uint32_t)(src) & 0x00000001U)
#define PMU_PMU12__OTP_OVR__WRITE(src)          ((uint32_t)(src) & 0x00000001U)
#define PMU_PMU12__OTP_OVR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define PMU_PMU12__OTP_OVR__VERIFY(src)   (!(((uint32_t)(src) & ~0x00000001U)))
#define PMU_PMU12__OTP_OVR__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define PMU_PMU12__OTP_OVR__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define PMU_PMU12__OTP_OVR__RESET_VALUE                             0x00000000U
/** @} */

/* macros for field otp_batt_type_ovr_val */
/**
 * @defgroup pmu_top_regs_core_otp_batt_type_ovr_val_field otp_batt_type_ovr_val_field
 * @brief macros for field otp_batt_type_ovr_val
 * @details 0: single cell, 1: dual cell, 2: no batt, 3: rechargable
 * @{
 */
#define PMU_PMU12__OTP_BATT_TYPE_OVR_VAL__SHIFT                               1
#define PMU_PMU12__OTP_BATT_TYPE_OVR_VAL__WIDTH                               2
#define PMU_PMU12__OTP_BATT_TYPE_OVR_VAL__MASK                      0x00000006U
#define PMU_PMU12__OTP_BATT_TYPE_OVR_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000006U) >> 1)
#define PMU_PMU12__OTP_BATT_TYPE_OVR_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000006U)
#define PMU_PMU12__OTP_BATT_TYPE_OVR_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000006U) | (((uint32_t)(src) <<\
                    1) & 0x00000006U)
#define PMU_PMU12__OTP_BATT_TYPE_OVR_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000006U)))
#define PMU_PMU12__OTP_BATT_TYPE_OVR_VAL__RESET_VALUE               0x00000000U
/** @} */

/* macros for field otp_harv_type_ovr_val */
/**
 * @defgroup pmu_top_regs_core_otp_harv_type_ovr_val_field otp_harv_type_ovr_val_field
 * @brief macros for field otp_harv_type_ovr_val
 * @details 0: Voltage regulation for solar or RF, 1: MPPT regulation for RF only
 * @{
 */
#define PMU_PMU12__OTP_HARV_TYPE_OVR_VAL__SHIFT                               3
#define PMU_PMU12__OTP_HARV_TYPE_OVR_VAL__WIDTH                               1
#define PMU_PMU12__OTP_HARV_TYPE_OVR_VAL__MASK                      0x00000008U
#define PMU_PMU12__OTP_HARV_TYPE_OVR_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000008U) >> 3)
#define PMU_PMU12__OTP_HARV_TYPE_OVR_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 3) & 0x00000008U)
#define PMU_PMU12__OTP_HARV_TYPE_OVR_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | (((uint32_t)(src) <<\
                    3) & 0x00000008U)
#define PMU_PMU12__OTP_HARV_TYPE_OVR_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 3) & ~0x00000008U)))
#define PMU_PMU12__OTP_HARV_TYPE_OVR_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((uint32_t)(1) << 3)
#define PMU_PMU12__OTP_HARV_TYPE_OVR_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((uint32_t)(0) << 3)
#define PMU_PMU12__OTP_HARV_TYPE_OVR_VAL__RESET_VALUE               0x00000000U
/** @} */

/* macros for field otp_disable_vddIO_ovr_val */
/**
 * @defgroup pmu_top_regs_core_otp_disable_vddIO_ovr_val_field otp_disable_vddIO_ovr_val_field
 * @brief macros for field otp_disable_vddIO_ovr_val
 * @details 1: need to provide vddIO externally
 * @{
 */
#define PMU_PMU12__OTP_DISABLE_VDDIO_OVR_VAL__SHIFT                           4
#define PMU_PMU12__OTP_DISABLE_VDDIO_OVR_VAL__WIDTH                           1
#define PMU_PMU12__OTP_DISABLE_VDDIO_OVR_VAL__MASK                  0x00000010U
#define PMU_PMU12__OTP_DISABLE_VDDIO_OVR_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000010U) >> 4)
#define PMU_PMU12__OTP_DISABLE_VDDIO_OVR_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 4) & 0x00000010U)
#define PMU_PMU12__OTP_DISABLE_VDDIO_OVR_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | (((uint32_t)(src) <<\
                    4) & 0x00000010U)
#define PMU_PMU12__OTP_DISABLE_VDDIO_OVR_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 4) & ~0x00000010U)))
#define PMU_PMU12__OTP_DISABLE_VDDIO_OVR_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(1) << 4)
#define PMU_PMU12__OTP_DISABLE_VDDIO_OVR_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(0) << 4)
#define PMU_PMU12__OTP_DISABLE_VDDIO_OVR_VAL__RESET_VALUE           0x00000001U
/** @} */

/* macros for field otp_disable_vdd_ovr_val */
/**
 * @defgroup pmu_top_regs_core_otp_disable_vdd_ovr_val_field otp_disable_vdd_ovr_val_field
 * @brief macros for field otp_disable_vdd_ovr_val
 * @details 1: need to provide vdd externally
 * @{
 */
#define PMU_PMU12__OTP_DISABLE_VDD_OVR_VAL__SHIFT                             5
#define PMU_PMU12__OTP_DISABLE_VDD_OVR_VAL__WIDTH                             1
#define PMU_PMU12__OTP_DISABLE_VDD_OVR_VAL__MASK                    0x00000020U
#define PMU_PMU12__OTP_DISABLE_VDD_OVR_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000020U) >> 5)
#define PMU_PMU12__OTP_DISABLE_VDD_OVR_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 5) & 0x00000020U)
#define PMU_PMU12__OTP_DISABLE_VDD_OVR_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | (((uint32_t)(src) <<\
                    5) & 0x00000020U)
#define PMU_PMU12__OTP_DISABLE_VDD_OVR_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 5) & ~0x00000020U)))
#define PMU_PMU12__OTP_DISABLE_VDD_OVR_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | ((uint32_t)(1) << 5)
#define PMU_PMU12__OTP_DISABLE_VDD_OVR_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | ((uint32_t)(0) << 5)
#define PMU_PMU12__OTP_DISABLE_VDD_OVR_VAL__RESET_VALUE             0x00000000U
/** @} */

/* macros for field otp_nabg_trim_ovr_val */
/**
 * @defgroup pmu_top_regs_core_otp_nabg_trim_ovr_val_field otp_nabg_trim_ovr_val_field
 * @brief macros for field otp_nabg_trim_ovr_val
 * @details trimming bits for native bandgap
 * @{
 */
#define PMU_PMU12__OTP_NABG_TRIM_OVR_VAL__SHIFT                               6
#define PMU_PMU12__OTP_NABG_TRIM_OVR_VAL__WIDTH                               9
#define PMU_PMU12__OTP_NABG_TRIM_OVR_VAL__MASK                      0x00007fc0U
#define PMU_PMU12__OTP_NABG_TRIM_OVR_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00007fc0U) >> 6)
#define PMU_PMU12__OTP_NABG_TRIM_OVR_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 6) & 0x00007fc0U)
#define PMU_PMU12__OTP_NABG_TRIM_OVR_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00007fc0U) | (((uint32_t)(src) <<\
                    6) & 0x00007fc0U)
#define PMU_PMU12__OTP_NABG_TRIM_OVR_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 6) & ~0x00007fc0U)))
#define PMU_PMU12__OTP_NABG_TRIM_OVR_VAL__RESET_VALUE               0x00000000U
/** @} */

/* macros for field otp_ready_val */
/**
 * @defgroup pmu_top_regs_core_otp_ready_val_field otp_ready_val_field
 * @brief macros for field otp_ready_val
 * @details otp is ready for reading
 * @{
 */
#define PMU_PMU12__OTP_READY_VAL__SHIFT                                      15
#define PMU_PMU12__OTP_READY_VAL__WIDTH                                       1
#define PMU_PMU12__OTP_READY_VAL__MASK                              0x00008000U
#define PMU_PMU12__OTP_READY_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00008000U) >> 15)
#define PMU_PMU12__OTP_READY_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 15) & 0x00008000U)
#define PMU_PMU12__OTP_READY_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00008000U) | (((uint32_t)(src) <<\
                    15) & 0x00008000U)
#define PMU_PMU12__OTP_READY_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 15) & ~0x00008000U)))
#define PMU_PMU12__OTP_READY_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00008000U) | ((uint32_t)(1) << 15)
#define PMU_PMU12__OTP_READY_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00008000U) | ((uint32_t)(0) << 15)
#define PMU_PMU12__OTP_READY_VAL__RESET_VALUE                       0x00000000U
/** @} */

/* macros for field otp_brwnout_thr_ovr_val */
/**
 * @defgroup pmu_top_regs_core_otp_brwnout_thr_ovr_val_field otp_brwnout_thr_ovr_val_field
 * @brief macros for field otp_brwnout_thr_ovr_val
 * @details battery brown out threshold
 * @{
 */
#define PMU_PMU12__OTP_BRWNOUT_THR_OVR_VAL__SHIFT                            16
#define PMU_PMU12__OTP_BRWNOUT_THR_OVR_VAL__WIDTH                             3
#define PMU_PMU12__OTP_BRWNOUT_THR_OVR_VAL__MASK                    0x00070000U
#define PMU_PMU12__OTP_BRWNOUT_THR_OVR_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00070000U) >> 16)
#define PMU_PMU12__OTP_BRWNOUT_THR_OVR_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00070000U)
#define PMU_PMU12__OTP_BRWNOUT_THR_OVR_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00070000U) | (((uint32_t)(src) <<\
                    16) & 0x00070000U)
#define PMU_PMU12__OTP_BRWNOUT_THR_OVR_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00070000U)))
#define PMU_PMU12__OTP_BRWNOUT_THR_OVR_VAL__RESET_VALUE             0x00000000U
/** @} */

/* macros for field otp_harv_disabled_ovr_val */
/**
 * @defgroup pmu_top_regs_core_otp_harv_disabled_ovr_val_field otp_harv_disabled_ovr_val_field
 * @brief macros for field otp_harv_disabled_ovr_val
 * @details disable sw timer and enable soc headswitch when sw is enabled
 * @{
 */
#define PMU_PMU12__OTP_HARV_DISABLED_OVR_VAL__SHIFT                          19
#define PMU_PMU12__OTP_HARV_DISABLED_OVR_VAL__WIDTH                           1
#define PMU_PMU12__OTP_HARV_DISABLED_OVR_VAL__MASK                  0x00080000U
#define PMU_PMU12__OTP_HARV_DISABLED_OVR_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00080000U) >> 19)
#define PMU_PMU12__OTP_HARV_DISABLED_OVR_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 19) & 0x00080000U)
#define PMU_PMU12__OTP_HARV_DISABLED_OVR_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00080000U) | (((uint32_t)(src) <<\
                    19) & 0x00080000U)
#define PMU_PMU12__OTP_HARV_DISABLED_OVR_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 19) & ~0x00080000U)))
#define PMU_PMU12__OTP_HARV_DISABLED_OVR_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00080000U) | ((uint32_t)(1) << 19)
#define PMU_PMU12__OTP_HARV_DISABLED_OVR_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00080000U) | ((uint32_t)(0) << 19)
#define PMU_PMU12__OTP_HARV_DISABLED_OVR_VAL__RESET_VALUE           0x00000000U
/** @} */

/* macros for field en_mem_hsw_b_ovr */
/**
 * @defgroup pmu_top_regs_core_en_mem_hsw_b_ovr_field en_mem_hsw_b_ovr_field
 * @brief macros for field en_mem_hsw_b_ovr
 * @details enable override mem head switch
 * @{
 */
#define PMU_PMU12__EN_MEM_HSW_B_OVR__SHIFT                                   20
#define PMU_PMU12__EN_MEM_HSW_B_OVR__WIDTH                                    1
#define PMU_PMU12__EN_MEM_HSW_B_OVR__MASK                           0x00100000U
#define PMU_PMU12__EN_MEM_HSW_B_OVR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00100000U) >> 20)
#define PMU_PMU12__EN_MEM_HSW_B_OVR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 20) & 0x00100000U)
#define PMU_PMU12__EN_MEM_HSW_B_OVR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00100000U) | (((uint32_t)(src) <<\
                    20) & 0x00100000U)
#define PMU_PMU12__EN_MEM_HSW_B_OVR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 20) & ~0x00100000U)))
#define PMU_PMU12__EN_MEM_HSW_B_OVR__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00100000U) | ((uint32_t)(1) << 20)
#define PMU_PMU12__EN_MEM_HSW_B_OVR__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00100000U) | ((uint32_t)(0) << 20)
#define PMU_PMU12__EN_MEM_HSW_B_OVR__RESET_VALUE                    0x00000000U
/** @} */

/* macros for field en_mem_hsw_b_ovr_val */
/**
 * @defgroup pmu_top_regs_core_en_mem_hsw_b_ovr_val_field en_mem_hsw_b_ovr_val_field
 * @brief macros for field en_mem_hsw_b_ovr_val
 * @details override_val for mem head switch
 * @{
 */
#define PMU_PMU12__EN_MEM_HSW_B_OVR_VAL__SHIFT                               21
#define PMU_PMU12__EN_MEM_HSW_B_OVR_VAL__WIDTH                                1
#define PMU_PMU12__EN_MEM_HSW_B_OVR_VAL__MASK                       0x00200000U
#define PMU_PMU12__EN_MEM_HSW_B_OVR_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00200000U) >> 21)
#define PMU_PMU12__EN_MEM_HSW_B_OVR_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 21) & 0x00200000U)
#define PMU_PMU12__EN_MEM_HSW_B_OVR_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00200000U) | (((uint32_t)(src) <<\
                    21) & 0x00200000U)
#define PMU_PMU12__EN_MEM_HSW_B_OVR_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 21) & ~0x00200000U)))
#define PMU_PMU12__EN_MEM_HSW_B_OVR_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00200000U) | ((uint32_t)(1) << 21)
#define PMU_PMU12__EN_MEM_HSW_B_OVR_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00200000U) | ((uint32_t)(0) << 21)
#define PMU_PMU12__EN_MEM_HSW_B_OVR_VAL__RESET_VALUE                0x00000000U
/** @} */

/* macros for field en_sw_hsw_b_ovr */
/**
 * @defgroup pmu_top_regs_core_en_sw_hsw_b_ovr_field en_sw_hsw_b_ovr_field
 * @brief macros for field en_sw_hsw_b_ovr
 * @details enable switcher headswitch override
 * @{
 */
#define PMU_PMU12__EN_SW_HSW_B_OVR__SHIFT                                    22
#define PMU_PMU12__EN_SW_HSW_B_OVR__WIDTH                                     1
#define PMU_PMU12__EN_SW_HSW_B_OVR__MASK                            0x00400000U
#define PMU_PMU12__EN_SW_HSW_B_OVR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00400000U) >> 22)
#define PMU_PMU12__EN_SW_HSW_B_OVR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 22) & 0x00400000U)
#define PMU_PMU12__EN_SW_HSW_B_OVR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00400000U) | (((uint32_t)(src) <<\
                    22) & 0x00400000U)
#define PMU_PMU12__EN_SW_HSW_B_OVR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 22) & ~0x00400000U)))
#define PMU_PMU12__EN_SW_HSW_B_OVR__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00400000U) | ((uint32_t)(1) << 22)
#define PMU_PMU12__EN_SW_HSW_B_OVR__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00400000U) | ((uint32_t)(0) << 22)
#define PMU_PMU12__EN_SW_HSW_B_OVR__RESET_VALUE                     0x00000000U
/** @} */

/* macros for field en_sw_hsw_b_ovr_val */
/**
 * @defgroup pmu_top_regs_core_en_sw_hsw_b_ovr_val_field en_sw_hsw_b_ovr_val_field
 * @brief macros for field en_sw_hsw_b_ovr_val
 * @details override val for switcher head switch
 * @{
 */
#define PMU_PMU12__EN_SW_HSW_B_OVR_VAL__SHIFT                                23
#define PMU_PMU12__EN_SW_HSW_B_OVR_VAL__WIDTH                                 1
#define PMU_PMU12__EN_SW_HSW_B_OVR_VAL__MASK                        0x00800000U
#define PMU_PMU12__EN_SW_HSW_B_OVR_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00800000U) >> 23)
#define PMU_PMU12__EN_SW_HSW_B_OVR_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 23) & 0x00800000U)
#define PMU_PMU12__EN_SW_HSW_B_OVR_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | (((uint32_t)(src) <<\
                    23) & 0x00800000U)
#define PMU_PMU12__EN_SW_HSW_B_OVR_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 23) & ~0x00800000U)))
#define PMU_PMU12__EN_SW_HSW_B_OVR_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(1) << 23)
#define PMU_PMU12__EN_SW_HSW_B_OVR_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(0) << 23)
#define PMU_PMU12__EN_SW_HSW_B_OVR_VAL__RESET_VALUE                 0x00000000U
/** @} */

/* macros for field sw_rstb_ovr */
/**
 * @defgroup pmu_top_regs_core_sw_rstb_ovr_field sw_rstb_ovr_field
 * @brief macros for field sw_rstb_ovr
 * @details enable override for switcher rstb
 * @{
 */
#define PMU_PMU12__SW_RSTB_OVR__SHIFT                                        24
#define PMU_PMU12__SW_RSTB_OVR__WIDTH                                         1
#define PMU_PMU12__SW_RSTB_OVR__MASK                                0x01000000U
#define PMU_PMU12__SW_RSTB_OVR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x01000000U) >> 24)
#define PMU_PMU12__SW_RSTB_OVR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0x01000000U)
#define PMU_PMU12__SW_RSTB_OVR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | (((uint32_t)(src) <<\
                    24) & 0x01000000U)
#define PMU_PMU12__SW_RSTB_OVR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x01000000U)))
#define PMU_PMU12__SW_RSTB_OVR__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(1) << 24)
#define PMU_PMU12__SW_RSTB_OVR__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(0) << 24)
#define PMU_PMU12__SW_RSTB_OVR__RESET_VALUE                         0x00000000U
/** @} */

/* macros for field sw_rstb_ovr_val */
/**
 * @defgroup pmu_top_regs_core_sw_rstb_ovr_val_field sw_rstb_ovr_val_field
 * @brief macros for field sw_rstb_ovr_val
 * @details override val for switcher rstb
 * @{
 */
#define PMU_PMU12__SW_RSTB_OVR_VAL__SHIFT                                    25
#define PMU_PMU12__SW_RSTB_OVR_VAL__WIDTH                                     1
#define PMU_PMU12__SW_RSTB_OVR_VAL__MASK                            0x02000000U
#define PMU_PMU12__SW_RSTB_OVR_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x02000000U) >> 25)
#define PMU_PMU12__SW_RSTB_OVR_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 25) & 0x02000000U)
#define PMU_PMU12__SW_RSTB_OVR_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x02000000U) | (((uint32_t)(src) <<\
                    25) & 0x02000000U)
#define PMU_PMU12__SW_RSTB_OVR_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 25) & ~0x02000000U)))
#define PMU_PMU12__SW_RSTB_OVR_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x02000000U) | ((uint32_t)(1) << 25)
#define PMU_PMU12__SW_RSTB_OVR_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x02000000U) | ((uint32_t)(0) << 25)
#define PMU_PMU12__SW_RSTB_OVR_VAL__RESET_VALUE                     0x00000000U
/** @} */

/* macros for field en_soc_hsw_b_ovr */
/**
 * @defgroup pmu_top_regs_core_en_soc_hsw_b_ovr_field en_soc_hsw_b_ovr_field
 * @brief macros for field en_soc_hsw_b_ovr
 * @details enable soc headswitch override
 * @{
 */
#define PMU_PMU12__EN_SOC_HSW_B_OVR__SHIFT                                   26
#define PMU_PMU12__EN_SOC_HSW_B_OVR__WIDTH                                    1
#define PMU_PMU12__EN_SOC_HSW_B_OVR__MASK                           0x04000000U
#define PMU_PMU12__EN_SOC_HSW_B_OVR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x04000000U) >> 26)
#define PMU_PMU12__EN_SOC_HSW_B_OVR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 26) & 0x04000000U)
#define PMU_PMU12__EN_SOC_HSW_B_OVR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x04000000U) | (((uint32_t)(src) <<\
                    26) & 0x04000000U)
#define PMU_PMU12__EN_SOC_HSW_B_OVR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 26) & ~0x04000000U)))
#define PMU_PMU12__EN_SOC_HSW_B_OVR__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x04000000U) | ((uint32_t)(1) << 26)
#define PMU_PMU12__EN_SOC_HSW_B_OVR__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x04000000U) | ((uint32_t)(0) << 26)
#define PMU_PMU12__EN_SOC_HSW_B_OVR__RESET_VALUE                    0x00000000U
/** @} */

/* macros for field en_soc_hsw_b_ovr_val */
/**
 * @defgroup pmu_top_regs_core_en_soc_hsw_b_ovr_val_field en_soc_hsw_b_ovr_val_field
 * @brief macros for field en_soc_hsw_b_ovr_val
 * @details override_val for soc headswitch
 * @{
 */
#define PMU_PMU12__EN_SOC_HSW_B_OVR_VAL__SHIFT                               27
#define PMU_PMU12__EN_SOC_HSW_B_OVR_VAL__WIDTH                                1
#define PMU_PMU12__EN_SOC_HSW_B_OVR_VAL__MASK                       0x08000000U
#define PMU_PMU12__EN_SOC_HSW_B_OVR_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x08000000U) >> 27)
#define PMU_PMU12__EN_SOC_HSW_B_OVR_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 27) & 0x08000000U)
#define PMU_PMU12__EN_SOC_HSW_B_OVR_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x08000000U) | (((uint32_t)(src) <<\
                    27) & 0x08000000U)
#define PMU_PMU12__EN_SOC_HSW_B_OVR_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 27) & ~0x08000000U)))
#define PMU_PMU12__EN_SOC_HSW_B_OVR_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x08000000U) | ((uint32_t)(1) << 27)
#define PMU_PMU12__EN_SOC_HSW_B_OVR_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x08000000U) | ((uint32_t)(0) << 27)
#define PMU_PMU12__EN_SOC_HSW_B_OVR_VAL__RESET_VALUE                0x00000000U
/** @} */

/* macros for field sel_avdd1_ovr */
/**
 * @defgroup pmu_top_regs_core_sel_avdd1_ovr_field sel_avdd1_ovr_field
 * @brief macros for field sel_avdd1_ovr
 * @details enable override for pmu avdd/dvdd switch
 * @{
 */
#define PMU_PMU12__SEL_AVDD1_OVR__SHIFT                                      28
#define PMU_PMU12__SEL_AVDD1_OVR__WIDTH                                       1
#define PMU_PMU12__SEL_AVDD1_OVR__MASK                              0x10000000U
#define PMU_PMU12__SEL_AVDD1_OVR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x10000000U) >> 28)
#define PMU_PMU12__SEL_AVDD1_OVR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 28) & 0x10000000U)
#define PMU_PMU12__SEL_AVDD1_OVR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x10000000U) | (((uint32_t)(src) <<\
                    28) & 0x10000000U)
#define PMU_PMU12__SEL_AVDD1_OVR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 28) & ~0x10000000U)))
#define PMU_PMU12__SEL_AVDD1_OVR__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x10000000U) | ((uint32_t)(1) << 28)
#define PMU_PMU12__SEL_AVDD1_OVR__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x10000000U) | ((uint32_t)(0) << 28)
#define PMU_PMU12__SEL_AVDD1_OVR__RESET_VALUE                       0x00000000U
/** @} */

/* macros for field sel_avdd1_ovr_val */
/**
 * @defgroup pmu_top_regs_core_sel_avdd1_ovr_val_field sel_avdd1_ovr_val_field
 * @brief macros for field sel_avdd1_ovr_val
 * @details override_val for pmu avdd/dvdd switch
 * @{
 */
#define PMU_PMU12__SEL_AVDD1_OVR_VAL__SHIFT                                  29
#define PMU_PMU12__SEL_AVDD1_OVR_VAL__WIDTH                                   1
#define PMU_PMU12__SEL_AVDD1_OVR_VAL__MASK                          0x20000000U
#define PMU_PMU12__SEL_AVDD1_OVR_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x20000000U) >> 29)
#define PMU_PMU12__SEL_AVDD1_OVR_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 29) & 0x20000000U)
#define PMU_PMU12__SEL_AVDD1_OVR_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x20000000U) | (((uint32_t)(src) <<\
                    29) & 0x20000000U)
#define PMU_PMU12__SEL_AVDD1_OVR_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 29) & ~0x20000000U)))
#define PMU_PMU12__SEL_AVDD1_OVR_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x20000000U) | ((uint32_t)(1) << 29)
#define PMU_PMU12__SEL_AVDD1_OVR_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x20000000U) | ((uint32_t)(0) << 29)
#define PMU_PMU12__SEL_AVDD1_OVR_VAL__RESET_VALUE                   0x00000000U
/** @} */

/* macros for field swRes_encomp_ovr */
/**
 * @defgroup pmu_top_regs_core_swRes_encomp_ovr_field swRes_encomp_ovr_field
 * @brief macros for field swRes_encomp_ovr
 * @details override
 * @{
 */
#define PMU_PMU12__SWRES_ENCOMP_OVR__SHIFT                                   30
#define PMU_PMU12__SWRES_ENCOMP_OVR__WIDTH                                    1
#define PMU_PMU12__SWRES_ENCOMP_OVR__MASK                           0x40000000U
#define PMU_PMU12__SWRES_ENCOMP_OVR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x40000000U) >> 30)
#define PMU_PMU12__SWRES_ENCOMP_OVR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 30) & 0x40000000U)
#define PMU_PMU12__SWRES_ENCOMP_OVR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x40000000U) | (((uint32_t)(src) <<\
                    30) & 0x40000000U)
#define PMU_PMU12__SWRES_ENCOMP_OVR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 30) & ~0x40000000U)))
#define PMU_PMU12__SWRES_ENCOMP_OVR__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x40000000U) | ((uint32_t)(1) << 30)
#define PMU_PMU12__SWRES_ENCOMP_OVR__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x40000000U) | ((uint32_t)(0) << 30)
#define PMU_PMU12__SWRES_ENCOMP_OVR__RESET_VALUE                    0x00000000U
/** @} */

/* macros for field swRes_encomp_ovr_val */
/**
 * @defgroup pmu_top_regs_core_swRes_encomp_ovr_val_field swRes_encomp_ovr_val_field
 * @brief macros for field swRes_encomp_ovr_val
 * @details override_val
 * @{
 */
#define PMU_PMU12__SWRES_ENCOMP_OVR_VAL__SHIFT                               31
#define PMU_PMU12__SWRES_ENCOMP_OVR_VAL__WIDTH                                1
#define PMU_PMU12__SWRES_ENCOMP_OVR_VAL__MASK                       0x80000000U
#define PMU_PMU12__SWRES_ENCOMP_OVR_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x80000000U) >> 31)
#define PMU_PMU12__SWRES_ENCOMP_OVR_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 31) & 0x80000000U)
#define PMU_PMU12__SWRES_ENCOMP_OVR_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x80000000U) | (((uint32_t)(src) <<\
                    31) & 0x80000000U)
#define PMU_PMU12__SWRES_ENCOMP_OVR_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 31) & ~0x80000000U)))
#define PMU_PMU12__SWRES_ENCOMP_OVR_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x80000000U) | ((uint32_t)(1) << 31)
#define PMU_PMU12__SWRES_ENCOMP_OVR_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x80000000U) | ((uint32_t)(0) << 31)
#define PMU_PMU12__SWRES_ENCOMP_OVR_VAL__RESET_VALUE                0x00000000U
/** @} */
#define PMU_PMU12__TYPE                                                uint32_t
#define PMU_PMU12__READ                                             0xffffffffU
#define PMU_PMU12__WRITE                                            0xffffffffU
#define PMU_PMU12__PRESERVED                                        0x00000000U
#define PMU_PMU12__RESET_VALUE                                      0x00000010U

#endif /* __PMU_PMU12_MACRO__ */

/** @} end of pmu12 */

/* macros for BlueprintGlobalNameSpace::PMU_pmu13 */
/**
 * @defgroup pmu_top_regs_core_pmu13 pmu13
 * @brief test overrides definitions.
 * @{
 */
#ifndef __PMU_PMU13_MACRO__
#define __PMU_PMU13_MACRO__

/* macros for field SwchReqDVDD_encomp_ovr */
/**
 * @defgroup pmu_top_regs_core_SwchReqDVDD_encomp_ovr_field SwchReqDVDD_encomp_ovr_field
 * @brief macros for field SwchReqDVDD_encomp_ovr
 * @details override
 * @{
 */
#define PMU_PMU13__SWCHREQDVDD_ENCOMP_OVR__SHIFT                              0
#define PMU_PMU13__SWCHREQDVDD_ENCOMP_OVR__WIDTH                              1
#define PMU_PMU13__SWCHREQDVDD_ENCOMP_OVR__MASK                     0x00000001U
#define PMU_PMU13__SWCHREQDVDD_ENCOMP_OVR__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define PMU_PMU13__SWCHREQDVDD_ENCOMP_OVR__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define PMU_PMU13__SWCHREQDVDD_ENCOMP_OVR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define PMU_PMU13__SWCHREQDVDD_ENCOMP_OVR__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define PMU_PMU13__SWCHREQDVDD_ENCOMP_OVR__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define PMU_PMU13__SWCHREQDVDD_ENCOMP_OVR__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define PMU_PMU13__SWCHREQDVDD_ENCOMP_OVR__RESET_VALUE              0x00000000U
/** @} */

/* macros for field SwchReqDVDD_encomp_ovr_val */
/**
 * @defgroup pmu_top_regs_core_SwchReqDVDD_encomp_ovr_val_field SwchReqDVDD_encomp_ovr_val_field
 * @brief macros for field SwchReqDVDD_encomp_ovr_val
 * @details override_val
 * @{
 */
#define PMU_PMU13__SWCHREQDVDD_ENCOMP_OVR_VAL__SHIFT                          1
#define PMU_PMU13__SWCHREQDVDD_ENCOMP_OVR_VAL__WIDTH                          1
#define PMU_PMU13__SWCHREQDVDD_ENCOMP_OVR_VAL__MASK                 0x00000002U
#define PMU_PMU13__SWCHREQDVDD_ENCOMP_OVR_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define PMU_PMU13__SWCHREQDVDD_ENCOMP_OVR_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define PMU_PMU13__SWCHREQDVDD_ENCOMP_OVR_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define PMU_PMU13__SWCHREQDVDD_ENCOMP_OVR_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define PMU_PMU13__SWCHREQDVDD_ENCOMP_OVR_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define PMU_PMU13__SWCHREQDVDD_ENCOMP_OVR_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define PMU_PMU13__SWCHREQDVDD_ENCOMP_OVR_VAL__RESET_VALUE          0x00000000U
/** @} */

/* macros for field SwchReqVDDIO_encomp_ovr */
/**
 * @defgroup pmu_top_regs_core_SwchReqVDDIO_encomp_ovr_field SwchReqVDDIO_encomp_ovr_field
 * @brief macros for field SwchReqVDDIO_encomp_ovr
 * @details override
 * @{
 */
#define PMU_PMU13__SWCHREQVDDIO_ENCOMP_OVR__SHIFT                             2
#define PMU_PMU13__SWCHREQVDDIO_ENCOMP_OVR__WIDTH                             1
#define PMU_PMU13__SWCHREQVDDIO_ENCOMP_OVR__MASK                    0x00000004U
#define PMU_PMU13__SWCHREQVDDIO_ENCOMP_OVR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000004U) >> 2)
#define PMU_PMU13__SWCHREQVDDIO_ENCOMP_OVR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 2) & 0x00000004U)
#define PMU_PMU13__SWCHREQVDDIO_ENCOMP_OVR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | (((uint32_t)(src) <<\
                    2) & 0x00000004U)
#define PMU_PMU13__SWCHREQVDDIO_ENCOMP_OVR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 2) & ~0x00000004U)))
#define PMU_PMU13__SWCHREQVDDIO_ENCOMP_OVR__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(1) << 2)
#define PMU_PMU13__SWCHREQVDDIO_ENCOMP_OVR__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(0) << 2)
#define PMU_PMU13__SWCHREQVDDIO_ENCOMP_OVR__RESET_VALUE             0x00000000U
/** @} */

/* macros for field SwchReqVDDIO_encomp_ovr_val */
/**
 * @defgroup pmu_top_regs_core_SwchReqVDDIO_encomp_ovr_val_field SwchReqVDDIO_encomp_ovr_val_field
 * @brief macros for field SwchReqVDDIO_encomp_ovr_val
 * @details override_val
 * @{
 */
#define PMU_PMU13__SWCHREQVDDIO_ENCOMP_OVR_VAL__SHIFT                         3
#define PMU_PMU13__SWCHREQVDDIO_ENCOMP_OVR_VAL__WIDTH                         1
#define PMU_PMU13__SWCHREQVDDIO_ENCOMP_OVR_VAL__MASK                0x00000008U
#define PMU_PMU13__SWCHREQVDDIO_ENCOMP_OVR_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000008U) >> 3)
#define PMU_PMU13__SWCHREQVDDIO_ENCOMP_OVR_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 3) & 0x00000008U)
#define PMU_PMU13__SWCHREQVDDIO_ENCOMP_OVR_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | (((uint32_t)(src) <<\
                    3) & 0x00000008U)
#define PMU_PMU13__SWCHREQVDDIO_ENCOMP_OVR_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 3) & ~0x00000008U)))
#define PMU_PMU13__SWCHREQVDDIO_ENCOMP_OVR_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((uint32_t)(1) << 3)
#define PMU_PMU13__SWCHREQVDDIO_ENCOMP_OVR_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((uint32_t)(0) << 3)
#define PMU_PMU13__SWCHREQVDDIO_ENCOMP_OVR_VAL__RESET_VALUE         0x00000000U
/** @} */

/* macros for field SwchReqAVDD_encomp_ovr */
/**
 * @defgroup pmu_top_regs_core_SwchReqAVDD_encomp_ovr_field SwchReqAVDD_encomp_ovr_field
 * @brief macros for field SwchReqAVDD_encomp_ovr
 * @details override
 * @{
 */
#define PMU_PMU13__SWCHREQAVDD_ENCOMP_OVR__SHIFT                              4
#define PMU_PMU13__SWCHREQAVDD_ENCOMP_OVR__WIDTH                              1
#define PMU_PMU13__SWCHREQAVDD_ENCOMP_OVR__MASK                     0x00000010U
#define PMU_PMU13__SWCHREQAVDD_ENCOMP_OVR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000010U) >> 4)
#define PMU_PMU13__SWCHREQAVDD_ENCOMP_OVR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 4) & 0x00000010U)
#define PMU_PMU13__SWCHREQAVDD_ENCOMP_OVR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | (((uint32_t)(src) <<\
                    4) & 0x00000010U)
#define PMU_PMU13__SWCHREQAVDD_ENCOMP_OVR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 4) & ~0x00000010U)))
#define PMU_PMU13__SWCHREQAVDD_ENCOMP_OVR__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(1) << 4)
#define PMU_PMU13__SWCHREQAVDD_ENCOMP_OVR__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(0) << 4)
#define PMU_PMU13__SWCHREQAVDD_ENCOMP_OVR__RESET_VALUE              0x00000000U
/** @} */

/* macros for field SwchReqAVDD_encomp_ovr_val */
/**
 * @defgroup pmu_top_regs_core_SwchReqAVDD_encomp_ovr_val_field SwchReqAVDD_encomp_ovr_val_field
 * @brief macros for field SwchReqAVDD_encomp_ovr_val
 * @details override_val
 * @{
 */
#define PMU_PMU13__SWCHREQAVDD_ENCOMP_OVR_VAL__SHIFT                          5
#define PMU_PMU13__SWCHREQAVDD_ENCOMP_OVR_VAL__WIDTH                          1
#define PMU_PMU13__SWCHREQAVDD_ENCOMP_OVR_VAL__MASK                 0x00000020U
#define PMU_PMU13__SWCHREQAVDD_ENCOMP_OVR_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000020U) >> 5)
#define PMU_PMU13__SWCHREQAVDD_ENCOMP_OVR_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 5) & 0x00000020U)
#define PMU_PMU13__SWCHREQAVDD_ENCOMP_OVR_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | (((uint32_t)(src) <<\
                    5) & 0x00000020U)
#define PMU_PMU13__SWCHREQAVDD_ENCOMP_OVR_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 5) & ~0x00000020U)))
#define PMU_PMU13__SWCHREQAVDD_ENCOMP_OVR_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | ((uint32_t)(1) << 5)
#define PMU_PMU13__SWCHREQAVDD_ENCOMP_OVR_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | ((uint32_t)(0) << 5)
#define PMU_PMU13__SWCHREQAVDD_ENCOMP_OVR_VAL__RESET_VALUE          0x00000000U
/** @} */

/* macros for field SwchReqVAUX_encomp_ovr */
/**
 * @defgroup pmu_top_regs_core_SwchReqVAUX_encomp_ovr_field SwchReqVAUX_encomp_ovr_field
 * @brief macros for field SwchReqVAUX_encomp_ovr
 * @details override
 * @{
 */
#define PMU_PMU13__SWCHREQVAUX_ENCOMP_OVR__SHIFT                              6
#define PMU_PMU13__SWCHREQVAUX_ENCOMP_OVR__WIDTH                              1
#define PMU_PMU13__SWCHREQVAUX_ENCOMP_OVR__MASK                     0x00000040U
#define PMU_PMU13__SWCHREQVAUX_ENCOMP_OVR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000040U) >> 6)
#define PMU_PMU13__SWCHREQVAUX_ENCOMP_OVR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 6) & 0x00000040U)
#define PMU_PMU13__SWCHREQVAUX_ENCOMP_OVR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000040U) | (((uint32_t)(src) <<\
                    6) & 0x00000040U)
#define PMU_PMU13__SWCHREQVAUX_ENCOMP_OVR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 6) & ~0x00000040U)))
#define PMU_PMU13__SWCHREQVAUX_ENCOMP_OVR__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000040U) | ((uint32_t)(1) << 6)
#define PMU_PMU13__SWCHREQVAUX_ENCOMP_OVR__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000040U) | ((uint32_t)(0) << 6)
#define PMU_PMU13__SWCHREQVAUX_ENCOMP_OVR__RESET_VALUE              0x00000000U
/** @} */

/* macros for field SwchReqVAUX_encomp_ovr_val */
/**
 * @defgroup pmu_top_regs_core_SwchReqVAUX_encomp_ovr_val_field SwchReqVAUX_encomp_ovr_val_field
 * @brief macros for field SwchReqVAUX_encomp_ovr_val
 * @details override_val
 * @{
 */
#define PMU_PMU13__SWCHREQVAUX_ENCOMP_OVR_VAL__SHIFT                          7
#define PMU_PMU13__SWCHREQVAUX_ENCOMP_OVR_VAL__WIDTH                          1
#define PMU_PMU13__SWCHREQVAUX_ENCOMP_OVR_VAL__MASK                 0x00000080U
#define PMU_PMU13__SWCHREQVAUX_ENCOMP_OVR_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000080U) >> 7)
#define PMU_PMU13__SWCHREQVAUX_ENCOMP_OVR_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 7) & 0x00000080U)
#define PMU_PMU13__SWCHREQVAUX_ENCOMP_OVR_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000080U) | (((uint32_t)(src) <<\
                    7) & 0x00000080U)
#define PMU_PMU13__SWCHREQVAUX_ENCOMP_OVR_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 7) & ~0x00000080U)))
#define PMU_PMU13__SWCHREQVAUX_ENCOMP_OVR_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000080U) | ((uint32_t)(1) << 7)
#define PMU_PMU13__SWCHREQVAUX_ENCOMP_OVR_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000080U) | ((uint32_t)(0) << 7)
#define PMU_PMU13__SWCHREQVAUX_ENCOMP_OVR_VAL__RESET_VALUE          0x00000000U
/** @} */

/* macros for field porbsocdvdd_encomp_ovr */
/**
 * @defgroup pmu_top_regs_core_porbsocdvdd_encomp_ovr_field porbsocdvdd_encomp_ovr_field
 * @brief macros for field porbsocdvdd_encomp_ovr
 * @details override
 * @{
 */
#define PMU_PMU13__PORBSOCDVDD_ENCOMP_OVR__SHIFT                              8
#define PMU_PMU13__PORBSOCDVDD_ENCOMP_OVR__WIDTH                              1
#define PMU_PMU13__PORBSOCDVDD_ENCOMP_OVR__MASK                     0x00000100U
#define PMU_PMU13__PORBSOCDVDD_ENCOMP_OVR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000100U) >> 8)
#define PMU_PMU13__PORBSOCDVDD_ENCOMP_OVR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x00000100U)
#define PMU_PMU13__PORBSOCDVDD_ENCOMP_OVR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000100U) | (((uint32_t)(src) <<\
                    8) & 0x00000100U)
#define PMU_PMU13__PORBSOCDVDD_ENCOMP_OVR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x00000100U)))
#define PMU_PMU13__PORBSOCDVDD_ENCOMP_OVR__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000100U) | ((uint32_t)(1) << 8)
#define PMU_PMU13__PORBSOCDVDD_ENCOMP_OVR__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000100U) | ((uint32_t)(0) << 8)
#define PMU_PMU13__PORBSOCDVDD_ENCOMP_OVR__RESET_VALUE              0x00000000U
/** @} */

/* macros for field porbsocdvdd_encomp_ovr_val */
/**
 * @defgroup pmu_top_regs_core_porbsocdvdd_encomp_ovr_val_field porbsocdvdd_encomp_ovr_val_field
 * @brief macros for field porbsocdvdd_encomp_ovr_val
 * @details override_val
 * @{
 */
#define PMU_PMU13__PORBSOCDVDD_ENCOMP_OVR_VAL__SHIFT                          9
#define PMU_PMU13__PORBSOCDVDD_ENCOMP_OVR_VAL__WIDTH                          1
#define PMU_PMU13__PORBSOCDVDD_ENCOMP_OVR_VAL__MASK                 0x00000200U
#define PMU_PMU13__PORBSOCDVDD_ENCOMP_OVR_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000200U) >> 9)
#define PMU_PMU13__PORBSOCDVDD_ENCOMP_OVR_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 9) & 0x00000200U)
#define PMU_PMU13__PORBSOCDVDD_ENCOMP_OVR_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000200U) | (((uint32_t)(src) <<\
                    9) & 0x00000200U)
#define PMU_PMU13__PORBSOCDVDD_ENCOMP_OVR_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 9) & ~0x00000200U)))
#define PMU_PMU13__PORBSOCDVDD_ENCOMP_OVR_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000200U) | ((uint32_t)(1) << 9)
#define PMU_PMU13__PORBSOCDVDD_ENCOMP_OVR_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000200U) | ((uint32_t)(0) << 9)
#define PMU_PMU13__PORBSOCDVDD_ENCOMP_OVR_VAL__RESET_VALUE          0x00000000U
/** @} */

/* macros for field porbsocvddio_encomp_ovr */
/**
 * @defgroup pmu_top_regs_core_porbsocvddio_encomp_ovr_field porbsocvddio_encomp_ovr_field
 * @brief macros for field porbsocvddio_encomp_ovr
 * @details override
 * @{
 */
#define PMU_PMU13__PORBSOCVDDIO_ENCOMP_OVR__SHIFT                            10
#define PMU_PMU13__PORBSOCVDDIO_ENCOMP_OVR__WIDTH                             1
#define PMU_PMU13__PORBSOCVDDIO_ENCOMP_OVR__MASK                    0x00000400U
#define PMU_PMU13__PORBSOCVDDIO_ENCOMP_OVR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000400U) >> 10)
#define PMU_PMU13__PORBSOCVDDIO_ENCOMP_OVR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 10) & 0x00000400U)
#define PMU_PMU13__PORBSOCVDDIO_ENCOMP_OVR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000400U) | (((uint32_t)(src) <<\
                    10) & 0x00000400U)
#define PMU_PMU13__PORBSOCVDDIO_ENCOMP_OVR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 10) & ~0x00000400U)))
#define PMU_PMU13__PORBSOCVDDIO_ENCOMP_OVR__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000400U) | ((uint32_t)(1) << 10)
#define PMU_PMU13__PORBSOCVDDIO_ENCOMP_OVR__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000400U) | ((uint32_t)(0) << 10)
#define PMU_PMU13__PORBSOCVDDIO_ENCOMP_OVR__RESET_VALUE             0x00000000U
/** @} */

/* macros for field porbsocvddio_encomp_ovr_val */
/**
 * @defgroup pmu_top_regs_core_porbsocvddio_encomp_ovr_val_field porbsocvddio_encomp_ovr_val_field
 * @brief macros for field porbsocvddio_encomp_ovr_val
 * @details override_val
 * @{
 */
#define PMU_PMU13__PORBSOCVDDIO_ENCOMP_OVR_VAL__SHIFT                        11
#define PMU_PMU13__PORBSOCVDDIO_ENCOMP_OVR_VAL__WIDTH                         1
#define PMU_PMU13__PORBSOCVDDIO_ENCOMP_OVR_VAL__MASK                0x00000800U
#define PMU_PMU13__PORBSOCVDDIO_ENCOMP_OVR_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000800U) >> 11)
#define PMU_PMU13__PORBSOCVDDIO_ENCOMP_OVR_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 11) & 0x00000800U)
#define PMU_PMU13__PORBSOCVDDIO_ENCOMP_OVR_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000800U) | (((uint32_t)(src) <<\
                    11) & 0x00000800U)
#define PMU_PMU13__PORBSOCVDDIO_ENCOMP_OVR_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 11) & ~0x00000800U)))
#define PMU_PMU13__PORBSOCVDDIO_ENCOMP_OVR_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000800U) | ((uint32_t)(1) << 11)
#define PMU_PMU13__PORBSOCVDDIO_ENCOMP_OVR_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000800U) | ((uint32_t)(0) << 11)
#define PMU_PMU13__PORBSOCVDDIO_ENCOMP_OVR_VAL__RESET_VALUE         0x00000000U
/** @} */

/* macros for field stoGoodtoEner_encomp_ovr */
/**
 * @defgroup pmu_top_regs_core_stoGoodtoEner_encomp_ovr_field stoGoodtoEner_encomp_ovr_field
 * @brief macros for field stoGoodtoEner_encomp_ovr
 * @details override
 * @{
 */
#define PMU_PMU13__STOGOODTOENER_ENCOMP_OVR__SHIFT                           12
#define PMU_PMU13__STOGOODTOENER_ENCOMP_OVR__WIDTH                            1
#define PMU_PMU13__STOGOODTOENER_ENCOMP_OVR__MASK                   0x00001000U
#define PMU_PMU13__STOGOODTOENER_ENCOMP_OVR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00001000U) >> 12)
#define PMU_PMU13__STOGOODTOENER_ENCOMP_OVR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 12) & 0x00001000U)
#define PMU_PMU13__STOGOODTOENER_ENCOMP_OVR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00001000U) | (((uint32_t)(src) <<\
                    12) & 0x00001000U)
#define PMU_PMU13__STOGOODTOENER_ENCOMP_OVR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 12) & ~0x00001000U)))
#define PMU_PMU13__STOGOODTOENER_ENCOMP_OVR__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00001000U) | ((uint32_t)(1) << 12)
#define PMU_PMU13__STOGOODTOENER_ENCOMP_OVR__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00001000U) | ((uint32_t)(0) << 12)
#define PMU_PMU13__STOGOODTOENER_ENCOMP_OVR__RESET_VALUE            0x00000000U
/** @} */

/* macros for field stoGoodtoEner_encomp_ovr_val */
/**
 * @defgroup pmu_top_regs_core_stoGoodtoEner_encomp_ovr_val_field stoGoodtoEner_encomp_ovr_val_field
 * @brief macros for field stoGoodtoEner_encomp_ovr_val
 * @details override_val
 * @{
 */
#define PMU_PMU13__STOGOODTOENER_ENCOMP_OVR_VAL__SHIFT                       13
#define PMU_PMU13__STOGOODTOENER_ENCOMP_OVR_VAL__WIDTH                        1
#define PMU_PMU13__STOGOODTOENER_ENCOMP_OVR_VAL__MASK               0x00002000U
#define PMU_PMU13__STOGOODTOENER_ENCOMP_OVR_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00002000U) >> 13)
#define PMU_PMU13__STOGOODTOENER_ENCOMP_OVR_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 13) & 0x00002000U)
#define PMU_PMU13__STOGOODTOENER_ENCOMP_OVR_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00002000U) | (((uint32_t)(src) <<\
                    13) & 0x00002000U)
#define PMU_PMU13__STOGOODTOENER_ENCOMP_OVR_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 13) & ~0x00002000U)))
#define PMU_PMU13__STOGOODTOENER_ENCOMP_OVR_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00002000U) | ((uint32_t)(1) << 13)
#define PMU_PMU13__STOGOODTOENER_ENCOMP_OVR_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00002000U) | ((uint32_t)(0) << 13)
#define PMU_PMU13__STOGOODTOENER_ENCOMP_OVR_VAL__RESET_VALUE        0x00000000U
/** @} */

/* macros for field stoGoodtoTX_encomp_ovr */
/**
 * @defgroup pmu_top_regs_core_stoGoodtoTX_encomp_ovr_field stoGoodtoTX_encomp_ovr_field
 * @brief macros for field stoGoodtoTX_encomp_ovr
 * @details override
 * @{
 */
#define PMU_PMU13__STOGOODTOTX_ENCOMP_OVR__SHIFT                             14
#define PMU_PMU13__STOGOODTOTX_ENCOMP_OVR__WIDTH                              1
#define PMU_PMU13__STOGOODTOTX_ENCOMP_OVR__MASK                     0x00004000U
#define PMU_PMU13__STOGOODTOTX_ENCOMP_OVR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00004000U) >> 14)
#define PMU_PMU13__STOGOODTOTX_ENCOMP_OVR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 14) & 0x00004000U)
#define PMU_PMU13__STOGOODTOTX_ENCOMP_OVR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00004000U) | (((uint32_t)(src) <<\
                    14) & 0x00004000U)
#define PMU_PMU13__STOGOODTOTX_ENCOMP_OVR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 14) & ~0x00004000U)))
#define PMU_PMU13__STOGOODTOTX_ENCOMP_OVR__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00004000U) | ((uint32_t)(1) << 14)
#define PMU_PMU13__STOGOODTOTX_ENCOMP_OVR__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00004000U) | ((uint32_t)(0) << 14)
#define PMU_PMU13__STOGOODTOTX_ENCOMP_OVR__RESET_VALUE              0x00000000U
/** @} */

/* macros for field stoGoodtoTX_encomp_ovr_val */
/**
 * @defgroup pmu_top_regs_core_stoGoodtoTX_encomp_ovr_val_field stoGoodtoTX_encomp_ovr_val_field
 * @brief macros for field stoGoodtoTX_encomp_ovr_val
 * @details override_val
 * @{
 */
#define PMU_PMU13__STOGOODTOTX_ENCOMP_OVR_VAL__SHIFT                         15
#define PMU_PMU13__STOGOODTOTX_ENCOMP_OVR_VAL__WIDTH                          1
#define PMU_PMU13__STOGOODTOTX_ENCOMP_OVR_VAL__MASK                 0x00008000U
#define PMU_PMU13__STOGOODTOTX_ENCOMP_OVR_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00008000U) >> 15)
#define PMU_PMU13__STOGOODTOTX_ENCOMP_OVR_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 15) & 0x00008000U)
#define PMU_PMU13__STOGOODTOTX_ENCOMP_OVR_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00008000U) | (((uint32_t)(src) <<\
                    15) & 0x00008000U)
#define PMU_PMU13__STOGOODTOTX_ENCOMP_OVR_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 15) & ~0x00008000U)))
#define PMU_PMU13__STOGOODTOTX_ENCOMP_OVR_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00008000U) | ((uint32_t)(1) << 15)
#define PMU_PMU13__STOGOODTOTX_ENCOMP_OVR_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00008000U) | ((uint32_t)(0) << 15)
#define PMU_PMU13__STOGOODTOTX_ENCOMP_OVR_VAL__RESET_VALUE          0x00000000U
/** @} */

/* macros for field srvevaux_encomp_ovr */
/**
 * @defgroup pmu_top_regs_core_srvevaux_encomp_ovr_field srvevaux_encomp_ovr_field
 * @brief macros for field srvevaux_encomp_ovr
 * @details override
 * @{
 */
#define PMU_PMU13__SRVEVAUX_ENCOMP_OVR__SHIFT                                16
#define PMU_PMU13__SRVEVAUX_ENCOMP_OVR__WIDTH                                 1
#define PMU_PMU13__SRVEVAUX_ENCOMP_OVR__MASK                        0x00010000U
#define PMU_PMU13__SRVEVAUX_ENCOMP_OVR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00010000U) >> 16)
#define PMU_PMU13__SRVEVAUX_ENCOMP_OVR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00010000U)
#define PMU_PMU13__SRVEVAUX_ENCOMP_OVR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00010000U) | (((uint32_t)(src) <<\
                    16) & 0x00010000U)
#define PMU_PMU13__SRVEVAUX_ENCOMP_OVR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00010000U)))
#define PMU_PMU13__SRVEVAUX_ENCOMP_OVR__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00010000U) | ((uint32_t)(1) << 16)
#define PMU_PMU13__SRVEVAUX_ENCOMP_OVR__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00010000U) | ((uint32_t)(0) << 16)
#define PMU_PMU13__SRVEVAUX_ENCOMP_OVR__RESET_VALUE                 0x00000000U
/** @} */

/* macros for field srvevaux_encomp_ovr_val */
/**
 * @defgroup pmu_top_regs_core_srvevaux_encomp_ovr_val_field srvevaux_encomp_ovr_val_field
 * @brief macros for field srvevaux_encomp_ovr_val
 * @details override_val
 * @{
 */
#define PMU_PMU13__SRVEVAUX_ENCOMP_OVR_VAL__SHIFT                            17
#define PMU_PMU13__SRVEVAUX_ENCOMP_OVR_VAL__WIDTH                             1
#define PMU_PMU13__SRVEVAUX_ENCOMP_OVR_VAL__MASK                    0x00020000U
#define PMU_PMU13__SRVEVAUX_ENCOMP_OVR_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00020000U) >> 17)
#define PMU_PMU13__SRVEVAUX_ENCOMP_OVR_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 17) & 0x00020000U)
#define PMU_PMU13__SRVEVAUX_ENCOMP_OVR_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | (((uint32_t)(src) <<\
                    17) & 0x00020000U)
#define PMU_PMU13__SRVEVAUX_ENCOMP_OVR_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 17) & ~0x00020000U)))
#define PMU_PMU13__SRVEVAUX_ENCOMP_OVR_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(1) << 17)
#define PMU_PMU13__SRVEVAUX_ENCOMP_OVR_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(0) << 17)
#define PMU_PMU13__SRVEVAUX_ENCOMP_OVR_VAL__RESET_VALUE             0x00000000U
/** @} */

/* macros for field harvstop_encomp_ovr */
/**
 * @defgroup pmu_top_regs_core_harvstop_encomp_ovr_field harvstop_encomp_ovr_field
 * @brief macros for field harvstop_encomp_ovr
 * @details override
 * @{
 */
#define PMU_PMU13__HARVSTOP_ENCOMP_OVR__SHIFT                                18
#define PMU_PMU13__HARVSTOP_ENCOMP_OVR__WIDTH                                 1
#define PMU_PMU13__HARVSTOP_ENCOMP_OVR__MASK                        0x00040000U
#define PMU_PMU13__HARVSTOP_ENCOMP_OVR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00040000U) >> 18)
#define PMU_PMU13__HARVSTOP_ENCOMP_OVR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 18) & 0x00040000U)
#define PMU_PMU13__HARVSTOP_ENCOMP_OVR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | (((uint32_t)(src) <<\
                    18) & 0x00040000U)
#define PMU_PMU13__HARVSTOP_ENCOMP_OVR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 18) & ~0x00040000U)))
#define PMU_PMU13__HARVSTOP_ENCOMP_OVR__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(1) << 18)
#define PMU_PMU13__HARVSTOP_ENCOMP_OVR__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(0) << 18)
#define PMU_PMU13__HARVSTOP_ENCOMP_OVR__RESET_VALUE                 0x00000000U
/** @} */

/* macros for field harvstop_encomp_ovr_val */
/**
 * @defgroup pmu_top_regs_core_harvstop_encomp_ovr_val_field harvstop_encomp_ovr_val_field
 * @brief macros for field harvstop_encomp_ovr_val
 * @details override_val
 * @{
 */
#define PMU_PMU13__HARVSTOP_ENCOMP_OVR_VAL__SHIFT                            19
#define PMU_PMU13__HARVSTOP_ENCOMP_OVR_VAL__WIDTH                             1
#define PMU_PMU13__HARVSTOP_ENCOMP_OVR_VAL__MASK                    0x00080000U
#define PMU_PMU13__HARVSTOP_ENCOMP_OVR_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00080000U) >> 19)
#define PMU_PMU13__HARVSTOP_ENCOMP_OVR_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 19) & 0x00080000U)
#define PMU_PMU13__HARVSTOP_ENCOMP_OVR_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00080000U) | (((uint32_t)(src) <<\
                    19) & 0x00080000U)
#define PMU_PMU13__HARVSTOP_ENCOMP_OVR_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 19) & ~0x00080000U)))
#define PMU_PMU13__HARVSTOP_ENCOMP_OVR_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00080000U) | ((uint32_t)(1) << 19)
#define PMU_PMU13__HARVSTOP_ENCOMP_OVR_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00080000U) | ((uint32_t)(0) << 19)
#define PMU_PMU13__HARVSTOP_ENCOMP_OVR_VAL__RESET_VALUE             0x00000000U
/** @} */

/* macros for field browovbat_encomp_ovr */
/**
 * @defgroup pmu_top_regs_core_browovbat_encomp_ovr_field browovbat_encomp_ovr_field
 * @brief macros for field browovbat_encomp_ovr
 * @details override
 * @{
 */
#define PMU_PMU13__BROWOVBAT_ENCOMP_OVR__SHIFT                               20
#define PMU_PMU13__BROWOVBAT_ENCOMP_OVR__WIDTH                                1
#define PMU_PMU13__BROWOVBAT_ENCOMP_OVR__MASK                       0x00100000U
#define PMU_PMU13__BROWOVBAT_ENCOMP_OVR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00100000U) >> 20)
#define PMU_PMU13__BROWOVBAT_ENCOMP_OVR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 20) & 0x00100000U)
#define PMU_PMU13__BROWOVBAT_ENCOMP_OVR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00100000U) | (((uint32_t)(src) <<\
                    20) & 0x00100000U)
#define PMU_PMU13__BROWOVBAT_ENCOMP_OVR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 20) & ~0x00100000U)))
#define PMU_PMU13__BROWOVBAT_ENCOMP_OVR__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00100000U) | ((uint32_t)(1) << 20)
#define PMU_PMU13__BROWOVBAT_ENCOMP_OVR__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00100000U) | ((uint32_t)(0) << 20)
#define PMU_PMU13__BROWOVBAT_ENCOMP_OVR__RESET_VALUE                0x00000000U
/** @} */

/* macros for field browovbat_encomp_ovr_val */
/**
 * @defgroup pmu_top_regs_core_browovbat_encomp_ovr_val_field browovbat_encomp_ovr_val_field
 * @brief macros for field browovbat_encomp_ovr_val
 * @details override_val
 * @{
 */
#define PMU_PMU13__BROWOVBAT_ENCOMP_OVR_VAL__SHIFT                           21
#define PMU_PMU13__BROWOVBAT_ENCOMP_OVR_VAL__WIDTH                            1
#define PMU_PMU13__BROWOVBAT_ENCOMP_OVR_VAL__MASK                   0x00200000U
#define PMU_PMU13__BROWOVBAT_ENCOMP_OVR_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00200000U) >> 21)
#define PMU_PMU13__BROWOVBAT_ENCOMP_OVR_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 21) & 0x00200000U)
#define PMU_PMU13__BROWOVBAT_ENCOMP_OVR_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00200000U) | (((uint32_t)(src) <<\
                    21) & 0x00200000U)
#define PMU_PMU13__BROWOVBAT_ENCOMP_OVR_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 21) & ~0x00200000U)))
#define PMU_PMU13__BROWOVBAT_ENCOMP_OVR_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00200000U) | ((uint32_t)(1) << 21)
#define PMU_PMU13__BROWOVBAT_ENCOMP_OVR_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00200000U) | ((uint32_t)(0) << 21)
#define PMU_PMU13__BROWOVBAT_ENCOMP_OVR_VAL__RESET_VALUE            0x00000000U
/** @} */

/* macros for field harv_encomp_ovr */
/**
 * @defgroup pmu_top_regs_core_harv_encomp_ovr_field harv_encomp_ovr_field
 * @brief macros for field harv_encomp_ovr
 * @details override
 * @{
 */
#define PMU_PMU13__HARV_ENCOMP_OVR__SHIFT                                    22
#define PMU_PMU13__HARV_ENCOMP_OVR__WIDTH                                     1
#define PMU_PMU13__HARV_ENCOMP_OVR__MASK                            0x00400000U
#define PMU_PMU13__HARV_ENCOMP_OVR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00400000U) >> 22)
#define PMU_PMU13__HARV_ENCOMP_OVR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 22) & 0x00400000U)
#define PMU_PMU13__HARV_ENCOMP_OVR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00400000U) | (((uint32_t)(src) <<\
                    22) & 0x00400000U)
#define PMU_PMU13__HARV_ENCOMP_OVR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 22) & ~0x00400000U)))
#define PMU_PMU13__HARV_ENCOMP_OVR__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00400000U) | ((uint32_t)(1) << 22)
#define PMU_PMU13__HARV_ENCOMP_OVR__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00400000U) | ((uint32_t)(0) << 22)
#define PMU_PMU13__HARV_ENCOMP_OVR__RESET_VALUE                     0x00000000U
/** @} */

/* macros for field harv_encomp_ovr_val */
/**
 * @defgroup pmu_top_regs_core_harv_encomp_ovr_val_field harv_encomp_ovr_val_field
 * @brief macros for field harv_encomp_ovr_val
 * @details override_val
 * @{
 */
#define PMU_PMU13__HARV_ENCOMP_OVR_VAL__SHIFT                                23
#define PMU_PMU13__HARV_ENCOMP_OVR_VAL__WIDTH                                 1
#define PMU_PMU13__HARV_ENCOMP_OVR_VAL__MASK                        0x00800000U
#define PMU_PMU13__HARV_ENCOMP_OVR_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00800000U) >> 23)
#define PMU_PMU13__HARV_ENCOMP_OVR_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 23) & 0x00800000U)
#define PMU_PMU13__HARV_ENCOMP_OVR_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | (((uint32_t)(src) <<\
                    23) & 0x00800000U)
#define PMU_PMU13__HARV_ENCOMP_OVR_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 23) & ~0x00800000U)))
#define PMU_PMU13__HARV_ENCOMP_OVR_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(1) << 23)
#define PMU_PMU13__HARV_ENCOMP_OVR_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(0) << 23)
#define PMU_PMU13__HARV_ENCOMP_OVR_VAL__RESET_VALUE                 0x00000000U
/** @} */

/* macros for field mpptstart_encomp_ovr */
/**
 * @defgroup pmu_top_regs_core_mpptstart_encomp_ovr_field mpptstart_encomp_ovr_field
 * @brief macros for field mpptstart_encomp_ovr
 * @details override
 * @{
 */
#define PMU_PMU13__MPPTSTART_ENCOMP_OVR__SHIFT                               24
#define PMU_PMU13__MPPTSTART_ENCOMP_OVR__WIDTH                                1
#define PMU_PMU13__MPPTSTART_ENCOMP_OVR__MASK                       0x01000000U
#define PMU_PMU13__MPPTSTART_ENCOMP_OVR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x01000000U) >> 24)
#define PMU_PMU13__MPPTSTART_ENCOMP_OVR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0x01000000U)
#define PMU_PMU13__MPPTSTART_ENCOMP_OVR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | (((uint32_t)(src) <<\
                    24) & 0x01000000U)
#define PMU_PMU13__MPPTSTART_ENCOMP_OVR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x01000000U)))
#define PMU_PMU13__MPPTSTART_ENCOMP_OVR__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(1) << 24)
#define PMU_PMU13__MPPTSTART_ENCOMP_OVR__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(0) << 24)
#define PMU_PMU13__MPPTSTART_ENCOMP_OVR__RESET_VALUE                0x00000000U
/** @} */

/* macros for field mpptstart_encomp_ovr_val */
/**
 * @defgroup pmu_top_regs_core_mpptstart_encomp_ovr_val_field mpptstart_encomp_ovr_val_field
 * @brief macros for field mpptstart_encomp_ovr_val
 * @details override_val
 * @{
 */
#define PMU_PMU13__MPPTSTART_ENCOMP_OVR_VAL__SHIFT                           25
#define PMU_PMU13__MPPTSTART_ENCOMP_OVR_VAL__WIDTH                            1
#define PMU_PMU13__MPPTSTART_ENCOMP_OVR_VAL__MASK                   0x02000000U
#define PMU_PMU13__MPPTSTART_ENCOMP_OVR_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x02000000U) >> 25)
#define PMU_PMU13__MPPTSTART_ENCOMP_OVR_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 25) & 0x02000000U)
#define PMU_PMU13__MPPTSTART_ENCOMP_OVR_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x02000000U) | (((uint32_t)(src) <<\
                    25) & 0x02000000U)
#define PMU_PMU13__MPPTSTART_ENCOMP_OVR_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 25) & ~0x02000000U)))
#define PMU_PMU13__MPPTSTART_ENCOMP_OVR_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x02000000U) | ((uint32_t)(1) << 25)
#define PMU_PMU13__MPPTSTART_ENCOMP_OVR_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x02000000U) | ((uint32_t)(0) << 25)
#define PMU_PMU13__MPPTSTART_ENCOMP_OVR_VAL__RESET_VALUE            0x00000000U
/** @} */

/* macros for field reconfharv_encomp_ovr */
/**
 * @defgroup pmu_top_regs_core_reconfharv_encomp_ovr_field reconfharv_encomp_ovr_field
 * @brief macros for field reconfharv_encomp_ovr
 * @details override
 * @{
 */
#define PMU_PMU13__RECONFHARV_ENCOMP_OVR__SHIFT                              26
#define PMU_PMU13__RECONFHARV_ENCOMP_OVR__WIDTH                               1
#define PMU_PMU13__RECONFHARV_ENCOMP_OVR__MASK                      0x04000000U
#define PMU_PMU13__RECONFHARV_ENCOMP_OVR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x04000000U) >> 26)
#define PMU_PMU13__RECONFHARV_ENCOMP_OVR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 26) & 0x04000000U)
#define PMU_PMU13__RECONFHARV_ENCOMP_OVR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x04000000U) | (((uint32_t)(src) <<\
                    26) & 0x04000000U)
#define PMU_PMU13__RECONFHARV_ENCOMP_OVR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 26) & ~0x04000000U)))
#define PMU_PMU13__RECONFHARV_ENCOMP_OVR__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x04000000U) | ((uint32_t)(1) << 26)
#define PMU_PMU13__RECONFHARV_ENCOMP_OVR__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x04000000U) | ((uint32_t)(0) << 26)
#define PMU_PMU13__RECONFHARV_ENCOMP_OVR__RESET_VALUE               0x00000000U
/** @} */

/* macros for field reconfharv_encomp_ovr_val */
/**
 * @defgroup pmu_top_regs_core_reconfharv_encomp_ovr_val_field reconfharv_encomp_ovr_val_field
 * @brief macros for field reconfharv_encomp_ovr_val
 * @details override_val
 * @{
 */
#define PMU_PMU13__RECONFHARV_ENCOMP_OVR_VAL__SHIFT                          27
#define PMU_PMU13__RECONFHARV_ENCOMP_OVR_VAL__WIDTH                           1
#define PMU_PMU13__RECONFHARV_ENCOMP_OVR_VAL__MASK                  0x08000000U
#define PMU_PMU13__RECONFHARV_ENCOMP_OVR_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x08000000U) >> 27)
#define PMU_PMU13__RECONFHARV_ENCOMP_OVR_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 27) & 0x08000000U)
#define PMU_PMU13__RECONFHARV_ENCOMP_OVR_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x08000000U) | (((uint32_t)(src) <<\
                    27) & 0x08000000U)
#define PMU_PMU13__RECONFHARV_ENCOMP_OVR_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 27) & ~0x08000000U)))
#define PMU_PMU13__RECONFHARV_ENCOMP_OVR_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x08000000U) | ((uint32_t)(1) << 27)
#define PMU_PMU13__RECONFHARV_ENCOMP_OVR_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x08000000U) | ((uint32_t)(0) << 27)
#define PMU_PMU13__RECONFHARV_ENCOMP_OVR_VAL__RESET_VALUE           0x00000000U
/** @} */

/* macros for field ctr_ldo_en_ovr */
/**
 * @defgroup pmu_top_regs_core_ctr_ldo_en_ovr_field ctr_ldo_en_ovr_field
 * @brief macros for field ctr_ldo_en_ovr
 * @details ldo_en override
 * @{
 */
#define PMU_PMU13__CTR_LDO_EN_OVR__SHIFT                                     28
#define PMU_PMU13__CTR_LDO_EN_OVR__WIDTH                                      1
#define PMU_PMU13__CTR_LDO_EN_OVR__MASK                             0x10000000U
#define PMU_PMU13__CTR_LDO_EN_OVR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x10000000U) >> 28)
#define PMU_PMU13__CTR_LDO_EN_OVR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 28) & 0x10000000U)
#define PMU_PMU13__CTR_LDO_EN_OVR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x10000000U) | (((uint32_t)(src) <<\
                    28) & 0x10000000U)
#define PMU_PMU13__CTR_LDO_EN_OVR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 28) & ~0x10000000U)))
#define PMU_PMU13__CTR_LDO_EN_OVR__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x10000000U) | ((uint32_t)(1) << 28)
#define PMU_PMU13__CTR_LDO_EN_OVR__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x10000000U) | ((uint32_t)(0) << 28)
#define PMU_PMU13__CTR_LDO_EN_OVR__RESET_VALUE                      0x00000000U
/** @} */

/* macros for field ctr_ldo_en_ovr_val */
/**
 * @defgroup pmu_top_regs_core_ctr_ldo_en_ovr_val_field ctr_ldo_en_ovr_val_field
 * @brief macros for field ctr_ldo_en_ovr_val
 * @details ldo_en override value
 * @{
 */
#define PMU_PMU13__CTR_LDO_EN_OVR_VAL__SHIFT                                 29
#define PMU_PMU13__CTR_LDO_EN_OVR_VAL__WIDTH                                  1
#define PMU_PMU13__CTR_LDO_EN_OVR_VAL__MASK                         0x20000000U
#define PMU_PMU13__CTR_LDO_EN_OVR_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x20000000U) >> 29)
#define PMU_PMU13__CTR_LDO_EN_OVR_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 29) & 0x20000000U)
#define PMU_PMU13__CTR_LDO_EN_OVR_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x20000000U) | (((uint32_t)(src) <<\
                    29) & 0x20000000U)
#define PMU_PMU13__CTR_LDO_EN_OVR_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 29) & ~0x20000000U)))
#define PMU_PMU13__CTR_LDO_EN_OVR_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x20000000U) | ((uint32_t)(1) << 29)
#define PMU_PMU13__CTR_LDO_EN_OVR_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x20000000U) | ((uint32_t)(0) << 29)
#define PMU_PMU13__CTR_LDO_EN_OVR_VAL__RESET_VALUE                  0x00000000U
/** @} */

/* macros for field ctr_ldo_bypass_ovr */
/**
 * @defgroup pmu_top_regs_core_ctr_ldo_bypass_ovr_field ctr_ldo_bypass_ovr_field
 * @brief macros for field ctr_ldo_bypass_ovr
 * @details ldo_bypass override
 * @{
 */
#define PMU_PMU13__CTR_LDO_BYPASS_OVR__SHIFT                                 30
#define PMU_PMU13__CTR_LDO_BYPASS_OVR__WIDTH                                  1
#define PMU_PMU13__CTR_LDO_BYPASS_OVR__MASK                         0x40000000U
#define PMU_PMU13__CTR_LDO_BYPASS_OVR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x40000000U) >> 30)
#define PMU_PMU13__CTR_LDO_BYPASS_OVR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 30) & 0x40000000U)
#define PMU_PMU13__CTR_LDO_BYPASS_OVR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x40000000U) | (((uint32_t)(src) <<\
                    30) & 0x40000000U)
#define PMU_PMU13__CTR_LDO_BYPASS_OVR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 30) & ~0x40000000U)))
#define PMU_PMU13__CTR_LDO_BYPASS_OVR__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x40000000U) | ((uint32_t)(1) << 30)
#define PMU_PMU13__CTR_LDO_BYPASS_OVR__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x40000000U) | ((uint32_t)(0) << 30)
#define PMU_PMU13__CTR_LDO_BYPASS_OVR__RESET_VALUE                  0x00000000U
/** @} */

/* macros for field ctr_ldo_bypass_ovr_val */
/**
 * @defgroup pmu_top_regs_core_ctr_ldo_bypass_ovr_val_field ctr_ldo_bypass_ovr_val_field
 * @brief macros for field ctr_ldo_bypass_ovr_val
 * @details ldo bypass override value
 * @{
 */
#define PMU_PMU13__CTR_LDO_BYPASS_OVR_VAL__SHIFT                             31
#define PMU_PMU13__CTR_LDO_BYPASS_OVR_VAL__WIDTH                              1
#define PMU_PMU13__CTR_LDO_BYPASS_OVR_VAL__MASK                     0x80000000U
#define PMU_PMU13__CTR_LDO_BYPASS_OVR_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x80000000U) >> 31)
#define PMU_PMU13__CTR_LDO_BYPASS_OVR_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 31) & 0x80000000U)
#define PMU_PMU13__CTR_LDO_BYPASS_OVR_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x80000000U) | (((uint32_t)(src) <<\
                    31) & 0x80000000U)
#define PMU_PMU13__CTR_LDO_BYPASS_OVR_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 31) & ~0x80000000U)))
#define PMU_PMU13__CTR_LDO_BYPASS_OVR_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x80000000U) | ((uint32_t)(1) << 31)
#define PMU_PMU13__CTR_LDO_BYPASS_OVR_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x80000000U) | ((uint32_t)(0) << 31)
#define PMU_PMU13__CTR_LDO_BYPASS_OVR_VAL__RESET_VALUE              0x00000000U
/** @} */
#define PMU_PMU13__TYPE                                                uint32_t
#define PMU_PMU13__READ                                             0xffffffffU
#define PMU_PMU13__WRITE                                            0xffffffffU
#define PMU_PMU13__PRESERVED                                        0x00000000U
#define PMU_PMU13__RESET_VALUE                                      0x00000000U

#endif /* __PMU_PMU13_MACRO__ */

/** @} end of pmu13 */

/* macros for BlueprintGlobalNameSpace::PMU_pmu14 */
/**
 * @defgroup pmu_top_regs_core_pmu14 pmu14
 * @brief source/destination overrides definitions.
 * @{
 */
#ifndef __PMU_PMU14_MACRO__
#define __PMU_PMU14_MACRO__

/* macros for field src2_ovr */
/**
 * @defgroup pmu_top_regs_core_src2_ovr_field src2_ovr_field
 * @brief macros for field src2_ovr
 * @details override
 * @{
 */
#define PMU_PMU14__SRC2_OVR__SHIFT                                            0
#define PMU_PMU14__SRC2_OVR__WIDTH                                            1
#define PMU_PMU14__SRC2_OVR__MASK                                   0x00000001U
#define PMU_PMU14__SRC2_OVR__READ(src)          ((uint32_t)(src) & 0x00000001U)
#define PMU_PMU14__SRC2_OVR__WRITE(src)         ((uint32_t)(src) & 0x00000001U)
#define PMU_PMU14__SRC2_OVR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define PMU_PMU14__SRC2_OVR__VERIFY(src)  (!(((uint32_t)(src) & ~0x00000001U)))
#define PMU_PMU14__SRC2_OVR__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define PMU_PMU14__SRC2_OVR__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define PMU_PMU14__SRC2_OVR__RESET_VALUE                            0x00000000U
/** @} */

/* macros for field src2_ovr_val */
/**
 * @defgroup pmu_top_regs_core_src2_ovr_val_field src2_ovr_val_field
 * @brief macros for field src2_ovr_val
 * @details override val
 * @{
 */
#define PMU_PMU14__SRC2_OVR_VAL__SHIFT                                        1
#define PMU_PMU14__SRC2_OVR_VAL__WIDTH                                        1
#define PMU_PMU14__SRC2_OVR_VAL__MASK                               0x00000002U
#define PMU_PMU14__SRC2_OVR_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define PMU_PMU14__SRC2_OVR_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define PMU_PMU14__SRC2_OVR_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define PMU_PMU14__SRC2_OVR_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define PMU_PMU14__SRC2_OVR_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define PMU_PMU14__SRC2_OVR_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define PMU_PMU14__SRC2_OVR_VAL__RESET_VALUE                        0x00000000U
/** @} */

/* macros for field dest1_ovr */
/**
 * @defgroup pmu_top_regs_core_dest1_ovr_field dest1_ovr_field
 * @brief macros for field dest1_ovr
 * @details override
 * @{
 */
#define PMU_PMU14__DEST1_OVR__SHIFT                                           2
#define PMU_PMU14__DEST1_OVR__WIDTH                                           1
#define PMU_PMU14__DEST1_OVR__MASK                                  0x00000004U
#define PMU_PMU14__DEST1_OVR__READ(src)  (((uint32_t)(src) & 0x00000004U) >> 2)
#define PMU_PMU14__DEST1_OVR__WRITE(src) (((uint32_t)(src) << 2) & 0x00000004U)
#define PMU_PMU14__DEST1_OVR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | (((uint32_t)(src) <<\
                    2) & 0x00000004U)
#define PMU_PMU14__DEST1_OVR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 2) & ~0x00000004U)))
#define PMU_PMU14__DEST1_OVR__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(1) << 2)
#define PMU_PMU14__DEST1_OVR__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(0) << 2)
#define PMU_PMU14__DEST1_OVR__RESET_VALUE                           0x00000000U
/** @} */

/* macros for field dest1_ovr_val */
/**
 * @defgroup pmu_top_regs_core_dest1_ovr_val_field dest1_ovr_val_field
 * @brief macros for field dest1_ovr_val
 * @details override val
 * @{
 */
#define PMU_PMU14__DEST1_OVR_VAL__SHIFT                                       3
#define PMU_PMU14__DEST1_OVR_VAL__WIDTH                                       1
#define PMU_PMU14__DEST1_OVR_VAL__MASK                              0x00000008U
#define PMU_PMU14__DEST1_OVR_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000008U) >> 3)
#define PMU_PMU14__DEST1_OVR_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 3) & 0x00000008U)
#define PMU_PMU14__DEST1_OVR_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | (((uint32_t)(src) <<\
                    3) & 0x00000008U)
#define PMU_PMU14__DEST1_OVR_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 3) & ~0x00000008U)))
#define PMU_PMU14__DEST1_OVR_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((uint32_t)(1) << 3)
#define PMU_PMU14__DEST1_OVR_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((uint32_t)(0) << 3)
#define PMU_PMU14__DEST1_OVR_VAL__RESET_VALUE                       0x00000000U
/** @} */

/* macros for field dest2_ovr */
/**
 * @defgroup pmu_top_regs_core_dest2_ovr_field dest2_ovr_field
 * @brief macros for field dest2_ovr
 * @details override
 * @{
 */
#define PMU_PMU14__DEST2_OVR__SHIFT                                           4
#define PMU_PMU14__DEST2_OVR__WIDTH                                           1
#define PMU_PMU14__DEST2_OVR__MASK                                  0x00000010U
#define PMU_PMU14__DEST2_OVR__READ(src)  (((uint32_t)(src) & 0x00000010U) >> 4)
#define PMU_PMU14__DEST2_OVR__WRITE(src) (((uint32_t)(src) << 4) & 0x00000010U)
#define PMU_PMU14__DEST2_OVR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | (((uint32_t)(src) <<\
                    4) & 0x00000010U)
#define PMU_PMU14__DEST2_OVR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 4) & ~0x00000010U)))
#define PMU_PMU14__DEST2_OVR__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(1) << 4)
#define PMU_PMU14__DEST2_OVR__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(0) << 4)
#define PMU_PMU14__DEST2_OVR__RESET_VALUE                           0x00000000U
/** @} */

/* macros for field dest2_ovr_val */
/**
 * @defgroup pmu_top_regs_core_dest2_ovr_val_field dest2_ovr_val_field
 * @brief macros for field dest2_ovr_val
 * @details override val
 * @{
 */
#define PMU_PMU14__DEST2_OVR_VAL__SHIFT                                       5
#define PMU_PMU14__DEST2_OVR_VAL__WIDTH                                       1
#define PMU_PMU14__DEST2_OVR_VAL__MASK                              0x00000020U
#define PMU_PMU14__DEST2_OVR_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000020U) >> 5)
#define PMU_PMU14__DEST2_OVR_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 5) & 0x00000020U)
#define PMU_PMU14__DEST2_OVR_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | (((uint32_t)(src) <<\
                    5) & 0x00000020U)
#define PMU_PMU14__DEST2_OVR_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 5) & ~0x00000020U)))
#define PMU_PMU14__DEST2_OVR_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | ((uint32_t)(1) << 5)
#define PMU_PMU14__DEST2_OVR_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | ((uint32_t)(0) << 5)
#define PMU_PMU14__DEST2_OVR_VAL__RESET_VALUE                       0x00000001U
/** @} */

/* macros for field dest3_ovr */
/**
 * @defgroup pmu_top_regs_core_dest3_ovr_field dest3_ovr_field
 * @brief macros for field dest3_ovr
 * @details override
 * @{
 */
#define PMU_PMU14__DEST3_OVR__SHIFT                                           6
#define PMU_PMU14__DEST3_OVR__WIDTH                                           1
#define PMU_PMU14__DEST3_OVR__MASK                                  0x00000040U
#define PMU_PMU14__DEST3_OVR__READ(src)  (((uint32_t)(src) & 0x00000040U) >> 6)
#define PMU_PMU14__DEST3_OVR__WRITE(src) (((uint32_t)(src) << 6) & 0x00000040U)
#define PMU_PMU14__DEST3_OVR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000040U) | (((uint32_t)(src) <<\
                    6) & 0x00000040U)
#define PMU_PMU14__DEST3_OVR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 6) & ~0x00000040U)))
#define PMU_PMU14__DEST3_OVR__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000040U) | ((uint32_t)(1) << 6)
#define PMU_PMU14__DEST3_OVR__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000040U) | ((uint32_t)(0) << 6)
#define PMU_PMU14__DEST3_OVR__RESET_VALUE                           0x00000000U
/** @} */

/* macros for field dest3_ovr_val */
/**
 * @defgroup pmu_top_regs_core_dest3_ovr_val_field dest3_ovr_val_field
 * @brief macros for field dest3_ovr_val
 * @details override val
 * @{
 */
#define PMU_PMU14__DEST3_OVR_VAL__SHIFT                                       7
#define PMU_PMU14__DEST3_OVR_VAL__WIDTH                                       1
#define PMU_PMU14__DEST3_OVR_VAL__MASK                              0x00000080U
#define PMU_PMU14__DEST3_OVR_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000080U) >> 7)
#define PMU_PMU14__DEST3_OVR_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 7) & 0x00000080U)
#define PMU_PMU14__DEST3_OVR_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000080U) | (((uint32_t)(src) <<\
                    7) & 0x00000080U)
#define PMU_PMU14__DEST3_OVR_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 7) & ~0x00000080U)))
#define PMU_PMU14__DEST3_OVR_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000080U) | ((uint32_t)(1) << 7)
#define PMU_PMU14__DEST3_OVR_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000080U) | ((uint32_t)(0) << 7)
#define PMU_PMU14__DEST3_OVR_VAL__RESET_VALUE                       0x00000000U
/** @} */

/* macros for field dest4_ovr */
/**
 * @defgroup pmu_top_regs_core_dest4_ovr_field dest4_ovr_field
 * @brief macros for field dest4_ovr
 * @details override
 * @{
 */
#define PMU_PMU14__DEST4_OVR__SHIFT                                           8
#define PMU_PMU14__DEST4_OVR__WIDTH                                           1
#define PMU_PMU14__DEST4_OVR__MASK                                  0x00000100U
#define PMU_PMU14__DEST4_OVR__READ(src)  (((uint32_t)(src) & 0x00000100U) >> 8)
#define PMU_PMU14__DEST4_OVR__WRITE(src) (((uint32_t)(src) << 8) & 0x00000100U)
#define PMU_PMU14__DEST4_OVR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000100U) | (((uint32_t)(src) <<\
                    8) & 0x00000100U)
#define PMU_PMU14__DEST4_OVR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x00000100U)))
#define PMU_PMU14__DEST4_OVR__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000100U) | ((uint32_t)(1) << 8)
#define PMU_PMU14__DEST4_OVR__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000100U) | ((uint32_t)(0) << 8)
#define PMU_PMU14__DEST4_OVR__RESET_VALUE                           0x00000000U
/** @} */

/* macros for field dest4_ovr_val */
/**
 * @defgroup pmu_top_regs_core_dest4_ovr_val_field dest4_ovr_val_field
 * @brief macros for field dest4_ovr_val
 * @details override val
 * @{
 */
#define PMU_PMU14__DEST4_OVR_VAL__SHIFT                                       9
#define PMU_PMU14__DEST4_OVR_VAL__WIDTH                                       1
#define PMU_PMU14__DEST4_OVR_VAL__MASK                              0x00000200U
#define PMU_PMU14__DEST4_OVR_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000200U) >> 9)
#define PMU_PMU14__DEST4_OVR_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 9) & 0x00000200U)
#define PMU_PMU14__DEST4_OVR_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000200U) | (((uint32_t)(src) <<\
                    9) & 0x00000200U)
#define PMU_PMU14__DEST4_OVR_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 9) & ~0x00000200U)))
#define PMU_PMU14__DEST4_OVR_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000200U) | ((uint32_t)(1) << 9)
#define PMU_PMU14__DEST4_OVR_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000200U) | ((uint32_t)(0) << 9)
#define PMU_PMU14__DEST4_OVR_VAL__RESET_VALUE                       0x00000000U
/** @} */

/* macros for field state_ovr */
/**
 * @defgroup pmu_top_regs_core_state_ovr_field state_ovr_field
 * @brief macros for field state_ovr
 * @details override pmu state for test
 * @{
 */
#define PMU_PMU14__STATE_OVR__SHIFT                                          10
#define PMU_PMU14__STATE_OVR__WIDTH                                           1
#define PMU_PMU14__STATE_OVR__MASK                                  0x00000400U
#define PMU_PMU14__STATE_OVR__READ(src) (((uint32_t)(src) & 0x00000400U) >> 10)
#define PMU_PMU14__STATE_OVR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 10) & 0x00000400U)
#define PMU_PMU14__STATE_OVR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000400U) | (((uint32_t)(src) <<\
                    10) & 0x00000400U)
#define PMU_PMU14__STATE_OVR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 10) & ~0x00000400U)))
#define PMU_PMU14__STATE_OVR__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000400U) | ((uint32_t)(1) << 10)
#define PMU_PMU14__STATE_OVR__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000400U) | ((uint32_t)(0) << 10)
#define PMU_PMU14__STATE_OVR__RESET_VALUE                           0x00000000U
/** @} */

/* macros for field test_state */
/**
 * @defgroup pmu_top_regs_core_test_state_field test_state_field
 * @brief macros for field test_state
 * @details force the pmu state to be this state
 * @{
 */
#define PMU_PMU14__TEST_STATE__SHIFT                                         11
#define PMU_PMU14__TEST_STATE__WIDTH                                          3
#define PMU_PMU14__TEST_STATE__MASK                                 0x00003800U
#define PMU_PMU14__TEST_STATE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00003800U) >> 11)
#define PMU_PMU14__TEST_STATE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 11) & 0x00003800U)
#define PMU_PMU14__TEST_STATE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00003800U) | (((uint32_t)(src) <<\
                    11) & 0x00003800U)
#define PMU_PMU14__TEST_STATE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 11) & ~0x00003800U)))
#define PMU_PMU14__TEST_STATE__RESET_VALUE                          0x00000000U
/** @} */

/* macros for field pwr_mode_ovr */
/**
 * @defgroup pmu_top_regs_core_pwr_mode_ovr_field pwr_mode_ovr_field
 * @brief macros for field pwr_mode_ovr
 * @details override power mode for testing
 * @{
 */
#define PMU_PMU14__PWR_MODE_OVR__SHIFT                                       14
#define PMU_PMU14__PWR_MODE_OVR__WIDTH                                        1
#define PMU_PMU14__PWR_MODE_OVR__MASK                               0x00004000U
#define PMU_PMU14__PWR_MODE_OVR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00004000U) >> 14)
#define PMU_PMU14__PWR_MODE_OVR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 14) & 0x00004000U)
#define PMU_PMU14__PWR_MODE_OVR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00004000U) | (((uint32_t)(src) <<\
                    14) & 0x00004000U)
#define PMU_PMU14__PWR_MODE_OVR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 14) & ~0x00004000U)))
#define PMU_PMU14__PWR_MODE_OVR__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00004000U) | ((uint32_t)(1) << 14)
#define PMU_PMU14__PWR_MODE_OVR__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00004000U) | ((uint32_t)(0) << 14)
#define PMU_PMU14__PWR_MODE_OVR__RESET_VALUE                        0x00000000U
/** @} */

/* macros for field pwr_mode_val */
/**
 * @defgroup pmu_top_regs_core_pwr_mode_val_field pwr_mode_val_field
 * @brief macros for field pwr_mode_val
 * @details pwr_mode override value
 * @{
 */
#define PMU_PMU14__PWR_MODE_VAL__SHIFT                                       15
#define PMU_PMU14__PWR_MODE_VAL__WIDTH                                        3
#define PMU_PMU14__PWR_MODE_VAL__MASK                               0x00038000U
#define PMU_PMU14__PWR_MODE_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00038000U) >> 15)
#define PMU_PMU14__PWR_MODE_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 15) & 0x00038000U)
#define PMU_PMU14__PWR_MODE_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00038000U) | (((uint32_t)(src) <<\
                    15) & 0x00038000U)
#define PMU_PMU14__PWR_MODE_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 15) & ~0x00038000U)))
#define PMU_PMU14__PWR_MODE_VAL__RESET_VALUE                        0x00000000U
/** @} */

/* macros for field wurx_cutvdd_b_ovr */
/**
 * @defgroup pmu_top_regs_core_wurx_cutvdd_b_ovr_field wurx_cutvdd_b_ovr_field
 * @brief macros for field wurx_cutvdd_b_ovr
 * @details override
 * @{
 */
#define PMU_PMU14__WURX_CUTVDD_B_OVR__SHIFT                                  18
#define PMU_PMU14__WURX_CUTVDD_B_OVR__WIDTH                                   1
#define PMU_PMU14__WURX_CUTVDD_B_OVR__MASK                          0x00040000U
#define PMU_PMU14__WURX_CUTVDD_B_OVR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00040000U) >> 18)
#define PMU_PMU14__WURX_CUTVDD_B_OVR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 18) & 0x00040000U)
#define PMU_PMU14__WURX_CUTVDD_B_OVR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | (((uint32_t)(src) <<\
                    18) & 0x00040000U)
#define PMU_PMU14__WURX_CUTVDD_B_OVR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 18) & ~0x00040000U)))
#define PMU_PMU14__WURX_CUTVDD_B_OVR__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(1) << 18)
#define PMU_PMU14__WURX_CUTVDD_B_OVR__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(0) << 18)
#define PMU_PMU14__WURX_CUTVDD_B_OVR__RESET_VALUE                   0x00000000U
/** @} */

/* macros for field wurx_cutvdd_b_ovr_val */
/**
 * @defgroup pmu_top_regs_core_wurx_cutvdd_b_ovr_val_field wurx_cutvdd_b_ovr_val_field
 * @brief macros for field wurx_cutvdd_b_ovr_val
 * @details override val
 * @{
 */
#define PMU_PMU14__WURX_CUTVDD_B_OVR_VAL__SHIFT                              19
#define PMU_PMU14__WURX_CUTVDD_B_OVR_VAL__WIDTH                               1
#define PMU_PMU14__WURX_CUTVDD_B_OVR_VAL__MASK                      0x00080000U
#define PMU_PMU14__WURX_CUTVDD_B_OVR_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00080000U) >> 19)
#define PMU_PMU14__WURX_CUTVDD_B_OVR_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 19) & 0x00080000U)
#define PMU_PMU14__WURX_CUTVDD_B_OVR_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00080000U) | (((uint32_t)(src) <<\
                    19) & 0x00080000U)
#define PMU_PMU14__WURX_CUTVDD_B_OVR_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 19) & ~0x00080000U)))
#define PMU_PMU14__WURX_CUTVDD_B_OVR_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00080000U) | ((uint32_t)(1) << 19)
#define PMU_PMU14__WURX_CUTVDD_B_OVR_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00080000U) | ((uint32_t)(0) << 19)
#define PMU_PMU14__WURX_CUTVDD_B_OVR_VAL__RESET_VALUE               0x00000000U
/** @} */

/* macros for field wkup_timer_en_ovr */
/**
 * @defgroup pmu_top_regs_core_wkup_timer_en_ovr_field wkup_timer_en_ovr_field
 * @brief macros for field wkup_timer_en_ovr
 * @details override
 * @{
 */
#define PMU_PMU14__WKUP_TIMER_EN_OVR__SHIFT                                  20
#define PMU_PMU14__WKUP_TIMER_EN_OVR__WIDTH                                   1
#define PMU_PMU14__WKUP_TIMER_EN_OVR__MASK                          0x00100000U
#define PMU_PMU14__WKUP_TIMER_EN_OVR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00100000U) >> 20)
#define PMU_PMU14__WKUP_TIMER_EN_OVR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 20) & 0x00100000U)
#define PMU_PMU14__WKUP_TIMER_EN_OVR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00100000U) | (((uint32_t)(src) <<\
                    20) & 0x00100000U)
#define PMU_PMU14__WKUP_TIMER_EN_OVR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 20) & ~0x00100000U)))
#define PMU_PMU14__WKUP_TIMER_EN_OVR__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00100000U) | ((uint32_t)(1) << 20)
#define PMU_PMU14__WKUP_TIMER_EN_OVR__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00100000U) | ((uint32_t)(0) << 20)
#define PMU_PMU14__WKUP_TIMER_EN_OVR__RESET_VALUE                   0x00000000U
/** @} */

/* macros for field wkup_timer_en_val */
/**
 * @defgroup pmu_top_regs_core_wkup_timer_en_val_field wkup_timer_en_val_field
 * @brief macros for field wkup_timer_en_val
 * @details override val
 * @{
 */
#define PMU_PMU14__WKUP_TIMER_EN_VAL__SHIFT                                  21
#define PMU_PMU14__WKUP_TIMER_EN_VAL__WIDTH                                   1
#define PMU_PMU14__WKUP_TIMER_EN_VAL__MASK                          0x00200000U
#define PMU_PMU14__WKUP_TIMER_EN_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00200000U) >> 21)
#define PMU_PMU14__WKUP_TIMER_EN_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 21) & 0x00200000U)
#define PMU_PMU14__WKUP_TIMER_EN_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00200000U) | (((uint32_t)(src) <<\
                    21) & 0x00200000U)
#define PMU_PMU14__WKUP_TIMER_EN_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 21) & ~0x00200000U)))
#define PMU_PMU14__WKUP_TIMER_EN_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00200000U) | ((uint32_t)(1) << 21)
#define PMU_PMU14__WKUP_TIMER_EN_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00200000U) | ((uint32_t)(0) << 21)
#define PMU_PMU14__WKUP_TIMER_EN_VAL__RESET_VALUE                   0x00000000U
/** @} */

/* macros for field lpcomp_en_ovr */
/**
 * @defgroup pmu_top_regs_core_lpcomp_en_ovr_field lpcomp_en_ovr_field
 * @brief macros for field lpcomp_en_ovr
 * @details override
 * @{
 */
#define PMU_PMU14__LPCOMP_EN_OVR__SHIFT                                      22
#define PMU_PMU14__LPCOMP_EN_OVR__WIDTH                                       1
#define PMU_PMU14__LPCOMP_EN_OVR__MASK                              0x00400000U
#define PMU_PMU14__LPCOMP_EN_OVR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00400000U) >> 22)
#define PMU_PMU14__LPCOMP_EN_OVR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 22) & 0x00400000U)
#define PMU_PMU14__LPCOMP_EN_OVR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00400000U) | (((uint32_t)(src) <<\
                    22) & 0x00400000U)
#define PMU_PMU14__LPCOMP_EN_OVR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 22) & ~0x00400000U)))
#define PMU_PMU14__LPCOMP_EN_OVR__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00400000U) | ((uint32_t)(1) << 22)
#define PMU_PMU14__LPCOMP_EN_OVR__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00400000U) | ((uint32_t)(0) << 22)
#define PMU_PMU14__LPCOMP_EN_OVR__RESET_VALUE                       0x00000000U
/** @} */

/* macros for field lpcomp_en_ovr_val */
/**
 * @defgroup pmu_top_regs_core_lpcomp_en_ovr_val_field lpcomp_en_ovr_val_field
 * @brief macros for field lpcomp_en_ovr_val
 * @details override val
 * @{
 */
#define PMU_PMU14__LPCOMP_EN_OVR_VAL__SHIFT                                  23
#define PMU_PMU14__LPCOMP_EN_OVR_VAL__WIDTH                                   1
#define PMU_PMU14__LPCOMP_EN_OVR_VAL__MASK                          0x00800000U
#define PMU_PMU14__LPCOMP_EN_OVR_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00800000U) >> 23)
#define PMU_PMU14__LPCOMP_EN_OVR_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 23) & 0x00800000U)
#define PMU_PMU14__LPCOMP_EN_OVR_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | (((uint32_t)(src) <<\
                    23) & 0x00800000U)
#define PMU_PMU14__LPCOMP_EN_OVR_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 23) & ~0x00800000U)))
#define PMU_PMU14__LPCOMP_EN_OVR_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(1) << 23)
#define PMU_PMU14__LPCOMP_EN_OVR_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(0) << 23)
#define PMU_PMU14__LPCOMP_EN_OVR_VAL__RESET_VALUE                   0x00000000U
/** @} */

/* macros for field pinedge_en_ovr */
/**
 * @defgroup pmu_top_regs_core_pinedge_en_ovr_field pinedge_en_ovr_field
 * @brief macros for field pinedge_en_ovr
 * @details override
 * @{
 */
#define PMU_PMU14__PINEDGE_EN_OVR__SHIFT                                     24
#define PMU_PMU14__PINEDGE_EN_OVR__WIDTH                                      1
#define PMU_PMU14__PINEDGE_EN_OVR__MASK                             0x01000000U
#define PMU_PMU14__PINEDGE_EN_OVR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x01000000U) >> 24)
#define PMU_PMU14__PINEDGE_EN_OVR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0x01000000U)
#define PMU_PMU14__PINEDGE_EN_OVR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | (((uint32_t)(src) <<\
                    24) & 0x01000000U)
#define PMU_PMU14__PINEDGE_EN_OVR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x01000000U)))
#define PMU_PMU14__PINEDGE_EN_OVR__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(1) << 24)
#define PMU_PMU14__PINEDGE_EN_OVR__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(0) << 24)
#define PMU_PMU14__PINEDGE_EN_OVR__RESET_VALUE                      0x00000000U
/** @} */

/* macros for field pinedge_en_ovr_val */
/**
 * @defgroup pmu_top_regs_core_pinedge_en_ovr_val_field pinedge_en_ovr_val_field
 * @brief macros for field pinedge_en_ovr_val
 * @details override val
 * @{
 */
#define PMU_PMU14__PINEDGE_EN_OVR_VAL__SHIFT                                 25
#define PMU_PMU14__PINEDGE_EN_OVR_VAL__WIDTH                                  1
#define PMU_PMU14__PINEDGE_EN_OVR_VAL__MASK                         0x02000000U
#define PMU_PMU14__PINEDGE_EN_OVR_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x02000000U) >> 25)
#define PMU_PMU14__PINEDGE_EN_OVR_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 25) & 0x02000000U)
#define PMU_PMU14__PINEDGE_EN_OVR_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x02000000U) | (((uint32_t)(src) <<\
                    25) & 0x02000000U)
#define PMU_PMU14__PINEDGE_EN_OVR_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 25) & ~0x02000000U)))
#define PMU_PMU14__PINEDGE_EN_OVR_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x02000000U) | ((uint32_t)(1) << 25)
#define PMU_PMU14__PINEDGE_EN_OVR_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x02000000U) | ((uint32_t)(0) << 25)
#define PMU_PMU14__PINEDGE_EN_OVR_VAL__RESET_VALUE                  0x00000000U
/** @} */
#define PMU_PMU14__TYPE                                                uint32_t
#define PMU_PMU14__READ                                             0x03ffffffU
#define PMU_PMU14__WRITE                                            0x03ffffffU
#define PMU_PMU14__PRESERVED                                        0x00000000U
#define PMU_PMU14__RESET_VALUE                                      0x00000020U

#endif /* __PMU_PMU14_MACRO__ */

/** @} end of pmu14 */

/* macros for BlueprintGlobalNameSpace::PMU_pmu15 */
/**
 * @defgroup pmu_top_regs_core_pmu15 pmu15
 * @brief spares definitions.
 * @{
 */
#ifndef __PMU_PMU15_MACRO__
#define __PMU_PMU15_MACRO__

/* macros for field off_trans_wait_reg */
/**
 * @defgroup pmu_top_regs_core_off_trans_wait_reg_field off_trans_wait_reg_field
 * @brief macros for field off_trans_wait_reg
 * @details spare bits6..0 off_trans_wait_reg7 override en_refgen_pre8 override val for en_refgen_pre9 override Harvest 1 rectifier enable10 override val for Harvest 1 resctifier enable11 override ctr_refextend_out12 override val for ctr_refextend_out13 override for isolate_b_pre14 override for wake_only_if_enough_energy15 override for energyGood_out1
 * @{
 */
#define PMU_PMU15__OFF_TRANS_WAIT_REG__SHIFT                                  0
#define PMU_PMU15__OFF_TRANS_WAIT_REG__WIDTH                                  7
#define PMU_PMU15__OFF_TRANS_WAIT_REG__MASK                         0x0000007fU
#define PMU_PMU15__OFF_TRANS_WAIT_REG__READ(src) \
                    ((uint32_t)(src)\
                    & 0x0000007fU)
#define PMU_PMU15__OFF_TRANS_WAIT_REG__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x0000007fU)
#define PMU_PMU15__OFF_TRANS_WAIT_REG__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000007fU) | ((uint32_t)(src) &\
                    0x0000007fU)
#define PMU_PMU15__OFF_TRANS_WAIT_REG__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x0000007fU)))
#define PMU_PMU15__OFF_TRANS_WAIT_REG__RESET_VALUE                  0x0000006eU
/** @} */

/* macros for field en_refgen_pre_ovr */
/**
 * @defgroup pmu_top_regs_core_en_refgen_pre_ovr_field en_refgen_pre_ovr_field
 * @brief macros for field en_refgen_pre_ovr
 * @details spare bits6..0 off_trans_wait_reg7 override en_refgen_pre8 override val for en_refgen_pre9 override Harvest 1 rectifier enable10 override val for Harvest 1 resctifier enable11 override ctr_refextend_out12 override val for ctr_refextend_out13 override for isolate_b_pre14 override for wake_only_if_enough_energy15 override for energyGood_out1
 * @{
 */
#define PMU_PMU15__EN_REFGEN_PRE_OVR__SHIFT                                   7
#define PMU_PMU15__EN_REFGEN_PRE_OVR__WIDTH                                   1
#define PMU_PMU15__EN_REFGEN_PRE_OVR__MASK                          0x00000080U
#define PMU_PMU15__EN_REFGEN_PRE_OVR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000080U) >> 7)
#define PMU_PMU15__EN_REFGEN_PRE_OVR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 7) & 0x00000080U)
#define PMU_PMU15__EN_REFGEN_PRE_OVR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000080U) | (((uint32_t)(src) <<\
                    7) & 0x00000080U)
#define PMU_PMU15__EN_REFGEN_PRE_OVR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 7) & ~0x00000080U)))
#define PMU_PMU15__EN_REFGEN_PRE_OVR__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000080U) | ((uint32_t)(1) << 7)
#define PMU_PMU15__EN_REFGEN_PRE_OVR__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000080U) | ((uint32_t)(0) << 7)
#define PMU_PMU15__EN_REFGEN_PRE_OVR__RESET_VALUE                   0x00000000U
/** @} */

/* macros for field en_refgen_pre_ovr_val */
/**
 * @defgroup pmu_top_regs_core_en_refgen_pre_ovr_val_field en_refgen_pre_ovr_val_field
 * @brief macros for field en_refgen_pre_ovr_val
 * @details spare bits6..0 off_trans_wait_reg7 override en_refgen_pre8 override val for en_refgen_pre9 override Harvest 1 rectifier enable10 override val for Harvest 1 resctifier enable11 override ctr_refextend_out12 override val for ctr_refextend_out13 override for isolate_b_pre14 override for wake_only_if_enough_energy15 override for energyGood_out1
 * @{
 */
#define PMU_PMU15__EN_REFGEN_PRE_OVR_VAL__SHIFT                               8
#define PMU_PMU15__EN_REFGEN_PRE_OVR_VAL__WIDTH                               1
#define PMU_PMU15__EN_REFGEN_PRE_OVR_VAL__MASK                      0x00000100U
#define PMU_PMU15__EN_REFGEN_PRE_OVR_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000100U) >> 8)
#define PMU_PMU15__EN_REFGEN_PRE_OVR_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x00000100U)
#define PMU_PMU15__EN_REFGEN_PRE_OVR_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000100U) | (((uint32_t)(src) <<\
                    8) & 0x00000100U)
#define PMU_PMU15__EN_REFGEN_PRE_OVR_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x00000100U)))
#define PMU_PMU15__EN_REFGEN_PRE_OVR_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000100U) | ((uint32_t)(1) << 8)
#define PMU_PMU15__EN_REFGEN_PRE_OVR_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000100U) | ((uint32_t)(0) << 8)
#define PMU_PMU15__EN_REFGEN_PRE_OVR_VAL__RESET_VALUE               0x00000000U
/** @} */

/* macros for field harv1_rect_en_ovr */
/**
 * @defgroup pmu_top_regs_core_harv1_rect_en_ovr_field harv1_rect_en_ovr_field
 * @brief macros for field harv1_rect_en_ovr
 * @details spare bits6..0 off_trans_wait_reg7 override en_refgen_pre8 override val for en_refgen_pre9 override Harvest 1 rectifier enable10 override val for Harvest 1 resctifier enable11 override ctr_refextend_out12 override val for ctr_refextend_out13 override for isolate_b_pre14 override for wake_only_if_enough_energy15 override for energyGood_out1
 * @{
 */
#define PMU_PMU15__HARV1_RECT_EN_OVR__SHIFT                                   9
#define PMU_PMU15__HARV1_RECT_EN_OVR__WIDTH                                   1
#define PMU_PMU15__HARV1_RECT_EN_OVR__MASK                          0x00000200U
#define PMU_PMU15__HARV1_RECT_EN_OVR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000200U) >> 9)
#define PMU_PMU15__HARV1_RECT_EN_OVR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 9) & 0x00000200U)
#define PMU_PMU15__HARV1_RECT_EN_OVR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000200U) | (((uint32_t)(src) <<\
                    9) & 0x00000200U)
#define PMU_PMU15__HARV1_RECT_EN_OVR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 9) & ~0x00000200U)))
#define PMU_PMU15__HARV1_RECT_EN_OVR__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000200U) | ((uint32_t)(1) << 9)
#define PMU_PMU15__HARV1_RECT_EN_OVR__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000200U) | ((uint32_t)(0) << 9)
#define PMU_PMU15__HARV1_RECT_EN_OVR__RESET_VALUE                   0x00000000U
/** @} */

/* macros for field harv1_rect_en_ovr_val */
/**
 * @defgroup pmu_top_regs_core_harv1_rect_en_ovr_val_field harv1_rect_en_ovr_val_field
 * @brief macros for field harv1_rect_en_ovr_val
 * @details spare bits6..0 off_trans_wait_reg7 override en_refgen_pre8 override val for en_refgen_pre9 override Harvest 1 rectifier enable10 override val for Harvest 1 resctifier enable11 override ctr_refextend_out12 override val for ctr_refextend_out13 override for isolate_b_pre14 override for wake_only_if_enough_energy15 override for energyGood_out1
 * @{
 */
#define PMU_PMU15__HARV1_RECT_EN_OVR_VAL__SHIFT                              10
#define PMU_PMU15__HARV1_RECT_EN_OVR_VAL__WIDTH                               1
#define PMU_PMU15__HARV1_RECT_EN_OVR_VAL__MASK                      0x00000400U
#define PMU_PMU15__HARV1_RECT_EN_OVR_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000400U) >> 10)
#define PMU_PMU15__HARV1_RECT_EN_OVR_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 10) & 0x00000400U)
#define PMU_PMU15__HARV1_RECT_EN_OVR_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000400U) | (((uint32_t)(src) <<\
                    10) & 0x00000400U)
#define PMU_PMU15__HARV1_RECT_EN_OVR_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 10) & ~0x00000400U)))
#define PMU_PMU15__HARV1_RECT_EN_OVR_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000400U) | ((uint32_t)(1) << 10)
#define PMU_PMU15__HARV1_RECT_EN_OVR_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000400U) | ((uint32_t)(0) << 10)
#define PMU_PMU15__HARV1_RECT_EN_OVR_VAL__RESET_VALUE               0x00000000U
/** @} */

/* macros for field ctr_refextend_out_ovr */
/**
 * @defgroup pmu_top_regs_core_ctr_refextend_out_ovr_field ctr_refextend_out_ovr_field
 * @brief macros for field ctr_refextend_out_ovr
 * @details spare bits6..0 off_trans_wait_reg7 override en_refgen_pre8 override val for en_refgen_pre9 override Harvest 1 rectifier enable10 override val for Harvest 1 resctifier enable11 override ctr_refextend_out12 override val for ctr_refextend_out13 override for isolate_b_pre14 override for wake_only_if_enough_energy15 override for energyGood_out1
 * @{
 */
#define PMU_PMU15__CTR_REFEXTEND_OUT_OVR__SHIFT                              11
#define PMU_PMU15__CTR_REFEXTEND_OUT_OVR__WIDTH                               1
#define PMU_PMU15__CTR_REFEXTEND_OUT_OVR__MASK                      0x00000800U
#define PMU_PMU15__CTR_REFEXTEND_OUT_OVR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000800U) >> 11)
#define PMU_PMU15__CTR_REFEXTEND_OUT_OVR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 11) & 0x00000800U)
#define PMU_PMU15__CTR_REFEXTEND_OUT_OVR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000800U) | (((uint32_t)(src) <<\
                    11) & 0x00000800U)
#define PMU_PMU15__CTR_REFEXTEND_OUT_OVR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 11) & ~0x00000800U)))
#define PMU_PMU15__CTR_REFEXTEND_OUT_OVR__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000800U) | ((uint32_t)(1) << 11)
#define PMU_PMU15__CTR_REFEXTEND_OUT_OVR__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000800U) | ((uint32_t)(0) << 11)
#define PMU_PMU15__CTR_REFEXTEND_OUT_OVR__RESET_VALUE               0x00000000U
/** @} */

/* macros for field ctr_refextend_out_ovr_val */
/**
 * @defgroup pmu_top_regs_core_ctr_refextend_out_ovr_val_field ctr_refextend_out_ovr_val_field
 * @brief macros for field ctr_refextend_out_ovr_val
 * @details spare bits6..0 off_trans_wait_reg7 override en_refgen_pre8 override val for en_refgen_pre9 override Harvest 1 rectifier enable10 override val for Harvest 1 resctifier enable11 override ctr_refextend_out12 override val for ctr_refextend_out13 override for isolate_b_pre14 override for wake_only_if_enough_energy15 override for energyGood_out1
 * @{
 */
#define PMU_PMU15__CTR_REFEXTEND_OUT_OVR_VAL__SHIFT                          12
#define PMU_PMU15__CTR_REFEXTEND_OUT_OVR_VAL__WIDTH                           1
#define PMU_PMU15__CTR_REFEXTEND_OUT_OVR_VAL__MASK                  0x00001000U
#define PMU_PMU15__CTR_REFEXTEND_OUT_OVR_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00001000U) >> 12)
#define PMU_PMU15__CTR_REFEXTEND_OUT_OVR_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 12) & 0x00001000U)
#define PMU_PMU15__CTR_REFEXTEND_OUT_OVR_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00001000U) | (((uint32_t)(src) <<\
                    12) & 0x00001000U)
#define PMU_PMU15__CTR_REFEXTEND_OUT_OVR_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 12) & ~0x00001000U)))
#define PMU_PMU15__CTR_REFEXTEND_OUT_OVR_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00001000U) | ((uint32_t)(1) << 12)
#define PMU_PMU15__CTR_REFEXTEND_OUT_OVR_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00001000U) | ((uint32_t)(0) << 12)
#define PMU_PMU15__CTR_REFEXTEND_OUT_OVR_VAL__RESET_VALUE           0x00000000U
/** @} */

/* macros for field force_isolate_b_pre */
/**
 * @defgroup pmu_top_regs_core_force_isolate_b_pre_field force_isolate_b_pre_field
 * @brief macros for field force_isolate_b_pre
 * @details spare bits6..0 off_trans_wait_reg7 override en_refgen_pre8 override val for en_refgen_pre9 override Harvest 1 rectifier enable10 override val for Harvest 1 resctifier enable11 override ctr_refextend_out12 override val for ctr_refextend_out13 override for isolate_b_pre14 override for wake_only_if_enough_energy15 override for energyGood_out1
 * @{
 */
#define PMU_PMU15__FORCE_ISOLATE_B_PRE__SHIFT                                13
#define PMU_PMU15__FORCE_ISOLATE_B_PRE__WIDTH                                 1
#define PMU_PMU15__FORCE_ISOLATE_B_PRE__MASK                        0x00002000U
#define PMU_PMU15__FORCE_ISOLATE_B_PRE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00002000U) >> 13)
#define PMU_PMU15__FORCE_ISOLATE_B_PRE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 13) & 0x00002000U)
#define PMU_PMU15__FORCE_ISOLATE_B_PRE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00002000U) | (((uint32_t)(src) <<\
                    13) & 0x00002000U)
#define PMU_PMU15__FORCE_ISOLATE_B_PRE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 13) & ~0x00002000U)))
#define PMU_PMU15__FORCE_ISOLATE_B_PRE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00002000U) | ((uint32_t)(1) << 13)
#define PMU_PMU15__FORCE_ISOLATE_B_PRE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00002000U) | ((uint32_t)(0) << 13)
#define PMU_PMU15__FORCE_ISOLATE_B_PRE__RESET_VALUE                 0x00000000U
/** @} */

/* macros for field wake_only_if_enough_energy */
/**
 * @defgroup pmu_top_regs_core_wake_only_if_enough_energy_field wake_only_if_enough_energy_field
 * @brief macros for field wake_only_if_enough_energy
 * @details spare bits6..0 off_trans_wait_reg7 override en_refgen_pre8 override val for en_refgen_pre9 override Harvest 1 rectifier enable10 override val for Harvest 1 resctifier enable11 override ctr_refextend_out12 override val for ctr_refextend_out13 override for isolate_b_pre14 override for wake_only_if_enough_energy15 override for energyGood_out1
 * @{
 */
#define PMU_PMU15__WAKE_ONLY_IF_ENOUGH_ENERGY__SHIFT                         14
#define PMU_PMU15__WAKE_ONLY_IF_ENOUGH_ENERGY__WIDTH                          1
#define PMU_PMU15__WAKE_ONLY_IF_ENOUGH_ENERGY__MASK                 0x00004000U
#define PMU_PMU15__WAKE_ONLY_IF_ENOUGH_ENERGY__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00004000U) >> 14)
#define PMU_PMU15__WAKE_ONLY_IF_ENOUGH_ENERGY__WRITE(src) \
                    (((uint32_t)(src)\
                    << 14) & 0x00004000U)
#define PMU_PMU15__WAKE_ONLY_IF_ENOUGH_ENERGY__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00004000U) | (((uint32_t)(src) <<\
                    14) & 0x00004000U)
#define PMU_PMU15__WAKE_ONLY_IF_ENOUGH_ENERGY__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 14) & ~0x00004000U)))
#define PMU_PMU15__WAKE_ONLY_IF_ENOUGH_ENERGY__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00004000U) | ((uint32_t)(1) << 14)
#define PMU_PMU15__WAKE_ONLY_IF_ENOUGH_ENERGY__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00004000U) | ((uint32_t)(0) << 14)
#define PMU_PMU15__WAKE_ONLY_IF_ENOUGH_ENERGY__RESET_VALUE          0x00000000U
/** @} */

/* macros for field force_energyGood_out1 */
/**
 * @defgroup pmu_top_regs_core_force_energyGood_out1_field force_energyGood_out1_field
 * @brief macros for field force_energyGood_out1
 * @details spare bits6..0 off_trans_wait_reg7 override en_refgen_pre8 override val for en_refgen_pre9 override Harvest 1 rectifier enable10 override val for Harvest 1 resctifier enable11 override ctr_refextend_out12 override val for ctr_refextend_out13 override for isolate_b_pre14 override for wake_only_if_enough_energy15 override for energyGood_out1
 * @{
 */
#define PMU_PMU15__FORCE_ENERGYGOOD_OUT1__SHIFT                              15
#define PMU_PMU15__FORCE_ENERGYGOOD_OUT1__WIDTH                               1
#define PMU_PMU15__FORCE_ENERGYGOOD_OUT1__MASK                      0x00008000U
#define PMU_PMU15__FORCE_ENERGYGOOD_OUT1__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00008000U) >> 15)
#define PMU_PMU15__FORCE_ENERGYGOOD_OUT1__WRITE(src) \
                    (((uint32_t)(src)\
                    << 15) & 0x00008000U)
#define PMU_PMU15__FORCE_ENERGYGOOD_OUT1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00008000U) | (((uint32_t)(src) <<\
                    15) & 0x00008000U)
#define PMU_PMU15__FORCE_ENERGYGOOD_OUT1__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 15) & ~0x00008000U)))
#define PMU_PMU15__FORCE_ENERGYGOOD_OUT1__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00008000U) | ((uint32_t)(1) << 15)
#define PMU_PMU15__FORCE_ENERGYGOOD_OUT1__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00008000U) | ((uint32_t)(0) << 15)
#define PMU_PMU15__FORCE_ENERGYGOOD_OUT1__RESET_VALUE               0x00000000U
/** @} */
#define PMU_PMU15__TYPE                                                uint32_t
#define PMU_PMU15__READ                                             0x0000ffffU
#define PMU_PMU15__WRITE                                            0x0000ffffU
#define PMU_PMU15__PRESERVED                                        0x00000000U
#define PMU_PMU15__RESET_VALUE                                      0x0000006eU

#endif /* __PMU_PMU15_MACRO__ */

/** @} end of pmu15 */

/* macros for BlueprintGlobalNameSpace::PMU_pmu_rb0 */
/**
 * @defgroup pmu_top_regs_core_pmu_rb0 pmu_rb0
 * @brief readback registers definitions.
 * @{
 */
#ifndef __PMU_PMU_RB0_MACRO__
#define __PMU_PMU_RB0_MACRO__

/* macros for field timer_out_lsb */
/**
 * @defgroup pmu_top_regs_core_timer_out_lsb_field timer_out_lsb_field
 * @brief macros for field timer_out_lsb
 * @details 32 lsb bits of timer_(# of 32KHz clock cycles)
 * @{
 */
#define PMU_PMU_RB0__TIMER_OUT_LSB__SHIFT                                     0
#define PMU_PMU_RB0__TIMER_OUT_LSB__WIDTH                                    32
#define PMU_PMU_RB0__TIMER_OUT_LSB__MASK                            0xffffffffU
#define PMU_PMU_RB0__TIMER_OUT_LSB__READ(src)   ((uint32_t)(src) & 0xffffffffU)
#define PMU_PMU_RB0__TIMER_OUT_LSB__RESET_VALUE                     0x00000000U
/** @} */
#define PMU_PMU_RB0__TYPE                                              uint32_t
#define PMU_PMU_RB0__READ                                           0xffffffffU
#define PMU_PMU_RB0__PRESERVED                                      0x00000000U
#define PMU_PMU_RB0__RESET_VALUE                                    0x00000000U

#endif /* __PMU_PMU_RB0_MACRO__ */

/** @} end of pmu_rb0 */

/* macros for BlueprintGlobalNameSpace::PMU_pmu_rb1 */
/**
 * @defgroup pmu_top_regs_core_pmu_rb1 pmu_rb1
 * @brief readback registers definitions.
 * @{
 */
#ifndef __PMU_PMU_RB1_MACRO__
#define __PMU_PMU_RB1_MACRO__

/* macros for field timer_out_msb */
/**
 * @defgroup pmu_top_regs_core_timer_out_msb_field timer_out_msb_field
 * @brief macros for field timer_out_msb
 * @details 8 msb bits of timer_(# of 32KHz clock cycles)
 * @{
 */
#define PMU_PMU_RB1__TIMER_OUT_MSB__SHIFT                                     0
#define PMU_PMU_RB1__TIMER_OUT_MSB__WIDTH                                     8
#define PMU_PMU_RB1__TIMER_OUT_MSB__MASK                            0x000000ffU
#define PMU_PMU_RB1__TIMER_OUT_MSB__READ(src)   ((uint32_t)(src) & 0x000000ffU)
#define PMU_PMU_RB1__TIMER_OUT_MSB__RESET_VALUE                     0x00000000U
/** @} */

/* macros for field wkup_det */
/**
 * @defgroup pmu_top_regs_core_wkup_det_field wkup_det_field
 * @brief macros for field wkup_det
 * @details determine how soc is waking up
 * @{
 */
#define PMU_PMU_RB1__WKUP_DET__SHIFT                                          8
#define PMU_PMU_RB1__WKUP_DET__WIDTH                                          3
#define PMU_PMU_RB1__WKUP_DET__MASK                                 0x00000700U
#define PMU_PMU_RB1__WKUP_DET__READ(src) (((uint32_t)(src) & 0x00000700U) >> 8)
#define PMU_PMU_RB1__WKUP_DET__RESET_VALUE                          0x00000000U
/** @} */

/* macros for field pmu_state */
/**
 * @defgroup pmu_top_regs_core_pmu_state_field pmu_state_field
 * @brief macros for field pmu_state
 * @details readback pmu state
 * @{
 */
#define PMU_PMU_RB1__PMU_STATE__SHIFT                                        11
#define PMU_PMU_RB1__PMU_STATE__WIDTH                                         3
#define PMU_PMU_RB1__PMU_STATE__MASK                                0x00003800U
#define PMU_PMU_RB1__PMU_STATE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00003800U) >> 11)
#define PMU_PMU_RB1__PMU_STATE__RESET_VALUE                         0x00000000U
/** @} */

/* macros for field lpcomp_out */
/**
 * @defgroup pmu_top_regs_core_lpcomp_out_field lpcomp_out_field
 * @brief macros for field lpcomp_out
 * @details low power comparator output
 * @{
 */
#define PMU_PMU_RB1__LPCOMP_OUT__SHIFT                                       14
#define PMU_PMU_RB1__LPCOMP_OUT__WIDTH                                        1
#define PMU_PMU_RB1__LPCOMP_OUT__MASK                               0x00004000U
#define PMU_PMU_RB1__LPCOMP_OUT__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00004000U) >> 14)
#define PMU_PMU_RB1__LPCOMP_OUT__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00004000U) | ((uint32_t)(1) << 14)
#define PMU_PMU_RB1__LPCOMP_OUT__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00004000U) | ((uint32_t)(0) << 14)
#define PMU_PMU_RB1__LPCOMP_OUT__RESET_VALUE                        0x00000000U
/** @} */

/* macros for field enrc */
/**
 * @defgroup pmu_top_regs_core_enrc_field enrc_field
 * @brief macros for field enrc
 * @details readback for rc osc
 * @{
 */
#define PMU_PMU_RB1__ENRC__SHIFT                                             15
#define PMU_PMU_RB1__ENRC__WIDTH                                              1
#define PMU_PMU_RB1__ENRC__MASK                                     0x00008000U
#define PMU_PMU_RB1__ENRC__READ(src)    (((uint32_t)(src) & 0x00008000U) >> 15)
#define PMU_PMU_RB1__ENRC__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00008000U) | ((uint32_t)(1) << 15)
#define PMU_PMU_RB1__ENRC__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00008000U) | ((uint32_t)(0) << 15)
#define PMU_PMU_RB1__ENRC__RESET_VALUE                              0x00000000U
/** @} */

/* macros for field enxtal */
/**
 * @defgroup pmu_top_regs_core_enxtal_field enxtal_field
 * @brief macros for field enxtal
 * @details readback for xtal osc
 * @{
 */
#define PMU_PMU_RB1__ENXTAL__SHIFT                                           16
#define PMU_PMU_RB1__ENXTAL__WIDTH                                            1
#define PMU_PMU_RB1__ENXTAL__MASK                                   0x00010000U
#define PMU_PMU_RB1__ENXTAL__READ(src)  (((uint32_t)(src) & 0x00010000U) >> 16)
#define PMU_PMU_RB1__ENXTAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00010000U) | ((uint32_t)(1) << 16)
#define PMU_PMU_RB1__ENXTAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00010000U) | ((uint32_t)(0) << 16)
#define PMU_PMU_RB1__ENXTAL__RESET_VALUE                            0x00000000U
/** @} */

/* macros for field VstoreGoodtoTX */
/**
 * @defgroup pmu_top_regs_core_VstoreGoodtoTX_field VstoreGoodtoTX_field
 * @brief macros for field VstoreGoodtoTX
 * @details readback comp output
 * @{
 */
#define PMU_PMU_RB1__VSTOREGOODTOTX__SHIFT                                   17
#define PMU_PMU_RB1__VSTOREGOODTOTX__WIDTH                                    1
#define PMU_PMU_RB1__VSTOREGOODTOTX__MASK                           0x00020000U
#define PMU_PMU_RB1__VSTOREGOODTOTX__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00020000U) >> 17)
#define PMU_PMU_RB1__VSTOREGOODTOTX__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(1) << 17)
#define PMU_PMU_RB1__VSTOREGOODTOTX__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(0) << 17)
#define PMU_PMU_RB1__VSTOREGOODTOTX__RESET_VALUE                    0x00000000U
/** @} */

/* macros for field BrownOutVbat */
/**
 * @defgroup pmu_top_regs_core_BrownOutVbat_field BrownOutVbat_field
 * @brief macros for field BrownOutVbat
 * @details readback comp output
 * @{
 */
#define PMU_PMU_RB1__BROWNOUTVBAT__SHIFT                                     18
#define PMU_PMU_RB1__BROWNOUTVBAT__WIDTH                                      1
#define PMU_PMU_RB1__BROWNOUTVBAT__MASK                             0x00040000U
#define PMU_PMU_RB1__BROWNOUTVBAT__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00040000U) >> 18)
#define PMU_PMU_RB1__BROWNOUTVBAT__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(1) << 18)
#define PMU_PMU_RB1__BROWNOUTVBAT__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(0) << 18)
#define PMU_PMU_RB1__BROWNOUTVBAT__RESET_VALUE                      0x00000000U
/** @} */

/* macros for field VstoreGoodtoEner */
/**
 * @defgroup pmu_top_regs_core_VstoreGoodtoEner_field VstoreGoodtoEner_field
 * @brief macros for field VstoreGoodtoEner
 * @details readback comp output
 * @{
 */
#define PMU_PMU_RB1__VSTOREGOODTOENER__SHIFT                                 19
#define PMU_PMU_RB1__VSTOREGOODTOENER__WIDTH                                  1
#define PMU_PMU_RB1__VSTOREGOODTOENER__MASK                         0x00080000U
#define PMU_PMU_RB1__VSTOREGOODTOENER__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00080000U) >> 19)
#define PMU_PMU_RB1__VSTOREGOODTOENER__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00080000U) | ((uint32_t)(1) << 19)
#define PMU_PMU_RB1__VSTOREGOODTOENER__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00080000U) | ((uint32_t)(0) << 19)
#define PMU_PMU_RB1__VSTOREGOODTOENER__RESET_VALUE                  0x00000000U
/** @} */

/* macros for field VstoreHarvStop */
/**
 * @defgroup pmu_top_regs_core_VstoreHarvStop_field VstoreHarvStop_field
 * @brief macros for field VstoreHarvStop
 * @details readback comp output
 * @{
 */
#define PMU_PMU_RB1__VSTOREHARVSTOP__SHIFT                                   20
#define PMU_PMU_RB1__VSTOREHARVSTOP__WIDTH                                    1
#define PMU_PMU_RB1__VSTOREHARVSTOP__MASK                           0x00100000U
#define PMU_PMU_RB1__VSTOREHARVSTOP__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00100000U) >> 20)
#define PMU_PMU_RB1__VSTOREHARVSTOP__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00100000U) | ((uint32_t)(1) << 20)
#define PMU_PMU_RB1__VSTOREHARVSTOP__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00100000U) | ((uint32_t)(0) << 20)
#define PMU_PMU_RB1__VSTOREHARVSTOP__RESET_VALUE                    0x00000000U
/** @} */

/* macros for field mpptstartvharv */
/**
 * @defgroup pmu_top_regs_core_mpptstartvharv_field mpptstartvharv_field
 * @brief macros for field mpptstartvharv
 * @details readback comp output
 * @{
 */
#define PMU_PMU_RB1__MPPTSTARTVHARV__SHIFT                                   21
#define PMU_PMU_RB1__MPPTSTARTVHARV__WIDTH                                    1
#define PMU_PMU_RB1__MPPTSTARTVHARV__MASK                           0x00200000U
#define PMU_PMU_RB1__MPPTSTARTVHARV__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00200000U) >> 21)
#define PMU_PMU_RB1__MPPTSTARTVHARV__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00200000U) | ((uint32_t)(1) << 21)
#define PMU_PMU_RB1__MPPTSTARTVHARV__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00200000U) | ((uint32_t)(0) << 21)
#define PMU_PMU_RB1__MPPTSTARTVHARV__RESET_VALUE                    0x00000000U
/** @} */

/* macros for field reconfharvstage */
/**
 * @defgroup pmu_top_regs_core_reconfharvstage_field reconfharvstage_field
 * @brief macros for field reconfharvstage
 * @details readback comp output
 * @{
 */
#define PMU_PMU_RB1__RECONFHARVSTAGE__SHIFT                                  22
#define PMU_PMU_RB1__RECONFHARVSTAGE__WIDTH                                   1
#define PMU_PMU_RB1__RECONFHARVSTAGE__MASK                          0x00400000U
#define PMU_PMU_RB1__RECONFHARVSTAGE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00400000U) >> 22)
#define PMU_PMU_RB1__RECONFHARVSTAGE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00400000U) | ((uint32_t)(1) << 22)
#define PMU_PMU_RB1__RECONFHARVSTAGE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00400000U) | ((uint32_t)(0) << 22)
#define PMU_PMU_RB1__RECONFHARVSTAGE__RESET_VALUE                   0x00000000U
/** @} */
#define PMU_PMU_RB1__TYPE                                              uint32_t
#define PMU_PMU_RB1__READ                                           0x007fffffU
#define PMU_PMU_RB1__PRESERVED                                      0x00000000U
#define PMU_PMU_RB1__RESET_VALUE                                    0x00000000U

#endif /* __PMU_PMU_RB1_MACRO__ */

/** @} end of pmu_rb1 */

/* macros for BlueprintGlobalNameSpace::PMU_core_id */
/**
 * @defgroup pmu_top_regs_core_core_id core_id
 * @brief Core ID definitions.
 * @{
 */
#ifndef __PMU_CORE_ID_MACRO__
#define __PMU_CORE_ID_MACRO__

/* macros for field id */
/**
 * @defgroup pmu_top_regs_core_id_field id_field
 * @brief macros for field id
 * @details PMU in ASCII
 * @{
 */
#define PMU_CORE_ID__ID__SHIFT                                                0
#define PMU_CORE_ID__ID__WIDTH                                               32
#define PMU_CORE_ID__ID__MASK                                       0xffffffffU
#define PMU_CORE_ID__ID__READ(src)              ((uint32_t)(src) & 0xffffffffU)
#define PMU_CORE_ID__ID__RESET_VALUE                                0x504d5520U
/** @} */
#define PMU_CORE_ID__TYPE                                              uint32_t
#define PMU_CORE_ID__READ                                           0xffffffffU
#define PMU_CORE_ID__PRESERVED                                      0x00000000U
#define PMU_CORE_ID__RESET_VALUE                                    0x504d5520U

#endif /* __PMU_CORE_ID_MACRO__ */

/** @} end of core_id */

/** @} end of PMU_TOP_REGS_CORE */
#endif /* __REG_PMU_TOP_REGS_CORE_H__ */
