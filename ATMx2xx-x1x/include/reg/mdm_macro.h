/*                                                                           */
/* File:       mdm_regs_core_macro.h                                         */
/*                                                                           */
/* Arguments:  /cad/tools/cadence/blueprint_3.7.5/Linux-64bit/blueprint -eval*/
/*             $DEFINE_PROPERTY=1; -ansic mdm_regs_core.rdl                  */
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


#ifndef __REG_MDM_REGS_CORE_H__
#define __REG_MDM_REGS_CORE_H__

/**
 *****************************************************************************
 * @defgroup MDM_REGS_CORE mdm_regs_core
 * @ingroup AT_REG
 * @brief mdm_regs_core definitions.
 * @{
 *****************************************************************************
 */

/* macros for BlueprintGlobalNameSpace::MDM_agcmeas */
/**
 * @defgroup mdm_regs_core_agcmeas agcmeas
 * @brief Power measurements definitions.
 * @{
 */
#ifndef __MDM_AGCMEAS_MACRO__
#define __MDM_AGCMEAS_MACRO__

/* macros for field rssi_offset */
/**
 * @defgroup mdm_regs_core_rssi_offset_field rssi_offset_field
 * @brief macros for field rssi_offset
 * @details RSSI = rxgain - (measured_power after RXFIR) plus rssi_offset. Signed. Register replicated for 2 Mb/s
 * @{
 */
#define MDM_AGCMEAS__RSSI_OFFSET__SHIFT                                       0
#define MDM_AGCMEAS__RSSI_OFFSET__WIDTH                                       8
#define MDM_AGCMEAS__RSSI_OFFSET__MASK                              0x000000ffU
#define MDM_AGCMEAS__RSSI_OFFSET__READ(src)     ((uint32_t)(src) & 0x000000ffU)
#define MDM_AGCMEAS__RSSI_OFFSET__WRITE(src)    ((uint32_t)(src) & 0x000000ffU)
#define MDM_AGCMEAS__RSSI_OFFSET__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define MDM_AGCMEAS__RSSI_OFFSET__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000000ffU)))
#define MDM_AGCMEAS__RSSI_OFFSET__RESET_VALUE                       0x00000018U
/** @} */

/* macros for field det_min */
/**
 * @defgroup mdm_regs_core_det_min_field det_min_field
 * @brief macros for field det_min
 * @details Signed, relative to full scale agc filter output. Lowest allowed inband power measurement 7'h53 = -45. Register replicated for 2 Mb/s
 * @{
 */
#define MDM_AGCMEAS__DET_MIN__SHIFT                                           8
#define MDM_AGCMEAS__DET_MIN__WIDTH                                           7
#define MDM_AGCMEAS__DET_MIN__MASK                                  0x00007f00U
#define MDM_AGCMEAS__DET_MIN__READ(src)  (((uint32_t)(src) & 0x00007f00U) >> 8)
#define MDM_AGCMEAS__DET_MIN__WRITE(src) (((uint32_t)(src) << 8) & 0x00007f00U)
#define MDM_AGCMEAS__DET_MIN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00007f00U) | (((uint32_t)(src) <<\
                    8) & 0x00007f00U)
#define MDM_AGCMEAS__DET_MIN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x00007f00U)))
#define MDM_AGCMEAS__DET_MIN__RESET_VALUE                           0x00000053U
/** @} */

/* macros for field twomeg_rssi_offset */
/**
 * @defgroup mdm_regs_core_twomeg_rssi_offset_field twomeg_rssi_offset_field
 * @brief macros for field twomeg_rssi_offset
 * @details RSSI = rxgain - (measured_power after RXFIR) plus rssi_offset. 2 Mb/s version of register.
 * @{
 */
#define MDM_AGCMEAS__TWOMEG_RSSI_OFFSET__SHIFT                               15
#define MDM_AGCMEAS__TWOMEG_RSSI_OFFSET__WIDTH                                8
#define MDM_AGCMEAS__TWOMEG_RSSI_OFFSET__MASK                       0x007f8000U
#define MDM_AGCMEAS__TWOMEG_RSSI_OFFSET__READ(src) \
                    (((uint32_t)(src)\
                    & 0x007f8000U) >> 15)
#define MDM_AGCMEAS__TWOMEG_RSSI_OFFSET__WRITE(src) \
                    (((uint32_t)(src)\
                    << 15) & 0x007f8000U)
#define MDM_AGCMEAS__TWOMEG_RSSI_OFFSET__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x007f8000U) | (((uint32_t)(src) <<\
                    15) & 0x007f8000U)
#define MDM_AGCMEAS__TWOMEG_RSSI_OFFSET__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 15) & ~0x007f8000U)))
#define MDM_AGCMEAS__TWOMEG_RSSI_OFFSET__RESET_VALUE                0x00000019U
/** @} */

/* macros for field twomeg_det_min */
/**
 * @defgroup mdm_regs_core_twomeg_det_min_field twomeg_det_min_field
 * @brief macros for field twomeg_det_min
 * @details Signed, relative to full scale agc filter output. Lowest allowed inband power measurement 7'h56 = -42. 2 Mb/s version of this register
 * @{
 */
#define MDM_AGCMEAS__TWOMEG_DET_MIN__SHIFT                                   23
#define MDM_AGCMEAS__TWOMEG_DET_MIN__WIDTH                                    7
#define MDM_AGCMEAS__TWOMEG_DET_MIN__MASK                           0x3f800000U
#define MDM_AGCMEAS__TWOMEG_DET_MIN__READ(src) \
                    (((uint32_t)(src)\
                    & 0x3f800000U) >> 23)
#define MDM_AGCMEAS__TWOMEG_DET_MIN__WRITE(src) \
                    (((uint32_t)(src)\
                    << 23) & 0x3f800000U)
#define MDM_AGCMEAS__TWOMEG_DET_MIN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x3f800000U) | (((uint32_t)(src) <<\
                    23) & 0x3f800000U)
#define MDM_AGCMEAS__TWOMEG_DET_MIN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 23) & ~0x3f800000U)))
#define MDM_AGCMEAS__TWOMEG_DET_MIN__RESET_VALUE                    0x00000056U
/** @} */
#define MDM_AGCMEAS__TYPE                                              uint32_t
#define MDM_AGCMEAS__READ                                           0x3fffffffU
#define MDM_AGCMEAS__WRITE                                          0x3fffffffU
#define MDM_AGCMEAS__PRESERVED                                      0x00000000U
#define MDM_AGCMEAS__RESET_VALUE                                    0x2b0cd318U

#endif /* __MDM_AGCMEAS_MACRO__ */

/** @} end of agcmeas */

/* macros for BlueprintGlobalNameSpace::MDM_agcgain */
/**
 * @defgroup mdm_regs_core_agcgain agcgain
 * @brief Gain settings definitions.
 * @{
 */
#ifndef __MDM_AGCGAIN_MACRO__
#define __MDM_AGCGAIN_MACRO__

/* macros for field start */
/**
 * @defgroup mdm_regs_core_start_field start_field
 * @brief macros for field start
 * @details RX gain to use at start of packet search
 * @{
 */
#define MDM_AGCGAIN__START__SHIFT                                             0
#define MDM_AGCGAIN__START__WIDTH                                             7
#define MDM_AGCGAIN__START__MASK                                    0x0000007fU
#define MDM_AGCGAIN__START__READ(src)           ((uint32_t)(src) & 0x0000007fU)
#define MDM_AGCGAIN__START__WRITE(src)          ((uint32_t)(src) & 0x0000007fU)
#define MDM_AGCGAIN__START__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000007fU) | ((uint32_t)(src) &\
                    0x0000007fU)
#define MDM_AGCGAIN__START__VERIFY(src)   (!(((uint32_t)(src) & ~0x0000007fU)))
#define MDM_AGCGAIN__START__RESET_VALUE                             0x00000052U
/** @} */

/* macros for field adc_quick_drop */
/**
 * @defgroup mdm_regs_core_adc_quick_drop_field adc_quick_drop_field
 * @brief macros for field adc_quick_drop
 * @details Gain drop in dB when ADC saturated
 * @{
 */
#define MDM_AGCGAIN__ADC_QUICK_DROP__SHIFT                                    7
#define MDM_AGCGAIN__ADC_QUICK_DROP__WIDTH                                    7
#define MDM_AGCGAIN__ADC_QUICK_DROP__MASK                           0x00003f80U
#define MDM_AGCGAIN__ADC_QUICK_DROP__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00003f80U) >> 7)
#define MDM_AGCGAIN__ADC_QUICK_DROP__WRITE(src) \
                    (((uint32_t)(src)\
                    << 7) & 0x00003f80U)
#define MDM_AGCGAIN__ADC_QUICK_DROP__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00003f80U) | (((uint32_t)(src) <<\
                    7) & 0x00003f80U)
#define MDM_AGCGAIN__ADC_QUICK_DROP__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 7) & ~0x00003f80U)))
#define MDM_AGCGAIN__ADC_QUICK_DROP__RESET_VALUE                    0x00000021U
/** @} */

/* macros for field pd_quick_drop */
/**
 * @defgroup mdm_regs_core_pd_quick_drop_field pd_quick_drop_field
 * @brief macros for field pd_quick_drop
 * @details Gain drop in dB when peak detect indicated
 * @{
 */
#define MDM_AGCGAIN__PD_QUICK_DROP__SHIFT                                    14
#define MDM_AGCGAIN__PD_QUICK_DROP__WIDTH                                     7
#define MDM_AGCGAIN__PD_QUICK_DROP__MASK                            0x001fc000U
#define MDM_AGCGAIN__PD_QUICK_DROP__READ(src) \
                    (((uint32_t)(src)\
                    & 0x001fc000U) >> 14)
#define MDM_AGCGAIN__PD_QUICK_DROP__WRITE(src) \
                    (((uint32_t)(src)\
                    << 14) & 0x001fc000U)
#define MDM_AGCGAIN__PD_QUICK_DROP__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x001fc000U) | (((uint32_t)(src) <<\
                    14) & 0x001fc000U)
#define MDM_AGCGAIN__PD_QUICK_DROP__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 14) & ~0x001fc000U)))
#define MDM_AGCGAIN__PD_QUICK_DROP__RESET_VALUE                     0x0000003eU
/** @} */
#define MDM_AGCGAIN__TYPE                                              uint32_t
#define MDM_AGCGAIN__READ                                           0x001fffffU
#define MDM_AGCGAIN__WRITE                                          0x001fffffU
#define MDM_AGCGAIN__PRESERVED                                      0x00000000U
#define MDM_AGCGAIN__RESET_VALUE                                    0x000f90d2U

#endif /* __MDM_AGCGAIN_MACRO__ */

/** @} end of agcgain */

/* macros for BlueprintGlobalNameSpace::MDM_dcoff */
/**
 * @defgroup mdm_regs_core_dcoff dcoff
 * @brief DC Offset forcing definitions.
 * @{
 */
#ifndef __MDM_DCOFF_MACRO__
#define __MDM_DCOFF_MACRO__

/* macros for field force */
/**
 * @defgroup mdm_regs_core_force_field force_field
 * @brief macros for field force
 * @details If set, modem will subtract the forced_i and forced_q values after the ADC.
 * @{
 */
#define MDM_DCOFF__FORCE__SHIFT                                               0
#define MDM_DCOFF__FORCE__WIDTH                                               1
#define MDM_DCOFF__FORCE__MASK                                      0x00000001U
#define MDM_DCOFF__FORCE__READ(src)             ((uint32_t)(src) & 0x00000001U)
#define MDM_DCOFF__FORCE__WRITE(src)            ((uint32_t)(src) & 0x00000001U)
#define MDM_DCOFF__FORCE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define MDM_DCOFF__FORCE__VERIFY(src)     (!(((uint32_t)(src) & ~0x00000001U)))
#define MDM_DCOFF__FORCE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define MDM_DCOFF__FORCE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define MDM_DCOFF__FORCE__RESET_VALUE                               0x00000001U
/** @} */

/* macros for field forced_i */
/**
 * @defgroup mdm_regs_core_forced_i_field forced_i_field
 * @brief macros for field forced_i
 * @details Signed, in units of ADC LSBs
 * @{
 */
#define MDM_DCOFF__FORCED_I__SHIFT                                            1
#define MDM_DCOFF__FORCED_I__WIDTH                                            8
#define MDM_DCOFF__FORCED_I__MASK                                   0x000001feU
#define MDM_DCOFF__FORCED_I__READ(src)   (((uint32_t)(src) & 0x000001feU) >> 1)
#define MDM_DCOFF__FORCED_I__WRITE(src)  (((uint32_t)(src) << 1) & 0x000001feU)
#define MDM_DCOFF__FORCED_I__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000001feU) | (((uint32_t)(src) <<\
                    1) & 0x000001feU)
#define MDM_DCOFF__FORCED_I__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x000001feU)))
#define MDM_DCOFF__FORCED_I__RESET_VALUE                            0x00000000U
/** @} */

/* macros for field forced_q */
/**
 * @defgroup mdm_regs_core_forced_q_field forced_q_field
 * @brief macros for field forced_q
 * @details Signed, in units of ADC LSBs
 * @{
 */
#define MDM_DCOFF__FORCED_Q__SHIFT                                            9
#define MDM_DCOFF__FORCED_Q__WIDTH                                            8
#define MDM_DCOFF__FORCED_Q__MASK                                   0x0001fe00U
#define MDM_DCOFF__FORCED_Q__READ(src)   (((uint32_t)(src) & 0x0001fe00U) >> 9)
#define MDM_DCOFF__FORCED_Q__WRITE(src)  (((uint32_t)(src) << 9) & 0x0001fe00U)
#define MDM_DCOFF__FORCED_Q__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0001fe00U) | (((uint32_t)(src) <<\
                    9) & 0x0001fe00U)
#define MDM_DCOFF__FORCED_Q__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 9) & ~0x0001fe00U)))
#define MDM_DCOFF__FORCED_Q__RESET_VALUE                            0x00000000U
/** @} */
#define MDM_DCOFF__TYPE                                                uint32_t
#define MDM_DCOFF__READ                                             0x0001ffffU
#define MDM_DCOFF__WRITE                                            0x0001ffffU
#define MDM_DCOFF__PRESERVED                                        0x00000000U
#define MDM_DCOFF__RESET_VALUE                                      0x00000001U

#endif /* __MDM_DCOFF_MACRO__ */

/** @} end of dcoff */

/* macros for BlueprintGlobalNameSpace::MDM_iqcorr */
/**
 * @defgroup mdm_regs_core_iqcorr iqcorr
 * @brief I/Q correction definitions.
 * @{
 */
#ifndef __MDM_IQCORR_MACRO__
#define __MDM_IQCORR_MACRO__

/* macros for field enable_iqcorr */
/**
 * @defgroup mdm_regs_core_enable_iqcorr_field enable_iqcorr_field
 * @brief macros for field enable_iqcorr
 * @details Enable for 1 Mb/s or coded
 * @{
 */
#define MDM_IQCORR__ENABLE_IQCORR__SHIFT                                      0
#define MDM_IQCORR__ENABLE_IQCORR__WIDTH                                      1
#define MDM_IQCORR__ENABLE_IQCORR__MASK                             0x00000001U
#define MDM_IQCORR__ENABLE_IQCORR__READ(src)    ((uint32_t)(src) & 0x00000001U)
#define MDM_IQCORR__ENABLE_IQCORR__WRITE(src)   ((uint32_t)(src) & 0x00000001U)
#define MDM_IQCORR__ENABLE_IQCORR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define MDM_IQCORR__ENABLE_IQCORR__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define MDM_IQCORR__ENABLE_IQCORR__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define MDM_IQCORR__ENABLE_IQCORR__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define MDM_IQCORR__ENABLE_IQCORR__RESET_VALUE                      0x00000000U
/** @} */

/* macros for field ampl_corr */
/**
 * @defgroup mdm_regs_core_ampl_corr_field ampl_corr_field
 * @brief macros for field ampl_corr
 * @details Signed
 * @{
 */
#define MDM_IQCORR__AMPL_CORR__SHIFT                                          1
#define MDM_IQCORR__AMPL_CORR__WIDTH                                          6
#define MDM_IQCORR__AMPL_CORR__MASK                                 0x0000007eU
#define MDM_IQCORR__AMPL_CORR__READ(src) (((uint32_t)(src) & 0x0000007eU) >> 1)
#define MDM_IQCORR__AMPL_CORR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x0000007eU)
#define MDM_IQCORR__AMPL_CORR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000007eU) | (((uint32_t)(src) <<\
                    1) & 0x0000007eU)
#define MDM_IQCORR__AMPL_CORR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x0000007eU)))
#define MDM_IQCORR__AMPL_CORR__RESET_VALUE                          0x00000000U
/** @} */

/* macros for field phase_corr */
/**
 * @defgroup mdm_regs_core_phase_corr_field phase_corr_field
 * @brief macros for field phase_corr
 * @details Signed
 * @{
 */
#define MDM_IQCORR__PHASE_CORR__SHIFT                                         7
#define MDM_IQCORR__PHASE_CORR__WIDTH                                         6
#define MDM_IQCORR__PHASE_CORR__MASK                                0x00001f80U
#define MDM_IQCORR__PHASE_CORR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00001f80U) >> 7)
#define MDM_IQCORR__PHASE_CORR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 7) & 0x00001f80U)
#define MDM_IQCORR__PHASE_CORR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00001f80U) | (((uint32_t)(src) <<\
                    7) & 0x00001f80U)
#define MDM_IQCORR__PHASE_CORR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 7) & ~0x00001f80U)))
#define MDM_IQCORR__PHASE_CORR__RESET_VALUE                         0x00000000U
/** @} */

/* macros for field twomeg_enable_iqcorr */
/**
 * @defgroup mdm_regs_core_twomeg_enable_iqcorr_field twomeg_enable_iqcorr_field
 * @brief macros for field twomeg_enable_iqcorr
 * @details Enable for 2 Mb/s
 * @{
 */
#define MDM_IQCORR__TWOMEG_ENABLE_IQCORR__SHIFT                              13
#define MDM_IQCORR__TWOMEG_ENABLE_IQCORR__WIDTH                               1
#define MDM_IQCORR__TWOMEG_ENABLE_IQCORR__MASK                      0x00002000U
#define MDM_IQCORR__TWOMEG_ENABLE_IQCORR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00002000U) >> 13)
#define MDM_IQCORR__TWOMEG_ENABLE_IQCORR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 13) & 0x00002000U)
#define MDM_IQCORR__TWOMEG_ENABLE_IQCORR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00002000U) | (((uint32_t)(src) <<\
                    13) & 0x00002000U)
#define MDM_IQCORR__TWOMEG_ENABLE_IQCORR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 13) & ~0x00002000U)))
#define MDM_IQCORR__TWOMEG_ENABLE_IQCORR__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00002000U) | ((uint32_t)(1) << 13)
#define MDM_IQCORR__TWOMEG_ENABLE_IQCORR__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00002000U) | ((uint32_t)(0) << 13)
#define MDM_IQCORR__TWOMEG_ENABLE_IQCORR__RESET_VALUE               0x00000000U
/** @} */

/* macros for field twomeg_ampl_corr */
/**
 * @defgroup mdm_regs_core_twomeg_ampl_corr_field twomeg_ampl_corr_field
 * @brief macros for field twomeg_ampl_corr
 * @details Signed
 * @{
 */
#define MDM_IQCORR__TWOMEG_AMPL_CORR__SHIFT                                  14
#define MDM_IQCORR__TWOMEG_AMPL_CORR__WIDTH                                   6
#define MDM_IQCORR__TWOMEG_AMPL_CORR__MASK                          0x000fc000U
#define MDM_IQCORR__TWOMEG_AMPL_CORR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x000fc000U) >> 14)
#define MDM_IQCORR__TWOMEG_AMPL_CORR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 14) & 0x000fc000U)
#define MDM_IQCORR__TWOMEG_AMPL_CORR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000fc000U) | (((uint32_t)(src) <<\
                    14) & 0x000fc000U)
#define MDM_IQCORR__TWOMEG_AMPL_CORR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 14) & ~0x000fc000U)))
#define MDM_IQCORR__TWOMEG_AMPL_CORR__RESET_VALUE                   0x00000000U
/** @} */

/* macros for field twomeg_phase_corr */
/**
 * @defgroup mdm_regs_core_twomeg_phase_corr_field twomeg_phase_corr_field
 * @brief macros for field twomeg_phase_corr
 * @details Signed
 * @{
 */
#define MDM_IQCORR__TWOMEG_PHASE_CORR__SHIFT                                 20
#define MDM_IQCORR__TWOMEG_PHASE_CORR__WIDTH                                  6
#define MDM_IQCORR__TWOMEG_PHASE_CORR__MASK                         0x03f00000U
#define MDM_IQCORR__TWOMEG_PHASE_CORR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x03f00000U) >> 20)
#define MDM_IQCORR__TWOMEG_PHASE_CORR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 20) & 0x03f00000U)
#define MDM_IQCORR__TWOMEG_PHASE_CORR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x03f00000U) | (((uint32_t)(src) <<\
                    20) & 0x03f00000U)
#define MDM_IQCORR__TWOMEG_PHASE_CORR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 20) & ~0x03f00000U)))
#define MDM_IQCORR__TWOMEG_PHASE_CORR__RESET_VALUE                  0x00000000U
/** @} */
#define MDM_IQCORR__TYPE                                               uint32_t
#define MDM_IQCORR__READ                                            0x03ffffffU
#define MDM_IQCORR__WRITE                                           0x03ffffffU
#define MDM_IQCORR__PRESERVED                                       0x00000000U
#define MDM_IQCORR__RESET_VALUE                                     0x00000000U

#endif /* __MDM_IQCORR_MACRO__ */

/** @} end of iqcorr */

/* macros for BlueprintGlobalNameSpace::MDM_agcsat */
/**
 * @defgroup mdm_regs_core_agcsat agcsat
 * @brief Saturation control definitions.
 * @{
 */
#ifndef __MDM_AGCSAT_MACRO__
#define __MDM_AGCSAT_MACRO__

/* macros for field check_win */
/**
 * @defgroup mdm_regs_core_check_win_field check_win_field
 * @brief macros for field check_win
 * @details Number of samples to measure for EACH of I and Q. Maximum allowed is 8. If set to 0, then saturation detection is disabled.
 * @{
 */
#define MDM_AGCSAT__CHECK_WIN__SHIFT                                          0
#define MDM_AGCSAT__CHECK_WIN__WIDTH                                          4
#define MDM_AGCSAT__CHECK_WIN__MASK                                 0x0000000fU
#define MDM_AGCSAT__CHECK_WIN__READ(src)        ((uint32_t)(src) & 0x0000000fU)
#define MDM_AGCSAT__CHECK_WIN__WRITE(src)       ((uint32_t)(src) & 0x0000000fU)
#define MDM_AGCSAT__CHECK_WIN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000000fU) | ((uint32_t)(src) &\
                    0x0000000fU)
#define MDM_AGCSAT__CHECK_WIN__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x0000000fU)))
#define MDM_AGCSAT__CHECK_WIN__RESET_VALUE                          0x00000004U
/** @} */

/* macros for field thr_cnt */
/**
 * @defgroup mdm_regs_core_thr_cnt_field thr_cnt_field
 * @brief macros for field thr_cnt
 * @details Number of saturated I and Q samples (add up I and Q) needed to declare a saturated signal. Saturation will be declared if number of measurements is greater than or equal to thr_cnt
 * @{
 */
#define MDM_AGCSAT__THR_CNT__SHIFT                                            4
#define MDM_AGCSAT__THR_CNT__WIDTH                                            4
#define MDM_AGCSAT__THR_CNT__MASK                                   0x000000f0U
#define MDM_AGCSAT__THR_CNT__READ(src)   (((uint32_t)(src) & 0x000000f0U) >> 4)
#define MDM_AGCSAT__THR_CNT__WRITE(src)  (((uint32_t)(src) << 4) & 0x000000f0U)
#define MDM_AGCSAT__THR_CNT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000f0U) | (((uint32_t)(src) <<\
                    4) & 0x000000f0U)
#define MDM_AGCSAT__THR_CNT__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 4) & ~0x000000f0U)))
#define MDM_AGCSAT__THR_CNT__RESET_VALUE                            0x00000006U
/** @} */

/* macros for field check_thr_high */
/**
 * @defgroup mdm_regs_core_check_thr_high_field check_thr_high_field
 * @brief macros for field check_thr_high
 * @details High threshold. Signed, in units of ADC LSBs. An I or Q sample greater than or equal to check_thr_high is considered saturated.
 * @{
 */
#define MDM_AGCSAT__CHECK_THR_HIGH__SHIFT                                     8
#define MDM_AGCSAT__CHECK_THR_HIGH__WIDTH                                     8
#define MDM_AGCSAT__CHECK_THR_HIGH__MASK                            0x0000ff00U
#define MDM_AGCSAT__CHECK_THR_HIGH__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000ff00U) >> 8)
#define MDM_AGCSAT__CHECK_THR_HIGH__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x0000ff00U)
#define MDM_AGCSAT__CHECK_THR_HIGH__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ff00U) | (((uint32_t)(src) <<\
                    8) & 0x0000ff00U)
#define MDM_AGCSAT__CHECK_THR_HIGH__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x0000ff00U)))
#define MDM_AGCSAT__CHECK_THR_HIGH__RESET_VALUE                     0x00000066U
/** @} */

/* macros for field check_thr_low */
/**
 * @defgroup mdm_regs_core_check_thr_low_field check_thr_low_field
 * @brief macros for field check_thr_low
 * @details Low threshold. Signed, in units of ADC LSBs. An I or Q sample less than or equal to check_thr_low is considered saturated. (Default 8'h9a = -102).
 * @{
 */
#define MDM_AGCSAT__CHECK_THR_LOW__SHIFT                                     16
#define MDM_AGCSAT__CHECK_THR_LOW__WIDTH                                      8
#define MDM_AGCSAT__CHECK_THR_LOW__MASK                             0x00ff0000U
#define MDM_AGCSAT__CHECK_THR_LOW__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00ff0000U) >> 16)
#define MDM_AGCSAT__CHECK_THR_LOW__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00ff0000U)
#define MDM_AGCSAT__CHECK_THR_LOW__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00ff0000U) | (((uint32_t)(src) <<\
                    16) & 0x00ff0000U)
#define MDM_AGCSAT__CHECK_THR_LOW__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00ff0000U)))
#define MDM_AGCSAT__CHECK_THR_LOW__RESET_VALUE                      0x0000009aU
/** @} */
#define MDM_AGCSAT__TYPE                                               uint32_t
#define MDM_AGCSAT__READ                                            0x00ffffffU
#define MDM_AGCSAT__WRITE                                           0x00ffffffU
#define MDM_AGCSAT__PRESERVED                                       0x00000000U
#define MDM_AGCSAT__RESET_VALUE                                     0x009a6664U

#endif /* __MDM_AGCSAT_MACRO__ */

/** @} end of agcsat */

/* macros for BlueprintGlobalNameSpace::MDM_agcinitsat */
/**
 * @defgroup mdm_regs_core_agcinitsat agcinitsat
 * @brief Saturation control for initial saturation condition definitions.
 * @{
 */
#ifndef __MDM_AGCINITSAT_MACRO__
#define __MDM_AGCINITSAT_MACRO__

/* macros for field check_win */
/**
 * @defgroup mdm_regs_core_check_win_field check_win_field
 * @brief macros for field check_win
 * @details Number of samples to measure for EACH of I and Q. Maximum allowed is 8. If set to 0, then saturation detection is disabled.
 * @{
 */
#define MDM_AGCINITSAT__CHECK_WIN__SHIFT                                      0
#define MDM_AGCINITSAT__CHECK_WIN__WIDTH                                      4
#define MDM_AGCINITSAT__CHECK_WIN__MASK                             0x0000000fU
#define MDM_AGCINITSAT__CHECK_WIN__READ(src)    ((uint32_t)(src) & 0x0000000fU)
#define MDM_AGCINITSAT__CHECK_WIN__WRITE(src)   ((uint32_t)(src) & 0x0000000fU)
#define MDM_AGCINITSAT__CHECK_WIN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000000fU) | ((uint32_t)(src) &\
                    0x0000000fU)
#define MDM_AGCINITSAT__CHECK_WIN__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x0000000fU)))
#define MDM_AGCINITSAT__CHECK_WIN__RESET_VALUE                      0x00000004U
/** @} */

/* macros for field thr_cnt */
/**
 * @defgroup mdm_regs_core_thr_cnt_field thr_cnt_field
 * @brief macros for field thr_cnt
 * @details Number of saturated I and Q samples (add up I and Q) needed to declare a saturated signal. Saturation will be declared if number of measurements is greater than or equal to thr_cnt
 * @{
 */
#define MDM_AGCINITSAT__THR_CNT__SHIFT                                        4
#define MDM_AGCINITSAT__THR_CNT__WIDTH                                        4
#define MDM_AGCINITSAT__THR_CNT__MASK                               0x000000f0U
#define MDM_AGCINITSAT__THR_CNT__READ(src) \
                    (((uint32_t)(src)\
                    & 0x000000f0U) >> 4)
#define MDM_AGCINITSAT__THR_CNT__WRITE(src) \
                    (((uint32_t)(src)\
                    << 4) & 0x000000f0U)
#define MDM_AGCINITSAT__THR_CNT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000f0U) | (((uint32_t)(src) <<\
                    4) & 0x000000f0U)
#define MDM_AGCINITSAT__THR_CNT__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 4) & ~0x000000f0U)))
#define MDM_AGCINITSAT__THR_CNT__RESET_VALUE                        0x00000002U
/** @} */

/* macros for field check_thr_high */
/**
 * @defgroup mdm_regs_core_check_thr_high_field check_thr_high_field
 * @brief macros for field check_thr_high
 * @details High threshold. Signed, in units of ADC LSBs. An I or Q sample greater than or equal to check_thr_high is considered saturated.
 * @{
 */
#define MDM_AGCINITSAT__CHECK_THR_HIGH__SHIFT                                 8
#define MDM_AGCINITSAT__CHECK_THR_HIGH__WIDTH                                 8
#define MDM_AGCINITSAT__CHECK_THR_HIGH__MASK                        0x0000ff00U
#define MDM_AGCINITSAT__CHECK_THR_HIGH__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000ff00U) >> 8)
#define MDM_AGCINITSAT__CHECK_THR_HIGH__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x0000ff00U)
#define MDM_AGCINITSAT__CHECK_THR_HIGH__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ff00U) | (((uint32_t)(src) <<\
                    8) & 0x0000ff00U)
#define MDM_AGCINITSAT__CHECK_THR_HIGH__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x0000ff00U)))
#define MDM_AGCINITSAT__CHECK_THR_HIGH__RESET_VALUE                 0x00000051U
/** @} */

/* macros for field check_thr_low */
/**
 * @defgroup mdm_regs_core_check_thr_low_field check_thr_low_field
 * @brief macros for field check_thr_low
 * @details Low threshold. Signed, in units of ADC LSBs. An I or Q sample less than or equal to check_thr_low is considered saturated. (Default 8'haf = -81).
 * @{
 */
#define MDM_AGCINITSAT__CHECK_THR_LOW__SHIFT                                 16
#define MDM_AGCINITSAT__CHECK_THR_LOW__WIDTH                                  8
#define MDM_AGCINITSAT__CHECK_THR_LOW__MASK                         0x00ff0000U
#define MDM_AGCINITSAT__CHECK_THR_LOW__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00ff0000U) >> 16)
#define MDM_AGCINITSAT__CHECK_THR_LOW__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00ff0000U)
#define MDM_AGCINITSAT__CHECK_THR_LOW__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00ff0000U) | (((uint32_t)(src) <<\
                    16) & 0x00ff0000U)
#define MDM_AGCINITSAT__CHECK_THR_LOW__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00ff0000U)))
#define MDM_AGCINITSAT__CHECK_THR_LOW__RESET_VALUE                  0x000000afU
/** @} */
#define MDM_AGCINITSAT__TYPE                                           uint32_t
#define MDM_AGCINITSAT__READ                                        0x00ffffffU
#define MDM_AGCINITSAT__WRITE                                       0x00ffffffU
#define MDM_AGCINITSAT__PRESERVED                                   0x00000000U
#define MDM_AGCINITSAT__RESET_VALUE                                 0x00af5124U

#endif /* __MDM_AGCINITSAT_MACRO__ */

/** @} end of agcinitsat */

/* macros for BlueprintGlobalNameSpace::MDM_agcpwrstepsat */
/**
 * @defgroup mdm_regs_core_agcpwrstepsat agcpwrstepsat
 * @brief Saturation control when r_power_step_gain_change_pending is set. Used only if peaksat_during_pending_gain_change is set. definitions.
 * @{
 */
#ifndef __MDM_AGCPWRSTEPSAT_MACRO__
#define __MDM_AGCPWRSTEPSAT_MACRO__

/* macros for field check_win */
/**
 * @defgroup mdm_regs_core_check_win_field check_win_field
 * @brief macros for field check_win
 * @details Number of samples to measure for EACH of I and Q. Maximum allowed is 8. If set to 0, then saturation detection is disabled.
 * @{
 */
#define MDM_AGCPWRSTEPSAT__CHECK_WIN__SHIFT                                   0
#define MDM_AGCPWRSTEPSAT__CHECK_WIN__WIDTH                                   4
#define MDM_AGCPWRSTEPSAT__CHECK_WIN__MASK                          0x0000000fU
#define MDM_AGCPWRSTEPSAT__CHECK_WIN__READ(src) ((uint32_t)(src) & 0x0000000fU)
#define MDM_AGCPWRSTEPSAT__CHECK_WIN__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x0000000fU)
#define MDM_AGCPWRSTEPSAT__CHECK_WIN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000000fU) | ((uint32_t)(src) &\
                    0x0000000fU)
#define MDM_AGCPWRSTEPSAT__CHECK_WIN__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x0000000fU)))
#define MDM_AGCPWRSTEPSAT__CHECK_WIN__RESET_VALUE                   0x00000004U
/** @} */

/* macros for field thr_cnt */
/**
 * @defgroup mdm_regs_core_thr_cnt_field thr_cnt_field
 * @brief macros for field thr_cnt
 * @details Number of saturated I and Q samples (add up I and Q) needed to declare a saturated signal. Saturation will be declared if number of measurements is greater than or equal to thr_cnt
 * @{
 */
#define MDM_AGCPWRSTEPSAT__THR_CNT__SHIFT                                     4
#define MDM_AGCPWRSTEPSAT__THR_CNT__WIDTH                                     4
#define MDM_AGCPWRSTEPSAT__THR_CNT__MASK                            0x000000f0U
#define MDM_AGCPWRSTEPSAT__THR_CNT__READ(src) \
                    (((uint32_t)(src)\
                    & 0x000000f0U) >> 4)
#define MDM_AGCPWRSTEPSAT__THR_CNT__WRITE(src) \
                    (((uint32_t)(src)\
                    << 4) & 0x000000f0U)
#define MDM_AGCPWRSTEPSAT__THR_CNT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000f0U) | (((uint32_t)(src) <<\
                    4) & 0x000000f0U)
#define MDM_AGCPWRSTEPSAT__THR_CNT__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 4) & ~0x000000f0U)))
#define MDM_AGCPWRSTEPSAT__THR_CNT__RESET_VALUE                     0x00000006U
/** @} */

/* macros for field check_thr_high */
/**
 * @defgroup mdm_regs_core_check_thr_high_field check_thr_high_field
 * @brief macros for field check_thr_high
 * @details High threshold. Signed, in units of ADC LSBs. An I or Q sample greater than or equal to check_thr_high is considered saturated.
 * @{
 */
#define MDM_AGCPWRSTEPSAT__CHECK_THR_HIGH__SHIFT                              8
#define MDM_AGCPWRSTEPSAT__CHECK_THR_HIGH__WIDTH                              8
#define MDM_AGCPWRSTEPSAT__CHECK_THR_HIGH__MASK                     0x0000ff00U
#define MDM_AGCPWRSTEPSAT__CHECK_THR_HIGH__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000ff00U) >> 8)
#define MDM_AGCPWRSTEPSAT__CHECK_THR_HIGH__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x0000ff00U)
#define MDM_AGCPWRSTEPSAT__CHECK_THR_HIGH__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ff00U) | (((uint32_t)(src) <<\
                    8) & 0x0000ff00U)
#define MDM_AGCPWRSTEPSAT__CHECK_THR_HIGH__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x0000ff00U)))
#define MDM_AGCPWRSTEPSAT__CHECK_THR_HIGH__RESET_VALUE              0x00000072U
/** @} */

/* macros for field check_thr_low */
/**
 * @defgroup mdm_regs_core_check_thr_low_field check_thr_low_field
 * @brief macros for field check_thr_low
 * @details Low threshold. Signed, in units of ADC LSBs. An I or Q sample less than or equal to check_thr_low is considered saturated. (Default 8'h8e = -114).
 * @{
 */
#define MDM_AGCPWRSTEPSAT__CHECK_THR_LOW__SHIFT                              16
#define MDM_AGCPWRSTEPSAT__CHECK_THR_LOW__WIDTH                               8
#define MDM_AGCPWRSTEPSAT__CHECK_THR_LOW__MASK                      0x00ff0000U
#define MDM_AGCPWRSTEPSAT__CHECK_THR_LOW__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00ff0000U) >> 16)
#define MDM_AGCPWRSTEPSAT__CHECK_THR_LOW__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00ff0000U)
#define MDM_AGCPWRSTEPSAT__CHECK_THR_LOW__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00ff0000U) | (((uint32_t)(src) <<\
                    16) & 0x00ff0000U)
#define MDM_AGCPWRSTEPSAT__CHECK_THR_LOW__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00ff0000U)))
#define MDM_AGCPWRSTEPSAT__CHECK_THR_LOW__RESET_VALUE               0x0000008eU
/** @} */
#define MDM_AGCPWRSTEPSAT__TYPE                                        uint32_t
#define MDM_AGCPWRSTEPSAT__READ                                     0x00ffffffU
#define MDM_AGCPWRSTEPSAT__WRITE                                    0x00ffffffU
#define MDM_AGCPWRSTEPSAT__PRESERVED                                0x00000000U
#define MDM_AGCPWRSTEPSAT__RESET_VALUE                              0x008e7264U

#endif /* __MDM_AGCPWRSTEPSAT_MACRO__ */

/** @} end of agcpwrstepsat */

/* macros for BlueprintGlobalNameSpace::MDM_agcpwr */
/**
 * @defgroup mdm_regs_core_agcpwr agcpwr
 * @brief Power measurement targets definitions.
 * @{
 */
#ifndef __MDM_AGCPWR_MACRO__
#define __MDM_AGCPWR_MACRO__

/* macros for field inband_target */
/**
 * @defgroup mdm_regs_core_inband_target_field inband_target_field
 * @brief macros for field inband_target
 * @details Signed, relative to full scale agc filter output 7'h68 = -24
 * @{
 */
#define MDM_AGCPWR__INBAND_TARGET__SHIFT                                      0
#define MDM_AGCPWR__INBAND_TARGET__WIDTH                                      7
#define MDM_AGCPWR__INBAND_TARGET__MASK                             0x0000007fU
#define MDM_AGCPWR__INBAND_TARGET__READ(src)    ((uint32_t)(src) & 0x0000007fU)
#define MDM_AGCPWR__INBAND_TARGET__WRITE(src)   ((uint32_t)(src) & 0x0000007fU)
#define MDM_AGCPWR__INBAND_TARGET__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000007fU) | ((uint32_t)(src) &\
                    0x0000007fU)
#define MDM_AGCPWR__INBAND_TARGET__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x0000007fU)))
#define MDM_AGCPWR__INBAND_TARGET__RESET_VALUE                      0x00000068U
/** @} */

/* macros for field adc_max_target */
/**
 * @defgroup mdm_regs_core_adc_max_target_field adc_max_target_field
 * @brief macros for field adc_max_target
 * @details Signed, relative to full scale ADC. 7'h77 = -9.
 * @{
 */
#define MDM_AGCPWR__ADC_MAX_TARGET__SHIFT                                     7
#define MDM_AGCPWR__ADC_MAX_TARGET__WIDTH                                     7
#define MDM_AGCPWR__ADC_MAX_TARGET__MASK                            0x00003f80U
#define MDM_AGCPWR__ADC_MAX_TARGET__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00003f80U) >> 7)
#define MDM_AGCPWR__ADC_MAX_TARGET__WRITE(src) \
                    (((uint32_t)(src)\
                    << 7) & 0x00003f80U)
#define MDM_AGCPWR__ADC_MAX_TARGET__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00003f80U) | (((uint32_t)(src) <<\
                    7) & 0x00003f80U)
#define MDM_AGCPWR__ADC_MAX_TARGET__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 7) & ~0x00003f80U)))
#define MDM_AGCPWR__ADC_MAX_TARGET__RESET_VALUE                     0x00000077U
/** @} */

/* macros for field fir_target */
/**
 * @defgroup mdm_regs_core_fir_target_field fir_target_field
 * @brief macros for field fir_target
 * @details Signed, relative to full scale FIR. Target when making a gain change based on the power measurement for RSSI, taken after the RXFIR. 7'h68 = -24.
 * @{
 */
#define MDM_AGCPWR__FIR_TARGET__SHIFT                                        14
#define MDM_AGCPWR__FIR_TARGET__WIDTH                                         7
#define MDM_AGCPWR__FIR_TARGET__MASK                                0x001fc000U
#define MDM_AGCPWR__FIR_TARGET__READ(src) \
                    (((uint32_t)(src)\
                    & 0x001fc000U) >> 14)
#define MDM_AGCPWR__FIR_TARGET__WRITE(src) \
                    (((uint32_t)(src)\
                    << 14) & 0x001fc000U)
#define MDM_AGCPWR__FIR_TARGET__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x001fc000U) | (((uint32_t)(src) <<\
                    14) & 0x001fc000U)
#define MDM_AGCPWR__FIR_TARGET__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 14) & ~0x001fc000U)))
#define MDM_AGCPWR__FIR_TARGET__RESET_VALUE                         0x00000068U
/** @} */

/* macros for field twomeg_inband_target */
/**
 * @defgroup mdm_regs_core_twomeg_inband_target_field twomeg_inband_target_field
 * @brief macros for field twomeg_inband_target
 * @details Signed, relative to full scale agc filter output 7'h68 = -24
 * @{
 */
#define MDM_AGCPWR__TWOMEG_INBAND_TARGET__SHIFT                              21
#define MDM_AGCPWR__TWOMEG_INBAND_TARGET__WIDTH                               7
#define MDM_AGCPWR__TWOMEG_INBAND_TARGET__MASK                      0x0fe00000U
#define MDM_AGCPWR__TWOMEG_INBAND_TARGET__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0fe00000U) >> 21)
#define MDM_AGCPWR__TWOMEG_INBAND_TARGET__WRITE(src) \
                    (((uint32_t)(src)\
                    << 21) & 0x0fe00000U)
#define MDM_AGCPWR__TWOMEG_INBAND_TARGET__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0fe00000U) | (((uint32_t)(src) <<\
                    21) & 0x0fe00000U)
#define MDM_AGCPWR__TWOMEG_INBAND_TARGET__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 21) & ~0x0fe00000U)))
#define MDM_AGCPWR__TWOMEG_INBAND_TARGET__RESET_VALUE               0x00000068U
/** @} */
#define MDM_AGCPWR__TYPE                                               uint32_t
#define MDM_AGCPWR__READ                                            0x0fffffffU
#define MDM_AGCPWR__WRITE                                           0x0fffffffU
#define MDM_AGCPWR__PRESERVED                                       0x00000000U
#define MDM_AGCPWR__RESET_VALUE                                     0x0d1a3be8U

#endif /* __MDM_AGCPWR_MACRO__ */

/** @} end of agcpwr */

/* macros for BlueprintGlobalNameSpace::MDM_agcpwr2 */
/**
 * @defgroup mdm_regs_core_agcpwr2 agcpwr2
 * @brief Power control definitions.
 * @{
 */
#ifndef __MDM_AGCPWR2_MACRO__
#define __MDM_AGCPWR2_MACRO__

/* macros for field meas_win */
/**
 * @defgroup mdm_regs_core_meas_win_field meas_win_field
 * @brief macros for field meas_win
 * @details Number of 16 MHz samples for power measurement. Encoding: 0 -> 4; 1 -> 8; 2 -> 12; 3 -> 16 When running front end at 8 MHz (1 Mb/s, 500 Kb/s, or 125 Kb/s), then this number is cut in half
 * @{
 */
#define MDM_AGCPWR2__MEAS_WIN__SHIFT                                          0
#define MDM_AGCPWR2__MEAS_WIN__WIDTH                                          2
#define MDM_AGCPWR2__MEAS_WIN__MASK                                 0x00000003U
#define MDM_AGCPWR2__MEAS_WIN__READ(src)        ((uint32_t)(src) & 0x00000003U)
#define MDM_AGCPWR2__MEAS_WIN__WRITE(src)       ((uint32_t)(src) & 0x00000003U)
#define MDM_AGCPWR2__MEAS_WIN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000003U) | ((uint32_t)(src) &\
                    0x00000003U)
#define MDM_AGCPWR2__MEAS_WIN__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000003U)))
#define MDM_AGCPWR2__MEAS_WIN__RESET_VALUE                          0x00000002U
/** @} */

/* macros for field det_step */
/**
 * @defgroup mdm_regs_core_det_step_field det_step_field
 * @brief macros for field det_step
 * @details dB increase required for detection based on power step
 * @{
 */
#define MDM_AGCPWR2__DET_STEP__SHIFT                                          2
#define MDM_AGCPWR2__DET_STEP__WIDTH                                          5
#define MDM_AGCPWR2__DET_STEP__MASK                                 0x0000007cU
#define MDM_AGCPWR2__DET_STEP__READ(src) (((uint32_t)(src) & 0x0000007cU) >> 2)
#define MDM_AGCPWR2__DET_STEP__WRITE(src) \
                    (((uint32_t)(src)\
                    << 2) & 0x0000007cU)
#define MDM_AGCPWR2__DET_STEP__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000007cU) | (((uint32_t)(src) <<\
                    2) & 0x0000007cU)
#define MDM_AGCPWR2__DET_STEP__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 2) & ~0x0000007cU)))
#define MDM_AGCPWR2__DET_STEP__RESET_VALUE                          0x00000006U
/** @} */

/* macros for field det_num_trig */
/**
 * @defgroup mdm_regs_core_det_num_trig_field det_num_trig_field
 * @brief macros for field det_num_trig
 * @details Number of consecutive power measurements that need to exceed threshold. Legal values: 1 or 2. But can't be 2 if det_base = 1.
 * @{
 */
#define MDM_AGCPWR2__DET_NUM_TRIG__SHIFT                                      7
#define MDM_AGCPWR2__DET_NUM_TRIG__WIDTH                                      2
#define MDM_AGCPWR2__DET_NUM_TRIG__MASK                             0x00000180U
#define MDM_AGCPWR2__DET_NUM_TRIG__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000180U) >> 7)
#define MDM_AGCPWR2__DET_NUM_TRIG__WRITE(src) \
                    (((uint32_t)(src)\
                    << 7) & 0x00000180U)
#define MDM_AGCPWR2__DET_NUM_TRIG__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000180U) | (((uint32_t)(src) <<\
                    7) & 0x00000180U)
#define MDM_AGCPWR2__DET_NUM_TRIG__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 7) & ~0x00000180U)))
#define MDM_AGCPWR2__DET_NUM_TRIG__RESET_VALUE                      0x00000001U
/** @} */

/* macros for field det_base */
/**
 * @defgroup mdm_regs_core_det_base_field det_base_field
 * @brief macros for field det_base
 * @details Specifies reference point for power step calculation. 0: reserved 1: most recent 4 measurements (_d1, _d2, _d3, _d4) 2: skip most recent, and then take next 4 (_d2, _d3, _d4, _d5) 3: skip most recent 2, and then take next 4 (_d3, _d4, _d5, _d6)
 * @{
 */
#define MDM_AGCPWR2__DET_BASE__SHIFT                                          9
#define MDM_AGCPWR2__DET_BASE__WIDTH                                          2
#define MDM_AGCPWR2__DET_BASE__MASK                                 0x00000600U
#define MDM_AGCPWR2__DET_BASE__READ(src) (((uint32_t)(src) & 0x00000600U) >> 9)
#define MDM_AGCPWR2__DET_BASE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 9) & 0x00000600U)
#define MDM_AGCPWR2__DET_BASE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000600U) | (((uint32_t)(src) <<\
                    9) & 0x00000600U)
#define MDM_AGCPWR2__DET_BASE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 9) & ~0x00000600U)))
#define MDM_AGCPWR2__DET_BASE__RESET_VALUE                          0x00000003U
/** @} */

/* macros for field det_step_delta */
/**
 * @defgroup mdm_regs_core_det_step_delta_field det_step_delta_field
 * @brief macros for field det_step_delta
 * @details Addition in dB to det_step if baseline power < det_min + baseline_blk_pwr_offset
 * @{
 */
#define MDM_AGCPWR2__DET_STEP_DELTA__SHIFT                                   11
#define MDM_AGCPWR2__DET_STEP_DELTA__WIDTH                                    4
#define MDM_AGCPWR2__DET_STEP_DELTA__MASK                           0x00007800U
#define MDM_AGCPWR2__DET_STEP_DELTA__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00007800U) >> 11)
#define MDM_AGCPWR2__DET_STEP_DELTA__WRITE(src) \
                    (((uint32_t)(src)\
                    << 11) & 0x00007800U)
#define MDM_AGCPWR2__DET_STEP_DELTA__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00007800U) | (((uint32_t)(src) <<\
                    11) & 0x00007800U)
#define MDM_AGCPWR2__DET_STEP_DELTA__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 11) & ~0x00007800U)))
#define MDM_AGCPWR2__DET_STEP_DELTA__RESET_VALUE                    0x00000003U
/** @} */

/* macros for field baseline_blk_pwr_offset */
/**
 * @defgroup mdm_regs_core_baseline_blk_pwr_offset_field baseline_blk_pwr_offset_field
 * @brief macros for field baseline_blk_pwr_offset
 * @details Used in comparison to adjust det_step
 * @{
 */
#define MDM_AGCPWR2__BASELINE_BLK_PWR_OFFSET__SHIFT                          15
#define MDM_AGCPWR2__BASELINE_BLK_PWR_OFFSET__WIDTH                           6
#define MDM_AGCPWR2__BASELINE_BLK_PWR_OFFSET__MASK                  0x001f8000U
#define MDM_AGCPWR2__BASELINE_BLK_PWR_OFFSET__READ(src) \
                    (((uint32_t)(src)\
                    & 0x001f8000U) >> 15)
#define MDM_AGCPWR2__BASELINE_BLK_PWR_OFFSET__WRITE(src) \
                    (((uint32_t)(src)\
                    << 15) & 0x001f8000U)
#define MDM_AGCPWR2__BASELINE_BLK_PWR_OFFSET__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x001f8000U) | (((uint32_t)(src) <<\
                    15) & 0x001f8000U)
#define MDM_AGCPWR2__BASELINE_BLK_PWR_OFFSET__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 15) & ~0x001f8000U)))
#define MDM_AGCPWR2__BASELINE_BLK_PWR_OFFSET__RESET_VALUE           0x00000018U
/** @} */

/* macros for field rssi_thr_to_force_ffe */
/**
 * @defgroup mdm_regs_core_rssi_thr_to_force_ffe_field rssi_thr_to_force_ffe_field
 * @brief macros for field rssi_thr_to_force_ffe
 * @details If RSSI is below this value, then use ffe (for uncoded only) independent of total to inband power ratio. 8'hab = -85
 * @{
 */
#define MDM_AGCPWR2__RSSI_THR_TO_FORCE_FFE__SHIFT                            21
#define MDM_AGCPWR2__RSSI_THR_TO_FORCE_FFE__WIDTH                             8
#define MDM_AGCPWR2__RSSI_THR_TO_FORCE_FFE__MASK                    0x1fe00000U
#define MDM_AGCPWR2__RSSI_THR_TO_FORCE_FFE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x1fe00000U) >> 21)
#define MDM_AGCPWR2__RSSI_THR_TO_FORCE_FFE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 21) & 0x1fe00000U)
#define MDM_AGCPWR2__RSSI_THR_TO_FORCE_FFE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x1fe00000U) | (((uint32_t)(src) <<\
                    21) & 0x1fe00000U)
#define MDM_AGCPWR2__RSSI_THR_TO_FORCE_FFE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 21) & ~0x1fe00000U)))
#define MDM_AGCPWR2__RSSI_THR_TO_FORCE_FFE__RESET_VALUE             0x000000abU
/** @} */

/* macros for field pwr_ratio_for_det_step_delta_enable */
/**
 * @defgroup mdm_regs_core_pwr_ratio_for_det_step_delta_enable_field pwr_ratio_for_det_step_delta_enable_field
 * @brief macros for field pwr_ratio_for_det_step_delta_enable
 * @details If set, add det_step_delta when total_pwr >= baseline_blk_pwr_offset plus pwr_baseline. If clear, add det_step_delta when pwr_baseline >= det_min plus baseline_blk_pwr_offset
 * @{
 */
#define MDM_AGCPWR2__PWR_RATIO_FOR_DET_STEP_DELTA_ENABLE__SHIFT              29
#define MDM_AGCPWR2__PWR_RATIO_FOR_DET_STEP_DELTA_ENABLE__WIDTH               1
#define MDM_AGCPWR2__PWR_RATIO_FOR_DET_STEP_DELTA_ENABLE__MASK      0x20000000U
#define MDM_AGCPWR2__PWR_RATIO_FOR_DET_STEP_DELTA_ENABLE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x20000000U) >> 29)
#define MDM_AGCPWR2__PWR_RATIO_FOR_DET_STEP_DELTA_ENABLE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 29) & 0x20000000U)
#define MDM_AGCPWR2__PWR_RATIO_FOR_DET_STEP_DELTA_ENABLE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x20000000U) | (((uint32_t)(src) <<\
                    29) & 0x20000000U)
#define MDM_AGCPWR2__PWR_RATIO_FOR_DET_STEP_DELTA_ENABLE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 29) & ~0x20000000U)))
#define MDM_AGCPWR2__PWR_RATIO_FOR_DET_STEP_DELTA_ENABLE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x20000000U) | ((uint32_t)(1) << 29)
#define MDM_AGCPWR2__PWR_RATIO_FOR_DET_STEP_DELTA_ENABLE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x20000000U) | ((uint32_t)(0) << 29)
#define MDM_AGCPWR2__PWR_RATIO_FOR_DET_STEP_DELTA_ENABLE__RESET_VALUE \
                    0x00000001U
/** @} */
#define MDM_AGCPWR2__TYPE                                              uint32_t
#define MDM_AGCPWR2__READ                                           0x3fffffffU
#define MDM_AGCPWR2__WRITE                                          0x3fffffffU
#define MDM_AGCPWR2__PRESERVED                                      0x00000000U
#define MDM_AGCPWR2__RESET_VALUE                                    0x356c1e9aU

#endif /* __MDM_AGCPWR2_MACRO__ */

/** @} end of agcpwr2 */

/* macros for BlueprintGlobalNameSpace::MDM_agctime */
/**
 * @defgroup mdm_regs_core_agctime agctime
 * @brief agc delays definitions.
 * @{
 */
#ifndef __MDM_AGCTIME_MACRO__
#define __MDM_AGCTIME_MACRO__

/* macros for field gain_settle */
/**
 * @defgroup mdm_regs_core_gain_settle_field gain_settle_field
 * @brief macros for field gain_settle
 * @details number of 16 MHz clocks from gain change to when coarse/saturation measurements can begin. MUST BE EVEN. Register replicated for 2 Mb/s
 * @{
 */
#define MDM_AGCTIME__GAIN_SETTLE__SHIFT                                       0
#define MDM_AGCTIME__GAIN_SETTLE__WIDTH                                       6
#define MDM_AGCTIME__GAIN_SETTLE__MASK                              0x0000003fU
#define MDM_AGCTIME__GAIN_SETTLE__READ(src)     ((uint32_t)(src) & 0x0000003fU)
#define MDM_AGCTIME__GAIN_SETTLE__WRITE(src)    ((uint32_t)(src) & 0x0000003fU)
#define MDM_AGCTIME__GAIN_SETTLE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000003fU) | ((uint32_t)(src) &\
                    0x0000003fU)
#define MDM_AGCTIME__GAIN_SETTLE__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x0000003fU)))
#define MDM_AGCTIME__GAIN_SETTLE__RESET_VALUE                       0x0000001cU
/** @} */

/* macros for field power_settle_strong */
/**
 * @defgroup mdm_regs_core_power_settle_strong_field power_settle_strong_field
 * @brief macros for field power_settle_strong
 * @details number of 16 MHz clocks to wait in addition to gain_settle after doing a peak/sat gain change prior to doing the subsequent power measurement for fine gain. The intent is to support any additional delay that may be needed for power ramp. MUST BE EVEN. Register replicated for 2 Mb/s
 * @{
 */
#define MDM_AGCTIME__POWER_SETTLE_STRONG__SHIFT                               6
#define MDM_AGCTIME__POWER_SETTLE_STRONG__WIDTH                               6
#define MDM_AGCTIME__POWER_SETTLE_STRONG__MASK                      0x00000fc0U
#define MDM_AGCTIME__POWER_SETTLE_STRONG__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000fc0U) >> 6)
#define MDM_AGCTIME__POWER_SETTLE_STRONG__WRITE(src) \
                    (((uint32_t)(src)\
                    << 6) & 0x00000fc0U)
#define MDM_AGCTIME__POWER_SETTLE_STRONG__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000fc0U) | (((uint32_t)(src) <<\
                    6) & 0x00000fc0U)
#define MDM_AGCTIME__POWER_SETTLE_STRONG__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 6) & ~0x00000fc0U)))
#define MDM_AGCTIME__POWER_SETTLE_STRONG__RESET_VALUE               0x00000000U
/** @} */

/* macros for field power_settle_weak */
/**
 * @defgroup mdm_regs_core_power_settle_weak_field power_settle_weak_field
 * @brief macros for field power_settle_weak
 * @details when agccntl_use_next_meas_for_fine is set, number of 16 MHz clocks to wait from declaring power step to *start* power measurement to be used to calculate fine gain change. MUST BE EVEN. Register replicated for 2 Mb/s
 * @{
 */
#define MDM_AGCTIME__POWER_SETTLE_WEAK__SHIFT                                12
#define MDM_AGCTIME__POWER_SETTLE_WEAK__WIDTH                                 6
#define MDM_AGCTIME__POWER_SETTLE_WEAK__MASK                        0x0003f000U
#define MDM_AGCTIME__POWER_SETTLE_WEAK__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0003f000U) >> 12)
#define MDM_AGCTIME__POWER_SETTLE_WEAK__WRITE(src) \
                    (((uint32_t)(src)\
                    << 12) & 0x0003f000U)
#define MDM_AGCTIME__POWER_SETTLE_WEAK__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0003f000U) | (((uint32_t)(src) <<\
                    12) & 0x0003f000U)
#define MDM_AGCTIME__POWER_SETTLE_WEAK__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 12) & ~0x0003f000U)))
#define MDM_AGCTIME__POWER_SETTLE_WEAK__RESET_VALUE                 0x00000000U
/** @} */

/* macros for field sync_demod_delay */
/**
 * @defgroup mdm_regs_core_sync_demod_delay_field sync_demod_delay_field
 * @brief macros for field sync_demod_delay
 * @details Number of 16 MHz cycles for RXFIR to make a valid phase measurement. This parameter was originally used just for the assertion of enable_syncdemod but is now also used for enabling correlation detect. However, the name was retained. Nominally ~60 if want to wait for entire RXFIR to fill. (29 taps at 8 MHz, plus a couple clocks for CIC). Set to ~4 when bypass_rxfir is set. MUST BE EVEN. Register replicated for 2 Mb/s
 * @{
 */
#define MDM_AGCTIME__SYNC_DEMOD_DELAY__SHIFT                                 18
#define MDM_AGCTIME__SYNC_DEMOD_DELAY__WIDTH                                  7
#define MDM_AGCTIME__SYNC_DEMOD_DELAY__MASK                         0x01fc0000U
#define MDM_AGCTIME__SYNC_DEMOD_DELAY__READ(src) \
                    (((uint32_t)(src)\
                    & 0x01fc0000U) >> 18)
#define MDM_AGCTIME__SYNC_DEMOD_DELAY__WRITE(src) \
                    (((uint32_t)(src)\
                    << 18) & 0x01fc0000U)
#define MDM_AGCTIME__SYNC_DEMOD_DELAY__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x01fc0000U) | (((uint32_t)(src) <<\
                    18) & 0x01fc0000U)
#define MDM_AGCTIME__SYNC_DEMOD_DELAY__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 18) & ~0x01fc0000U)))
#define MDM_AGCTIME__SYNC_DEMOD_DELAY__RESET_VALUE                  0x0000001eU
/** @} */

/* macros for field filt_settle */
/**
 * @defgroup mdm_regs_core_filt_settle_field filt_settle_field
 * @brief macros for field filt_settle
 * @details Number of 16 MHz cycles for agc filter to settle. Should reduce this if bypass_agc_filt is set to 1. MUST BE EVEN. Register replicated for 2 Mb/s
 * @{
 */
#define MDM_AGCTIME__FILT_SETTLE__SHIFT                                      25
#define MDM_AGCTIME__FILT_SETTLE__WIDTH                                       7
#define MDM_AGCTIME__FILT_SETTLE__MASK                              0xfe000000U
#define MDM_AGCTIME__FILT_SETTLE__READ(src) \
                    (((uint32_t)(src)\
                    & 0xfe000000U) >> 25)
#define MDM_AGCTIME__FILT_SETTLE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 25) & 0xfe000000U)
#define MDM_AGCTIME__FILT_SETTLE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xfe000000U) | (((uint32_t)(src) <<\
                    25) & 0xfe000000U)
#define MDM_AGCTIME__FILT_SETTLE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 25) & ~0xfe000000U)))
#define MDM_AGCTIME__FILT_SETTLE__RESET_VALUE                       0x00000020U
/** @} */
#define MDM_AGCTIME__TYPE                                              uint32_t
#define MDM_AGCTIME__READ                                           0xffffffffU
#define MDM_AGCTIME__WRITE                                          0xffffffffU
#define MDM_AGCTIME__PRESERVED                                      0x00000000U
#define MDM_AGCTIME__RESET_VALUE                                    0x4078001cU

#endif /* __MDM_AGCTIME_MACRO__ */

/** @} end of agctime */

/* macros for BlueprintGlobalNameSpace::MDM_twomeg_agctime */
/**
 * @defgroup mdm_regs_core_twomeg_agctime twomeg_agctime
 * @brief agc delays for 2 Mb/s definitions.
 * @{
 */
#ifndef __MDM_TWOMEG_AGCTIME_MACRO__
#define __MDM_TWOMEG_AGCTIME_MACRO__

/* macros for field gain_settle */
/**
 * @defgroup mdm_regs_core_gain_settle_field gain_settle_field
 * @brief macros for field gain_settle
 * @details number of 16 MHz clocks from gain change to when coarse/saturation measurements can begin. 2 Mb/s version of register
 * @{
 */
#define MDM_TWOMEG_AGCTIME__GAIN_SETTLE__SHIFT                                0
#define MDM_TWOMEG_AGCTIME__GAIN_SETTLE__WIDTH                                6
#define MDM_TWOMEG_AGCTIME__GAIN_SETTLE__MASK                       0x0000003fU
#define MDM_TWOMEG_AGCTIME__GAIN_SETTLE__READ(src) \
                    ((uint32_t)(src)\
                    & 0x0000003fU)
#define MDM_TWOMEG_AGCTIME__GAIN_SETTLE__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x0000003fU)
#define MDM_TWOMEG_AGCTIME__GAIN_SETTLE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000003fU) | ((uint32_t)(src) &\
                    0x0000003fU)
#define MDM_TWOMEG_AGCTIME__GAIN_SETTLE__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x0000003fU)))
#define MDM_TWOMEG_AGCTIME__GAIN_SETTLE__RESET_VALUE                0x00000010U
/** @} */

/* macros for field power_settle_strong */
/**
 * @defgroup mdm_regs_core_power_settle_strong_field power_settle_strong_field
 * @brief macros for field power_settle_strong
 * @details number of 16 MHz clocks to wait in addition to gain_settle after doing a peak/sat gain change prior to doing the subsequent power measurement for fine gain. The intent is to support any additional delay that may be needed for power ramp. 2 Mb/s version of register
 * @{
 */
#define MDM_TWOMEG_AGCTIME__POWER_SETTLE_STRONG__SHIFT                        6
#define MDM_TWOMEG_AGCTIME__POWER_SETTLE_STRONG__WIDTH                        6
#define MDM_TWOMEG_AGCTIME__POWER_SETTLE_STRONG__MASK               0x00000fc0U
#define MDM_TWOMEG_AGCTIME__POWER_SETTLE_STRONG__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000fc0U) >> 6)
#define MDM_TWOMEG_AGCTIME__POWER_SETTLE_STRONG__WRITE(src) \
                    (((uint32_t)(src)\
                    << 6) & 0x00000fc0U)
#define MDM_TWOMEG_AGCTIME__POWER_SETTLE_STRONG__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000fc0U) | (((uint32_t)(src) <<\
                    6) & 0x00000fc0U)
#define MDM_TWOMEG_AGCTIME__POWER_SETTLE_STRONG__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 6) & ~0x00000fc0U)))
#define MDM_TWOMEG_AGCTIME__POWER_SETTLE_STRONG__RESET_VALUE        0x00000000U
/** @} */

/* macros for field power_settle_weak */
/**
 * @defgroup mdm_regs_core_power_settle_weak_field power_settle_weak_field
 * @brief macros for field power_settle_weak
 * @details when agccntl_use_next_meas_for_fine is set, number of 16 MHz clocks to wait from declaring power step to *start* power measurement to be used to calculate fine gain change. 2 Mb/s version of register
 * @{
 */
#define MDM_TWOMEG_AGCTIME__POWER_SETTLE_WEAK__SHIFT                         12
#define MDM_TWOMEG_AGCTIME__POWER_SETTLE_WEAK__WIDTH                          6
#define MDM_TWOMEG_AGCTIME__POWER_SETTLE_WEAK__MASK                 0x0003f000U
#define MDM_TWOMEG_AGCTIME__POWER_SETTLE_WEAK__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0003f000U) >> 12)
#define MDM_TWOMEG_AGCTIME__POWER_SETTLE_WEAK__WRITE(src) \
                    (((uint32_t)(src)\
                    << 12) & 0x0003f000U)
#define MDM_TWOMEG_AGCTIME__POWER_SETTLE_WEAK__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0003f000U) | (((uint32_t)(src) <<\
                    12) & 0x0003f000U)
#define MDM_TWOMEG_AGCTIME__POWER_SETTLE_WEAK__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 12) & ~0x0003f000U)))
#define MDM_TWOMEG_AGCTIME__POWER_SETTLE_WEAK__RESET_VALUE          0x00000000U
/** @} */

/* macros for field sync_demod_delay */
/**
 * @defgroup mdm_regs_core_sync_demod_delay_field sync_demod_delay_field
 * @brief macros for field sync_demod_delay
 * @details Number of 16 MHz cycles for RXFIR to make a valid phase measurement. This parameter was originally used just for the assertion of enable_syncdemod but is now also used for enabling correlation detect. However, the name was retained. Nominally ~40 if want to wait for the entire RXFIR to fill. Set to ~2 when bypass_rxfir is set. 2 Mb/s version of register
 * @{
 */
#define MDM_TWOMEG_AGCTIME__SYNC_DEMOD_DELAY__SHIFT                          18
#define MDM_TWOMEG_AGCTIME__SYNC_DEMOD_DELAY__WIDTH                           7
#define MDM_TWOMEG_AGCTIME__SYNC_DEMOD_DELAY__MASK                  0x01fc0000U
#define MDM_TWOMEG_AGCTIME__SYNC_DEMOD_DELAY__READ(src) \
                    (((uint32_t)(src)\
                    & 0x01fc0000U) >> 18)
#define MDM_TWOMEG_AGCTIME__SYNC_DEMOD_DELAY__WRITE(src) \
                    (((uint32_t)(src)\
                    << 18) & 0x01fc0000U)
#define MDM_TWOMEG_AGCTIME__SYNC_DEMOD_DELAY__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x01fc0000U) | (((uint32_t)(src) <<\
                    18) & 0x01fc0000U)
#define MDM_TWOMEG_AGCTIME__SYNC_DEMOD_DELAY__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 18) & ~0x01fc0000U)))
#define MDM_TWOMEG_AGCTIME__SYNC_DEMOD_DELAY__RESET_VALUE           0x00000013U
/** @} */

/* macros for field filt_settle */
/**
 * @defgroup mdm_regs_core_filt_settle_field filt_settle_field
 * @brief macros for field filt_settle
 * @details Number of 16 MHz cycles for agc filter to settle. Should reduce this if bypass_agc_filt is set to 1. 2 Mb/s version of register
 * @{
 */
#define MDM_TWOMEG_AGCTIME__FILT_SETTLE__SHIFT                               25
#define MDM_TWOMEG_AGCTIME__FILT_SETTLE__WIDTH                                7
#define MDM_TWOMEG_AGCTIME__FILT_SETTLE__MASK                       0xfe000000U
#define MDM_TWOMEG_AGCTIME__FILT_SETTLE__READ(src) \
                    (((uint32_t)(src)\
                    & 0xfe000000U) >> 25)
#define MDM_TWOMEG_AGCTIME__FILT_SETTLE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 25) & 0xfe000000U)
#define MDM_TWOMEG_AGCTIME__FILT_SETTLE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xfe000000U) | (((uint32_t)(src) <<\
                    25) & 0xfe000000U)
#define MDM_TWOMEG_AGCTIME__FILT_SETTLE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 25) & ~0xfe000000U)))
#define MDM_TWOMEG_AGCTIME__FILT_SETTLE__RESET_VALUE                0x00000020U
/** @} */
#define MDM_TWOMEG_AGCTIME__TYPE                                       uint32_t
#define MDM_TWOMEG_AGCTIME__READ                                    0xffffffffU
#define MDM_TWOMEG_AGCTIME__WRITE                                   0xffffffffU
#define MDM_TWOMEG_AGCTIME__PRESERVED                               0x00000000U
#define MDM_TWOMEG_AGCTIME__RESET_VALUE                             0x404c0010U

#endif /* __MDM_TWOMEG_AGCTIME_MACRO__ */

/** @} end of twomeg_agctime */

/* macros for BlueprintGlobalNameSpace::MDM_agctime2 */
/**
 * @defgroup mdm_regs_core_agctime2 agctime2
 * @brief agc delays definitions.
 * @{
 */
#ifndef __MDM_AGCTIME2_MACRO__
#define __MDM_AGCTIME2_MACRO__

/* macros for field rx_en_to_search */
/**
 * @defgroup mdm_regs_core_rx_en_to_search_field rx_en_to_search_field
 * @brief macros for field rx_en_to_search
 * @details number of 16 MHz clocks from rx_en assertion to agc start search. Need to keep in sync with rif registers for rxon and adcon.
 * @{
 */
#define MDM_AGCTIME2__RX_EN_TO_SEARCH__SHIFT                                  0
#define MDM_AGCTIME2__RX_EN_TO_SEARCH__WIDTH                                 11
#define MDM_AGCTIME2__RX_EN_TO_SEARCH__MASK                         0x000007ffU
#define MDM_AGCTIME2__RX_EN_TO_SEARCH__READ(src) \
                    ((uint32_t)(src)\
                    & 0x000007ffU)
#define MDM_AGCTIME2__RX_EN_TO_SEARCH__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x000007ffU)
#define MDM_AGCTIME2__RX_EN_TO_SEARCH__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000007ffU) | ((uint32_t)(src) &\
                    0x000007ffU)
#define MDM_AGCTIME2__RX_EN_TO_SEARCH__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000007ffU)))
#define MDM_AGCTIME2__RX_EN_TO_SEARCH__RESET_VALUE                  0x00000326U
/** @} */

/* macros for field init_sat_time */
/**
 * @defgroup mdm_regs_core_init_sat_time_field init_sat_time_field
 * @brief macros for field init_sat_time
 * @details Upon first entry into MEASURE state, the number of 16 MHz clocks to declare an initial saturation. Setting to 0 will disable initial saturation loop
 * @{
 */
#define MDM_AGCTIME2__INIT_SAT_TIME__SHIFT                                   11
#define MDM_AGCTIME2__INIT_SAT_TIME__WIDTH                                    8
#define MDM_AGCTIME2__INIT_SAT_TIME__MASK                           0x0007f800U
#define MDM_AGCTIME2__INIT_SAT_TIME__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0007f800U) >> 11)
#define MDM_AGCTIME2__INIT_SAT_TIME__WRITE(src) \
                    (((uint32_t)(src)\
                    << 11) & 0x0007f800U)
#define MDM_AGCTIME2__INIT_SAT_TIME__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0007f800U) | (((uint32_t)(src) <<\
                    11) & 0x0007f800U)
#define MDM_AGCTIME2__INIT_SAT_TIME__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 11) & ~0x0007f800U)))
#define MDM_AGCTIME2__INIT_SAT_TIME__RESET_VALUE                    0x00000010U
/** @} */

/* macros for field reset_filt_delay */
/**
 * @defgroup mdm_regs_core_reset_filt_delay_field reset_filt_delay_field
 * @brief macros for field reset_filt_delay
 * @details Number of 16 MHz clocks to hold agc filter in reset before releasing in the WAIT_GAIN_SETTLE state. MUST BE EVEN AND AT LEAST 4 AND LESS THAN OR EQUAL TO AGCTIME_GAIN_SETTLE. Register replicated for 2 Mb/s.
 * @{
 */
#define MDM_AGCTIME2__RESET_FILT_DELAY__SHIFT                                19
#define MDM_AGCTIME2__RESET_FILT_DELAY__WIDTH                                 6
#define MDM_AGCTIME2__RESET_FILT_DELAY__MASK                        0x01f80000U
#define MDM_AGCTIME2__RESET_FILT_DELAY__READ(src) \
                    (((uint32_t)(src)\
                    & 0x01f80000U) >> 19)
#define MDM_AGCTIME2__RESET_FILT_DELAY__WRITE(src) \
                    (((uint32_t)(src)\
                    << 19) & 0x01f80000U)
#define MDM_AGCTIME2__RESET_FILT_DELAY__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x01f80000U) | (((uint32_t)(src) <<\
                    19) & 0x01f80000U)
#define MDM_AGCTIME2__RESET_FILT_DELAY__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 19) & ~0x01f80000U)))
#define MDM_AGCTIME2__RESET_FILT_DELAY__RESET_VALUE                 0x00000010U
/** @} */

/* macros for field twomeg_reset_filt_delay */
/**
 * @defgroup mdm_regs_core_twomeg_reset_filt_delay_field twomeg_reset_filt_delay_field
 * @brief macros for field twomeg_reset_filt_delay
 * @details Number of 16 MHz clocks to hold agc filter in reset before releasing in the WAIT_GAIN_SETTLE state. MUST BE AT LEAST 4 AND LESS THAN OR EQUAL TO TWOMEG_AGCTIME_GAIN_SETTLE. 2 Mb/s version of this register
 * @{
 */
#define MDM_AGCTIME2__TWOMEG_RESET_FILT_DELAY__SHIFT                         25
#define MDM_AGCTIME2__TWOMEG_RESET_FILT_DELAY__WIDTH                          6
#define MDM_AGCTIME2__TWOMEG_RESET_FILT_DELAY__MASK                 0x7e000000U
#define MDM_AGCTIME2__TWOMEG_RESET_FILT_DELAY__READ(src) \
                    (((uint32_t)(src)\
                    & 0x7e000000U) >> 25)
#define MDM_AGCTIME2__TWOMEG_RESET_FILT_DELAY__WRITE(src) \
                    (((uint32_t)(src)\
                    << 25) & 0x7e000000U)
#define MDM_AGCTIME2__TWOMEG_RESET_FILT_DELAY__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x7e000000U) | (((uint32_t)(src) <<\
                    25) & 0x7e000000U)
#define MDM_AGCTIME2__TWOMEG_RESET_FILT_DELAY__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 25) & ~0x7e000000U)))
#define MDM_AGCTIME2__TWOMEG_RESET_FILT_DELAY__RESET_VALUE          0x0000000aU
/** @} */
#define MDM_AGCTIME2__TYPE                                             uint32_t
#define MDM_AGCTIME2__READ                                          0x7fffffffU
#define MDM_AGCTIME2__WRITE                                         0x7fffffffU
#define MDM_AGCTIME2__PRESERVED                                     0x00000000U
#define MDM_AGCTIME2__RESET_VALUE                                   0x14808326U

#endif /* __MDM_AGCTIME2_MACRO__ */

/** @} end of agctime2 */

/* macros for BlueprintGlobalNameSpace::MDM_agccntl */
/**
 * @defgroup mdm_regs_core_agccntl agccntl
 * @brief agc control definitions.
 * @{
 */
#ifndef __MDM_AGCCNTL_MACRO__
#define __MDM_AGCCNTL_MACRO__

/* macros for field enable_peakdet */
/**
 * @defgroup mdm_regs_core_enable_peakdet_field enable_peakdet_field
 * @brief macros for field enable_peakdet
 * @details RX state machine will observe lna_peakdet
 * @{
 */
#define MDM_AGCCNTL__ENABLE_PEAKDET__SHIFT                                    0
#define MDM_AGCCNTL__ENABLE_PEAKDET__WIDTH                                    1
#define MDM_AGCCNTL__ENABLE_PEAKDET__MASK                           0x00000001U
#define MDM_AGCCNTL__ENABLE_PEAKDET__READ(src)  ((uint32_t)(src) & 0x00000001U)
#define MDM_AGCCNTL__ENABLE_PEAKDET__WRITE(src) ((uint32_t)(src) & 0x00000001U)
#define MDM_AGCCNTL__ENABLE_PEAKDET__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define MDM_AGCCNTL__ENABLE_PEAKDET__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define MDM_AGCCNTL__ENABLE_PEAKDET__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define MDM_AGCCNTL__ENABLE_PEAKDET__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define MDM_AGCCNTL__ENABLE_PEAKDET__RESET_VALUE                    0x00000001U
/** @} */

/* macros for field max */
/**
 * @defgroup mdm_regs_core_max_field max_field
 * @brief macros for field max
 * @details Max RX gain
 * @{
 */
#define MDM_AGCCNTL__MAX__SHIFT                                               1
#define MDM_AGCCNTL__MAX__WIDTH                                               7
#define MDM_AGCCNTL__MAX__MASK                                      0x000000feU
#define MDM_AGCCNTL__MAX__READ(src)      (((uint32_t)(src) & 0x000000feU) >> 1)
#define MDM_AGCCNTL__MAX__WRITE(src)     (((uint32_t)(src) << 1) & 0x000000feU)
#define MDM_AGCCNTL__MAX__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000feU) | (((uint32_t)(src) <<\
                    1) & 0x000000feU)
#define MDM_AGCCNTL__MAX__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x000000feU)))
#define MDM_AGCCNTL__MAX__RESET_VALUE                               0x00000052U
/** @} */

/* macros for field gain_change_on_rssi_meas */
/**
 * @defgroup mdm_regs_core_gain_change_on_rssi_meas_field gain_change_on_rssi_meas_field
 * @brief macros for field gain_change_on_rssi_meas
 * @details Perform a fine gain change based on the power measurement taken for RSSI reporting
 * @{
 */
#define MDM_AGCCNTL__GAIN_CHANGE_ON_RSSI_MEAS__SHIFT                          8
#define MDM_AGCCNTL__GAIN_CHANGE_ON_RSSI_MEAS__WIDTH                          1
#define MDM_AGCCNTL__GAIN_CHANGE_ON_RSSI_MEAS__MASK                 0x00000100U
#define MDM_AGCCNTL__GAIN_CHANGE_ON_RSSI_MEAS__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000100U) >> 8)
#define MDM_AGCCNTL__GAIN_CHANGE_ON_RSSI_MEAS__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x00000100U)
#define MDM_AGCCNTL__GAIN_CHANGE_ON_RSSI_MEAS__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000100U) | (((uint32_t)(src) <<\
                    8) & 0x00000100U)
#define MDM_AGCCNTL__GAIN_CHANGE_ON_RSSI_MEAS__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x00000100U)))
#define MDM_AGCCNTL__GAIN_CHANGE_ON_RSSI_MEAS__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000100U) | ((uint32_t)(1) << 8)
#define MDM_AGCCNTL__GAIN_CHANGE_ON_RSSI_MEAS__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000100U) | ((uint32_t)(0) << 8)
#define MDM_AGCCNTL__GAIN_CHANGE_ON_RSSI_MEAS__RESET_VALUE          0x00000000U
/** @} */

/* macros for field rssi_meas_after_freqest */
/**
 * @defgroup mdm_regs_core_rssi_meas_after_freqest_field rssi_meas_after_freqest_field
 * @brief macros for field rssi_meas_after_freqest
 * @details Delay the power measurement for RSSI until after frequency estimation has completed. This may be useful if a gain change will result in a phase change that will noticeably impact the frequency estimate
 * @{
 */
#define MDM_AGCCNTL__RSSI_MEAS_AFTER_FREQEST__SHIFT                           9
#define MDM_AGCCNTL__RSSI_MEAS_AFTER_FREQEST__WIDTH                           1
#define MDM_AGCCNTL__RSSI_MEAS_AFTER_FREQEST__MASK                  0x00000200U
#define MDM_AGCCNTL__RSSI_MEAS_AFTER_FREQEST__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000200U) >> 9)
#define MDM_AGCCNTL__RSSI_MEAS_AFTER_FREQEST__WRITE(src) \
                    (((uint32_t)(src)\
                    << 9) & 0x00000200U)
#define MDM_AGCCNTL__RSSI_MEAS_AFTER_FREQEST__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000200U) | (((uint32_t)(src) <<\
                    9) & 0x00000200U)
#define MDM_AGCCNTL__RSSI_MEAS_AFTER_FREQEST__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 9) & ~0x00000200U)))
#define MDM_AGCCNTL__RSSI_MEAS_AFTER_FREQEST__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000200U) | ((uint32_t)(1) << 9)
#define MDM_AGCCNTL__RSSI_MEAS_AFTER_FREQEST__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000200U) | ((uint32_t)(0) << 9)
#define MDM_AGCCNTL__RSSI_MEAS_AFTER_FREQEST__RESET_VALUE           0x00000000U
/** @} */

/* macros for field force_rxgain */
/**
 * @defgroup mdm_regs_core_force_rxgain_field force_rxgain_field
 * @brief macros for field force_rxgain
 * @details If set, force rxgain
 * @{
 */
#define MDM_AGCCNTL__FORCE_RXGAIN__SHIFT                                     10
#define MDM_AGCCNTL__FORCE_RXGAIN__WIDTH                                      1
#define MDM_AGCCNTL__FORCE_RXGAIN__MASK                             0x00000400U
#define MDM_AGCCNTL__FORCE_RXGAIN__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000400U) >> 10)
#define MDM_AGCCNTL__FORCE_RXGAIN__WRITE(src) \
                    (((uint32_t)(src)\
                    << 10) & 0x00000400U)
#define MDM_AGCCNTL__FORCE_RXGAIN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000400U) | (((uint32_t)(src) <<\
                    10) & 0x00000400U)
#define MDM_AGCCNTL__FORCE_RXGAIN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 10) & ~0x00000400U)))
#define MDM_AGCCNTL__FORCE_RXGAIN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000400U) | ((uint32_t)(1) << 10)
#define MDM_AGCCNTL__FORCE_RXGAIN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000400U) | ((uint32_t)(0) << 10)
#define MDM_AGCCNTL__FORCE_RXGAIN__RESET_VALUE                      0x00000000U
/** @} */

/* macros for field forced_rxgain_value */
/**
 * @defgroup mdm_regs_core_forced_rxgain_value_field forced_rxgain_value_field
 * @brief macros for field forced_rxgain_value
 * @details When rxgain forced, use this value
 * @{
 */
#define MDM_AGCCNTL__FORCED_RXGAIN_VALUE__SHIFT                              11
#define MDM_AGCCNTL__FORCED_RXGAIN_VALUE__WIDTH                               7
#define MDM_AGCCNTL__FORCED_RXGAIN_VALUE__MASK                      0x0003f800U
#define MDM_AGCCNTL__FORCED_RXGAIN_VALUE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0003f800U) >> 11)
#define MDM_AGCCNTL__FORCED_RXGAIN_VALUE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 11) & 0x0003f800U)
#define MDM_AGCCNTL__FORCED_RXGAIN_VALUE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0003f800U) | (((uint32_t)(src) <<\
                    11) & 0x0003f800U)
#define MDM_AGCCNTL__FORCED_RXGAIN_VALUE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 11) & ~0x0003f800U)))
#define MDM_AGCCNTL__FORCED_RXGAIN_VALUE__RESET_VALUE               0x00000005U
/** @} */

/* macros for field bypass_agc */
/**
 * @defgroup mdm_regs_core_bypass_agc_field bypass_agc_field
 * @brief macros for field bypass_agc
 * @details Once in MEASURE state, immediately go to WAIT_RX_END state and enable sync/demod
 * @{
 */
#define MDM_AGCCNTL__BYPASS_AGC__SHIFT                                       18
#define MDM_AGCCNTL__BYPASS_AGC__WIDTH                                        1
#define MDM_AGCCNTL__BYPASS_AGC__MASK                               0x00040000U
#define MDM_AGCCNTL__BYPASS_AGC__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00040000U) >> 18)
#define MDM_AGCCNTL__BYPASS_AGC__WRITE(src) \
                    (((uint32_t)(src)\
                    << 18) & 0x00040000U)
#define MDM_AGCCNTL__BYPASS_AGC__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | (((uint32_t)(src) <<\
                    18) & 0x00040000U)
#define MDM_AGCCNTL__BYPASS_AGC__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 18) & ~0x00040000U)))
#define MDM_AGCCNTL__BYPASS_AGC__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(1) << 18)
#define MDM_AGCCNTL__BYPASS_AGC__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(0) << 18)
#define MDM_AGCCNTL__BYPASS_AGC__RESET_VALUE                        0x00000000U
/** @} */

/* macros for field peaksat_during_pending_gain_change */
/**
 * @defgroup mdm_regs_core_peaksat_during_pending_gain_change_field peaksat_during_pending_gain_change_field
 * @brief macros for field peaksat_during_pending_gain_change
 * @details If set, allow peak/sat detection when r_power_step_gain_change_pending is high. If clear, ignore peak/sat during this time
 * @{
 */
#define MDM_AGCCNTL__PEAKSAT_DURING_PENDING_GAIN_CHANGE__SHIFT               19
#define MDM_AGCCNTL__PEAKSAT_DURING_PENDING_GAIN_CHANGE__WIDTH                1
#define MDM_AGCCNTL__PEAKSAT_DURING_PENDING_GAIN_CHANGE__MASK       0x00080000U
#define MDM_AGCCNTL__PEAKSAT_DURING_PENDING_GAIN_CHANGE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00080000U) >> 19)
#define MDM_AGCCNTL__PEAKSAT_DURING_PENDING_GAIN_CHANGE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 19) & 0x00080000U)
#define MDM_AGCCNTL__PEAKSAT_DURING_PENDING_GAIN_CHANGE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00080000U) | (((uint32_t)(src) <<\
                    19) & 0x00080000U)
#define MDM_AGCCNTL__PEAKSAT_DURING_PENDING_GAIN_CHANGE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 19) & ~0x00080000U)))
#define MDM_AGCCNTL__PEAKSAT_DURING_PENDING_GAIN_CHANGE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00080000U) | ((uint32_t)(1) << 19)
#define MDM_AGCCNTL__PEAKSAT_DURING_PENDING_GAIN_CHANGE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00080000U) | ((uint32_t)(0) << 19)
#define MDM_AGCCNTL__PEAKSAT_DURING_PENDING_GAIN_CHANGE__RESET_VALUE \
                    0x00000001U
/** @} */

/* macros for field reset_sat_on_gain_change_pending */
/**
 * @defgroup mdm_regs_core_reset_sat_on_gain_change_pending_field reset_sat_on_gain_change_pending_field
 * @brief macros for field reset_sat_on_gain_change_pending
 * @details If set, reset mdm_sat_count when r_power_step_gain_change_pending is initially asserted. This control is relevant only if peaksat_during_pending_gain_change is set
 * @{
 */
#define MDM_AGCCNTL__RESET_SAT_ON_GAIN_CHANGE_PENDING__SHIFT                 20
#define MDM_AGCCNTL__RESET_SAT_ON_GAIN_CHANGE_PENDING__WIDTH                  1
#define MDM_AGCCNTL__RESET_SAT_ON_GAIN_CHANGE_PENDING__MASK         0x00100000U
#define MDM_AGCCNTL__RESET_SAT_ON_GAIN_CHANGE_PENDING__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00100000U) >> 20)
#define MDM_AGCCNTL__RESET_SAT_ON_GAIN_CHANGE_PENDING__WRITE(src) \
                    (((uint32_t)(src)\
                    << 20) & 0x00100000U)
#define MDM_AGCCNTL__RESET_SAT_ON_GAIN_CHANGE_PENDING__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00100000U) | (((uint32_t)(src) <<\
                    20) & 0x00100000U)
#define MDM_AGCCNTL__RESET_SAT_ON_GAIN_CHANGE_PENDING__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 20) & ~0x00100000U)))
#define MDM_AGCCNTL__RESET_SAT_ON_GAIN_CHANGE_PENDING__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00100000U) | ((uint32_t)(1) << 20)
#define MDM_AGCCNTL__RESET_SAT_ON_GAIN_CHANGE_PENDING__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00100000U) | ((uint32_t)(0) << 20)
#define MDM_AGCCNTL__RESET_SAT_ON_GAIN_CHANGE_PENDING__RESET_VALUE  0x00000001U
/** @} */

/* macros for field use_next_meas_for_fine */
/**
 * @defgroup mdm_regs_core_use_next_meas_for_fine_field use_next_meas_for_fine_field
 * @brief macros for field use_next_meas_for_fine
 * @details Once a power step is detected, if use_next_meas_for_fine is 1, then perform the fine gain change based on the power measurement taken after the measurement that triggered the power step detection. Otherwise, perform the fine gain change using the power measurement that triggered the power step detection. Register replicated for 2 Mb/s.
 * @{
 */
#define MDM_AGCCNTL__USE_NEXT_MEAS_FOR_FINE__SHIFT                           21
#define MDM_AGCCNTL__USE_NEXT_MEAS_FOR_FINE__WIDTH                            1
#define MDM_AGCCNTL__USE_NEXT_MEAS_FOR_FINE__MASK                   0x00200000U
#define MDM_AGCCNTL__USE_NEXT_MEAS_FOR_FINE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00200000U) >> 21)
#define MDM_AGCCNTL__USE_NEXT_MEAS_FOR_FINE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 21) & 0x00200000U)
#define MDM_AGCCNTL__USE_NEXT_MEAS_FOR_FINE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00200000U) | (((uint32_t)(src) <<\
                    21) & 0x00200000U)
#define MDM_AGCCNTL__USE_NEXT_MEAS_FOR_FINE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 21) & ~0x00200000U)))
#define MDM_AGCCNTL__USE_NEXT_MEAS_FOR_FINE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00200000U) | ((uint32_t)(1) << 21)
#define MDM_AGCCNTL__USE_NEXT_MEAS_FOR_FINE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00200000U) | ((uint32_t)(0) << 21)
#define MDM_AGCCNTL__USE_NEXT_MEAS_FOR_FINE__RESET_VALUE            0x00000001U
/** @} */

/* macros for field bypass_rxfir */
/**
 * @defgroup mdm_regs_core_bypass_rxfir_field bypass_rxfir_field
 * @brief macros for field bypass_rxfir
 * @details When set, RXFIR output = RXFIR input. Register replicated for 2 Mb/s
 * @{
 */
#define MDM_AGCCNTL__BYPASS_RXFIR__SHIFT                                     22
#define MDM_AGCCNTL__BYPASS_RXFIR__WIDTH                                      1
#define MDM_AGCCNTL__BYPASS_RXFIR__MASK                             0x00400000U
#define MDM_AGCCNTL__BYPASS_RXFIR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00400000U) >> 22)
#define MDM_AGCCNTL__BYPASS_RXFIR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 22) & 0x00400000U)
#define MDM_AGCCNTL__BYPASS_RXFIR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00400000U) | (((uint32_t)(src) <<\
                    22) & 0x00400000U)
#define MDM_AGCCNTL__BYPASS_RXFIR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 22) & ~0x00400000U)))
#define MDM_AGCCNTL__BYPASS_RXFIR__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00400000U) | ((uint32_t)(1) << 22)
#define MDM_AGCCNTL__BYPASS_RXFIR__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00400000U) | ((uint32_t)(0) << 22)
#define MDM_AGCCNTL__BYPASS_RXFIR__RESET_VALUE                      0x00000000U
/** @} */

/* macros for field bypass_agc_filt */
/**
 * @defgroup mdm_regs_core_bypass_agc_filt_field bypass_agc_filt_field
 * @brief macros for field bypass_agc_filt
 * @details When set, agc filter output = agc filter input. Register replicated for 2 Mb/s
 * @{
 */
#define MDM_AGCCNTL__BYPASS_AGC_FILT__SHIFT                                  23
#define MDM_AGCCNTL__BYPASS_AGC_FILT__WIDTH                                   1
#define MDM_AGCCNTL__BYPASS_AGC_FILT__MASK                          0x00800000U
#define MDM_AGCCNTL__BYPASS_AGC_FILT__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00800000U) >> 23)
#define MDM_AGCCNTL__BYPASS_AGC_FILT__WRITE(src) \
                    (((uint32_t)(src)\
                    << 23) & 0x00800000U)
#define MDM_AGCCNTL__BYPASS_AGC_FILT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | (((uint32_t)(src) <<\
                    23) & 0x00800000U)
#define MDM_AGCCNTL__BYPASS_AGC_FILT__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 23) & ~0x00800000U)))
#define MDM_AGCCNTL__BYPASS_AGC_FILT__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(1) << 23)
#define MDM_AGCCNTL__BYPASS_AGC_FILT__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(0) << 23)
#define MDM_AGCCNTL__BYPASS_AGC_FILT__RESET_VALUE                   0x00000000U
/** @} */

/* macros for field fast_non_gain_change */
/**
 * @defgroup mdm_regs_core_fast_non_gain_change_field fast_non_gain_change_field
 * @brief macros for field fast_non_gain_change
 * @details On the last fine gain change (not the one following a peak/sat initial sat gain change), if the gain is not actually changed, then wait just two clocks (to avoid some control corner cases) instead of the normal gain settling time. Register replicated for 2 Mb/s
 * @{
 */
#define MDM_AGCCNTL__FAST_NON_GAIN_CHANGE__SHIFT                             24
#define MDM_AGCCNTL__FAST_NON_GAIN_CHANGE__WIDTH                              1
#define MDM_AGCCNTL__FAST_NON_GAIN_CHANGE__MASK                     0x01000000U
#define MDM_AGCCNTL__FAST_NON_GAIN_CHANGE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x01000000U) >> 24)
#define MDM_AGCCNTL__FAST_NON_GAIN_CHANGE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0x01000000U)
#define MDM_AGCCNTL__FAST_NON_GAIN_CHANGE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | (((uint32_t)(src) <<\
                    24) & 0x01000000U)
#define MDM_AGCCNTL__FAST_NON_GAIN_CHANGE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x01000000U)))
#define MDM_AGCCNTL__FAST_NON_GAIN_CHANGE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(1) << 24)
#define MDM_AGCCNTL__FAST_NON_GAIN_CHANGE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(0) << 24)
#define MDM_AGCCNTL__FAST_NON_GAIN_CHANGE__RESET_VALUE              0x00000001U
/** @} */

/* macros for field twomeg_use_next_meas_for_fine */
/**
 * @defgroup mdm_regs_core_twomeg_use_next_meas_for_fine_field twomeg_use_next_meas_for_fine_field
 * @brief macros for field twomeg_use_next_meas_for_fine
 * @details Once a power step is detected, if use_next_meas_for_fine is 1, then perform the fine gain change based on the power measurement taken after the measurement that triggered the power step detection. Otherwise, perform the fine gain change using the power measurement that triggered the power step detection. 2 Mb/s version of register
 * @{
 */
#define MDM_AGCCNTL__TWOMEG_USE_NEXT_MEAS_FOR_FINE__SHIFT                    25
#define MDM_AGCCNTL__TWOMEG_USE_NEXT_MEAS_FOR_FINE__WIDTH                     1
#define MDM_AGCCNTL__TWOMEG_USE_NEXT_MEAS_FOR_FINE__MASK            0x02000000U
#define MDM_AGCCNTL__TWOMEG_USE_NEXT_MEAS_FOR_FINE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x02000000U) >> 25)
#define MDM_AGCCNTL__TWOMEG_USE_NEXT_MEAS_FOR_FINE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 25) & 0x02000000U)
#define MDM_AGCCNTL__TWOMEG_USE_NEXT_MEAS_FOR_FINE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x02000000U) | (((uint32_t)(src) <<\
                    25) & 0x02000000U)
#define MDM_AGCCNTL__TWOMEG_USE_NEXT_MEAS_FOR_FINE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 25) & ~0x02000000U)))
#define MDM_AGCCNTL__TWOMEG_USE_NEXT_MEAS_FOR_FINE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x02000000U) | ((uint32_t)(1) << 25)
#define MDM_AGCCNTL__TWOMEG_USE_NEXT_MEAS_FOR_FINE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x02000000U) | ((uint32_t)(0) << 25)
#define MDM_AGCCNTL__TWOMEG_USE_NEXT_MEAS_FOR_FINE__RESET_VALUE     0x00000001U
/** @} */

/* macros for field twomeg_bypass_rxfir */
/**
 * @defgroup mdm_regs_core_twomeg_bypass_rxfir_field twomeg_bypass_rxfir_field
 * @brief macros for field twomeg_bypass_rxfir
 * @details When set, RXFIR output = RXFIR input 2 Mb/s version of register
 * @{
 */
#define MDM_AGCCNTL__TWOMEG_BYPASS_RXFIR__SHIFT                              26
#define MDM_AGCCNTL__TWOMEG_BYPASS_RXFIR__WIDTH                               1
#define MDM_AGCCNTL__TWOMEG_BYPASS_RXFIR__MASK                      0x04000000U
#define MDM_AGCCNTL__TWOMEG_BYPASS_RXFIR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x04000000U) >> 26)
#define MDM_AGCCNTL__TWOMEG_BYPASS_RXFIR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 26) & 0x04000000U)
#define MDM_AGCCNTL__TWOMEG_BYPASS_RXFIR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x04000000U) | (((uint32_t)(src) <<\
                    26) & 0x04000000U)
#define MDM_AGCCNTL__TWOMEG_BYPASS_RXFIR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 26) & ~0x04000000U)))
#define MDM_AGCCNTL__TWOMEG_BYPASS_RXFIR__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x04000000U) | ((uint32_t)(1) << 26)
#define MDM_AGCCNTL__TWOMEG_BYPASS_RXFIR__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x04000000U) | ((uint32_t)(0) << 26)
#define MDM_AGCCNTL__TWOMEG_BYPASS_RXFIR__RESET_VALUE               0x00000000U
/** @} */

/* macros for field twomeg_bypass_agc_filt */
/**
 * @defgroup mdm_regs_core_twomeg_bypass_agc_filt_field twomeg_bypass_agc_filt_field
 * @brief macros for field twomeg_bypass_agc_filt
 * @details When set, agc filter output = agc filter input. 2 Mb/s version of this register
 * @{
 */
#define MDM_AGCCNTL__TWOMEG_BYPASS_AGC_FILT__SHIFT                           27
#define MDM_AGCCNTL__TWOMEG_BYPASS_AGC_FILT__WIDTH                            1
#define MDM_AGCCNTL__TWOMEG_BYPASS_AGC_FILT__MASK                   0x08000000U
#define MDM_AGCCNTL__TWOMEG_BYPASS_AGC_FILT__READ(src) \
                    (((uint32_t)(src)\
                    & 0x08000000U) >> 27)
#define MDM_AGCCNTL__TWOMEG_BYPASS_AGC_FILT__WRITE(src) \
                    (((uint32_t)(src)\
                    << 27) & 0x08000000U)
#define MDM_AGCCNTL__TWOMEG_BYPASS_AGC_FILT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x08000000U) | (((uint32_t)(src) <<\
                    27) & 0x08000000U)
#define MDM_AGCCNTL__TWOMEG_BYPASS_AGC_FILT__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 27) & ~0x08000000U)))
#define MDM_AGCCNTL__TWOMEG_BYPASS_AGC_FILT__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x08000000U) | ((uint32_t)(1) << 27)
#define MDM_AGCCNTL__TWOMEG_BYPASS_AGC_FILT__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x08000000U) | ((uint32_t)(0) << 27)
#define MDM_AGCCNTL__TWOMEG_BYPASS_AGC_FILT__RESET_VALUE            0x00000000U
/** @} */

/* macros for field twomeg_fast_non_gain_change */
/**
 * @defgroup mdm_regs_core_twomeg_fast_non_gain_change_field twomeg_fast_non_gain_change_field
 * @brief macros for field twomeg_fast_non_gain_change
 * @details On the last fine gain change (not the one following a peak/sat initial sat gain change), if the gain is not actually changed, then wait just two clocks (to avoid some control corner cases) instead of the normal gain settling time. 2 Mb/s version of this register
 * @{
 */
#define MDM_AGCCNTL__TWOMEG_FAST_NON_GAIN_CHANGE__SHIFT                      28
#define MDM_AGCCNTL__TWOMEG_FAST_NON_GAIN_CHANGE__WIDTH                       1
#define MDM_AGCCNTL__TWOMEG_FAST_NON_GAIN_CHANGE__MASK              0x10000000U
#define MDM_AGCCNTL__TWOMEG_FAST_NON_GAIN_CHANGE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x10000000U) >> 28)
#define MDM_AGCCNTL__TWOMEG_FAST_NON_GAIN_CHANGE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 28) & 0x10000000U)
#define MDM_AGCCNTL__TWOMEG_FAST_NON_GAIN_CHANGE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x10000000U) | (((uint32_t)(src) <<\
                    28) & 0x10000000U)
#define MDM_AGCCNTL__TWOMEG_FAST_NON_GAIN_CHANGE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 28) & ~0x10000000U)))
#define MDM_AGCCNTL__TWOMEG_FAST_NON_GAIN_CHANGE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x10000000U) | ((uint32_t)(1) << 28)
#define MDM_AGCCNTL__TWOMEG_FAST_NON_GAIN_CHANGE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x10000000U) | ((uint32_t)(0) << 28)
#define MDM_AGCCNTL__TWOMEG_FAST_NON_GAIN_CHANGE__RESET_VALUE       0x00000000U
/** @} */

/* macros for field enable_init_sat_after_restart */
/**
 * @defgroup mdm_regs_core_enable_init_sat_after_restart_field enable_init_sat_after_restart_field
 * @brief macros for field enable_init_sat_after_restart
 * @details If set, enable initial saturation after a restart (aa timeout, timesync timeout). If clear, do not enable initial saturation after a restart. When clear, can be useful in preventing a false initial saturation when restarting in the middle of a packet in test mode, which can result in the receiver going deaf because the rxgain is turned down too far
 * @{
 */
#define MDM_AGCCNTL__ENABLE_INIT_SAT_AFTER_RESTART__SHIFT                    29
#define MDM_AGCCNTL__ENABLE_INIT_SAT_AFTER_RESTART__WIDTH                     1
#define MDM_AGCCNTL__ENABLE_INIT_SAT_AFTER_RESTART__MASK            0x20000000U
#define MDM_AGCCNTL__ENABLE_INIT_SAT_AFTER_RESTART__READ(src) \
                    (((uint32_t)(src)\
                    & 0x20000000U) >> 29)
#define MDM_AGCCNTL__ENABLE_INIT_SAT_AFTER_RESTART__WRITE(src) \
                    (((uint32_t)(src)\
                    << 29) & 0x20000000U)
#define MDM_AGCCNTL__ENABLE_INIT_SAT_AFTER_RESTART__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x20000000U) | (((uint32_t)(src) <<\
                    29) & 0x20000000U)
#define MDM_AGCCNTL__ENABLE_INIT_SAT_AFTER_RESTART__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 29) & ~0x20000000U)))
#define MDM_AGCCNTL__ENABLE_INIT_SAT_AFTER_RESTART__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x20000000U) | ((uint32_t)(1) << 29)
#define MDM_AGCCNTL__ENABLE_INIT_SAT_AFTER_RESTART__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x20000000U) | ((uint32_t)(0) << 29)
#define MDM_AGCCNTL__ENABLE_INIT_SAT_AFTER_RESTART__RESET_VALUE     0x00000001U
/** @} */
#define MDM_AGCCNTL__TYPE                                              uint32_t
#define MDM_AGCCNTL__READ                                           0x3fffffffU
#define MDM_AGCCNTL__WRITE                                          0x3fffffffU
#define MDM_AGCCNTL__PRESERVED                                      0x00000000U
#define MDM_AGCCNTL__RESET_VALUE                                    0x233828a5U

#endif /* __MDM_AGCCNTL_MACRO__ */

/** @} end of agccntl */

/* macros for BlueprintGlobalNameSpace::MDM_synch */
/**
 * @defgroup mdm_regs_core_synch synch
 * @brief Frequency and timing synchronization control definitions.
 * @{
 */
#ifndef __MDM_SYNCH_MACRO__
#define __MDM_SYNCH_MACRO__

/* macros for field num_exp */
/**
 * @defgroup mdm_regs_core_num_exp_field num_exp_field
 * @brief macros for field num_exp
 * @details Controls both the number of phase differences to average for frequency estimation and the demod filter length to use for timing synchronization. These are tied together because they impact the amount of preamble left for agc in exactly the same way. An exponent format is used as follows: 0 = reserved, 1 -> 2, 2 -> 4, 3 -> 8
 * @{
 */
#define MDM_SYNCH__NUM_EXP__SHIFT                                             0
#define MDM_SYNCH__NUM_EXP__WIDTH                                             2
#define MDM_SYNCH__NUM_EXP__MASK                                    0x00000003U
#define MDM_SYNCH__NUM_EXP__READ(src)           ((uint32_t)(src) & 0x00000003U)
#define MDM_SYNCH__NUM_EXP__WRITE(src)          ((uint32_t)(src) & 0x00000003U)
#define MDM_SYNCH__NUM_EXP__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000003U) | ((uint32_t)(src) &\
                    0x00000003U)
#define MDM_SYNCH__NUM_EXP__VERIFY(src)   (!(((uint32_t)(src) & ~0x00000003U)))
#define MDM_SYNCH__NUM_EXP__RESET_VALUE                             0x00000003U
/** @} */

/* macros for field pg */
/**
 * @defgroup mdm_regs_core_pg_field pg_field
 * @brief macros for field pg
 * @details Proportional gain for timing tracking Encoding: 0 -> 0. Else 2^(-pg)
 * @{
 */
#define MDM_SYNCH__PG__SHIFT                                                  2
#define MDM_SYNCH__PG__WIDTH                                                  2
#define MDM_SYNCH__PG__MASK                                         0x0000000cU
#define MDM_SYNCH__PG__READ(src)         (((uint32_t)(src) & 0x0000000cU) >> 2)
#define MDM_SYNCH__PG__WRITE(src)        (((uint32_t)(src) << 2) & 0x0000000cU)
#define MDM_SYNCH__PG__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000000cU) | (((uint32_t)(src) <<\
                    2) & 0x0000000cU)
#define MDM_SYNCH__PG__VERIFY(src) (!((((uint32_t)(src) << 2) & ~0x0000000cU)))
#define MDM_SYNCH__PG__RESET_VALUE                                  0x00000001U
/** @} */

/* macros for field ph_reg_thr */
/**
 * @defgroup mdm_regs_core_ph_reg_thr_field ph_reg_thr_field
 * @brief macros for field ph_reg_thr
 * @details Phase accumulator threshold for timing tracking Encoding: 2^(ph_reg_thr). Gear 1. Supported range: 0-5
 * @{
 */
#define MDM_SYNCH__PH_REG_THR__SHIFT                                          4
#define MDM_SYNCH__PH_REG_THR__WIDTH                                          3
#define MDM_SYNCH__PH_REG_THR__MASK                                 0x00000070U
#define MDM_SYNCH__PH_REG_THR__READ(src) (((uint32_t)(src) & 0x00000070U) >> 4)
#define MDM_SYNCH__PH_REG_THR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 4) & 0x00000070U)
#define MDM_SYNCH__PH_REG_THR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000070U) | (((uint32_t)(src) <<\
                    4) & 0x00000070U)
#define MDM_SYNCH__PH_REG_THR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 4) & ~0x00000070U)))
#define MDM_SYNCH__PH_REG_THR__RESET_VALUE                          0x00000001U
/** @} */

/* macros for field ph_reg_thr2 */
/**
 * @defgroup mdm_regs_core_ph_reg_thr2_field ph_reg_thr2_field
 * @brief macros for field ph_reg_thr2
 * @details Phase accumulator threshold for timing tracking Encoding: 2^(ph_reg_thr). Gear 2. Supported range: 0-5
 * @{
 */
#define MDM_SYNCH__PH_REG_THR2__SHIFT                                         7
#define MDM_SYNCH__PH_REG_THR2__WIDTH                                         3
#define MDM_SYNCH__PH_REG_THR2__MASK                                0x00000380U
#define MDM_SYNCH__PH_REG_THR2__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000380U) >> 7)
#define MDM_SYNCH__PH_REG_THR2__WRITE(src) \
                    (((uint32_t)(src)\
                    << 7) & 0x00000380U)
#define MDM_SYNCH__PH_REG_THR2__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000380U) | (((uint32_t)(src) <<\
                    7) & 0x00000380U)
#define MDM_SYNCH__PH_REG_THR2__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 7) & ~0x00000380U)))
#define MDM_SYNCH__PH_REG_THR2__RESET_VALUE                         0x00000003U
/** @} */

/* macros for field ph_reg_thr3 */
/**
 * @defgroup mdm_regs_core_ph_reg_thr3_field ph_reg_thr3_field
 * @brief macros for field ph_reg_thr3
 * @details Phase accumulator threshold for timing tracking Encoding: 2^(ph_reg_thr). Gear 3. Supported range: 0-5
 * @{
 */
#define MDM_SYNCH__PH_REG_THR3__SHIFT                                        10
#define MDM_SYNCH__PH_REG_THR3__WIDTH                                         3
#define MDM_SYNCH__PH_REG_THR3__MASK                                0x00001c00U
#define MDM_SYNCH__PH_REG_THR3__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00001c00U) >> 10)
#define MDM_SYNCH__PH_REG_THR3__WRITE(src) \
                    (((uint32_t)(src)\
                    << 10) & 0x00001c00U)
#define MDM_SYNCH__PH_REG_THR3__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00001c00U) | (((uint32_t)(src) <<\
                    10) & 0x00001c00U)
#define MDM_SYNCH__PH_REG_THR3__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 10) & ~0x00001c00U)))
#define MDM_SYNCH__PH_REG_THR3__RESET_VALUE                         0x00000004U
/** @} */

/* macros for field enable_time_track */
/**
 * @defgroup mdm_regs_core_enable_time_track_field enable_time_track_field
 * @brief macros for field enable_time_track
 * @details Enable time tracking, although can also be disabled with setting pg to 2'd0
 * @{
 */
#define MDM_SYNCH__ENABLE_TIME_TRACK__SHIFT                                  13
#define MDM_SYNCH__ENABLE_TIME_TRACK__WIDTH                                   1
#define MDM_SYNCH__ENABLE_TIME_TRACK__MASK                          0x00002000U
#define MDM_SYNCH__ENABLE_TIME_TRACK__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00002000U) >> 13)
#define MDM_SYNCH__ENABLE_TIME_TRACK__WRITE(src) \
                    (((uint32_t)(src)\
                    << 13) & 0x00002000U)
#define MDM_SYNCH__ENABLE_TIME_TRACK__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00002000U) | (((uint32_t)(src) <<\
                    13) & 0x00002000U)
#define MDM_SYNCH__ENABLE_TIME_TRACK__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 13) & ~0x00002000U)))
#define MDM_SYNCH__ENABLE_TIME_TRACK__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00002000U) | ((uint32_t)(1) << 13)
#define MDM_SYNCH__ENABLE_TIME_TRACK__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00002000U) | ((uint32_t)(0) << 13)
#define MDM_SYNCH__ENABLE_TIME_TRACK__RESET_VALUE                   0x00000001U
/** @} */

/* macros for field freq_force_initial */
/**
 * @defgroup mdm_regs_core_freq_force_initial_field freq_force_initial_field
 * @brief macros for field freq_force_initial
 * @details Force initial frequency estimate
 * @{
 */
#define MDM_SYNCH__FREQ_FORCE_INITIAL__SHIFT                                 14
#define MDM_SYNCH__FREQ_FORCE_INITIAL__WIDTH                                  1
#define MDM_SYNCH__FREQ_FORCE_INITIAL__MASK                         0x00004000U
#define MDM_SYNCH__FREQ_FORCE_INITIAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00004000U) >> 14)
#define MDM_SYNCH__FREQ_FORCE_INITIAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 14) & 0x00004000U)
#define MDM_SYNCH__FREQ_FORCE_INITIAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00004000U) | (((uint32_t)(src) <<\
                    14) & 0x00004000U)
#define MDM_SYNCH__FREQ_FORCE_INITIAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 14) & ~0x00004000U)))
#define MDM_SYNCH__FREQ_FORCE_INITIAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00004000U) | ((uint32_t)(1) << 14)
#define MDM_SYNCH__FREQ_FORCE_INITIAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00004000U) | ((uint32_t)(0) << 14)
#define MDM_SYNCH__FREQ_FORCE_INITIAL__RESET_VALUE                  0x00000000U
/** @} */

/* macros for field freq_forced_value */
/**
 * @defgroup mdm_regs_core_freq_forced_value_field freq_forced_value_field
 * @brief macros for field freq_forced_value
 * @details Forced initial frequency estimate value. Signed quantity. MSB has weight of -1 MHz. Subsequent bits have weight of 1/2 MHz, 1/4 MHz ... LSB has weight of 1/4096 MHz
 * @{
 */
#define MDM_SYNCH__FREQ_FORCED_VALUE__SHIFT                                  15
#define MDM_SYNCH__FREQ_FORCED_VALUE__WIDTH                                  13
#define MDM_SYNCH__FREQ_FORCED_VALUE__MASK                          0x0fff8000U
#define MDM_SYNCH__FREQ_FORCED_VALUE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0fff8000U) >> 15)
#define MDM_SYNCH__FREQ_FORCED_VALUE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 15) & 0x0fff8000U)
#define MDM_SYNCH__FREQ_FORCED_VALUE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0fff8000U) | (((uint32_t)(src) <<\
                    15) & 0x0fff8000U)
#define MDM_SYNCH__FREQ_FORCED_VALUE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 15) & ~0x0fff8000U)))
#define MDM_SYNCH__FREQ_FORCED_VALUE__RESET_VALUE                   0x00000000U
/** @} */

/* macros for field num_time_avg */
/**
 * @defgroup mdm_regs_core_num_time_avg_field num_time_avg_field
 * @brief macros for field num_time_avg
 * @details For 1 and 2 Mb/s, but not coded rates, specifies the number of matched filter outputs first add together prior to timing sync. The only legal values are 1, 3 and 5
 * @{
 */
#define MDM_SYNCH__NUM_TIME_AVG__SHIFT                                       28
#define MDM_SYNCH__NUM_TIME_AVG__WIDTH                                        3
#define MDM_SYNCH__NUM_TIME_AVG__MASK                               0x70000000U
#define MDM_SYNCH__NUM_TIME_AVG__READ(src) \
                    (((uint32_t)(src)\
                    & 0x70000000U) >> 28)
#define MDM_SYNCH__NUM_TIME_AVG__WRITE(src) \
                    (((uint32_t)(src)\
                    << 28) & 0x70000000U)
#define MDM_SYNCH__NUM_TIME_AVG__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x70000000U) | (((uint32_t)(src) <<\
                    28) & 0x70000000U)
#define MDM_SYNCH__NUM_TIME_AVG__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 28) & ~0x70000000U)))
#define MDM_SYNCH__NUM_TIME_AVG__RESET_VALUE                        0x00000005U
/** @} */
#define MDM_SYNCH__TYPE                                                uint32_t
#define MDM_SYNCH__READ                                             0x7fffffffU
#define MDM_SYNCH__WRITE                                            0x7fffffffU
#define MDM_SYNCH__PRESERVED                                        0x00000000U
#define MDM_SYNCH__RESET_VALUE                                      0x50003197U

#endif /* __MDM_SYNCH_MACRO__ */

/** @} end of synch */

/* macros for BlueprintGlobalNameSpace::MDM_timetrack */
/**
 * @defgroup mdm_regs_core_timetrack timetrack
 * @brief Specifies gears for time tracking definitions.
 * @{
 */
#ifndef __MDM_TIMETRACK_MACRO__
#define __MDM_TIMETRACK_MACRO__

/* macros for field byte_count */
/**
 * @defgroup mdm_regs_core_byte_count_field byte_count_field
 * @brief macros for field byte_count
 * @details Number of bytes to process before switching from gear 1 to gear 2
 * @{
 */
#define MDM_TIMETRACK__BYTE_COUNT__SHIFT                                      0
#define MDM_TIMETRACK__BYTE_COUNT__WIDTH                                      8
#define MDM_TIMETRACK__BYTE_COUNT__MASK                             0x000000ffU
#define MDM_TIMETRACK__BYTE_COUNT__READ(src)    ((uint32_t)(src) & 0x000000ffU)
#define MDM_TIMETRACK__BYTE_COUNT__WRITE(src)   ((uint32_t)(src) & 0x000000ffU)
#define MDM_TIMETRACK__BYTE_COUNT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define MDM_TIMETRACK__BYTE_COUNT__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000000ffU)))
#define MDM_TIMETRACK__BYTE_COUNT__RESET_VALUE                      0x00000001U
/** @} */

/* macros for field byte_count2 */
/**
 * @defgroup mdm_regs_core_byte_count2_field byte_count2_field
 * @brief macros for field byte_count2
 * @details Number of bytes to process before switching to gear 3. (Includes bytes from gear 1 PLUS gear 2)
 * @{
 */
#define MDM_TIMETRACK__BYTE_COUNT2__SHIFT                                     8
#define MDM_TIMETRACK__BYTE_COUNT2__WIDTH                                     8
#define MDM_TIMETRACK__BYTE_COUNT2__MASK                            0x0000ff00U
#define MDM_TIMETRACK__BYTE_COUNT2__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000ff00U) >> 8)
#define MDM_TIMETRACK__BYTE_COUNT2__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x0000ff00U)
#define MDM_TIMETRACK__BYTE_COUNT2__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ff00U) | (((uint32_t)(src) <<\
                    8) & 0x0000ff00U)
#define MDM_TIMETRACK__BYTE_COUNT2__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x0000ff00U)))
#define MDM_TIMETRACK__BYTE_COUNT2__RESET_VALUE                     0x00000002U
/** @} */
#define MDM_TIMETRACK__TYPE                                            uint32_t
#define MDM_TIMETRACK__READ                                         0x0000ffffU
#define MDM_TIMETRACK__WRITE                                        0x0000ffffU
#define MDM_TIMETRACK__PRESERVED                                    0x00000000U
#define MDM_TIMETRACK__RESET_VALUE                                  0x00000201U

#endif /* __MDM_TIMETRACK_MACRO__ */

/** @} end of timetrack */

/* macros for BlueprintGlobalNameSpace::MDM_timesync */
/**
 * @defgroup mdm_regs_core_timesync timesync
 * @brief Time sync RSSI and absolute difference thresholds definitions.
 * @{
 */
#ifndef __MDM_TIMESYNC_MACRO__
#define __MDM_TIMESYNC_MACRO__

/* macros for field rssi_thr */
/**
 * @defgroup mdm_regs_core_rssi_thr_field rssi_thr_field
 * @brief macros for field rssi_thr
 * @details Ignore min_thr checks if rssi <= rssi_thr. 8'd168 = -88
 * @{
 */
#define MDM_TIMESYNC__RSSI_THR__SHIFT                                         0
#define MDM_TIMESYNC__RSSI_THR__WIDTH                                         8
#define MDM_TIMESYNC__RSSI_THR__MASK                                0x000000ffU
#define MDM_TIMESYNC__RSSI_THR__READ(src)       ((uint32_t)(src) & 0x000000ffU)
#define MDM_TIMESYNC__RSSI_THR__WRITE(src)      ((uint32_t)(src) & 0x000000ffU)
#define MDM_TIMESYNC__RSSI_THR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define MDM_TIMESYNC__RSSI_THR__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000000ffU)))
#define MDM_TIMESYNC__RSSI_THR__RESET_VALUE                         0x000000a8U
/** @} */

/* macros for field twomeg_rssi_thr */
/**
 * @defgroup mdm_regs_core_twomeg_rssi_thr_field twomeg_rssi_thr_field
 * @brief macros for field twomeg_rssi_thr
 * @details Ignore min_thr checks if rssi <= rssi_thr. 2 Mb/s version. 8'd171 = -85
 * @{
 */
#define MDM_TIMESYNC__TWOMEG_RSSI_THR__SHIFT                                  8
#define MDM_TIMESYNC__TWOMEG_RSSI_THR__WIDTH                                  8
#define MDM_TIMESYNC__TWOMEG_RSSI_THR__MASK                         0x0000ff00U
#define MDM_TIMESYNC__TWOMEG_RSSI_THR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000ff00U) >> 8)
#define MDM_TIMESYNC__TWOMEG_RSSI_THR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x0000ff00U)
#define MDM_TIMESYNC__TWOMEG_RSSI_THR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ff00U) | (((uint32_t)(src) <<\
                    8) & 0x0000ff00U)
#define MDM_TIMESYNC__TWOMEG_RSSI_THR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x0000ff00U)))
#define MDM_TIMESYNC__TWOMEG_RSSI_THR__RESET_VALUE                  0x000000abU
/** @} */

/* macros for field uncoded_min_thr */
/**
 * @defgroup mdm_regs_core_uncoded_min_thr_field uncoded_min_thr_field
 * @brief macros for field uncoded_min_thr
 * @details Minimum absolute difference for uncoded rates
 * @{
 */
#define MDM_TIMESYNC__UNCODED_MIN_THR__SHIFT                                 16
#define MDM_TIMESYNC__UNCODED_MIN_THR__WIDTH                                  8
#define MDM_TIMESYNC__UNCODED_MIN_THR__MASK                         0x00ff0000U
#define MDM_TIMESYNC__UNCODED_MIN_THR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00ff0000U) >> 16)
#define MDM_TIMESYNC__UNCODED_MIN_THR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00ff0000U)
#define MDM_TIMESYNC__UNCODED_MIN_THR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00ff0000U) | (((uint32_t)(src) <<\
                    16) & 0x00ff0000U)
#define MDM_TIMESYNC__UNCODED_MIN_THR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00ff0000U)))
#define MDM_TIMESYNC__UNCODED_MIN_THR__RESET_VALUE                  0x00000032U
/** @} */

/* macros for field coded_min_thr */
/**
 * @defgroup mdm_regs_core_coded_min_thr_field coded_min_thr_field
 * @brief macros for field coded_min_thr
 * @details Minimum absolute difference for coded rates
 * @{
 */
#define MDM_TIMESYNC__CODED_MIN_THR__SHIFT                                   24
#define MDM_TIMESYNC__CODED_MIN_THR__WIDTH                                    8
#define MDM_TIMESYNC__CODED_MIN_THR__MASK                           0xff000000U
#define MDM_TIMESYNC__CODED_MIN_THR__READ(src) \
                    (((uint32_t)(src)\
                    & 0xff000000U) >> 24)
#define MDM_TIMESYNC__CODED_MIN_THR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0xff000000U)
#define MDM_TIMESYNC__CODED_MIN_THR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xff000000U) | (((uint32_t)(src) <<\
                    24) & 0xff000000U)
#define MDM_TIMESYNC__CODED_MIN_THR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0xff000000U)))
#define MDM_TIMESYNC__CODED_MIN_THR__RESET_VALUE                    0x00000096U
/** @} */
#define MDM_TIMESYNC__TYPE                                             uint32_t
#define MDM_TIMESYNC__READ                                          0xffffffffU
#define MDM_TIMESYNC__WRITE                                         0xffffffffU
#define MDM_TIMESYNC__PRESERVED                                     0x00000000U
#define MDM_TIMESYNC__RESET_VALUE                                   0x9632aba8U

#endif /* __MDM_TIMESYNC_MACRO__ */

/** @} end of timesync */

/* macros for BlueprintGlobalNameSpace::MDM_syncdemod */
/**
 * @defgroup mdm_regs_core_syncdemod syncdemod
 * @brief Additional sync/demod controls definitions.
 * @{
 */
#ifndef __MDM_SYNCDEMOD_MACRO__
#define __MDM_SYNCDEMOD_MACRO__

/* macros for field find_two_peaks */
/**
 * @defgroup mdm_regs_core_find_two_peaks_field find_two_peaks_field
 * @brief macros for field find_two_peaks
 * @details For timing sync, require two absolute differences spaced one symbol apart to exceed threshold. Does not apply to coded
 * @{
 */
#define MDM_SYNCDEMOD__FIND_TWO_PEAKS__SHIFT                                  0
#define MDM_SYNCDEMOD__FIND_TWO_PEAKS__WIDTH                                  1
#define MDM_SYNCDEMOD__FIND_TWO_PEAKS__MASK                         0x00000001U
#define MDM_SYNCDEMOD__FIND_TWO_PEAKS__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define MDM_SYNCDEMOD__FIND_TWO_PEAKS__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define MDM_SYNCDEMOD__FIND_TWO_PEAKS__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define MDM_SYNCDEMOD__FIND_TWO_PEAKS__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define MDM_SYNCDEMOD__FIND_TWO_PEAKS__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define MDM_SYNCDEMOD__FIND_TWO_PEAKS__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define MDM_SYNCDEMOD__FIND_TWO_PEAKS__RESET_VALUE                  0x00000001U
/** @} */

/* macros for field twomeg_find_two_peaks */
/**
 * @defgroup mdm_regs_core_twomeg_find_two_peaks_field twomeg_find_two_peaks_field
 * @brief macros for field twomeg_find_two_peaks
 * @details For timing sync, require two absolute differences spaced one symbol apart to exceed threshold. 2 Mb/s version.
 * @{
 */
#define MDM_SYNCDEMOD__TWOMEG_FIND_TWO_PEAKS__SHIFT                           1
#define MDM_SYNCDEMOD__TWOMEG_FIND_TWO_PEAKS__WIDTH                           1
#define MDM_SYNCDEMOD__TWOMEG_FIND_TWO_PEAKS__MASK                  0x00000002U
#define MDM_SYNCDEMOD__TWOMEG_FIND_TWO_PEAKS__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define MDM_SYNCDEMOD__TWOMEG_FIND_TWO_PEAKS__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define MDM_SYNCDEMOD__TWOMEG_FIND_TWO_PEAKS__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define MDM_SYNCDEMOD__TWOMEG_FIND_TWO_PEAKS__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define MDM_SYNCDEMOD__TWOMEG_FIND_TWO_PEAKS__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define MDM_SYNCDEMOD__TWOMEG_FIND_TWO_PEAKS__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define MDM_SYNCDEMOD__TWOMEG_FIND_TWO_PEAKS__RESET_VALUE           0x00000001U
/** @} */

/* macros for field coded_find_two_peaks */
/**
 * @defgroup mdm_regs_core_coded_find_two_peaks_field coded_find_two_peaks_field
 * @brief macros for field coded_find_two_peaks
 * @details For timing sync, coded with 2x or 4x averaging, require best absolute difference from last 4 us window and absolute difference from first 4 us window (using best timing index from last window) to exceed threshold. Coded version.
 * @{
 */
#define MDM_SYNCDEMOD__CODED_FIND_TWO_PEAKS__SHIFT                            2
#define MDM_SYNCDEMOD__CODED_FIND_TWO_PEAKS__WIDTH                            1
#define MDM_SYNCDEMOD__CODED_FIND_TWO_PEAKS__MASK                   0x00000004U
#define MDM_SYNCDEMOD__CODED_FIND_TWO_PEAKS__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000004U) >> 2)
#define MDM_SYNCDEMOD__CODED_FIND_TWO_PEAKS__WRITE(src) \
                    (((uint32_t)(src)\
                    << 2) & 0x00000004U)
#define MDM_SYNCDEMOD__CODED_FIND_TWO_PEAKS__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | (((uint32_t)(src) <<\
                    2) & 0x00000004U)
#define MDM_SYNCDEMOD__CODED_FIND_TWO_PEAKS__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 2) & ~0x00000004U)))
#define MDM_SYNCDEMOD__CODED_FIND_TWO_PEAKS__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(1) << 2)
#define MDM_SYNCDEMOD__CODED_FIND_TWO_PEAKS__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(0) << 2)
#define MDM_SYNCDEMOD__CODED_FIND_TWO_PEAKS__RESET_VALUE            0x00000001U
/** @} */

/* macros for field mf_lookback */
/**
 * @defgroup mdm_regs_core_mf_lookback_field mf_lookback_field
 * @brief macros for field mf_lookback
 * @details When timing and frequency sync are done and the matched filter will be used for demod, look back one symbol instead of using the most recent samples used for timing sync. Does not apply to coded
 * @{
 */
#define MDM_SYNCDEMOD__MF_LOOKBACK__SHIFT                                     3
#define MDM_SYNCDEMOD__MF_LOOKBACK__WIDTH                                     1
#define MDM_SYNCDEMOD__MF_LOOKBACK__MASK                            0x00000008U
#define MDM_SYNCDEMOD__MF_LOOKBACK__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000008U) >> 3)
#define MDM_SYNCDEMOD__MF_LOOKBACK__WRITE(src) \
                    (((uint32_t)(src)\
                    << 3) & 0x00000008U)
#define MDM_SYNCDEMOD__MF_LOOKBACK__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | (((uint32_t)(src) <<\
                    3) & 0x00000008U)
#define MDM_SYNCDEMOD__MF_LOOKBACK__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 3) & ~0x00000008U)))
#define MDM_SYNCDEMOD__MF_LOOKBACK__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((uint32_t)(1) << 3)
#define MDM_SYNCDEMOD__MF_LOOKBACK__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((uint32_t)(0) << 3)
#define MDM_SYNCDEMOD__MF_LOOKBACK__RESET_VALUE                     0x00000000U
/** @} */

/* macros for field twomeg_mf_lookback */
/**
 * @defgroup mdm_regs_core_twomeg_mf_lookback_field twomeg_mf_lookback_field
 * @brief macros for field twomeg_mf_lookback
 * @details When timing and frequency sync are done and the matched filter will be used for demod, look back one symbol instead of using the most recent samples used for timing sync. 2 Mb/s version
 * @{
 */
#define MDM_SYNCDEMOD__TWOMEG_MF_LOOKBACK__SHIFT                              4
#define MDM_SYNCDEMOD__TWOMEG_MF_LOOKBACK__WIDTH                              1
#define MDM_SYNCDEMOD__TWOMEG_MF_LOOKBACK__MASK                     0x00000010U
#define MDM_SYNCDEMOD__TWOMEG_MF_LOOKBACK__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000010U) >> 4)
#define MDM_SYNCDEMOD__TWOMEG_MF_LOOKBACK__WRITE(src) \
                    (((uint32_t)(src)\
                    << 4) & 0x00000010U)
#define MDM_SYNCDEMOD__TWOMEG_MF_LOOKBACK__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | (((uint32_t)(src) <<\
                    4) & 0x00000010U)
#define MDM_SYNCDEMOD__TWOMEG_MF_LOOKBACK__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 4) & ~0x00000010U)))
#define MDM_SYNCDEMOD__TWOMEG_MF_LOOKBACK__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(1) << 4)
#define MDM_SYNCDEMOD__TWOMEG_MF_LOOKBACK__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(0) << 4)
#define MDM_SYNCDEMOD__TWOMEG_MF_LOOKBACK__RESET_VALUE              0x00000000U
/** @} */

/* macros for field spare */
/**
 * @defgroup mdm_regs_core_spare_field spare_field
 * @brief macros for field spare
 * @details for general TBD ECO use in mdm
 * @{
 */
#define MDM_SYNCDEMOD__SPARE__SHIFT                                           5
#define MDM_SYNCDEMOD__SPARE__WIDTH                                           5
#define MDM_SYNCDEMOD__SPARE__MASK                                  0x000003e0U
#define MDM_SYNCDEMOD__SPARE__READ(src)  (((uint32_t)(src) & 0x000003e0U) >> 5)
#define MDM_SYNCDEMOD__SPARE__WRITE(src) (((uint32_t)(src) << 5) & 0x000003e0U)
#define MDM_SYNCDEMOD__SPARE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000003e0U) | (((uint32_t)(src) <<\
                    5) & 0x000003e0U)
#define MDM_SYNCDEMOD__SPARE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 5) & ~0x000003e0U)))
#define MDM_SYNCDEMOD__SPARE__RESET_VALUE                           0x00000019U
/** @} */
#define MDM_SYNCDEMOD__TYPE                                            uint32_t
#define MDM_SYNCDEMOD__READ                                         0x000003ffU
#define MDM_SYNCDEMOD__WRITE                                        0x000003ffU
#define MDM_SYNCDEMOD__PRESERVED                                    0x00000000U
#define MDM_SYNCDEMOD__RESET_VALUE                                  0x00000327U

#endif /* __MDM_SYNCDEMOD_MACRO__ */

/** @} end of syncdemod */

/* macros for BlueprintGlobalNameSpace::MDM_tstimeout */
/**
 * @defgroup mdm_regs_core_tstimeout tstimeout
 * @brief Time sync timeout control definitions.
 * @{
 */
#ifndef __MDM_TSTIMEOUT_MACRO__
#define __MDM_TSTIMEOUT_MACRO__

/* macros for field numsamples */
/**
 * @defgroup mdm_regs_core_numsamples_field numsamples_field
 * @brief macros for field numsamples
 * @details Number of samples before declaring timeout, 1 Mb/s
 * @{
 */
#define MDM_TSTIMEOUT__NUMSAMPLES__SHIFT                                      0
#define MDM_TSTIMEOUT__NUMSAMPLES__WIDTH                                      9
#define MDM_TSTIMEOUT__NUMSAMPLES__MASK                             0x000001ffU
#define MDM_TSTIMEOUT__NUMSAMPLES__READ(src)    ((uint32_t)(src) & 0x000001ffU)
#define MDM_TSTIMEOUT__NUMSAMPLES__WRITE(src)   ((uint32_t)(src) & 0x000001ffU)
#define MDM_TSTIMEOUT__NUMSAMPLES__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000001ffU) | ((uint32_t)(src) &\
                    0x000001ffU)
#define MDM_TSTIMEOUT__NUMSAMPLES__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000001ffU)))
#define MDM_TSTIMEOUT__NUMSAMPLES__RESET_VALUE                      0x000001ffU
/** @} */

/* macros for field coded_numsamples */
/**
 * @defgroup mdm_regs_core_coded_numsamples_field coded_numsamples_field
 * @brief macros for field coded_numsamples
 * @details Number of samples before declaring timeout, coded rates
 * @{
 */
#define MDM_TSTIMEOUT__CODED_NUMSAMPLES__SHIFT                                9
#define MDM_TSTIMEOUT__CODED_NUMSAMPLES__WIDTH                               10
#define MDM_TSTIMEOUT__CODED_NUMSAMPLES__MASK                       0x0007fe00U
#define MDM_TSTIMEOUT__CODED_NUMSAMPLES__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0007fe00U) >> 9)
#define MDM_TSTIMEOUT__CODED_NUMSAMPLES__WRITE(src) \
                    (((uint32_t)(src)\
                    << 9) & 0x0007fe00U)
#define MDM_TSTIMEOUT__CODED_NUMSAMPLES__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0007fe00U) | (((uint32_t)(src) <<\
                    9) & 0x0007fe00U)
#define MDM_TSTIMEOUT__CODED_NUMSAMPLES__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 9) & ~0x0007fe00U)))
#define MDM_TSTIMEOUT__CODED_NUMSAMPLES__RESET_VALUE                0x00000190U
/** @} */

/* macros for field twomeg_numsamples */
/**
 * @defgroup mdm_regs_core_twomeg_numsamples_field twomeg_numsamples_field
 * @brief macros for field twomeg_numsamples
 * @details Number of samples before declaring timeout, 2 Mb/s
 * @{
 */
#define MDM_TSTIMEOUT__TWOMEG_NUMSAMPLES__SHIFT                              19
#define MDM_TSTIMEOUT__TWOMEG_NUMSAMPLES__WIDTH                              10
#define MDM_TSTIMEOUT__TWOMEG_NUMSAMPLES__MASK                      0x1ff80000U
#define MDM_TSTIMEOUT__TWOMEG_NUMSAMPLES__READ(src) \
                    (((uint32_t)(src)\
                    & 0x1ff80000U) >> 19)
#define MDM_TSTIMEOUT__TWOMEG_NUMSAMPLES__WRITE(src) \
                    (((uint32_t)(src)\
                    << 19) & 0x1ff80000U)
#define MDM_TSTIMEOUT__TWOMEG_NUMSAMPLES__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x1ff80000U) | (((uint32_t)(src) <<\
                    19) & 0x1ff80000U)
#define MDM_TSTIMEOUT__TWOMEG_NUMSAMPLES__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 19) & ~0x1ff80000U)))
#define MDM_TSTIMEOUT__TWOMEG_NUMSAMPLES__RESET_VALUE               0x000003ffU
/** @} */

/* macros for field en */
/**
 * @defgroup mdm_regs_core_en_field en_field
 * @brief macros for field en
 * @details enable timesync timeout, 1 Mb/s
 * @{
 */
#define MDM_TSTIMEOUT__EN__SHIFT                                             29
#define MDM_TSTIMEOUT__EN__WIDTH                                              1
#define MDM_TSTIMEOUT__EN__MASK                                     0x20000000U
#define MDM_TSTIMEOUT__EN__READ(src)    (((uint32_t)(src) & 0x20000000U) >> 29)
#define MDM_TSTIMEOUT__EN__WRITE(src)   (((uint32_t)(src) << 29) & 0x20000000U)
#define MDM_TSTIMEOUT__EN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x20000000U) | (((uint32_t)(src) <<\
                    29) & 0x20000000U)
#define MDM_TSTIMEOUT__EN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 29) & ~0x20000000U)))
#define MDM_TSTIMEOUT__EN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x20000000U) | ((uint32_t)(1) << 29)
#define MDM_TSTIMEOUT__EN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x20000000U) | ((uint32_t)(0) << 29)
#define MDM_TSTIMEOUT__EN__RESET_VALUE                              0x00000001U
/** @} */

/* macros for field coded_en */
/**
 * @defgroup mdm_regs_core_coded_en_field coded_en_field
 * @brief macros for field coded_en
 * @details enable timesync timeout, coded rates
 * @{
 */
#define MDM_TSTIMEOUT__CODED_EN__SHIFT                                       30
#define MDM_TSTIMEOUT__CODED_EN__WIDTH                                        1
#define MDM_TSTIMEOUT__CODED_EN__MASK                               0x40000000U
#define MDM_TSTIMEOUT__CODED_EN__READ(src) \
                    (((uint32_t)(src)\
                    & 0x40000000U) >> 30)
#define MDM_TSTIMEOUT__CODED_EN__WRITE(src) \
                    (((uint32_t)(src)\
                    << 30) & 0x40000000U)
#define MDM_TSTIMEOUT__CODED_EN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x40000000U) | (((uint32_t)(src) <<\
                    30) & 0x40000000U)
#define MDM_TSTIMEOUT__CODED_EN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 30) & ~0x40000000U)))
#define MDM_TSTIMEOUT__CODED_EN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x40000000U) | ((uint32_t)(1) << 30)
#define MDM_TSTIMEOUT__CODED_EN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x40000000U) | ((uint32_t)(0) << 30)
#define MDM_TSTIMEOUT__CODED_EN__RESET_VALUE                        0x00000001U
/** @} */

/* macros for field twomeg_en */
/**
 * @defgroup mdm_regs_core_twomeg_en_field twomeg_en_field
 * @brief macros for field twomeg_en
 * @details enable timesync timeout, 2 Mb/s
 * @{
 */
#define MDM_TSTIMEOUT__TWOMEG_EN__SHIFT                                      31
#define MDM_TSTIMEOUT__TWOMEG_EN__WIDTH                                       1
#define MDM_TSTIMEOUT__TWOMEG_EN__MASK                              0x80000000U
#define MDM_TSTIMEOUT__TWOMEG_EN__READ(src) \
                    (((uint32_t)(src)\
                    & 0x80000000U) >> 31)
#define MDM_TSTIMEOUT__TWOMEG_EN__WRITE(src) \
                    (((uint32_t)(src)\
                    << 31) & 0x80000000U)
#define MDM_TSTIMEOUT__TWOMEG_EN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x80000000U) | (((uint32_t)(src) <<\
                    31) & 0x80000000U)
#define MDM_TSTIMEOUT__TWOMEG_EN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 31) & ~0x80000000U)))
#define MDM_TSTIMEOUT__TWOMEG_EN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x80000000U) | ((uint32_t)(1) << 31)
#define MDM_TSTIMEOUT__TWOMEG_EN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x80000000U) | ((uint32_t)(0) << 31)
#define MDM_TSTIMEOUT__TWOMEG_EN__RESET_VALUE                       0x00000001U
/** @} */
#define MDM_TSTIMEOUT__TYPE                                            uint32_t
#define MDM_TSTIMEOUT__READ                                         0xffffffffU
#define MDM_TSTIMEOUT__WRITE                                        0xffffffffU
#define MDM_TSTIMEOUT__PRESERVED                                    0x00000000U
#define MDM_TSTIMEOUT__RESET_VALUE                                  0xfffb21ffU

#endif /* __MDM_TSTIMEOUT_MACRO__ */

/** @} end of tstimeout */

/* macros for BlueprintGlobalNameSpace::MDM_demod */
/**
 * @defgroup mdm_regs_core_demod demod
 * @brief Various demodulation control definitions.
 * @{
 */
#ifndef __MDM_DEMOD_MACRO__
#define __MDM_DEMOD_MACRO__

/* macros for field enable_ffe */
/**
 * @defgroup mdm_regs_core_enable_ffe_field enable_ffe_field
 * @brief macros for field enable_ffe
 * @details For 1 and 2 Mb/s, enables ffe demod. Not used by coded rates. Also requires total_pwr to inband_pwr ratio test
 * @{
 */
#define MDM_DEMOD__ENABLE_FFE__SHIFT                                          0
#define MDM_DEMOD__ENABLE_FFE__WIDTH                                          1
#define MDM_DEMOD__ENABLE_FFE__MASK                                 0x00000001U
#define MDM_DEMOD__ENABLE_FFE__READ(src)        ((uint32_t)(src) & 0x00000001U)
#define MDM_DEMOD__ENABLE_FFE__WRITE(src)       ((uint32_t)(src) & 0x00000001U)
#define MDM_DEMOD__ENABLE_FFE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define MDM_DEMOD__ENABLE_FFE__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define MDM_DEMOD__ENABLE_FFE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define MDM_DEMOD__ENABLE_FFE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define MDM_DEMOD__ENABLE_FFE__RESET_VALUE                          0x00000001U
/** @} */

/* macros for field max_pwr_ratio_for_ffe */
/**
 * @defgroup mdm_regs_core_max_pwr_ratio_for_ffe_field max_pwr_ratio_for_ffe_field
 * @brief macros for field max_pwr_ratio_for_ffe
 * @details Suppress FFE if (total_pwr - inband_pwr) > max_pwr_ratio_for_ffe. Register is signed, in units of dB. Reset to max to effectively disable the power check. 1 Mb/s version
 * @{
 */
#define MDM_DEMOD__MAX_PWR_RATIO_FOR_FFE__SHIFT                               1
#define MDM_DEMOD__MAX_PWR_RATIO_FOR_FFE__WIDTH                               8
#define MDM_DEMOD__MAX_PWR_RATIO_FOR_FFE__MASK                      0x000001feU
#define MDM_DEMOD__MAX_PWR_RATIO_FOR_FFE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x000001feU) >> 1)
#define MDM_DEMOD__MAX_PWR_RATIO_FOR_FFE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x000001feU)
#define MDM_DEMOD__MAX_PWR_RATIO_FOR_FFE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000001feU) | (((uint32_t)(src) <<\
                    1) & 0x000001feU)
#define MDM_DEMOD__MAX_PWR_RATIO_FOR_FFE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x000001feU)))
#define MDM_DEMOD__MAX_PWR_RATIO_FOR_FFE__RESET_VALUE               0x00000009U
/** @} */

/* macros for field uncoded_sat_phase_diff */
/**
 * @defgroup mdm_regs_core_uncoded_sat_phase_diff_field uncoded_sat_phase_diff_field
 * @brief macros for field uncoded_sat_phase_diff
 * @details Enable saturation of phase differences to range of +/- phase_diff_max. Uncoded rates
 * @{
 */
#define MDM_DEMOD__UNCODED_SAT_PHASE_DIFF__SHIFT                              9
#define MDM_DEMOD__UNCODED_SAT_PHASE_DIFF__WIDTH                              1
#define MDM_DEMOD__UNCODED_SAT_PHASE_DIFF__MASK                     0x00000200U
#define MDM_DEMOD__UNCODED_SAT_PHASE_DIFF__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000200U) >> 9)
#define MDM_DEMOD__UNCODED_SAT_PHASE_DIFF__WRITE(src) \
                    (((uint32_t)(src)\
                    << 9) & 0x00000200U)
#define MDM_DEMOD__UNCODED_SAT_PHASE_DIFF__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000200U) | (((uint32_t)(src) <<\
                    9) & 0x00000200U)
#define MDM_DEMOD__UNCODED_SAT_PHASE_DIFF__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 9) & ~0x00000200U)))
#define MDM_DEMOD__UNCODED_SAT_PHASE_DIFF__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000200U) | ((uint32_t)(1) << 9)
#define MDM_DEMOD__UNCODED_SAT_PHASE_DIFF__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000200U) | ((uint32_t)(0) << 9)
#define MDM_DEMOD__UNCODED_SAT_PHASE_DIFF__RESET_VALUE              0x00000001U
/** @} */

/* macros for field uncoded_max_phase_diff */
/**
 * @defgroup mdm_regs_core_uncoded_max_phase_diff_field uncoded_max_phase_diff_field
 * @brief macros for field uncoded_max_phase_diff
 * @details Absolute value of maximum phase difference. Uncoded rates
 * @{
 */
#define MDM_DEMOD__UNCODED_MAX_PHASE_DIFF__SHIFT                             10
#define MDM_DEMOD__UNCODED_MAX_PHASE_DIFF__WIDTH                              6
#define MDM_DEMOD__UNCODED_MAX_PHASE_DIFF__MASK                     0x0000fc00U
#define MDM_DEMOD__UNCODED_MAX_PHASE_DIFF__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000fc00U) >> 10)
#define MDM_DEMOD__UNCODED_MAX_PHASE_DIFF__WRITE(src) \
                    (((uint32_t)(src)\
                    << 10) & 0x0000fc00U)
#define MDM_DEMOD__UNCODED_MAX_PHASE_DIFF__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000fc00U) | (((uint32_t)(src) <<\
                    10) & 0x0000fc00U)
#define MDM_DEMOD__UNCODED_MAX_PHASE_DIFF__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 10) & ~0x0000fc00U)))
#define MDM_DEMOD__UNCODED_MAX_PHASE_DIFF__RESET_VALUE              0x00000030U
/** @} */

/* macros for field adjust_sat_for_freq_offset */
/**
 * @defgroup mdm_regs_core_adjust_sat_for_freq_offset_field adjust_sat_for_freq_offset_field
 * @brief macros for field adjust_sat_for_freq_offset
 * @details For each phase_diff sample, adjust saturation range based on current frequency offset estimate
 * @{
 */
#define MDM_DEMOD__ADJUST_SAT_FOR_FREQ_OFFSET__SHIFT                         16
#define MDM_DEMOD__ADJUST_SAT_FOR_FREQ_OFFSET__WIDTH                          1
#define MDM_DEMOD__ADJUST_SAT_FOR_FREQ_OFFSET__MASK                 0x00010000U
#define MDM_DEMOD__ADJUST_SAT_FOR_FREQ_OFFSET__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00010000U) >> 16)
#define MDM_DEMOD__ADJUST_SAT_FOR_FREQ_OFFSET__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00010000U)
#define MDM_DEMOD__ADJUST_SAT_FOR_FREQ_OFFSET__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00010000U) | (((uint32_t)(src) <<\
                    16) & 0x00010000U)
#define MDM_DEMOD__ADJUST_SAT_FOR_FREQ_OFFSET__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00010000U)))
#define MDM_DEMOD__ADJUST_SAT_FOR_FREQ_OFFSET__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00010000U) | ((uint32_t)(1) << 16)
#define MDM_DEMOD__ADJUST_SAT_FOR_FREQ_OFFSET__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00010000U) | ((uint32_t)(0) << 16)
#define MDM_DEMOD__ADJUST_SAT_FOR_FREQ_OFFSET__RESET_VALUE          0x00000000U
/** @} */

/* macros for field twomeg_max_pwr_ratio_for_ffe */
/**
 * @defgroup mdm_regs_core_twomeg_max_pwr_ratio_for_ffe_field twomeg_max_pwr_ratio_for_ffe_field
 * @brief macros for field twomeg_max_pwr_ratio_for_ffe
 * @details Suppress FFE if (total_pwr - inband_pwr) > max_pwr_ratio_for_ffe. Register is signed, in units of dB. Reset to max to effectively disable the power check. 2 Mb/s version
 * @{
 */
#define MDM_DEMOD__TWOMEG_MAX_PWR_RATIO_FOR_FFE__SHIFT                       17
#define MDM_DEMOD__TWOMEG_MAX_PWR_RATIO_FOR_FFE__WIDTH                        8
#define MDM_DEMOD__TWOMEG_MAX_PWR_RATIO_FOR_FFE__MASK               0x01fe0000U
#define MDM_DEMOD__TWOMEG_MAX_PWR_RATIO_FOR_FFE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x01fe0000U) >> 17)
#define MDM_DEMOD__TWOMEG_MAX_PWR_RATIO_FOR_FFE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 17) & 0x01fe0000U)
#define MDM_DEMOD__TWOMEG_MAX_PWR_RATIO_FOR_FFE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x01fe0000U) | (((uint32_t)(src) <<\
                    17) & 0x01fe0000U)
#define MDM_DEMOD__TWOMEG_MAX_PWR_RATIO_FOR_FFE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 17) & ~0x01fe0000U)))
#define MDM_DEMOD__TWOMEG_MAX_PWR_RATIO_FOR_FFE__RESET_VALUE        0x00000009U
/** @} */

/* macros for field coded_sat_phase_diff */
/**
 * @defgroup mdm_regs_core_coded_sat_phase_diff_field coded_sat_phase_diff_field
 * @brief macros for field coded_sat_phase_diff
 * @details Enable saturation of phase differences to range of +/- phase_diff_max. Coded rates
 * @{
 */
#define MDM_DEMOD__CODED_SAT_PHASE_DIFF__SHIFT                               25
#define MDM_DEMOD__CODED_SAT_PHASE_DIFF__WIDTH                                1
#define MDM_DEMOD__CODED_SAT_PHASE_DIFF__MASK                       0x02000000U
#define MDM_DEMOD__CODED_SAT_PHASE_DIFF__READ(src) \
                    (((uint32_t)(src)\
                    & 0x02000000U) >> 25)
#define MDM_DEMOD__CODED_SAT_PHASE_DIFF__WRITE(src) \
                    (((uint32_t)(src)\
                    << 25) & 0x02000000U)
#define MDM_DEMOD__CODED_SAT_PHASE_DIFF__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x02000000U) | (((uint32_t)(src) <<\
                    25) & 0x02000000U)
#define MDM_DEMOD__CODED_SAT_PHASE_DIFF__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 25) & ~0x02000000U)))
#define MDM_DEMOD__CODED_SAT_PHASE_DIFF__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x02000000U) | ((uint32_t)(1) << 25)
#define MDM_DEMOD__CODED_SAT_PHASE_DIFF__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x02000000U) | ((uint32_t)(0) << 25)
#define MDM_DEMOD__CODED_SAT_PHASE_DIFF__RESET_VALUE                0x00000001U
/** @} */

/* macros for field coded_max_phase_diff */
/**
 * @defgroup mdm_regs_core_coded_max_phase_diff_field coded_max_phase_diff_field
 * @brief macros for field coded_max_phase_diff
 * @details Absolute value of maximum phase difference. Coded rates
 * @{
 */
#define MDM_DEMOD__CODED_MAX_PHASE_DIFF__SHIFT                               26
#define MDM_DEMOD__CODED_MAX_PHASE_DIFF__WIDTH                                6
#define MDM_DEMOD__CODED_MAX_PHASE_DIFF__MASK                       0xfc000000U
#define MDM_DEMOD__CODED_MAX_PHASE_DIFF__READ(src) \
                    (((uint32_t)(src)\
                    & 0xfc000000U) >> 26)
#define MDM_DEMOD__CODED_MAX_PHASE_DIFF__WRITE(src) \
                    (((uint32_t)(src)\
                    << 26) & 0xfc000000U)
#define MDM_DEMOD__CODED_MAX_PHASE_DIFF__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xfc000000U) | (((uint32_t)(src) <<\
                    26) & 0xfc000000U)
#define MDM_DEMOD__CODED_MAX_PHASE_DIFF__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 26) & ~0xfc000000U)))
#define MDM_DEMOD__CODED_MAX_PHASE_DIFF__RESET_VALUE                0x00000030U
/** @} */
#define MDM_DEMOD__TYPE                                                uint32_t
#define MDM_DEMOD__READ                                             0xffffffffU
#define MDM_DEMOD__WRITE                                            0xffffffffU
#define MDM_DEMOD__PRESERVED                                        0x00000000U
#define MDM_DEMOD__RESET_VALUE                                      0xc212c213U

#endif /* __MDM_DEMOD_MACRO__ */

/** @} end of demod */

/* macros for BlueprintGlobalNameSpace::MDM_dfewithffe */
/**
 * @defgroup mdm_regs_core_dfewithffe dfewithffe
 * @brief DFE adjustments to make to demod_threshold when FFE is enabled (enable_ffe_demod set, and uncoded rate) definitions.
 * @{
 */
#ifndef __MDM_DFEWITHFFE_MACRO__
#define __MDM_DFEWITHFFE_MACRO__

/* macros for field adjust1 */
/**
 * @defgroup mdm_regs_core_adjust1_field adjust1_field
 * @brief macros for field adjust1
 * @details For immediately previous symbol. Signed
 * @{
 */
#define MDM_DFEWITHFFE__ADJUST1__SHIFT                                        0
#define MDM_DFEWITHFFE__ADJUST1__WIDTH                                        8
#define MDM_DFEWITHFFE__ADJUST1__MASK                               0x000000ffU
#define MDM_DFEWITHFFE__ADJUST1__READ(src)      ((uint32_t)(src) & 0x000000ffU)
#define MDM_DFEWITHFFE__ADJUST1__WRITE(src)     ((uint32_t)(src) & 0x000000ffU)
#define MDM_DFEWITHFFE__ADJUST1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define MDM_DFEWITHFFE__ADJUST1__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000000ffU)))
#define MDM_DFEWITHFFE__ADJUST1__RESET_VALUE                        0x00000041U
/** @} */

/* macros for field adjust2 */
/**
 * @defgroup mdm_regs_core_adjust2_field adjust2_field
 * @brief macros for field adjust2
 * @details Looking back two symbols. Signed
 * @{
 */
#define MDM_DFEWITHFFE__ADJUST2__SHIFT                                        8
#define MDM_DFEWITHFFE__ADJUST2__WIDTH                                        8
#define MDM_DFEWITHFFE__ADJUST2__MASK                               0x0000ff00U
#define MDM_DFEWITHFFE__ADJUST2__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000ff00U) >> 8)
#define MDM_DFEWITHFFE__ADJUST2__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x0000ff00U)
#define MDM_DFEWITHFFE__ADJUST2__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ff00U) | (((uint32_t)(src) <<\
                    8) & 0x0000ff00U)
#define MDM_DFEWITHFFE__ADJUST2__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x0000ff00U)))
#define MDM_DFEWITHFFE__ADJUST2__RESET_VALUE                        0x00000020U
/** @} */

/* macros for field adjust3 */
/**
 * @defgroup mdm_regs_core_adjust3_field adjust3_field
 * @brief macros for field adjust3
 * @details Looking back three symbols. Signed
 * @{
 */
#define MDM_DFEWITHFFE__ADJUST3__SHIFT                                       16
#define MDM_DFEWITHFFE__ADJUST3__WIDTH                                        8
#define MDM_DFEWITHFFE__ADJUST3__MASK                               0x00ff0000U
#define MDM_DFEWITHFFE__ADJUST3__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00ff0000U) >> 16)
#define MDM_DFEWITHFFE__ADJUST3__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00ff0000U)
#define MDM_DFEWITHFFE__ADJUST3__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00ff0000U) | (((uint32_t)(src) <<\
                    16) & 0x00ff0000U)
#define MDM_DFEWITHFFE__ADJUST3__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00ff0000U)))
#define MDM_DFEWITHFFE__ADJUST3__RESET_VALUE                        0x00000005U
/** @} */
#define MDM_DFEWITHFFE__TYPE                                           uint32_t
#define MDM_DFEWITHFFE__READ                                        0x00ffffffU
#define MDM_DFEWITHFFE__WRITE                                       0x00ffffffU
#define MDM_DFEWITHFFE__PRESERVED                                   0x00000000U
#define MDM_DFEWITHFFE__RESET_VALUE                                 0x00052041U

#endif /* __MDM_DFEWITHFFE_MACRO__ */

/** @} end of dfewithffe */

/* macros for BlueprintGlobalNameSpace::MDM_dfewithoutffe */
/**
 * @defgroup mdm_regs_core_dfewithoutffe dfewithoutffe
 * @brief DFE adjustments to make to demod_threshold when FFE is not used (enable_ffe_demod clear, or coded rate) definitions.
 * @{
 */
#ifndef __MDM_DFEWITHOUTFFE_MACRO__
#define __MDM_DFEWITHOUTFFE_MACRO__

/* macros for field adjust1 */
/**
 * @defgroup mdm_regs_core_adjust1_field adjust1_field
 * @brief macros for field adjust1
 * @details For immediately previous symbol. Signed
 * @{
 */
#define MDM_DFEWITHOUTFFE__ADJUST1__SHIFT                                     0
#define MDM_DFEWITHOUTFFE__ADJUST1__WIDTH                                     8
#define MDM_DFEWITHOUTFFE__ADJUST1__MASK                            0x000000ffU
#define MDM_DFEWITHOUTFFE__ADJUST1__READ(src)   ((uint32_t)(src) & 0x000000ffU)
#define MDM_DFEWITHOUTFFE__ADJUST1__WRITE(src)  ((uint32_t)(src) & 0x000000ffU)
#define MDM_DFEWITHOUTFFE__ADJUST1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define MDM_DFEWITHOUTFFE__ADJUST1__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000000ffU)))
#define MDM_DFEWITHOUTFFE__ADJUST1__RESET_VALUE                     0x00000017U
/** @} */

/* macros for field adjust2 */
/**
 * @defgroup mdm_regs_core_adjust2_field adjust2_field
 * @brief macros for field adjust2
 * @details Looking back two symbols. Signed
 * @{
 */
#define MDM_DFEWITHOUTFFE__ADJUST2__SHIFT                                     8
#define MDM_DFEWITHOUTFFE__ADJUST2__WIDTH                                     8
#define MDM_DFEWITHOUTFFE__ADJUST2__MASK                            0x0000ff00U
#define MDM_DFEWITHOUTFFE__ADJUST2__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000ff00U) >> 8)
#define MDM_DFEWITHOUTFFE__ADJUST2__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x0000ff00U)
#define MDM_DFEWITHOUTFFE__ADJUST2__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ff00U) | (((uint32_t)(src) <<\
                    8) & 0x0000ff00U)
#define MDM_DFEWITHOUTFFE__ADJUST2__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x0000ff00U)))
#define MDM_DFEWITHOUTFFE__ADJUST2__RESET_VALUE                     0x00000000U
/** @} */

/* macros for field adjust3 */
/**
 * @defgroup mdm_regs_core_adjust3_field adjust3_field
 * @brief macros for field adjust3
 * @details Looking back three symbols. Signed
 * @{
 */
#define MDM_DFEWITHOUTFFE__ADJUST3__SHIFT                                    16
#define MDM_DFEWITHOUTFFE__ADJUST3__WIDTH                                     8
#define MDM_DFEWITHOUTFFE__ADJUST3__MASK                            0x00ff0000U
#define MDM_DFEWITHOUTFFE__ADJUST3__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00ff0000U) >> 16)
#define MDM_DFEWITHOUTFFE__ADJUST3__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00ff0000U)
#define MDM_DFEWITHOUTFFE__ADJUST3__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00ff0000U) | (((uint32_t)(src) <<\
                    16) & 0x00ff0000U)
#define MDM_DFEWITHOUTFFE__ADJUST3__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00ff0000U)))
#define MDM_DFEWITHOUTFFE__ADJUST3__RESET_VALUE                     0x00000000U
/** @} */

/* macros for field coded_en */
/**
 * @defgroup mdm_regs_core_coded_en_field coded_en_field
 * @brief macros for field coded_en
 * @details If set, apply dfewithoutffe adjustments to coded, in addition to uncoded
 * @{
 */
#define MDM_DFEWITHOUTFFE__CODED_EN__SHIFT                                   24
#define MDM_DFEWITHOUTFFE__CODED_EN__WIDTH                                    1
#define MDM_DFEWITHOUTFFE__CODED_EN__MASK                           0x01000000U
#define MDM_DFEWITHOUTFFE__CODED_EN__READ(src) \
                    (((uint32_t)(src)\
                    & 0x01000000U) >> 24)
#define MDM_DFEWITHOUTFFE__CODED_EN__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0x01000000U)
#define MDM_DFEWITHOUTFFE__CODED_EN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | (((uint32_t)(src) <<\
                    24) & 0x01000000U)
#define MDM_DFEWITHOUTFFE__CODED_EN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x01000000U)))
#define MDM_DFEWITHOUTFFE__CODED_EN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(1) << 24)
#define MDM_DFEWITHOUTFFE__CODED_EN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(0) << 24)
#define MDM_DFEWITHOUTFFE__CODED_EN__RESET_VALUE                    0x00000000U
/** @} */
#define MDM_DFEWITHOUTFFE__TYPE                                        uint32_t
#define MDM_DFEWITHOUTFFE__READ                                     0x01ffffffU
#define MDM_DFEWITHOUTFFE__WRITE                                    0x01ffffffU
#define MDM_DFEWITHOUTFFE__PRESERVED                                0x00000000U
#define MDM_DFEWITHOUTFFE__RESET_VALUE                              0x00000017U

#endif /* __MDM_DFEWITHOUTFFE_MACRO__ */

/** @} end of dfewithoutffe */

/* macros for BlueprintGlobalNameSpace::MDM_twomeg_dfewithffe */
/**
 * @defgroup mdm_regs_core_twomeg_dfewithffe twomeg_dfewithffe
 * @brief DFE adjustments to make to demod_threshold when FFE is enabled (enable_ffe_demod set, and uncoded rate) definitions.
 * @{
 */
#ifndef __MDM_TWOMEG_DFEWITHFFE_MACRO__
#define __MDM_TWOMEG_DFEWITHFFE_MACRO__

/* macros for field adjust1 */
/**
 * @defgroup mdm_regs_core_adjust1_field adjust1_field
 * @brief macros for field adjust1
 * @details For immediately previous symbol. Signed
 * @{
 */
#define MDM_TWOMEG_DFEWITHFFE__ADJUST1__SHIFT                                 0
#define MDM_TWOMEG_DFEWITHFFE__ADJUST1__WIDTH                                 8
#define MDM_TWOMEG_DFEWITHFFE__ADJUST1__MASK                        0x000000ffU
#define MDM_TWOMEG_DFEWITHFFE__ADJUST1__READ(src) \
                    ((uint32_t)(src)\
                    & 0x000000ffU)
#define MDM_TWOMEG_DFEWITHFFE__ADJUST1__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x000000ffU)
#define MDM_TWOMEG_DFEWITHFFE__ADJUST1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define MDM_TWOMEG_DFEWITHFFE__ADJUST1__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000000ffU)))
#define MDM_TWOMEG_DFEWITHFFE__ADJUST1__RESET_VALUE                 0x00000040U
/** @} */

/* macros for field adjust2 */
/**
 * @defgroup mdm_regs_core_adjust2_field adjust2_field
 * @brief macros for field adjust2
 * @details Looking back two symbols. Signed
 * @{
 */
#define MDM_TWOMEG_DFEWITHFFE__ADJUST2__SHIFT                                 8
#define MDM_TWOMEG_DFEWITHFFE__ADJUST2__WIDTH                                 8
#define MDM_TWOMEG_DFEWITHFFE__ADJUST2__MASK                        0x0000ff00U
#define MDM_TWOMEG_DFEWITHFFE__ADJUST2__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000ff00U) >> 8)
#define MDM_TWOMEG_DFEWITHFFE__ADJUST2__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x0000ff00U)
#define MDM_TWOMEG_DFEWITHFFE__ADJUST2__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ff00U) | (((uint32_t)(src) <<\
                    8) & 0x0000ff00U)
#define MDM_TWOMEG_DFEWITHFFE__ADJUST2__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x0000ff00U)))
#define MDM_TWOMEG_DFEWITHFFE__ADJUST2__RESET_VALUE                 0x0000001eU
/** @} */

/* macros for field adjust3 */
/**
 * @defgroup mdm_regs_core_adjust3_field adjust3_field
 * @brief macros for field adjust3
 * @details Looking back three symbols. Signed
 * @{
 */
#define MDM_TWOMEG_DFEWITHFFE__ADJUST3__SHIFT                                16
#define MDM_TWOMEG_DFEWITHFFE__ADJUST3__WIDTH                                 8
#define MDM_TWOMEG_DFEWITHFFE__ADJUST3__MASK                        0x00ff0000U
#define MDM_TWOMEG_DFEWITHFFE__ADJUST3__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00ff0000U) >> 16)
#define MDM_TWOMEG_DFEWITHFFE__ADJUST3__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00ff0000U)
#define MDM_TWOMEG_DFEWITHFFE__ADJUST3__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00ff0000U) | (((uint32_t)(src) <<\
                    16) & 0x00ff0000U)
#define MDM_TWOMEG_DFEWITHFFE__ADJUST3__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00ff0000U)))
#define MDM_TWOMEG_DFEWITHFFE__ADJUST3__RESET_VALUE                 0x00000004U
/** @} */
#define MDM_TWOMEG_DFEWITHFFE__TYPE                                    uint32_t
#define MDM_TWOMEG_DFEWITHFFE__READ                                 0x00ffffffU
#define MDM_TWOMEG_DFEWITHFFE__WRITE                                0x00ffffffU
#define MDM_TWOMEG_DFEWITHFFE__PRESERVED                            0x00000000U
#define MDM_TWOMEG_DFEWITHFFE__RESET_VALUE                          0x00041e40U

#endif /* __MDM_TWOMEG_DFEWITHFFE_MACRO__ */

/** @} end of twomeg_dfewithffe */

/* macros for BlueprintGlobalNameSpace::MDM_twomeg_dfewithoutffe */
/**
 * @defgroup mdm_regs_core_twomeg_dfewithoutffe twomeg_dfewithoutffe
 * @brief DFE adjustments to make to demod_threshold when FFE is not used (enable_ffe_demod clear, or coded rate) definitions.
 * @{
 */
#ifndef __MDM_TWOMEG_DFEWITHOUTFFE_MACRO__
#define __MDM_TWOMEG_DFEWITHOUTFFE_MACRO__

/* macros for field adjust1 */
/**
 * @defgroup mdm_regs_core_adjust1_field adjust1_field
 * @brief macros for field adjust1
 * @details For immediately previous symbol. Signed
 * @{
 */
#define MDM_TWOMEG_DFEWITHOUTFFE__ADJUST1__SHIFT                              0
#define MDM_TWOMEG_DFEWITHOUTFFE__ADJUST1__WIDTH                              8
#define MDM_TWOMEG_DFEWITHOUTFFE__ADJUST1__MASK                     0x000000ffU
#define MDM_TWOMEG_DFEWITHOUTFFE__ADJUST1__READ(src) \
                    ((uint32_t)(src)\
                    & 0x000000ffU)
#define MDM_TWOMEG_DFEWITHOUTFFE__ADJUST1__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x000000ffU)
#define MDM_TWOMEG_DFEWITHOUTFFE__ADJUST1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define MDM_TWOMEG_DFEWITHOUTFFE__ADJUST1__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000000ffU)))
#define MDM_TWOMEG_DFEWITHOUTFFE__ADJUST1__RESET_VALUE              0x00000017U
/** @} */

/* macros for field adjust2 */
/**
 * @defgroup mdm_regs_core_adjust2_field adjust2_field
 * @brief macros for field adjust2
 * @details Looking back two symbols. Signed
 * @{
 */
#define MDM_TWOMEG_DFEWITHOUTFFE__ADJUST2__SHIFT                              8
#define MDM_TWOMEG_DFEWITHOUTFFE__ADJUST2__WIDTH                              8
#define MDM_TWOMEG_DFEWITHOUTFFE__ADJUST2__MASK                     0x0000ff00U
#define MDM_TWOMEG_DFEWITHOUTFFE__ADJUST2__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000ff00U) >> 8)
#define MDM_TWOMEG_DFEWITHOUTFFE__ADJUST2__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x0000ff00U)
#define MDM_TWOMEG_DFEWITHOUTFFE__ADJUST2__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ff00U) | (((uint32_t)(src) <<\
                    8) & 0x0000ff00U)
#define MDM_TWOMEG_DFEWITHOUTFFE__ADJUST2__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x0000ff00U)))
#define MDM_TWOMEG_DFEWITHOUTFFE__ADJUST2__RESET_VALUE              0x00000000U
/** @} */

/* macros for field adjust3 */
/**
 * @defgroup mdm_regs_core_adjust3_field adjust3_field
 * @brief macros for field adjust3
 * @details Looking back three symbols. Signed
 * @{
 */
#define MDM_TWOMEG_DFEWITHOUTFFE__ADJUST3__SHIFT                             16
#define MDM_TWOMEG_DFEWITHOUTFFE__ADJUST3__WIDTH                              8
#define MDM_TWOMEG_DFEWITHOUTFFE__ADJUST3__MASK                     0x00ff0000U
#define MDM_TWOMEG_DFEWITHOUTFFE__ADJUST3__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00ff0000U) >> 16)
#define MDM_TWOMEG_DFEWITHOUTFFE__ADJUST3__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00ff0000U)
#define MDM_TWOMEG_DFEWITHOUTFFE__ADJUST3__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00ff0000U) | (((uint32_t)(src) <<\
                    16) & 0x00ff0000U)
#define MDM_TWOMEG_DFEWITHOUTFFE__ADJUST3__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00ff0000U)))
#define MDM_TWOMEG_DFEWITHOUTFFE__ADJUST3__RESET_VALUE              0x00000000U
/** @} */
#define MDM_TWOMEG_DFEWITHOUTFFE__TYPE                                 uint32_t
#define MDM_TWOMEG_DFEWITHOUTFFE__READ                              0x00ffffffU
#define MDM_TWOMEG_DFEWITHOUTFFE__WRITE                             0x00ffffffU
#define MDM_TWOMEG_DFEWITHOUTFFE__PRESERVED                         0x00000000U
#define MDM_TWOMEG_DFEWITHOUTFFE__RESET_VALUE                       0x00000017U

#endif /* __MDM_TWOMEG_DFEWITHOUTFFE_MACRO__ */

/** @} end of twomeg_dfewithoutffe */

/* macros for BlueprintGlobalNameSpace::MDM_freq */
/**
 * @defgroup mdm_regs_core_freq freq
 * @brief Frequency tracking control definitions.
 * @{
 */
#ifndef __MDM_FREQ_MACRO__
#define __MDM_FREQ_MACRO__

/* macros for field enable_track */
/**
 * @defgroup mdm_regs_core_enable_track_field enable_track_field
 * @brief macros for field enable_track
 * @details 1 is enable frequency tracking. 0 is just use initial estimate from preamble
 * @{
 */
#define MDM_FREQ__ENABLE_TRACK__SHIFT                                         0
#define MDM_FREQ__ENABLE_TRACK__WIDTH                                         1
#define MDM_FREQ__ENABLE_TRACK__MASK                                0x00000001U
#define MDM_FREQ__ENABLE_TRACK__READ(src)       ((uint32_t)(src) & 0x00000001U)
#define MDM_FREQ__ENABLE_TRACK__WRITE(src)      ((uint32_t)(src) & 0x00000001U)
#define MDM_FREQ__ENABLE_TRACK__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define MDM_FREQ__ENABLE_TRACK__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define MDM_FREQ__ENABLE_TRACK__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define MDM_FREQ__ENABLE_TRACK__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define MDM_FREQ__ENABLE_TRACK__RESET_VALUE                         0x00000001U
/** @} */

/* macros for field enable_same_pat */
/**
 * @defgroup mdm_regs_core_enable_same_pat_field enable_same_pat_field
 * @brief macros for field enable_same_pat
 * @details Perform tracking based on same 3-bit pattern in addition to flipped pattern
 * @{
 */
#define MDM_FREQ__ENABLE_SAME_PAT__SHIFT                                      1
#define MDM_FREQ__ENABLE_SAME_PAT__WIDTH                                      1
#define MDM_FREQ__ENABLE_SAME_PAT__MASK                             0x00000002U
#define MDM_FREQ__ENABLE_SAME_PAT__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define MDM_FREQ__ENABLE_SAME_PAT__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define MDM_FREQ__ENABLE_SAME_PAT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define MDM_FREQ__ENABLE_SAME_PAT__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define MDM_FREQ__ENABLE_SAME_PAT__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define MDM_FREQ__ENABLE_SAME_PAT__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define MDM_FREQ__ENABLE_SAME_PAT__RESET_VALUE                      0x00000000U
/** @} */

/* macros for field mu1 */
/**
 * @defgroup mdm_regs_core_mu1_field mu1_field
 * @brief macros for field mu1
 * @details mu to use for first gear. Encoding: 2^(-(mu1+1))
 * @{
 */
#define MDM_FREQ__MU1__SHIFT                                                  2
#define MDM_FREQ__MU1__WIDTH                                                  3
#define MDM_FREQ__MU1__MASK                                         0x0000001cU
#define MDM_FREQ__MU1__READ(src)         (((uint32_t)(src) & 0x0000001cU) >> 2)
#define MDM_FREQ__MU1__WRITE(src)        (((uint32_t)(src) << 2) & 0x0000001cU)
#define MDM_FREQ__MU1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000001cU) | (((uint32_t)(src) <<\
                    2) & 0x0000001cU)
#define MDM_FREQ__MU1__VERIFY(src) (!((((uint32_t)(src) << 2) & ~0x0000001cU)))
#define MDM_FREQ__MU1__RESET_VALUE                                  0x00000003U
/** @} */

/* macros for field mu2 */
/**
 * @defgroup mdm_regs_core_mu2_field mu2_field
 * @brief macros for field mu2
 * @details mu to use for second gear. Encoding: 2^(-(mu2+1))
 * @{
 */
#define MDM_FREQ__MU2__SHIFT                                                  5
#define MDM_FREQ__MU2__WIDTH                                                  3
#define MDM_FREQ__MU2__MASK                                         0x000000e0U
#define MDM_FREQ__MU2__READ(src)         (((uint32_t)(src) & 0x000000e0U) >> 5)
#define MDM_FREQ__MU2__WRITE(src)        (((uint32_t)(src) << 5) & 0x000000e0U)
#define MDM_FREQ__MU2__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000e0U) | (((uint32_t)(src) <<\
                    5) & 0x000000e0U)
#define MDM_FREQ__MU2__VERIFY(src) (!((((uint32_t)(src) << 5) & ~0x000000e0U)))
#define MDM_FREQ__MU2__RESET_VALUE                                  0x00000004U
/** @} */

/* macros for field mu3 */
/**
 * @defgroup mdm_regs_core_mu3_field mu3_field
 * @brief macros for field mu3
 * @details mu to use for third gear. Encoding: 2^(-(mu3+1))
 * @{
 */
#define MDM_FREQ__MU3__SHIFT                                                  8
#define MDM_FREQ__MU3__WIDTH                                                  3
#define MDM_FREQ__MU3__MASK                                         0x00000700U
#define MDM_FREQ__MU3__READ(src)         (((uint32_t)(src) & 0x00000700U) >> 8)
#define MDM_FREQ__MU3__WRITE(src)        (((uint32_t)(src) << 8) & 0x00000700U)
#define MDM_FREQ__MU3__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000700U) | (((uint32_t)(src) <<\
                    8) & 0x00000700U)
#define MDM_FREQ__MU3__VERIFY(src) (!((((uint32_t)(src) << 8) & ~0x00000700U)))
#define MDM_FREQ__MU3__RESET_VALUE                                  0x00000004U
/** @} */

/* macros for field pat_dly */
/**
 * @defgroup mdm_regs_core_pat_dly_field pat_dly_field
 * @brief macros for field pat_dly
 * @details determines number of symbols for when pattern matching times out. Encoding is 2^(pat_dly+2)
 * @{
 */
#define MDM_FREQ__PAT_DLY__SHIFT                                             11
#define MDM_FREQ__PAT_DLY__WIDTH                                              3
#define MDM_FREQ__PAT_DLY__MASK                                     0x00003800U
#define MDM_FREQ__PAT_DLY__READ(src)    (((uint32_t)(src) & 0x00003800U) >> 11)
#define MDM_FREQ__PAT_DLY__WRITE(src)   (((uint32_t)(src) << 11) & 0x00003800U)
#define MDM_FREQ__PAT_DLY__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00003800U) | (((uint32_t)(src) <<\
                    11) & 0x00003800U)
#define MDM_FREQ__PAT_DLY__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 11) & ~0x00003800U)))
#define MDM_FREQ__PAT_DLY__RESET_VALUE                              0x00000004U
/** @} */

/* macros for field mu_count1 */
/**
 * @defgroup mdm_regs_core_mu_count1_field mu_count1_field
 * @brief macros for field mu_count1
 * @details Number of bytes to process before switching from gear 1 to gear 2
 * @{
 */
#define MDM_FREQ__MU_COUNT1__SHIFT                                           14
#define MDM_FREQ__MU_COUNT1__WIDTH                                            8
#define MDM_FREQ__MU_COUNT1__MASK                                   0x003fc000U
#define MDM_FREQ__MU_COUNT1__READ(src)  (((uint32_t)(src) & 0x003fc000U) >> 14)
#define MDM_FREQ__MU_COUNT1__WRITE(src) (((uint32_t)(src) << 14) & 0x003fc000U)
#define MDM_FREQ__MU_COUNT1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x003fc000U) | (((uint32_t)(src) <<\
                    14) & 0x003fc000U)
#define MDM_FREQ__MU_COUNT1__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 14) & ~0x003fc000U)))
#define MDM_FREQ__MU_COUNT1__RESET_VALUE                            0x00000004U
/** @} */

/* macros for field mu_count2 */
/**
 * @defgroup mdm_regs_core_mu_count2_field mu_count2_field
 * @brief macros for field mu_count2
 * @details Number of bytes to process before switching to gear 3. (Includes bytes from gear 1 PLUS gear 2)
 * @{
 */
#define MDM_FREQ__MU_COUNT2__SHIFT                                           22
#define MDM_FREQ__MU_COUNT2__WIDTH                                            8
#define MDM_FREQ__MU_COUNT2__MASK                                   0x3fc00000U
#define MDM_FREQ__MU_COUNT2__READ(src)  (((uint32_t)(src) & 0x3fc00000U) >> 22)
#define MDM_FREQ__MU_COUNT2__WRITE(src) (((uint32_t)(src) << 22) & 0x3fc00000U)
#define MDM_FREQ__MU_COUNT2__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x3fc00000U) | (((uint32_t)(src) <<\
                    22) & 0x3fc00000U)
#define MDM_FREQ__MU_COUNT2__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 22) & ~0x3fc00000U)))
#define MDM_FREQ__MU_COUNT2__RESET_VALUE                            0x00000010U
/** @} */
#define MDM_FREQ__TYPE                                                 uint32_t
#define MDM_FREQ__READ                                              0x3fffffffU
#define MDM_FREQ__WRITE                                             0x3fffffffU
#define MDM_FREQ__PRESERVED                                         0x00000000U
#define MDM_FREQ__RESET_VALUE                                       0x0401248dU

#endif /* __MDM_FREQ_MACRO__ */

/** @} end of freq */

/* macros for BlueprintGlobalNameSpace::MDM_freqlim */
/**
 * @defgroup mdm_regs_core_freqlim freqlim
 * @brief Specifies range of compensated soft demod values to be used for frequency tracking. Anything outside of this range is discarded. 0 to 512 is the full range of absolute values definitions.
 * @{
 */
#ifndef __MDM_FREQLIM_MACRO__
#define __MDM_FREQLIM_MACRO__

/* macros for field maxwithffe */
/**
 * @defgroup mdm_regs_core_maxwithffe_field maxwithffe_field
 * @brief macros for field maxwithffe
 * @details max absolute value to be used in tracking
 * @{
 */
#define MDM_FREQLIM__MAXWITHFFE__SHIFT                                        0
#define MDM_FREQLIM__MAXWITHFFE__WIDTH                                        9
#define MDM_FREQLIM__MAXWITHFFE__MASK                               0x000001ffU
#define MDM_FREQLIM__MAXWITHFFE__READ(src)      ((uint32_t)(src) & 0x000001ffU)
#define MDM_FREQLIM__MAXWITHFFE__WRITE(src)     ((uint32_t)(src) & 0x000001ffU)
#define MDM_FREQLIM__MAXWITHFFE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000001ffU) | ((uint32_t)(src) &\
                    0x000001ffU)
#define MDM_FREQLIM__MAXWITHFFE__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000001ffU)))
#define MDM_FREQLIM__MAXWITHFFE__RESET_VALUE                        0x000001ffU
/** @} */

/* macros for field minwithffe */
/**
 * @defgroup mdm_regs_core_minwithffe_field minwithffe_field
 * @brief macros for field minwithffe
 * @details min absolute value to be used in tracking
 * @{
 */
#define MDM_FREQLIM__MINWITHFFE__SHIFT                                        9
#define MDM_FREQLIM__MINWITHFFE__WIDTH                                        7
#define MDM_FREQLIM__MINWITHFFE__MASK                               0x0000fe00U
#define MDM_FREQLIM__MINWITHFFE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000fe00U) >> 9)
#define MDM_FREQLIM__MINWITHFFE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 9) & 0x0000fe00U)
#define MDM_FREQLIM__MINWITHFFE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000fe00U) | (((uint32_t)(src) <<\
                    9) & 0x0000fe00U)
#define MDM_FREQLIM__MINWITHFFE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 9) & ~0x0000fe00U)))
#define MDM_FREQLIM__MINWITHFFE__RESET_VALUE                        0x00000000U
/** @} */

/* macros for field maxwithoutffe */
/**
 * @defgroup mdm_regs_core_maxwithoutffe_field maxwithoutffe_field
 * @brief macros for field maxwithoutffe
 * @details max absolute value to be used in tracking
 * @{
 */
#define MDM_FREQLIM__MAXWITHOUTFFE__SHIFT                                    16
#define MDM_FREQLIM__MAXWITHOUTFFE__WIDTH                                     9
#define MDM_FREQLIM__MAXWITHOUTFFE__MASK                            0x01ff0000U
#define MDM_FREQLIM__MAXWITHOUTFFE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x01ff0000U) >> 16)
#define MDM_FREQLIM__MAXWITHOUTFFE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x01ff0000U)
#define MDM_FREQLIM__MAXWITHOUTFFE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x01ff0000U) | (((uint32_t)(src) <<\
                    16) & 0x01ff0000U)
#define MDM_FREQLIM__MAXWITHOUTFFE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x01ff0000U)))
#define MDM_FREQLIM__MAXWITHOUTFFE__RESET_VALUE                     0x000001ffU
/** @} */

/* macros for field minwithoutffe */
/**
 * @defgroup mdm_regs_core_minwithoutffe_field minwithoutffe_field
 * @brief macros for field minwithoutffe
 * @details min absolute value to be used in tracking
 * @{
 */
#define MDM_FREQLIM__MINWITHOUTFFE__SHIFT                                    25
#define MDM_FREQLIM__MINWITHOUTFFE__WIDTH                                     7
#define MDM_FREQLIM__MINWITHOUTFFE__MASK                            0xfe000000U
#define MDM_FREQLIM__MINWITHOUTFFE__READ(src) \
                    (((uint32_t)(src)\
                    & 0xfe000000U) >> 25)
#define MDM_FREQLIM__MINWITHOUTFFE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 25) & 0xfe000000U)
#define MDM_FREQLIM__MINWITHOUTFFE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xfe000000U) | (((uint32_t)(src) <<\
                    25) & 0xfe000000U)
#define MDM_FREQLIM__MINWITHOUTFFE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 25) & ~0xfe000000U)))
#define MDM_FREQLIM__MINWITHOUTFFE__RESET_VALUE                     0x00000000U
/** @} */
#define MDM_FREQLIM__TYPE                                              uint32_t
#define MDM_FREQLIM__READ                                           0xffffffffU
#define MDM_FREQLIM__WRITE                                          0xffffffffU
#define MDM_FREQLIM__PRESERVED                                      0x00000000U
#define MDM_FREQLIM__RESET_VALUE                                    0x01ff01ffU

#endif /* __MDM_FREQLIM_MACRO__ */

/** @} end of freqlim */

/* macros for BlueprintGlobalNameSpace::MDM_lr */
/**
 * @defgroup mdm_regs_core_lr lr
 * @brief Long-range specific control registers definitions.
 * @{
 */
#ifndef __MDM_LR_MACRO__
#define __MDM_LR_MACRO__

/* macros for field synch_detect_num_exp */
/**
 * @defgroup mdm_regs_core_synch_detect_num_exp_field synch_detect_num_exp_field
 * @brief macros for field synch_detect_num_exp
 * @details Number of frequency estimates for signal detection. Keep repeating measurement during detection. Encoding: 00 = 16 (10 symbols) 01 = 32 (12 symbols) 10 = 64 (16 symbols) 11 = 128 (24 symbols)
 * @{
 */
#define MDM_LR__SYNCH_DETECT_NUM_EXP__SHIFT                                   0
#define MDM_LR__SYNCH_DETECT_NUM_EXP__WIDTH                                   2
#define MDM_LR__SYNCH_DETECT_NUM_EXP__MASK                          0x00000003U
#define MDM_LR__SYNCH_DETECT_NUM_EXP__READ(src) ((uint32_t)(src) & 0x00000003U)
#define MDM_LR__SYNCH_DETECT_NUM_EXP__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000003U)
#define MDM_LR__SYNCH_DETECT_NUM_EXP__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000003U) | ((uint32_t)(src) &\
                    0x00000003U)
#define MDM_LR__SYNCH_DETECT_NUM_EXP__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000003U)))
#define MDM_LR__SYNCH_DETECT_NUM_EXP__RESET_VALUE                   0x00000000U
/** @} */

/* macros for field synch_num_exp */
/**
 * @defgroup mdm_regs_core_synch_num_exp_field synch_num_exp_field
 * @brief macros for field synch_num_exp
 * @details Number of frequency estimates for demodulation and number of averages for timing sync. Encoding: 00 = NA 01 = freq: 32; timing averages (1x); (12 symbols) 10 = freq: 64; timing averages (2x); (16 symbols) 11 = freq: 128; timing averages (4x); (24 symbols)
 * @{
 */
#define MDM_LR__SYNCH_NUM_EXP__SHIFT                                          2
#define MDM_LR__SYNCH_NUM_EXP__WIDTH                                          2
#define MDM_LR__SYNCH_NUM_EXP__MASK                                 0x0000000cU
#define MDM_LR__SYNCH_NUM_EXP__READ(src) (((uint32_t)(src) & 0x0000000cU) >> 2)
#define MDM_LR__SYNCH_NUM_EXP__WRITE(src) \
                    (((uint32_t)(src)\
                    << 2) & 0x0000000cU)
#define MDM_LR__SYNCH_NUM_EXP__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000000cU) | (((uint32_t)(src) <<\
                    2) & 0x0000000cU)
#define MDM_LR__SYNCH_NUM_EXP__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 2) & ~0x0000000cU)))
#define MDM_LR__SYNCH_NUM_EXP__RESET_VALUE                          0x00000003U
/** @} */

/* macros for field num_corr_win */
/**
 * @defgroup mdm_regs_core_num_corr_win_field num_corr_win_field
 * @brief macros for field num_corr_win
 * @details Number of 4 us windows to include in correlation. Max is 10.
 * @{
 */
#define MDM_LR__NUM_CORR_WIN__SHIFT                                           4
#define MDM_LR__NUM_CORR_WIN__WIDTH                                           4
#define MDM_LR__NUM_CORR_WIN__MASK                                  0x000000f0U
#define MDM_LR__NUM_CORR_WIN__READ(src)  (((uint32_t)(src) & 0x000000f0U) >> 4)
#define MDM_LR__NUM_CORR_WIN__WRITE(src) (((uint32_t)(src) << 4) & 0x000000f0U)
#define MDM_LR__NUM_CORR_WIN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000f0U) | (((uint32_t)(src) <<\
                    4) & 0x000000f0U)
#define MDM_LR__NUM_CORR_WIN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 4) & ~0x000000f0U)))
#define MDM_LR__NUM_CORR_WIN__RESET_VALUE                           0x00000009U
/** @} */

/* macros for field num_corr_avg */
/**
 * @defgroup mdm_regs_core_num_corr_avg_field num_corr_avg_field
 * @brief macros for field num_corr_avg
 * @details Number of phase differences to include in each 4 us (32 sample) window
 * @{
 */
#define MDM_LR__NUM_CORR_AVG__SHIFT                                           8
#define MDM_LR__NUM_CORR_AVG__WIDTH                                           5
#define MDM_LR__NUM_CORR_AVG__MASK                                  0x00001f00U
#define MDM_LR__NUM_CORR_AVG__READ(src)  (((uint32_t)(src) & 0x00001f00U) >> 8)
#define MDM_LR__NUM_CORR_AVG__WRITE(src) (((uint32_t)(src) << 8) & 0x00001f00U)
#define MDM_LR__NUM_CORR_AVG__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00001f00U) | (((uint32_t)(src) <<\
                    8) & 0x00001f00U)
#define MDM_LR__NUM_CORR_AVG__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x00001f00U)))
#define MDM_LR__NUM_CORR_AVG__RESET_VALUE                           0x00000010U
/** @} */

/* macros for field corr_thresh_high */
/**
 * @defgroup mdm_regs_core_corr_thresh_high_field corr_thresh_high_field
 * @brief macros for field corr_thresh_high
 * @details Declare a detection if number of matches >= corr_thresh_high
 * @{
 */
#define MDM_LR__CORR_THRESH_HIGH__SHIFT                                      13
#define MDM_LR__CORR_THRESH_HIGH__WIDTH                                       9
#define MDM_LR__CORR_THRESH_HIGH__MASK                              0x003fe000U
#define MDM_LR__CORR_THRESH_HIGH__READ(src) \
                    (((uint32_t)(src)\
                    & 0x003fe000U) >> 13)
#define MDM_LR__CORR_THRESH_HIGH__WRITE(src) \
                    (((uint32_t)(src)\
                    << 13) & 0x003fe000U)
#define MDM_LR__CORR_THRESH_HIGH__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x003fe000U) | (((uint32_t)(src) <<\
                    13) & 0x003fe000U)
#define MDM_LR__CORR_THRESH_HIGH__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 13) & ~0x003fe000U)))
#define MDM_LR__CORR_THRESH_HIGH__RESET_VALUE                       0x00000088U
/** @} */

/* macros for field corr_thresh_low */
/**
 * @defgroup mdm_regs_core_corr_thresh_low_field corr_thresh_low_field
 * @brief macros for field corr_thresh_low
 * @details Declare a detection if number of matches <= corr_thresh_low. Would expect to set to num_corr_win*num_corr_avg - corr_thresh_low
 * @{
 */
#define MDM_LR__CORR_THRESH_LOW__SHIFT                                       22
#define MDM_LR__CORR_THRESH_LOW__WIDTH                                        8
#define MDM_LR__CORR_THRESH_LOW__MASK                               0x3fc00000U
#define MDM_LR__CORR_THRESH_LOW__READ(src) \
                    (((uint32_t)(src)\
                    & 0x3fc00000U) >> 22)
#define MDM_LR__CORR_THRESH_LOW__WRITE(src) \
                    (((uint32_t)(src)\
                    << 22) & 0x3fc00000U)
#define MDM_LR__CORR_THRESH_LOW__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x3fc00000U) | (((uint32_t)(src) <<\
                    22) & 0x3fc00000U)
#define MDM_LR__CORR_THRESH_LOW__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 22) & ~0x3fc00000U)))
#define MDM_LR__CORR_THRESH_LOW__RESET_VALUE                        0x00000008U
/** @} */
#define MDM_LR__TYPE                                                   uint32_t
#define MDM_LR__READ                                                0x3fffffffU
#define MDM_LR__WRITE                                               0x3fffffffU
#define MDM_LR__PRESERVED                                           0x00000000U
#define MDM_LR__RESET_VALUE                                         0x0211109cU

#endif /* __MDM_LR_MACRO__ */

/** @} end of lr */

/* macros for BlueprintGlobalNameSpace::MDM_mixer */
/**
 * @defgroup mdm_regs_core_mixer mixer
 * @brief Low IF frequency. definitions.
 * @{
 */
#ifndef __MDM_MIXER_MACRO__
#define __MDM_MIXER_MACRO__

/* macros for field low_if_freq */
/**
 * @defgroup mdm_regs_core_low_if_freq_field low_if_freq_field
 * @brief macros for field low_if_freq
 * @details Units are in 1/1024 MHz. 0.8 / (1/1024) = 819
 * @{
 */
#define MDM_MIXER__LOW_IF_FREQ__SHIFT                                         0
#define MDM_MIXER__LOW_IF_FREQ__WIDTH                                        14
#define MDM_MIXER__LOW_IF_FREQ__MASK                                0x00003fffU
#define MDM_MIXER__LOW_IF_FREQ__READ(src)       ((uint32_t)(src) & 0x00003fffU)
#define MDM_MIXER__LOW_IF_FREQ__WRITE(src)      ((uint32_t)(src) & 0x00003fffU)
#define MDM_MIXER__LOW_IF_FREQ__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00003fffU) | ((uint32_t)(src) &\
                    0x00003fffU)
#define MDM_MIXER__LOW_IF_FREQ__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00003fffU)))
#define MDM_MIXER__LOW_IF_FREQ__RESET_VALUE                         0x00000333U
/** @} */

/* macros for field twomeg_low_if_freq */
/**
 * @defgroup mdm_regs_core_twomeg_low_if_freq_field twomeg_low_if_freq_field
 * @brief macros for field twomeg_low_if_freq
 * @details Units are in 1/1024 MHz. 1.6 / (1/1024) = 1638
 * @{
 */
#define MDM_MIXER__TWOMEG_LOW_IF_FREQ__SHIFT                                 14
#define MDM_MIXER__TWOMEG_LOW_IF_FREQ__WIDTH                                 14
#define MDM_MIXER__TWOMEG_LOW_IF_FREQ__MASK                         0x0fffc000U
#define MDM_MIXER__TWOMEG_LOW_IF_FREQ__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0fffc000U) >> 14)
#define MDM_MIXER__TWOMEG_LOW_IF_FREQ__WRITE(src) \
                    (((uint32_t)(src)\
                    << 14) & 0x0fffc000U)
#define MDM_MIXER__TWOMEG_LOW_IF_FREQ__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0fffc000U) | (((uint32_t)(src) <<\
                    14) & 0x0fffc000U)
#define MDM_MIXER__TWOMEG_LOW_IF_FREQ__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 14) & ~0x0fffc000U)))
#define MDM_MIXER__TWOMEG_LOW_IF_FREQ__RESET_VALUE                  0x00000666U
/** @} */
#define MDM_MIXER__TYPE                                                uint32_t
#define MDM_MIXER__READ                                             0x0fffffffU
#define MDM_MIXER__WRITE                                            0x0fffffffU
#define MDM_MIXER__PRESERVED                                        0x00000000U
#define MDM_MIXER__RESET_VALUE                                      0x01998333U

#endif /* __MDM_MIXER_MACRO__ */

/** @} end of mixer */

/* macros for BlueprintGlobalNameSpace::MDM_access_address */
/**
 * @defgroup mdm_regs_core_access_address access_address
 * @brief Access address control definitions.
 * @{
 */
#ifndef __MDM_ACCESS_ADDRESS_MACRO__
#define __MDM_ACCESS_ADDRESS_MACRO__

/* macros for field match_thr */
/**
 * @defgroup mdm_regs_core_match_thr_field match_thr_field
 * @brief macros for field match_thr
 * @details Number of access address bits that need to match. 32 = all.
 * @{
 */
#define MDM_ACCESS_ADDRESS__MATCH_THR__SHIFT                                  0
#define MDM_ACCESS_ADDRESS__MATCH_THR__WIDTH                                  6
#define MDM_ACCESS_ADDRESS__MATCH_THR__MASK                         0x0000003fU
#define MDM_ACCESS_ADDRESS__MATCH_THR__READ(src) \
                    ((uint32_t)(src)\
                    & 0x0000003fU)
#define MDM_ACCESS_ADDRESS__MATCH_THR__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x0000003fU)
#define MDM_ACCESS_ADDRESS__MATCH_THR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000003fU) | ((uint32_t)(src) &\
                    0x0000003fU)
#define MDM_ACCESS_ADDRESS__MATCH_THR__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x0000003fU)))
#define MDM_ACCESS_ADDRESS__MATCH_THR__RESET_VALUE                  0x00000020U
/** @} */

/* macros for field lsb_auto_match */
/**
 * @defgroup mdm_regs_core_lsb_auto_match_field lsb_auto_match_field
 * @brief macros for field lsb_auto_match
 * @details Hopefully never need to use, but automatically match the specified bits of the access address. lsb of this field is lsb of access address. msb of this field is bit 3 of access address
 * @{
 */
#define MDM_ACCESS_ADDRESS__LSB_AUTO_MATCH__SHIFT                             6
#define MDM_ACCESS_ADDRESS__LSB_AUTO_MATCH__WIDTH                             4
#define MDM_ACCESS_ADDRESS__LSB_AUTO_MATCH__MASK                    0x000003c0U
#define MDM_ACCESS_ADDRESS__LSB_AUTO_MATCH__READ(src) \
                    (((uint32_t)(src)\
                    & 0x000003c0U) >> 6)
#define MDM_ACCESS_ADDRESS__LSB_AUTO_MATCH__WRITE(src) \
                    (((uint32_t)(src)\
                    << 6) & 0x000003c0U)
#define MDM_ACCESS_ADDRESS__LSB_AUTO_MATCH__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000003c0U) | (((uint32_t)(src) <<\
                    6) & 0x000003c0U)
#define MDM_ACCESS_ADDRESS__LSB_AUTO_MATCH__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 6) & ~0x000003c0U)))
#define MDM_ACCESS_ADDRESS__LSB_AUTO_MATCH__RESET_VALUE             0x00000001U
/** @} */

/* macros for field enable_coded_timeout */
/**
 * @defgroup mdm_regs_core_enable_coded_timeout_field enable_coded_timeout_field
 * @brief macros for field enable_coded_timeout
 * @details Timeout after having seen the specified number of symbols after frequency and timing sync, coded rates
 * @{
 */
#define MDM_ACCESS_ADDRESS__ENABLE_CODED_TIMEOUT__SHIFT                      10
#define MDM_ACCESS_ADDRESS__ENABLE_CODED_TIMEOUT__WIDTH                       1
#define MDM_ACCESS_ADDRESS__ENABLE_CODED_TIMEOUT__MASK              0x00000400U
#define MDM_ACCESS_ADDRESS__ENABLE_CODED_TIMEOUT__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000400U) >> 10)
#define MDM_ACCESS_ADDRESS__ENABLE_CODED_TIMEOUT__WRITE(src) \
                    (((uint32_t)(src)\
                    << 10) & 0x00000400U)
#define MDM_ACCESS_ADDRESS__ENABLE_CODED_TIMEOUT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000400U) | (((uint32_t)(src) <<\
                    10) & 0x00000400U)
#define MDM_ACCESS_ADDRESS__ENABLE_CODED_TIMEOUT__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 10) & ~0x00000400U)))
#define MDM_ACCESS_ADDRESS__ENABLE_CODED_TIMEOUT__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000400U) | ((uint32_t)(1) << 10)
#define MDM_ACCESS_ADDRESS__ENABLE_CODED_TIMEOUT__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000400U) | ((uint32_t)(0) << 10)
#define MDM_ACCESS_ADDRESS__ENABLE_CODED_TIMEOUT__RESET_VALUE       0x00000001U
/** @} */

/* macros for field enable_uncoded_timeout */
/**
 * @defgroup mdm_regs_core_enable_uncoded_timeout_field enable_uncoded_timeout_field
 * @brief macros for field enable_uncoded_timeout
 * @details Timeout after having seen the specified number of symbols after frequency and timing sync, uncoded rates
 * @{
 */
#define MDM_ACCESS_ADDRESS__ENABLE_UNCODED_TIMEOUT__SHIFT                    11
#define MDM_ACCESS_ADDRESS__ENABLE_UNCODED_TIMEOUT__WIDTH                     1
#define MDM_ACCESS_ADDRESS__ENABLE_UNCODED_TIMEOUT__MASK            0x00000800U
#define MDM_ACCESS_ADDRESS__ENABLE_UNCODED_TIMEOUT__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000800U) >> 11)
#define MDM_ACCESS_ADDRESS__ENABLE_UNCODED_TIMEOUT__WRITE(src) \
                    (((uint32_t)(src)\
                    << 11) & 0x00000800U)
#define MDM_ACCESS_ADDRESS__ENABLE_UNCODED_TIMEOUT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000800U) | (((uint32_t)(src) <<\
                    11) & 0x00000800U)
#define MDM_ACCESS_ADDRESS__ENABLE_UNCODED_TIMEOUT__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 11) & ~0x00000800U)))
#define MDM_ACCESS_ADDRESS__ENABLE_UNCODED_TIMEOUT__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000800U) | ((uint32_t)(1) << 11)
#define MDM_ACCESS_ADDRESS__ENABLE_UNCODED_TIMEOUT__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000800U) | ((uint32_t)(0) << 11)
#define MDM_ACCESS_ADDRESS__ENABLE_UNCODED_TIMEOUT__RESET_VALUE     0x00000001U
/** @} */

/* macros for field coded_bit_count_timeout */
/**
 * @defgroup mdm_regs_core_coded_bit_count_timeout_field coded_bit_count_timeout_field
 * @brief macros for field coded_bit_count_timeout
 * @details Number of symbols to declare timeout, coded rates
 * @{
 */
#define MDM_ACCESS_ADDRESS__CODED_BIT_COUNT_TIMEOUT__SHIFT                   12
#define MDM_ACCESS_ADDRESS__CODED_BIT_COUNT_TIMEOUT__WIDTH                   12
#define MDM_ACCESS_ADDRESS__CODED_BIT_COUNT_TIMEOUT__MASK           0x00fff000U
#define MDM_ACCESS_ADDRESS__CODED_BIT_COUNT_TIMEOUT__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00fff000U) >> 12)
#define MDM_ACCESS_ADDRESS__CODED_BIT_COUNT_TIMEOUT__WRITE(src) \
                    (((uint32_t)(src)\
                    << 12) & 0x00fff000U)
#define MDM_ACCESS_ADDRESS__CODED_BIT_COUNT_TIMEOUT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00fff000U) | (((uint32_t)(src) <<\
                    12) & 0x00fff000U)
#define MDM_ACCESS_ADDRESS__CODED_BIT_COUNT_TIMEOUT__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 12) & ~0x00fff000U)))
#define MDM_ACCESS_ADDRESS__CODED_BIT_COUNT_TIMEOUT__RESET_VALUE    0x0000017cU
/** @} */

/* macros for field uncoded_bit_count_timeout */
/**
 * @defgroup mdm_regs_core_uncoded_bit_count_timeout_field uncoded_bit_count_timeout_field
 * @brief macros for field uncoded_bit_count_timeout
 * @details Number of symbols to declare timeout, uncoded rates
 * @{
 */
#define MDM_ACCESS_ADDRESS__UNCODED_BIT_COUNT_TIMEOUT__SHIFT                 24
#define MDM_ACCESS_ADDRESS__UNCODED_BIT_COUNT_TIMEOUT__WIDTH                  8
#define MDM_ACCESS_ADDRESS__UNCODED_BIT_COUNT_TIMEOUT__MASK         0xff000000U
#define MDM_ACCESS_ADDRESS__UNCODED_BIT_COUNT_TIMEOUT__READ(src) \
                    (((uint32_t)(src)\
                    & 0xff000000U) >> 24)
#define MDM_ACCESS_ADDRESS__UNCODED_BIT_COUNT_TIMEOUT__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0xff000000U)
#define MDM_ACCESS_ADDRESS__UNCODED_BIT_COUNT_TIMEOUT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xff000000U) | (((uint32_t)(src) <<\
                    24) & 0xff000000U)
#define MDM_ACCESS_ADDRESS__UNCODED_BIT_COUNT_TIMEOUT__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0xff000000U)))
#define MDM_ACCESS_ADDRESS__UNCODED_BIT_COUNT_TIMEOUT__RESET_VALUE  0x00000064U
/** @} */
#define MDM_ACCESS_ADDRESS__TYPE                                       uint32_t
#define MDM_ACCESS_ADDRESS__READ                                    0xffffffffU
#define MDM_ACCESS_ADDRESS__WRITE                                   0xffffffffU
#define MDM_ACCESS_ADDRESS__PRESERVED                               0x00000000U
#define MDM_ACCESS_ADDRESS__RESET_VALUE                             0x6417cc60U

#endif /* __MDM_ACCESS_ADDRESS_MACRO__ */

/** @} end of access_address */

/* macros for BlueprintGlobalNameSpace::MDM_fir */
/**
 * @defgroup mdm_regs_core_fir fir
 * @brief Just the first and last tap of each RXFIR are programmable definitions.
 * @{
 */
#ifndef __MDM_FIR_MACRO__
#define __MDM_FIR_MACRO__

/* macros for field c14_1 */
/**
 * @defgroup mdm_regs_core_c14_1_field c14_1_field
 * @brief macros for field c14_1
 * @details First and last coefficient for RXFIR1
 * @{
 */
#define MDM_FIR__C14_1__SHIFT                                                 0
#define MDM_FIR__C14_1__WIDTH                                                 7
#define MDM_FIR__C14_1__MASK                                        0x0000007fU
#define MDM_FIR__C14_1__READ(src)               ((uint32_t)(src) & 0x0000007fU)
#define MDM_FIR__C14_1__WRITE(src)              ((uint32_t)(src) & 0x0000007fU)
#define MDM_FIR__C14_1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000007fU) | ((uint32_t)(src) &\
                    0x0000007fU)
#define MDM_FIR__C14_1__VERIFY(src)       (!(((uint32_t)(src) & ~0x0000007fU)))
#define MDM_FIR__C14_1__RESET_VALUE                                 0x00000005U
/** @} */

/* macros for field c14_2 */
/**
 * @defgroup mdm_regs_core_c14_2_field c14_2_field
 * @brief macros for field c14_2
 * @details First and last coefficient for RXFIR2
 * @{
 */
#define MDM_FIR__C14_2__SHIFT                                                 7
#define MDM_FIR__C14_2__WIDTH                                                 7
#define MDM_FIR__C14_2__MASK                                        0x00003f80U
#define MDM_FIR__C14_2__READ(src)        (((uint32_t)(src) & 0x00003f80U) >> 7)
#define MDM_FIR__C14_2__WRITE(src)       (((uint32_t)(src) << 7) & 0x00003f80U)
#define MDM_FIR__C14_2__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00003f80U) | (((uint32_t)(src) <<\
                    7) & 0x00003f80U)
#define MDM_FIR__C14_2__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 7) & ~0x00003f80U)))
#define MDM_FIR__C14_2__RESET_VALUE                                 0x00000000U
/** @} */

/* macros for field select */
/**
 * @defgroup mdm_regs_core_select_field select_field
 * @brief macros for field select
 * @details 0: Select RXFIR1; 1: Select RXFIR2
 * @{
 */
#define MDM_FIR__SELECT__SHIFT                                               14
#define MDM_FIR__SELECT__WIDTH                                                1
#define MDM_FIR__SELECT__MASK                                       0x00004000U
#define MDM_FIR__SELECT__READ(src)      (((uint32_t)(src) & 0x00004000U) >> 14)
#define MDM_FIR__SELECT__WRITE(src)     (((uint32_t)(src) << 14) & 0x00004000U)
#define MDM_FIR__SELECT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00004000U) | (((uint32_t)(src) <<\
                    14) & 0x00004000U)
#define MDM_FIR__SELECT__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 14) & ~0x00004000U)))
#define MDM_FIR__SELECT__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00004000U) | ((uint32_t)(1) << 14)
#define MDM_FIR__SELECT__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00004000U) | ((uint32_t)(0) << 14)
#define MDM_FIR__SELECT__RESET_VALUE                                0x00000000U
/** @} */

/* macros for field twomeg_select */
/**
 * @defgroup mdm_regs_core_twomeg_select_field twomeg_select_field
 * @brief macros for field twomeg_select
 * @details 0: Select RXFIR1; 1: Select RXFIR2
 * @{
 */
#define MDM_FIR__TWOMEG_SELECT__SHIFT                                        15
#define MDM_FIR__TWOMEG_SELECT__WIDTH                                         1
#define MDM_FIR__TWOMEG_SELECT__MASK                                0x00008000U
#define MDM_FIR__TWOMEG_SELECT__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00008000U) >> 15)
#define MDM_FIR__TWOMEG_SELECT__WRITE(src) \
                    (((uint32_t)(src)\
                    << 15) & 0x00008000U)
#define MDM_FIR__TWOMEG_SELECT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00008000U) | (((uint32_t)(src) <<\
                    15) & 0x00008000U)
#define MDM_FIR__TWOMEG_SELECT__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 15) & ~0x00008000U)))
#define MDM_FIR__TWOMEG_SELECT__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00008000U) | ((uint32_t)(1) << 15)
#define MDM_FIR__TWOMEG_SELECT__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00008000U) | ((uint32_t)(0) << 15)
#define MDM_FIR__TWOMEG_SELECT__RESET_VALUE                         0x00000000U
/** @} */

/* macros for field coded_select */
/**
 * @defgroup mdm_regs_core_coded_select_field coded_select_field
 * @brief macros for field coded_select
 * @details 0: Select RXFIR1; 1: Select RXFIR2
 * @{
 */
#define MDM_FIR__CODED_SELECT__SHIFT                                         16
#define MDM_FIR__CODED_SELECT__WIDTH                                          1
#define MDM_FIR__CODED_SELECT__MASK                                 0x00010000U
#define MDM_FIR__CODED_SELECT__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00010000U) >> 16)
#define MDM_FIR__CODED_SELECT__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00010000U)
#define MDM_FIR__CODED_SELECT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00010000U) | (((uint32_t)(src) <<\
                    16) & 0x00010000U)
#define MDM_FIR__CODED_SELECT__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00010000U)))
#define MDM_FIR__CODED_SELECT__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00010000U) | ((uint32_t)(1) << 16)
#define MDM_FIR__CODED_SELECT__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00010000U) | ((uint32_t)(0) << 16)
#define MDM_FIR__CODED_SELECT__RESET_VALUE                          0x00000001U
/** @} */
#define MDM_FIR__TYPE                                                  uint32_t
#define MDM_FIR__READ                                               0x0001ffffU
#define MDM_FIR__WRITE                                              0x0001ffffU
#define MDM_FIR__PRESERVED                                          0x00000000U
#define MDM_FIR__RESET_VALUE                                        0x00010005U

#endif /* __MDM_FIR_MACRO__ */

/** @} end of fir */

/* macros for BlueprintGlobalNameSpace::MDM_ffe1 */
/**
 * @defgroup mdm_regs_core_ffe1 ffe1
 * @brief 1 Mb/s FFE taps. c0 is for newest sample. c31 is for oldest sample. All are signed definitions.
 * @{
 */
#ifndef __MDM_FFE1_MACRO__
#define __MDM_FFE1_MACRO__

/* macros for field c0 */
/**
 * @defgroup mdm_regs_core_c0_field c0_field
 * @brief macros for field c0
 * @details Tap 0
 * @{
 */
#define MDM_FFE1__C0__SHIFT                                                   0
#define MDM_FFE1__C0__WIDTH                                                   6
#define MDM_FFE1__C0__MASK                                          0x0000003fU
#define MDM_FFE1__C0__READ(src)                 ((uint32_t)(src) & 0x0000003fU)
#define MDM_FFE1__C0__WRITE(src)                ((uint32_t)(src) & 0x0000003fU)
#define MDM_FFE1__C0__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000003fU) | ((uint32_t)(src) &\
                    0x0000003fU)
#define MDM_FFE1__C0__VERIFY(src)         (!(((uint32_t)(src) & ~0x0000003fU)))
#define MDM_FFE1__C0__RESET_VALUE                                   0x0000000eU
/** @} */

/* macros for field c1 */
/**
 * @defgroup mdm_regs_core_c1_field c1_field
 * @brief macros for field c1
 * @details Tap 1. 6'h26 is -26
 * @{
 */
#define MDM_FFE1__C1__SHIFT                                                   6
#define MDM_FFE1__C1__WIDTH                                                   6
#define MDM_FFE1__C1__MASK                                          0x00000fc0U
#define MDM_FFE1__C1__READ(src)          (((uint32_t)(src) & 0x00000fc0U) >> 6)
#define MDM_FFE1__C1__WRITE(src)         (((uint32_t)(src) << 6) & 0x00000fc0U)
#define MDM_FFE1__C1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000fc0U) | (((uint32_t)(src) <<\
                    6) & 0x00000fc0U)
#define MDM_FFE1__C1__VERIFY(src)  (!((((uint32_t)(src) << 6) & ~0x00000fc0U)))
#define MDM_FFE1__C1__RESET_VALUE                                   0x00000026U
/** @} */

/* macros for field c2 */
/**
 * @defgroup mdm_regs_core_c2_field c2_field
 * @brief macros for field c2
 * @details Tap 2. 6'h3f is -1
 * @{
 */
#define MDM_FFE1__C2__SHIFT                                                  12
#define MDM_FFE1__C2__WIDTH                                                   6
#define MDM_FFE1__C2__MASK                                          0x0003f000U
#define MDM_FFE1__C2__READ(src)         (((uint32_t)(src) & 0x0003f000U) >> 12)
#define MDM_FFE1__C2__WRITE(src)        (((uint32_t)(src) << 12) & 0x0003f000U)
#define MDM_FFE1__C2__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0003f000U) | (((uint32_t)(src) <<\
                    12) & 0x0003f000U)
#define MDM_FFE1__C2__VERIFY(src) (!((((uint32_t)(src) << 12) & ~0x0003f000U)))
#define MDM_FFE1__C2__RESET_VALUE                                   0x0000003fU
/** @} */

/* macros for field c3 */
/**
 * @defgroup mdm_regs_core_c3_field c3_field
 * @brief macros for field c3
 * @details Tap 3. 6'h3f is -1
 * @{
 */
#define MDM_FFE1__C3__SHIFT                                                  18
#define MDM_FFE1__C3__WIDTH                                                   6
#define MDM_FFE1__C3__MASK                                          0x00fc0000U
#define MDM_FFE1__C3__READ(src)         (((uint32_t)(src) & 0x00fc0000U) >> 18)
#define MDM_FFE1__C3__WRITE(src)        (((uint32_t)(src) << 18) & 0x00fc0000U)
#define MDM_FFE1__C3__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00fc0000U) | (((uint32_t)(src) <<\
                    18) & 0x00fc0000U)
#define MDM_FFE1__C3__VERIFY(src) (!((((uint32_t)(src) << 18) & ~0x00fc0000U)))
#define MDM_FFE1__C3__RESET_VALUE                                   0x0000003fU
/** @} */

/* macros for field c4 */
/**
 * @defgroup mdm_regs_core_c4_field c4_field
 * @brief macros for field c4
 * @details Tap 4
 * @{
 */
#define MDM_FFE1__C4__SHIFT                                                  24
#define MDM_FFE1__C4__WIDTH                                                   6
#define MDM_FFE1__C4__MASK                                          0x3f000000U
#define MDM_FFE1__C4__READ(src)         (((uint32_t)(src) & 0x3f000000U) >> 24)
#define MDM_FFE1__C4__WRITE(src)        (((uint32_t)(src) << 24) & 0x3f000000U)
#define MDM_FFE1__C4__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x3f000000U) | (((uint32_t)(src) <<\
                    24) & 0x3f000000U)
#define MDM_FFE1__C4__VERIFY(src) (!((((uint32_t)(src) << 24) & ~0x3f000000U)))
#define MDM_FFE1__C4__RESET_VALUE                                   0x00000002U
/** @} */
#define MDM_FFE1__TYPE                                                 uint32_t
#define MDM_FFE1__READ                                              0x3fffffffU
#define MDM_FFE1__WRITE                                             0x3fffffffU
#define MDM_FFE1__PRESERVED                                         0x00000000U
#define MDM_FFE1__RESET_VALUE                                       0x02fff98eU

#endif /* __MDM_FFE1_MACRO__ */

/** @} end of ffe1 */

/* macros for BlueprintGlobalNameSpace::MDM_ffe2 */
/**
 * @defgroup mdm_regs_core_ffe2 ffe2
 * @brief 1 Mb/s FFE taps definitions.
 * @{
 */
#ifndef __MDM_FFE2_MACRO__
#define __MDM_FFE2_MACRO__

/* macros for field c5 */
/**
 * @defgroup mdm_regs_core_c5_field c5_field
 * @brief macros for field c5
 * @details Tap 5. 6'h3e is -2
 * @{
 */
#define MDM_FFE2__C5__SHIFT                                                   0
#define MDM_FFE2__C5__WIDTH                                                   6
#define MDM_FFE2__C5__MASK                                          0x0000003fU
#define MDM_FFE2__C5__READ(src)                 ((uint32_t)(src) & 0x0000003fU)
#define MDM_FFE2__C5__WRITE(src)                ((uint32_t)(src) & 0x0000003fU)
#define MDM_FFE2__C5__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000003fU) | ((uint32_t)(src) &\
                    0x0000003fU)
#define MDM_FFE2__C5__VERIFY(src)         (!(((uint32_t)(src) & ~0x0000003fU)))
#define MDM_FFE2__C5__RESET_VALUE                                   0x0000003eU
/** @} */

/* macros for field c6 */
/**
 * @defgroup mdm_regs_core_c6_field c6_field
 * @brief macros for field c6
 * @details Tap 6.
 * @{
 */
#define MDM_FFE2__C6__SHIFT                                                   6
#define MDM_FFE2__C6__WIDTH                                                   6
#define MDM_FFE2__C6__MASK                                          0x00000fc0U
#define MDM_FFE2__C6__READ(src)          (((uint32_t)(src) & 0x00000fc0U) >> 6)
#define MDM_FFE2__C6__WRITE(src)         (((uint32_t)(src) << 6) & 0x00000fc0U)
#define MDM_FFE2__C6__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000fc0U) | (((uint32_t)(src) <<\
                    6) & 0x00000fc0U)
#define MDM_FFE2__C6__VERIFY(src)  (!((((uint32_t)(src) << 6) & ~0x00000fc0U)))
#define MDM_FFE2__C6__RESET_VALUE                                   0x00000000U
/** @} */

/* macros for field c7 */
/**
 * @defgroup mdm_regs_core_c7_field c7_field
 * @brief macros for field c7
 * @details Tap 7. 6'h3f is -1
 * @{
 */
#define MDM_FFE2__C7__SHIFT                                                  12
#define MDM_FFE2__C7__WIDTH                                                   6
#define MDM_FFE2__C7__MASK                                          0x0003f000U
#define MDM_FFE2__C7__READ(src)         (((uint32_t)(src) & 0x0003f000U) >> 12)
#define MDM_FFE2__C7__WRITE(src)        (((uint32_t)(src) << 12) & 0x0003f000U)
#define MDM_FFE2__C7__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0003f000U) | (((uint32_t)(src) <<\
                    12) & 0x0003f000U)
#define MDM_FFE2__C7__VERIFY(src) (!((((uint32_t)(src) << 12) & ~0x0003f000U)))
#define MDM_FFE2__C7__RESET_VALUE                                   0x0000003fU
/** @} */

/* macros for field c8 */
/**
 * @defgroup mdm_regs_core_c8_field c8_field
 * @brief macros for field c8
 * @details Tap 8
 * @{
 */
#define MDM_FFE2__C8__SHIFT                                                  18
#define MDM_FFE2__C8__WIDTH                                                   6
#define MDM_FFE2__C8__MASK                                          0x00fc0000U
#define MDM_FFE2__C8__READ(src)         (((uint32_t)(src) & 0x00fc0000U) >> 18)
#define MDM_FFE2__C8__WRITE(src)        (((uint32_t)(src) << 18) & 0x00fc0000U)
#define MDM_FFE2__C8__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00fc0000U) | (((uint32_t)(src) <<\
                    18) & 0x00fc0000U)
#define MDM_FFE2__C8__VERIFY(src) (!((((uint32_t)(src) << 18) & ~0x00fc0000U)))
#define MDM_FFE2__C8__RESET_VALUE                                   0x0000000cU
/** @} */

/* macros for field c9 */
/**
 * @defgroup mdm_regs_core_c9_field c9_field
 * @brief macros for field c9
 * @details Tap 9
 * @{
 */
#define MDM_FFE2__C9__SHIFT                                                  24
#define MDM_FFE2__C9__WIDTH                                                   6
#define MDM_FFE2__C9__MASK                                          0x3f000000U
#define MDM_FFE2__C9__READ(src)         (((uint32_t)(src) & 0x3f000000U) >> 24)
#define MDM_FFE2__C9__WRITE(src)        (((uint32_t)(src) << 24) & 0x3f000000U)
#define MDM_FFE2__C9__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x3f000000U) | (((uint32_t)(src) <<\
                    24) & 0x3f000000U)
#define MDM_FFE2__C9__VERIFY(src) (!((((uint32_t)(src) << 24) & ~0x3f000000U)))
#define MDM_FFE2__C9__RESET_VALUE                                   0x0000000cU
/** @} */
#define MDM_FFE2__TYPE                                                 uint32_t
#define MDM_FFE2__READ                                              0x3fffffffU
#define MDM_FFE2__WRITE                                             0x3fffffffU
#define MDM_FFE2__PRESERVED                                         0x00000000U
#define MDM_FFE2__RESET_VALUE                                       0x0c33f03eU

#endif /* __MDM_FFE2_MACRO__ */

/** @} end of ffe2 */

/* macros for BlueprintGlobalNameSpace::MDM_ffe3 */
/**
 * @defgroup mdm_regs_core_ffe3 ffe3
 * @brief 1 Mb/s FFE taps definitions.
 * @{
 */
#ifndef __MDM_FFE3_MACRO__
#define __MDM_FFE3_MACRO__

/* macros for field c10 */
/**
 * @defgroup mdm_regs_core_c10_field c10_field
 * @brief macros for field c10
 * @details Tap 10
 * @{
 */
#define MDM_FFE3__C10__SHIFT                                                  0
#define MDM_FFE3__C10__WIDTH                                                  6
#define MDM_FFE3__C10__MASK                                         0x0000003fU
#define MDM_FFE3__C10__READ(src)                ((uint32_t)(src) & 0x0000003fU)
#define MDM_FFE3__C10__WRITE(src)               ((uint32_t)(src) & 0x0000003fU)
#define MDM_FFE3__C10__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000003fU) | ((uint32_t)(src) &\
                    0x0000003fU)
#define MDM_FFE3__C10__VERIFY(src)        (!(((uint32_t)(src) & ~0x0000003fU)))
#define MDM_FFE3__C10__RESET_VALUE                                  0x00000017U
/** @} */

/* macros for field c11 */
/**
 * @defgroup mdm_regs_core_c11_field c11_field
 * @brief macros for field c11
 * @details Tap 11
 * @{
 */
#define MDM_FFE3__C11__SHIFT                                                  6
#define MDM_FFE3__C11__WIDTH                                                  6
#define MDM_FFE3__C11__MASK                                         0x00000fc0U
#define MDM_FFE3__C11__READ(src)         (((uint32_t)(src) & 0x00000fc0U) >> 6)
#define MDM_FFE3__C11__WRITE(src)        (((uint32_t)(src) << 6) & 0x00000fc0U)
#define MDM_FFE3__C11__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000fc0U) | (((uint32_t)(src) <<\
                    6) & 0x00000fc0U)
#define MDM_FFE3__C11__VERIFY(src) (!((((uint32_t)(src) << 6) & ~0x00000fc0U)))
#define MDM_FFE3__C11__RESET_VALUE                                  0x00000012U
/** @} */

/* macros for field c12 */
/**
 * @defgroup mdm_regs_core_c12_field c12_field
 * @brief macros for field c12
 * @details Tap 12
 * @{
 */
#define MDM_FFE3__C12__SHIFT                                                 12
#define MDM_FFE3__C12__WIDTH                                                  6
#define MDM_FFE3__C12__MASK                                         0x0003f000U
#define MDM_FFE3__C12__READ(src)        (((uint32_t)(src) & 0x0003f000U) >> 12)
#define MDM_FFE3__C12__WRITE(src)       (((uint32_t)(src) << 12) & 0x0003f000U)
#define MDM_FFE3__C12__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0003f000U) | (((uint32_t)(src) <<\
                    12) & 0x0003f000U)
#define MDM_FFE3__C12__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 12) & ~0x0003f000U)))
#define MDM_FFE3__C12__RESET_VALUE                                  0x00000011U
/** @} */

/* macros for field c13 */
/**
 * @defgroup mdm_regs_core_c13_field c13_field
 * @brief macros for field c13
 * @details Tap 13
 * @{
 */
#define MDM_FFE3__C13__SHIFT                                                 18
#define MDM_FFE3__C13__WIDTH                                                  6
#define MDM_FFE3__C13__MASK                                         0x00fc0000U
#define MDM_FFE3__C13__READ(src)        (((uint32_t)(src) & 0x00fc0000U) >> 18)
#define MDM_FFE3__C13__WRITE(src)       (((uint32_t)(src) << 18) & 0x00fc0000U)
#define MDM_FFE3__C13__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00fc0000U) | (((uint32_t)(src) <<\
                    18) & 0x00fc0000U)
#define MDM_FFE3__C13__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 18) & ~0x00fc0000U)))
#define MDM_FFE3__C13__RESET_VALUE                                  0x00000010U
/** @} */

/* macros for field c14 */
/**
 * @defgroup mdm_regs_core_c14_field c14_field
 * @brief macros for field c14
 * @details Tap 14
 * @{
 */
#define MDM_FFE3__C14__SHIFT                                                 24
#define MDM_FFE3__C14__WIDTH                                                  6
#define MDM_FFE3__C14__MASK                                         0x3f000000U
#define MDM_FFE3__C14__READ(src)        (((uint32_t)(src) & 0x3f000000U) >> 24)
#define MDM_FFE3__C14__WRITE(src)       (((uint32_t)(src) << 24) & 0x3f000000U)
#define MDM_FFE3__C14__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x3f000000U) | (((uint32_t)(src) <<\
                    24) & 0x3f000000U)
#define MDM_FFE3__C14__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x3f000000U)))
#define MDM_FFE3__C14__RESET_VALUE                                  0x00000015U
/** @} */
#define MDM_FFE3__TYPE                                                 uint32_t
#define MDM_FFE3__READ                                              0x3fffffffU
#define MDM_FFE3__WRITE                                             0x3fffffffU
#define MDM_FFE3__PRESERVED                                         0x00000000U
#define MDM_FFE3__RESET_VALUE                                       0x15411497U

#endif /* __MDM_FFE3_MACRO__ */

/** @} end of ffe3 */

/* macros for BlueprintGlobalNameSpace::MDM_ffe4 */
/**
 * @defgroup mdm_regs_core_ffe4 ffe4
 * @brief 1 Mb/s FFE taps definitions.
 * @{
 */
#ifndef __MDM_FFE4_MACRO__
#define __MDM_FFE4_MACRO__

/* macros for field c15 */
/**
 * @defgroup mdm_regs_core_c15_field c15_field
 * @brief macros for field c15
 * @details Tap 15
 * @{
 */
#define MDM_FFE4__C15__SHIFT                                                  0
#define MDM_FFE4__C15__WIDTH                                                  6
#define MDM_FFE4__C15__MASK                                         0x0000003fU
#define MDM_FFE4__C15__READ(src)                ((uint32_t)(src) & 0x0000003fU)
#define MDM_FFE4__C15__WRITE(src)               ((uint32_t)(src) & 0x0000003fU)
#define MDM_FFE4__C15__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000003fU) | ((uint32_t)(src) &\
                    0x0000003fU)
#define MDM_FFE4__C15__VERIFY(src)        (!(((uint32_t)(src) & ~0x0000003fU)))
#define MDM_FFE4__C15__RESET_VALUE                                  0x00000018U
/** @} */

/* macros for field c16 */
/**
 * @defgroup mdm_regs_core_c16_field c16_field
 * @brief macros for field c16
 * @details Tap 16
 * @{
 */
#define MDM_FFE4__C16__SHIFT                                                  6
#define MDM_FFE4__C16__WIDTH                                                  6
#define MDM_FFE4__C16__MASK                                         0x00000fc0U
#define MDM_FFE4__C16__READ(src)         (((uint32_t)(src) & 0x00000fc0U) >> 6)
#define MDM_FFE4__C16__WRITE(src)        (((uint32_t)(src) << 6) & 0x00000fc0U)
#define MDM_FFE4__C16__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000fc0U) | (((uint32_t)(src) <<\
                    6) & 0x00000fc0U)
#define MDM_FFE4__C16__VERIFY(src) (!((((uint32_t)(src) << 6) & ~0x00000fc0U)))
#define MDM_FFE4__C16__RESET_VALUE                                  0x00000018U
/** @} */

/* macros for field c17 */
/**
 * @defgroup mdm_regs_core_c17_field c17_field
 * @brief macros for field c17
 * @details Tap 17
 * @{
 */
#define MDM_FFE4__C17__SHIFT                                                 12
#define MDM_FFE4__C17__WIDTH                                                  6
#define MDM_FFE4__C17__MASK                                         0x0003f000U
#define MDM_FFE4__C17__READ(src)        (((uint32_t)(src) & 0x0003f000U) >> 12)
#define MDM_FFE4__C17__WRITE(src)       (((uint32_t)(src) << 12) & 0x0003f000U)
#define MDM_FFE4__C17__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0003f000U) | (((uint32_t)(src) <<\
                    12) & 0x0003f000U)
#define MDM_FFE4__C17__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 12) & ~0x0003f000U)))
#define MDM_FFE4__C17__RESET_VALUE                                  0x00000016U
/** @} */

/* macros for field c18 */
/**
 * @defgroup mdm_regs_core_c18_field c18_field
 * @brief macros for field c18
 * @details Tap 18
 * @{
 */
#define MDM_FFE4__C18__SHIFT                                                 18
#define MDM_FFE4__C18__WIDTH                                                  6
#define MDM_FFE4__C18__MASK                                         0x00fc0000U
#define MDM_FFE4__C18__READ(src)        (((uint32_t)(src) & 0x00fc0000U) >> 18)
#define MDM_FFE4__C18__WRITE(src)       (((uint32_t)(src) << 18) & 0x00fc0000U)
#define MDM_FFE4__C18__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00fc0000U) | (((uint32_t)(src) <<\
                    18) & 0x00fc0000U)
#define MDM_FFE4__C18__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 18) & ~0x00fc0000U)))
#define MDM_FFE4__C18__RESET_VALUE                                  0x0000000fU
/** @} */

/* macros for field c19 */
/**
 * @defgroup mdm_regs_core_c19_field c19_field
 * @brief macros for field c19
 * @details Tap 19
 * @{
 */
#define MDM_FFE4__C19__SHIFT                                                 24
#define MDM_FFE4__C19__WIDTH                                                  6
#define MDM_FFE4__C19__MASK                                         0x3f000000U
#define MDM_FFE4__C19__READ(src)        (((uint32_t)(src) & 0x3f000000U) >> 24)
#define MDM_FFE4__C19__WRITE(src)       (((uint32_t)(src) << 24) & 0x3f000000U)
#define MDM_FFE4__C19__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x3f000000U) | (((uint32_t)(src) <<\
                    24) & 0x3f000000U)
#define MDM_FFE4__C19__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x3f000000U)))
#define MDM_FFE4__C19__RESET_VALUE                                  0x0000000dU
/** @} */
#define MDM_FFE4__TYPE                                                 uint32_t
#define MDM_FFE4__READ                                              0x3fffffffU
#define MDM_FFE4__WRITE                                             0x3fffffffU
#define MDM_FFE4__PRESERVED                                         0x00000000U
#define MDM_FFE4__RESET_VALUE                                       0x0d3d6618U

#endif /* __MDM_FFE4_MACRO__ */

/** @} end of ffe4 */

/* macros for BlueprintGlobalNameSpace::MDM_ffe5 */
/**
 * @defgroup mdm_regs_core_ffe5 ffe5
 * @brief 1 Mb/s FFE taps definitions.
 * @{
 */
#ifndef __MDM_FFE5_MACRO__
#define __MDM_FFE5_MACRO__

/* macros for field c20 */
/**
 * @defgroup mdm_regs_core_c20_field c20_field
 * @brief macros for field c20
 * @details Tap 20
 * @{
 */
#define MDM_FFE5__C20__SHIFT                                                  0
#define MDM_FFE5__C20__WIDTH                                                  6
#define MDM_FFE5__C20__MASK                                         0x0000003fU
#define MDM_FFE5__C20__READ(src)                ((uint32_t)(src) & 0x0000003fU)
#define MDM_FFE5__C20__WRITE(src)               ((uint32_t)(src) & 0x0000003fU)
#define MDM_FFE5__C20__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000003fU) | ((uint32_t)(src) &\
                    0x0000003fU)
#define MDM_FFE5__C20__VERIFY(src)        (!(((uint32_t)(src) & ~0x0000003fU)))
#define MDM_FFE5__C20__RESET_VALUE                                  0x0000000dU
/** @} */

/* macros for field c21 */
/**
 * @defgroup mdm_regs_core_c21_field c21_field
 * @brief macros for field c21
 * @details Tap 21
 * @{
 */
#define MDM_FFE5__C21__SHIFT                                                  6
#define MDM_FFE5__C21__WIDTH                                                  6
#define MDM_FFE5__C21__MASK                                         0x00000fc0U
#define MDM_FFE5__C21__READ(src)         (((uint32_t)(src) & 0x00000fc0U) >> 6)
#define MDM_FFE5__C21__WRITE(src)        (((uint32_t)(src) << 6) & 0x00000fc0U)
#define MDM_FFE5__C21__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000fc0U) | (((uint32_t)(src) <<\
                    6) & 0x00000fc0U)
#define MDM_FFE5__C21__VERIFY(src) (!((((uint32_t)(src) << 6) & ~0x00000fc0U)))
#define MDM_FFE5__C21__RESET_VALUE                                  0x00000010U
/** @} */

/* macros for field c22 */
/**
 * @defgroup mdm_regs_core_c22_field c22_field
 * @brief macros for field c22
 * @details Tap 22
 * @{
 */
#define MDM_FFE5__C22__SHIFT                                                 12
#define MDM_FFE5__C22__WIDTH                                                  6
#define MDM_FFE5__C22__MASK                                         0x0003f000U
#define MDM_FFE5__C22__READ(src)        (((uint32_t)(src) & 0x0003f000U) >> 12)
#define MDM_FFE5__C22__WRITE(src)       (((uint32_t)(src) << 12) & 0x0003f000U)
#define MDM_FFE5__C22__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0003f000U) | (((uint32_t)(src) <<\
                    12) & 0x0003f000U)
#define MDM_FFE5__C22__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 12) & ~0x0003f000U)))
#define MDM_FFE5__C22__RESET_VALUE                                  0x00000012U
/** @} */

/* macros for field c23 */
/**
 * @defgroup mdm_regs_core_c23_field c23_field
 * @brief macros for field c23
 * @details Tap 23
 * @{
 */
#define MDM_FFE5__C23__SHIFT                                                 18
#define MDM_FFE5__C23__WIDTH                                                  6
#define MDM_FFE5__C23__MASK                                         0x00fc0000U
#define MDM_FFE5__C23__READ(src)        (((uint32_t)(src) & 0x00fc0000U) >> 18)
#define MDM_FFE5__C23__WRITE(src)       (((uint32_t)(src) << 18) & 0x00fc0000U)
#define MDM_FFE5__C23__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00fc0000U) | (((uint32_t)(src) <<\
                    18) & 0x00fc0000U)
#define MDM_FFE5__C23__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 18) & ~0x00fc0000U)))
#define MDM_FFE5__C23__RESET_VALUE                                  0x00000010U
/** @} */

/* macros for field c24 */
/**
 * @defgroup mdm_regs_core_c24_field c24_field
 * @brief macros for field c24
 * @details Tap 24
 * @{
 */
#define MDM_FFE5__C24__SHIFT                                                 24
#define MDM_FFE5__C24__WIDTH                                                  6
#define MDM_FFE5__C24__MASK                                         0x3f000000U
#define MDM_FFE5__C24__READ(src)        (((uint32_t)(src) & 0x3f000000U) >> 24)
#define MDM_FFE5__C24__WRITE(src)       (((uint32_t)(src) << 24) & 0x3f000000U)
#define MDM_FFE5__C24__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x3f000000U) | (((uint32_t)(src) <<\
                    24) & 0x3f000000U)
#define MDM_FFE5__C24__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x3f000000U)))
#define MDM_FFE5__C24__RESET_VALUE                                  0x0000000aU
/** @} */
#define MDM_FFE5__TYPE                                                 uint32_t
#define MDM_FFE5__READ                                              0x3fffffffU
#define MDM_FFE5__WRITE                                             0x3fffffffU
#define MDM_FFE5__PRESERVED                                         0x00000000U
#define MDM_FFE5__RESET_VALUE                                       0x0a41240dU

#endif /* __MDM_FFE5_MACRO__ */

/** @} end of ffe5 */

/* macros for BlueprintGlobalNameSpace::MDM_ffe6 */
/**
 * @defgroup mdm_regs_core_ffe6 ffe6
 * @brief 1 Mb/s FFE taps definitions.
 * @{
 */
#ifndef __MDM_FFE6_MACRO__
#define __MDM_FFE6_MACRO__

/* macros for field c25 */
/**
 * @defgroup mdm_regs_core_c25_field c25_field
 * @brief macros for field c25
 * @details Tap 25
 * @{
 */
#define MDM_FFE6__C25__SHIFT                                                  0
#define MDM_FFE6__C25__WIDTH                                                  6
#define MDM_FFE6__C25__MASK                                         0x0000003fU
#define MDM_FFE6__C25__READ(src)                ((uint32_t)(src) & 0x0000003fU)
#define MDM_FFE6__C25__WRITE(src)               ((uint32_t)(src) & 0x0000003fU)
#define MDM_FFE6__C25__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000003fU) | ((uint32_t)(src) &\
                    0x0000003fU)
#define MDM_FFE6__C25__VERIFY(src)        (!(((uint32_t)(src) & ~0x0000003fU)))
#define MDM_FFE6__C25__RESET_VALUE                                  0x00000008U
/** @} */

/* macros for field c26 */
/**
 * @defgroup mdm_regs_core_c26_field c26_field
 * @brief macros for field c26
 * @details Tap 26
 * @{
 */
#define MDM_FFE6__C26__SHIFT                                                  6
#define MDM_FFE6__C26__WIDTH                                                  6
#define MDM_FFE6__C26__MASK                                         0x00000fc0U
#define MDM_FFE6__C26__READ(src)         (((uint32_t)(src) & 0x00000fc0U) >> 6)
#define MDM_FFE6__C26__WRITE(src)        (((uint32_t)(src) << 6) & 0x00000fc0U)
#define MDM_FFE6__C26__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000fc0U) | (((uint32_t)(src) <<\
                    6) & 0x00000fc0U)
#define MDM_FFE6__C26__VERIFY(src) (!((((uint32_t)(src) << 6) & ~0x00000fc0U)))
#define MDM_FFE6__C26__RESET_VALUE                                  0x00000006U
/** @} */

/* macros for field c27 */
/**
 * @defgroup mdm_regs_core_c27_field c27_field
 * @brief macros for field c27
 * @details Tap 27
 * @{
 */
#define MDM_FFE6__C27__SHIFT                                                 12
#define MDM_FFE6__C27__WIDTH                                                  6
#define MDM_FFE6__C27__MASK                                         0x0003f000U
#define MDM_FFE6__C27__READ(src)        (((uint32_t)(src) & 0x0003f000U) >> 12)
#define MDM_FFE6__C27__WRITE(src)       (((uint32_t)(src) << 12) & 0x0003f000U)
#define MDM_FFE6__C27__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0003f000U) | (((uint32_t)(src) <<\
                    12) & 0x0003f000U)
#define MDM_FFE6__C27__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 12) & ~0x0003f000U)))
#define MDM_FFE6__C27__RESET_VALUE                                  0x00000009U
/** @} */

/* macros for field c28 */
/**
 * @defgroup mdm_regs_core_c28_field c28_field
 * @brief macros for field c28
 * @details Tap 28
 * @{
 */
#define MDM_FFE6__C28__SHIFT                                                 18
#define MDM_FFE6__C28__WIDTH                                                  6
#define MDM_FFE6__C28__MASK                                         0x00fc0000U
#define MDM_FFE6__C28__READ(src)        (((uint32_t)(src) & 0x00fc0000U) >> 18)
#define MDM_FFE6__C28__WRITE(src)       (((uint32_t)(src) << 18) & 0x00fc0000U)
#define MDM_FFE6__C28__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00fc0000U) | (((uint32_t)(src) <<\
                    18) & 0x00fc0000U)
#define MDM_FFE6__C28__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 18) & ~0x00fc0000U)))
#define MDM_FFE6__C28__RESET_VALUE                                  0x0000000bU
/** @} */

/* macros for field c29 */
/**
 * @defgroup mdm_regs_core_c29_field c29_field
 * @brief macros for field c29
 * @details Tap 29
 * @{
 */
#define MDM_FFE6__C29__SHIFT                                                 24
#define MDM_FFE6__C29__WIDTH                                                  6
#define MDM_FFE6__C29__MASK                                         0x3f000000U
#define MDM_FFE6__C29__READ(src)        (((uint32_t)(src) & 0x3f000000U) >> 24)
#define MDM_FFE6__C29__WRITE(src)       (((uint32_t)(src) << 24) & 0x3f000000U)
#define MDM_FFE6__C29__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x3f000000U) | (((uint32_t)(src) <<\
                    24) & 0x3f000000U)
#define MDM_FFE6__C29__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x3f000000U)))
#define MDM_FFE6__C29__RESET_VALUE                                  0x00000008U
/** @} */
#define MDM_FFE6__TYPE                                                 uint32_t
#define MDM_FFE6__READ                                              0x3fffffffU
#define MDM_FFE6__WRITE                                             0x3fffffffU
#define MDM_FFE6__PRESERVED                                         0x00000000U
#define MDM_FFE6__RESET_VALUE                                       0x082c9188U

#endif /* __MDM_FFE6_MACRO__ */

/** @} end of ffe6 */

/* macros for BlueprintGlobalNameSpace::MDM_ffe7 */
/**
 * @defgroup mdm_regs_core_ffe7 ffe7
 * @brief 1 Mb/s FFE taps definitions.
 * @{
 */
#ifndef __MDM_FFE7_MACRO__
#define __MDM_FFE7_MACRO__

/* macros for field c30 */
/**
 * @defgroup mdm_regs_core_c30_field c30_field
 * @brief macros for field c30
 * @details Tap 30. 6'h38 is -8
 * @{
 */
#define MDM_FFE7__C30__SHIFT                                                  0
#define MDM_FFE7__C30__WIDTH                                                  6
#define MDM_FFE7__C30__MASK                                         0x0000003fU
#define MDM_FFE7__C30__READ(src)                ((uint32_t)(src) & 0x0000003fU)
#define MDM_FFE7__C30__WRITE(src)               ((uint32_t)(src) & 0x0000003fU)
#define MDM_FFE7__C30__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000003fU) | ((uint32_t)(src) &\
                    0x0000003fU)
#define MDM_FFE7__C30__VERIFY(src)        (!(((uint32_t)(src) & ~0x0000003fU)))
#define MDM_FFE7__C30__RESET_VALUE                                  0x00000038U
/** @} */

/* macros for field c31 */
/**
 * @defgroup mdm_regs_core_c31_field c31_field
 * @brief macros for field c31
 * @details Tap 31
 * @{
 */
#define MDM_FFE7__C31__SHIFT                                                  6
#define MDM_FFE7__C31__WIDTH                                                  6
#define MDM_FFE7__C31__MASK                                         0x00000fc0U
#define MDM_FFE7__C31__READ(src)         (((uint32_t)(src) & 0x00000fc0U) >> 6)
#define MDM_FFE7__C31__WRITE(src)        (((uint32_t)(src) << 6) & 0x00000fc0U)
#define MDM_FFE7__C31__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000fc0U) | (((uint32_t)(src) <<\
                    6) & 0x00000fc0U)
#define MDM_FFE7__C31__VERIFY(src) (!((((uint32_t)(src) << 6) & ~0x00000fc0U)))
#define MDM_FFE7__C31__RESET_VALUE                                  0x00000015U
/** @} */
#define MDM_FFE7__TYPE                                                 uint32_t
#define MDM_FFE7__READ                                              0x00000fffU
#define MDM_FFE7__WRITE                                             0x00000fffU
#define MDM_FFE7__PRESERVED                                         0x00000000U
#define MDM_FFE7__RESET_VALUE                                       0x00000578U

#endif /* __MDM_FFE7_MACRO__ */

/** @} end of ffe7 */

/* macros for BlueprintGlobalNameSpace::MDM_twomeg_ffe1 */
/**
 * @defgroup mdm_regs_core_twomeg_ffe1 twomeg_ffe1
 * @brief 2 Mb/s FFE taps. c0 is for newest sample. c31 is for oldest sample. All are signed definitions.
 * @{
 */
#ifndef __MDM_TWOMEG_FFE1_MACRO__
#define __MDM_TWOMEG_FFE1_MACRO__

/* macros for field c0 */
/**
 * @defgroup mdm_regs_core_c0_field c0_field
 * @brief macros for field c0
 * @details Tap 0
 * @{
 */
#define MDM_TWOMEG_FFE1__C0__SHIFT                                            0
#define MDM_TWOMEG_FFE1__C0__WIDTH                                            6
#define MDM_TWOMEG_FFE1__C0__MASK                                   0x0000003fU
#define MDM_TWOMEG_FFE1__C0__READ(src)          ((uint32_t)(src) & 0x0000003fU)
#define MDM_TWOMEG_FFE1__C0__WRITE(src)         ((uint32_t)(src) & 0x0000003fU)
#define MDM_TWOMEG_FFE1__C0__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000003fU) | ((uint32_t)(src) &\
                    0x0000003fU)
#define MDM_TWOMEG_FFE1__C0__VERIFY(src)  (!(((uint32_t)(src) & ~0x0000003fU)))
#define MDM_TWOMEG_FFE1__C0__RESET_VALUE                            0x00000001U
/** @} */

/* macros for field c1 */
/**
 * @defgroup mdm_regs_core_c1_field c1_field
 * @brief macros for field c1
 * @details Tap 1. 6'h3c is -4
 * @{
 */
#define MDM_TWOMEG_FFE1__C1__SHIFT                                            6
#define MDM_TWOMEG_FFE1__C1__WIDTH                                            6
#define MDM_TWOMEG_FFE1__C1__MASK                                   0x00000fc0U
#define MDM_TWOMEG_FFE1__C1__READ(src)   (((uint32_t)(src) & 0x00000fc0U) >> 6)
#define MDM_TWOMEG_FFE1__C1__WRITE(src)  (((uint32_t)(src) << 6) & 0x00000fc0U)
#define MDM_TWOMEG_FFE1__C1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000fc0U) | (((uint32_t)(src) <<\
                    6) & 0x00000fc0U)
#define MDM_TWOMEG_FFE1__C1__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 6) & ~0x00000fc0U)))
#define MDM_TWOMEG_FFE1__C1__RESET_VALUE                            0x0000003cU
/** @} */

/* macros for field c2 */
/**
 * @defgroup mdm_regs_core_c2_field c2_field
 * @brief macros for field c2
 * @details Tap 2. 6'h3b is -5
 * @{
 */
#define MDM_TWOMEG_FFE1__C2__SHIFT                                           12
#define MDM_TWOMEG_FFE1__C2__WIDTH                                            6
#define MDM_TWOMEG_FFE1__C2__MASK                                   0x0003f000U
#define MDM_TWOMEG_FFE1__C2__READ(src)  (((uint32_t)(src) & 0x0003f000U) >> 12)
#define MDM_TWOMEG_FFE1__C2__WRITE(src) (((uint32_t)(src) << 12) & 0x0003f000U)
#define MDM_TWOMEG_FFE1__C2__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0003f000U) | (((uint32_t)(src) <<\
                    12) & 0x0003f000U)
#define MDM_TWOMEG_FFE1__C2__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 12) & ~0x0003f000U)))
#define MDM_TWOMEG_FFE1__C2__RESET_VALUE                            0x0000003bU
/** @} */

/* macros for field c3 */
/**
 * @defgroup mdm_regs_core_c3_field c3_field
 * @brief macros for field c3
 * @details Tap 3. 6'h3d is -3
 * @{
 */
#define MDM_TWOMEG_FFE1__C3__SHIFT                                           18
#define MDM_TWOMEG_FFE1__C3__WIDTH                                            6
#define MDM_TWOMEG_FFE1__C3__MASK                                   0x00fc0000U
#define MDM_TWOMEG_FFE1__C3__READ(src)  (((uint32_t)(src) & 0x00fc0000U) >> 18)
#define MDM_TWOMEG_FFE1__C3__WRITE(src) (((uint32_t)(src) << 18) & 0x00fc0000U)
#define MDM_TWOMEG_FFE1__C3__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00fc0000U) | (((uint32_t)(src) <<\
                    18) & 0x00fc0000U)
#define MDM_TWOMEG_FFE1__C3__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 18) & ~0x00fc0000U)))
#define MDM_TWOMEG_FFE1__C3__RESET_VALUE                            0x0000003dU
/** @} */

/* macros for field c4 */
/**
 * @defgroup mdm_regs_core_c4_field c4_field
 * @brief macros for field c4
 * @details Tap 4. 6'h3e is -2
 * @{
 */
#define MDM_TWOMEG_FFE1__C4__SHIFT                                           24
#define MDM_TWOMEG_FFE1__C4__WIDTH                                            6
#define MDM_TWOMEG_FFE1__C4__MASK                                   0x3f000000U
#define MDM_TWOMEG_FFE1__C4__READ(src)  (((uint32_t)(src) & 0x3f000000U) >> 24)
#define MDM_TWOMEG_FFE1__C4__WRITE(src) (((uint32_t)(src) << 24) & 0x3f000000U)
#define MDM_TWOMEG_FFE1__C4__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x3f000000U) | (((uint32_t)(src) <<\
                    24) & 0x3f000000U)
#define MDM_TWOMEG_FFE1__C4__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x3f000000U)))
#define MDM_TWOMEG_FFE1__C4__RESET_VALUE                            0x0000003eU
/** @} */
#define MDM_TWOMEG_FFE1__TYPE                                          uint32_t
#define MDM_TWOMEG_FFE1__READ                                       0x3fffffffU
#define MDM_TWOMEG_FFE1__WRITE                                      0x3fffffffU
#define MDM_TWOMEG_FFE1__PRESERVED                                  0x00000000U
#define MDM_TWOMEG_FFE1__RESET_VALUE                                0x3ef7bf01U

#endif /* __MDM_TWOMEG_FFE1_MACRO__ */

/** @} end of twomeg_ffe1 */

/* macros for BlueprintGlobalNameSpace::MDM_twomeg_ffe2 */
/**
 * @defgroup mdm_regs_core_twomeg_ffe2 twomeg_ffe2
 * @brief 2 Mb/s FFE taps definitions.
 * @{
 */
#ifndef __MDM_TWOMEG_FFE2_MACRO__
#define __MDM_TWOMEG_FFE2_MACRO__

/* macros for field c5 */
/**
 * @defgroup mdm_regs_core_c5_field c5_field
 * @brief macros for field c5
 * @details Tap 5. 6'h3f is -1
 * @{
 */
#define MDM_TWOMEG_FFE2__C5__SHIFT                                            0
#define MDM_TWOMEG_FFE2__C5__WIDTH                                            6
#define MDM_TWOMEG_FFE2__C5__MASK                                   0x0000003fU
#define MDM_TWOMEG_FFE2__C5__READ(src)          ((uint32_t)(src) & 0x0000003fU)
#define MDM_TWOMEG_FFE2__C5__WRITE(src)         ((uint32_t)(src) & 0x0000003fU)
#define MDM_TWOMEG_FFE2__C5__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000003fU) | ((uint32_t)(src) &\
                    0x0000003fU)
#define MDM_TWOMEG_FFE2__C5__VERIFY(src)  (!(((uint32_t)(src) & ~0x0000003fU)))
#define MDM_TWOMEG_FFE2__C5__RESET_VALUE                            0x0000003fU
/** @} */

/* macros for field c6 */
/**
 * @defgroup mdm_regs_core_c6_field c6_field
 * @brief macros for field c6
 * @details Tap 6
 * @{
 */
#define MDM_TWOMEG_FFE2__C6__SHIFT                                            6
#define MDM_TWOMEG_FFE2__C6__WIDTH                                            6
#define MDM_TWOMEG_FFE2__C6__MASK                                   0x00000fc0U
#define MDM_TWOMEG_FFE2__C6__READ(src)   (((uint32_t)(src) & 0x00000fc0U) >> 6)
#define MDM_TWOMEG_FFE2__C6__WRITE(src)  (((uint32_t)(src) << 6) & 0x00000fc0U)
#define MDM_TWOMEG_FFE2__C6__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000fc0U) | (((uint32_t)(src) <<\
                    6) & 0x00000fc0U)
#define MDM_TWOMEG_FFE2__C6__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 6) & ~0x00000fc0U)))
#define MDM_TWOMEG_FFE2__C6__RESET_VALUE                            0x00000002U
/** @} */

/* macros for field c7 */
/**
 * @defgroup mdm_regs_core_c7_field c7_field
 * @brief macros for field c7
 * @details Tap 7
 * @{
 */
#define MDM_TWOMEG_FFE2__C7__SHIFT                                           12
#define MDM_TWOMEG_FFE2__C7__WIDTH                                            6
#define MDM_TWOMEG_FFE2__C7__MASK                                   0x0003f000U
#define MDM_TWOMEG_FFE2__C7__READ(src)  (((uint32_t)(src) & 0x0003f000U) >> 12)
#define MDM_TWOMEG_FFE2__C7__WRITE(src) (((uint32_t)(src) << 12) & 0x0003f000U)
#define MDM_TWOMEG_FFE2__C7__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0003f000U) | (((uint32_t)(src) <<\
                    12) & 0x0003f000U)
#define MDM_TWOMEG_FFE2__C7__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 12) & ~0x0003f000U)))
#define MDM_TWOMEG_FFE2__C7__RESET_VALUE                            0x00000005U
/** @} */

/* macros for field c8 */
/**
 * @defgroup mdm_regs_core_c8_field c8_field
 * @brief macros for field c8
 * @details Tap 8
 * @{
 */
#define MDM_TWOMEG_FFE2__C8__SHIFT                                           18
#define MDM_TWOMEG_FFE2__C8__WIDTH                                            6
#define MDM_TWOMEG_FFE2__C8__MASK                                   0x00fc0000U
#define MDM_TWOMEG_FFE2__C8__READ(src)  (((uint32_t)(src) & 0x00fc0000U) >> 18)
#define MDM_TWOMEG_FFE2__C8__WRITE(src) (((uint32_t)(src) << 18) & 0x00fc0000U)
#define MDM_TWOMEG_FFE2__C8__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00fc0000U) | (((uint32_t)(src) <<\
                    18) & 0x00fc0000U)
#define MDM_TWOMEG_FFE2__C8__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 18) & ~0x00fc0000U)))
#define MDM_TWOMEG_FFE2__C8__RESET_VALUE                            0x0000000cU
/** @} */

/* macros for field c9 */
/**
 * @defgroup mdm_regs_core_c9_field c9_field
 * @brief macros for field c9
 * @details Tap 9
 * @{
 */
#define MDM_TWOMEG_FFE2__C9__SHIFT                                           24
#define MDM_TWOMEG_FFE2__C9__WIDTH                                            6
#define MDM_TWOMEG_FFE2__C9__MASK                                   0x3f000000U
#define MDM_TWOMEG_FFE2__C9__READ(src)  (((uint32_t)(src) & 0x3f000000U) >> 24)
#define MDM_TWOMEG_FFE2__C9__WRITE(src) (((uint32_t)(src) << 24) & 0x3f000000U)
#define MDM_TWOMEG_FFE2__C9__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x3f000000U) | (((uint32_t)(src) <<\
                    24) & 0x3f000000U)
#define MDM_TWOMEG_FFE2__C9__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x3f000000U)))
#define MDM_TWOMEG_FFE2__C9__RESET_VALUE                            0x00000010U
/** @} */
#define MDM_TWOMEG_FFE2__TYPE                                          uint32_t
#define MDM_TWOMEG_FFE2__READ                                       0x3fffffffU
#define MDM_TWOMEG_FFE2__WRITE                                      0x3fffffffU
#define MDM_TWOMEG_FFE2__PRESERVED                                  0x00000000U
#define MDM_TWOMEG_FFE2__RESET_VALUE                                0x103050bfU

#endif /* __MDM_TWOMEG_FFE2_MACRO__ */

/** @} end of twomeg_ffe2 */

/* macros for BlueprintGlobalNameSpace::MDM_twomeg_ffe3 */
/**
 * @defgroup mdm_regs_core_twomeg_ffe3 twomeg_ffe3
 * @brief 2 Mb/s FFE taps definitions.
 * @{
 */
#ifndef __MDM_TWOMEG_FFE3_MACRO__
#define __MDM_TWOMEG_FFE3_MACRO__

/* macros for field c10 */
/**
 * @defgroup mdm_regs_core_c10_field c10_field
 * @brief macros for field c10
 * @details Tap 10
 * @{
 */
#define MDM_TWOMEG_FFE3__C10__SHIFT                                           0
#define MDM_TWOMEG_FFE3__C10__WIDTH                                           6
#define MDM_TWOMEG_FFE3__C10__MASK                                  0x0000003fU
#define MDM_TWOMEG_FFE3__C10__READ(src)         ((uint32_t)(src) & 0x0000003fU)
#define MDM_TWOMEG_FFE3__C10__WRITE(src)        ((uint32_t)(src) & 0x0000003fU)
#define MDM_TWOMEG_FFE3__C10__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000003fU) | ((uint32_t)(src) &\
                    0x0000003fU)
#define MDM_TWOMEG_FFE3__C10__VERIFY(src) (!(((uint32_t)(src) & ~0x0000003fU)))
#define MDM_TWOMEG_FFE3__C10__RESET_VALUE                           0x00000013U
/** @} */

/* macros for field c11 */
/**
 * @defgroup mdm_regs_core_c11_field c11_field
 * @brief macros for field c11
 * @details Tap 11
 * @{
 */
#define MDM_TWOMEG_FFE3__C11__SHIFT                                           6
#define MDM_TWOMEG_FFE3__C11__WIDTH                                           6
#define MDM_TWOMEG_FFE3__C11__MASK                                  0x00000fc0U
#define MDM_TWOMEG_FFE3__C11__READ(src)  (((uint32_t)(src) & 0x00000fc0U) >> 6)
#define MDM_TWOMEG_FFE3__C11__WRITE(src) (((uint32_t)(src) << 6) & 0x00000fc0U)
#define MDM_TWOMEG_FFE3__C11__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000fc0U) | (((uint32_t)(src) <<\
                    6) & 0x00000fc0U)
#define MDM_TWOMEG_FFE3__C11__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 6) & ~0x00000fc0U)))
#define MDM_TWOMEG_FFE3__C11__RESET_VALUE                           0x00000013U
/** @} */

/* macros for field c12 */
/**
 * @defgroup mdm_regs_core_c12_field c12_field
 * @brief macros for field c12
 * @details Tap 12
 * @{
 */
#define MDM_TWOMEG_FFE3__C12__SHIFT                                          12
#define MDM_TWOMEG_FFE3__C12__WIDTH                                           6
#define MDM_TWOMEG_FFE3__C12__MASK                                  0x0003f000U
#define MDM_TWOMEG_FFE3__C12__READ(src) (((uint32_t)(src) & 0x0003f000U) >> 12)
#define MDM_TWOMEG_FFE3__C12__WRITE(src) \
                    (((uint32_t)(src)\
                    << 12) & 0x0003f000U)
#define MDM_TWOMEG_FFE3__C12__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0003f000U) | (((uint32_t)(src) <<\
                    12) & 0x0003f000U)
#define MDM_TWOMEG_FFE3__C12__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 12) & ~0x0003f000U)))
#define MDM_TWOMEG_FFE3__C12__RESET_VALUE                           0x00000012U
/** @} */

/* macros for field c13 */
/**
 * @defgroup mdm_regs_core_c13_field c13_field
 * @brief macros for field c13
 * @details Tap 13
 * @{
 */
#define MDM_TWOMEG_FFE3__C13__SHIFT                                          18
#define MDM_TWOMEG_FFE3__C13__WIDTH                                           6
#define MDM_TWOMEG_FFE3__C13__MASK                                  0x00fc0000U
#define MDM_TWOMEG_FFE3__C13__READ(src) (((uint32_t)(src) & 0x00fc0000U) >> 18)
#define MDM_TWOMEG_FFE3__C13__WRITE(src) \
                    (((uint32_t)(src)\
                    << 18) & 0x00fc0000U)
#define MDM_TWOMEG_FFE3__C13__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00fc0000U) | (((uint32_t)(src) <<\
                    18) & 0x00fc0000U)
#define MDM_TWOMEG_FFE3__C13__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 18) & ~0x00fc0000U)))
#define MDM_TWOMEG_FFE3__C13__RESET_VALUE                           0x00000013U
/** @} */

/* macros for field c14 */
/**
 * @defgroup mdm_regs_core_c14_field c14_field
 * @brief macros for field c14
 * @details Tap 14
 * @{
 */
#define MDM_TWOMEG_FFE3__C14__SHIFT                                          24
#define MDM_TWOMEG_FFE3__C14__WIDTH                                           6
#define MDM_TWOMEG_FFE3__C14__MASK                                  0x3f000000U
#define MDM_TWOMEG_FFE3__C14__READ(src) (((uint32_t)(src) & 0x3f000000U) >> 24)
#define MDM_TWOMEG_FFE3__C14__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0x3f000000U)
#define MDM_TWOMEG_FFE3__C14__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x3f000000U) | (((uint32_t)(src) <<\
                    24) & 0x3f000000U)
#define MDM_TWOMEG_FFE3__C14__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x3f000000U)))
#define MDM_TWOMEG_FFE3__C14__RESET_VALUE                           0x00000016U
/** @} */
#define MDM_TWOMEG_FFE3__TYPE                                          uint32_t
#define MDM_TWOMEG_FFE3__READ                                       0x3fffffffU
#define MDM_TWOMEG_FFE3__WRITE                                      0x3fffffffU
#define MDM_TWOMEG_FFE3__PRESERVED                                  0x00000000U
#define MDM_TWOMEG_FFE3__RESET_VALUE                                0x164d24d3U

#endif /* __MDM_TWOMEG_FFE3_MACRO__ */

/** @} end of twomeg_ffe3 */

/* macros for BlueprintGlobalNameSpace::MDM_twomeg_ffe4 */
/**
 * @defgroup mdm_regs_core_twomeg_ffe4 twomeg_ffe4
 * @brief 2 Mb/s FFE taps definitions.
 * @{
 */
#ifndef __MDM_TWOMEG_FFE4_MACRO__
#define __MDM_TWOMEG_FFE4_MACRO__

/* macros for field c15 */
/**
 * @defgroup mdm_regs_core_c15_field c15_field
 * @brief macros for field c15
 * @details Tap 15
 * @{
 */
#define MDM_TWOMEG_FFE4__C15__SHIFT                                           0
#define MDM_TWOMEG_FFE4__C15__WIDTH                                           6
#define MDM_TWOMEG_FFE4__C15__MASK                                  0x0000003fU
#define MDM_TWOMEG_FFE4__C15__READ(src)         ((uint32_t)(src) & 0x0000003fU)
#define MDM_TWOMEG_FFE4__C15__WRITE(src)        ((uint32_t)(src) & 0x0000003fU)
#define MDM_TWOMEG_FFE4__C15__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000003fU) | ((uint32_t)(src) &\
                    0x0000003fU)
#define MDM_TWOMEG_FFE4__C15__VERIFY(src) (!(((uint32_t)(src) & ~0x0000003fU)))
#define MDM_TWOMEG_FFE4__C15__RESET_VALUE                           0x00000016U
/** @} */

/* macros for field c16 */
/**
 * @defgroup mdm_regs_core_c16_field c16_field
 * @brief macros for field c16
 * @details Tap 16
 * @{
 */
#define MDM_TWOMEG_FFE4__C16__SHIFT                                           6
#define MDM_TWOMEG_FFE4__C16__WIDTH                                           6
#define MDM_TWOMEG_FFE4__C16__MASK                                  0x00000fc0U
#define MDM_TWOMEG_FFE4__C16__READ(src)  (((uint32_t)(src) & 0x00000fc0U) >> 6)
#define MDM_TWOMEG_FFE4__C16__WRITE(src) (((uint32_t)(src) << 6) & 0x00000fc0U)
#define MDM_TWOMEG_FFE4__C16__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000fc0U) | (((uint32_t)(src) <<\
                    6) & 0x00000fc0U)
#define MDM_TWOMEG_FFE4__C16__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 6) & ~0x00000fc0U)))
#define MDM_TWOMEG_FFE4__C16__RESET_VALUE                           0x00000015U
/** @} */

/* macros for field c17 */
/**
 * @defgroup mdm_regs_core_c17_field c17_field
 * @brief macros for field c17
 * @details Tap 17
 * @{
 */
#define MDM_TWOMEG_FFE4__C17__SHIFT                                          12
#define MDM_TWOMEG_FFE4__C17__WIDTH                                           6
#define MDM_TWOMEG_FFE4__C17__MASK                                  0x0003f000U
#define MDM_TWOMEG_FFE4__C17__READ(src) (((uint32_t)(src) & 0x0003f000U) >> 12)
#define MDM_TWOMEG_FFE4__C17__WRITE(src) \
                    (((uint32_t)(src)\
                    << 12) & 0x0003f000U)
#define MDM_TWOMEG_FFE4__C17__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0003f000U) | (((uint32_t)(src) <<\
                    12) & 0x0003f000U)
#define MDM_TWOMEG_FFE4__C17__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 12) & ~0x0003f000U)))
#define MDM_TWOMEG_FFE4__C17__RESET_VALUE                           0x00000012U
/** @} */

/* macros for field c18 */
/**
 * @defgroup mdm_regs_core_c18_field c18_field
 * @brief macros for field c18
 * @details Tap 18
 * @{
 */
#define MDM_TWOMEG_FFE4__C18__SHIFT                                          18
#define MDM_TWOMEG_FFE4__C18__WIDTH                                           6
#define MDM_TWOMEG_FFE4__C18__MASK                                  0x00fc0000U
#define MDM_TWOMEG_FFE4__C18__READ(src) (((uint32_t)(src) & 0x00fc0000U) >> 18)
#define MDM_TWOMEG_FFE4__C18__WRITE(src) \
                    (((uint32_t)(src)\
                    << 18) & 0x00fc0000U)
#define MDM_TWOMEG_FFE4__C18__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00fc0000U) | (((uint32_t)(src) <<\
                    18) & 0x00fc0000U)
#define MDM_TWOMEG_FFE4__C18__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 18) & ~0x00fc0000U)))
#define MDM_TWOMEG_FFE4__C18__RESET_VALUE                           0x0000000fU
/** @} */

/* macros for field c19 */
/**
 * @defgroup mdm_regs_core_c19_field c19_field
 * @brief macros for field c19
 * @details Tap 19
 * @{
 */
#define MDM_TWOMEG_FFE4__C19__SHIFT                                          24
#define MDM_TWOMEG_FFE4__C19__WIDTH                                           6
#define MDM_TWOMEG_FFE4__C19__MASK                                  0x3f000000U
#define MDM_TWOMEG_FFE4__C19__READ(src) (((uint32_t)(src) & 0x3f000000U) >> 24)
#define MDM_TWOMEG_FFE4__C19__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0x3f000000U)
#define MDM_TWOMEG_FFE4__C19__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x3f000000U) | (((uint32_t)(src) <<\
                    24) & 0x3f000000U)
#define MDM_TWOMEG_FFE4__C19__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x3f000000U)))
#define MDM_TWOMEG_FFE4__C19__RESET_VALUE                           0x0000000fU
/** @} */
#define MDM_TWOMEG_FFE4__TYPE                                          uint32_t
#define MDM_TWOMEG_FFE4__READ                                       0x3fffffffU
#define MDM_TWOMEG_FFE4__WRITE                                      0x3fffffffU
#define MDM_TWOMEG_FFE4__PRESERVED                                  0x00000000U
#define MDM_TWOMEG_FFE4__RESET_VALUE                                0x0f3d2556U

#endif /* __MDM_TWOMEG_FFE4_MACRO__ */

/** @} end of twomeg_ffe4 */

/* macros for BlueprintGlobalNameSpace::MDM_twomeg_ffe5 */
/**
 * @defgroup mdm_regs_core_twomeg_ffe5 twomeg_ffe5
 * @brief 2 Mb/s FFE taps definitions.
 * @{
 */
#ifndef __MDM_TWOMEG_FFE5_MACRO__
#define __MDM_TWOMEG_FFE5_MACRO__

/* macros for field c20 */
/**
 * @defgroup mdm_regs_core_c20_field c20_field
 * @brief macros for field c20
 * @details Tap 20
 * @{
 */
#define MDM_TWOMEG_FFE5__C20__SHIFT                                           0
#define MDM_TWOMEG_FFE5__C20__WIDTH                                           6
#define MDM_TWOMEG_FFE5__C20__MASK                                  0x0000003fU
#define MDM_TWOMEG_FFE5__C20__READ(src)         ((uint32_t)(src) & 0x0000003fU)
#define MDM_TWOMEG_FFE5__C20__WRITE(src)        ((uint32_t)(src) & 0x0000003fU)
#define MDM_TWOMEG_FFE5__C20__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000003fU) | ((uint32_t)(src) &\
                    0x0000003fU)
#define MDM_TWOMEG_FFE5__C20__VERIFY(src) (!(((uint32_t)(src) & ~0x0000003fU)))
#define MDM_TWOMEG_FFE5__C20__RESET_VALUE                           0x0000000fU
/** @} */

/* macros for field c21 */
/**
 * @defgroup mdm_regs_core_c21_field c21_field
 * @brief macros for field c21
 * @details Tap 21
 * @{
 */
#define MDM_TWOMEG_FFE5__C21__SHIFT                                           6
#define MDM_TWOMEG_FFE5__C21__WIDTH                                           6
#define MDM_TWOMEG_FFE5__C21__MASK                                  0x00000fc0U
#define MDM_TWOMEG_FFE5__C21__READ(src)  (((uint32_t)(src) & 0x00000fc0U) >> 6)
#define MDM_TWOMEG_FFE5__C21__WRITE(src) (((uint32_t)(src) << 6) & 0x00000fc0U)
#define MDM_TWOMEG_FFE5__C21__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000fc0U) | (((uint32_t)(src) <<\
                    6) & 0x00000fc0U)
#define MDM_TWOMEG_FFE5__C21__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 6) & ~0x00000fc0U)))
#define MDM_TWOMEG_FFE5__C21__RESET_VALUE                           0x0000000eU
/** @} */

/* macros for field c22 */
/**
 * @defgroup mdm_regs_core_c22_field c22_field
 * @brief macros for field c22
 * @details Tap 22
 * @{
 */
#define MDM_TWOMEG_FFE5__C22__SHIFT                                          12
#define MDM_TWOMEG_FFE5__C22__WIDTH                                           6
#define MDM_TWOMEG_FFE5__C22__MASK                                  0x0003f000U
#define MDM_TWOMEG_FFE5__C22__READ(src) (((uint32_t)(src) & 0x0003f000U) >> 12)
#define MDM_TWOMEG_FFE5__C22__WRITE(src) \
                    (((uint32_t)(src)\
                    << 12) & 0x0003f000U)
#define MDM_TWOMEG_FFE5__C22__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0003f000U) | (((uint32_t)(src) <<\
                    12) & 0x0003f000U)
#define MDM_TWOMEG_FFE5__C22__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 12) & ~0x0003f000U)))
#define MDM_TWOMEG_FFE5__C22__RESET_VALUE                           0x0000000eU
/** @} */

/* macros for field c23 */
/**
 * @defgroup mdm_regs_core_c23_field c23_field
 * @brief macros for field c23
 * @details Tap 23
 * @{
 */
#define MDM_TWOMEG_FFE5__C23__SHIFT                                          18
#define MDM_TWOMEG_FFE5__C23__WIDTH                                           6
#define MDM_TWOMEG_FFE5__C23__MASK                                  0x00fc0000U
#define MDM_TWOMEG_FFE5__C23__READ(src) (((uint32_t)(src) & 0x00fc0000U) >> 18)
#define MDM_TWOMEG_FFE5__C23__WRITE(src) \
                    (((uint32_t)(src)\
                    << 18) & 0x00fc0000U)
#define MDM_TWOMEG_FFE5__C23__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00fc0000U) | (((uint32_t)(src) <<\
                    18) & 0x00fc0000U)
#define MDM_TWOMEG_FFE5__C23__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 18) & ~0x00fc0000U)))
#define MDM_TWOMEG_FFE5__C23__RESET_VALUE                           0x0000000cU
/** @} */

/* macros for field c24 */
/**
 * @defgroup mdm_regs_core_c24_field c24_field
 * @brief macros for field c24
 * @details Tap 24
 * @{
 */
#define MDM_TWOMEG_FFE5__C24__SHIFT                                          24
#define MDM_TWOMEG_FFE5__C24__WIDTH                                           6
#define MDM_TWOMEG_FFE5__C24__MASK                                  0x3f000000U
#define MDM_TWOMEG_FFE5__C24__READ(src) (((uint32_t)(src) & 0x3f000000U) >> 24)
#define MDM_TWOMEG_FFE5__C24__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0x3f000000U)
#define MDM_TWOMEG_FFE5__C24__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x3f000000U) | (((uint32_t)(src) <<\
                    24) & 0x3f000000U)
#define MDM_TWOMEG_FFE5__C24__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x3f000000U)))
#define MDM_TWOMEG_FFE5__C24__RESET_VALUE                           0x0000000aU
/** @} */
#define MDM_TWOMEG_FFE5__TYPE                                          uint32_t
#define MDM_TWOMEG_FFE5__READ                                       0x3fffffffU
#define MDM_TWOMEG_FFE5__WRITE                                      0x3fffffffU
#define MDM_TWOMEG_FFE5__PRESERVED                                  0x00000000U
#define MDM_TWOMEG_FFE5__RESET_VALUE                                0x0a30e38fU

#endif /* __MDM_TWOMEG_FFE5_MACRO__ */

/** @} end of twomeg_ffe5 */

/* macros for BlueprintGlobalNameSpace::MDM_twomeg_ffe6 */
/**
 * @defgroup mdm_regs_core_twomeg_ffe6 twomeg_ffe6
 * @brief 2 Mb/s FFE taps definitions.
 * @{
 */
#ifndef __MDM_TWOMEG_FFE6_MACRO__
#define __MDM_TWOMEG_FFE6_MACRO__

/* macros for field c25 */
/**
 * @defgroup mdm_regs_core_c25_field c25_field
 * @brief macros for field c25
 * @details Tap 25
 * @{
 */
#define MDM_TWOMEG_FFE6__C25__SHIFT                                           0
#define MDM_TWOMEG_FFE6__C25__WIDTH                                           6
#define MDM_TWOMEG_FFE6__C25__MASK                                  0x0000003fU
#define MDM_TWOMEG_FFE6__C25__READ(src)         ((uint32_t)(src) & 0x0000003fU)
#define MDM_TWOMEG_FFE6__C25__WRITE(src)        ((uint32_t)(src) & 0x0000003fU)
#define MDM_TWOMEG_FFE6__C25__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000003fU) | ((uint32_t)(src) &\
                    0x0000003fU)
#define MDM_TWOMEG_FFE6__C25__VERIFY(src) (!(((uint32_t)(src) & ~0x0000003fU)))
#define MDM_TWOMEG_FFE6__C25__RESET_VALUE                           0x00000008U
/** @} */

/* macros for field c26 */
/**
 * @defgroup mdm_regs_core_c26_field c26_field
 * @brief macros for field c26
 * @details Tap 26
 * @{
 */
#define MDM_TWOMEG_FFE6__C26__SHIFT                                           6
#define MDM_TWOMEG_FFE6__C26__WIDTH                                           6
#define MDM_TWOMEG_FFE6__C26__MASK                                  0x00000fc0U
#define MDM_TWOMEG_FFE6__C26__READ(src)  (((uint32_t)(src) & 0x00000fc0U) >> 6)
#define MDM_TWOMEG_FFE6__C26__WRITE(src) (((uint32_t)(src) << 6) & 0x00000fc0U)
#define MDM_TWOMEG_FFE6__C26__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000fc0U) | (((uint32_t)(src) <<\
                    6) & 0x00000fc0U)
#define MDM_TWOMEG_FFE6__C26__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 6) & ~0x00000fc0U)))
#define MDM_TWOMEG_FFE6__C26__RESET_VALUE                           0x00000008U
/** @} */

/* macros for field c27 */
/**
 * @defgroup mdm_regs_core_c27_field c27_field
 * @brief macros for field c27
 * @details Tap 27
 * @{
 */
#define MDM_TWOMEG_FFE6__C27__SHIFT                                          12
#define MDM_TWOMEG_FFE6__C27__WIDTH                                           6
#define MDM_TWOMEG_FFE6__C27__MASK                                  0x0003f000U
#define MDM_TWOMEG_FFE6__C27__READ(src) (((uint32_t)(src) & 0x0003f000U) >> 12)
#define MDM_TWOMEG_FFE6__C27__WRITE(src) \
                    (((uint32_t)(src)\
                    << 12) & 0x0003f000U)
#define MDM_TWOMEG_FFE6__C27__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0003f000U) | (((uint32_t)(src) <<\
                    12) & 0x0003f000U)
#define MDM_TWOMEG_FFE6__C27__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 12) & ~0x0003f000U)))
#define MDM_TWOMEG_FFE6__C27__RESET_VALUE                           0x00000006U
/** @} */

/* macros for field c28 */
/**
 * @defgroup mdm_regs_core_c28_field c28_field
 * @brief macros for field c28
 * @details Tap 28
 * @{
 */
#define MDM_TWOMEG_FFE6__C28__SHIFT                                          18
#define MDM_TWOMEG_FFE6__C28__WIDTH                                           6
#define MDM_TWOMEG_FFE6__C28__MASK                                  0x00fc0000U
#define MDM_TWOMEG_FFE6__C28__READ(src) (((uint32_t)(src) & 0x00fc0000U) >> 18)
#define MDM_TWOMEG_FFE6__C28__WRITE(src) \
                    (((uint32_t)(src)\
                    << 18) & 0x00fc0000U)
#define MDM_TWOMEG_FFE6__C28__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00fc0000U) | (((uint32_t)(src) <<\
                    18) & 0x00fc0000U)
#define MDM_TWOMEG_FFE6__C28__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 18) & ~0x00fc0000U)))
#define MDM_TWOMEG_FFE6__C28__RESET_VALUE                           0x00000008U
/** @} */

/* macros for field c29 */
/**
 * @defgroup mdm_regs_core_c29_field c29_field
 * @brief macros for field c29
 * @details Tap 29
 * @{
 */
#define MDM_TWOMEG_FFE6__C29__SHIFT                                          24
#define MDM_TWOMEG_FFE6__C29__WIDTH                                           6
#define MDM_TWOMEG_FFE6__C29__MASK                                  0x3f000000U
#define MDM_TWOMEG_FFE6__C29__READ(src) (((uint32_t)(src) & 0x3f000000U) >> 24)
#define MDM_TWOMEG_FFE6__C29__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0x3f000000U)
#define MDM_TWOMEG_FFE6__C29__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x3f000000U) | (((uint32_t)(src) <<\
                    24) & 0x3f000000U)
#define MDM_TWOMEG_FFE6__C29__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x3f000000U)))
#define MDM_TWOMEG_FFE6__C29__RESET_VALUE                           0x00000006U
/** @} */
#define MDM_TWOMEG_FFE6__TYPE                                          uint32_t
#define MDM_TWOMEG_FFE6__READ                                       0x3fffffffU
#define MDM_TWOMEG_FFE6__WRITE                                      0x3fffffffU
#define MDM_TWOMEG_FFE6__PRESERVED                                  0x00000000U
#define MDM_TWOMEG_FFE6__RESET_VALUE                                0x06206208U

#endif /* __MDM_TWOMEG_FFE6_MACRO__ */

/** @} end of twomeg_ffe6 */

/* macros for BlueprintGlobalNameSpace::MDM_twomeg_ffe7 */
/**
 * @defgroup mdm_regs_core_twomeg_ffe7 twomeg_ffe7
 * @brief 2 Mb/s FFE taps definitions.
 * @{
 */
#ifndef __MDM_TWOMEG_FFE7_MACRO__
#define __MDM_TWOMEG_FFE7_MACRO__

/* macros for field c30 */
/**
 * @defgroup mdm_regs_core_c30_field c30_field
 * @brief macros for field c30
 * @details Tap 30
 * @{
 */
#define MDM_TWOMEG_FFE7__C30__SHIFT                                           0
#define MDM_TWOMEG_FFE7__C30__WIDTH                                           6
#define MDM_TWOMEG_FFE7__C30__MASK                                  0x0000003fU
#define MDM_TWOMEG_FFE7__C30__READ(src)         ((uint32_t)(src) & 0x0000003fU)
#define MDM_TWOMEG_FFE7__C30__WRITE(src)        ((uint32_t)(src) & 0x0000003fU)
#define MDM_TWOMEG_FFE7__C30__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000003fU) | ((uint32_t)(src) &\
                    0x0000003fU)
#define MDM_TWOMEG_FFE7__C30__VERIFY(src) (!(((uint32_t)(src) & ~0x0000003fU)))
#define MDM_TWOMEG_FFE7__C30__RESET_VALUE                           0x00000006U
/** @} */

/* macros for field c31 */
/**
 * @defgroup mdm_regs_core_c31_field c31_field
 * @brief macros for field c31
 * @details Tap 31
 * @{
 */
#define MDM_TWOMEG_FFE7__C31__SHIFT                                           6
#define MDM_TWOMEG_FFE7__C31__WIDTH                                           6
#define MDM_TWOMEG_FFE7__C31__MASK                                  0x00000fc0U
#define MDM_TWOMEG_FFE7__C31__READ(src)  (((uint32_t)(src) & 0x00000fc0U) >> 6)
#define MDM_TWOMEG_FFE7__C31__WRITE(src) (((uint32_t)(src) << 6) & 0x00000fc0U)
#define MDM_TWOMEG_FFE7__C31__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000fc0U) | (((uint32_t)(src) <<\
                    6) & 0x00000fc0U)
#define MDM_TWOMEG_FFE7__C31__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 6) & ~0x00000fc0U)))
#define MDM_TWOMEG_FFE7__C31__RESET_VALUE                           0x00000006U
/** @} */
#define MDM_TWOMEG_FFE7__TYPE                                          uint32_t
#define MDM_TWOMEG_FFE7__READ                                       0x00000fffU
#define MDM_TWOMEG_FFE7__WRITE                                      0x00000fffU
#define MDM_TWOMEG_FFE7__PRESERVED                                  0x00000000U
#define MDM_TWOMEG_FFE7__RESET_VALUE                                0x00000186U

#endif /* __MDM_TWOMEG_FFE7_MACRO__ */

/** @} end of twomeg_ffe7 */

/* macros for BlueprintGlobalNameSpace::MDM_pmode */
/**
 * @defgroup mdm_regs_core_pmode pmode
 * @brief Power mode definitions.
 * @{
 */
#ifndef __MDM_PMODE_MACRO__
#define __MDM_PMODE_MACRO__

/* macros for field cntl */
/**
 * @defgroup mdm_regs_core_cntl_field cntl_field
 * @brief macros for field cntl
 * @details Control, although no functionality attached to this for Sydney 1.0, or ... 2.0.
 * @{
 */
#define MDM_PMODE__CNTL__SHIFT                                                0
#define MDM_PMODE__CNTL__WIDTH                                                2
#define MDM_PMODE__CNTL__MASK                                       0x00000003U
#define MDM_PMODE__CNTL__READ(src)              ((uint32_t)(src) & 0x00000003U)
#define MDM_PMODE__CNTL__WRITE(src)             ((uint32_t)(src) & 0x00000003U)
#define MDM_PMODE__CNTL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000003U) | ((uint32_t)(src) &\
                    0x00000003U)
#define MDM_PMODE__CNTL__VERIFY(src)      (!(((uint32_t)(src) & ~0x00000003U)))
#define MDM_PMODE__CNTL__RESET_VALUE                                0x00000000U
/** @} */
#define MDM_PMODE__TYPE                                                uint32_t
#define MDM_PMODE__READ                                             0x00000003U
#define MDM_PMODE__WRITE                                            0x00000003U
#define MDM_PMODE__PRESERVED                                        0x00000000U
#define MDM_PMODE__RESET_VALUE                                      0x00000000U

#endif /* __MDM_PMODE_MACRO__ */

/** @} end of pmode */

/* macros for BlueprintGlobalNameSpace::MDM_dccal */
/**
 * @defgroup mdm_regs_core_dccal dccal
 * @brief DC offset calibration control definitions.
 * @{
 */
#ifndef __MDM_DCCAL_MACRO__
#define __MDM_DCCAL_MACRO__

/* macros for field byp */
/**
 * @defgroup mdm_regs_core_byp_field byp_field
 * @brief macros for field byp
 * @details bypass DC calibration
 * @{
 */
#define MDM_DCCAL__BYP__SHIFT                                                 0
#define MDM_DCCAL__BYP__WIDTH                                                 1
#define MDM_DCCAL__BYP__MASK                                        0x00000001U
#define MDM_DCCAL__BYP__READ(src)               ((uint32_t)(src) & 0x00000001U)
#define MDM_DCCAL__BYP__WRITE(src)              ((uint32_t)(src) & 0x00000001U)
#define MDM_DCCAL__BYP__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define MDM_DCCAL__BYP__VERIFY(src)       (!(((uint32_t)(src) & ~0x00000001U)))
#define MDM_DCCAL__BYP__SET(dst) (dst) = ((dst) & ~0x00000001U) | (uint32_t)(1)
#define MDM_DCCAL__BYP__CLR(dst) (dst) = ((dst) & ~0x00000001U) | (uint32_t)(0)
#define MDM_DCCAL__BYP__RESET_VALUE                                 0x00000000U
/** @} */

/* macros for field start */
/**
 * @defgroup mdm_regs_core_start_field start_field
 * @brief macros for field start
 * @details software trigger DC calibration start
 * @{
 */
#define MDM_DCCAL__START__SHIFT                                               1
#define MDM_DCCAL__START__WIDTH                                               1
#define MDM_DCCAL__START__MASK                                      0x00000002U
#define MDM_DCCAL__START__READ(src)      (((uint32_t)(src) & 0x00000002U) >> 1)
#define MDM_DCCAL__START__WRITE(src)     (((uint32_t)(src) << 1) & 0x00000002U)
#define MDM_DCCAL__START__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define MDM_DCCAL__START__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define MDM_DCCAL__START__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define MDM_DCCAL__START__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define MDM_DCCAL__START__RESET_VALUE                               0x00000000U
/** @} */

/* macros for field avg_only */
/**
 * @defgroup mdm_regs_core_avg_only_field avg_only_field
 * @brief macros for field avg_only
 * @details software trigger DC calibration start average only cal
 * @{
 */
#define MDM_DCCAL__AVG_ONLY__SHIFT                                            2
#define MDM_DCCAL__AVG_ONLY__WIDTH                                            1
#define MDM_DCCAL__AVG_ONLY__MASK                                   0x00000004U
#define MDM_DCCAL__AVG_ONLY__READ(src)   (((uint32_t)(src) & 0x00000004U) >> 2)
#define MDM_DCCAL__AVG_ONLY__WRITE(src)  (((uint32_t)(src) << 2) & 0x00000004U)
#define MDM_DCCAL__AVG_ONLY__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | (((uint32_t)(src) <<\
                    2) & 0x00000004U)
#define MDM_DCCAL__AVG_ONLY__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 2) & ~0x00000004U)))
#define MDM_DCCAL__AVG_ONLY__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(1) << 2)
#define MDM_DCCAL__AVG_ONLY__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(0) << 2)
#define MDM_DCCAL__AVG_ONLY__RESET_VALUE                            0x00000000U
/** @} */

/* macros for field avg_cnt_exp */
/**
 * @defgroup mdm_regs_core_avg_cnt_exp_field avg_cnt_exp_field
 * @brief macros for field avg_cnt_exp
 * @details 2's power number of samples to average; valid values [2-6]
 * @{
 */
#define MDM_DCCAL__AVG_CNT_EXP__SHIFT                                         4
#define MDM_DCCAL__AVG_CNT_EXP__WIDTH                                         4
#define MDM_DCCAL__AVG_CNT_EXP__MASK                                0x000000f0U
#define MDM_DCCAL__AVG_CNT_EXP__READ(src) \
                    (((uint32_t)(src)\
                    & 0x000000f0U) >> 4)
#define MDM_DCCAL__AVG_CNT_EXP__WRITE(src) \
                    (((uint32_t)(src)\
                    << 4) & 0x000000f0U)
#define MDM_DCCAL__AVG_CNT_EXP__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000f0U) | (((uint32_t)(src) <<\
                    4) & 0x000000f0U)
#define MDM_DCCAL__AVG_CNT_EXP__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 4) & ~0x000000f0U)))
#define MDM_DCCAL__AVG_CNT_EXP__RESET_VALUE                         0x00000003U
/** @} */

/* macros for field srch_bit_cnt */
/**
 * @defgroup mdm_regs_core_srch_bit_cnt_field srch_bit_cnt_field
 * @brief macros for field srch_bit_cnt
 * @details number of DC offset bits to search
 * @{
 */
#define MDM_DCCAL__SRCH_BIT_CNT__SHIFT                                        8
#define MDM_DCCAL__SRCH_BIT_CNT__WIDTH                                        3
#define MDM_DCCAL__SRCH_BIT_CNT__MASK                               0x00000700U
#define MDM_DCCAL__SRCH_BIT_CNT__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000700U) >> 8)
#define MDM_DCCAL__SRCH_BIT_CNT__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x00000700U)
#define MDM_DCCAL__SRCH_BIT_CNT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000700U) | (((uint32_t)(src) <<\
                    8) & 0x00000700U)
#define MDM_DCCAL__SRCH_BIT_CNT__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x00000700U)))
#define MDM_DCCAL__SRCH_BIT_CNT__RESET_VALUE                        0x00000006U
/** @} */

/* macros for field tia_msb */
/**
 * @defgroup mdm_regs_core_tia_msb_field tia_msb_field
 * @brief macros for field tia_msb
 * @details 0 => 5, 1 => 6, 2 => 7
 * @{
 */
#define MDM_DCCAL__TIA_MSB__SHIFT                                            12
#define MDM_DCCAL__TIA_MSB__WIDTH                                             3
#define MDM_DCCAL__TIA_MSB__MASK                                    0x00007000U
#define MDM_DCCAL__TIA_MSB__READ(src)   (((uint32_t)(src) & 0x00007000U) >> 12)
#define MDM_DCCAL__TIA_MSB__WRITE(src)  (((uint32_t)(src) << 12) & 0x00007000U)
#define MDM_DCCAL__TIA_MSB__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00007000U) | (((uint32_t)(src) <<\
                    12) & 0x00007000U)
#define MDM_DCCAL__TIA_MSB__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 12) & ~0x00007000U)))
#define MDM_DCCAL__TIA_MSB__RESET_VALUE                             0x00000000U
/** @} */

/* macros for field iq_ratio */
/**
 * @defgroup mdm_regs_core_iq_ratio_field iq_ratio_field
 * @brief macros for field iq_ratio
 * @details cross coupling ratio between i and q channel for 1 Mb/s; valid format 1.7
 * @{
 */
#define MDM_DCCAL__IQ_RATIO__SHIFT                                           16
#define MDM_DCCAL__IQ_RATIO__WIDTH                                            8
#define MDM_DCCAL__IQ_RATIO__MASK                                   0x00ff0000U
#define MDM_DCCAL__IQ_RATIO__READ(src)  (((uint32_t)(src) & 0x00ff0000U) >> 16)
#define MDM_DCCAL__IQ_RATIO__WRITE(src) (((uint32_t)(src) << 16) & 0x00ff0000U)
#define MDM_DCCAL__IQ_RATIO__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00ff0000U) | (((uint32_t)(src) <<\
                    16) & 0x00ff0000U)
#define MDM_DCCAL__IQ_RATIO__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00ff0000U)))
#define MDM_DCCAL__IQ_RATIO__RESET_VALUE                            0x000000b2U
/** @} */

/* macros for field iq_ratio_twomeg */
/**
 * @defgroup mdm_regs_core_iq_ratio_twomeg_field iq_ratio_twomeg_field
 * @brief macros for field iq_ratio_twomeg
 * @details cross coupling ratio between i and q channel for 2 Mb/s; valid format 1.7
 * @{
 */
#define MDM_DCCAL__IQ_RATIO_TWOMEG__SHIFT                                    24
#define MDM_DCCAL__IQ_RATIO_TWOMEG__WIDTH                                     8
#define MDM_DCCAL__IQ_RATIO_TWOMEG__MASK                            0xff000000U
#define MDM_DCCAL__IQ_RATIO_TWOMEG__READ(src) \
                    (((uint32_t)(src)\
                    & 0xff000000U) >> 24)
#define MDM_DCCAL__IQ_RATIO_TWOMEG__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0xff000000U)
#define MDM_DCCAL__IQ_RATIO_TWOMEG__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xff000000U) | (((uint32_t)(src) <<\
                    24) & 0xff000000U)
#define MDM_DCCAL__IQ_RATIO_TWOMEG__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0xff000000U)))
#define MDM_DCCAL__IQ_RATIO_TWOMEG__RESET_VALUE                     0x000000b2U
/** @} */
#define MDM_DCCAL__TYPE                                                uint32_t
#define MDM_DCCAL__READ                                             0xffff77f7U
#define MDM_DCCAL__WRITE                                            0xffff77f7U
#define MDM_DCCAL__PRESERVED                                        0x00000000U
#define MDM_DCCAL__RESET_VALUE                                      0xb2b20630U

#endif /* __MDM_DCCAL_MACRO__ */

/** @} end of dccal */

/* macros for BlueprintGlobalNameSpace::MDM_dccal2 */
/**
 * @defgroup mdm_regs_core_dccal2 dccal2
 * @brief DC offset calibration control, set 2 definitions.
 * @{
 */
#ifndef __MDM_DCCAL2_MACRO__
#define __MDM_DCCAL2_MACRO__

/* macros for field rf_post_dccal_sttl_cnt */
/**
 * @defgroup mdm_regs_core_rf_post_dccal_sttl_cnt_field rf_post_dccal_sttl_cnt_field
 * @brief macros for field rf_post_dccal_sttl_cnt
 * @details number of 16 MHz clocks from rf to settle after caldc is deasserted. MUST BE EVEN
 * @{
 */
#define MDM_DCCAL2__RF_POST_DCCAL_STTL_CNT__SHIFT                             0
#define MDM_DCCAL2__RF_POST_DCCAL_STTL_CNT__WIDTH                             6
#define MDM_DCCAL2__RF_POST_DCCAL_STTL_CNT__MASK                    0x0000003fU
#define MDM_DCCAL2__RF_POST_DCCAL_STTL_CNT__READ(src) \
                    ((uint32_t)(src)\
                    & 0x0000003fU)
#define MDM_DCCAL2__RF_POST_DCCAL_STTL_CNT__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x0000003fU)
#define MDM_DCCAL2__RF_POST_DCCAL_STTL_CNT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000003fU) | ((uint32_t)(src) &\
                    0x0000003fU)
#define MDM_DCCAL2__RF_POST_DCCAL_STTL_CNT__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x0000003fU)))
#define MDM_DCCAL2__RF_POST_DCCAL_STTL_CNT__RESET_VALUE             0x00000010U
/** @} */

/* macros for field rf_tia_sttl_cnt */
/**
 * @defgroup mdm_regs_core_rf_tia_sttl_cnt_field rf_tia_sttl_cnt_field
 * @brief macros for field rf_tia_sttl_cnt
 * @details number of 16 MHz clocks from rf to settle after tia gain change for 1 Mb/s. MUST BE EVEN
 * @{
 */
#define MDM_DCCAL2__RF_TIA_STTL_CNT__SHIFT                                    8
#define MDM_DCCAL2__RF_TIA_STTL_CNT__WIDTH                                    6
#define MDM_DCCAL2__RF_TIA_STTL_CNT__MASK                           0x00003f00U
#define MDM_DCCAL2__RF_TIA_STTL_CNT__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00003f00U) >> 8)
#define MDM_DCCAL2__RF_TIA_STTL_CNT__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x00003f00U)
#define MDM_DCCAL2__RF_TIA_STTL_CNT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00003f00U) | (((uint32_t)(src) <<\
                    8) & 0x00003f00U)
#define MDM_DCCAL2__RF_TIA_STTL_CNT__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x00003f00U)))
#define MDM_DCCAL2__RF_TIA_STTL_CNT__RESET_VALUE                    0x00000010U
/** @} */

/* macros for field rf_tia_sttl_cnt_twomeg */
/**
 * @defgroup mdm_regs_core_rf_tia_sttl_cnt_twomeg_field rf_tia_sttl_cnt_twomeg_field
 * @brief macros for field rf_tia_sttl_cnt_twomeg
 * @details number of 16 MHz clocks from rf to settle after tia gain change for 2 Mb/s
 * @{
 */
#define MDM_DCCAL2__RF_TIA_STTL_CNT_TWOMEG__SHIFT                            16
#define MDM_DCCAL2__RF_TIA_STTL_CNT_TWOMEG__WIDTH                             6
#define MDM_DCCAL2__RF_TIA_STTL_CNT_TWOMEG__MASK                    0x003f0000U
#define MDM_DCCAL2__RF_TIA_STTL_CNT_TWOMEG__READ(src) \
                    (((uint32_t)(src)\
                    & 0x003f0000U) >> 16)
#define MDM_DCCAL2__RF_TIA_STTL_CNT_TWOMEG__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x003f0000U)
#define MDM_DCCAL2__RF_TIA_STTL_CNT_TWOMEG__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x003f0000U) | (((uint32_t)(src) <<\
                    16) & 0x003f0000U)
#define MDM_DCCAL2__RF_TIA_STTL_CNT_TWOMEG__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x003f0000U)))
#define MDM_DCCAL2__RF_TIA_STTL_CNT_TWOMEG__RESET_VALUE             0x00000010U
/** @} */
#define MDM_DCCAL2__TYPE                                               uint32_t
#define MDM_DCCAL2__READ                                            0x003f3f3fU
#define MDM_DCCAL2__WRITE                                           0x003f3f3fU
#define MDM_DCCAL2__PRESERVED                                       0x00000000U
#define MDM_DCCAL2__RESET_VALUE                                     0x00101010U

#endif /* __MDM_DCCAL2_MACRO__ */

/** @} end of dccal2 */

/* macros for BlueprintGlobalNameSpace::MDM_dcofftrk */
/**
 * @defgroup mdm_regs_core_dcofftrk dcofftrk
 * @brief DC offset tracking definitions.
 * @{
 */
#ifndef __MDM_DCOFFTRK_MACRO__
#define __MDM_DCOFFTRK_MACRO__

/* macros for field en */
/**
 * @defgroup mdm_regs_core_en_field en_field
 * @brief macros for field en
 * @details Enable tracking
 * @{
 */
#define MDM_DCOFFTRK__EN__SHIFT                                               0
#define MDM_DCOFFTRK__EN__WIDTH                                               1
#define MDM_DCOFFTRK__EN__MASK                                      0x00000001U
#define MDM_DCOFFTRK__EN__READ(src)             ((uint32_t)(src) & 0x00000001U)
#define MDM_DCOFFTRK__EN__WRITE(src)            ((uint32_t)(src) & 0x00000001U)
#define MDM_DCOFFTRK__EN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define MDM_DCOFFTRK__EN__VERIFY(src)     (!(((uint32_t)(src) & ~0x00000001U)))
#define MDM_DCOFFTRK__EN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define MDM_DCOFFTRK__EN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define MDM_DCOFFTRK__EN__RESET_VALUE                               0x00000000U
/** @} */

/* macros for field corr_agc_en */
/**
 * @defgroup mdm_regs_core_corr_agc_en_field corr_agc_en_field
 * @brief macros for field corr_agc_en
 * @details Enable correction based on tracking
 * @{
 */
#define MDM_DCOFFTRK__CORR_AGC_EN__SHIFT                                      1
#define MDM_DCOFFTRK__CORR_AGC_EN__WIDTH                                      1
#define MDM_DCOFFTRK__CORR_AGC_EN__MASK                             0x00000002U
#define MDM_DCOFFTRK__CORR_AGC_EN__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define MDM_DCOFFTRK__CORR_AGC_EN__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define MDM_DCOFFTRK__CORR_AGC_EN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define MDM_DCOFFTRK__CORR_AGC_EN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define MDM_DCOFFTRK__CORR_AGC_EN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define MDM_DCOFFTRK__CORR_AGC_EN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define MDM_DCOFFTRK__CORR_AGC_EN__RESET_VALUE                      0x00000000U
/** @} */

/* macros for field corr_syncdemod_en */
/**
 * @defgroup mdm_regs_core_corr_syncdemod_en_field corr_syncdemod_en_field
 * @brief macros for field corr_syncdemod_en
 * @details Enable correction based on tracking
 * @{
 */
#define MDM_DCOFFTRK__CORR_SYNCDEMOD_EN__SHIFT                                2
#define MDM_DCOFFTRK__CORR_SYNCDEMOD_EN__WIDTH                                1
#define MDM_DCOFFTRK__CORR_SYNCDEMOD_EN__MASK                       0x00000004U
#define MDM_DCOFFTRK__CORR_SYNCDEMOD_EN__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000004U) >> 2)
#define MDM_DCOFFTRK__CORR_SYNCDEMOD_EN__WRITE(src) \
                    (((uint32_t)(src)\
                    << 2) & 0x00000004U)
#define MDM_DCOFFTRK__CORR_SYNCDEMOD_EN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | (((uint32_t)(src) <<\
                    2) & 0x00000004U)
#define MDM_DCOFFTRK__CORR_SYNCDEMOD_EN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 2) & ~0x00000004U)))
#define MDM_DCOFFTRK__CORR_SYNCDEMOD_EN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(1) << 2)
#define MDM_DCOFFTRK__CORR_SYNCDEMOD_EN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(0) << 2)
#define MDM_DCOFFTRK__CORR_SYNCDEMOD_EN__RESET_VALUE                0x00000000U
/** @} */

/* macros for field mu1 */
/**
 * @defgroup mdm_regs_core_mu1_field mu1_field
 * @brief macros for field mu1
 * @details First gear mu: Encoding is 2^-(mu1+2)
 * @{
 */
#define MDM_DCOFFTRK__MU1__SHIFT                                              3
#define MDM_DCOFFTRK__MU1__WIDTH                                              3
#define MDM_DCOFFTRK__MU1__MASK                                     0x00000038U
#define MDM_DCOFFTRK__MU1__READ(src)     (((uint32_t)(src) & 0x00000038U) >> 3)
#define MDM_DCOFFTRK__MU1__WRITE(src)    (((uint32_t)(src) << 3) & 0x00000038U)
#define MDM_DCOFFTRK__MU1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000038U) | (((uint32_t)(src) <<\
                    3) & 0x00000038U)
#define MDM_DCOFFTRK__MU1__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 3) & ~0x00000038U)))
#define MDM_DCOFFTRK__MU1__RESET_VALUE                              0x00000002U
/** @} */

/* macros for field mu2 */
/**
 * @defgroup mdm_regs_core_mu2_field mu2_field
 * @brief macros for field mu2
 * @details Second gear mu: Encoding is 2^-(mu2+2)
 * @{
 */
#define MDM_DCOFFTRK__MU2__SHIFT                                              6
#define MDM_DCOFFTRK__MU2__WIDTH                                              3
#define MDM_DCOFFTRK__MU2__MASK                                     0x000001c0U
#define MDM_DCOFFTRK__MU2__READ(src)     (((uint32_t)(src) & 0x000001c0U) >> 6)
#define MDM_DCOFFTRK__MU2__WRITE(src)    (((uint32_t)(src) << 6) & 0x000001c0U)
#define MDM_DCOFFTRK__MU2__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000001c0U) | (((uint32_t)(src) <<\
                    6) & 0x000001c0U)
#define MDM_DCOFFTRK__MU2__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 6) & ~0x000001c0U)))
#define MDM_DCOFFTRK__MU2__RESET_VALUE                              0x00000004U
/** @} */

/* macros for field mu3 */
/**
 * @defgroup mdm_regs_core_mu3_field mu3_field
 * @brief macros for field mu3
 * @details Third gear mu: Encoding is 2^-(mu3+2)
 * @{
 */
#define MDM_DCOFFTRK__MU3__SHIFT                                              9
#define MDM_DCOFFTRK__MU3__WIDTH                                              3
#define MDM_DCOFFTRK__MU3__MASK                                     0x00000e00U
#define MDM_DCOFFTRK__MU3__READ(src)     (((uint32_t)(src) & 0x00000e00U) >> 9)
#define MDM_DCOFFTRK__MU3__WRITE(src)    (((uint32_t)(src) << 9) & 0x00000e00U)
#define MDM_DCOFFTRK__MU3__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000e00U) | (((uint32_t)(src) <<\
                    9) & 0x00000e00U)
#define MDM_DCOFFTRK__MU3__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 9) & ~0x00000e00U)))
#define MDM_DCOFFTRK__MU3__RESET_VALUE                              0x00000006U
/** @} */

/* macros for field mu_count1 */
/**
 * @defgroup mdm_regs_core_mu_count1_field mu_count1_field
 * @brief macros for field mu_count1
 * @details (mu_count1 * 8) = number of 16 MHz samples to switch to gear 2
 * @{
 */
#define MDM_DCOFFTRK__MU_COUNT1__SHIFT                                       12
#define MDM_DCOFFTRK__MU_COUNT1__WIDTH                                        6
#define MDM_DCOFFTRK__MU_COUNT1__MASK                               0x0003f000U
#define MDM_DCOFFTRK__MU_COUNT1__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0003f000U) >> 12)
#define MDM_DCOFFTRK__MU_COUNT1__WRITE(src) \
                    (((uint32_t)(src)\
                    << 12) & 0x0003f000U)
#define MDM_DCOFFTRK__MU_COUNT1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0003f000U) | (((uint32_t)(src) <<\
                    12) & 0x0003f000U)
#define MDM_DCOFFTRK__MU_COUNT1__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 12) & ~0x0003f000U)))
#define MDM_DCOFFTRK__MU_COUNT1__RESET_VALUE                        0x00000002U
/** @} */

/* macros for field mu_count2 */
/**
 * @defgroup mdm_regs_core_mu_count2_field mu_count2_field
 * @brief macros for field mu_count2
 * @details (mu_count2 * 8) = number of 16 MHz samples to switch to gear 3. (Includes gear1 + gear2). MUST BE GREATER THAN MU_COUNT1
 * @{
 */
#define MDM_DCOFFTRK__MU_COUNT2__SHIFT                                       18
#define MDM_DCOFFTRK__MU_COUNT2__WIDTH                                        6
#define MDM_DCOFFTRK__MU_COUNT2__MASK                               0x00fc0000U
#define MDM_DCOFFTRK__MU_COUNT2__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00fc0000U) >> 18)
#define MDM_DCOFFTRK__MU_COUNT2__WRITE(src) \
                    (((uint32_t)(src)\
                    << 18) & 0x00fc0000U)
#define MDM_DCOFFTRK__MU_COUNT2__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00fc0000U) | (((uint32_t)(src) <<\
                    18) & 0x00fc0000U)
#define MDM_DCOFFTRK__MU_COUNT2__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 18) & ~0x00fc0000U)))
#define MDM_DCOFFTRK__MU_COUNT2__RESET_VALUE                        0x00000004U
/** @} */

/* macros for field corr_delay_idx */
/**
 * @defgroup mdm_regs_core_corr_delay_idx_field corr_delay_idx_field
 * @brief macros for field corr_delay_idx
 * @details Correction is applied (8 * corr_delay_idx) 16 MHz samples after tracking reset is released
 * @{
 */
#define MDM_DCOFFTRK__CORR_DELAY_IDX__SHIFT                                  24
#define MDM_DCOFFTRK__CORR_DELAY_IDX__WIDTH                                   3
#define MDM_DCOFFTRK__CORR_DELAY_IDX__MASK                          0x07000000U
#define MDM_DCOFFTRK__CORR_DELAY_IDX__READ(src) \
                    (((uint32_t)(src)\
                    & 0x07000000U) >> 24)
#define MDM_DCOFFTRK__CORR_DELAY_IDX__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0x07000000U)
#define MDM_DCOFFTRK__CORR_DELAY_IDX__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x07000000U) | (((uint32_t)(src) <<\
                    24) & 0x07000000U)
#define MDM_DCOFFTRK__CORR_DELAY_IDX__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x07000000U)))
#define MDM_DCOFFTRK__CORR_DELAY_IDX__RESET_VALUE                   0x00000000U
/** @} */
#define MDM_DCOFFTRK__TYPE                                             uint32_t
#define MDM_DCOFFTRK__READ                                          0x07ffffffU
#define MDM_DCOFFTRK__WRITE                                         0x07ffffffU
#define MDM_DCOFFTRK__PRESERVED                                     0x00000000U
#define MDM_DCOFFTRK__RESET_VALUE                                   0x00102d10U

#endif /* __MDM_DCOFFTRK_MACRO__ */

/** @} end of dcofftrk */

/* macros for BlueprintGlobalNameSpace::MDM_dcofftrk2 */
/**
 * @defgroup mdm_regs_core_dcofftrk2 dcofftrk2
 * @brief DC offset tracking, additional registers definitions.
 * @{
 */
#ifndef __MDM_DCOFFTRK2_MACRO__
#define __MDM_DCOFFTRK2_MACRO__

/* macros for field reset_filt_delay */
/**
 * @defgroup mdm_regs_core_reset_filt_delay_field reset_filt_delay_field
 * @brief macros for field reset_filt_delay
 * @details Number of 16 clocks to hold DC tracking IIR in reset before releasing in the WAIT_GAIN_SETTLE state. MUST BE EVEN AND NON-ZERO.
 * @{
 */
#define MDM_DCOFFTRK2__RESET_FILT_DELAY__SHIFT                                0
#define MDM_DCOFFTRK2__RESET_FILT_DELAY__WIDTH                                6
#define MDM_DCOFFTRK2__RESET_FILT_DELAY__MASK                       0x0000003fU
#define MDM_DCOFFTRK2__RESET_FILT_DELAY__READ(src) \
                    ((uint32_t)(src)\
                    & 0x0000003fU)
#define MDM_DCOFFTRK2__RESET_FILT_DELAY__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x0000003fU)
#define MDM_DCOFFTRK2__RESET_FILT_DELAY__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000003fU) | ((uint32_t)(src) &\
                    0x0000003fU)
#define MDM_DCOFFTRK2__RESET_FILT_DELAY__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x0000003fU)))
#define MDM_DCOFFTRK2__RESET_FILT_DELAY__RESET_VALUE                0x00000010U
/** @} */

/* macros for field twomeg_reset_filt_delay */
/**
 * @defgroup mdm_regs_core_twomeg_reset_filt_delay_field twomeg_reset_filt_delay_field
 * @brief macros for field twomeg_reset_filt_delay
 * @details Number of 16 clocks to hold DC tracking IIR in reset before releasing in the WAIT_GAIN_SETTLE state, 2 Mb/s version Should be non-zero
 * @{
 */
#define MDM_DCOFFTRK2__TWOMEG_RESET_FILT_DELAY__SHIFT                         6
#define MDM_DCOFFTRK2__TWOMEG_RESET_FILT_DELAY__WIDTH                         6
#define MDM_DCOFFTRK2__TWOMEG_RESET_FILT_DELAY__MASK                0x00000fc0U
#define MDM_DCOFFTRK2__TWOMEG_RESET_FILT_DELAY__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000fc0U) >> 6)
#define MDM_DCOFFTRK2__TWOMEG_RESET_FILT_DELAY__WRITE(src) \
                    (((uint32_t)(src)\
                    << 6) & 0x00000fc0U)
#define MDM_DCOFFTRK2__TWOMEG_RESET_FILT_DELAY__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000fc0U) | (((uint32_t)(src) <<\
                    6) & 0x00000fc0U)
#define MDM_DCOFFTRK2__TWOMEG_RESET_FILT_DELAY__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 6) & ~0x00000fc0U)))
#define MDM_DCOFFTRK2__TWOMEG_RESET_FILT_DELAY__RESET_VALUE         0x0000000aU
/** @} */
#define MDM_DCOFFTRK2__TYPE                                            uint32_t
#define MDM_DCOFFTRK2__READ                                         0x00000fffU
#define MDM_DCOFFTRK2__WRITE                                        0x00000fffU
#define MDM_DCOFFTRK2__PRESERVED                                    0x00000000U
#define MDM_DCOFFTRK2__RESET_VALUE                                  0x00000290U

#endif /* __MDM_DCOFFTRK2_MACRO__ */

/** @} end of dcofftrk2 */

/* macros for BlueprintGlobalNameSpace::MDM_dccalresults */
/**
 * @defgroup mdm_regs_core_dccalresults dccalresults
 * @brief DC offset calibration results definitions.
 * @{
 */
#ifndef __MDM_DCCALRESULTS_MACRO__
#define __MDM_DCCALRESULTS_MACRO__

/* macros for field tia_q_off */
/**
 * @defgroup mdm_regs_core_tia_q_off_field tia_q_off_field
 * @brief macros for field tia_q_off
 * @details calculated TIA Q offset
 * @{
 */
#define MDM_DCCALRESULTS__TIA_Q_OFF__SHIFT                                    0
#define MDM_DCCALRESULTS__TIA_Q_OFF__WIDTH                                    6
#define MDM_DCCALRESULTS__TIA_Q_OFF__MASK                           0x0000003fU
#define MDM_DCCALRESULTS__TIA_Q_OFF__READ(src)  ((uint32_t)(src) & 0x0000003fU)
#define MDM_DCCALRESULTS__TIA_Q_OFF__RESET_VALUE                    0x00000000U
/** @} */

/* macros for field tia_i_off */
/**
 * @defgroup mdm_regs_core_tia_i_off_field tia_i_off_field
 * @brief macros for field tia_i_off
 * @details calculated TIA I offset
 * @{
 */
#define MDM_DCCALRESULTS__TIA_I_OFF__SHIFT                                    8
#define MDM_DCCALRESULTS__TIA_I_OFF__WIDTH                                    6
#define MDM_DCCALRESULTS__TIA_I_OFF__MASK                           0x00003f00U
#define MDM_DCCALRESULTS__TIA_I_OFF__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00003f00U) >> 8)
#define MDM_DCCALRESULTS__TIA_I_OFF__RESET_VALUE                    0x00000000U
/** @} */
#define MDM_DCCALRESULTS__TYPE                                         uint32_t
#define MDM_DCCALRESULTS__READ                                      0x00003f3fU
#define MDM_DCCALRESULTS__PRESERVED                                 0x00000000U
#define MDM_DCCALRESULTS__RESET_VALUE                               0x00000000U

#endif /* __MDM_DCCALRESULTS_MACRO__ */

/** @} end of dccalresults */

/* macros for BlueprintGlobalNameSpace::MDM_dccalresults2 */
/**
 * @defgroup mdm_regs_core_dccalresults2 dccalresults2
 * @brief DC offset calibration results, averages definitions.
 * @{
 */
#ifndef __MDM_DCCALRESULTS2_MACRO__
#define __MDM_DCCALRESULTS2_MACRO__

/* macros for field done */
/**
 * @defgroup mdm_regs_core_done_field done_field
 * @brief macros for field done
 * @details software triiger DC calibration done
 * @{
 */
#define MDM_DCCALRESULTS2__DONE__SHIFT                                        0
#define MDM_DCCALRESULTS2__DONE__WIDTH                                        1
#define MDM_DCCALRESULTS2__DONE__MASK                               0x00000001U
#define MDM_DCCALRESULTS2__DONE__READ(src)      ((uint32_t)(src) & 0x00000001U)
#define MDM_DCCALRESULTS2__DONE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define MDM_DCCALRESULTS2__DONE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define MDM_DCCALRESULTS2__DONE__RESET_VALUE                        0x00000000U
/** @} */

/* macros for field avg_q */
/**
 * @defgroup mdm_regs_core_avg_q_field avg_q_field
 * @brief macros for field avg_q
 * @details calculated average of ADC Q samples
 * @{
 */
#define MDM_DCCALRESULTS2__AVG_Q__SHIFT                                       8
#define MDM_DCCALRESULTS2__AVG_Q__WIDTH                                       8
#define MDM_DCCALRESULTS2__AVG_Q__MASK                              0x0000ff00U
#define MDM_DCCALRESULTS2__AVG_Q__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000ff00U) >> 8)
#define MDM_DCCALRESULTS2__AVG_Q__RESET_VALUE                       0x00000000U
/** @} */

/* macros for field avg_i */
/**
 * @defgroup mdm_regs_core_avg_i_field avg_i_field
 * @brief macros for field avg_i
 * @details calculated average of ADC I samples
 * @{
 */
#define MDM_DCCALRESULTS2__AVG_I__SHIFT                                      16
#define MDM_DCCALRESULTS2__AVG_I__WIDTH                                       8
#define MDM_DCCALRESULTS2__AVG_I__MASK                              0x00ff0000U
#define MDM_DCCALRESULTS2__AVG_I__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00ff0000U) >> 16)
#define MDM_DCCALRESULTS2__AVG_I__RESET_VALUE                       0x00000000U
/** @} */
#define MDM_DCCALRESULTS2__TYPE                                        uint32_t
#define MDM_DCCALRESULTS2__READ                                     0x00ffff01U
#define MDM_DCCALRESULTS2__PRESERVED                                0x00000000U
#define MDM_DCCALRESULTS2__RESET_VALUE                              0x00000000U

#endif /* __MDM_DCCALRESULTS2_MACRO__ */

/** @} end of dccalresults2 */

/* macros for BlueprintGlobalNameSpace::MDM_agcstatus */
/**
 * @defgroup mdm_regs_core_agcstatus agcstatus
 * @brief Saved state from previous agc operation. Not necessarily a successfully received packet definitions.
 * @{
 */
#ifndef __MDM_AGCSTATUS_MACRO__
#define __MDM_AGCSTATUS_MACRO__

/* macros for field rssi */
/**
 * @defgroup mdm_regs_core_rssi_field rssi_field
 * @brief macros for field rssi
 * @details Received Signal Strength Indicator, absolute dBm. Signed.
 * @{
 */
#define MDM_AGCSTATUS__RSSI__SHIFT                                            0
#define MDM_AGCSTATUS__RSSI__WIDTH                                            8
#define MDM_AGCSTATUS__RSSI__MASK                                   0x000000ffU
#define MDM_AGCSTATUS__RSSI__READ(src)          ((uint32_t)(src) & 0x000000ffU)
#define MDM_AGCSTATUS__RSSI__RESET_VALUE                            0x00000000U
/** @} */

/* macros for field rxgain */
/**
 * @defgroup mdm_regs_core_rxgain_field rxgain_field
 * @brief macros for field rxgain
 * @details Receive gain index
 * @{
 */
#define MDM_AGCSTATUS__RXGAIN__SHIFT                                          8
#define MDM_AGCSTATUS__RXGAIN__WIDTH                                          7
#define MDM_AGCSTATUS__RXGAIN__MASK                                 0x00007f00U
#define MDM_AGCSTATUS__RXGAIN__READ(src) (((uint32_t)(src) & 0x00007f00U) >> 8)
#define MDM_AGCSTATUS__RXGAIN__RESET_VALUE                          0x00000000U
/** @} */

/* macros for field sat_detected */
/**
 * @defgroup mdm_regs_core_sat_detected_field sat_detected_field
 * @brief macros for field sat_detected
 * @details Saturation triggered packet detection
 * @{
 */
#define MDM_AGCSTATUS__SAT_DETECTED__SHIFT                                   15
#define MDM_AGCSTATUS__SAT_DETECTED__WIDTH                                    1
#define MDM_AGCSTATUS__SAT_DETECTED__MASK                           0x00008000U
#define MDM_AGCSTATUS__SAT_DETECTED__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00008000U) >> 15)
#define MDM_AGCSTATUS__SAT_DETECTED__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00008000U) | ((uint32_t)(1) << 15)
#define MDM_AGCSTATUS__SAT_DETECTED__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00008000U) | ((uint32_t)(0) << 15)
#define MDM_AGCSTATUS__SAT_DETECTED__RESET_VALUE                    0x00000000U
/** @} */

/* macros for field peak_detected */
/**
 * @defgroup mdm_regs_core_peak_detected_field peak_detected_field
 * @brief macros for field peak_detected
 * @details Analog peak triggered packet detected
 * @{
 */
#define MDM_AGCSTATUS__PEAK_DETECTED__SHIFT                                  16
#define MDM_AGCSTATUS__PEAK_DETECTED__WIDTH                                   1
#define MDM_AGCSTATUS__PEAK_DETECTED__MASK                          0x00010000U
#define MDM_AGCSTATUS__PEAK_DETECTED__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00010000U) >> 16)
#define MDM_AGCSTATUS__PEAK_DETECTED__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00010000U) | ((uint32_t)(1) << 16)
#define MDM_AGCSTATUS__PEAK_DETECTED__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00010000U) | ((uint32_t)(0) << 16)
#define MDM_AGCSTATUS__PEAK_DETECTED__RESET_VALUE                   0x00000000U
/** @} */

/* macros for field initial_sat */
/**
 * @defgroup mdm_regs_core_initial_sat_field initial_sat_field
 * @brief macros for field initial_sat
 * @details Initial peak/sat occurred within initial window
 * @{
 */
#define MDM_AGCSTATUS__INITIAL_SAT__SHIFT                                    17
#define MDM_AGCSTATUS__INITIAL_SAT__WIDTH                                     1
#define MDM_AGCSTATUS__INITIAL_SAT__MASK                            0x00020000U
#define MDM_AGCSTATUS__INITIAL_SAT__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00020000U) >> 17)
#define MDM_AGCSTATUS__INITIAL_SAT__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(1) << 17)
#define MDM_AGCSTATUS__INITIAL_SAT__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(0) << 17)
#define MDM_AGCSTATUS__INITIAL_SAT__RESET_VALUE                     0x00000000U
/** @} */

/* macros for field restart_sync_demod */
/**
 * @defgroup mdm_regs_core_restart_sync_demod_field restart_sync_demod_field
 * @brief macros for field restart_sync_demod
 * @details Sync/demod was restarted due to inband_pwr or sat measurement
 * @{
 */
#define MDM_AGCSTATUS__RESTART_SYNC_DEMOD__SHIFT                             18
#define MDM_AGCSTATUS__RESTART_SYNC_DEMOD__WIDTH                              1
#define MDM_AGCSTATUS__RESTART_SYNC_DEMOD__MASK                     0x00040000U
#define MDM_AGCSTATUS__RESTART_SYNC_DEMOD__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00040000U) >> 18)
#define MDM_AGCSTATUS__RESTART_SYNC_DEMOD__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(1) << 18)
#define MDM_AGCSTATUS__RESTART_SYNC_DEMOD__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(0) << 18)
#define MDM_AGCSTATUS__RESTART_SYNC_DEMOD__RESET_VALUE              0x00000000U
/** @} */
#define MDM_AGCSTATUS__TYPE                                            uint32_t
#define MDM_AGCSTATUS__READ                                         0x0007ffffU
#define MDM_AGCSTATUS__PRESERVED                                    0x00000000U
#define MDM_AGCSTATUS__RESET_VALUE                                  0x00000000U

#endif /* __MDM_AGCSTATUS_MACRO__ */

/** @} end of agcstatus */

/* macros for BlueprintGlobalNameSpace::MDM_measfreq */
/**
 * @defgroup mdm_regs_core_measfreq measfreq
 * @brief Frequency offset measured by hardware definitions.
 * @{
 */
#ifndef __MDM_MEASFREQ_MACRO__
#define __MDM_MEASFREQ_MACRO__

/* macros for field freq_offset */
/**
 * @defgroup mdm_regs_core_freq_offset_field freq_offset_field
 * @brief macros for field freq_offset
 * @details Signed quantity. MSB has weight of -1 MHz. Subsequent bits have weight of 1/2 MHz, 1/4 MHz ... LSB has weight of 1/4096 MHz. Value will be updated at initial frequency estimation, and subsequent updates when tracking, if enabled
 * @{
 */
#define MDM_MEASFREQ__FREQ_OFFSET__SHIFT                                      0
#define MDM_MEASFREQ__FREQ_OFFSET__WIDTH                                     13
#define MDM_MEASFREQ__FREQ_OFFSET__MASK                             0x00001fffU
#define MDM_MEASFREQ__FREQ_OFFSET__READ(src)    ((uint32_t)(src) & 0x00001fffU)
#define MDM_MEASFREQ__FREQ_OFFSET__RESET_VALUE                      0x00000000U
/** @} */

/* macros for field dcofftrk_i */
/**
 * @defgroup mdm_regs_core_dcofftrk_i_field dcofftrk_i_field
 * @brief macros for field dcofftrk_i
 * @details DC offset tracking, I side
 * @{
 */
#define MDM_MEASFREQ__DCOFFTRK_I__SHIFT                                      13
#define MDM_MEASFREQ__DCOFFTRK_I__WIDTH                                       8
#define MDM_MEASFREQ__DCOFFTRK_I__MASK                              0x001fe000U
#define MDM_MEASFREQ__DCOFFTRK_I__READ(src) \
                    (((uint32_t)(src)\
                    & 0x001fe000U) >> 13)
#define MDM_MEASFREQ__DCOFFTRK_I__RESET_VALUE                       0x00000000U
/** @} */

/* macros for field dcofftrk_q */
/**
 * @defgroup mdm_regs_core_dcofftrk_q_field dcofftrk_q_field
 * @brief macros for field dcofftrk_q
 * @details DC offset tracking, Q side
 * @{
 */
#define MDM_MEASFREQ__DCOFFTRK_Q__SHIFT                                      21
#define MDM_MEASFREQ__DCOFFTRK_Q__WIDTH                                       8
#define MDM_MEASFREQ__DCOFFTRK_Q__MASK                              0x1fe00000U
#define MDM_MEASFREQ__DCOFFTRK_Q__READ(src) \
                    (((uint32_t)(src)\
                    & 0x1fe00000U) >> 21)
#define MDM_MEASFREQ__DCOFFTRK_Q__RESET_VALUE                       0x00000000U
/** @} */
#define MDM_MEASFREQ__TYPE                                             uint32_t
#define MDM_MEASFREQ__READ                                          0x1fffffffU
#define MDM_MEASFREQ__PRESERVED                                     0x00000000U
#define MDM_MEASFREQ__RESET_VALUE                                   0x00000000U

#endif /* __MDM_MEASFREQ_MACRO__ */

/** @} end of measfreq */

/* macros for BlueprintGlobalNameSpace::MDM_debug */
/**
 * @defgroup mdm_regs_core_debug debug
 * @brief Expose debug signals on mdm_out definitions.
 * @{
 */
#ifndef __MDM_DEBUG_MACRO__
#define __MDM_DEBUG_MACRO__

/* macros for field select */
/**
 * @defgroup mdm_regs_core_select_field select_field
 * @brief macros for field select
 * @details 0: disable 1: {r_initial_sat, meas_pwr_valid, peak_detected, sat, power_step_detected, r_rxfe_sm[2:0]} 2: {rx_en, rxgain[6:0]} 3: pwr_d1[7:0] 4: raw_phase[7:0] 5: Upper 8 bits of soft_demod 6: {current_threshold_met, adjust_timing_faster, adjust_timing_slower, pd_out[1:0], r_timesync_sm[2:0]} 7: {enable_syncdemod, r_restart_sync_demod, update_flipped, r_freq_mu_ptr[1:0], rx_data_strobe, rx_data_int, access_address_found} 8: {tx_en, tx_data_valid, tx_data, rx_en, rx_data, rx_data_valid, access_address_found, rssi_req} 9: Upper 8 bits of soft_demod_ffe 10: {lr_demap_valid, access_address_found, lr_rate_is_500k, final_flush, lr_rx_data_valid, lr_rx_data, r_vit_sm[1:0]} 11: {coded_corr_det_sign, sat, strong_blocker, r_lr_weak_det_gain_change_pending, enable_coded_corr_det, r_rxfe_sm[2:0]} 12: agcfilt_numer_sum_i[7:0]) 13: agcfilt_numer_sum_i[15:8]) 14: agcfilt_numer_sum_i[19:12]) 15: agcfilt_numer_sum_q[7:0]) 16: agcfilt_numer_sum_q[15:8]) 17: agcfilt_numer_sum_q[19:12]) 18: {dbg_caldc, dbg_srch_bit_cntr, dbg_dccal_st}
 * @{
 */
#define MDM_DEBUG__SELECT__SHIFT                                              0
#define MDM_DEBUG__SELECT__WIDTH                                              5
#define MDM_DEBUG__SELECT__MASK                                     0x0000001fU
#define MDM_DEBUG__SELECT__READ(src)            ((uint32_t)(src) & 0x0000001fU)
#define MDM_DEBUG__SELECT__WRITE(src)           ((uint32_t)(src) & 0x0000001fU)
#define MDM_DEBUG__SELECT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000001fU) | ((uint32_t)(src) &\
                    0x0000001fU)
#define MDM_DEBUG__SELECT__VERIFY(src)    (!(((uint32_t)(src) & ~0x0000001fU)))
#define MDM_DEBUG__SELECT__RESET_VALUE                              0x00000000U
/** @} */
#define MDM_DEBUG__TYPE                                                uint32_t
#define MDM_DEBUG__READ                                             0x0000001fU
#define MDM_DEBUG__WRITE                                            0x0000001fU
#define MDM_DEBUG__PRESERVED                                        0x00000000U
#define MDM_DEBUG__RESET_VALUE                                      0x00000000U

#endif /* __MDM_DEBUG_MACRO__ */

/** @} end of debug */

/* macros for BlueprintGlobalNameSpace::MDM_lc2lc */
/**
 * @defgroup mdm_regs_core_lc2lc lc2lc
 * @brief LC2LC loop back mode definitions.
 * @{
 */
#ifndef __MDM_LC2LC_MACRO__
#define __MDM_LC2LC_MACRO__

/* macros for field cntl */
/**
 * @defgroup mdm_regs_core_cntl_field cntl_field
 * @brief macros for field cntl
 * @details Control, 1 to enable loop back
 * @{
 */
#define MDM_LC2LC__CNTL__SHIFT                                                0
#define MDM_LC2LC__CNTL__WIDTH                                                1
#define MDM_LC2LC__CNTL__MASK                                       0x00000001U
#define MDM_LC2LC__CNTL__READ(src)              ((uint32_t)(src) & 0x00000001U)
#define MDM_LC2LC__CNTL__WRITE(src)             ((uint32_t)(src) & 0x00000001U)
#define MDM_LC2LC__CNTL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define MDM_LC2LC__CNTL__VERIFY(src)      (!(((uint32_t)(src) & ~0x00000001U)))
#define MDM_LC2LC__CNTL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define MDM_LC2LC__CNTL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define MDM_LC2LC__CNTL__RESET_VALUE                                0x00000000U
/** @} */
#define MDM_LC2LC__TYPE                                                uint32_t
#define MDM_LC2LC__READ                                             0x00000001U
#define MDM_LC2LC__WRITE                                            0x00000001U
#define MDM_LC2LC__PRESERVED                                        0x00000000U
#define MDM_LC2LC__RESET_VALUE                                      0x00000000U

#endif /* __MDM_LC2LC_MACRO__ */

/** @} end of lc2lc */

/* macros for BlueprintGlobalNameSpace::MDM_err_inj */
/**
 * @defgroup mdm_regs_core_err_inj err_inj
 * @brief error injection control, used for FPGA emulation only definitions.
 * @{
 */
#ifndef __MDM_ERR_INJ_MACRO__
#define __MDM_ERR_INJ_MACRO__

/* macros for field en */
/**
 * @defgroup mdm_regs_core_en_field en_field
 * @brief macros for field en
 * @details 1 to enable error injection
 * @{
 */
#define MDM_ERR_INJ__EN__SHIFT                                                0
#define MDM_ERR_INJ__EN__WIDTH                                                1
#define MDM_ERR_INJ__EN__MASK                                       0x00000001U
#define MDM_ERR_INJ__EN__READ(src)              ((uint32_t)(src) & 0x00000001U)
#define MDM_ERR_INJ__EN__WRITE(src)             ((uint32_t)(src) & 0x00000001U)
#define MDM_ERR_INJ__EN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define MDM_ERR_INJ__EN__VERIFY(src)      (!(((uint32_t)(src) & ~0x00000001U)))
#define MDM_ERR_INJ__EN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define MDM_ERR_INJ__EN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define MDM_ERR_INJ__EN__RESET_VALUE                                0x00000000U
/** @} */

/* macros for field lfsr_seed */
/**
 * @defgroup mdm_regs_core_lfsr_seed_field lfsr_seed_field
 * @brief macros for field lfsr_seed
 * @details lfsr seed
 * @{
 */
#define MDM_ERR_INJ__LFSR_SEED__SHIFT                                         1
#define MDM_ERR_INJ__LFSR_SEED__WIDTH                                        16
#define MDM_ERR_INJ__LFSR_SEED__MASK                                0x0001fffeU
#define MDM_ERR_INJ__LFSR_SEED__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0001fffeU) >> 1)
#define MDM_ERR_INJ__LFSR_SEED__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x0001fffeU)
#define MDM_ERR_INJ__LFSR_SEED__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0001fffeU) | (((uint32_t)(src) <<\
                    1) & 0x0001fffeU)
#define MDM_ERR_INJ__LFSR_SEED__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x0001fffeU)))
#define MDM_ERR_INJ__LFSR_SEED__RESET_VALUE                         0x000082d8U
/** @} */
#define MDM_ERR_INJ__TYPE                                              uint32_t
#define MDM_ERR_INJ__READ                                           0x0001ffffU
#define MDM_ERR_INJ__WRITE                                          0x0001ffffU
#define MDM_ERR_INJ__PRESERVED                                      0x00000000U
#define MDM_ERR_INJ__RESET_VALUE                                    0x000105b0U

#endif /* __MDM_ERR_INJ_MACRO__ */

/** @} end of err_inj */

/* macros for BlueprintGlobalNameSpace::MDM_core_id */
/**
 * @defgroup mdm_regs_core_core_id core_id
 * @brief modem ID register definitions.
 * @{
 */
#ifndef __MDM_CORE_ID_MACRO__
#define __MDM_CORE_ID_MACRO__

/* macros for field core_id */
/**
 * @defgroup mdm_regs_core_core_id_field core_id_field
 * @brief macros for field core_id
 * @details that's MDM in hex
 * @{
 */
#define MDM_CORE_ID__CORE_ID__SHIFT                                           0
#define MDM_CORE_ID__CORE_ID__WIDTH                                          32
#define MDM_CORE_ID__CORE_ID__MASK                                  0xffffffffU
#define MDM_CORE_ID__CORE_ID__READ(src)         ((uint32_t)(src) & 0xffffffffU)
#define MDM_CORE_ID__CORE_ID__RESET_VALUE                           0x4d444d20U
/** @} */
#define MDM_CORE_ID__TYPE                                              uint32_t
#define MDM_CORE_ID__READ                                           0xffffffffU
#define MDM_CORE_ID__PRESERVED                                      0x00000000U
#define MDM_CORE_ID__RESET_VALUE                                    0x4d444d20U

#endif /* __MDM_CORE_ID_MACRO__ */

/** @} end of core_id */

/** @} end of MDM_REGS_CORE */
#endif /* __REG_MDM_REGS_CORE_H__ */
