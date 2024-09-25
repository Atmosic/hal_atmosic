/*                                                                           */
/* File:       at_apb_rcos_cal_regs_core_macro.h                             */
/*                                                                           */
/* Arguments:  /cad/tools/cadence/blueprint_3.7.5/Linux-64bit/blueprint -eval*/
/*             $DEFINE_PROPERTY=1; -ansic at_apb_rcos_cal_regs_core.rdl      */
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


#ifndef __REG_AT_APB_RCOS_CAL_REGS_CORE_H__
#define __REG_AT_APB_RCOS_CAL_REGS_CORE_H__

/**
 *****************************************************************************
 * @defgroup AT_APB_RCOS_CAL_REGS_CORE at_apb_rcos_cal_regs_core
 * @ingroup AT_REG
 * @brief at_apb_rcos_cal_regs_core definitions.
 * @{
 *****************************************************************************
 */

/* macros for BlueprintGlobalNameSpace::RCOS_CAL_cal_ctrl */
/**
 * @defgroup at_apb_rcos_cal_regs_core_cal_ctrl cal_ctrl
 * @brief Contains register fields associated with cal_ctrl. definitions.
 * @{
 */
#ifndef __RCOS_CAL_CAL_CTRL_MACRO__
#define __RCOS_CAL_CAL_CTRL_MACRO__

/* macros for field sw_cal */
/**
 * @defgroup at_apb_rcos_cal_regs_core_sw_cal_field sw_cal_field
 * @brief macros for field sw_cal
 * @details Rising edge starts SW cal, falling edge terminates cal if cal is not done; best to leave it on once set.
 * @{
 */
#define RCOS_CAL_CAL_CTRL__SW_CAL__SHIFT                                      0
#define RCOS_CAL_CAL_CTRL__SW_CAL__WIDTH                                      1
#define RCOS_CAL_CAL_CTRL__SW_CAL__MASK                             0x00000001U
#define RCOS_CAL_CAL_CTRL__SW_CAL__READ(src)    ((uint32_t)(src) & 0x00000001U)
#define RCOS_CAL_CAL_CTRL__SW_CAL__WRITE(src)   ((uint32_t)(src) & 0x00000001U)
#define RCOS_CAL_CAL_CTRL__SW_CAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define RCOS_CAL_CAL_CTRL__SW_CAL__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define RCOS_CAL_CAL_CTRL__SW_CAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define RCOS_CAL_CAL_CTRL__SW_CAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define RCOS_CAL_CAL_CTRL__SW_CAL__RESET_VALUE                      0x00000000U
/** @} */

/* macros for field hw_cal_sel */
/**
 * @defgroup at_apb_rcos_cal_regs_core_hw_cal_sel_field hw_cal_sel_field
 * @brief macros for field hw_cal_sel
 * @details Is cal under HW or SW control?  1 = choose cal from HW  0 = choose cal from SW
 * @{
 */
#define RCOS_CAL_CAL_CTRL__HW_CAL_SEL__SHIFT                                  1
#define RCOS_CAL_CAL_CTRL__HW_CAL_SEL__WIDTH                                  1
#define RCOS_CAL_CAL_CTRL__HW_CAL_SEL__MASK                         0x00000002U
#define RCOS_CAL_CAL_CTRL__HW_CAL_SEL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define RCOS_CAL_CAL_CTRL__HW_CAL_SEL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define RCOS_CAL_CAL_CTRL__HW_CAL_SEL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define RCOS_CAL_CAL_CTRL__HW_CAL_SEL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define RCOS_CAL_CAL_CTRL__HW_CAL_SEL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define RCOS_CAL_CAL_CTRL__HW_CAL_SEL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define RCOS_CAL_CAL_CTRL__HW_CAL_SEL__RESET_VALUE                  0x00000000U
/** @} */
#define RCOS_CAL_CAL_CTRL__TYPE                                        uint32_t
#define RCOS_CAL_CAL_CTRL__READ                                     0x00000003U
#define RCOS_CAL_CAL_CTRL__WRITE                                    0x00000003U
#define RCOS_CAL_CAL_CTRL__PRESERVED                                0x00000000U
#define RCOS_CAL_CAL_CTRL__RESET_VALUE                              0x00000000U

#endif /* __RCOS_CAL_CAL_CTRL_MACRO__ */

/** @} end of cal_ctrl */

/* macros for BlueprintGlobalNameSpace::RCOS_CAL_slow_clk_set */
/**
 * @defgroup at_apb_rcos_cal_regs_core_slow_clk_set slow_clk_set
 * @brief Contains register fields associated with slow_clk_set. definitions.
 * @{
 */
#ifndef __RCOS_CAL_SLOW_CLK_SET_MACRO__
#define __RCOS_CAL_SLOW_CLK_SET_MACRO__

/* macros for field slow_clk_set */
/**
 * @defgroup at_apb_rcos_cal_regs_core_slow_clk_set_field slow_clk_set_field
 * @brief macros for field slow_clk_set
 * @details Set the number of cycles to run slow clock. Counting stops when this number is reached or cal is pulled down. Constraint: 1 <= slow_clk_set <= 63. If set to 0, hardware will use 1.
 * @{
 */
#define RCOS_CAL_SLOW_CLK_SET__SLOW_CLK_SET__SHIFT                            0
#define RCOS_CAL_SLOW_CLK_SET__SLOW_CLK_SET__WIDTH                           12
#define RCOS_CAL_SLOW_CLK_SET__SLOW_CLK_SET__MASK                   0x00000fffU
#define RCOS_CAL_SLOW_CLK_SET__SLOW_CLK_SET__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000fffU)
#define RCOS_CAL_SLOW_CLK_SET__SLOW_CLK_SET__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000fffU)
#define RCOS_CAL_SLOW_CLK_SET__SLOW_CLK_SET__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000fffU) | ((uint32_t)(src) &\
                    0x00000fffU)
#define RCOS_CAL_SLOW_CLK_SET__SLOW_CLK_SET__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000fffU)))
#define RCOS_CAL_SLOW_CLK_SET__SLOW_CLK_SET__RESET_VALUE            0x00000064U
/** @} */
#define RCOS_CAL_SLOW_CLK_SET__TYPE                                    uint32_t
#define RCOS_CAL_SLOW_CLK_SET__READ                                 0x00000fffU
#define RCOS_CAL_SLOW_CLK_SET__WRITE                                0x00000fffU
#define RCOS_CAL_SLOW_CLK_SET__PRESERVED                            0x00000000U
#define RCOS_CAL_SLOW_CLK_SET__RESET_VALUE                          0x00000064U

#endif /* __RCOS_CAL_SLOW_CLK_SET_MACRO__ */

/** @} end of slow_clk_set */

/* macros for BlueprintGlobalNameSpace::RCOS_CAL_slow_clk_cnt */
/**
 * @defgroup at_apb_rcos_cal_regs_core_slow_clk_cnt slow_clk_cnt
 * @brief Contains register fields associated with slow_clk_cnt. definitions.
 * @{
 */
#ifndef __RCOS_CAL_SLOW_CLK_CNT_MACRO__
#define __RCOS_CAL_SLOW_CLK_CNT_MACRO__

/* macros for field slow_clk_cnt */
/**
 * @defgroup at_apb_rcos_cal_regs_core_slow_clk_cnt_field slow_clk_cnt_field
 * @brief macros for field slow_clk_cnt
 * @details Number of cycles counted by slow clock.
 * @{
 */
#define RCOS_CAL_SLOW_CLK_CNT__SLOW_CLK_CNT__SHIFT                            0
#define RCOS_CAL_SLOW_CLK_CNT__SLOW_CLK_CNT__WIDTH                           12
#define RCOS_CAL_SLOW_CLK_CNT__SLOW_CLK_CNT__MASK                   0x00000fffU
#define RCOS_CAL_SLOW_CLK_CNT__SLOW_CLK_CNT__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000fffU)
#define RCOS_CAL_SLOW_CLK_CNT__SLOW_CLK_CNT__RESET_VALUE            0x00000000U
/** @} */
#define RCOS_CAL_SLOW_CLK_CNT__TYPE                                    uint32_t
#define RCOS_CAL_SLOW_CLK_CNT__READ                                 0x00000fffU
#define RCOS_CAL_SLOW_CLK_CNT__PRESERVED                            0x00000000U
#define RCOS_CAL_SLOW_CLK_CNT__RESET_VALUE                          0x00000000U

#endif /* __RCOS_CAL_SLOW_CLK_CNT_MACRO__ */

/** @} end of slow_clk_cnt */

/* macros for BlueprintGlobalNameSpace::RCOS_CAL_fast_clk_cnt */
/**
 * @defgroup at_apb_rcos_cal_regs_core_fast_clk_cnt fast_clk_cnt
 * @brief Contains register fields associated with fast_clk_cnt. definitions.
 * @{
 */
#ifndef __RCOS_CAL_FAST_CLK_CNT_MACRO__
#define __RCOS_CAL_FAST_CLK_CNT_MACRO__

/* macros for field fast_clk_cnt */
/**
 * @defgroup at_apb_rcos_cal_regs_core_fast_clk_cnt_field fast_clk_cnt_field
 * @brief macros for field fast_clk_cnt
 * @details Number of cycles counted by fast clock. 10 bits more than slow_clk_cnt/set because fast clock is 1000 times faster.
 * @{
 */
#define RCOS_CAL_FAST_CLK_CNT__FAST_CLK_CNT__SHIFT                            0
#define RCOS_CAL_FAST_CLK_CNT__FAST_CLK_CNT__WIDTH                           22
#define RCOS_CAL_FAST_CLK_CNT__FAST_CLK_CNT__MASK                   0x003fffffU
#define RCOS_CAL_FAST_CLK_CNT__FAST_CLK_CNT__READ(src) \
                    ((uint32_t)(src)\
                    & 0x003fffffU)
#define RCOS_CAL_FAST_CLK_CNT__FAST_CLK_CNT__RESET_VALUE            0x00000000U
/** @} */
#define RCOS_CAL_FAST_CLK_CNT__TYPE                                    uint32_t
#define RCOS_CAL_FAST_CLK_CNT__READ                                 0x003fffffU
#define RCOS_CAL_FAST_CLK_CNT__PRESERVED                            0x00000000U
#define RCOS_CAL_FAST_CLK_CNT__RESET_VALUE                          0x00000000U

#endif /* __RCOS_CAL_FAST_CLK_CNT_MACRO__ */

/** @} end of fast_clk_cnt */

/* macros for BlueprintGlobalNameSpace::RCOS_CAL_stat */
/**
 * @defgroup at_apb_rcos_cal_regs_core_stat stat
 * @brief Contains register fields associated with stat. definitions.
 * @{
 */
#ifndef __RCOS_CAL_STAT_MACRO__
#define __RCOS_CAL_STAT_MACRO__

/* macros for field running */
/**
 * @defgroup at_apb_rcos_cal_regs_core_running_field running_field
 * @brief macros for field running
 * @details Calibration is running.
 * @{
 */
#define RCOS_CAL_STAT__RUNNING__SHIFT                                         0
#define RCOS_CAL_STAT__RUNNING__WIDTH                                         1
#define RCOS_CAL_STAT__RUNNING__MASK                                0x00000001U
#define RCOS_CAL_STAT__RUNNING__READ(src)       ((uint32_t)(src) & 0x00000001U)
#define RCOS_CAL_STAT__RUNNING__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define RCOS_CAL_STAT__RUNNING__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define RCOS_CAL_STAT__RUNNING__RESET_VALUE                         0x00000000U
/** @} */

/* macros for field high_precision_run */
/**
 * @defgroup at_apb_rcos_cal_regs_core_high_precision_run_field high_precision_run_field
 * @brief macros for field high_precision_run
 * @details 1 = high-precisioned clock was used at the beginning of cal  0 = low precisioned clock
 * @{
 */
#define RCOS_CAL_STAT__HIGH_PRECISION_RUN__SHIFT                              1
#define RCOS_CAL_STAT__HIGH_PRECISION_RUN__WIDTH                              1
#define RCOS_CAL_STAT__HIGH_PRECISION_RUN__MASK                     0x00000002U
#define RCOS_CAL_STAT__HIGH_PRECISION_RUN__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define RCOS_CAL_STAT__HIGH_PRECISION_RUN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define RCOS_CAL_STAT__HIGH_PRECISION_RUN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define RCOS_CAL_STAT__HIGH_PRECISION_RUN__RESET_VALUE              0x00000000U
/** @} */
#define RCOS_CAL_STAT__TYPE                                            uint32_t
#define RCOS_CAL_STAT__READ                                         0x00000003U
#define RCOS_CAL_STAT__PRESERVED                                    0x00000000U
#define RCOS_CAL_STAT__RESET_VALUE                                  0x00000000U

#endif /* __RCOS_CAL_STAT_MACRO__ */

/** @} end of stat */

/* macros for BlueprintGlobalNameSpace::RCOS_CAL_core_id */
/**
 * @defgroup at_apb_rcos_cal_regs_core_core_id core_id
 * @brief Contains register fields associated with core_id. definitions.
 * @{
 */
#ifndef __RCOS_CAL_CORE_ID_MACRO__
#define __RCOS_CAL_CORE_ID_MACRO__

/* macros for field id */
/**
 * @defgroup at_apb_rcos_cal_regs_core_id_field id_field
 * @brief macros for field id
 * @details 'RCOS' in ASCII
 * @{
 */
#define RCOS_CAL_CORE_ID__ID__SHIFT                                           0
#define RCOS_CAL_CORE_ID__ID__WIDTH                                          32
#define RCOS_CAL_CORE_ID__ID__MASK                                  0xffffffffU
#define RCOS_CAL_CORE_ID__ID__READ(src)         ((uint32_t)(src) & 0xffffffffU)
#define RCOS_CAL_CORE_ID__ID__RESET_VALUE                           0x52434f53U
/** @} */
#define RCOS_CAL_CORE_ID__TYPE                                         uint32_t
#define RCOS_CAL_CORE_ID__READ                                      0xffffffffU
#define RCOS_CAL_CORE_ID__PRESERVED                                 0x00000000U
#define RCOS_CAL_CORE_ID__RESET_VALUE                               0x52434f53U

#endif /* __RCOS_CAL_CORE_ID_MACRO__ */

/** @} end of core_id */

/** @} end of AT_APB_RCOS_CAL_REGS_CORE */
#endif /* __REG_AT_APB_RCOS_CAL_REGS_CORE_H__ */
