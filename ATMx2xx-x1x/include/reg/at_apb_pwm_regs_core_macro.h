/*                                                                           */
/* File:       at_apb_pwm_regs_core_macro.h                                  */
/*                                                                           */
/* Arguments:  /cad/tools/cadence/blueprint_3.7.5/Linux-64bit/blueprint -eval*/
/*             $DEFINE_PROPERTY=1; -ansic at_apb_pwm_regs_core.rdl           */
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


#ifndef __REG_AT_APB_PWM_REGS_CORE_H__
#define __REG_AT_APB_PWM_REGS_CORE_H__

/**
 *****************************************************************************
 * @defgroup AT_APB_PWM_REGS_CORE at_apb_pwm_regs_core
 * @ingroup AT_REG
 * @brief at_apb_pwm_regs_core definitions.
 * @{
 *****************************************************************************
 */

/* macros for BlueprintGlobalNameSpace::PWM_pwm0_ctrl */
/**
 * @defgroup at_apb_pwm_regs_core_pwm0_ctrl pwm0_ctrl
 * @brief control signals for pwm0 subcore definitions.
 * @{
 */
#ifndef __PWM_PWM0_CTRL_MACRO__
#define __PWM_PWM0_CTRL_MACRO__

/* macros for field ok_to_run */
/**
 * @defgroup at_apb_pwm_regs_core_ok_to_run_field ok_to_run_field
 * @brief macros for field ok_to_run
 * @details start pwm subcore
 * @{
 */
#define PWM_PWM0_CTRL__OK_TO_RUN__SHIFT                                       0
#define PWM_PWM0_CTRL__OK_TO_RUN__WIDTH                                       1
#define PWM_PWM0_CTRL__OK_TO_RUN__MASK                              0x00000001U
#define PWM_PWM0_CTRL__OK_TO_RUN__READ(src)     ((uint32_t)(src) & 0x00000001U)
#define PWM_PWM0_CTRL__OK_TO_RUN__WRITE(src)    ((uint32_t)(src) & 0x00000001U)
#define PWM_PWM0_CTRL__OK_TO_RUN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define PWM_PWM0_CTRL__OK_TO_RUN__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define PWM_PWM0_CTRL__OK_TO_RUN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define PWM_PWM0_CTRL__OK_TO_RUN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define PWM_PWM0_CTRL__OK_TO_RUN__RESET_VALUE                       0x00000000U
/** @} */

/* macros for field tot_dur */
/**
 * @defgroup at_apb_pwm_regs_core_tot_dur_field tot_dur_field
 * @brief macros for field tot_dur
 * @details total duration of period in clk_mpc clock cycles
 * @{
 */
#define PWM_PWM0_CTRL__TOT_DUR__SHIFT                                         1
#define PWM_PWM0_CTRL__TOT_DUR__WIDTH                                         6
#define PWM_PWM0_CTRL__TOT_DUR__MASK                                0x0000007eU
#define PWM_PWM0_CTRL__TOT_DUR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000007eU) >> 1)
#define PWM_PWM0_CTRL__TOT_DUR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x0000007eU)
#define PWM_PWM0_CTRL__TOT_DUR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000007eU) | (((uint32_t)(src) <<\
                    1) & 0x0000007eU)
#define PWM_PWM0_CTRL__TOT_DUR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x0000007eU)))
#define PWM_PWM0_CTRL__TOT_DUR__RESET_VALUE                         0x00000000U
/** @} */

/* macros for field lo_dur */
/**
 * @defgroup at_apb_pwm_regs_core_lo_dur_field lo_dur_field
 * @brief macros for field lo_dur
 * @details duration of low portion of period in clk_mpc clock cycles
 * @{
 */
#define PWM_PWM0_CTRL__LO_DUR__SHIFT                                          7
#define PWM_PWM0_CTRL__LO_DUR__WIDTH                                          6
#define PWM_PWM0_CTRL__LO_DUR__MASK                                 0x00001f80U
#define PWM_PWM0_CTRL__LO_DUR__READ(src) (((uint32_t)(src) & 0x00001f80U) >> 7)
#define PWM_PWM0_CTRL__LO_DUR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 7) & 0x00001f80U)
#define PWM_PWM0_CTRL__LO_DUR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00001f80U) | (((uint32_t)(src) <<\
                    7) & 0x00001f80U)
#define PWM_PWM0_CTRL__LO_DUR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 7) & ~0x00001f80U)))
#define PWM_PWM0_CTRL__LO_DUR__RESET_VALUE                          0x00000000U
/** @} */

/* macros for field invert */
/**
 * @defgroup at_apb_pwm_regs_core_invert_field invert_field
 * @brief macros for field invert
 * @details invert output polarity
 * @{
 */
#define PWM_PWM0_CTRL__INVERT__SHIFT                                         13
#define PWM_PWM0_CTRL__INVERT__WIDTH                                          1
#define PWM_PWM0_CTRL__INVERT__MASK                                 0x00002000U
#define PWM_PWM0_CTRL__INVERT__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00002000U) >> 13)
#define PWM_PWM0_CTRL__INVERT__WRITE(src) \
                    (((uint32_t)(src)\
                    << 13) & 0x00002000U)
#define PWM_PWM0_CTRL__INVERT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00002000U) | (((uint32_t)(src) <<\
                    13) & 0x00002000U)
#define PWM_PWM0_CTRL__INVERT__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 13) & ~0x00002000U)))
#define PWM_PWM0_CTRL__INVERT__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00002000U) | ((uint32_t)(1) << 13)
#define PWM_PWM0_CTRL__INVERT__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00002000U) | ((uint32_t)(0) << 13)
#define PWM_PWM0_CTRL__INVERT__RESET_VALUE                          0x00000000U
/** @} */

/* macros for field alt_ok_to_run */
/**
 * @defgroup at_apb_pwm_regs_core_alt_ok_to_run_field alt_ok_to_run_field
 * @brief macros for field alt_ok_to_run
 * @details alternative mechanism to start pwm subcores; useful if application requires all used pwm subcores start together  [14] = start pwm0 subcore  [15] = start pwm1 subcore  [16] = start pwm2 subcore  [17] = start pwm3 subcore  [18] = start pwm4 subcore  [19] = start pwm5 subcore  [20] = start pwm6 subcore  [21] = start pwm7 subcore
 * @{
 */
#define PWM_PWM0_CTRL__ALT_OK_TO_RUN__SHIFT                                  14
#define PWM_PWM0_CTRL__ALT_OK_TO_RUN__WIDTH                                   8
#define PWM_PWM0_CTRL__ALT_OK_TO_RUN__MASK                          0x003fc000U
#define PWM_PWM0_CTRL__ALT_OK_TO_RUN__READ(src) \
                    (((uint32_t)(src)\
                    & 0x003fc000U) >> 14)
#define PWM_PWM0_CTRL__ALT_OK_TO_RUN__WRITE(src) \
                    (((uint32_t)(src)\
                    << 14) & 0x003fc000U)
#define PWM_PWM0_CTRL__ALT_OK_TO_RUN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x003fc000U) | (((uint32_t)(src) <<\
                    14) & 0x003fc000U)
#define PWM_PWM0_CTRL__ALT_OK_TO_RUN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 14) & ~0x003fc000U)))
#define PWM_PWM0_CTRL__ALT_OK_TO_RUN__RESET_VALUE                   0x00000000U
/** @} */
#define PWM_PWM0_CTRL__TYPE                                            uint32_t
#define PWM_PWM0_CTRL__READ                                         0x003fffffU
#define PWM_PWM0_CTRL__WRITE                                        0x003fffffU
#define PWM_PWM0_CTRL__PRESERVED                                    0x00000000U
#define PWM_PWM0_CTRL__RESET_VALUE                                  0x00000000U

#endif /* __PWM_PWM0_CTRL_MACRO__ */

/** @} end of pwm0_ctrl */

/* macros for BlueprintGlobalNameSpace::PWM_pwm1_ctrl */
/**
 * @defgroup at_apb_pwm_regs_core_pwm1_ctrl pwm1_ctrl
 * @brief control signals for pwm1 subcore definitions.
 * @{
 */
#ifndef __PWM_PWM1_CTRL_MACRO__
#define __PWM_PWM1_CTRL_MACRO__

/* macros for field ok_to_run */
/**
 * @defgroup at_apb_pwm_regs_core_ok_to_run_field ok_to_run_field
 * @brief macros for field ok_to_run
 * @details start pwm subcore
 * @{
 */
#define PWM_PWM1_CTRL__OK_TO_RUN__SHIFT                                       0
#define PWM_PWM1_CTRL__OK_TO_RUN__WIDTH                                       1
#define PWM_PWM1_CTRL__OK_TO_RUN__MASK                              0x00000001U
#define PWM_PWM1_CTRL__OK_TO_RUN__READ(src)     ((uint32_t)(src) & 0x00000001U)
#define PWM_PWM1_CTRL__OK_TO_RUN__WRITE(src)    ((uint32_t)(src) & 0x00000001U)
#define PWM_PWM1_CTRL__OK_TO_RUN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define PWM_PWM1_CTRL__OK_TO_RUN__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define PWM_PWM1_CTRL__OK_TO_RUN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define PWM_PWM1_CTRL__OK_TO_RUN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define PWM_PWM1_CTRL__OK_TO_RUN__RESET_VALUE                       0x00000000U
/** @} */

/* macros for field tot_dur */
/**
 * @defgroup at_apb_pwm_regs_core_tot_dur_field tot_dur_field
 * @brief macros for field tot_dur
 * @details total duration of period in clk_mpc clock cycles
 * @{
 */
#define PWM_PWM1_CTRL__TOT_DUR__SHIFT                                         1
#define PWM_PWM1_CTRL__TOT_DUR__WIDTH                                         6
#define PWM_PWM1_CTRL__TOT_DUR__MASK                                0x0000007eU
#define PWM_PWM1_CTRL__TOT_DUR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000007eU) >> 1)
#define PWM_PWM1_CTRL__TOT_DUR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x0000007eU)
#define PWM_PWM1_CTRL__TOT_DUR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000007eU) | (((uint32_t)(src) <<\
                    1) & 0x0000007eU)
#define PWM_PWM1_CTRL__TOT_DUR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x0000007eU)))
#define PWM_PWM1_CTRL__TOT_DUR__RESET_VALUE                         0x00000000U
/** @} */

/* macros for field lo_dur */
/**
 * @defgroup at_apb_pwm_regs_core_lo_dur_field lo_dur_field
 * @brief macros for field lo_dur
 * @details duration of low portion of period in clk_mpc clock cycles
 * @{
 */
#define PWM_PWM1_CTRL__LO_DUR__SHIFT                                          7
#define PWM_PWM1_CTRL__LO_DUR__WIDTH                                          6
#define PWM_PWM1_CTRL__LO_DUR__MASK                                 0x00001f80U
#define PWM_PWM1_CTRL__LO_DUR__READ(src) (((uint32_t)(src) & 0x00001f80U) >> 7)
#define PWM_PWM1_CTRL__LO_DUR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 7) & 0x00001f80U)
#define PWM_PWM1_CTRL__LO_DUR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00001f80U) | (((uint32_t)(src) <<\
                    7) & 0x00001f80U)
#define PWM_PWM1_CTRL__LO_DUR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 7) & ~0x00001f80U)))
#define PWM_PWM1_CTRL__LO_DUR__RESET_VALUE                          0x00000000U
/** @} */

/* macros for field invert */
/**
 * @defgroup at_apb_pwm_regs_core_invert_field invert_field
 * @brief macros for field invert
 * @details invert output polarity
 * @{
 */
#define PWM_PWM1_CTRL__INVERT__SHIFT                                         13
#define PWM_PWM1_CTRL__INVERT__WIDTH                                          1
#define PWM_PWM1_CTRL__INVERT__MASK                                 0x00002000U
#define PWM_PWM1_CTRL__INVERT__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00002000U) >> 13)
#define PWM_PWM1_CTRL__INVERT__WRITE(src) \
                    (((uint32_t)(src)\
                    << 13) & 0x00002000U)
#define PWM_PWM1_CTRL__INVERT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00002000U) | (((uint32_t)(src) <<\
                    13) & 0x00002000U)
#define PWM_PWM1_CTRL__INVERT__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 13) & ~0x00002000U)))
#define PWM_PWM1_CTRL__INVERT__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00002000U) | ((uint32_t)(1) << 13)
#define PWM_PWM1_CTRL__INVERT__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00002000U) | ((uint32_t)(0) << 13)
#define PWM_PWM1_CTRL__INVERT__RESET_VALUE                          0x00000000U
/** @} */
#define PWM_PWM1_CTRL__TYPE                                            uint32_t
#define PWM_PWM1_CTRL__READ                                         0x00003fffU
#define PWM_PWM1_CTRL__WRITE                                        0x00003fffU
#define PWM_PWM1_CTRL__PRESERVED                                    0x00000000U
#define PWM_PWM1_CTRL__RESET_VALUE                                  0x00000000U

#endif /* __PWM_PWM1_CTRL_MACRO__ */

/** @} end of pwm1_ctrl */

/* macros for BlueprintGlobalNameSpace::PWM_pwm2_ctrl */
/**
 * @defgroup at_apb_pwm_regs_core_pwm2_ctrl pwm2_ctrl
 * @brief control signals for pwm2 subcore definitions.
 * @{
 */
#ifndef __PWM_PWM2_CTRL_MACRO__
#define __PWM_PWM2_CTRL_MACRO__

/* macros for field ok_to_run */
/**
 * @defgroup at_apb_pwm_regs_core_ok_to_run_field ok_to_run_field
 * @brief macros for field ok_to_run
 * @details start pwm subcore
 * @{
 */
#define PWM_PWM2_CTRL__OK_TO_RUN__SHIFT                                       0
#define PWM_PWM2_CTRL__OK_TO_RUN__WIDTH                                       1
#define PWM_PWM2_CTRL__OK_TO_RUN__MASK                              0x00000001U
#define PWM_PWM2_CTRL__OK_TO_RUN__READ(src)     ((uint32_t)(src) & 0x00000001U)
#define PWM_PWM2_CTRL__OK_TO_RUN__WRITE(src)    ((uint32_t)(src) & 0x00000001U)
#define PWM_PWM2_CTRL__OK_TO_RUN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define PWM_PWM2_CTRL__OK_TO_RUN__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define PWM_PWM2_CTRL__OK_TO_RUN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define PWM_PWM2_CTRL__OK_TO_RUN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define PWM_PWM2_CTRL__OK_TO_RUN__RESET_VALUE                       0x00000000U
/** @} */

/* macros for field tot_dur */
/**
 * @defgroup at_apb_pwm_regs_core_tot_dur_field tot_dur_field
 * @brief macros for field tot_dur
 * @details total duration of period in clk_mpc clock cycles
 * @{
 */
#define PWM_PWM2_CTRL__TOT_DUR__SHIFT                                         1
#define PWM_PWM2_CTRL__TOT_DUR__WIDTH                                         6
#define PWM_PWM2_CTRL__TOT_DUR__MASK                                0x0000007eU
#define PWM_PWM2_CTRL__TOT_DUR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000007eU) >> 1)
#define PWM_PWM2_CTRL__TOT_DUR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x0000007eU)
#define PWM_PWM2_CTRL__TOT_DUR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000007eU) | (((uint32_t)(src) <<\
                    1) & 0x0000007eU)
#define PWM_PWM2_CTRL__TOT_DUR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x0000007eU)))
#define PWM_PWM2_CTRL__TOT_DUR__RESET_VALUE                         0x00000000U
/** @} */

/* macros for field lo_dur */
/**
 * @defgroup at_apb_pwm_regs_core_lo_dur_field lo_dur_field
 * @brief macros for field lo_dur
 * @details duration of low portion of period in clk_mpc clock cycles
 * @{
 */
#define PWM_PWM2_CTRL__LO_DUR__SHIFT                                          7
#define PWM_PWM2_CTRL__LO_DUR__WIDTH                                          6
#define PWM_PWM2_CTRL__LO_DUR__MASK                                 0x00001f80U
#define PWM_PWM2_CTRL__LO_DUR__READ(src) (((uint32_t)(src) & 0x00001f80U) >> 7)
#define PWM_PWM2_CTRL__LO_DUR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 7) & 0x00001f80U)
#define PWM_PWM2_CTRL__LO_DUR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00001f80U) | (((uint32_t)(src) <<\
                    7) & 0x00001f80U)
#define PWM_PWM2_CTRL__LO_DUR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 7) & ~0x00001f80U)))
#define PWM_PWM2_CTRL__LO_DUR__RESET_VALUE                          0x00000000U
/** @} */

/* macros for field invert */
/**
 * @defgroup at_apb_pwm_regs_core_invert_field invert_field
 * @brief macros for field invert
 * @details invert output polarity
 * @{
 */
#define PWM_PWM2_CTRL__INVERT__SHIFT                                         13
#define PWM_PWM2_CTRL__INVERT__WIDTH                                          1
#define PWM_PWM2_CTRL__INVERT__MASK                                 0x00002000U
#define PWM_PWM2_CTRL__INVERT__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00002000U) >> 13)
#define PWM_PWM2_CTRL__INVERT__WRITE(src) \
                    (((uint32_t)(src)\
                    << 13) & 0x00002000U)
#define PWM_PWM2_CTRL__INVERT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00002000U) | (((uint32_t)(src) <<\
                    13) & 0x00002000U)
#define PWM_PWM2_CTRL__INVERT__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 13) & ~0x00002000U)))
#define PWM_PWM2_CTRL__INVERT__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00002000U) | ((uint32_t)(1) << 13)
#define PWM_PWM2_CTRL__INVERT__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00002000U) | ((uint32_t)(0) << 13)
#define PWM_PWM2_CTRL__INVERT__RESET_VALUE                          0x00000000U
/** @} */
#define PWM_PWM2_CTRL__TYPE                                            uint32_t
#define PWM_PWM2_CTRL__READ                                         0x00003fffU
#define PWM_PWM2_CTRL__WRITE                                        0x00003fffU
#define PWM_PWM2_CTRL__PRESERVED                                    0x00000000U
#define PWM_PWM2_CTRL__RESET_VALUE                                  0x00000000U

#endif /* __PWM_PWM2_CTRL_MACRO__ */

/** @} end of pwm2_ctrl */

/* macros for BlueprintGlobalNameSpace::PWM_pwm3_ctrl */
/**
 * @defgroup at_apb_pwm_regs_core_pwm3_ctrl pwm3_ctrl
 * @brief control signals for pwm3 subcore definitions.
 * @{
 */
#ifndef __PWM_PWM3_CTRL_MACRO__
#define __PWM_PWM3_CTRL_MACRO__

/* macros for field ok_to_run */
/**
 * @defgroup at_apb_pwm_regs_core_ok_to_run_field ok_to_run_field
 * @brief macros for field ok_to_run
 * @details start pwm subcore
 * @{
 */
#define PWM_PWM3_CTRL__OK_TO_RUN__SHIFT                                       0
#define PWM_PWM3_CTRL__OK_TO_RUN__WIDTH                                       1
#define PWM_PWM3_CTRL__OK_TO_RUN__MASK                              0x00000001U
#define PWM_PWM3_CTRL__OK_TO_RUN__READ(src)     ((uint32_t)(src) & 0x00000001U)
#define PWM_PWM3_CTRL__OK_TO_RUN__WRITE(src)    ((uint32_t)(src) & 0x00000001U)
#define PWM_PWM3_CTRL__OK_TO_RUN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define PWM_PWM3_CTRL__OK_TO_RUN__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define PWM_PWM3_CTRL__OK_TO_RUN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define PWM_PWM3_CTRL__OK_TO_RUN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define PWM_PWM3_CTRL__OK_TO_RUN__RESET_VALUE                       0x00000000U
/** @} */

/* macros for field tot_dur */
/**
 * @defgroup at_apb_pwm_regs_core_tot_dur_field tot_dur_field
 * @brief macros for field tot_dur
 * @details total duration of period in clk_mpc clock cycles
 * @{
 */
#define PWM_PWM3_CTRL__TOT_DUR__SHIFT                                         1
#define PWM_PWM3_CTRL__TOT_DUR__WIDTH                                         6
#define PWM_PWM3_CTRL__TOT_DUR__MASK                                0x0000007eU
#define PWM_PWM3_CTRL__TOT_DUR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000007eU) >> 1)
#define PWM_PWM3_CTRL__TOT_DUR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x0000007eU)
#define PWM_PWM3_CTRL__TOT_DUR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000007eU) | (((uint32_t)(src) <<\
                    1) & 0x0000007eU)
#define PWM_PWM3_CTRL__TOT_DUR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x0000007eU)))
#define PWM_PWM3_CTRL__TOT_DUR__RESET_VALUE                         0x00000000U
/** @} */

/* macros for field lo_dur */
/**
 * @defgroup at_apb_pwm_regs_core_lo_dur_field lo_dur_field
 * @brief macros for field lo_dur
 * @details duration of low portion of period in clk_mpc clock cycles
 * @{
 */
#define PWM_PWM3_CTRL__LO_DUR__SHIFT                                          7
#define PWM_PWM3_CTRL__LO_DUR__WIDTH                                          6
#define PWM_PWM3_CTRL__LO_DUR__MASK                                 0x00001f80U
#define PWM_PWM3_CTRL__LO_DUR__READ(src) (((uint32_t)(src) & 0x00001f80U) >> 7)
#define PWM_PWM3_CTRL__LO_DUR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 7) & 0x00001f80U)
#define PWM_PWM3_CTRL__LO_DUR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00001f80U) | (((uint32_t)(src) <<\
                    7) & 0x00001f80U)
#define PWM_PWM3_CTRL__LO_DUR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 7) & ~0x00001f80U)))
#define PWM_PWM3_CTRL__LO_DUR__RESET_VALUE                          0x00000000U
/** @} */

/* macros for field invert */
/**
 * @defgroup at_apb_pwm_regs_core_invert_field invert_field
 * @brief macros for field invert
 * @details invert output polarity
 * @{
 */
#define PWM_PWM3_CTRL__INVERT__SHIFT                                         13
#define PWM_PWM3_CTRL__INVERT__WIDTH                                          1
#define PWM_PWM3_CTRL__INVERT__MASK                                 0x00002000U
#define PWM_PWM3_CTRL__INVERT__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00002000U) >> 13)
#define PWM_PWM3_CTRL__INVERT__WRITE(src) \
                    (((uint32_t)(src)\
                    << 13) & 0x00002000U)
#define PWM_PWM3_CTRL__INVERT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00002000U) | (((uint32_t)(src) <<\
                    13) & 0x00002000U)
#define PWM_PWM3_CTRL__INVERT__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 13) & ~0x00002000U)))
#define PWM_PWM3_CTRL__INVERT__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00002000U) | ((uint32_t)(1) << 13)
#define PWM_PWM3_CTRL__INVERT__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00002000U) | ((uint32_t)(0) << 13)
#define PWM_PWM3_CTRL__INVERT__RESET_VALUE                          0x00000000U
/** @} */
#define PWM_PWM3_CTRL__TYPE                                            uint32_t
#define PWM_PWM3_CTRL__READ                                         0x00003fffU
#define PWM_PWM3_CTRL__WRITE                                        0x00003fffU
#define PWM_PWM3_CTRL__PRESERVED                                    0x00000000U
#define PWM_PWM3_CTRL__RESET_VALUE                                  0x00000000U

#endif /* __PWM_PWM3_CTRL_MACRO__ */

/** @} end of pwm3_ctrl */

/* macros for BlueprintGlobalNameSpace::PWM_pwm4_ctrl */
/**
 * @defgroup at_apb_pwm_regs_core_pwm4_ctrl pwm4_ctrl
 * @brief control signals for pwm4 subcore definitions.
 * @{
 */
#ifndef __PWM_PWM4_CTRL_MACRO__
#define __PWM_PWM4_CTRL_MACRO__

/* macros for field ok_to_run */
/**
 * @defgroup at_apb_pwm_regs_core_ok_to_run_field ok_to_run_field
 * @brief macros for field ok_to_run
 * @details start pwm subcore
 * @{
 */
#define PWM_PWM4_CTRL__OK_TO_RUN__SHIFT                                       0
#define PWM_PWM4_CTRL__OK_TO_RUN__WIDTH                                       1
#define PWM_PWM4_CTRL__OK_TO_RUN__MASK                              0x00000001U
#define PWM_PWM4_CTRL__OK_TO_RUN__READ(src)     ((uint32_t)(src) & 0x00000001U)
#define PWM_PWM4_CTRL__OK_TO_RUN__WRITE(src)    ((uint32_t)(src) & 0x00000001U)
#define PWM_PWM4_CTRL__OK_TO_RUN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define PWM_PWM4_CTRL__OK_TO_RUN__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define PWM_PWM4_CTRL__OK_TO_RUN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define PWM_PWM4_CTRL__OK_TO_RUN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define PWM_PWM4_CTRL__OK_TO_RUN__RESET_VALUE                       0x00000000U
/** @} */

/* macros for field tot_dur */
/**
 * @defgroup at_apb_pwm_regs_core_tot_dur_field tot_dur_field
 * @brief macros for field tot_dur
 * @details total duration of period in clk_mpc clock cycles
 * @{
 */
#define PWM_PWM4_CTRL__TOT_DUR__SHIFT                                         1
#define PWM_PWM4_CTRL__TOT_DUR__WIDTH                                         6
#define PWM_PWM4_CTRL__TOT_DUR__MASK                                0x0000007eU
#define PWM_PWM4_CTRL__TOT_DUR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000007eU) >> 1)
#define PWM_PWM4_CTRL__TOT_DUR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x0000007eU)
#define PWM_PWM4_CTRL__TOT_DUR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000007eU) | (((uint32_t)(src) <<\
                    1) & 0x0000007eU)
#define PWM_PWM4_CTRL__TOT_DUR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x0000007eU)))
#define PWM_PWM4_CTRL__TOT_DUR__RESET_VALUE                         0x00000000U
/** @} */

/* macros for field lo_dur */
/**
 * @defgroup at_apb_pwm_regs_core_lo_dur_field lo_dur_field
 * @brief macros for field lo_dur
 * @details duration of low portion of period in clk_mpc clock cycles
 * @{
 */
#define PWM_PWM4_CTRL__LO_DUR__SHIFT                                          7
#define PWM_PWM4_CTRL__LO_DUR__WIDTH                                          6
#define PWM_PWM4_CTRL__LO_DUR__MASK                                 0x00001f80U
#define PWM_PWM4_CTRL__LO_DUR__READ(src) (((uint32_t)(src) & 0x00001f80U) >> 7)
#define PWM_PWM4_CTRL__LO_DUR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 7) & 0x00001f80U)
#define PWM_PWM4_CTRL__LO_DUR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00001f80U) | (((uint32_t)(src) <<\
                    7) & 0x00001f80U)
#define PWM_PWM4_CTRL__LO_DUR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 7) & ~0x00001f80U)))
#define PWM_PWM4_CTRL__LO_DUR__RESET_VALUE                          0x00000000U
/** @} */

/* macros for field invert */
/**
 * @defgroup at_apb_pwm_regs_core_invert_field invert_field
 * @brief macros for field invert
 * @details invert output polarity
 * @{
 */
#define PWM_PWM4_CTRL__INVERT__SHIFT                                         13
#define PWM_PWM4_CTRL__INVERT__WIDTH                                          1
#define PWM_PWM4_CTRL__INVERT__MASK                                 0x00002000U
#define PWM_PWM4_CTRL__INVERT__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00002000U) >> 13)
#define PWM_PWM4_CTRL__INVERT__WRITE(src) \
                    (((uint32_t)(src)\
                    << 13) & 0x00002000U)
#define PWM_PWM4_CTRL__INVERT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00002000U) | (((uint32_t)(src) <<\
                    13) & 0x00002000U)
#define PWM_PWM4_CTRL__INVERT__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 13) & ~0x00002000U)))
#define PWM_PWM4_CTRL__INVERT__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00002000U) | ((uint32_t)(1) << 13)
#define PWM_PWM4_CTRL__INVERT__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00002000U) | ((uint32_t)(0) << 13)
#define PWM_PWM4_CTRL__INVERT__RESET_VALUE                          0x00000000U
/** @} */
#define PWM_PWM4_CTRL__TYPE                                            uint32_t
#define PWM_PWM4_CTRL__READ                                         0x00003fffU
#define PWM_PWM4_CTRL__WRITE                                        0x00003fffU
#define PWM_PWM4_CTRL__PRESERVED                                    0x00000000U
#define PWM_PWM4_CTRL__RESET_VALUE                                  0x00000000U

#endif /* __PWM_PWM4_CTRL_MACRO__ */

/** @} end of pwm4_ctrl */

/* macros for BlueprintGlobalNameSpace::PWM_pwm5_ctrl */
/**
 * @defgroup at_apb_pwm_regs_core_pwm5_ctrl pwm5_ctrl
 * @brief control signals for pwm5 subcore definitions.
 * @{
 */
#ifndef __PWM_PWM5_CTRL_MACRO__
#define __PWM_PWM5_CTRL_MACRO__

/* macros for field ok_to_run */
/**
 * @defgroup at_apb_pwm_regs_core_ok_to_run_field ok_to_run_field
 * @brief macros for field ok_to_run
 * @details start pwm subcore
 * @{
 */
#define PWM_PWM5_CTRL__OK_TO_RUN__SHIFT                                       0
#define PWM_PWM5_CTRL__OK_TO_RUN__WIDTH                                       1
#define PWM_PWM5_CTRL__OK_TO_RUN__MASK                              0x00000001U
#define PWM_PWM5_CTRL__OK_TO_RUN__READ(src)     ((uint32_t)(src) & 0x00000001U)
#define PWM_PWM5_CTRL__OK_TO_RUN__WRITE(src)    ((uint32_t)(src) & 0x00000001U)
#define PWM_PWM5_CTRL__OK_TO_RUN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define PWM_PWM5_CTRL__OK_TO_RUN__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define PWM_PWM5_CTRL__OK_TO_RUN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define PWM_PWM5_CTRL__OK_TO_RUN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define PWM_PWM5_CTRL__OK_TO_RUN__RESET_VALUE                       0x00000000U
/** @} */

/* macros for field tot_dur */
/**
 * @defgroup at_apb_pwm_regs_core_tot_dur_field tot_dur_field
 * @brief macros for field tot_dur
 * @details total duration of period in clk_mpc clock cycles
 * @{
 */
#define PWM_PWM5_CTRL__TOT_DUR__SHIFT                                         1
#define PWM_PWM5_CTRL__TOT_DUR__WIDTH                                         6
#define PWM_PWM5_CTRL__TOT_DUR__MASK                                0x0000007eU
#define PWM_PWM5_CTRL__TOT_DUR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000007eU) >> 1)
#define PWM_PWM5_CTRL__TOT_DUR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x0000007eU)
#define PWM_PWM5_CTRL__TOT_DUR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000007eU) | (((uint32_t)(src) <<\
                    1) & 0x0000007eU)
#define PWM_PWM5_CTRL__TOT_DUR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x0000007eU)))
#define PWM_PWM5_CTRL__TOT_DUR__RESET_VALUE                         0x00000000U
/** @} */

/* macros for field lo_dur */
/**
 * @defgroup at_apb_pwm_regs_core_lo_dur_field lo_dur_field
 * @brief macros for field lo_dur
 * @details duration of low portion of period in clk_mpc clock cycles
 * @{
 */
#define PWM_PWM5_CTRL__LO_DUR__SHIFT                                          7
#define PWM_PWM5_CTRL__LO_DUR__WIDTH                                          6
#define PWM_PWM5_CTRL__LO_DUR__MASK                                 0x00001f80U
#define PWM_PWM5_CTRL__LO_DUR__READ(src) (((uint32_t)(src) & 0x00001f80U) >> 7)
#define PWM_PWM5_CTRL__LO_DUR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 7) & 0x00001f80U)
#define PWM_PWM5_CTRL__LO_DUR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00001f80U) | (((uint32_t)(src) <<\
                    7) & 0x00001f80U)
#define PWM_PWM5_CTRL__LO_DUR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 7) & ~0x00001f80U)))
#define PWM_PWM5_CTRL__LO_DUR__RESET_VALUE                          0x00000000U
/** @} */

/* macros for field invert */
/**
 * @defgroup at_apb_pwm_regs_core_invert_field invert_field
 * @brief macros for field invert
 * @details invert output polarity
 * @{
 */
#define PWM_PWM5_CTRL__INVERT__SHIFT                                         13
#define PWM_PWM5_CTRL__INVERT__WIDTH                                          1
#define PWM_PWM5_CTRL__INVERT__MASK                                 0x00002000U
#define PWM_PWM5_CTRL__INVERT__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00002000U) >> 13)
#define PWM_PWM5_CTRL__INVERT__WRITE(src) \
                    (((uint32_t)(src)\
                    << 13) & 0x00002000U)
#define PWM_PWM5_CTRL__INVERT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00002000U) | (((uint32_t)(src) <<\
                    13) & 0x00002000U)
#define PWM_PWM5_CTRL__INVERT__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 13) & ~0x00002000U)))
#define PWM_PWM5_CTRL__INVERT__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00002000U) | ((uint32_t)(1) << 13)
#define PWM_PWM5_CTRL__INVERT__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00002000U) | ((uint32_t)(0) << 13)
#define PWM_PWM5_CTRL__INVERT__RESET_VALUE                          0x00000000U
/** @} */
#define PWM_PWM5_CTRL__TYPE                                            uint32_t
#define PWM_PWM5_CTRL__READ                                         0x00003fffU
#define PWM_PWM5_CTRL__WRITE                                        0x00003fffU
#define PWM_PWM5_CTRL__PRESERVED                                    0x00000000U
#define PWM_PWM5_CTRL__RESET_VALUE                                  0x00000000U

#endif /* __PWM_PWM5_CTRL_MACRO__ */

/** @} end of pwm5_ctrl */

/* macros for BlueprintGlobalNameSpace::PWM_pwm6_ctrl */
/**
 * @defgroup at_apb_pwm_regs_core_pwm6_ctrl pwm6_ctrl
 * @brief control signals for pwm6 subcore definitions.
 * @{
 */
#ifndef __PWM_PWM6_CTRL_MACRO__
#define __PWM_PWM6_CTRL_MACRO__

/* macros for field ok_to_run */
/**
 * @defgroup at_apb_pwm_regs_core_ok_to_run_field ok_to_run_field
 * @brief macros for field ok_to_run
 * @details start pwm subcore
 * @{
 */
#define PWM_PWM6_CTRL__OK_TO_RUN__SHIFT                                       0
#define PWM_PWM6_CTRL__OK_TO_RUN__WIDTH                                       1
#define PWM_PWM6_CTRL__OK_TO_RUN__MASK                              0x00000001U
#define PWM_PWM6_CTRL__OK_TO_RUN__READ(src)     ((uint32_t)(src) & 0x00000001U)
#define PWM_PWM6_CTRL__OK_TO_RUN__WRITE(src)    ((uint32_t)(src) & 0x00000001U)
#define PWM_PWM6_CTRL__OK_TO_RUN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define PWM_PWM6_CTRL__OK_TO_RUN__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define PWM_PWM6_CTRL__OK_TO_RUN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define PWM_PWM6_CTRL__OK_TO_RUN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define PWM_PWM6_CTRL__OK_TO_RUN__RESET_VALUE                       0x00000000U
/** @} */

/* macros for field tot_dur */
/**
 * @defgroup at_apb_pwm_regs_core_tot_dur_field tot_dur_field
 * @brief macros for field tot_dur
 * @details total duration of period in clk_mpc clock cycles
 * @{
 */
#define PWM_PWM6_CTRL__TOT_DUR__SHIFT                                         1
#define PWM_PWM6_CTRL__TOT_DUR__WIDTH                                         6
#define PWM_PWM6_CTRL__TOT_DUR__MASK                                0x0000007eU
#define PWM_PWM6_CTRL__TOT_DUR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000007eU) >> 1)
#define PWM_PWM6_CTRL__TOT_DUR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x0000007eU)
#define PWM_PWM6_CTRL__TOT_DUR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000007eU) | (((uint32_t)(src) <<\
                    1) & 0x0000007eU)
#define PWM_PWM6_CTRL__TOT_DUR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x0000007eU)))
#define PWM_PWM6_CTRL__TOT_DUR__RESET_VALUE                         0x00000000U
/** @} */

/* macros for field lo_dur */
/**
 * @defgroup at_apb_pwm_regs_core_lo_dur_field lo_dur_field
 * @brief macros for field lo_dur
 * @details duration of low portion of period in clk_mpc clock cycles
 * @{
 */
#define PWM_PWM6_CTRL__LO_DUR__SHIFT                                          7
#define PWM_PWM6_CTRL__LO_DUR__WIDTH                                          6
#define PWM_PWM6_CTRL__LO_DUR__MASK                                 0x00001f80U
#define PWM_PWM6_CTRL__LO_DUR__READ(src) (((uint32_t)(src) & 0x00001f80U) >> 7)
#define PWM_PWM6_CTRL__LO_DUR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 7) & 0x00001f80U)
#define PWM_PWM6_CTRL__LO_DUR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00001f80U) | (((uint32_t)(src) <<\
                    7) & 0x00001f80U)
#define PWM_PWM6_CTRL__LO_DUR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 7) & ~0x00001f80U)))
#define PWM_PWM6_CTRL__LO_DUR__RESET_VALUE                          0x00000000U
/** @} */

/* macros for field invert */
/**
 * @defgroup at_apb_pwm_regs_core_invert_field invert_field
 * @brief macros for field invert
 * @details invert output polarity
 * @{
 */
#define PWM_PWM6_CTRL__INVERT__SHIFT                                         13
#define PWM_PWM6_CTRL__INVERT__WIDTH                                          1
#define PWM_PWM6_CTRL__INVERT__MASK                                 0x00002000U
#define PWM_PWM6_CTRL__INVERT__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00002000U) >> 13)
#define PWM_PWM6_CTRL__INVERT__WRITE(src) \
                    (((uint32_t)(src)\
                    << 13) & 0x00002000U)
#define PWM_PWM6_CTRL__INVERT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00002000U) | (((uint32_t)(src) <<\
                    13) & 0x00002000U)
#define PWM_PWM6_CTRL__INVERT__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 13) & ~0x00002000U)))
#define PWM_PWM6_CTRL__INVERT__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00002000U) | ((uint32_t)(1) << 13)
#define PWM_PWM6_CTRL__INVERT__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00002000U) | ((uint32_t)(0) << 13)
#define PWM_PWM6_CTRL__INVERT__RESET_VALUE                          0x00000000U
/** @} */
#define PWM_PWM6_CTRL__TYPE                                            uint32_t
#define PWM_PWM6_CTRL__READ                                         0x00003fffU
#define PWM_PWM6_CTRL__WRITE                                        0x00003fffU
#define PWM_PWM6_CTRL__PRESERVED                                    0x00000000U
#define PWM_PWM6_CTRL__RESET_VALUE                                  0x00000000U

#endif /* __PWM_PWM6_CTRL_MACRO__ */

/** @} end of pwm6_ctrl */

/* macros for BlueprintGlobalNameSpace::PWM_pwm7_ctrl */
/**
 * @defgroup at_apb_pwm_regs_core_pwm7_ctrl pwm7_ctrl
 * @brief control signals for pwm7 subcore definitions.
 * @{
 */
#ifndef __PWM_PWM7_CTRL_MACRO__
#define __PWM_PWM7_CTRL_MACRO__

/* macros for field ok_to_run */
/**
 * @defgroup at_apb_pwm_regs_core_ok_to_run_field ok_to_run_field
 * @brief macros for field ok_to_run
 * @details start pwm subcore
 * @{
 */
#define PWM_PWM7_CTRL__OK_TO_RUN__SHIFT                                       0
#define PWM_PWM7_CTRL__OK_TO_RUN__WIDTH                                       1
#define PWM_PWM7_CTRL__OK_TO_RUN__MASK                              0x00000001U
#define PWM_PWM7_CTRL__OK_TO_RUN__READ(src)     ((uint32_t)(src) & 0x00000001U)
#define PWM_PWM7_CTRL__OK_TO_RUN__WRITE(src)    ((uint32_t)(src) & 0x00000001U)
#define PWM_PWM7_CTRL__OK_TO_RUN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define PWM_PWM7_CTRL__OK_TO_RUN__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define PWM_PWM7_CTRL__OK_TO_RUN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define PWM_PWM7_CTRL__OK_TO_RUN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define PWM_PWM7_CTRL__OK_TO_RUN__RESET_VALUE                       0x00000000U
/** @} */

/* macros for field tot_dur */
/**
 * @defgroup at_apb_pwm_regs_core_tot_dur_field tot_dur_field
 * @brief macros for field tot_dur
 * @details total duration of period in clk_mpc clock cycles
 * @{
 */
#define PWM_PWM7_CTRL__TOT_DUR__SHIFT                                         1
#define PWM_PWM7_CTRL__TOT_DUR__WIDTH                                         6
#define PWM_PWM7_CTRL__TOT_DUR__MASK                                0x0000007eU
#define PWM_PWM7_CTRL__TOT_DUR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000007eU) >> 1)
#define PWM_PWM7_CTRL__TOT_DUR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x0000007eU)
#define PWM_PWM7_CTRL__TOT_DUR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000007eU) | (((uint32_t)(src) <<\
                    1) & 0x0000007eU)
#define PWM_PWM7_CTRL__TOT_DUR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x0000007eU)))
#define PWM_PWM7_CTRL__TOT_DUR__RESET_VALUE                         0x00000000U
/** @} */

/* macros for field lo_dur */
/**
 * @defgroup at_apb_pwm_regs_core_lo_dur_field lo_dur_field
 * @brief macros for field lo_dur
 * @details duration of low portion of period in clk_mpc clock cycles
 * @{
 */
#define PWM_PWM7_CTRL__LO_DUR__SHIFT                                          7
#define PWM_PWM7_CTRL__LO_DUR__WIDTH                                          6
#define PWM_PWM7_CTRL__LO_DUR__MASK                                 0x00001f80U
#define PWM_PWM7_CTRL__LO_DUR__READ(src) (((uint32_t)(src) & 0x00001f80U) >> 7)
#define PWM_PWM7_CTRL__LO_DUR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 7) & 0x00001f80U)
#define PWM_PWM7_CTRL__LO_DUR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00001f80U) | (((uint32_t)(src) <<\
                    7) & 0x00001f80U)
#define PWM_PWM7_CTRL__LO_DUR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 7) & ~0x00001f80U)))
#define PWM_PWM7_CTRL__LO_DUR__RESET_VALUE                          0x00000000U
/** @} */

/* macros for field invert */
/**
 * @defgroup at_apb_pwm_regs_core_invert_field invert_field
 * @brief macros for field invert
 * @details invert output polarity
 * @{
 */
#define PWM_PWM7_CTRL__INVERT__SHIFT                                         13
#define PWM_PWM7_CTRL__INVERT__WIDTH                                          1
#define PWM_PWM7_CTRL__INVERT__MASK                                 0x00002000U
#define PWM_PWM7_CTRL__INVERT__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00002000U) >> 13)
#define PWM_PWM7_CTRL__INVERT__WRITE(src) \
                    (((uint32_t)(src)\
                    << 13) & 0x00002000U)
#define PWM_PWM7_CTRL__INVERT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00002000U) | (((uint32_t)(src) <<\
                    13) & 0x00002000U)
#define PWM_PWM7_CTRL__INVERT__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 13) & ~0x00002000U)))
#define PWM_PWM7_CTRL__INVERT__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00002000U) | ((uint32_t)(1) << 13)
#define PWM_PWM7_CTRL__INVERT__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00002000U) | ((uint32_t)(0) << 13)
#define PWM_PWM7_CTRL__INVERT__RESET_VALUE                          0x00000000U
/** @} */
#define PWM_PWM7_CTRL__TYPE                                            uint32_t
#define PWM_PWM7_CTRL__READ                                         0x00003fffU
#define PWM_PWM7_CTRL__WRITE                                        0x00003fffU
#define PWM_PWM7_CTRL__PRESERVED                                    0x00000000U
#define PWM_PWM7_CTRL__RESET_VALUE                                  0x00000000U

#endif /* __PWM_PWM7_CTRL_MACRO__ */

/** @} end of pwm7_ctrl */

/* macros for BlueprintGlobalNameSpace::PWM_core_id */
/**
 * @defgroup at_apb_pwm_regs_core_core_id core_id
 * @brief core id definitions.
 * @{
 */
#ifndef __PWM_CORE_ID_MACRO__
#define __PWM_CORE_ID_MACRO__

/* macros for field id */
/**
 * @defgroup at_apb_pwm_regs_core_id_field id_field
 * @brief macros for field id
 * @details PWM in ASCII
 * @{
 */
#define PWM_CORE_ID__ID__SHIFT                                                0
#define PWM_CORE_ID__ID__WIDTH                                               32
#define PWM_CORE_ID__ID__MASK                                       0xffffffffU
#define PWM_CORE_ID__ID__READ(src)              ((uint32_t)(src) & 0xffffffffU)
#define PWM_CORE_ID__ID__RESET_VALUE                                0x50574d20U
/** @} */
#define PWM_CORE_ID__TYPE                                              uint32_t
#define PWM_CORE_ID__READ                                           0xffffffffU
#define PWM_CORE_ID__PRESERVED                                      0x00000000U
#define PWM_CORE_ID__RESET_VALUE                                    0x50574d20U

#endif /* __PWM_CORE_ID_MACRO__ */

/** @} end of core_id */

/** @} end of AT_APB_PWM_REGS_CORE */
#endif /* __REG_AT_APB_PWM_REGS_CORE_H__ */
