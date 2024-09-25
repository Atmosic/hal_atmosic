/*                                                                           */
/* File:       at_apb_gadc_regs_core_macro.h                                 */
/*                                                                           */
/* Arguments:  /cad/tools/cadence/blueprint_3.7.5/Linux-64bit/blueprint -eval*/
/*             $DEFINE_PROPERTY=1; -ansic at_apb_gadc_regs_core.rdl          */
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


#ifndef __REG_AT_APB_GADC_REGS_CORE_H__
#define __REG_AT_APB_GADC_REGS_CORE_H__

/**
 *****************************************************************************
 * @defgroup AT_APB_GADC_REGS_CORE at_apb_gadc_regs_core
 * @ingroup AT_REG
 * @brief at_apb_gadc_regs_core definitions.
 * @{
 *****************************************************************************
 */

/* macros for BlueprintGlobalNameSpace::DGADC_ctrl */
/**
 * @defgroup at_apb_gadc_regs_core_ctrl ctrl
 * @brief control signals definitions.
 * @{
 */
#ifndef __DGADC_CTRL_MACRO__
#define __DGADC_CTRL_MACRO__

/* macros for field enable_dp */
/**
 * @defgroup at_apb_gadc_regs_core_enable_dp_field enable_dp_field
 * @brief macros for field enable_dp
 * @details Enables digital datapath.
 * @{
 */
#define DGADC_CTRL__ENABLE_DP__SHIFT                                          0
#define DGADC_CTRL__ENABLE_DP__WIDTH                                          1
#define DGADC_CTRL__ENABLE_DP__MASK                                 0x00000001U
#define DGADC_CTRL__ENABLE_DP__READ(src)        ((uint32_t)(src) & 0x00000001U)
#define DGADC_CTRL__ENABLE_DP__WRITE(src)       ((uint32_t)(src) & 0x00000001U)
#define DGADC_CTRL__ENABLE_DP__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define DGADC_CTRL__ENABLE_DP__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define DGADC_CTRL__ENABLE_DP__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define DGADC_CTRL__ENABLE_DP__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define DGADC_CTRL__ENABLE_DP__RESET_VALUE                          0x00000000U
/** @} */

/* macros for field wait_amount */
/**
 * @defgroup at_apb_gadc_regs_core_wait_amount_field wait_amount_field
 * @brief macros for field wait_amount
 * @details Specifies how long to wait between round robin cycles in clk_mpc cycles.
 * @{
 */
#define DGADC_CTRL__WAIT_AMOUNT__SHIFT                                        1
#define DGADC_CTRL__WAIT_AMOUNT__WIDTH                                       10
#define DGADC_CTRL__WAIT_AMOUNT__MASK                               0x000007feU
#define DGADC_CTRL__WAIT_AMOUNT__READ(src) \
                    (((uint32_t)(src)\
                    & 0x000007feU) >> 1)
#define DGADC_CTRL__WAIT_AMOUNT__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x000007feU)
#define DGADC_CTRL__WAIT_AMOUNT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000007feU) | (((uint32_t)(src) <<\
                    1) & 0x000007feU)
#define DGADC_CTRL__WAIT_AMOUNT__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x000007feU)))
#define DGADC_CTRL__WAIT_AMOUNT__RESET_VALUE                        0x0000001eU
/** @} */

/* macros for field warmup */
/**
 * @defgroup at_apb_gadc_regs_core_warmup_field warmup_field
 * @brief macros for field warmup
 * @details Do 8 clocks cycle of warmup at beginning of round. No data sampled during this period.
 * @{
 */
#define DGADC_CTRL__WARMUP__SHIFT                                            11
#define DGADC_CTRL__WARMUP__WIDTH                                             1
#define DGADC_CTRL__WARMUP__MASK                                    0x00000800U
#define DGADC_CTRL__WARMUP__READ(src)   (((uint32_t)(src) & 0x00000800U) >> 11)
#define DGADC_CTRL__WARMUP__WRITE(src)  (((uint32_t)(src) << 11) & 0x00000800U)
#define DGADC_CTRL__WARMUP__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000800U) | (((uint32_t)(src) <<\
                    11) & 0x00000800U)
#define DGADC_CTRL__WARMUP__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 11) & ~0x00000800U)))
#define DGADC_CTRL__WARMUP__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000800U) | ((uint32_t)(1) << 11)
#define DGADC_CTRL__WARMUP__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000800U) | ((uint32_t)(0) << 11)
#define DGADC_CTRL__WARMUP__RESET_VALUE                             0x00000000U
/** @} */

/* macros for field mode */
/**
 * @defgroup at_apb_gadc_regs_core_mode_field mode_field
 * @brief macros for field mode
 * @details What is the mode of operation?  0 = round robin  1 = one-shot
 * @{
 */
#define DGADC_CTRL__MODE__SHIFT                                              12
#define DGADC_CTRL__MODE__WIDTH                                               1
#define DGADC_CTRL__MODE__MASK                                      0x00001000U
#define DGADC_CTRL__MODE__READ(src)     (((uint32_t)(src) & 0x00001000U) >> 12)
#define DGADC_CTRL__MODE__WRITE(src)    (((uint32_t)(src) << 12) & 0x00001000U)
#define DGADC_CTRL__MODE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00001000U) | (((uint32_t)(src) <<\
                    12) & 0x00001000U)
#define DGADC_CTRL__MODE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 12) & ~0x00001000U)))
#define DGADC_CTRL__MODE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00001000U) | ((uint32_t)(1) << 12)
#define DGADC_CTRL__MODE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00001000U) | ((uint32_t)(0) << 12)
#define DGADC_CTRL__MODE__RESET_VALUE                               0x00000000U
/** @} */

/* macros for field averaging_amount */
/**
 * @defgroup at_apb_gadc_regs_core_averaging_amount_field averaging_amount_field
 * @brief macros for field averaging_amount
 * @details average 2^averaging_amount samples
 * @{
 */
#define DGADC_CTRL__AVERAGING_AMOUNT__SHIFT                                  13
#define DGADC_CTRL__AVERAGING_AMOUNT__WIDTH                                   3
#define DGADC_CTRL__AVERAGING_AMOUNT__MASK                          0x0000e000U
#define DGADC_CTRL__AVERAGING_AMOUNT__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000e000U) >> 13)
#define DGADC_CTRL__AVERAGING_AMOUNT__WRITE(src) \
                    (((uint32_t)(src)\
                    << 13) & 0x0000e000U)
#define DGADC_CTRL__AVERAGING_AMOUNT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000e000U) | (((uint32_t)(src) <<\
                    13) & 0x0000e000U)
#define DGADC_CTRL__AVERAGING_AMOUNT__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 13) & ~0x0000e000U)))
#define DGADC_CTRL__AVERAGING_AMOUNT__RESET_VALUE                   0x00000003U
/** @} */

/* macros for field watch_channels */
/**
 * @defgroup at_apb_gadc_regs_core_watch_channels_field watch_channels_field
 * @brief macros for field watch_channels
 * @details Which channels are active?  0 = Vbatt  1 = Vstor  2 = core supply  3 = temperature  4 = external port 0; differential  6 = external port 0; single ended  7 = external port 0; single ended  9 = external port 1; single ended
 * @{
 */
#define DGADC_CTRL__WATCH_CHANNELS__SHIFT                                    16
#define DGADC_CTRL__WATCH_CHANNELS__WIDTH                                    16
#define DGADC_CTRL__WATCH_CHANNELS__MASK                            0xffff0000U
#define DGADC_CTRL__WATCH_CHANNELS__READ(src) \
                    (((uint32_t)(src)\
                    & 0xffff0000U) >> 16)
#define DGADC_CTRL__WATCH_CHANNELS__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0xffff0000U)
#define DGADC_CTRL__WATCH_CHANNELS__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffff0000U) | (((uint32_t)(src) <<\
                    16) & 0xffff0000U)
#define DGADC_CTRL__WATCH_CHANNELS__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0xffff0000U)))
#define DGADC_CTRL__WATCH_CHANNELS__RESET_VALUE                     0x00000000U
/** @} */
#define DGADC_CTRL__TYPE                                               uint32_t
#define DGADC_CTRL__READ                                            0xffffffffU
#define DGADC_CTRL__WRITE                                           0xffffffffU
#define DGADC_CTRL__PRESERVED                                       0x00000000U
#define DGADC_CTRL__RESET_VALUE                                     0x0000603cU

#endif /* __DGADC_CTRL_MACRO__ */

/** @} end of ctrl */

/* macros for BlueprintGlobalNameSpace::DGADC_datapath_parameters */
/**
 * @defgroup at_apb_gadc_regs_core_datapath_parameters datapath_parameters
 * @brief offset and gain definitions.
 * @{
 */
#ifndef __DGADC_DATAPATH_PARAMETERS_MACRO__
#define __DGADC_DATAPATH_PARAMETERS_MACRO__

/* macros for field gain */
/**
 * @defgroup at_apb_gadc_regs_core_gain_field gain_field
 * @brief macros for field gain
 * @details U<1,13>
 * @{
 */
#define DGADC_DATAPATH_PARAMETERS__GAIN__SHIFT                                0
#define DGADC_DATAPATH_PARAMETERS__GAIN__WIDTH                               14
#define DGADC_DATAPATH_PARAMETERS__GAIN__MASK                       0x00003fffU
#define DGADC_DATAPATH_PARAMETERS__GAIN__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00003fffU)
#define DGADC_DATAPATH_PARAMETERS__GAIN__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00003fffU)
#define DGADC_DATAPATH_PARAMETERS__GAIN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00003fffU) | ((uint32_t)(src) &\
                    0x00003fffU)
#define DGADC_DATAPATH_PARAMETERS__GAIN__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00003fffU)))
#define DGADC_DATAPATH_PARAMETERS__GAIN__RESET_VALUE                0x00002000U
/** @} */

/* macros for field offset */
/**
 * @defgroup at_apb_gadc_regs_core_offset_field offset_field
 * @brief macros for field offset
 * @details Q<9,4>
 * @{
 */
#define DGADC_DATAPATH_PARAMETERS__OFFSET__SHIFT                             16
#define DGADC_DATAPATH_PARAMETERS__OFFSET__WIDTH                             14
#define DGADC_DATAPATH_PARAMETERS__OFFSET__MASK                     0x3fff0000U
#define DGADC_DATAPATH_PARAMETERS__OFFSET__READ(src) \
                    (((uint32_t)(src)\
                    & 0x3fff0000U) >> 16)
#define DGADC_DATAPATH_PARAMETERS__OFFSET__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x3fff0000U)
#define DGADC_DATAPATH_PARAMETERS__OFFSET__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x3fff0000U) | (((uint32_t)(src) <<\
                    16) & 0x3fff0000U)
#define DGADC_DATAPATH_PARAMETERS__OFFSET__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x3fff0000U)))
#define DGADC_DATAPATH_PARAMETERS__OFFSET__RESET_VALUE              0x00000000U
/** @} */
#define DGADC_DATAPATH_PARAMETERS__TYPE                                uint32_t
#define DGADC_DATAPATH_PARAMETERS__READ                             0x3fff3fffU
#define DGADC_DATAPATH_PARAMETERS__WRITE                            0x3fff3fffU
#define DGADC_DATAPATH_PARAMETERS__PRESERVED                        0x00000000U
#define DGADC_DATAPATH_PARAMETERS__RESET_VALUE                      0x00002000U

#endif /* __DGADC_DATAPATH_PARAMETERS_MACRO__ */

/** @} end of datapath_parameters */

/* macros for BlueprintGlobalNameSpace::DGADC_datapath_output */
/**
 * @defgroup at_apb_gadc_regs_core_datapath_output datapath_output
 * @brief a read of this register pops the data FIFO definitions.
 * @{
 */
#ifndef __DGADC_DATAPATH_OUTPUT_MACRO__
#define __DGADC_DATAPATH_OUTPUT_MACRO__

/* macros for field data */
/**
 * @defgroup at_apb_gadc_regs_core_data_field data_field
 * @brief macros for field data
 * @details {4b for the channel, 12b for the processed ADC sample Q<9,2>}
 * @{
 */
#define DGADC_DATAPATH_OUTPUT__DATA__SHIFT                                    0
#define DGADC_DATAPATH_OUTPUT__DATA__WIDTH                                   16
#define DGADC_DATAPATH_OUTPUT__DATA__MASK                           0x0000ffffU
#define DGADC_DATAPATH_OUTPUT__DATA__READ(src)  ((uint32_t)(src) & 0x0000ffffU)
#define DGADC_DATAPATH_OUTPUT__DATA__RESET_VALUE                    0x00000000U
/** @} */

/* macros for field empty */
/**
 * @defgroup at_apb_gadc_regs_core_empty_field empty_field
 * @brief macros for field empty
 * @details if 1, ignore data sample because fifo has been drained
 * @{
 */
#define DGADC_DATAPATH_OUTPUT__EMPTY__SHIFT                                  31
#define DGADC_DATAPATH_OUTPUT__EMPTY__WIDTH                                   1
#define DGADC_DATAPATH_OUTPUT__EMPTY__MASK                          0x80000000U
#define DGADC_DATAPATH_OUTPUT__EMPTY__READ(src) \
                    (((uint32_t)(src)\
                    & 0x80000000U) >> 31)
#define DGADC_DATAPATH_OUTPUT__EMPTY__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x80000000U) | ((uint32_t)(1) << 31)
#define DGADC_DATAPATH_OUTPUT__EMPTY__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x80000000U) | ((uint32_t)(0) << 31)
#define DGADC_DATAPATH_OUTPUT__EMPTY__RESET_VALUE                   0x00000000U
/** @} */
#define DGADC_DATAPATH_OUTPUT__TYPE                                    uint32_t
#define DGADC_DATAPATH_OUTPUT__READ                                 0x8000ffffU
#define DGADC_DATAPATH_OUTPUT__PRESERVED                            0x00000000U
#define DGADC_DATAPATH_OUTPUT__RESET_VALUE                          0x00000000U

#endif /* __DGADC_DATAPATH_OUTPUT_MACRO__ */

/** @} end of datapath_output */

/* macros for BlueprintGlobalNameSpace::DGADC_final_inversion */
/**
 * @defgroup at_apb_gadc_regs_core_final_inversion final_inversion
 * @brief inversion and range per channel definitions.
 * @{
 */
#ifndef __DGADC_FINAL_INVERSION_MACRO__
#define __DGADC_FINAL_INVERSION_MACRO__

/* macros for field ch */
/**
 * @defgroup at_apb_gadc_regs_core_ch_field ch_field
 * @brief macros for field ch
 * @details if bit [n] is set, then invert channel n's post processed output
 * @{
 */
#define DGADC_FINAL_INVERSION__CH__SHIFT                                      0
#define DGADC_FINAL_INVERSION__CH__WIDTH                                     16
#define DGADC_FINAL_INVERSION__CH__MASK                             0x0000ffffU
#define DGADC_FINAL_INVERSION__CH__READ(src)    ((uint32_t)(src) & 0x0000ffffU)
#define DGADC_FINAL_INVERSION__CH__WRITE(src)   ((uint32_t)(src) & 0x0000ffffU)
#define DGADC_FINAL_INVERSION__CH__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ffffU) | ((uint32_t)(src) &\
                    0x0000ffffU)
#define DGADC_FINAL_INVERSION__CH__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x0000ffffU)))
#define DGADC_FINAL_INVERSION__CH__RESET_VALUE                      0x00000000U
/** @} */

/* macros for field gext */
/**
 * @defgroup at_apb_gadc_regs_core_gext_field gext_field
 * @brief macros for field gext
 * @details voltage range
 * @{
 */
#define DGADC_FINAL_INVERSION__GEXT__SHIFT                                   16
#define DGADC_FINAL_INVERSION__GEXT__WIDTH                                   16
#define DGADC_FINAL_INVERSION__GEXT__MASK                           0xffff0000U
#define DGADC_FINAL_INVERSION__GEXT__READ(src) \
                    (((uint32_t)(src)\
                    & 0xffff0000U) >> 16)
#define DGADC_FINAL_INVERSION__GEXT__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0xffff0000U)
#define DGADC_FINAL_INVERSION__GEXT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffff0000U) | (((uint32_t)(src) <<\
                    16) & 0xffff0000U)
#define DGADC_FINAL_INVERSION__GEXT__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0xffff0000U)))
#define DGADC_FINAL_INVERSION__GEXT__RESET_VALUE                    0x00000000U
/** @} */
#define DGADC_FINAL_INVERSION__TYPE                                    uint32_t
#define DGADC_FINAL_INVERSION__READ                                 0xffffffffU
#define DGADC_FINAL_INVERSION__WRITE                                0xffffffffU
#define DGADC_FINAL_INVERSION__PRESERVED                            0x00000000U
#define DGADC_FINAL_INVERSION__RESET_VALUE                          0x00000000U

#endif /* __DGADC_FINAL_INVERSION_MACRO__ */

/** @} end of final_inversion */

/* macros for BlueprintGlobalNameSpace::DGADC_interrupts */
/**
 * @defgroup at_apb_gadc_regs_core_interrupts interrupts
 * @brief interrupt status definitions.
 * @{
 */
#ifndef __DGADC_INTERRUPTS_MACRO__
#define __DGADC_INTERRUPTS_MACRO__

/* macros for field intrpt0 */
/**
 * @defgroup at_apb_gadc_regs_core_intrpt0_field intrpt0_field
 * @brief macros for field intrpt0
 * @details hardware wrote to fifo
 * @{
 */
#define DGADC_INTERRUPTS__INTRPT0__SHIFT                                      0
#define DGADC_INTERRUPTS__INTRPT0__WIDTH                                      1
#define DGADC_INTERRUPTS__INTRPT0__MASK                             0x00000001U
#define DGADC_INTERRUPTS__INTRPT0__READ(src)    ((uint32_t)(src) & 0x00000001U)
#define DGADC_INTERRUPTS__INTRPT0__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define DGADC_INTERRUPTS__INTRPT0__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define DGADC_INTERRUPTS__INTRPT0__RESET_VALUE                      0x00000000U
/** @} */

/* macros for field intrpt1 */
/**
 * @defgroup at_apb_gadc_regs_core_intrpt1_field intrpt1_field
 * @brief macros for field intrpt1
 * @details fifo overran
 * @{
 */
#define DGADC_INTERRUPTS__INTRPT1__SHIFT                                      1
#define DGADC_INTERRUPTS__INTRPT1__WIDTH                                      1
#define DGADC_INTERRUPTS__INTRPT1__MASK                             0x00000002U
#define DGADC_INTERRUPTS__INTRPT1__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define DGADC_INTERRUPTS__INTRPT1__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define DGADC_INTERRUPTS__INTRPT1__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define DGADC_INTERRUPTS__INTRPT1__RESET_VALUE                      0x00000000U
/** @} */

/* macros for field intrpt2 */
/**
 * @defgroup at_apb_gadc_regs_core_intrpt2_field intrpt2_field
 * @brief macros for field intrpt2
 * @details one shot or one round of round robin has completed
 * @{
 */
#define DGADC_INTERRUPTS__INTRPT2__SHIFT                                      2
#define DGADC_INTERRUPTS__INTRPT2__WIDTH                                      1
#define DGADC_INTERRUPTS__INTRPT2__MASK                             0x00000004U
#define DGADC_INTERRUPTS__INTRPT2__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000004U) >> 2)
#define DGADC_INTERRUPTS__INTRPT2__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(1) << 2)
#define DGADC_INTERRUPTS__INTRPT2__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(0) << 2)
#define DGADC_INTERRUPTS__INTRPT2__RESET_VALUE                      0x00000000U
/** @} */
#define DGADC_INTERRUPTS__TYPE                                         uint32_t
#define DGADC_INTERRUPTS__READ                                      0x00000007U
#define DGADC_INTERRUPTS__PRESERVED                                 0x00000000U
#define DGADC_INTERRUPTS__RESET_VALUE                               0x00000000U

#endif /* __DGADC_INTERRUPTS_MACRO__ */

/** @} end of interrupts */

/* macros for BlueprintGlobalNameSpace::DGADC_interrupt_mask */
/**
 * @defgroup at_apb_gadc_regs_core_interrupt_mask interrupt_mask
 * @brief interupt masking definitions.
 * @{
 */
#ifndef __DGADC_INTERRUPT_MASK_MACRO__
#define __DGADC_INTERRUPT_MASK_MACRO__

/* macros for field mask_intrpt0 */
/**
 * @defgroup at_apb_gadc_regs_core_mask_intrpt0_field mask_intrpt0_field
 * @brief macros for field mask_intrpt0
 * @details allow intrpt0 to propogate to core's single output interrupt
 * @{
 */
#define DGADC_INTERRUPT_MASK__MASK_INTRPT0__SHIFT                             0
#define DGADC_INTERRUPT_MASK__MASK_INTRPT0__WIDTH                             1
#define DGADC_INTERRUPT_MASK__MASK_INTRPT0__MASK                    0x00000001U
#define DGADC_INTERRUPT_MASK__MASK_INTRPT0__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define DGADC_INTERRUPT_MASK__MASK_INTRPT0__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define DGADC_INTERRUPT_MASK__MASK_INTRPT0__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define DGADC_INTERRUPT_MASK__MASK_INTRPT0__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define DGADC_INTERRUPT_MASK__MASK_INTRPT0__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define DGADC_INTERRUPT_MASK__MASK_INTRPT0__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define DGADC_INTERRUPT_MASK__MASK_INTRPT0__RESET_VALUE             0x00000001U
/** @} */

/* macros for field mask_intrpt1 */
/**
 * @defgroup at_apb_gadc_regs_core_mask_intrpt1_field mask_intrpt1_field
 * @brief macros for field mask_intrpt1
 * @details allow intrpt1 to propogate to core's single output interrupt
 * @{
 */
#define DGADC_INTERRUPT_MASK__MASK_INTRPT1__SHIFT                             1
#define DGADC_INTERRUPT_MASK__MASK_INTRPT1__WIDTH                             1
#define DGADC_INTERRUPT_MASK__MASK_INTRPT1__MASK                    0x00000002U
#define DGADC_INTERRUPT_MASK__MASK_INTRPT1__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define DGADC_INTERRUPT_MASK__MASK_INTRPT1__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define DGADC_INTERRUPT_MASK__MASK_INTRPT1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define DGADC_INTERRUPT_MASK__MASK_INTRPT1__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define DGADC_INTERRUPT_MASK__MASK_INTRPT1__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define DGADC_INTERRUPT_MASK__MASK_INTRPT1__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define DGADC_INTERRUPT_MASK__MASK_INTRPT1__RESET_VALUE             0x00000001U
/** @} */

/* macros for field mask_intrpt2 */
/**
 * @defgroup at_apb_gadc_regs_core_mask_intrpt2_field mask_intrpt2_field
 * @brief macros for field mask_intrpt2
 * @details allow intrpt2 to propogate to core's single output interrupt
 * @{
 */
#define DGADC_INTERRUPT_MASK__MASK_INTRPT2__SHIFT                             2
#define DGADC_INTERRUPT_MASK__MASK_INTRPT2__WIDTH                             1
#define DGADC_INTERRUPT_MASK__MASK_INTRPT2__MASK                    0x00000004U
#define DGADC_INTERRUPT_MASK__MASK_INTRPT2__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000004U) >> 2)
#define DGADC_INTERRUPT_MASK__MASK_INTRPT2__WRITE(src) \
                    (((uint32_t)(src)\
                    << 2) & 0x00000004U)
#define DGADC_INTERRUPT_MASK__MASK_INTRPT2__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | (((uint32_t)(src) <<\
                    2) & 0x00000004U)
#define DGADC_INTERRUPT_MASK__MASK_INTRPT2__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 2) & ~0x00000004U)))
#define DGADC_INTERRUPT_MASK__MASK_INTRPT2__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(1) << 2)
#define DGADC_INTERRUPT_MASK__MASK_INTRPT2__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(0) << 2)
#define DGADC_INTERRUPT_MASK__MASK_INTRPT2__RESET_VALUE             0x00000001U
/** @} */
#define DGADC_INTERRUPT_MASK__TYPE                                     uint32_t
#define DGADC_INTERRUPT_MASK__READ                                  0x00000007U
#define DGADC_INTERRUPT_MASK__WRITE                                 0x00000007U
#define DGADC_INTERRUPT_MASK__PRESERVED                             0x00000000U
#define DGADC_INTERRUPT_MASK__RESET_VALUE                           0x00000007U

#endif /* __DGADC_INTERRUPT_MASK_MACRO__ */

/** @} end of interrupt_mask */

/* macros for BlueprintGlobalNameSpace::DGADC_interrupt_clear */
/**
 * @defgroup at_apb_gadc_regs_core_interrupt_clear interrupt_clear
 * @brief clear interrupts definitions.
 * @{
 */
#ifndef __DGADC_INTERRUPT_CLEAR_MACRO__
#define __DGADC_INTERRUPT_CLEAR_MACRO__

/* macros for field clear_intrpt0 */
/**
 * @defgroup at_apb_gadc_regs_core_clear_intrpt0_field clear_intrpt0_field
 * @brief macros for field clear_intrpt0
 * @details clear interrupt 0; not self reseting
 * @{
 */
#define DGADC_INTERRUPT_CLEAR__CLEAR_INTRPT0__SHIFT                           0
#define DGADC_INTERRUPT_CLEAR__CLEAR_INTRPT0__WIDTH                           1
#define DGADC_INTERRUPT_CLEAR__CLEAR_INTRPT0__MASK                  0x00000001U
#define DGADC_INTERRUPT_CLEAR__CLEAR_INTRPT0__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define DGADC_INTERRUPT_CLEAR__CLEAR_INTRPT0__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define DGADC_INTERRUPT_CLEAR__CLEAR_INTRPT0__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define DGADC_INTERRUPT_CLEAR__CLEAR_INTRPT0__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define DGADC_INTERRUPT_CLEAR__CLEAR_INTRPT0__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define DGADC_INTERRUPT_CLEAR__CLEAR_INTRPT0__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define DGADC_INTERRUPT_CLEAR__CLEAR_INTRPT0__RESET_VALUE           0x00000000U
/** @} */

/* macros for field clear_intrpt1 */
/**
 * @defgroup at_apb_gadc_regs_core_clear_intrpt1_field clear_intrpt1_field
 * @brief macros for field clear_intrpt1
 * @details clear interrupt 1; not self reseting
 * @{
 */
#define DGADC_INTERRUPT_CLEAR__CLEAR_INTRPT1__SHIFT                           1
#define DGADC_INTERRUPT_CLEAR__CLEAR_INTRPT1__WIDTH                           1
#define DGADC_INTERRUPT_CLEAR__CLEAR_INTRPT1__MASK                  0x00000002U
#define DGADC_INTERRUPT_CLEAR__CLEAR_INTRPT1__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define DGADC_INTERRUPT_CLEAR__CLEAR_INTRPT1__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define DGADC_INTERRUPT_CLEAR__CLEAR_INTRPT1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define DGADC_INTERRUPT_CLEAR__CLEAR_INTRPT1__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define DGADC_INTERRUPT_CLEAR__CLEAR_INTRPT1__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define DGADC_INTERRUPT_CLEAR__CLEAR_INTRPT1__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define DGADC_INTERRUPT_CLEAR__CLEAR_INTRPT1__RESET_VALUE           0x00000000U
/** @} */

/* macros for field clear_intrpt2 */
/**
 * @defgroup at_apb_gadc_regs_core_clear_intrpt2_field clear_intrpt2_field
 * @brief macros for field clear_intrpt2
 * @details clear interrupt 2; not self reseting
 * @{
 */
#define DGADC_INTERRUPT_CLEAR__CLEAR_INTRPT2__SHIFT                           2
#define DGADC_INTERRUPT_CLEAR__CLEAR_INTRPT2__WIDTH                           1
#define DGADC_INTERRUPT_CLEAR__CLEAR_INTRPT2__MASK                  0x00000004U
#define DGADC_INTERRUPT_CLEAR__CLEAR_INTRPT2__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000004U) >> 2)
#define DGADC_INTERRUPT_CLEAR__CLEAR_INTRPT2__WRITE(src) \
                    (((uint32_t)(src)\
                    << 2) & 0x00000004U)
#define DGADC_INTERRUPT_CLEAR__CLEAR_INTRPT2__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | (((uint32_t)(src) <<\
                    2) & 0x00000004U)
#define DGADC_INTERRUPT_CLEAR__CLEAR_INTRPT2__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 2) & ~0x00000004U)))
#define DGADC_INTERRUPT_CLEAR__CLEAR_INTRPT2__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(1) << 2)
#define DGADC_INTERRUPT_CLEAR__CLEAR_INTRPT2__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(0) << 2)
#define DGADC_INTERRUPT_CLEAR__CLEAR_INTRPT2__RESET_VALUE           0x00000000U
/** @} */
#define DGADC_INTERRUPT_CLEAR__TYPE                                    uint32_t
#define DGADC_INTERRUPT_CLEAR__READ                                 0x00000007U
#define DGADC_INTERRUPT_CLEAR__WRITE                                0x00000007U
#define DGADC_INTERRUPT_CLEAR__PRESERVED                            0x00000000U
#define DGADC_INTERRUPT_CLEAR__RESET_VALUE                          0x00000000U

#endif /* __DGADC_INTERRUPT_CLEAR_MACRO__ */

/** @} end of interrupt_clear */

/* macros for BlueprintGlobalNameSpace::DGADC_fifo_dbg */
/**
 * @defgroup at_apb_gadc_regs_core_fifo_dbg fifo_dbg
 * @brief FIFO debug definitions.
 * @{
 */
#ifndef __DGADC_FIFO_DBG_MACRO__
#define __DGADC_FIFO_DBG_MACRO__

/* macros for field status */
/**
 * @defgroup at_apb_gadc_regs_core_status_field status_field
 * @brief macros for field status
 * @details FIFO debug status
 * @{
 */
#define DGADC_FIFO_DBG__STATUS__SHIFT                                         0
#define DGADC_FIFO_DBG__STATUS__WIDTH                                        16
#define DGADC_FIFO_DBG__STATUS__MASK                                0x0000ffffU
#define DGADC_FIFO_DBG__STATUS__READ(src)       ((uint32_t)(src) & 0x0000ffffU)
#define DGADC_FIFO_DBG__STATUS__RESET_VALUE                         0x00000000U
/** @} */
#define DGADC_FIFO_DBG__TYPE                                           uint32_t
#define DGADC_FIFO_DBG__READ                                        0x0000ffffU
#define DGADC_FIFO_DBG__PRESERVED                                   0x00000000U
#define DGADC_FIFO_DBG__RESET_VALUE                                 0x00000000U

#endif /* __DGADC_FIFO_DBG_MACRO__ */

/** @} end of fifo_dbg */

/* macros for BlueprintGlobalNameSpace::DGADC_core_id */
/**
 * @defgroup at_apb_gadc_regs_core_core_id core_id
 * @brief core ID definitions.
 * @{
 */
#ifndef __DGADC_CORE_ID_MACRO__
#define __DGADC_CORE_ID_MACRO__

/* macros for field id */
/**
 * @defgroup at_apb_gadc_regs_core_id_field id_field
 * @brief macros for field id
 * @details GADC in ASCII
 * @{
 */
#define DGADC_CORE_ID__ID__SHIFT                                              0
#define DGADC_CORE_ID__ID__WIDTH                                             32
#define DGADC_CORE_ID__ID__MASK                                     0xffffffffU
#define DGADC_CORE_ID__ID__READ(src)            ((uint32_t)(src) & 0xffffffffU)
#define DGADC_CORE_ID__ID__RESET_VALUE                              0x47414443U
/** @} */
#define DGADC_CORE_ID__TYPE                                            uint32_t
#define DGADC_CORE_ID__READ                                         0xffffffffU
#define DGADC_CORE_ID__PRESERVED                                    0x00000000U
#define DGADC_CORE_ID__RESET_VALUE                                  0x47414443U

#endif /* __DGADC_CORE_ID_MACRO__ */

/** @} end of core_id */

/** @} end of AT_APB_GADC_REGS_CORE */
#endif /* __REG_AT_APB_GADC_REGS_CORE_H__ */
