/*                                                                           */
/* File:       at_apb_pdm_regs_core_macro.h                                  */
/*                                                                           */
/* Arguments:  /cad/tools/cadence/blueprint_3.7.5/Linux-64bit/blueprint -eval*/
/*             $DEFINE_PROPERTY=1; -ansic at_apb_pdm_regs_core.rdl           */
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


#ifndef __REG_AT_APB_PDM_REGS_CORE_H__
#define __REG_AT_APB_PDM_REGS_CORE_H__

/**
 *****************************************************************************
 * @defgroup AT_APB_PDM_REGS_CORE at_apb_pdm_regs_core
 * @ingroup AT_REG
 * @brief at_apb_pdm_regs_core definitions.
 * @{
 *****************************************************************************
 */

/* macros for BlueprintGlobalNameSpace::PDM_control */
/**
 * @defgroup at_apb_pdm_regs_core_control control
 * @brief control definitions.
 * @{
 */
#ifndef __PDM_CONTROL_MACRO__
#define __PDM_CONTROL_MACRO__

/* macros for field enable_dp */
/**
 * @defgroup at_apb_pdm_regs_core_enable_dp_field enable_dp_field
 * @brief macros for field enable_dp
 * @details enable the datapath
 * @{
 */
#define PDM_CONTROL__ENABLE_DP__SHIFT                                         0
#define PDM_CONTROL__ENABLE_DP__WIDTH                                         1
#define PDM_CONTROL__ENABLE_DP__MASK                                0x00000001U
#define PDM_CONTROL__ENABLE_DP__READ(src)       ((uint32_t)(src) & 0x00000001U)
#define PDM_CONTROL__ENABLE_DP__WRITE(src)      ((uint32_t)(src) & 0x00000001U)
#define PDM_CONTROL__ENABLE_DP__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define PDM_CONTROL__ENABLE_DP__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define PDM_CONTROL__ENABLE_DP__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define PDM_CONTROL__ENABLE_DP__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define PDM_CONTROL__ENABLE_DP__RESET_VALUE                         0x00000000U
/** @} */

/* macros for field bypass_iir */
/**
 * @defgroup at_apb_pdm_regs_core_bypass_iir_field bypass_iir_field
 * @brief macros for field bypass_iir
 * @details bypass the iir
 * @{
 */
#define PDM_CONTROL__BYPASS_IIR__SHIFT                                        1
#define PDM_CONTROL__BYPASS_IIR__WIDTH                                        1
#define PDM_CONTROL__BYPASS_IIR__MASK                               0x00000002U
#define PDM_CONTROL__BYPASS_IIR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define PDM_CONTROL__BYPASS_IIR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define PDM_CONTROL__BYPASS_IIR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define PDM_CONTROL__BYPASS_IIR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define PDM_CONTROL__BYPASS_IIR__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define PDM_CONTROL__BYPASS_IIR__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define PDM_CONTROL__BYPASS_IIR__RESET_VALUE                        0x00000000U
/** @} */

/* macros for field capture_on_rising */
/**
 * @defgroup at_apb_pdm_regs_core_capture_on_rising_field capture_on_rising_field
 * @brief macros for field capture_on_rising
 * @details capture pdm data on rising edge of pdm clock
 * @{
 */
#define PDM_CONTROL__CAPTURE_ON_RISING__SHIFT                                 2
#define PDM_CONTROL__CAPTURE_ON_RISING__WIDTH                                 1
#define PDM_CONTROL__CAPTURE_ON_RISING__MASK                        0x00000004U
#define PDM_CONTROL__CAPTURE_ON_RISING__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000004U) >> 2)
#define PDM_CONTROL__CAPTURE_ON_RISING__WRITE(src) \
                    (((uint32_t)(src)\
                    << 2) & 0x00000004U)
#define PDM_CONTROL__CAPTURE_ON_RISING__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | (((uint32_t)(src) <<\
                    2) & 0x00000004U)
#define PDM_CONTROL__CAPTURE_ON_RISING__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 2) & ~0x00000004U)))
#define PDM_CONTROL__CAPTURE_ON_RISING__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(1) << 2)
#define PDM_CONTROL__CAPTURE_ON_RISING__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(0) << 2)
#define PDM_CONTROL__CAPTURE_ON_RISING__RESET_VALUE                 0x00000000U
/** @} */

/* macros for field pdm_clk_sel */
/**
 * @defgroup at_apb_pdm_regs_core_pdm_clk_sel_field pdm_clk_sel_field
 * @brief macros for field pdm_clk_sel
 * @details pdm clock frequency  0 = 500kHz  1 = 1MHz  2,3 = 2MHz
 * @{
 */
#define PDM_CONTROL__PDM_CLK_SEL__SHIFT                                       3
#define PDM_CONTROL__PDM_CLK_SEL__WIDTH                                       2
#define PDM_CONTROL__PDM_CLK_SEL__MASK                              0x00000018U
#define PDM_CONTROL__PDM_CLK_SEL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000018U) >> 3)
#define PDM_CONTROL__PDM_CLK_SEL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 3) & 0x00000018U)
#define PDM_CONTROL__PDM_CLK_SEL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000018U) | (((uint32_t)(src) <<\
                    3) & 0x00000018U)
#define PDM_CONTROL__PDM_CLK_SEL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 3) & ~0x00000018U)))
#define PDM_CONTROL__PDM_CLK_SEL__RESET_VALUE                       0x00000001U
/** @} */
#define PDM_CONTROL__TYPE                                              uint32_t
#define PDM_CONTROL__READ                                           0x0000001fU
#define PDM_CONTROL__WRITE                                          0x0000001fU
#define PDM_CONTROL__PRESERVED                                      0x00000000U
#define PDM_CONTROL__RESET_VALUE                                    0x00000008U

#endif /* __PDM_CONTROL_MACRO__ */

/** @} end of control */

/* macros for BlueprintGlobalNameSpace::PDM_iir_config */
/**
 * @defgroup at_apb_pdm_regs_core_iir_config iir_config
 * @brief iir configuration definitions.
 * @{
 */
#ifndef __PDM_IIR_CONFIG_MACRO__
#define __PDM_IIR_CONFIG_MACRO__

/* macros for field bit_shift_amount */
/**
 * @defgroup at_apb_pdm_regs_core_bit_shift_amount_field bit_shift_amount_field
 * @brief macros for field bit_shift_amount
 * @details specifies bit shift amount
 * @{
 */
#define PDM_IIR_CONFIG__BIT_SHIFT_AMOUNT__SHIFT                               0
#define PDM_IIR_CONFIG__BIT_SHIFT_AMOUNT__WIDTH                               4
#define PDM_IIR_CONFIG__BIT_SHIFT_AMOUNT__MASK                      0x0000000fU
#define PDM_IIR_CONFIG__BIT_SHIFT_AMOUNT__READ(src) \
                    ((uint32_t)(src)\
                    & 0x0000000fU)
#define PDM_IIR_CONFIG__BIT_SHIFT_AMOUNT__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x0000000fU)
#define PDM_IIR_CONFIG__BIT_SHIFT_AMOUNT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000000fU) | ((uint32_t)(src) &\
                    0x0000000fU)
#define PDM_IIR_CONFIG__BIT_SHIFT_AMOUNT__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x0000000fU)))
#define PDM_IIR_CONFIG__BIT_SHIFT_AMOUNT__RESET_VALUE               0x00000005U
/** @} */
#define PDM_IIR_CONFIG__TYPE                                           uint32_t
#define PDM_IIR_CONFIG__READ                                        0x0000000fU
#define PDM_IIR_CONFIG__WRITE                                       0x0000000fU
#define PDM_IIR_CONFIG__PRESERVED                                   0x00000000U
#define PDM_IIR_CONFIG__RESET_VALUE                                 0x00000005U

#endif /* __PDM_IIR_CONFIG_MACRO__ */

/** @} end of iir_config */

/* macros for BlueprintGlobalNameSpace::PDM_gain_control_config */
/**
 * @defgroup at_apb_pdm_regs_core_gain_control_config gain_control_config
 * @brief gain configuration definitions.
 * @{
 */
#ifndef __PDM_GAIN_CONTROL_CONFIG_MACRO__
#define __PDM_GAIN_CONTROL_CONFIG_MACRO__

/* macros for field code */
/**
 * @defgroup at_apb_pdm_regs_core_code_field code_field
 * @brief macros for field code
 * @details gain code for LUT
 * @{
 */
#define PDM_GAIN_CONTROL_CONFIG__CODE__SHIFT                                  0
#define PDM_GAIN_CONTROL_CONFIG__CODE__WIDTH                                  7
#define PDM_GAIN_CONTROL_CONFIG__CODE__MASK                         0x0000007fU
#define PDM_GAIN_CONTROL_CONFIG__CODE__READ(src) \
                    ((uint32_t)(src)\
                    & 0x0000007fU)
#define PDM_GAIN_CONTROL_CONFIG__CODE__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x0000007fU)
#define PDM_GAIN_CONTROL_CONFIG__CODE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000007fU) | ((uint32_t)(src) &\
                    0x0000007fU)
#define PDM_GAIN_CONTROL_CONFIG__CODE__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x0000007fU)))
#define PDM_GAIN_CONTROL_CONFIG__CODE__RESET_VALUE                  0x00000040U
/** @} */
#define PDM_GAIN_CONTROL_CONFIG__TYPE                                  uint32_t
#define PDM_GAIN_CONTROL_CONFIG__READ                               0x0000007fU
#define PDM_GAIN_CONTROL_CONFIG__WRITE                              0x0000007fU
#define PDM_GAIN_CONTROL_CONFIG__PRESERVED                          0x00000000U
#define PDM_GAIN_CONTROL_CONFIG__RESET_VALUE                        0x00000040U

#endif /* __PDM_GAIN_CONTROL_CONFIG_MACRO__ */

/** @} end of gain_control_config */

/* macros for BlueprintGlobalNameSpace::PDM_pcm_sample */
/**
 * @defgroup at_apb_pdm_regs_core_pcm_sample pcm_sample
 * @brief a read of this register pops data FIFO definitions.
 * @{
 */
#ifndef __PDM_PCM_SAMPLE_MACRO__
#define __PDM_PCM_SAMPLE_MACRO__

/* macros for field data */
/**
 * @defgroup at_apb_pdm_regs_core_data_field data_field
 * @brief macros for field data
 * @details signed, twos complement
 * @{
 */
#define PDM_PCM_SAMPLE__DATA__SHIFT                                           0
#define PDM_PCM_SAMPLE__DATA__WIDTH                                          16
#define PDM_PCM_SAMPLE__DATA__MASK                                  0x0000ffffU
#define PDM_PCM_SAMPLE__DATA__READ(src)         ((uint32_t)(src) & 0x0000ffffU)
#define PDM_PCM_SAMPLE__DATA__RESET_VALUE                           0x00000000U
/** @} */

/* macros for field empty */
/**
 * @defgroup at_apb_pdm_regs_core_empty_field empty_field
 * @brief macros for field empty
 * @details if 1, ignore data sample because fifo has been drained
 * @{
 */
#define PDM_PCM_SAMPLE__EMPTY__SHIFT                                         31
#define PDM_PCM_SAMPLE__EMPTY__WIDTH                                          1
#define PDM_PCM_SAMPLE__EMPTY__MASK                                 0x80000000U
#define PDM_PCM_SAMPLE__EMPTY__READ(src) \
                    (((uint32_t)(src)\
                    & 0x80000000U) >> 31)
#define PDM_PCM_SAMPLE__EMPTY__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x80000000U) | ((uint32_t)(1) << 31)
#define PDM_PCM_SAMPLE__EMPTY__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x80000000U) | ((uint32_t)(0) << 31)
#define PDM_PCM_SAMPLE__EMPTY__RESET_VALUE                          0x00000000U
/** @} */
#define PDM_PCM_SAMPLE__TYPE                                           uint32_t
#define PDM_PCM_SAMPLE__READ                                        0x8000ffffU
#define PDM_PCM_SAMPLE__PRESERVED                                   0x00000000U
#define PDM_PCM_SAMPLE__RESET_VALUE                                 0x00000000U

#endif /* __PDM_PCM_SAMPLE_MACRO__ */

/** @} end of pcm_sample */

/* macros for BlueprintGlobalNameSpace::PDM_fifo_debug */
/**
 * @defgroup at_apb_pdm_regs_core_fifo_debug fifo_debug
 * @brief FIFO debug register definitions.
 * @{
 */
#ifndef __PDM_FIFO_DEBUG_MACRO__
#define __PDM_FIFO_DEBUG_MACRO__

/* macros for field status */
/**
 * @defgroup at_apb_pdm_regs_core_status_field status_field
 * @brief macros for field status
 * @details {overrun, underrun, full, empty, 4'd0, rdaddr(unsigned int; 4b), wraddr(unsigned int; 4b)}
 * @{
 */
#define PDM_FIFO_DEBUG__STATUS__SHIFT                                         0
#define PDM_FIFO_DEBUG__STATUS__WIDTH                                        16
#define PDM_FIFO_DEBUG__STATUS__MASK                                0x0000ffffU
#define PDM_FIFO_DEBUG__STATUS__READ(src)       ((uint32_t)(src) & 0x0000ffffU)
#define PDM_FIFO_DEBUG__STATUS__RESET_VALUE                         0x00000000U
/** @} */
#define PDM_FIFO_DEBUG__TYPE                                           uint32_t
#define PDM_FIFO_DEBUG__READ                                        0x0000ffffU
#define PDM_FIFO_DEBUG__PRESERVED                                   0x00000000U
#define PDM_FIFO_DEBUG__RESET_VALUE                                 0x00000000U

#endif /* __PDM_FIFO_DEBUG_MACRO__ */

/** @} end of fifo_debug */

/* macros for BlueprintGlobalNameSpace::PDM_interrupts */
/**
 * @defgroup at_apb_pdm_regs_core_interrupts interrupts
 * @brief interrupt status definitions.
 * @{
 */
#ifndef __PDM_INTERRUPTS_MACRO__
#define __PDM_INTERRUPTS_MACRO__

/* macros for field intrpt0 */
/**
 * @defgroup at_apb_pdm_regs_core_intrpt0_field intrpt0_field
 * @brief macros for field intrpt0
 * @details hardware wrote to fifo
 * @{
 */
#define PDM_INTERRUPTS__INTRPT0__SHIFT                                        0
#define PDM_INTERRUPTS__INTRPT0__WIDTH                                        1
#define PDM_INTERRUPTS__INTRPT0__MASK                               0x00000001U
#define PDM_INTERRUPTS__INTRPT0__READ(src)      ((uint32_t)(src) & 0x00000001U)
#define PDM_INTERRUPTS__INTRPT0__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define PDM_INTERRUPTS__INTRPT0__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define PDM_INTERRUPTS__INTRPT0__RESET_VALUE                        0x00000000U
/** @} */

/* macros for field intrpt1 */
/**
 * @defgroup at_apb_pdm_regs_core_intrpt1_field intrpt1_field
 * @brief macros for field intrpt1
 * @details fifo overran
 * @{
 */
#define PDM_INTERRUPTS__INTRPT1__SHIFT                                        1
#define PDM_INTERRUPTS__INTRPT1__WIDTH                                        1
#define PDM_INTERRUPTS__INTRPT1__MASK                               0x00000002U
#define PDM_INTERRUPTS__INTRPT1__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define PDM_INTERRUPTS__INTRPT1__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define PDM_INTERRUPTS__INTRPT1__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define PDM_INTERRUPTS__INTRPT1__RESET_VALUE                        0x00000000U
/** @} */

/* macros for field intrpt2 */
/**
 * @defgroup at_apb_pdm_regs_core_intrpt2_field intrpt2_field
 * @brief macros for field intrpt2
 * @details ping pong buffer A is locked and needs to be emptied
 * @{
 */
#define PDM_INTERRUPTS__INTRPT2__SHIFT                                        2
#define PDM_INTERRUPTS__INTRPT2__WIDTH                                        1
#define PDM_INTERRUPTS__INTRPT2__MASK                               0x00000004U
#define PDM_INTERRUPTS__INTRPT2__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000004U) >> 2)
#define PDM_INTERRUPTS__INTRPT2__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(1) << 2)
#define PDM_INTERRUPTS__INTRPT2__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(0) << 2)
#define PDM_INTERRUPTS__INTRPT2__RESET_VALUE                        0x00000000U
/** @} */

/* macros for field intrpt3 */
/**
 * @defgroup at_apb_pdm_regs_core_intrpt3_field intrpt3_field
 * @brief macros for field intrpt3
 * @details ping pong buffer B is locked and needs to be emptied
 * @{
 */
#define PDM_INTERRUPTS__INTRPT3__SHIFT                                        3
#define PDM_INTERRUPTS__INTRPT3__WIDTH                                        1
#define PDM_INTERRUPTS__INTRPT3__MASK                               0x00000008U
#define PDM_INTERRUPTS__INTRPT3__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000008U) >> 3)
#define PDM_INTERRUPTS__INTRPT3__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((uint32_t)(1) << 3)
#define PDM_INTERRUPTS__INTRPT3__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((uint32_t)(0) << 3)
#define PDM_INTERRUPTS__INTRPT3__RESET_VALUE                        0x00000000U
/** @} */

/* macros for field intrpt4 */
/**
 * @defgroup at_apb_pdm_regs_core_intrpt4_field intrpt4_field
 * @brief macros for field intrpt4
 * @details error in buffer A; hw wants to write to buffer but lock hasn't been released by sw
 * @{
 */
#define PDM_INTERRUPTS__INTRPT4__SHIFT                                        4
#define PDM_INTERRUPTS__INTRPT4__WIDTH                                        1
#define PDM_INTERRUPTS__INTRPT4__MASK                               0x00000010U
#define PDM_INTERRUPTS__INTRPT4__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000010U) >> 4)
#define PDM_INTERRUPTS__INTRPT4__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(1) << 4)
#define PDM_INTERRUPTS__INTRPT4__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(0) << 4)
#define PDM_INTERRUPTS__INTRPT4__RESET_VALUE                        0x00000000U
/** @} */

/* macros for field intrpt5 */
/**
 * @defgroup at_apb_pdm_regs_core_intrpt5_field intrpt5_field
 * @brief macros for field intrpt5
 * @details error in buffer B; hw wants to write to buffer but lock hasn't been released by sw
 * @{
 */
#define PDM_INTERRUPTS__INTRPT5__SHIFT                                        5
#define PDM_INTERRUPTS__INTRPT5__WIDTH                                        1
#define PDM_INTERRUPTS__INTRPT5__MASK                               0x00000020U
#define PDM_INTERRUPTS__INTRPT5__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000020U) >> 5)
#define PDM_INTERRUPTS__INTRPT5__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | ((uint32_t)(1) << 5)
#define PDM_INTERRUPTS__INTRPT5__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | ((uint32_t)(0) << 5)
#define PDM_INTERRUPTS__INTRPT5__RESET_VALUE                        0x00000000U
/** @} */
#define PDM_INTERRUPTS__TYPE                                           uint32_t
#define PDM_INTERRUPTS__READ                                        0x0000003fU
#define PDM_INTERRUPTS__PRESERVED                                   0x00000000U
#define PDM_INTERRUPTS__RESET_VALUE                                 0x00000000U

#endif /* __PDM_INTERRUPTS_MACRO__ */

/** @} end of interrupts */

/* macros for BlueprintGlobalNameSpace::PDM_interrupt_mask */
/**
 * @defgroup at_apb_pdm_regs_core_interrupt_mask interrupt_mask
 * @brief interrupt mask definitions.
 * @{
 */
#ifndef __PDM_INTERRUPT_MASK_MACRO__
#define __PDM_INTERRUPT_MASK_MACRO__

/* macros for field mask_intrpt0 */
/**
 * @defgroup at_apb_pdm_regs_core_mask_intrpt0_field mask_intrpt0_field
 * @brief macros for field mask_intrpt0
 * @details allow intrpt0 to propogate to core's single output interrupt
 * @{
 */
#define PDM_INTERRUPT_MASK__MASK_INTRPT0__SHIFT                               0
#define PDM_INTERRUPT_MASK__MASK_INTRPT0__WIDTH                               1
#define PDM_INTERRUPT_MASK__MASK_INTRPT0__MASK                      0x00000001U
#define PDM_INTERRUPT_MASK__MASK_INTRPT0__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define PDM_INTERRUPT_MASK__MASK_INTRPT0__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define PDM_INTERRUPT_MASK__MASK_INTRPT0__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define PDM_INTERRUPT_MASK__MASK_INTRPT0__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define PDM_INTERRUPT_MASK__MASK_INTRPT0__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define PDM_INTERRUPT_MASK__MASK_INTRPT0__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define PDM_INTERRUPT_MASK__MASK_INTRPT0__RESET_VALUE               0x00000001U
/** @} */

/* macros for field mask_intrpt1 */
/**
 * @defgroup at_apb_pdm_regs_core_mask_intrpt1_field mask_intrpt1_field
 * @brief macros for field mask_intrpt1
 * @details allow intrpt1 to propogate to core's single output interrupt
 * @{
 */
#define PDM_INTERRUPT_MASK__MASK_INTRPT1__SHIFT                               1
#define PDM_INTERRUPT_MASK__MASK_INTRPT1__WIDTH                               1
#define PDM_INTERRUPT_MASK__MASK_INTRPT1__MASK                      0x00000002U
#define PDM_INTERRUPT_MASK__MASK_INTRPT1__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define PDM_INTERRUPT_MASK__MASK_INTRPT1__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define PDM_INTERRUPT_MASK__MASK_INTRPT1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define PDM_INTERRUPT_MASK__MASK_INTRPT1__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define PDM_INTERRUPT_MASK__MASK_INTRPT1__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define PDM_INTERRUPT_MASK__MASK_INTRPT1__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define PDM_INTERRUPT_MASK__MASK_INTRPT1__RESET_VALUE               0x00000001U
/** @} */

/* macros for field mask_intrpt2 */
/**
 * @defgroup at_apb_pdm_regs_core_mask_intrpt2_field mask_intrpt2_field
 * @brief macros for field mask_intrpt2
 * @details allow intrpt2 to propogate to core's single output interrupt
 * @{
 */
#define PDM_INTERRUPT_MASK__MASK_INTRPT2__SHIFT                               2
#define PDM_INTERRUPT_MASK__MASK_INTRPT2__WIDTH                               1
#define PDM_INTERRUPT_MASK__MASK_INTRPT2__MASK                      0x00000004U
#define PDM_INTERRUPT_MASK__MASK_INTRPT2__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000004U) >> 2)
#define PDM_INTERRUPT_MASK__MASK_INTRPT2__WRITE(src) \
                    (((uint32_t)(src)\
                    << 2) & 0x00000004U)
#define PDM_INTERRUPT_MASK__MASK_INTRPT2__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | (((uint32_t)(src) <<\
                    2) & 0x00000004U)
#define PDM_INTERRUPT_MASK__MASK_INTRPT2__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 2) & ~0x00000004U)))
#define PDM_INTERRUPT_MASK__MASK_INTRPT2__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(1) << 2)
#define PDM_INTERRUPT_MASK__MASK_INTRPT2__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(0) << 2)
#define PDM_INTERRUPT_MASK__MASK_INTRPT2__RESET_VALUE               0x00000001U
/** @} */

/* macros for field mask_intrpt3 */
/**
 * @defgroup at_apb_pdm_regs_core_mask_intrpt3_field mask_intrpt3_field
 * @brief macros for field mask_intrpt3
 * @details allow intrpt3 to propogate to core's single output interrupt
 * @{
 */
#define PDM_INTERRUPT_MASK__MASK_INTRPT3__SHIFT                               3
#define PDM_INTERRUPT_MASK__MASK_INTRPT3__WIDTH                               1
#define PDM_INTERRUPT_MASK__MASK_INTRPT3__MASK                      0x00000008U
#define PDM_INTERRUPT_MASK__MASK_INTRPT3__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000008U) >> 3)
#define PDM_INTERRUPT_MASK__MASK_INTRPT3__WRITE(src) \
                    (((uint32_t)(src)\
                    << 3) & 0x00000008U)
#define PDM_INTERRUPT_MASK__MASK_INTRPT3__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | (((uint32_t)(src) <<\
                    3) & 0x00000008U)
#define PDM_INTERRUPT_MASK__MASK_INTRPT3__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 3) & ~0x00000008U)))
#define PDM_INTERRUPT_MASK__MASK_INTRPT3__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((uint32_t)(1) << 3)
#define PDM_INTERRUPT_MASK__MASK_INTRPT3__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((uint32_t)(0) << 3)
#define PDM_INTERRUPT_MASK__MASK_INTRPT3__RESET_VALUE               0x00000001U
/** @} */

/* macros for field mask_intrpt4 */
/**
 * @defgroup at_apb_pdm_regs_core_mask_intrpt4_field mask_intrpt4_field
 * @brief macros for field mask_intrpt4
 * @details allow intrpt4 to propogate to core's single output interrupt
 * @{
 */
#define PDM_INTERRUPT_MASK__MASK_INTRPT4__SHIFT                               4
#define PDM_INTERRUPT_MASK__MASK_INTRPT4__WIDTH                               1
#define PDM_INTERRUPT_MASK__MASK_INTRPT4__MASK                      0x00000010U
#define PDM_INTERRUPT_MASK__MASK_INTRPT4__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000010U) >> 4)
#define PDM_INTERRUPT_MASK__MASK_INTRPT4__WRITE(src) \
                    (((uint32_t)(src)\
                    << 4) & 0x00000010U)
#define PDM_INTERRUPT_MASK__MASK_INTRPT4__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | (((uint32_t)(src) <<\
                    4) & 0x00000010U)
#define PDM_INTERRUPT_MASK__MASK_INTRPT4__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 4) & ~0x00000010U)))
#define PDM_INTERRUPT_MASK__MASK_INTRPT4__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(1) << 4)
#define PDM_INTERRUPT_MASK__MASK_INTRPT4__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(0) << 4)
#define PDM_INTERRUPT_MASK__MASK_INTRPT4__RESET_VALUE               0x00000001U
/** @} */

/* macros for field mask_intrpt5 */
/**
 * @defgroup at_apb_pdm_regs_core_mask_intrpt5_field mask_intrpt5_field
 * @brief macros for field mask_intrpt5
 * @details allow intrpt5 to propogate to core's single output interrupt
 * @{
 */
#define PDM_INTERRUPT_MASK__MASK_INTRPT5__SHIFT                               5
#define PDM_INTERRUPT_MASK__MASK_INTRPT5__WIDTH                               1
#define PDM_INTERRUPT_MASK__MASK_INTRPT5__MASK                      0x00000020U
#define PDM_INTERRUPT_MASK__MASK_INTRPT5__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000020U) >> 5)
#define PDM_INTERRUPT_MASK__MASK_INTRPT5__WRITE(src) \
                    (((uint32_t)(src)\
                    << 5) & 0x00000020U)
#define PDM_INTERRUPT_MASK__MASK_INTRPT5__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | (((uint32_t)(src) <<\
                    5) & 0x00000020U)
#define PDM_INTERRUPT_MASK__MASK_INTRPT5__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 5) & ~0x00000020U)))
#define PDM_INTERRUPT_MASK__MASK_INTRPT5__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | ((uint32_t)(1) << 5)
#define PDM_INTERRUPT_MASK__MASK_INTRPT5__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | ((uint32_t)(0) << 5)
#define PDM_INTERRUPT_MASK__MASK_INTRPT5__RESET_VALUE               0x00000001U
/** @} */
#define PDM_INTERRUPT_MASK__TYPE                                       uint32_t
#define PDM_INTERRUPT_MASK__READ                                    0x0000003fU
#define PDM_INTERRUPT_MASK__WRITE                                   0x0000003fU
#define PDM_INTERRUPT_MASK__PRESERVED                               0x00000000U
#define PDM_INTERRUPT_MASK__RESET_VALUE                             0x0000003fU

#endif /* __PDM_INTERRUPT_MASK_MACRO__ */

/** @} end of interrupt_mask */

/* macros for BlueprintGlobalNameSpace::PDM_interrupt_clear */
/**
 * @defgroup at_apb_pdm_regs_core_interrupt_clear interrupt_clear
 * @brief interrupt clear definitions.
 * @{
 */
#ifndef __PDM_INTERRUPT_CLEAR_MACRO__
#define __PDM_INTERRUPT_CLEAR_MACRO__

/* macros for field clear_intrpt0 */
/**
 * @defgroup at_apb_pdm_regs_core_clear_intrpt0_field clear_intrpt0_field
 * @brief macros for field clear_intrpt0
 * @details clear interrupt 0; not self reseting
 * @{
 */
#define PDM_INTERRUPT_CLEAR__CLEAR_INTRPT0__SHIFT                             0
#define PDM_INTERRUPT_CLEAR__CLEAR_INTRPT0__WIDTH                             1
#define PDM_INTERRUPT_CLEAR__CLEAR_INTRPT0__MASK                    0x00000001U
#define PDM_INTERRUPT_CLEAR__CLEAR_INTRPT0__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define PDM_INTERRUPT_CLEAR__CLEAR_INTRPT0__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define PDM_INTERRUPT_CLEAR__CLEAR_INTRPT0__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define PDM_INTERRUPT_CLEAR__CLEAR_INTRPT0__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define PDM_INTERRUPT_CLEAR__CLEAR_INTRPT0__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define PDM_INTERRUPT_CLEAR__CLEAR_INTRPT0__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define PDM_INTERRUPT_CLEAR__CLEAR_INTRPT0__RESET_VALUE             0x00000000U
/** @} */

/* macros for field clear_intrpt1 */
/**
 * @defgroup at_apb_pdm_regs_core_clear_intrpt1_field clear_intrpt1_field
 * @brief macros for field clear_intrpt1
 * @details clear interrupt 1; not self reseting
 * @{
 */
#define PDM_INTERRUPT_CLEAR__CLEAR_INTRPT1__SHIFT                             1
#define PDM_INTERRUPT_CLEAR__CLEAR_INTRPT1__WIDTH                             1
#define PDM_INTERRUPT_CLEAR__CLEAR_INTRPT1__MASK                    0x00000002U
#define PDM_INTERRUPT_CLEAR__CLEAR_INTRPT1__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define PDM_INTERRUPT_CLEAR__CLEAR_INTRPT1__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define PDM_INTERRUPT_CLEAR__CLEAR_INTRPT1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define PDM_INTERRUPT_CLEAR__CLEAR_INTRPT1__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define PDM_INTERRUPT_CLEAR__CLEAR_INTRPT1__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define PDM_INTERRUPT_CLEAR__CLEAR_INTRPT1__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define PDM_INTERRUPT_CLEAR__CLEAR_INTRPT1__RESET_VALUE             0x00000000U
/** @} */

/* macros for field clear_intrpt2 */
/**
 * @defgroup at_apb_pdm_regs_core_clear_intrpt2_field clear_intrpt2_field
 * @brief macros for field clear_intrpt2
 * @details clear interrupt 2; not self reseting
 * @{
 */
#define PDM_INTERRUPT_CLEAR__CLEAR_INTRPT2__SHIFT                             2
#define PDM_INTERRUPT_CLEAR__CLEAR_INTRPT2__WIDTH                             1
#define PDM_INTERRUPT_CLEAR__CLEAR_INTRPT2__MASK                    0x00000004U
#define PDM_INTERRUPT_CLEAR__CLEAR_INTRPT2__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000004U) >> 2)
#define PDM_INTERRUPT_CLEAR__CLEAR_INTRPT2__WRITE(src) \
                    (((uint32_t)(src)\
                    << 2) & 0x00000004U)
#define PDM_INTERRUPT_CLEAR__CLEAR_INTRPT2__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | (((uint32_t)(src) <<\
                    2) & 0x00000004U)
#define PDM_INTERRUPT_CLEAR__CLEAR_INTRPT2__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 2) & ~0x00000004U)))
#define PDM_INTERRUPT_CLEAR__CLEAR_INTRPT2__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(1) << 2)
#define PDM_INTERRUPT_CLEAR__CLEAR_INTRPT2__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(0) << 2)
#define PDM_INTERRUPT_CLEAR__CLEAR_INTRPT2__RESET_VALUE             0x00000000U
/** @} */

/* macros for field clear_intrpt3 */
/**
 * @defgroup at_apb_pdm_regs_core_clear_intrpt3_field clear_intrpt3_field
 * @brief macros for field clear_intrpt3
 * @details clear interrupt 3; not self reseting
 * @{
 */
#define PDM_INTERRUPT_CLEAR__CLEAR_INTRPT3__SHIFT                             3
#define PDM_INTERRUPT_CLEAR__CLEAR_INTRPT3__WIDTH                             1
#define PDM_INTERRUPT_CLEAR__CLEAR_INTRPT3__MASK                    0x00000008U
#define PDM_INTERRUPT_CLEAR__CLEAR_INTRPT3__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000008U) >> 3)
#define PDM_INTERRUPT_CLEAR__CLEAR_INTRPT3__WRITE(src) \
                    (((uint32_t)(src)\
                    << 3) & 0x00000008U)
#define PDM_INTERRUPT_CLEAR__CLEAR_INTRPT3__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | (((uint32_t)(src) <<\
                    3) & 0x00000008U)
#define PDM_INTERRUPT_CLEAR__CLEAR_INTRPT3__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 3) & ~0x00000008U)))
#define PDM_INTERRUPT_CLEAR__CLEAR_INTRPT3__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((uint32_t)(1) << 3)
#define PDM_INTERRUPT_CLEAR__CLEAR_INTRPT3__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((uint32_t)(0) << 3)
#define PDM_INTERRUPT_CLEAR__CLEAR_INTRPT3__RESET_VALUE             0x00000000U
/** @} */

/* macros for field clear_intrpt4 */
/**
 * @defgroup at_apb_pdm_regs_core_clear_intrpt4_field clear_intrpt4_field
 * @brief macros for field clear_intrpt4
 * @details clear interrupt 4; not self reseting
 * @{
 */
#define PDM_INTERRUPT_CLEAR__CLEAR_INTRPT4__SHIFT                             4
#define PDM_INTERRUPT_CLEAR__CLEAR_INTRPT4__WIDTH                             1
#define PDM_INTERRUPT_CLEAR__CLEAR_INTRPT4__MASK                    0x00000010U
#define PDM_INTERRUPT_CLEAR__CLEAR_INTRPT4__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000010U) >> 4)
#define PDM_INTERRUPT_CLEAR__CLEAR_INTRPT4__WRITE(src) \
                    (((uint32_t)(src)\
                    << 4) & 0x00000010U)
#define PDM_INTERRUPT_CLEAR__CLEAR_INTRPT4__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | (((uint32_t)(src) <<\
                    4) & 0x00000010U)
#define PDM_INTERRUPT_CLEAR__CLEAR_INTRPT4__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 4) & ~0x00000010U)))
#define PDM_INTERRUPT_CLEAR__CLEAR_INTRPT4__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(1) << 4)
#define PDM_INTERRUPT_CLEAR__CLEAR_INTRPT4__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(0) << 4)
#define PDM_INTERRUPT_CLEAR__CLEAR_INTRPT4__RESET_VALUE             0x00000000U
/** @} */

/* macros for field clear_intrpt5 */
/**
 * @defgroup at_apb_pdm_regs_core_clear_intrpt5_field clear_intrpt5_field
 * @brief macros for field clear_intrpt5
 * @details clear interrupt 5; not self reseting
 * @{
 */
#define PDM_INTERRUPT_CLEAR__CLEAR_INTRPT5__SHIFT                             5
#define PDM_INTERRUPT_CLEAR__CLEAR_INTRPT5__WIDTH                             1
#define PDM_INTERRUPT_CLEAR__CLEAR_INTRPT5__MASK                    0x00000020U
#define PDM_INTERRUPT_CLEAR__CLEAR_INTRPT5__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000020U) >> 5)
#define PDM_INTERRUPT_CLEAR__CLEAR_INTRPT5__WRITE(src) \
                    (((uint32_t)(src)\
                    << 5) & 0x00000020U)
#define PDM_INTERRUPT_CLEAR__CLEAR_INTRPT5__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | (((uint32_t)(src) <<\
                    5) & 0x00000020U)
#define PDM_INTERRUPT_CLEAR__CLEAR_INTRPT5__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 5) & ~0x00000020U)))
#define PDM_INTERRUPT_CLEAR__CLEAR_INTRPT5__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | ((uint32_t)(1) << 5)
#define PDM_INTERRUPT_CLEAR__CLEAR_INTRPT5__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | ((uint32_t)(0) << 5)
#define PDM_INTERRUPT_CLEAR__CLEAR_INTRPT5__RESET_VALUE             0x00000000U
/** @} */
#define PDM_INTERRUPT_CLEAR__TYPE                                      uint32_t
#define PDM_INTERRUPT_CLEAR__READ                                   0x0000003fU
#define PDM_INTERRUPT_CLEAR__WRITE                                  0x0000003fU
#define PDM_INTERRUPT_CLEAR__PRESERVED                              0x00000000U
#define PDM_INTERRUPT_CLEAR__RESET_VALUE                            0x00000000U

#endif /* __PDM_INTERRUPT_CLEAR_MACRO__ */

/** @} end of interrupt_clear */

/* macros for BlueprintGlobalNameSpace::PDM_core_id */
/**
 * @defgroup at_apb_pdm_regs_core_core_id core_id
 * @brief core id definitions.
 * @{
 */
#ifndef __PDM_CORE_ID_MACRO__
#define __PDM_CORE_ID_MACRO__

/* macros for field id */
/**
 * @defgroup at_apb_pdm_regs_core_id_field id_field
 * @brief macros for field id
 * @details 'PDM ' in ASCII
 * @{
 */
#define PDM_CORE_ID__ID__SHIFT                                                0
#define PDM_CORE_ID__ID__WIDTH                                               32
#define PDM_CORE_ID__ID__MASK                                       0xffffffffU
#define PDM_CORE_ID__ID__READ(src)              ((uint32_t)(src) & 0xffffffffU)
#define PDM_CORE_ID__ID__RESET_VALUE                                0x50444d20U
/** @} */
#define PDM_CORE_ID__TYPE                                              uint32_t
#define PDM_CORE_ID__READ                                           0xffffffffU
#define PDM_CORE_ID__PRESERVED                                      0x00000000U
#define PDM_CORE_ID__RESET_VALUE                                    0x50444d20U

#endif /* __PDM_CORE_ID_MACRO__ */

/** @} end of core_id */

/** @} end of AT_APB_PDM_REGS_CORE */
#endif /* __REG_AT_APB_PDM_REGS_CORE_H__ */
