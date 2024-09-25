/*                                                                           */
/* File:       pmu_gadc_regs_core_macro.h                                    */
/*                                                                           */
/* Arguments:  /cad/tools/cadence/blueprint_3.7.5/Linux-64bit/blueprint -eval*/
/*             $DEFINE_PROPERTY=1; -ansic pmu_gadc_regs_core.rdl             */
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


#ifndef __REG_PMU_GADC_REGS_CORE_H__
#define __REG_PMU_GADC_REGS_CORE_H__

/**
 *****************************************************************************
 * @defgroup PMU_GADC_REGS_CORE pmu_gadc_regs_core
 * @ingroup AT_REG
 * @brief pmu_gadc_regs_core definitions.
 * @{
 *****************************************************************************
 */

/* macros for BlueprintGlobalNameSpace::GADC_gadc_ctrl */
/**
 * @defgroup pmu_gadc_regs_core_gadc_ctrl gadc_ctrl
 * @brief Bias, reference voltage, sampling time settings, ATB definitions.
 * @{
 */
#ifndef __GADC_GADC_CTRL_MACRO__
#define __GADC_GADC_CTRL_MACRO__

/* macros for field vcm_ctrl */
/**
 * @defgroup pmu_gadc_regs_core_vcm_ctrl_field vcm_ctrl_field
 * @brief macros for field vcm_ctrl
 * @details GADC input bias voltage for single-ended input, 0.675 plus (vcm_ctrl-4)*0.0182
 * @{
 */
#define GADC_GADC_CTRL__VCM_CTRL__SHIFT                                       0
#define GADC_GADC_CTRL__VCM_CTRL__WIDTH                                       3
#define GADC_GADC_CTRL__VCM_CTRL__MASK                              0x00000007U
#define GADC_GADC_CTRL__VCM_CTRL__READ(src)     ((uint32_t)(src) & 0x00000007U)
#define GADC_GADC_CTRL__VCM_CTRL__WRITE(src)    ((uint32_t)(src) & 0x00000007U)
#define GADC_GADC_CTRL__VCM_CTRL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000007U) | ((uint32_t)(src) &\
                    0x00000007U)
#define GADC_GADC_CTRL__VCM_CTRL__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000007U)))
#define GADC_GADC_CTRL__VCM_CTRL__RESET_VALUE                       0x00000004U
/** @} */

/* macros for field adcref_ctrl */
/**
 * @defgroup pmu_gadc_regs_core_adcref_ctrl_field adcref_ctrl_field
 * @brief macros for field adcref_ctrl
 * @details ADC reference voltage control. Reference voltage = 0.2 plus (adcref_ctrl-4)*0.091
 * @{
 */
#define GADC_GADC_CTRL__ADCREF_CTRL__SHIFT                                    3
#define GADC_GADC_CTRL__ADCREF_CTRL__WIDTH                                    3
#define GADC_GADC_CTRL__ADCREF_CTRL__MASK                           0x00000038U
#define GADC_GADC_CTRL__ADCREF_CTRL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000038U) >> 3)
#define GADC_GADC_CTRL__ADCREF_CTRL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 3) & 0x00000038U)
#define GADC_GADC_CTRL__ADCREF_CTRL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000038U) | (((uint32_t)(src) <<\
                    3) & 0x00000038U)
#define GADC_GADC_CTRL__ADCREF_CTRL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 3) & ~0x00000038U)))
#define GADC_GADC_CTRL__ADCREF_CTRL__RESET_VALUE                    0x00000004U
/** @} */

/* macros for field drv_ictrl */
/**
 * @defgroup pmu_gadc_regs_core_drv_ictrl_field drv_ictrl_field
 * @brief macros for field drv_ictrl
 * @details ADC driver strength control
 * @{
 */
#define GADC_GADC_CTRL__DRV_ICTRL__SHIFT                                     10
#define GADC_GADC_CTRL__DRV_ICTRL__WIDTH                                      3
#define GADC_GADC_CTRL__DRV_ICTRL__MASK                             0x00001c00U
#define GADC_GADC_CTRL__DRV_ICTRL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00001c00U) >> 10)
#define GADC_GADC_CTRL__DRV_ICTRL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 10) & 0x00001c00U)
#define GADC_GADC_CTRL__DRV_ICTRL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00001c00U) | (((uint32_t)(src) <<\
                    10) & 0x00001c00U)
#define GADC_GADC_CTRL__DRV_ICTRL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 10) & ~0x00001c00U)))
#define GADC_GADC_CTRL__DRV_ICTRL__RESET_VALUE                      0x00000004U
/** @} */

/* macros for field bias_ctrl */
/**
 * @defgroup pmu_gadc_regs_core_bias_ctrl_field bias_ctrl_field
 * @brief macros for field bias_ctrl
 * @details NOT USED
 * @{
 */
#define GADC_GADC_CTRL__BIAS_CTRL__SHIFT                                     13
#define GADC_GADC_CTRL__BIAS_CTRL__WIDTH                                      3
#define GADC_GADC_CTRL__BIAS_CTRL__MASK                             0x0000e000U
#define GADC_GADC_CTRL__BIAS_CTRL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000e000U) >> 13)
#define GADC_GADC_CTRL__BIAS_CTRL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 13) & 0x0000e000U)
#define GADC_GADC_CTRL__BIAS_CTRL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000e000U) | (((uint32_t)(src) <<\
                    13) & 0x0000e000U)
#define GADC_GADC_CTRL__BIAS_CTRL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 13) & ~0x0000e000U)))
#define GADC_GADC_CTRL__BIAS_CTRL__RESET_VALUE                      0x00000004U
/** @} */

/* macros for field edge_sel */
/**
 * @defgroup pmu_gadc_regs_core_edge_sel_field edge_sel_field
 * @brief macros for field edge_sel
 * @details ADC output timing alignment control
 * @{
 */
#define GADC_GADC_CTRL__EDGE_SEL__SHIFT                                      16
#define GADC_GADC_CTRL__EDGE_SEL__WIDTH                                       1
#define GADC_GADC_CTRL__EDGE_SEL__MASK                              0x00010000U
#define GADC_GADC_CTRL__EDGE_SEL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00010000U) >> 16)
#define GADC_GADC_CTRL__EDGE_SEL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00010000U)
#define GADC_GADC_CTRL__EDGE_SEL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00010000U) | (((uint32_t)(src) <<\
                    16) & 0x00010000U)
#define GADC_GADC_CTRL__EDGE_SEL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00010000U)))
#define GADC_GADC_CTRL__EDGE_SEL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00010000U) | ((uint32_t)(1) << 16)
#define GADC_GADC_CTRL__EDGE_SEL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00010000U) | ((uint32_t)(0) << 16)
#define GADC_GADC_CTRL__EDGE_SEL__RESET_VALUE                       0x00000000U
/** @} */

/* macros for field clksample_ext_b */
/**
 * @defgroup pmu_gadc_regs_core_clksample_ext_b_field clksample_ext_b_field
 * @brief macros for field clksample_ext_b
 * @details Extend ADC sampling time
 * @{
 */
#define GADC_GADC_CTRL__CLKSAMPLE_EXT_B__SHIFT                               17
#define GADC_GADC_CTRL__CLKSAMPLE_EXT_B__WIDTH                                1
#define GADC_GADC_CTRL__CLKSAMPLE_EXT_B__MASK                       0x00020000U
#define GADC_GADC_CTRL__CLKSAMPLE_EXT_B__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00020000U) >> 17)
#define GADC_GADC_CTRL__CLKSAMPLE_EXT_B__WRITE(src) \
                    (((uint32_t)(src)\
                    << 17) & 0x00020000U)
#define GADC_GADC_CTRL__CLKSAMPLE_EXT_B__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | (((uint32_t)(src) <<\
                    17) & 0x00020000U)
#define GADC_GADC_CTRL__CLKSAMPLE_EXT_B__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 17) & ~0x00020000U)))
#define GADC_GADC_CTRL__CLKSAMPLE_EXT_B__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(1) << 17)
#define GADC_GADC_CTRL__CLKSAMPLE_EXT_B__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(0) << 17)
#define GADC_GADC_CTRL__CLKSAMPLE_EXT_B__RESET_VALUE                0x00000000U
/** @} */

/* macros for field atb_sel */
/**
 * @defgroup pmu_gadc_regs_core_atb_sel_field atb_sel_field
 * @brief macros for field atb_sel
 * @details ATB control
 * @{
 */
#define GADC_GADC_CTRL__ATB_SEL__SHIFT                                       18
#define GADC_GADC_CTRL__ATB_SEL__WIDTH                                        3
#define GADC_GADC_CTRL__ATB_SEL__MASK                               0x001c0000U
#define GADC_GADC_CTRL__ATB_SEL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x001c0000U) >> 18)
#define GADC_GADC_CTRL__ATB_SEL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 18) & 0x001c0000U)
#define GADC_GADC_CTRL__ATB_SEL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x001c0000U) | (((uint32_t)(src) <<\
                    18) & 0x001c0000U)
#define GADC_GADC_CTRL__ATB_SEL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 18) & ~0x001c0000U)))
#define GADC_GADC_CTRL__ATB_SEL__RESET_VALUE                        0x00000000U
/** @} */
#define GADC_GADC_CTRL__TYPE                                           uint32_t
#define GADC_GADC_CTRL__READ                                        0x001ffc3fU
#define GADC_GADC_CTRL__WRITE                                       0x001ffc3fU
#define GADC_GADC_CTRL__PRESERVED                                   0x00000000U
#define GADC_GADC_CTRL__RESET_VALUE                                 0x00009024U

#endif /* __GADC_GADC_CTRL_MACRO__ */

/** @} end of gadc_ctrl */

/* macros for BlueprintGlobalNameSpace::GADC_gadc_bias_0 */
/**
 * @defgroup pmu_gadc_regs_core_gadc_bias_0 gadc_bias_0
 * @brief Bias settings for input channels definitions.
 * @{
 */
#ifndef __GADC_GADC_BIAS_0_MACRO__
#define __GADC_GADC_BIAS_0_MACRO__

/* macros for field dc_zero */
/**
 * @defgroup pmu_gadc_regs_core_dc_zero_field dc_zero_field
 * @brief macros for field dc_zero
 * @details Bias for the input short case
 * @{
 */
#define GADC_GADC_BIAS_0__DC_ZERO__SHIFT                                      0
#define GADC_GADC_BIAS_0__DC_ZERO__WIDTH                                      3
#define GADC_GADC_BIAS_0__DC_ZERO__MASK                             0x00000007U
#define GADC_GADC_BIAS_0__DC_ZERO__READ(src)    ((uint32_t)(src) & 0x00000007U)
#define GADC_GADC_BIAS_0__DC_ZERO__WRITE(src)   ((uint32_t)(src) & 0x00000007U)
#define GADC_GADC_BIAS_0__DC_ZERO__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000007U) | ((uint32_t)(src) &\
                    0x00000007U)
#define GADC_GADC_BIAS_0__DC_ZERO__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000007U)))
#define GADC_GADC_BIAS_0__DC_ZERO__RESET_VALUE                      0x00000000U
/** @} */

/* macros for field dc_vbatt1p8 */
/**
 * @defgroup pmu_gadc_regs_core_dc_vbatt1p8_field dc_vbatt1p8_field
 * @brief macros for field dc_vbatt1p8
 * @details Bias for the VBATT input with gext=1 (1.8V max), 0.267 plus (dc_vbatt1p8-1)*0.267
 * @{
 */
#define GADC_GADC_BIAS_0__DC_VBATT1P8__SHIFT                                  3
#define GADC_GADC_BIAS_0__DC_VBATT1P8__WIDTH                                  3
#define GADC_GADC_BIAS_0__DC_VBATT1P8__MASK                         0x00000038U
#define GADC_GADC_BIAS_0__DC_VBATT1P8__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000038U) >> 3)
#define GADC_GADC_BIAS_0__DC_VBATT1P8__WRITE(src) \
                    (((uint32_t)(src)\
                    << 3) & 0x00000038U)
#define GADC_GADC_BIAS_0__DC_VBATT1P8__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000038U) | (((uint32_t)(src) <<\
                    3) & 0x00000038U)
#define GADC_GADC_BIAS_0__DC_VBATT1P8__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 3) & ~0x00000038U)))
#define GADC_GADC_BIAS_0__DC_VBATT1P8__RESET_VALUE                  0x00000001U
/** @} */

/* macros for field dc_vbatt3p0 */
/**
 * @defgroup pmu_gadc_regs_core_dc_vbatt3p0_field dc_vbatt3p0_field
 * @brief macros for field dc_vbatt3p0
 * @details Bias for the VBATT input with gext=0 (3V max), 0.333 plus (dc_vbatt3p0-2)*0.167
 * @{
 */
#define GADC_GADC_BIAS_0__DC_VBATT3P0__SHIFT                                  6
#define GADC_GADC_BIAS_0__DC_VBATT3P0__WIDTH                                  3
#define GADC_GADC_BIAS_0__DC_VBATT3P0__MASK                         0x000001c0U
#define GADC_GADC_BIAS_0__DC_VBATT3P0__READ(src) \
                    (((uint32_t)(src)\
                    & 0x000001c0U) >> 6)
#define GADC_GADC_BIAS_0__DC_VBATT3P0__WRITE(src) \
                    (((uint32_t)(src)\
                    << 6) & 0x000001c0U)
#define GADC_GADC_BIAS_0__DC_VBATT3P0__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000001c0U) | (((uint32_t)(src) <<\
                    6) & 0x000001c0U)
#define GADC_GADC_BIAS_0__DC_VBATT3P0__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 6) & ~0x000001c0U)))
#define GADC_GADC_BIAS_0__DC_VBATT3P0__RESET_VALUE                  0x00000001U
/** @} */

/* macros for field dc_vstor1p8 */
/**
 * @defgroup pmu_gadc_regs_core_dc_vstor1p8_field dc_vstor1p8_field
 * @brief macros for field dc_vstor1p8
 * @details Bias for the VSTOR input with gext=1 (1.8V max), 0.45 plus (dc_vstor1p8-3)*0.15
 * @{
 */
#define GADC_GADC_BIAS_0__DC_VSTOR1P8__SHIFT                                  9
#define GADC_GADC_BIAS_0__DC_VSTOR1P8__WIDTH                                  3
#define GADC_GADC_BIAS_0__DC_VSTOR1P8__MASK                         0x00000e00U
#define GADC_GADC_BIAS_0__DC_VSTOR1P8__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000e00U) >> 9)
#define GADC_GADC_BIAS_0__DC_VSTOR1P8__WRITE(src) \
                    (((uint32_t)(src)\
                    << 9) & 0x00000e00U)
#define GADC_GADC_BIAS_0__DC_VSTOR1P8__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000e00U) | (((uint32_t)(src) <<\
                    9) & 0x00000e00U)
#define GADC_GADC_BIAS_0__DC_VSTOR1P8__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 9) & ~0x00000e00U)))
#define GADC_GADC_BIAS_0__DC_VSTOR1P8__RESET_VALUE                  0x00000002U
/** @} */

/* macros for field dc_vstor3p3 */
/**
 * @defgroup pmu_gadc_regs_core_dc_vstor3p3_field dc_vstor3p3_field
 * @brief macros for field dc_vstor3p3
 * @details Bias for the VSTOR input with gext=0 (3.3V max), 0.4375 plus (dc_vstor3p3-5)*0.0875
 * @{
 */
#define GADC_GADC_BIAS_0__DC_VSTOR3P3__SHIFT                                 12
#define GADC_GADC_BIAS_0__DC_VSTOR3P3__WIDTH                                  3
#define GADC_GADC_BIAS_0__DC_VSTOR3P3__MASK                         0x00007000U
#define GADC_GADC_BIAS_0__DC_VSTOR3P3__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00007000U) >> 12)
#define GADC_GADC_BIAS_0__DC_VSTOR3P3__WRITE(src) \
                    (((uint32_t)(src)\
                    << 12) & 0x00007000U)
#define GADC_GADC_BIAS_0__DC_VSTOR3P3__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00007000U) | (((uint32_t)(src) <<\
                    12) & 0x00007000U)
#define GADC_GADC_BIAS_0__DC_VSTOR3P3__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 12) & ~0x00007000U)))
#define GADC_GADC_BIAS_0__DC_VSTOR3P3__RESET_VALUE                  0x00000004U
/** @} */

/* macros for field dc_core */
/**
 * @defgroup pmu_gadc_regs_core_dc_core_field dc_core_field
 * @brief macros for field dc_core
 * @details Bias for the 1V core voltage input, 0.2 plus (dc_core-1)*0.2
 * @{
 */
#define GADC_GADC_BIAS_0__DC_CORE__SHIFT                                     15
#define GADC_GADC_BIAS_0__DC_CORE__WIDTH                                      3
#define GADC_GADC_BIAS_0__DC_CORE__MASK                             0x00038000U
#define GADC_GADC_BIAS_0__DC_CORE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00038000U) >> 15)
#define GADC_GADC_BIAS_0__DC_CORE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 15) & 0x00038000U)
#define GADC_GADC_BIAS_0__DC_CORE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00038000U) | (((uint32_t)(src) <<\
                    15) & 0x00038000U)
#define GADC_GADC_BIAS_0__DC_CORE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 15) & ~0x00038000U)))
#define GADC_GADC_BIAS_0__DC_CORE__RESET_VALUE                      0x00000001U
/** @} */

/* macros for field dc_ext1p8 */
/**
 * @defgroup pmu_gadc_regs_core_dc_ext1p8_field dc_ext1p8_field
 * @brief macros for field dc_ext1p8
 * @details Bias for the external pin input with gext=1 (1.8V max), 0.48 plus (dc_ext1p8-3)*0.16
 * @{
 */
#define GADC_GADC_BIAS_0__DC_EXT1P8__SHIFT                                   18
#define GADC_GADC_BIAS_0__DC_EXT1P8__WIDTH                                    3
#define GADC_GADC_BIAS_0__DC_EXT1P8__MASK                           0x001c0000U
#define GADC_GADC_BIAS_0__DC_EXT1P8__READ(src) \
                    (((uint32_t)(src)\
                    & 0x001c0000U) >> 18)
#define GADC_GADC_BIAS_0__DC_EXT1P8__WRITE(src) \
                    (((uint32_t)(src)\
                    << 18) & 0x001c0000U)
#define GADC_GADC_BIAS_0__DC_EXT1P8__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x001c0000U) | (((uint32_t)(src) <<\
                    18) & 0x001c0000U)
#define GADC_GADC_BIAS_0__DC_EXT1P8__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 18) & ~0x001c0000U)))
#define GADC_GADC_BIAS_0__DC_EXT1P8__RESET_VALUE                    0x00000003U
/** @} */

/* macros for field dc_ext3p6 */
/**
 * @defgroup pmu_gadc_regs_core_dc_ext3p6_field dc_ext3p6_field
 * @brief macros for field dc_ext3p6
 * @details Bias for the external pin input with gext=0 (3.6V max), 0.45 plus (dc_ext3p6-5)*0.09
 * @{
 */
#define GADC_GADC_BIAS_0__DC_EXT3P6__SHIFT                                   21
#define GADC_GADC_BIAS_0__DC_EXT3P6__WIDTH                                    3
#define GADC_GADC_BIAS_0__DC_EXT3P6__MASK                           0x00e00000U
#define GADC_GADC_BIAS_0__DC_EXT3P6__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00e00000U) >> 21)
#define GADC_GADC_BIAS_0__DC_EXT3P6__WRITE(src) \
                    (((uint32_t)(src)\
                    << 21) & 0x00e00000U)
#define GADC_GADC_BIAS_0__DC_EXT3P6__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00e00000U) | (((uint32_t)(src) <<\
                    21) & 0x00e00000U)
#define GADC_GADC_BIAS_0__DC_EXT3P6__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 21) & ~0x00e00000U)))
#define GADC_GADC_BIAS_0__DC_EXT3P6__RESET_VALUE                    0x00000005U
/** @} */
#define GADC_GADC_BIAS_0__TYPE                                         uint32_t
#define GADC_GADC_BIAS_0__READ                                      0x00ffffffU
#define GADC_GADC_BIAS_0__WRITE                                     0x00ffffffU
#define GADC_GADC_BIAS_0__PRESERVED                                 0x00000000U
#define GADC_GADC_BIAS_0__RESET_VALUE                               0x00acc448U

#endif /* __GADC_GADC_BIAS_0_MACRO__ */

/** @} end of gadc_bias_0 */

/* macros for BlueprintGlobalNameSpace::GADC_core_id */
/**
 * @defgroup pmu_gadc_regs_core_core_id core_id
 * @brief Core ID definitions.
 * @{
 */
#ifndef __GADC_CORE_ID_MACRO__
#define __GADC_CORE_ID_MACRO__

/* macros for field id */
/**
 * @defgroup pmu_gadc_regs_core_id_field id_field
 * @brief macros for field id
 * @details GADC in ASCII (General ADC)
 * @{
 */
#define GADC_CORE_ID__ID__SHIFT                                               0
#define GADC_CORE_ID__ID__WIDTH                                              32
#define GADC_CORE_ID__ID__MASK                                      0xffffffffU
#define GADC_CORE_ID__ID__READ(src)             ((uint32_t)(src) & 0xffffffffU)
#define GADC_CORE_ID__ID__RESET_VALUE                               0x474144c3U
/** @} */
#define GADC_CORE_ID__TYPE                                             uint32_t
#define GADC_CORE_ID__READ                                          0xffffffffU
#define GADC_CORE_ID__PRESERVED                                     0x00000000U
#define GADC_CORE_ID__RESET_VALUE                                   0x474144c3U

#endif /* __GADC_CORE_ID_MACRO__ */

/** @} end of core_id */

/** @} end of PMU_GADC_REGS_CORE */
#endif /* __REG_PMU_GADC_REGS_CORE_H__ */
