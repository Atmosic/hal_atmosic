/*                                                                           */
/* File:       at_apb_pseq_regs_core_macro.h                                 */
/*                                                                           */
/* Arguments:  /cad/tools/cadence/blueprint_3.7.5/Linux-64bit/blueprint -eval*/
/*             $DEFINE_PROPERTY=1; -ansic at_apb_pseq_regs_core.rdl          */
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


#ifndef __REG_AT_APB_PSEQ_REGS_CORE_H__
#define __REG_AT_APB_PSEQ_REGS_CORE_H__

/**
 *****************************************************************************
 * @defgroup AT_APB_PSEQ_REGS_CORE at_apb_pseq_regs_core
 * @ingroup AT_REG
 * @brief at_apb_pseq_regs_core definitions.
 * @{
 *****************************************************************************
 */

/* macros for BlueprintGlobalNameSpace::PSEQ_ctrl0 */
/**
 * @defgroup at_apb_pseq_regs_core_ctrl0 ctrl0
 * @brief signals to prepare for and to request low power state definitions.
 * @{
 */
#ifndef __PSEQ_CTRL0_MACRO__
#define __PSEQ_CTRL0_MACRO__

/* macros for field manage_xtal */
/**
 * @defgroup at_apb_pseq_regs_core_manage_xtal_field manage_xtal_field
 * @brief macros for field manage_xtal
 * @details If set, permits SOC to power down clk_mpc crystal circuit during low power mode.
 * @{
 */
#define PSEQ_CTRL0__MANAGE_XTAL__SHIFT                                        0
#define PSEQ_CTRL0__MANAGE_XTAL__WIDTH                                        1
#define PSEQ_CTRL0__MANAGE_XTAL__MASK                               0x00000001U
#define PSEQ_CTRL0__MANAGE_XTAL__READ(src)      ((uint32_t)(src) & 0x00000001U)
#define PSEQ_CTRL0__MANAGE_XTAL__WRITE(src)     ((uint32_t)(src) & 0x00000001U)
#define PSEQ_CTRL0__MANAGE_XTAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define PSEQ_CTRL0__MANAGE_XTAL__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define PSEQ_CTRL0__MANAGE_XTAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define PSEQ_CTRL0__MANAGE_XTAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define PSEQ_CTRL0__MANAGE_XTAL__RESET_VALUE                        0x00000000U
/** @} */

/* macros for field req_ble_only_lp_state */
/**
 * @defgroup at_apb_pseq_regs_core_req_ble_only_lp_state_field req_ble_only_lp_state_field
 * @brief macros for field req_ble_only_lp_state
 * @details If set, requests SOC to go to BLE Only low power state.
 * @{
 */
#define PSEQ_CTRL0__REQ_BLE_ONLY_LP_STATE__SHIFT                              1
#define PSEQ_CTRL0__REQ_BLE_ONLY_LP_STATE__WIDTH                              1
#define PSEQ_CTRL0__REQ_BLE_ONLY_LP_STATE__MASK                     0x00000002U
#define PSEQ_CTRL0__REQ_BLE_ONLY_LP_STATE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define PSEQ_CTRL0__REQ_BLE_ONLY_LP_STATE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define PSEQ_CTRL0__REQ_BLE_ONLY_LP_STATE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define PSEQ_CTRL0__REQ_BLE_ONLY_LP_STATE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define PSEQ_CTRL0__REQ_BLE_ONLY_LP_STATE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define PSEQ_CTRL0__REQ_BLE_ONLY_LP_STATE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define PSEQ_CTRL0__REQ_BLE_ONLY_LP_STATE__RESET_VALUE              0x00000000U
/** @} */

/* macros for field req_retain_all_state */
/**
 * @defgroup at_apb_pseq_regs_core_req_retain_all_state_field req_retain_all_state_field
 * @brief macros for field req_retain_all_state
 * @details If set, requests SOC to go to Retain All low power state.
 * @{
 */
#define PSEQ_CTRL0__REQ_RETAIN_ALL_STATE__SHIFT                               2
#define PSEQ_CTRL0__REQ_RETAIN_ALL_STATE__WIDTH                               1
#define PSEQ_CTRL0__REQ_RETAIN_ALL_STATE__MASK                      0x00000004U
#define PSEQ_CTRL0__REQ_RETAIN_ALL_STATE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000004U) >> 2)
#define PSEQ_CTRL0__REQ_RETAIN_ALL_STATE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 2) & 0x00000004U)
#define PSEQ_CTRL0__REQ_RETAIN_ALL_STATE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | (((uint32_t)(src) <<\
                    2) & 0x00000004U)
#define PSEQ_CTRL0__REQ_RETAIN_ALL_STATE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 2) & ~0x00000004U)))
#define PSEQ_CTRL0__REQ_RETAIN_ALL_STATE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(1) << 2)
#define PSEQ_CTRL0__REQ_RETAIN_ALL_STATE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(0) << 2)
#define PSEQ_CTRL0__REQ_RETAIN_ALL_STATE__RESET_VALUE               0x00000000U
/** @} */

/* macros for field req_hibernate_state */
/**
 * @defgroup at_apb_pseq_regs_core_req_hibernate_state_field req_hibernate_state_field
 * @brief macros for field req_hibernate_state
 * @details If set, requests SOC to go to Hibernate low power state.
 * @{
 */
#define PSEQ_CTRL0__REQ_HIBERNATE_STATE__SHIFT                                3
#define PSEQ_CTRL0__REQ_HIBERNATE_STATE__WIDTH                                1
#define PSEQ_CTRL0__REQ_HIBERNATE_STATE__MASK                       0x00000008U
#define PSEQ_CTRL0__REQ_HIBERNATE_STATE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000008U) >> 3)
#define PSEQ_CTRL0__REQ_HIBERNATE_STATE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 3) & 0x00000008U)
#define PSEQ_CTRL0__REQ_HIBERNATE_STATE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | (((uint32_t)(src) <<\
                    3) & 0x00000008U)
#define PSEQ_CTRL0__REQ_HIBERNATE_STATE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 3) & ~0x00000008U)))
#define PSEQ_CTRL0__REQ_HIBERNATE_STATE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((uint32_t)(1) << 3)
#define PSEQ_CTRL0__REQ_HIBERNATE_STATE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((uint32_t)(0) << 3)
#define PSEQ_CTRL0__REQ_HIBERNATE_STATE__RESET_VALUE                0x00000000U
/** @} */

/* macros for field enable_debug_bus */
/**
 * @defgroup at_apb_pseq_regs_core_enable_debug_bus_field enable_debug_bus_field
 * @brief macros for field enable_debug_bus
 * @details If set, pseq debug bus will be enabled (e.g. allowed to start toggling at pinmux input).
 * @{
 */
#define PSEQ_CTRL0__ENABLE_DEBUG_BUS__SHIFT                                   4
#define PSEQ_CTRL0__ENABLE_DEBUG_BUS__WIDTH                                   1
#define PSEQ_CTRL0__ENABLE_DEBUG_BUS__MASK                          0x00000010U
#define PSEQ_CTRL0__ENABLE_DEBUG_BUS__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000010U) >> 4)
#define PSEQ_CTRL0__ENABLE_DEBUG_BUS__WRITE(src) \
                    (((uint32_t)(src)\
                    << 4) & 0x00000010U)
#define PSEQ_CTRL0__ENABLE_DEBUG_BUS__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | (((uint32_t)(src) <<\
                    4) & 0x00000010U)
#define PSEQ_CTRL0__ENABLE_DEBUG_BUS__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 4) & ~0x00000010U)))
#define PSEQ_CTRL0__ENABLE_DEBUG_BUS__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(1) << 4)
#define PSEQ_CTRL0__ENABLE_DEBUG_BUS__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(0) << 4)
#define PSEQ_CTRL0__ENABLE_DEBUG_BUS__RESET_VALUE                   0x00000000U
/** @} */

/* macros for field req_ble_to_boot */
/**
 * @defgroup at_apb_pseq_regs_core_req_ble_to_boot_field req_ble_to_boot_field
 * @brief macros for field req_ble_to_boot
 * @details If set, requests that ble powers up.
 * @{
 */
#define PSEQ_CTRL0__REQ_BLE_TO_BOOT__SHIFT                                    5
#define PSEQ_CTRL0__REQ_BLE_TO_BOOT__WIDTH                                    1
#define PSEQ_CTRL0__REQ_BLE_TO_BOOT__MASK                           0x00000020U
#define PSEQ_CTRL0__REQ_BLE_TO_BOOT__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000020U) >> 5)
#define PSEQ_CTRL0__REQ_BLE_TO_BOOT__WRITE(src) \
                    (((uint32_t)(src)\
                    << 5) & 0x00000020U)
#define PSEQ_CTRL0__REQ_BLE_TO_BOOT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | (((uint32_t)(src) <<\
                    5) & 0x00000020U)
#define PSEQ_CTRL0__REQ_BLE_TO_BOOT__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 5) & ~0x00000020U)))
#define PSEQ_CTRL0__REQ_BLE_TO_BOOT__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | ((uint32_t)(1) << 5)
#define PSEQ_CTRL0__REQ_BLE_TO_BOOT__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | ((uint32_t)(0) << 5)
#define PSEQ_CTRL0__REQ_BLE_TO_BOOT__RESET_VALUE                    0x00000000U
/** @} */

/* macros for field xtal_waits_for_retv */
/**
 * @defgroup at_apb_pseq_regs_core_xtal_waits_for_retv_field xtal_waits_for_retv_field
 * @brief macros for field xtal_waits_for_retv
 * @details If set, xtal will not be enabled until the retention voltage has been boosted back up to nominal value.
 * @{
 */
#define PSEQ_CTRL0__XTAL_WAITS_FOR_RETV__SHIFT                               16
#define PSEQ_CTRL0__XTAL_WAITS_FOR_RETV__WIDTH                                1
#define PSEQ_CTRL0__XTAL_WAITS_FOR_RETV__MASK                       0x00010000U
#define PSEQ_CTRL0__XTAL_WAITS_FOR_RETV__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00010000U) >> 16)
#define PSEQ_CTRL0__XTAL_WAITS_FOR_RETV__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00010000U)
#define PSEQ_CTRL0__XTAL_WAITS_FOR_RETV__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00010000U) | (((uint32_t)(src) <<\
                    16) & 0x00010000U)
#define PSEQ_CTRL0__XTAL_WAITS_FOR_RETV__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00010000U)))
#define PSEQ_CTRL0__XTAL_WAITS_FOR_RETV__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00010000U) | ((uint32_t)(1) << 16)
#define PSEQ_CTRL0__XTAL_WAITS_FOR_RETV__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00010000U) | ((uint32_t)(0) << 16)
#define PSEQ_CTRL0__XTAL_WAITS_FOR_RETV__RESET_VALUE                0x00000000U
/** @} */

/* macros for field ble_boosts_retv */
/**
 * @defgroup at_apb_pseq_regs_core_ble_boosts_retv_field ble_boosts_retv_field
 * @brief macros for field ble_boosts_retv
 * @details If set, any time ble requests the clk_mpc oscillator, the retention voltage is boosted back up to nominal value.
 * @{
 */
#define PSEQ_CTRL0__BLE_BOOSTS_RETV__SHIFT                                   17
#define PSEQ_CTRL0__BLE_BOOSTS_RETV__WIDTH                                    1
#define PSEQ_CTRL0__BLE_BOOSTS_RETV__MASK                           0x00020000U
#define PSEQ_CTRL0__BLE_BOOSTS_RETV__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00020000U) >> 17)
#define PSEQ_CTRL0__BLE_BOOSTS_RETV__WRITE(src) \
                    (((uint32_t)(src)\
                    << 17) & 0x00020000U)
#define PSEQ_CTRL0__BLE_BOOSTS_RETV__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | (((uint32_t)(src) <<\
                    17) & 0x00020000U)
#define PSEQ_CTRL0__BLE_BOOSTS_RETV__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 17) & ~0x00020000U)))
#define PSEQ_CTRL0__BLE_BOOSTS_RETV__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(1) << 17)
#define PSEQ_CTRL0__BLE_BOOSTS_RETV__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(0) << 17)
#define PSEQ_CTRL0__BLE_BOOSTS_RETV__RESET_VALUE                    0x00000001U
/** @} */

/* macros for field block_dbg_wake */
/**
 * @defgroup at_apb_pseq_regs_core_block_dbg_wake_field block_dbg_wake_field
 * @brief macros for field block_dbg_wake
 * @details If set, debugger cannot wake chip from low power state.
 * @{
 */
#define PSEQ_CTRL0__BLOCK_DBG_WAKE__SHIFT                                    18
#define PSEQ_CTRL0__BLOCK_DBG_WAKE__WIDTH                                     1
#define PSEQ_CTRL0__BLOCK_DBG_WAKE__MASK                            0x00040000U
#define PSEQ_CTRL0__BLOCK_DBG_WAKE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00040000U) >> 18)
#define PSEQ_CTRL0__BLOCK_DBG_WAKE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 18) & 0x00040000U)
#define PSEQ_CTRL0__BLOCK_DBG_WAKE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | (((uint32_t)(src) <<\
                    18) & 0x00040000U)
#define PSEQ_CTRL0__BLOCK_DBG_WAKE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 18) & ~0x00040000U)))
#define PSEQ_CTRL0__BLOCK_DBG_WAKE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(1) << 18)
#define PSEQ_CTRL0__BLOCK_DBG_WAKE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(0) << 18)
#define PSEQ_CTRL0__BLOCK_DBG_WAKE__RESET_VALUE                     0x00000000U
/** @} */

/* macros for field wurx_det0_sel */
/**
 * @defgroup at_apb_pseq_regs_core_wurx_det0_sel_field wurx_det0_sel_field
 * @brief macros for field wurx_det0_sel
 * @details Is wurx0 detect level or edge?  0=level  1=rising  2,3=falling
 * @{
 */
#define PSEQ_CTRL0__WURX_DET0_SEL__SHIFT                                     19
#define PSEQ_CTRL0__WURX_DET0_SEL__WIDTH                                      2
#define PSEQ_CTRL0__WURX_DET0_SEL__MASK                             0x00180000U
#define PSEQ_CTRL0__WURX_DET0_SEL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00180000U) >> 19)
#define PSEQ_CTRL0__WURX_DET0_SEL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 19) & 0x00180000U)
#define PSEQ_CTRL0__WURX_DET0_SEL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00180000U) | (((uint32_t)(src) <<\
                    19) & 0x00180000U)
#define PSEQ_CTRL0__WURX_DET0_SEL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 19) & ~0x00180000U)))
#define PSEQ_CTRL0__WURX_DET0_SEL__RESET_VALUE                      0x00000001U
/** @} */

/* macros for field wurx_det1_sel */
/**
 * @defgroup at_apb_pseq_regs_core_wurx_det1_sel_field wurx_det1_sel_field
 * @brief macros for field wurx_det1_sel
 * @details Is wurx1 detect level or edge?  0=level  1=rising  2,3=falling
 * @{
 */
#define PSEQ_CTRL0__WURX_DET1_SEL__SHIFT                                     21
#define PSEQ_CTRL0__WURX_DET1_SEL__WIDTH                                      2
#define PSEQ_CTRL0__WURX_DET1_SEL__MASK                             0x00600000U
#define PSEQ_CTRL0__WURX_DET1_SEL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00600000U) >> 21)
#define PSEQ_CTRL0__WURX_DET1_SEL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 21) & 0x00600000U)
#define PSEQ_CTRL0__WURX_DET1_SEL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00600000U) | (((uint32_t)(src) <<\
                    21) & 0x00600000U)
#define PSEQ_CTRL0__WURX_DET1_SEL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 21) & ~0x00600000U)))
#define PSEQ_CTRL0__WURX_DET1_SEL__RESET_VALUE                      0x00000001U
/** @} */

/* macros for field radio_en_i_src */
/**
 * @defgroup at_apb_pseq_regs_core_radio_en_i_src_field radio_en_i_src_field
 * @brief macros for field radio_en_i_src
 * @details Source of radio enable request signal.  0=direct/rw_cm_timing_gen_lp  1=indirect/rif
 * @{
 */
#define PSEQ_CTRL0__RADIO_EN_I_SRC__SHIFT                                    23
#define PSEQ_CTRL0__RADIO_EN_I_SRC__WIDTH                                     1
#define PSEQ_CTRL0__RADIO_EN_I_SRC__MASK                            0x00800000U
#define PSEQ_CTRL0__RADIO_EN_I_SRC__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00800000U) >> 23)
#define PSEQ_CTRL0__RADIO_EN_I_SRC__WRITE(src) \
                    (((uint32_t)(src)\
                    << 23) & 0x00800000U)
#define PSEQ_CTRL0__RADIO_EN_I_SRC__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | (((uint32_t)(src) <<\
                    23) & 0x00800000U)
#define PSEQ_CTRL0__RADIO_EN_I_SRC__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 23) & ~0x00800000U)))
#define PSEQ_CTRL0__RADIO_EN_I_SRC__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(1) << 23)
#define PSEQ_CTRL0__RADIO_EN_I_SRC__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(0) << 23)
#define PSEQ_CTRL0__RADIO_EN_I_SRC__RESET_VALUE                     0x00000000U
/** @} */

/* macros for field pinsel_latch_open */
/**
 * @defgroup at_apb_pseq_regs_core_pinsel_latch_open_field pinsel_latch_open_field
 * @brief macros for field pinsel_latch_open
 * @details If set, opens all latches all pin select signals.
 * @{
 */
#define PSEQ_CTRL0__PINSEL_LATCH_OPEN__SHIFT                                 24
#define PSEQ_CTRL0__PINSEL_LATCH_OPEN__WIDTH                                  1
#define PSEQ_CTRL0__PINSEL_LATCH_OPEN__MASK                         0x01000000U
#define PSEQ_CTRL0__PINSEL_LATCH_OPEN__READ(src) \
                    (((uint32_t)(src)\
                    & 0x01000000U) >> 24)
#define PSEQ_CTRL0__PINSEL_LATCH_OPEN__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0x01000000U)
#define PSEQ_CTRL0__PINSEL_LATCH_OPEN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | (((uint32_t)(src) <<\
                    24) & 0x01000000U)
#define PSEQ_CTRL0__PINSEL_LATCH_OPEN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x01000000U)))
#define PSEQ_CTRL0__PINSEL_LATCH_OPEN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(1) << 24)
#define PSEQ_CTRL0__PINSEL_LATCH_OPEN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(0) << 24)
#define PSEQ_CTRL0__PINSEL_LATCH_OPEN__RESET_VALUE                  0x00000000U
/** @} */

/* macros for field ksm_latch_open */
/**
 * @defgroup at_apb_pseq_regs_core_ksm_latch_open_field ksm_latch_open_field
 * @brief macros for field ksm_latch_open
 * @details If set, opens all latches on ksm control signals.
 * @{
 */
#define PSEQ_CTRL0__KSM_LATCH_OPEN__SHIFT                                    25
#define PSEQ_CTRL0__KSM_LATCH_OPEN__WIDTH                                     1
#define PSEQ_CTRL0__KSM_LATCH_OPEN__MASK                            0x02000000U
#define PSEQ_CTRL0__KSM_LATCH_OPEN__READ(src) \
                    (((uint32_t)(src)\
                    & 0x02000000U) >> 25)
#define PSEQ_CTRL0__KSM_LATCH_OPEN__WRITE(src) \
                    (((uint32_t)(src)\
                    << 25) & 0x02000000U)
#define PSEQ_CTRL0__KSM_LATCH_OPEN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x02000000U) | (((uint32_t)(src) <<\
                    25) & 0x02000000U)
#define PSEQ_CTRL0__KSM_LATCH_OPEN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 25) & ~0x02000000U)))
#define PSEQ_CTRL0__KSM_LATCH_OPEN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x02000000U) | ((uint32_t)(1) << 25)
#define PSEQ_CTRL0__KSM_LATCH_OPEN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x02000000U) | ((uint32_t)(0) << 25)
#define PSEQ_CTRL0__KSM_LATCH_OPEN__RESET_VALUE                     0x00000000U
/** @} */

/* macros for field gpio_latch_open */
/**
 * @defgroup at_apb_pseq_regs_core_gpio_latch_open_field gpio_latch_open_field
 * @brief macros for field gpio_latch_open
 * @details If set, opens all latches on gpio control signals.
 * @{
 */
#define PSEQ_CTRL0__GPIO_LATCH_OPEN__SHIFT                                   26
#define PSEQ_CTRL0__GPIO_LATCH_OPEN__WIDTH                                    1
#define PSEQ_CTRL0__GPIO_LATCH_OPEN__MASK                           0x04000000U
#define PSEQ_CTRL0__GPIO_LATCH_OPEN__READ(src) \
                    (((uint32_t)(src)\
                    & 0x04000000U) >> 26)
#define PSEQ_CTRL0__GPIO_LATCH_OPEN__WRITE(src) \
                    (((uint32_t)(src)\
                    << 26) & 0x04000000U)
#define PSEQ_CTRL0__GPIO_LATCH_OPEN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x04000000U) | (((uint32_t)(src) <<\
                    26) & 0x04000000U)
#define PSEQ_CTRL0__GPIO_LATCH_OPEN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 26) & ~0x04000000U)))
#define PSEQ_CTRL0__GPIO_LATCH_OPEN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x04000000U) | ((uint32_t)(1) << 26)
#define PSEQ_CTRL0__GPIO_LATCH_OPEN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x04000000U) | ((uint32_t)(0) << 26)
#define PSEQ_CTRL0__GPIO_LATCH_OPEN__RESET_VALUE                    0x00000000U
/** @} */

/* macros for field req_soc_off */
/**
 * @defgroup at_apb_pseq_regs_core_req_soc_off_field req_soc_off_field
 * @brief macros for field req_soc_off
 * @details If set, requests SOC to go SOC Off state.
 * @{
 */
#define PSEQ_CTRL0__REQ_SOC_OFF__SHIFT                                       27
#define PSEQ_CTRL0__REQ_SOC_OFF__WIDTH                                        1
#define PSEQ_CTRL0__REQ_SOC_OFF__MASK                               0x08000000U
#define PSEQ_CTRL0__REQ_SOC_OFF__READ(src) \
                    (((uint32_t)(src)\
                    & 0x08000000U) >> 27)
#define PSEQ_CTRL0__REQ_SOC_OFF__WRITE(src) \
                    (((uint32_t)(src)\
                    << 27) & 0x08000000U)
#define PSEQ_CTRL0__REQ_SOC_OFF__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x08000000U) | (((uint32_t)(src) <<\
                    27) & 0x08000000U)
#define PSEQ_CTRL0__REQ_SOC_OFF__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 27) & ~0x08000000U)))
#define PSEQ_CTRL0__REQ_SOC_OFF__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x08000000U) | ((uint32_t)(1) << 27)
#define PSEQ_CTRL0__REQ_SOC_OFF__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x08000000U) | ((uint32_t)(0) << 27)
#define PSEQ_CTRL0__REQ_SOC_OFF__RESET_VALUE                        0x00000000U
/** @} */
#define PSEQ_CTRL0__TYPE                                               uint32_t
#define PSEQ_CTRL0__READ                                            0x0fff003fU
#define PSEQ_CTRL0__WRITE                                           0x0fff003fU
#define PSEQ_CTRL0__PRESERVED                                       0x00000000U
#define PSEQ_CTRL0__RESET_VALUE                                     0x002a0000U

#endif /* __PSEQ_CTRL0_MACRO__ */

/** @} end of ctrl0 */

/* macros for BlueprintGlobalNameSpace::PSEQ_retain_all_wake_mask */
/**
 * @defgroup at_apb_pseq_regs_core_retain_all_wake_mask retain_all_wake_mask
 * @brief signals to select which events can generate a wake event while in Retain All definitions.
 * @{
 */
#ifndef __PSEQ_RETAIN_ALL_WAKE_MASK_MACRO__
#define __PSEQ_RETAIN_ALL_WAKE_MASK_MACRO__

/* macros for field watch_gpio */
/**
 * @defgroup at_apb_pseq_regs_core_watch_gpio_field watch_gpio_field
 * @brief macros for field watch_gpio
 * @details valid to wake on gpio activity
 * @{
 */
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_GPIO__SHIFT                          0
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_GPIO__WIDTH                          1
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_GPIO__MASK                 0x00000001U
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_GPIO__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_GPIO__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_GPIO__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_GPIO__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_GPIO__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_GPIO__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_GPIO__RESET_VALUE          0x00000000U
/** @} */

/* macros for field watch_cntdown */
/**
 * @defgroup at_apb_pseq_regs_core_watch_cntdown_field watch_cntdown_field
 * @brief macros for field watch_cntdown
 * @details valid to wake on count down timer expiring
 * @{
 */
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_CNTDOWN__SHIFT                       1
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_CNTDOWN__WIDTH                       1
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_CNTDOWN__MASK              0x00000002U
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_CNTDOWN__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_CNTDOWN__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_CNTDOWN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_CNTDOWN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_CNTDOWN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_CNTDOWN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_CNTDOWN__RESET_VALUE       0x00000000U
/** @} */

/* macros for field watch_wurx0 */
/**
 * @defgroup at_apb_pseq_regs_core_watch_wurx0_field watch_wurx0_field
 * @brief macros for field watch_wurx0
 * @details valid to wake on wurx0 detect
 * @{
 */
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_WURX0__SHIFT                         2
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_WURX0__WIDTH                         1
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_WURX0__MASK                0x00000004U
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_WURX0__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000004U) >> 2)
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_WURX0__WRITE(src) \
                    (((uint32_t)(src)\
                    << 2) & 0x00000004U)
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_WURX0__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | (((uint32_t)(src) <<\
                    2) & 0x00000004U)
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_WURX0__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 2) & ~0x00000004U)))
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_WURX0__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(1) << 2)
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_WURX0__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(0) << 2)
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_WURX0__RESET_VALUE         0x00000000U
/** @} */

/* macros for field watch_wurx1 */
/**
 * @defgroup at_apb_pseq_regs_core_watch_wurx1_field watch_wurx1_field
 * @brief macros for field watch_wurx1
 * @details valid to wake on wurx1 detect
 * @{
 */
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_WURX1__SHIFT                         3
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_WURX1__WIDTH                         1
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_WURX1__MASK                0x00000008U
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_WURX1__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000008U) >> 3)
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_WURX1__WRITE(src) \
                    (((uint32_t)(src)\
                    << 3) & 0x00000008U)
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_WURX1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | (((uint32_t)(src) <<\
                    3) & 0x00000008U)
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_WURX1__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 3) & ~0x00000008U)))
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_WURX1__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((uint32_t)(1) << 3)
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_WURX1__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((uint32_t)(0) << 3)
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_WURX1__RESET_VALUE         0x00000000U
/** @} */

/* macros for field watch_qdec */
/**
 * @defgroup at_apb_pseq_regs_core_watch_qdec_field watch_qdec_field
 * @brief macros for field watch_qdec
 * @details valid to wake on qdec activity
 * @{
 */
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_QDEC__SHIFT                          4
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_QDEC__WIDTH                          1
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_QDEC__MASK                 0x00000010U
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_QDEC__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000010U) >> 4)
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_QDEC__WRITE(src) \
                    (((uint32_t)(src)\
                    << 4) & 0x00000010U)
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_QDEC__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | (((uint32_t)(src) <<\
                    4) & 0x00000010U)
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_QDEC__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 4) & ~0x00000010U)))
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_QDEC__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(1) << 4)
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_QDEC__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(0) << 4)
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_QDEC__RESET_VALUE          0x00000000U
/** @} */

/* macros for field watch_ksm */
/**
 * @defgroup at_apb_pseq_regs_core_watch_ksm_field watch_ksm_field
 * @brief macros for field watch_ksm
 * @details valid to wake on keyboard activity
 * @{
 */
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_KSM__SHIFT                           5
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_KSM__WIDTH                           1
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_KSM__MASK                  0x00000020U
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_KSM__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000020U) >> 5)
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_KSM__WRITE(src) \
                    (((uint32_t)(src)\
                    << 5) & 0x00000020U)
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_KSM__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | (((uint32_t)(src) <<\
                    5) & 0x00000020U)
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_KSM__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 5) & ~0x00000020U)))
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_KSM__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | ((uint32_t)(1) << 5)
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_KSM__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | ((uint32_t)(0) << 5)
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_KSM__RESET_VALUE           0x00000000U
/** @} */

/* macros for field watch_shub */
/**
 * @defgroup at_apb_pseq_regs_core_watch_shub_field watch_shub_field
 * @brief macros for field watch_shub
 * @details valid to wake on sensor hub trigger
 * @{
 */
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_SHUB__SHIFT                          6
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_SHUB__WIDTH                          1
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_SHUB__MASK                 0x00000040U
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_SHUB__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000040U) >> 6)
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_SHUB__WRITE(src) \
                    (((uint32_t)(src)\
                    << 6) & 0x00000040U)
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_SHUB__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000040U) | (((uint32_t)(src) <<\
                    6) & 0x00000040U)
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_SHUB__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 6) & ~0x00000040U)))
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_SHUB__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000040U) | ((uint32_t)(1) << 6)
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_SHUB__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000040U) | ((uint32_t)(0) << 6)
#define PSEQ_RETAIN_ALL_WAKE_MASK__WATCH_SHUB__RESET_VALUE          0x00000000U
/** @} */
#define PSEQ_RETAIN_ALL_WAKE_MASK__TYPE                                uint32_t
#define PSEQ_RETAIN_ALL_WAKE_MASK__READ                             0x0000007fU
#define PSEQ_RETAIN_ALL_WAKE_MASK__WRITE                            0x0000007fU
#define PSEQ_RETAIN_ALL_WAKE_MASK__PRESERVED                        0x00000000U
#define PSEQ_RETAIN_ALL_WAKE_MASK__RESET_VALUE                      0x00000000U

#endif /* __PSEQ_RETAIN_ALL_WAKE_MASK_MACRO__ */

/** @} end of retain_all_wake_mask */

/* macros for BlueprintGlobalNameSpace::PSEQ_hib_wake_mask */
/**
 * @defgroup at_apb_pseq_regs_core_hib_wake_mask hib_wake_mask
 * @brief signals to select which events can generate a wake event while in Hiberbate definitions.
 * @{
 */
#ifndef __PSEQ_HIB_WAKE_MASK_MACRO__
#define __PSEQ_HIB_WAKE_MASK_MACRO__

/* macros for field watch_gpio */
/**
 * @defgroup at_apb_pseq_regs_core_watch_gpio_field watch_gpio_field
 * @brief macros for field watch_gpio
 * @details valid to wake on gpio activity
 * @{
 */
#define PSEQ_HIB_WAKE_MASK__WATCH_GPIO__SHIFT                                 0
#define PSEQ_HIB_WAKE_MASK__WATCH_GPIO__WIDTH                                 1
#define PSEQ_HIB_WAKE_MASK__WATCH_GPIO__MASK                        0x00000001U
#define PSEQ_HIB_WAKE_MASK__WATCH_GPIO__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define PSEQ_HIB_WAKE_MASK__WATCH_GPIO__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define PSEQ_HIB_WAKE_MASK__WATCH_GPIO__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define PSEQ_HIB_WAKE_MASK__WATCH_GPIO__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define PSEQ_HIB_WAKE_MASK__WATCH_GPIO__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define PSEQ_HIB_WAKE_MASK__WATCH_GPIO__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define PSEQ_HIB_WAKE_MASK__WATCH_GPIO__RESET_VALUE                 0x00000000U
/** @} */

/* macros for field watch_cntdown */
/**
 * @defgroup at_apb_pseq_regs_core_watch_cntdown_field watch_cntdown_field
 * @brief macros for field watch_cntdown
 * @details valid to wake on count down timer expiring
 * @{
 */
#define PSEQ_HIB_WAKE_MASK__WATCH_CNTDOWN__SHIFT                              1
#define PSEQ_HIB_WAKE_MASK__WATCH_CNTDOWN__WIDTH                              1
#define PSEQ_HIB_WAKE_MASK__WATCH_CNTDOWN__MASK                     0x00000002U
#define PSEQ_HIB_WAKE_MASK__WATCH_CNTDOWN__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define PSEQ_HIB_WAKE_MASK__WATCH_CNTDOWN__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define PSEQ_HIB_WAKE_MASK__WATCH_CNTDOWN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define PSEQ_HIB_WAKE_MASK__WATCH_CNTDOWN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define PSEQ_HIB_WAKE_MASK__WATCH_CNTDOWN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define PSEQ_HIB_WAKE_MASK__WATCH_CNTDOWN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define PSEQ_HIB_WAKE_MASK__WATCH_CNTDOWN__RESET_VALUE              0x00000000U
/** @} */

/* macros for field watch_wurx0 */
/**
 * @defgroup at_apb_pseq_regs_core_watch_wurx0_field watch_wurx0_field
 * @brief macros for field watch_wurx0
 * @details valid to wake on wurx0 detect
 * @{
 */
#define PSEQ_HIB_WAKE_MASK__WATCH_WURX0__SHIFT                                2
#define PSEQ_HIB_WAKE_MASK__WATCH_WURX0__WIDTH                                1
#define PSEQ_HIB_WAKE_MASK__WATCH_WURX0__MASK                       0x00000004U
#define PSEQ_HIB_WAKE_MASK__WATCH_WURX0__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000004U) >> 2)
#define PSEQ_HIB_WAKE_MASK__WATCH_WURX0__WRITE(src) \
                    (((uint32_t)(src)\
                    << 2) & 0x00000004U)
#define PSEQ_HIB_WAKE_MASK__WATCH_WURX0__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | (((uint32_t)(src) <<\
                    2) & 0x00000004U)
#define PSEQ_HIB_WAKE_MASK__WATCH_WURX0__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 2) & ~0x00000004U)))
#define PSEQ_HIB_WAKE_MASK__WATCH_WURX0__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(1) << 2)
#define PSEQ_HIB_WAKE_MASK__WATCH_WURX0__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(0) << 2)
#define PSEQ_HIB_WAKE_MASK__WATCH_WURX0__RESET_VALUE                0x00000000U
/** @} */

/* macros for field watch_wurx1 */
/**
 * @defgroup at_apb_pseq_regs_core_watch_wurx1_field watch_wurx1_field
 * @brief macros for field watch_wurx1
 * @details valid to wake on wurx1 detect
 * @{
 */
#define PSEQ_HIB_WAKE_MASK__WATCH_WURX1__SHIFT                                3
#define PSEQ_HIB_WAKE_MASK__WATCH_WURX1__WIDTH                                1
#define PSEQ_HIB_WAKE_MASK__WATCH_WURX1__MASK                       0x00000008U
#define PSEQ_HIB_WAKE_MASK__WATCH_WURX1__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000008U) >> 3)
#define PSEQ_HIB_WAKE_MASK__WATCH_WURX1__WRITE(src) \
                    (((uint32_t)(src)\
                    << 3) & 0x00000008U)
#define PSEQ_HIB_WAKE_MASK__WATCH_WURX1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | (((uint32_t)(src) <<\
                    3) & 0x00000008U)
#define PSEQ_HIB_WAKE_MASK__WATCH_WURX1__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 3) & ~0x00000008U)))
#define PSEQ_HIB_WAKE_MASK__WATCH_WURX1__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((uint32_t)(1) << 3)
#define PSEQ_HIB_WAKE_MASK__WATCH_WURX1__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((uint32_t)(0) << 3)
#define PSEQ_HIB_WAKE_MASK__WATCH_WURX1__RESET_VALUE                0x00000000U
/** @} */

/* macros for field watch_qdec */
/**
 * @defgroup at_apb_pseq_regs_core_watch_qdec_field watch_qdec_field
 * @brief macros for field watch_qdec
 * @details valid to wake on qdec activity
 * @{
 */
#define PSEQ_HIB_WAKE_MASK__WATCH_QDEC__SHIFT                                 4
#define PSEQ_HIB_WAKE_MASK__WATCH_QDEC__WIDTH                                 1
#define PSEQ_HIB_WAKE_MASK__WATCH_QDEC__MASK                        0x00000010U
#define PSEQ_HIB_WAKE_MASK__WATCH_QDEC__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000010U) >> 4)
#define PSEQ_HIB_WAKE_MASK__WATCH_QDEC__WRITE(src) \
                    (((uint32_t)(src)\
                    << 4) & 0x00000010U)
#define PSEQ_HIB_WAKE_MASK__WATCH_QDEC__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | (((uint32_t)(src) <<\
                    4) & 0x00000010U)
#define PSEQ_HIB_WAKE_MASK__WATCH_QDEC__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 4) & ~0x00000010U)))
#define PSEQ_HIB_WAKE_MASK__WATCH_QDEC__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(1) << 4)
#define PSEQ_HIB_WAKE_MASK__WATCH_QDEC__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(0) << 4)
#define PSEQ_HIB_WAKE_MASK__WATCH_QDEC__RESET_VALUE                 0x00000000U
/** @} */

/* macros for field watch_ksm */
/**
 * @defgroup at_apb_pseq_regs_core_watch_ksm_field watch_ksm_field
 * @brief macros for field watch_ksm
 * @details valid to wake on keyboard activity
 * @{
 */
#define PSEQ_HIB_WAKE_MASK__WATCH_KSM__SHIFT                                  5
#define PSEQ_HIB_WAKE_MASK__WATCH_KSM__WIDTH                                  1
#define PSEQ_HIB_WAKE_MASK__WATCH_KSM__MASK                         0x00000020U
#define PSEQ_HIB_WAKE_MASK__WATCH_KSM__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000020U) >> 5)
#define PSEQ_HIB_WAKE_MASK__WATCH_KSM__WRITE(src) \
                    (((uint32_t)(src)\
                    << 5) & 0x00000020U)
#define PSEQ_HIB_WAKE_MASK__WATCH_KSM__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | (((uint32_t)(src) <<\
                    5) & 0x00000020U)
#define PSEQ_HIB_WAKE_MASK__WATCH_KSM__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 5) & ~0x00000020U)))
#define PSEQ_HIB_WAKE_MASK__WATCH_KSM__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | ((uint32_t)(1) << 5)
#define PSEQ_HIB_WAKE_MASK__WATCH_KSM__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | ((uint32_t)(0) << 5)
#define PSEQ_HIB_WAKE_MASK__WATCH_KSM__RESET_VALUE                  0x00000000U
/** @} */

/* macros for field watch_shub */
/**
 * @defgroup at_apb_pseq_regs_core_watch_shub_field watch_shub_field
 * @brief macros for field watch_shub
 * @details valid to wake on sensor hub trigger
 * @{
 */
#define PSEQ_HIB_WAKE_MASK__WATCH_SHUB__SHIFT                                 6
#define PSEQ_HIB_WAKE_MASK__WATCH_SHUB__WIDTH                                 1
#define PSEQ_HIB_WAKE_MASK__WATCH_SHUB__MASK                        0x00000040U
#define PSEQ_HIB_WAKE_MASK__WATCH_SHUB__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000040U) >> 6)
#define PSEQ_HIB_WAKE_MASK__WATCH_SHUB__WRITE(src) \
                    (((uint32_t)(src)\
                    << 6) & 0x00000040U)
#define PSEQ_HIB_WAKE_MASK__WATCH_SHUB__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000040U) | (((uint32_t)(src) <<\
                    6) & 0x00000040U)
#define PSEQ_HIB_WAKE_MASK__WATCH_SHUB__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 6) & ~0x00000040U)))
#define PSEQ_HIB_WAKE_MASK__WATCH_SHUB__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000040U) | ((uint32_t)(1) << 6)
#define PSEQ_HIB_WAKE_MASK__WATCH_SHUB__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000040U) | ((uint32_t)(0) << 6)
#define PSEQ_HIB_WAKE_MASK__WATCH_SHUB__RESET_VALUE                 0x00000000U
/** @} */
#define PSEQ_HIB_WAKE_MASK__TYPE                                       uint32_t
#define PSEQ_HIB_WAKE_MASK__READ                                    0x0000007fU
#define PSEQ_HIB_WAKE_MASK__WRITE                                   0x0000007fU
#define PSEQ_HIB_WAKE_MASK__PRESERVED                               0x00000000U
#define PSEQ_HIB_WAKE_MASK__RESET_VALUE                             0x00000000U

#endif /* __PSEQ_HIB_WAKE_MASK_MACRO__ */

/** @} end of hib_wake_mask */

/* macros for BlueprintGlobalNameSpace::PSEQ_ble_ret_to_ble_act_wake_mask */
/**
 * @defgroup at_apb_pseq_regs_core_ble_ret_to_ble_act_wake_mask ble_ret_to_ble_act_wake_mask
 * @brief signals to select which events can generate a wake event while in BLE Retain and go to BLE Act definitions.
 * @{
 */
#ifndef __PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK_MACRO__
#define __PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK_MACRO__

/* macros for field watch_gpio */
/**
 * @defgroup at_apb_pseq_regs_core_watch_gpio_field watch_gpio_field
 * @brief macros for field watch_gpio
 * @details valid to wake on gpio activity
 * @{
 */
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_GPIO__SHIFT                  0
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_GPIO__WIDTH                  1
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_GPIO__MASK         0x00000001U
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_GPIO__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_GPIO__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_GPIO__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_GPIO__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_GPIO__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_GPIO__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_GPIO__RESET_VALUE  0x00000000U
/** @} */

/* macros for field watch_cntdown */
/**
 * @defgroup at_apb_pseq_regs_core_watch_cntdown_field watch_cntdown_field
 * @brief macros for field watch_cntdown
 * @details valid to wake on count down timer expiring
 * @{
 */
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_CNTDOWN__SHIFT               1
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_CNTDOWN__WIDTH               1
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_CNTDOWN__MASK      0x00000002U
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_CNTDOWN__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_CNTDOWN__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_CNTDOWN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_CNTDOWN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_CNTDOWN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_CNTDOWN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_CNTDOWN__RESET_VALUE \
                    0x00000000U
/** @} */

/* macros for field watch_wurx0 */
/**
 * @defgroup at_apb_pseq_regs_core_watch_wurx0_field watch_wurx0_field
 * @brief macros for field watch_wurx0
 * @details valid to wake on wurx0 detect
 * @{
 */
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_WURX0__SHIFT                 2
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_WURX0__WIDTH                 1
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_WURX0__MASK        0x00000004U
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_WURX0__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000004U) >> 2)
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_WURX0__WRITE(src) \
                    (((uint32_t)(src)\
                    << 2) & 0x00000004U)
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_WURX0__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | (((uint32_t)(src) <<\
                    2) & 0x00000004U)
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_WURX0__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 2) & ~0x00000004U)))
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_WURX0__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(1) << 2)
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_WURX0__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(0) << 2)
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_WURX0__RESET_VALUE 0x00000000U
/** @} */

/* macros for field watch_wurx1 */
/**
 * @defgroup at_apb_pseq_regs_core_watch_wurx1_field watch_wurx1_field
 * @brief macros for field watch_wurx1
 * @details valid to wake on wurx1 detect
 * @{
 */
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_WURX1__SHIFT                 3
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_WURX1__WIDTH                 1
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_WURX1__MASK        0x00000008U
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_WURX1__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000008U) >> 3)
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_WURX1__WRITE(src) \
                    (((uint32_t)(src)\
                    << 3) & 0x00000008U)
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_WURX1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | (((uint32_t)(src) <<\
                    3) & 0x00000008U)
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_WURX1__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 3) & ~0x00000008U)))
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_WURX1__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((uint32_t)(1) << 3)
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_WURX1__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((uint32_t)(0) << 3)
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_WURX1__RESET_VALUE 0x00000000U
/** @} */

/* macros for field watch_qdec */
/**
 * @defgroup at_apb_pseq_regs_core_watch_qdec_field watch_qdec_field
 * @brief macros for field watch_qdec
 * @details valid to wake on qdec activity
 * @{
 */
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_QDEC__SHIFT                  4
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_QDEC__WIDTH                  1
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_QDEC__MASK         0x00000010U
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_QDEC__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000010U) >> 4)
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_QDEC__WRITE(src) \
                    (((uint32_t)(src)\
                    << 4) & 0x00000010U)
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_QDEC__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | (((uint32_t)(src) <<\
                    4) & 0x00000010U)
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_QDEC__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 4) & ~0x00000010U)))
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_QDEC__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(1) << 4)
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_QDEC__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(0) << 4)
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_QDEC__RESET_VALUE  0x00000000U
/** @} */

/* macros for field watch_ksm */
/**
 * @defgroup at_apb_pseq_regs_core_watch_ksm_field watch_ksm_field
 * @brief macros for field watch_ksm
 * @details valid to wake on keyboard activity
 * @{
 */
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_KSM__SHIFT                   5
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_KSM__WIDTH                   1
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_KSM__MASK          0x00000020U
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_KSM__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000020U) >> 5)
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_KSM__WRITE(src) \
                    (((uint32_t)(src)\
                    << 5) & 0x00000020U)
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_KSM__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | (((uint32_t)(src) <<\
                    5) & 0x00000020U)
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_KSM__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 5) & ~0x00000020U)))
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_KSM__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | ((uint32_t)(1) << 5)
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_KSM__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | ((uint32_t)(0) << 5)
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_KSM__RESET_VALUE   0x00000000U
/** @} */

/* macros for field watch_shub */
/**
 * @defgroup at_apb_pseq_regs_core_watch_shub_field watch_shub_field
 * @brief macros for field watch_shub
 * @details valid to wake on sensor hub trigger
 * @{
 */
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_SHUB__SHIFT                  6
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_SHUB__WIDTH                  1
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_SHUB__MASK         0x00000040U
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_SHUB__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000040U) >> 6)
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_SHUB__WRITE(src) \
                    (((uint32_t)(src)\
                    << 6) & 0x00000040U)
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_SHUB__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000040U) | (((uint32_t)(src) <<\
                    6) & 0x00000040U)
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_SHUB__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 6) & ~0x00000040U)))
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_SHUB__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000040U) | ((uint32_t)(1) << 6)
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_SHUB__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000040U) | ((uint32_t)(0) << 6)
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WATCH_SHUB__RESET_VALUE  0x00000000U
/** @} */
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__TYPE                        uint32_t
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__READ                     0x0000007fU
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__WRITE                    0x0000007fU
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__PRESERVED                0x00000000U
#define PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK__RESET_VALUE              0x00000000U

#endif /* __PSEQ_BLE_RET_TO_BLE_ACT_WAKE_MASK_MACRO__ */

/** @} end of ble_ret_to_ble_act_wake_mask */

/* macros for BlueprintGlobalNameSpace::PSEQ_ble_ret_to_cpu_act_wake_mask */
/**
 * @defgroup at_apb_pseq_regs_core_ble_ret_to_cpu_act_wake_mask ble_ret_to_cpu_act_wake_mask
 * @brief signals to select which events can generate a wake event while in BLE Retain and go to CPU Act definitions.
 * @{
 */
#ifndef __PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK_MACRO__
#define __PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK_MACRO__

/* macros for field watch_gpio */
/**
 * @defgroup at_apb_pseq_regs_core_watch_gpio_field watch_gpio_field
 * @brief macros for field watch_gpio
 * @details valid to wake on gpio activity
 * @{
 */
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_GPIO__SHIFT                  0
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_GPIO__WIDTH                  1
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_GPIO__MASK         0x00000001U
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_GPIO__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_GPIO__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_GPIO__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_GPIO__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_GPIO__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_GPIO__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_GPIO__RESET_VALUE  0x00000000U
/** @} */

/* macros for field watch_cntdown */
/**
 * @defgroup at_apb_pseq_regs_core_watch_cntdown_field watch_cntdown_field
 * @brief macros for field watch_cntdown
 * @details valid to wake on count down timer expiring
 * @{
 */
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_CNTDOWN__SHIFT               1
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_CNTDOWN__WIDTH               1
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_CNTDOWN__MASK      0x00000002U
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_CNTDOWN__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_CNTDOWN__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_CNTDOWN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_CNTDOWN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_CNTDOWN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_CNTDOWN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_CNTDOWN__RESET_VALUE \
                    0x00000000U
/** @} */

/* macros for field watch_wurx0 */
/**
 * @defgroup at_apb_pseq_regs_core_watch_wurx0_field watch_wurx0_field
 * @brief macros for field watch_wurx0
 * @details valid to wake on wurx0 detect
 * @{
 */
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_WURX0__SHIFT                 2
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_WURX0__WIDTH                 1
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_WURX0__MASK        0x00000004U
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_WURX0__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000004U) >> 2)
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_WURX0__WRITE(src) \
                    (((uint32_t)(src)\
                    << 2) & 0x00000004U)
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_WURX0__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | (((uint32_t)(src) <<\
                    2) & 0x00000004U)
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_WURX0__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 2) & ~0x00000004U)))
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_WURX0__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(1) << 2)
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_WURX0__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(0) << 2)
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_WURX0__RESET_VALUE 0x00000000U
/** @} */

/* macros for field watch_wurx1 */
/**
 * @defgroup at_apb_pseq_regs_core_watch_wurx1_field watch_wurx1_field
 * @brief macros for field watch_wurx1
 * @details valid to wake on wurx1 detect
 * @{
 */
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_WURX1__SHIFT                 3
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_WURX1__WIDTH                 1
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_WURX1__MASK        0x00000008U
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_WURX1__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000008U) >> 3)
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_WURX1__WRITE(src) \
                    (((uint32_t)(src)\
                    << 3) & 0x00000008U)
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_WURX1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | (((uint32_t)(src) <<\
                    3) & 0x00000008U)
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_WURX1__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 3) & ~0x00000008U)))
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_WURX1__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((uint32_t)(1) << 3)
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_WURX1__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((uint32_t)(0) << 3)
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_WURX1__RESET_VALUE 0x00000000U
/** @} */

/* macros for field watch_qdec */
/**
 * @defgroup at_apb_pseq_regs_core_watch_qdec_field watch_qdec_field
 * @brief macros for field watch_qdec
 * @details valid to wake on qdec activity
 * @{
 */
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_QDEC__SHIFT                  4
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_QDEC__WIDTH                  1
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_QDEC__MASK         0x00000010U
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_QDEC__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000010U) >> 4)
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_QDEC__WRITE(src) \
                    (((uint32_t)(src)\
                    << 4) & 0x00000010U)
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_QDEC__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | (((uint32_t)(src) <<\
                    4) & 0x00000010U)
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_QDEC__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 4) & ~0x00000010U)))
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_QDEC__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(1) << 4)
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_QDEC__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(0) << 4)
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_QDEC__RESET_VALUE  0x00000000U
/** @} */

/* macros for field watch_ksm */
/**
 * @defgroup at_apb_pseq_regs_core_watch_ksm_field watch_ksm_field
 * @brief macros for field watch_ksm
 * @details valid to wake on keyboard activity
 * @{
 */
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_KSM__SHIFT                   5
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_KSM__WIDTH                   1
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_KSM__MASK          0x00000020U
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_KSM__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000020U) >> 5)
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_KSM__WRITE(src) \
                    (((uint32_t)(src)\
                    << 5) & 0x00000020U)
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_KSM__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | (((uint32_t)(src) <<\
                    5) & 0x00000020U)
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_KSM__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 5) & ~0x00000020U)))
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_KSM__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | ((uint32_t)(1) << 5)
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_KSM__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | ((uint32_t)(0) << 5)
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_KSM__RESET_VALUE   0x00000000U
/** @} */

/* macros for field watch_shub */
/**
 * @defgroup at_apb_pseq_regs_core_watch_shub_field watch_shub_field
 * @brief macros for field watch_shub
 * @details valid to wake on sensor hub trigger
 * @{
 */
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_SHUB__SHIFT                  6
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_SHUB__WIDTH                  1
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_SHUB__MASK         0x00000040U
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_SHUB__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000040U) >> 6)
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_SHUB__WRITE(src) \
                    (((uint32_t)(src)\
                    << 6) & 0x00000040U)
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_SHUB__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000040U) | (((uint32_t)(src) <<\
                    6) & 0x00000040U)
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_SHUB__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 6) & ~0x00000040U)))
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_SHUB__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000040U) | ((uint32_t)(1) << 6)
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_SHUB__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000040U) | ((uint32_t)(0) << 6)
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WATCH_SHUB__RESET_VALUE  0x00000000U
/** @} */
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__TYPE                        uint32_t
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__READ                     0x0000007fU
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__WRITE                    0x0000007fU
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__PRESERVED                0x00000000U
#define PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK__RESET_VALUE              0x00000000U

#endif /* __PSEQ_BLE_RET_TO_CPU_ACT_WAKE_MASK_MACRO__ */

/** @} end of ble_ret_to_cpu_act_wake_mask */

/* macros for BlueprintGlobalNameSpace::PSEQ_gpio_wake_mask */
/**
 * @defgroup at_apb_pseq_regs_core_gpio_wake_mask gpio_wake_mask
 * @brief mask function to specify which gpio's can generate a gpio event definitions.
 * @{
 */
#ifndef __PSEQ_GPIO_WAKE_MASK_MACRO__
#define __PSEQ_GPIO_WAKE_MASK_MACRO__

/* macros for field lower */
/**
 * @defgroup at_apb_pseq_regs_core_lower_field lower_field
 * @brief macros for field lower
 * @details lower 16 gpio's
 * @{
 */
#define PSEQ_GPIO_WAKE_MASK__LOWER__SHIFT                                     0
#define PSEQ_GPIO_WAKE_MASK__LOWER__WIDTH                                    16
#define PSEQ_GPIO_WAKE_MASK__LOWER__MASK                            0x0000ffffU
#define PSEQ_GPIO_WAKE_MASK__LOWER__READ(src)   ((uint32_t)(src) & 0x0000ffffU)
#define PSEQ_GPIO_WAKE_MASK__LOWER__WRITE(src)  ((uint32_t)(src) & 0x0000ffffU)
#define PSEQ_GPIO_WAKE_MASK__LOWER__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ffffU) | ((uint32_t)(src) &\
                    0x0000ffffU)
#define PSEQ_GPIO_WAKE_MASK__LOWER__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x0000ffffU)))
#define PSEQ_GPIO_WAKE_MASK__LOWER__RESET_VALUE                     0x00000000U
/** @} */

/* macros for field upper */
/**
 * @defgroup at_apb_pseq_regs_core_upper_field upper_field
 * @brief macros for field upper
 * @details upper 16 gpio's
 * @{
 */
#define PSEQ_GPIO_WAKE_MASK__UPPER__SHIFT                                    16
#define PSEQ_GPIO_WAKE_MASK__UPPER__WIDTH                                    16
#define PSEQ_GPIO_WAKE_MASK__UPPER__MASK                            0xffff0000U
#define PSEQ_GPIO_WAKE_MASK__UPPER__READ(src) \
                    (((uint32_t)(src)\
                    & 0xffff0000U) >> 16)
#define PSEQ_GPIO_WAKE_MASK__UPPER__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0xffff0000U)
#define PSEQ_GPIO_WAKE_MASK__UPPER__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffff0000U) | (((uint32_t)(src) <<\
                    16) & 0xffff0000U)
#define PSEQ_GPIO_WAKE_MASK__UPPER__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0xffff0000U)))
#define PSEQ_GPIO_WAKE_MASK__UPPER__RESET_VALUE                     0x00000000U
/** @} */
#define PSEQ_GPIO_WAKE_MASK__TYPE                                      uint32_t
#define PSEQ_GPIO_WAKE_MASK__READ                                   0xffffffffU
#define PSEQ_GPIO_WAKE_MASK__WRITE                                  0xffffffffU
#define PSEQ_GPIO_WAKE_MASK__PRESERVED                              0x00000000U
#define PSEQ_GPIO_WAKE_MASK__RESET_VALUE                            0x00000000U

#endif /* __PSEQ_GPIO_WAKE_MASK_MACRO__ */

/** @} end of gpio_wake_mask */

/* macros for BlueprintGlobalNameSpace::PSEQ_gpio_wake_type */
/**
 * @defgroup at_apb_pseq_regs_core_gpio_wake_type gpio_wake_type
 * @brief specifies how a gpio generates an event definitions.
 * @{
 */
#ifndef __PSEQ_GPIO_WAKE_TYPE_MACRO__
#define __PSEQ_GPIO_WAKE_TYPE_MACRO__

/* macros for field lower */
/**
 * @defgroup at_apb_pseq_regs_core_lower_field lower_field
 * @brief macros for field lower
 * @details (per bit) 1 = edge sensitive , 0 = level
 * @{
 */
#define PSEQ_GPIO_WAKE_TYPE__LOWER__SHIFT                                     0
#define PSEQ_GPIO_WAKE_TYPE__LOWER__WIDTH                                    16
#define PSEQ_GPIO_WAKE_TYPE__LOWER__MASK                            0x0000ffffU
#define PSEQ_GPIO_WAKE_TYPE__LOWER__READ(src)   ((uint32_t)(src) & 0x0000ffffU)
#define PSEQ_GPIO_WAKE_TYPE__LOWER__WRITE(src)  ((uint32_t)(src) & 0x0000ffffU)
#define PSEQ_GPIO_WAKE_TYPE__LOWER__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ffffU) | ((uint32_t)(src) &\
                    0x0000ffffU)
#define PSEQ_GPIO_WAKE_TYPE__LOWER__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x0000ffffU)))
#define PSEQ_GPIO_WAKE_TYPE__LOWER__RESET_VALUE                     0x00000000U
/** @} */

/* macros for field upper */
/**
 * @defgroup at_apb_pseq_regs_core_upper_field upper_field
 * @brief macros for field upper
 * @details (per bit) 1 = edge sensitive , 0 = level
 * @{
 */
#define PSEQ_GPIO_WAKE_TYPE__UPPER__SHIFT                                    16
#define PSEQ_GPIO_WAKE_TYPE__UPPER__WIDTH                                    16
#define PSEQ_GPIO_WAKE_TYPE__UPPER__MASK                            0xffff0000U
#define PSEQ_GPIO_WAKE_TYPE__UPPER__READ(src) \
                    (((uint32_t)(src)\
                    & 0xffff0000U) >> 16)
#define PSEQ_GPIO_WAKE_TYPE__UPPER__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0xffff0000U)
#define PSEQ_GPIO_WAKE_TYPE__UPPER__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffff0000U) | (((uint32_t)(src) <<\
                    16) & 0xffff0000U)
#define PSEQ_GPIO_WAKE_TYPE__UPPER__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0xffff0000U)))
#define PSEQ_GPIO_WAKE_TYPE__UPPER__RESET_VALUE                     0x00000000U
/** @} */
#define PSEQ_GPIO_WAKE_TYPE__TYPE                                      uint32_t
#define PSEQ_GPIO_WAKE_TYPE__READ                                   0xffffffffU
#define PSEQ_GPIO_WAKE_TYPE__WRITE                                  0xffffffffU
#define PSEQ_GPIO_WAKE_TYPE__PRESERVED                              0x00000000U
#define PSEQ_GPIO_WAKE_TYPE__RESET_VALUE                            0x00000000U

#endif /* __PSEQ_GPIO_WAKE_TYPE_MACRO__ */

/** @} end of gpio_wake_type */

/* macros for BlueprintGlobalNameSpace::PSEQ_gpio_wake_pol */
/**
 * @defgroup at_apb_pseq_regs_core_gpio_wake_pol gpio_wake_pol
 * @brief specifies how a gpio generates an event definitions.
 * @{
 */
#ifndef __PSEQ_GPIO_WAKE_POL_MACRO__
#define __PSEQ_GPIO_WAKE_POL_MACRO__

/* macros for field lower */
/**
 * @defgroup at_apb_pseq_regs_core_lower_field lower_field
 * @brief macros for field lower
 * @details (per bit) 1 = level high/rising edge , 0 = level low/falling edge
 * @{
 */
#define PSEQ_GPIO_WAKE_POL__LOWER__SHIFT                                      0
#define PSEQ_GPIO_WAKE_POL__LOWER__WIDTH                                     16
#define PSEQ_GPIO_WAKE_POL__LOWER__MASK                             0x0000ffffU
#define PSEQ_GPIO_WAKE_POL__LOWER__READ(src)    ((uint32_t)(src) & 0x0000ffffU)
#define PSEQ_GPIO_WAKE_POL__LOWER__WRITE(src)   ((uint32_t)(src) & 0x0000ffffU)
#define PSEQ_GPIO_WAKE_POL__LOWER__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ffffU) | ((uint32_t)(src) &\
                    0x0000ffffU)
#define PSEQ_GPIO_WAKE_POL__LOWER__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x0000ffffU)))
#define PSEQ_GPIO_WAKE_POL__LOWER__RESET_VALUE                      0x0000ffffU
/** @} */

/* macros for field upper */
/**
 * @defgroup at_apb_pseq_regs_core_upper_field upper_field
 * @brief macros for field upper
 * @details (per bit) 1 = level high/rising edge , 0 = level low/falling edge
 * @{
 */
#define PSEQ_GPIO_WAKE_POL__UPPER__SHIFT                                     16
#define PSEQ_GPIO_WAKE_POL__UPPER__WIDTH                                     16
#define PSEQ_GPIO_WAKE_POL__UPPER__MASK                             0xffff0000U
#define PSEQ_GPIO_WAKE_POL__UPPER__READ(src) \
                    (((uint32_t)(src)\
                    & 0xffff0000U) >> 16)
#define PSEQ_GPIO_WAKE_POL__UPPER__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0xffff0000U)
#define PSEQ_GPIO_WAKE_POL__UPPER__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffff0000U) | (((uint32_t)(src) <<\
                    16) & 0xffff0000U)
#define PSEQ_GPIO_WAKE_POL__UPPER__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0xffff0000U)))
#define PSEQ_GPIO_WAKE_POL__UPPER__RESET_VALUE                      0x0000ffffU
/** @} */
#define PSEQ_GPIO_WAKE_POL__TYPE                                       uint32_t
#define PSEQ_GPIO_WAKE_POL__READ                                    0xffffffffU
#define PSEQ_GPIO_WAKE_POL__WRITE                                   0xffffffffU
#define PSEQ_GPIO_WAKE_POL__PRESERVED                               0x00000000U
#define PSEQ_GPIO_WAKE_POL__RESET_VALUE                             0xffffffffU

#endif /* __PSEQ_GPIO_WAKE_POL_MACRO__ */

/** @} end of gpio_wake_pol */

/* macros for BlueprintGlobalNameSpace::PSEQ_gpio_wake_both_edges */
/**
 * @defgroup at_apb_pseq_regs_core_gpio_wake_both_edges gpio_wake_both_edges
 * @brief specifies how a gpio generates an event definitions.
 * @{
 */
#ifndef __PSEQ_GPIO_WAKE_BOTH_EDGES_MACRO__
#define __PSEQ_GPIO_WAKE_BOTH_EDGES_MACRO__

/* macros for field lower */
/**
 * @defgroup at_apb_pseq_regs_core_lower_field lower_field
 * @brief macros for field lower
 * @details (per bit) 1 = either edge will wake; higher precedence than gpio_wake_type and gpio_wake_pol
 * @{
 */
#define PSEQ_GPIO_WAKE_BOTH_EDGES__LOWER__SHIFT                               0
#define PSEQ_GPIO_WAKE_BOTH_EDGES__LOWER__WIDTH                              16
#define PSEQ_GPIO_WAKE_BOTH_EDGES__LOWER__MASK                      0x0000ffffU
#define PSEQ_GPIO_WAKE_BOTH_EDGES__LOWER__READ(src) \
                    ((uint32_t)(src)\
                    & 0x0000ffffU)
#define PSEQ_GPIO_WAKE_BOTH_EDGES__LOWER__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x0000ffffU)
#define PSEQ_GPIO_WAKE_BOTH_EDGES__LOWER__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ffffU) | ((uint32_t)(src) &\
                    0x0000ffffU)
#define PSEQ_GPIO_WAKE_BOTH_EDGES__LOWER__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x0000ffffU)))
#define PSEQ_GPIO_WAKE_BOTH_EDGES__LOWER__RESET_VALUE               0x00000000U
/** @} */

/* macros for field upper */
/**
 * @defgroup at_apb_pseq_regs_core_upper_field upper_field
 * @brief macros for field upper
 * @details (per bit) 1 = either edge will wake; higher precedence than gpio_wake_type and gpio_wake_pol
 * @{
 */
#define PSEQ_GPIO_WAKE_BOTH_EDGES__UPPER__SHIFT                              16
#define PSEQ_GPIO_WAKE_BOTH_EDGES__UPPER__WIDTH                              16
#define PSEQ_GPIO_WAKE_BOTH_EDGES__UPPER__MASK                      0xffff0000U
#define PSEQ_GPIO_WAKE_BOTH_EDGES__UPPER__READ(src) \
                    (((uint32_t)(src)\
                    & 0xffff0000U) >> 16)
#define PSEQ_GPIO_WAKE_BOTH_EDGES__UPPER__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0xffff0000U)
#define PSEQ_GPIO_WAKE_BOTH_EDGES__UPPER__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffff0000U) | (((uint32_t)(src) <<\
                    16) & 0xffff0000U)
#define PSEQ_GPIO_WAKE_BOTH_EDGES__UPPER__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0xffff0000U)))
#define PSEQ_GPIO_WAKE_BOTH_EDGES__UPPER__RESET_VALUE               0x00000000U
/** @} */
#define PSEQ_GPIO_WAKE_BOTH_EDGES__TYPE                                uint32_t
#define PSEQ_GPIO_WAKE_BOTH_EDGES__READ                             0xffffffffU
#define PSEQ_GPIO_WAKE_BOTH_EDGES__WRITE                            0xffffffffU
#define PSEQ_GPIO_WAKE_BOTH_EDGES__PRESERVED                        0x00000000U
#define PSEQ_GPIO_WAKE_BOTH_EDGES__RESET_VALUE                      0x00000000U

#endif /* __PSEQ_GPIO_WAKE_BOTH_EDGES_MACRO__ */

/** @} end of gpio_wake_both_edges */

/* macros for BlueprintGlobalNameSpace::PSEQ_wurx_config */
/**
 * @defgroup at_apb_pseq_regs_core_wurx_config wurx_config
 * @brief wurx configuration definitions.
 * @{
 */
#ifndef __PSEQ_WURX_CONFIG_MACRO__
#define __PSEQ_WURX_CONFIG_MACRO__

/* macros for field wurx_en */
/**
 * @defgroup at_apb_pseq_regs_core_wurx_en_field wurx_en_field
 * @brief macros for field wurx_en
 * @details if low, disables wurx datapath
 * @{
 */
#define PSEQ_WURX_CONFIG__WURX_EN__SHIFT                                      0
#define PSEQ_WURX_CONFIG__WURX_EN__WIDTH                                      1
#define PSEQ_WURX_CONFIG__WURX_EN__MASK                             0x00000001U
#define PSEQ_WURX_CONFIG__WURX_EN__READ(src)    ((uint32_t)(src) & 0x00000001U)
#define PSEQ_WURX_CONFIG__WURX_EN__WRITE(src)   ((uint32_t)(src) & 0x00000001U)
#define PSEQ_WURX_CONFIG__WURX_EN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define PSEQ_WURX_CONFIG__WURX_EN__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define PSEQ_WURX_CONFIG__WURX_EN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define PSEQ_WURX_CONFIG__WURX_EN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define PSEQ_WURX_CONFIG__WURX_EN__RESET_VALUE                      0x00000000U
/** @} */

/* macros for field wurx_rstb */
/**
 * @defgroup at_apb_pseq_regs_core_wurx_rstb_field wurx_rstb_field
 * @brief macros for field wurx_rstb
 * @details if low, holds wurx in reset
 * @{
 */
#define PSEQ_WURX_CONFIG__WURX_RSTB__SHIFT                                    1
#define PSEQ_WURX_CONFIG__WURX_RSTB__WIDTH                                    1
#define PSEQ_WURX_CONFIG__WURX_RSTB__MASK                           0x00000002U
#define PSEQ_WURX_CONFIG__WURX_RSTB__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define PSEQ_WURX_CONFIG__WURX_RSTB__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define PSEQ_WURX_CONFIG__WURX_RSTB__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define PSEQ_WURX_CONFIG__WURX_RSTB__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define PSEQ_WURX_CONFIG__WURX_RSTB__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define PSEQ_WURX_CONFIG__WURX_RSTB__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define PSEQ_WURX_CONFIG__WURX_RSTB__RESET_VALUE                    0x00000000U
/** @} */

/* macros for field wurx_cutvdd_b */
/**
 * @defgroup at_apb_pseq_regs_core_wurx_cutvdd_b_field wurx_cutvdd_b_field
 * @brief macros for field wurx_cutvdd_b
 * @details if low, removes power from wurx
 * @{
 */
#define PSEQ_WURX_CONFIG__WURX_CUTVDD_B__SHIFT                                2
#define PSEQ_WURX_CONFIG__WURX_CUTVDD_B__WIDTH                                1
#define PSEQ_WURX_CONFIG__WURX_CUTVDD_B__MASK                       0x00000004U
#define PSEQ_WURX_CONFIG__WURX_CUTVDD_B__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000004U) >> 2)
#define PSEQ_WURX_CONFIG__WURX_CUTVDD_B__WRITE(src) \
                    (((uint32_t)(src)\
                    << 2) & 0x00000004U)
#define PSEQ_WURX_CONFIG__WURX_CUTVDD_B__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | (((uint32_t)(src) <<\
                    2) & 0x00000004U)
#define PSEQ_WURX_CONFIG__WURX_CUTVDD_B__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 2) & ~0x00000004U)))
#define PSEQ_WURX_CONFIG__WURX_CUTVDD_B__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(1) << 2)
#define PSEQ_WURX_CONFIG__WURX_CUTVDD_B__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(0) << 2)
#define PSEQ_WURX_CONFIG__WURX_CUTVDD_B__RESET_VALUE                0x00000001U
/** @} */
#define PSEQ_WURX_CONFIG__TYPE                                         uint32_t
#define PSEQ_WURX_CONFIG__READ                                      0x00000007U
#define PSEQ_WURX_CONFIG__WRITE                                     0x00000007U
#define PSEQ_WURX_CONFIG__PRESERVED                                 0x00000000U
#define PSEQ_WURX_CONFIG__RESET_VALUE                               0x00000004U

#endif /* __PSEQ_WURX_CONFIG_MACRO__ */

/** @} end of wurx_config */

/* macros for BlueprintGlobalNameSpace::PSEQ_gadc_config */
/**
 * @defgroup at_apb_pseq_regs_core_gadc_config gadc_config
 * @brief gadc configuration definitions.
 * @{
 */
#ifndef __PSEQ_GADC_CONFIG_MACRO__
#define __PSEQ_GADC_CONFIG_MACRO__

/* macros for field gadc_en */
/**
 * @defgroup at_apb_pseq_regs_core_gadc_en_field gadc_en_field
 * @brief macros for field gadc_en
 * @details if low, disables gadc datapath
 * @{
 */
#define PSEQ_GADC_CONFIG__GADC_EN__SHIFT                                      0
#define PSEQ_GADC_CONFIG__GADC_EN__WIDTH                                      1
#define PSEQ_GADC_CONFIG__GADC_EN__MASK                             0x00000001U
#define PSEQ_GADC_CONFIG__GADC_EN__READ(src)    ((uint32_t)(src) & 0x00000001U)
#define PSEQ_GADC_CONFIG__GADC_EN__WRITE(src)   ((uint32_t)(src) & 0x00000001U)
#define PSEQ_GADC_CONFIG__GADC_EN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define PSEQ_GADC_CONFIG__GADC_EN__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define PSEQ_GADC_CONFIG__GADC_EN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define PSEQ_GADC_CONFIG__GADC_EN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define PSEQ_GADC_CONFIG__GADC_EN__RESET_VALUE                      0x00000000U
/** @} */

/* macros for field gadc_rstb */
/**
 * @defgroup at_apb_pseq_regs_core_gadc_rstb_field gadc_rstb_field
 * @brief macros for field gadc_rstb
 * @details if low, holds gadc in reset
 * @{
 */
#define PSEQ_GADC_CONFIG__GADC_RSTB__SHIFT                                    1
#define PSEQ_GADC_CONFIG__GADC_RSTB__WIDTH                                    1
#define PSEQ_GADC_CONFIG__GADC_RSTB__MASK                           0x00000002U
#define PSEQ_GADC_CONFIG__GADC_RSTB__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define PSEQ_GADC_CONFIG__GADC_RSTB__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define PSEQ_GADC_CONFIG__GADC_RSTB__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define PSEQ_GADC_CONFIG__GADC_RSTB__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define PSEQ_GADC_CONFIG__GADC_RSTB__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define PSEQ_GADC_CONFIG__GADC_RSTB__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define PSEQ_GADC_CONFIG__GADC_RSTB__RESET_VALUE                    0x00000000U
/** @} */

/* macros for field gadc_cutvdd_b */
/**
 * @defgroup at_apb_pseq_regs_core_gadc_cutvdd_b_field gadc_cutvdd_b_field
 * @brief macros for field gadc_cutvdd_b
 * @details if low, removes power from gadc
 * @{
 */
#define PSEQ_GADC_CONFIG__GADC_CUTVDD_B__SHIFT                                2
#define PSEQ_GADC_CONFIG__GADC_CUTVDD_B__WIDTH                                1
#define PSEQ_GADC_CONFIG__GADC_CUTVDD_B__MASK                       0x00000004U
#define PSEQ_GADC_CONFIG__GADC_CUTVDD_B__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000004U) >> 2)
#define PSEQ_GADC_CONFIG__GADC_CUTVDD_B__WRITE(src) \
                    (((uint32_t)(src)\
                    << 2) & 0x00000004U)
#define PSEQ_GADC_CONFIG__GADC_CUTVDD_B__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | (((uint32_t)(src) <<\
                    2) & 0x00000004U)
#define PSEQ_GADC_CONFIG__GADC_CUTVDD_B__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 2) & ~0x00000004U)))
#define PSEQ_GADC_CONFIG__GADC_CUTVDD_B__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(1) << 2)
#define PSEQ_GADC_CONFIG__GADC_CUTVDD_B__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(0) << 2)
#define PSEQ_GADC_CONFIG__GADC_CUTVDD_B__RESET_VALUE                0x00000000U
/** @} */
#define PSEQ_GADC_CONFIG__TYPE                                         uint32_t
#define PSEQ_GADC_CONFIG__READ                                      0x00000007U
#define PSEQ_GADC_CONFIG__WRITE                                     0x00000007U
#define PSEQ_GADC_CONFIG__PRESERVED                                 0x00000000U
#define PSEQ_GADC_CONFIG__RESET_VALUE                               0x00000000U

#endif /* __PSEQ_GADC_CONFIG_MACRO__ */

/** @} end of gadc_config */

/* macros for BlueprintGlobalNameSpace::PSEQ_count0 */
/**
 * @defgroup at_apb_pseq_regs_core_count0 count0
 * @brief specifies how long power sequencer FSM will stay in states referencing count0 definitions.
 * @{
 */
#ifndef __PSEQ_COUNT0_MACRO__
#define __PSEQ_COUNT0_MACRO__

/* macros for field cnt */
/**
 * @defgroup at_apb_pseq_regs_core_cnt_field cnt_field
 * @brief macros for field cnt
 * @details will wait N+1 32kHz clock cycles
 * @{
 */
#define PSEQ_COUNT0__CNT__SHIFT                                               0
#define PSEQ_COUNT0__CNT__WIDTH                                               4
#define PSEQ_COUNT0__CNT__MASK                                      0x0000000fU
#define PSEQ_COUNT0__CNT__READ(src)             ((uint32_t)(src) & 0x0000000fU)
#define PSEQ_COUNT0__CNT__WRITE(src)            ((uint32_t)(src) & 0x0000000fU)
#define PSEQ_COUNT0__CNT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000000fU) | ((uint32_t)(src) &\
                    0x0000000fU)
#define PSEQ_COUNT0__CNT__VERIFY(src)     (!(((uint32_t)(src) & ~0x0000000fU)))
#define PSEQ_COUNT0__CNT__RESET_VALUE                               0x00000000U
/** @} */
#define PSEQ_COUNT0__TYPE                                              uint32_t
#define PSEQ_COUNT0__READ                                           0x0000000fU
#define PSEQ_COUNT0__WRITE                                          0x0000000fU
#define PSEQ_COUNT0__PRESERVED                                      0x00000000U
#define PSEQ_COUNT0__RESET_VALUE                                    0x00000000U

#endif /* __PSEQ_COUNT0_MACRO__ */

/** @} end of count0 */

/* macros for BlueprintGlobalNameSpace::PSEQ_count1 */
/**
 * @defgroup at_apb_pseq_regs_core_count1 count1
 * @brief specifies how long power sequencer FSM will stay in states referencing count1 definitions.
 * @{
 */
#ifndef __PSEQ_COUNT1_MACRO__
#define __PSEQ_COUNT1_MACRO__

/* macros for field cnt */
/**
 * @defgroup at_apb_pseq_regs_core_cnt_field cnt_field
 * @brief macros for field cnt
 * @details will wait N+1 32kHz clock cycles
 * @{
 */
#define PSEQ_COUNT1__CNT__SHIFT                                               0
#define PSEQ_COUNT1__CNT__WIDTH                                               4
#define PSEQ_COUNT1__CNT__MASK                                      0x0000000fU
#define PSEQ_COUNT1__CNT__READ(src)             ((uint32_t)(src) & 0x0000000fU)
#define PSEQ_COUNT1__CNT__WRITE(src)            ((uint32_t)(src) & 0x0000000fU)
#define PSEQ_COUNT1__CNT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000000fU) | ((uint32_t)(src) &\
                    0x0000000fU)
#define PSEQ_COUNT1__CNT__VERIFY(src)     (!(((uint32_t)(src) & ~0x0000000fU)))
#define PSEQ_COUNT1__CNT__RESET_VALUE                               0x00000000U
/** @} */
#define PSEQ_COUNT1__TYPE                                              uint32_t
#define PSEQ_COUNT1__READ                                           0x0000000fU
#define PSEQ_COUNT1__WRITE                                          0x0000000fU
#define PSEQ_COUNT1__PRESERVED                                      0x00000000U
#define PSEQ_COUNT1__RESET_VALUE                                    0x00000000U

#endif /* __PSEQ_COUNT1_MACRO__ */

/** @} end of count1 */

/* macros for BlueprintGlobalNameSpace::PSEQ_count2 */
/**
 * @defgroup at_apb_pseq_regs_core_count2 count2
 * @brief specifies how long power sequencer FSM will stay in states referencing count2 definitions.
 * @{
 */
#ifndef __PSEQ_COUNT2_MACRO__
#define __PSEQ_COUNT2_MACRO__

/* macros for field cnt */
/**
 * @defgroup at_apb_pseq_regs_core_cnt_field cnt_field
 * @brief macros for field cnt
 * @details will wait N+1 32kHz clock cycles
 * @{
 */
#define PSEQ_COUNT2__CNT__SHIFT                                               0
#define PSEQ_COUNT2__CNT__WIDTH                                               4
#define PSEQ_COUNT2__CNT__MASK                                      0x0000000fU
#define PSEQ_COUNT2__CNT__READ(src)             ((uint32_t)(src) & 0x0000000fU)
#define PSEQ_COUNT2__CNT__WRITE(src)            ((uint32_t)(src) & 0x0000000fU)
#define PSEQ_COUNT2__CNT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000000fU) | ((uint32_t)(src) &\
                    0x0000000fU)
#define PSEQ_COUNT2__CNT__VERIFY(src)     (!(((uint32_t)(src) & ~0x0000000fU)))
#define PSEQ_COUNT2__CNT__RESET_VALUE                               0x00000000U
/** @} */
#define PSEQ_COUNT2__TYPE                                              uint32_t
#define PSEQ_COUNT2__READ                                           0x0000000fU
#define PSEQ_COUNT2__WRITE                                          0x0000000fU
#define PSEQ_COUNT2__PRESERVED                                      0x00000000U
#define PSEQ_COUNT2__RESET_VALUE                                    0x00000000U

#endif /* __PSEQ_COUNT2_MACRO__ */

/** @} end of count2 */

/* macros for BlueprintGlobalNameSpace::PSEQ_count3 */
/**
 * @defgroup at_apb_pseq_regs_core_count3 count3
 * @brief specifies how long power sequencer FSM will stay in states referencing count3 definitions.
 * @{
 */
#ifndef __PSEQ_COUNT3_MACRO__
#define __PSEQ_COUNT3_MACRO__

/* macros for field cnt */
/**
 * @defgroup at_apb_pseq_regs_core_cnt_field cnt_field
 * @brief macros for field cnt
 * @details will wait N+1 32kHz clock cycles
 * @{
 */
#define PSEQ_COUNT3__CNT__SHIFT                                               0
#define PSEQ_COUNT3__CNT__WIDTH                                               4
#define PSEQ_COUNT3__CNT__MASK                                      0x0000000fU
#define PSEQ_COUNT3__CNT__READ(src)             ((uint32_t)(src) & 0x0000000fU)
#define PSEQ_COUNT3__CNT__WRITE(src)            ((uint32_t)(src) & 0x0000000fU)
#define PSEQ_COUNT3__CNT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000000fU) | ((uint32_t)(src) &\
                    0x0000000fU)
#define PSEQ_COUNT3__CNT__VERIFY(src)     (!(((uint32_t)(src) & ~0x0000000fU)))
#define PSEQ_COUNT3__CNT__RESET_VALUE                               0x00000000U
/** @} */
#define PSEQ_COUNT3__TYPE                                              uint32_t
#define PSEQ_COUNT3__READ                                           0x0000000fU
#define PSEQ_COUNT3__WRITE                                          0x0000000fU
#define PSEQ_COUNT3__PRESERVED                                      0x00000000U
#define PSEQ_COUNT3__RESET_VALUE                                    0x00000000U

#endif /* __PSEQ_COUNT3_MACRO__ */

/** @} end of count3 */

/* macros for BlueprintGlobalNameSpace::PSEQ_count4 */
/**
 * @defgroup at_apb_pseq_regs_core_count4 count4
 * @brief specifies how long power sequencer FSM will stay in states referencing count4 definitions.
 * @{
 */
#ifndef __PSEQ_COUNT4_MACRO__
#define __PSEQ_COUNT4_MACRO__

/* macros for field cnt */
/**
 * @defgroup at_apb_pseq_regs_core_cnt_field cnt_field
 * @brief macros for field cnt
 * @details will wait N+1 32kHz clock cycles
 * @{
 */
#define PSEQ_COUNT4__CNT__SHIFT                                               0
#define PSEQ_COUNT4__CNT__WIDTH                                               4
#define PSEQ_COUNT4__CNT__MASK                                      0x0000000fU
#define PSEQ_COUNT4__CNT__READ(src)             ((uint32_t)(src) & 0x0000000fU)
#define PSEQ_COUNT4__CNT__WRITE(src)            ((uint32_t)(src) & 0x0000000fU)
#define PSEQ_COUNT4__CNT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000000fU) | ((uint32_t)(src) &\
                    0x0000000fU)
#define PSEQ_COUNT4__CNT__VERIFY(src)     (!(((uint32_t)(src) & ~0x0000000fU)))
#define PSEQ_COUNT4__CNT__RESET_VALUE                               0x00000000U
/** @} */
#define PSEQ_COUNT4__TYPE                                              uint32_t
#define PSEQ_COUNT4__READ                                           0x0000000fU
#define PSEQ_COUNT4__WRITE                                          0x0000000fU
#define PSEQ_COUNT4__PRESERVED                                      0x00000000U
#define PSEQ_COUNT4__RESET_VALUE                                    0x00000000U

#endif /* __PSEQ_COUNT4_MACRO__ */

/** @} end of count4 */

/* macros for BlueprintGlobalNameSpace::PSEQ_count5 */
/**
 * @defgroup at_apb_pseq_regs_core_count5 count5
 * @brief specifies how long power sequencer FSM will stay in states referencing count5 definitions.
 * @{
 */
#ifndef __PSEQ_COUNT5_MACRO__
#define __PSEQ_COUNT5_MACRO__

/* macros for field cnt */
/**
 * @defgroup at_apb_pseq_regs_core_cnt_field cnt_field
 * @brief macros for field cnt
 * @details will wait N+1 32kHz clock cycles
 * @{
 */
#define PSEQ_COUNT5__CNT__SHIFT                                               0
#define PSEQ_COUNT5__CNT__WIDTH                                               4
#define PSEQ_COUNT5__CNT__MASK                                      0x0000000fU
#define PSEQ_COUNT5__CNT__READ(src)             ((uint32_t)(src) & 0x0000000fU)
#define PSEQ_COUNT5__CNT__WRITE(src)            ((uint32_t)(src) & 0x0000000fU)
#define PSEQ_COUNT5__CNT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000000fU) | ((uint32_t)(src) &\
                    0x0000000fU)
#define PSEQ_COUNT5__CNT__VERIFY(src)     (!(((uint32_t)(src) & ~0x0000000fU)))
#define PSEQ_COUNT5__CNT__RESET_VALUE                               0x00000000U
/** @} */
#define PSEQ_COUNT5__TYPE                                              uint32_t
#define PSEQ_COUNT5__READ                                           0x0000000fU
#define PSEQ_COUNT5__WRITE                                          0x0000000fU
#define PSEQ_COUNT5__PRESERVED                                      0x00000000U
#define PSEQ_COUNT5__RESET_VALUE                                    0x00000000U

#endif /* __PSEQ_COUNT5_MACRO__ */

/** @} end of count5 */

/* macros for BlueprintGlobalNameSpace::PSEQ_count6 */
/**
 * @defgroup at_apb_pseq_regs_core_count6 count6
 * @brief specifies how long power sequencer FSM will stay in states referencing count6 definitions.
 * @{
 */
#ifndef __PSEQ_COUNT6_MACRO__
#define __PSEQ_COUNT6_MACRO__

/* macros for field cnt */
/**
 * @defgroup at_apb_pseq_regs_core_cnt_field cnt_field
 * @brief macros for field cnt
 * @details will wait N+1 32kHz clock cycles
 * @{
 */
#define PSEQ_COUNT6__CNT__SHIFT                                               0
#define PSEQ_COUNT6__CNT__WIDTH                                               4
#define PSEQ_COUNT6__CNT__MASK                                      0x0000000fU
#define PSEQ_COUNT6__CNT__READ(src)             ((uint32_t)(src) & 0x0000000fU)
#define PSEQ_COUNT6__CNT__WRITE(src)            ((uint32_t)(src) & 0x0000000fU)
#define PSEQ_COUNT6__CNT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000000fU) | ((uint32_t)(src) &\
                    0x0000000fU)
#define PSEQ_COUNT6__CNT__VERIFY(src)     (!(((uint32_t)(src) & ~0x0000000fU)))
#define PSEQ_COUNT6__CNT__RESET_VALUE                               0x00000000U
/** @} */
#define PSEQ_COUNT6__TYPE                                              uint32_t
#define PSEQ_COUNT6__READ                                           0x0000000fU
#define PSEQ_COUNT6__WRITE                                          0x0000000fU
#define PSEQ_COUNT6__PRESERVED                                      0x00000000U
#define PSEQ_COUNT6__RESET_VALUE                                    0x00000000U

#endif /* __PSEQ_COUNT6_MACRO__ */

/** @} end of count6 */

/* macros for BlueprintGlobalNameSpace::PSEQ_count7 */
/**
 * @defgroup at_apb_pseq_regs_core_count7 count7
 * @brief specifies how long power sequencer FSM will stay in states referencing count7 definitions.
 * @{
 */
#ifndef __PSEQ_COUNT7_MACRO__
#define __PSEQ_COUNT7_MACRO__

/* macros for field cnt */
/**
 * @defgroup at_apb_pseq_regs_core_cnt_field cnt_field
 * @brief macros for field cnt
 * @details will wait N+1 32kHz clock cycles
 * @{
 */
#define PSEQ_COUNT7__CNT__SHIFT                                               0
#define PSEQ_COUNT7__CNT__WIDTH                                               4
#define PSEQ_COUNT7__CNT__MASK                                      0x0000000fU
#define PSEQ_COUNT7__CNT__READ(src)             ((uint32_t)(src) & 0x0000000fU)
#define PSEQ_COUNT7__CNT__WRITE(src)            ((uint32_t)(src) & 0x0000000fU)
#define PSEQ_COUNT7__CNT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000000fU) | ((uint32_t)(src) &\
                    0x0000000fU)
#define PSEQ_COUNT7__CNT__VERIFY(src)     (!(((uint32_t)(src) & ~0x0000000fU)))
#define PSEQ_COUNT7__CNT__RESET_VALUE                               0x00000000U
/** @} */
#define PSEQ_COUNT7__TYPE                                              uint32_t
#define PSEQ_COUNT7__READ                                           0x0000000fU
#define PSEQ_COUNT7__WRITE                                          0x0000000fU
#define PSEQ_COUNT7__PRESERVED                                      0x00000000U
#define PSEQ_COUNT7__RESET_VALUE                                    0x00000000U

#endif /* __PSEQ_COUNT7_MACRO__ */

/** @} end of count7 */

/* macros for BlueprintGlobalNameSpace::PSEQ_count8 */
/**
 * @defgroup at_apb_pseq_regs_core_count8 count8
 * @brief specifies how long power sequencer FSM will stay in states referencing count8 definitions.
 * @{
 */
#ifndef __PSEQ_COUNT8_MACRO__
#define __PSEQ_COUNT8_MACRO__

/* macros for field cnt */
/**
 * @defgroup at_apb_pseq_regs_core_cnt_field cnt_field
 * @brief macros for field cnt
 * @details will wait N+1 32kHz clock cycles
 * @{
 */
#define PSEQ_COUNT8__CNT__SHIFT                                               0
#define PSEQ_COUNT8__CNT__WIDTH                                               4
#define PSEQ_COUNT8__CNT__MASK                                      0x0000000fU
#define PSEQ_COUNT8__CNT__READ(src)             ((uint32_t)(src) & 0x0000000fU)
#define PSEQ_COUNT8__CNT__WRITE(src)            ((uint32_t)(src) & 0x0000000fU)
#define PSEQ_COUNT8__CNT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000000fU) | ((uint32_t)(src) &\
                    0x0000000fU)
#define PSEQ_COUNT8__CNT__VERIFY(src)     (!(((uint32_t)(src) & ~0x0000000fU)))
#define PSEQ_COUNT8__CNT__RESET_VALUE                               0x00000000U
/** @} */
#define PSEQ_COUNT8__TYPE                                              uint32_t
#define PSEQ_COUNT8__READ                                           0x0000000fU
#define PSEQ_COUNT8__WRITE                                          0x0000000fU
#define PSEQ_COUNT8__PRESERVED                                      0x00000000U
#define PSEQ_COUNT8__RESET_VALUE                                    0x00000000U

#endif /* __PSEQ_COUNT8_MACRO__ */

/** @} end of count8 */

/* macros for BlueprintGlobalNameSpace::PSEQ_count9 */
/**
 * @defgroup at_apb_pseq_regs_core_count9 count9
 * @brief specifies how long power sequencer FSM will stay in states referencing count9 definitions.
 * @{
 */
#ifndef __PSEQ_COUNT9_MACRO__
#define __PSEQ_COUNT9_MACRO__

/* macros for field cnt */
/**
 * @defgroup at_apb_pseq_regs_core_cnt_field cnt_field
 * @brief macros for field cnt
 * @details will wait N+1 32kHz clock cycles
 * @{
 */
#define PSEQ_COUNT9__CNT__SHIFT                                               0
#define PSEQ_COUNT9__CNT__WIDTH                                               4
#define PSEQ_COUNT9__CNT__MASK                                      0x0000000fU
#define PSEQ_COUNT9__CNT__READ(src)             ((uint32_t)(src) & 0x0000000fU)
#define PSEQ_COUNT9__CNT__WRITE(src)            ((uint32_t)(src) & 0x0000000fU)
#define PSEQ_COUNT9__CNT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000000fU) | ((uint32_t)(src) &\
                    0x0000000fU)
#define PSEQ_COUNT9__CNT__VERIFY(src)     (!(((uint32_t)(src) & ~0x0000000fU)))
#define PSEQ_COUNT9__CNT__RESET_VALUE                               0x00000000U
/** @} */
#define PSEQ_COUNT9__TYPE                                              uint32_t
#define PSEQ_COUNT9__READ                                           0x0000000fU
#define PSEQ_COUNT9__WRITE                                          0x0000000fU
#define PSEQ_COUNT9__PRESERVED                                      0x00000000U
#define PSEQ_COUNT9__RESET_VALUE                                    0x00000000U

#endif /* __PSEQ_COUNT9_MACRO__ */

/** @} end of count9 */

/* macros for BlueprintGlobalNameSpace::PSEQ_count0_radio */
/**
 * @defgroup at_apb_pseq_regs_core_count0_radio count0_radio
 * @brief specifies how long power sequencer FSM will stay in states referencing radio count0 definitions.
 * @{
 */
#ifndef __PSEQ_COUNT0_RADIO_MACRO__
#define __PSEQ_COUNT0_RADIO_MACRO__

/* macros for field cnt */
/**
 * @defgroup at_apb_pseq_regs_core_cnt_field cnt_field
 * @brief macros for field cnt
 * @details will wait N+1 32kHz clock cycles
 * @{
 */
#define PSEQ_COUNT0_RADIO__CNT__SHIFT                                         0
#define PSEQ_COUNT0_RADIO__CNT__WIDTH                                         4
#define PSEQ_COUNT0_RADIO__CNT__MASK                                0x0000000fU
#define PSEQ_COUNT0_RADIO__CNT__READ(src)       ((uint32_t)(src) & 0x0000000fU)
#define PSEQ_COUNT0_RADIO__CNT__WRITE(src)      ((uint32_t)(src) & 0x0000000fU)
#define PSEQ_COUNT0_RADIO__CNT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000000fU) | ((uint32_t)(src) &\
                    0x0000000fU)
#define PSEQ_COUNT0_RADIO__CNT__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x0000000fU)))
#define PSEQ_COUNT0_RADIO__CNT__RESET_VALUE                         0x00000000U
/** @} */
#define PSEQ_COUNT0_RADIO__TYPE                                        uint32_t
#define PSEQ_COUNT0_RADIO__READ                                     0x0000000fU
#define PSEQ_COUNT0_RADIO__WRITE                                    0x0000000fU
#define PSEQ_COUNT0_RADIO__PRESERVED                                0x00000000U
#define PSEQ_COUNT0_RADIO__RESET_VALUE                              0x00000000U

#endif /* __PSEQ_COUNT0_RADIO_MACRO__ */

/** @} end of count0_radio */

/* macros for BlueprintGlobalNameSpace::PSEQ_count1_radio */
/**
 * @defgroup at_apb_pseq_regs_core_count1_radio count1_radio
 * @brief specifies how long power sequencer FSM will stay in states referencing radio count1 definitions.
 * @{
 */
#ifndef __PSEQ_COUNT1_RADIO_MACRO__
#define __PSEQ_COUNT1_RADIO_MACRO__

/* macros for field cnt */
/**
 * @defgroup at_apb_pseq_regs_core_cnt_field cnt_field
 * @brief macros for field cnt
 * @details will wait N+1 32kHz clock cycles
 * @{
 */
#define PSEQ_COUNT1_RADIO__CNT__SHIFT                                         0
#define PSEQ_COUNT1_RADIO__CNT__WIDTH                                         4
#define PSEQ_COUNT1_RADIO__CNT__MASK                                0x0000000fU
#define PSEQ_COUNT1_RADIO__CNT__READ(src)       ((uint32_t)(src) & 0x0000000fU)
#define PSEQ_COUNT1_RADIO__CNT__WRITE(src)      ((uint32_t)(src) & 0x0000000fU)
#define PSEQ_COUNT1_RADIO__CNT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000000fU) | ((uint32_t)(src) &\
                    0x0000000fU)
#define PSEQ_COUNT1_RADIO__CNT__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x0000000fU)))
#define PSEQ_COUNT1_RADIO__CNT__RESET_VALUE                         0x00000000U
/** @} */
#define PSEQ_COUNT1_RADIO__TYPE                                        uint32_t
#define PSEQ_COUNT1_RADIO__READ                                     0x0000000fU
#define PSEQ_COUNT1_RADIO__WRITE                                    0x0000000fU
#define PSEQ_COUNT1_RADIO__PRESERVED                                0x00000000U
#define PSEQ_COUNT1_RADIO__RESET_VALUE                              0x00000000U

#endif /* __PSEQ_COUNT1_RADIO_MACRO__ */

/** @} end of count1_radio */

/* macros for BlueprintGlobalNameSpace::PSEQ_count2_radio */
/**
 * @defgroup at_apb_pseq_regs_core_count2_radio count2_radio
 * @brief specifies how long power sequencer FSM will stay in states referencing radio count2 definitions.
 * @{
 */
#ifndef __PSEQ_COUNT2_RADIO_MACRO__
#define __PSEQ_COUNT2_RADIO_MACRO__

/* macros for field cnt */
/**
 * @defgroup at_apb_pseq_regs_core_cnt_field cnt_field
 * @brief macros for field cnt
 * @details will wait N+1 32kHz clock cycles
 * @{
 */
#define PSEQ_COUNT2_RADIO__CNT__SHIFT                                         0
#define PSEQ_COUNT2_RADIO__CNT__WIDTH                                         4
#define PSEQ_COUNT2_RADIO__CNT__MASK                                0x0000000fU
#define PSEQ_COUNT2_RADIO__CNT__READ(src)       ((uint32_t)(src) & 0x0000000fU)
#define PSEQ_COUNT2_RADIO__CNT__WRITE(src)      ((uint32_t)(src) & 0x0000000fU)
#define PSEQ_COUNT2_RADIO__CNT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000000fU) | ((uint32_t)(src) &\
                    0x0000000fU)
#define PSEQ_COUNT2_RADIO__CNT__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x0000000fU)))
#define PSEQ_COUNT2_RADIO__CNT__RESET_VALUE                         0x00000000U
/** @} */
#define PSEQ_COUNT2_RADIO__TYPE                                        uint32_t
#define PSEQ_COUNT2_RADIO__READ                                     0x0000000fU
#define PSEQ_COUNT2_RADIO__WRITE                                    0x0000000fU
#define PSEQ_COUNT2_RADIO__PRESERVED                                0x00000000U
#define PSEQ_COUNT2_RADIO__RESET_VALUE                              0x00000000U

#endif /* __PSEQ_COUNT2_RADIO_MACRO__ */

/** @} end of count2_radio */

/* macros for BlueprintGlobalNameSpace::PSEQ_count3_radio */
/**
 * @defgroup at_apb_pseq_regs_core_count3_radio count3_radio
 * @brief specifies how long power sequencer FSM will stay in states referencing radio count3 definitions.
 * @{
 */
#ifndef __PSEQ_COUNT3_RADIO_MACRO__
#define __PSEQ_COUNT3_RADIO_MACRO__

/* macros for field cnt */
/**
 * @defgroup at_apb_pseq_regs_core_cnt_field cnt_field
 * @brief macros for field cnt
 * @details will wait N+1 32kHz clock cycles
 * @{
 */
#define PSEQ_COUNT3_RADIO__CNT__SHIFT                                         0
#define PSEQ_COUNT3_RADIO__CNT__WIDTH                                         4
#define PSEQ_COUNT3_RADIO__CNT__MASK                                0x0000000fU
#define PSEQ_COUNT3_RADIO__CNT__READ(src)       ((uint32_t)(src) & 0x0000000fU)
#define PSEQ_COUNT3_RADIO__CNT__WRITE(src)      ((uint32_t)(src) & 0x0000000fU)
#define PSEQ_COUNT3_RADIO__CNT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000000fU) | ((uint32_t)(src) &\
                    0x0000000fU)
#define PSEQ_COUNT3_RADIO__CNT__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x0000000fU)))
#define PSEQ_COUNT3_RADIO__CNT__RESET_VALUE                         0x00000000U
/** @} */
#define PSEQ_COUNT3_RADIO__TYPE                                        uint32_t
#define PSEQ_COUNT3_RADIO__READ                                     0x0000000fU
#define PSEQ_COUNT3_RADIO__WRITE                                    0x0000000fU
#define PSEQ_COUNT3_RADIO__PRESERVED                                0x00000000U
#define PSEQ_COUNT3_RADIO__RESET_VALUE                              0x00000000U

#endif /* __PSEQ_COUNT3_RADIO_MACRO__ */

/** @} end of count3_radio */

/* macros for BlueprintGlobalNameSpace::PSEQ_count4_radio */
/**
 * @defgroup at_apb_pseq_regs_core_count4_radio count4_radio
 * @brief specifies how long power sequencer FSM will stay in states referencing radio count4 definitions.
 * @{
 */
#ifndef __PSEQ_COUNT4_RADIO_MACRO__
#define __PSEQ_COUNT4_RADIO_MACRO__

/* macros for field cnt */
/**
 * @defgroup at_apb_pseq_regs_core_cnt_field cnt_field
 * @brief macros for field cnt
 * @details will wait N+1 32kHz clock cycles
 * @{
 */
#define PSEQ_COUNT4_RADIO__CNT__SHIFT                                         0
#define PSEQ_COUNT4_RADIO__CNT__WIDTH                                         4
#define PSEQ_COUNT4_RADIO__CNT__MASK                                0x0000000fU
#define PSEQ_COUNT4_RADIO__CNT__READ(src)       ((uint32_t)(src) & 0x0000000fU)
#define PSEQ_COUNT4_RADIO__CNT__WRITE(src)      ((uint32_t)(src) & 0x0000000fU)
#define PSEQ_COUNT4_RADIO__CNT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000000fU) | ((uint32_t)(src) &\
                    0x0000000fU)
#define PSEQ_COUNT4_RADIO__CNT__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x0000000fU)))
#define PSEQ_COUNT4_RADIO__CNT__RESET_VALUE                         0x00000004U
/** @} */
#define PSEQ_COUNT4_RADIO__TYPE                                        uint32_t
#define PSEQ_COUNT4_RADIO__READ                                     0x0000000fU
#define PSEQ_COUNT4_RADIO__WRITE                                    0x0000000fU
#define PSEQ_COUNT4_RADIO__PRESERVED                                0x00000000U
#define PSEQ_COUNT4_RADIO__RESET_VALUE                              0x00000004U

#endif /* __PSEQ_COUNT4_RADIO_MACRO__ */

/** @} end of count4_radio */

/* macros for BlueprintGlobalNameSpace::PSEQ_count5_radio */
/**
 * @defgroup at_apb_pseq_regs_core_count5_radio count5_radio
 * @brief specifies how long power sequencer FSM will stay in states referencing radio count5 definitions.
 * @{
 */
#ifndef __PSEQ_COUNT5_RADIO_MACRO__
#define __PSEQ_COUNT5_RADIO_MACRO__

/* macros for field cnt */
/**
 * @defgroup at_apb_pseq_regs_core_cnt_field cnt_field
 * @brief macros for field cnt
 * @details will wait N+1 32kHz clock cycles
 * @{
 */
#define PSEQ_COUNT5_RADIO__CNT__SHIFT                                         0
#define PSEQ_COUNT5_RADIO__CNT__WIDTH                                         4
#define PSEQ_COUNT5_RADIO__CNT__MASK                                0x0000000fU
#define PSEQ_COUNT5_RADIO__CNT__READ(src)       ((uint32_t)(src) & 0x0000000fU)
#define PSEQ_COUNT5_RADIO__CNT__WRITE(src)      ((uint32_t)(src) & 0x0000000fU)
#define PSEQ_COUNT5_RADIO__CNT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000000fU) | ((uint32_t)(src) &\
                    0x0000000fU)
#define PSEQ_COUNT5_RADIO__CNT__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x0000000fU)))
#define PSEQ_COUNT5_RADIO__CNT__RESET_VALUE                         0x00000000U
/** @} */
#define PSEQ_COUNT5_RADIO__TYPE                                        uint32_t
#define PSEQ_COUNT5_RADIO__READ                                     0x0000000fU
#define PSEQ_COUNT5_RADIO__WRITE                                    0x0000000fU
#define PSEQ_COUNT5_RADIO__PRESERVED                                0x00000000U
#define PSEQ_COUNT5_RADIO__RESET_VALUE                              0x00000000U

#endif /* __PSEQ_COUNT5_RADIO_MACRO__ */

/** @} end of count5_radio */

/* macros for BlueprintGlobalNameSpace::PSEQ_count6_radio */
/**
 * @defgroup at_apb_pseq_regs_core_count6_radio count6_radio
 * @brief specifies how long power sequencer FSM will stay in states referencing radio count6 definitions.
 * @{
 */
#ifndef __PSEQ_COUNT6_RADIO_MACRO__
#define __PSEQ_COUNT6_RADIO_MACRO__

/* macros for field cnt */
/**
 * @defgroup at_apb_pseq_regs_core_cnt_field cnt_field
 * @brief macros for field cnt
 * @details will wait N+1 32kHz clock cycles
 * @{
 */
#define PSEQ_COUNT6_RADIO__CNT__SHIFT                                         0
#define PSEQ_COUNT6_RADIO__CNT__WIDTH                                         4
#define PSEQ_COUNT6_RADIO__CNT__MASK                                0x0000000fU
#define PSEQ_COUNT6_RADIO__CNT__READ(src)       ((uint32_t)(src) & 0x0000000fU)
#define PSEQ_COUNT6_RADIO__CNT__WRITE(src)      ((uint32_t)(src) & 0x0000000fU)
#define PSEQ_COUNT6_RADIO__CNT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000000fU) | ((uint32_t)(src) &\
                    0x0000000fU)
#define PSEQ_COUNT6_RADIO__CNT__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x0000000fU)))
#define PSEQ_COUNT6_RADIO__CNT__RESET_VALUE                         0x00000000U
/** @} */
#define PSEQ_COUNT6_RADIO__TYPE                                        uint32_t
#define PSEQ_COUNT6_RADIO__READ                                     0x0000000fU
#define PSEQ_COUNT6_RADIO__WRITE                                    0x0000000fU
#define PSEQ_COUNT6_RADIO__PRESERVED                                0x00000000U
#define PSEQ_COUNT6_RADIO__RESET_VALUE                              0x00000000U

#endif /* __PSEQ_COUNT6_RADIO_MACRO__ */

/** @} end of count6_radio */

/* macros for BlueprintGlobalNameSpace::PSEQ_count7_radio */
/**
 * @defgroup at_apb_pseq_regs_core_count7_radio count7_radio
 * @brief specifies how long power sequencer FSM will stay in states referencing radio count7 definitions.
 * @{
 */
#ifndef __PSEQ_COUNT7_RADIO_MACRO__
#define __PSEQ_COUNT7_RADIO_MACRO__

/* macros for field cnt */
/**
 * @defgroup at_apb_pseq_regs_core_cnt_field cnt_field
 * @brief macros for field cnt
 * @details will wait N+1 32kHz clock cycles
 * @{
 */
#define PSEQ_COUNT7_RADIO__CNT__SHIFT                                         0
#define PSEQ_COUNT7_RADIO__CNT__WIDTH                                         4
#define PSEQ_COUNT7_RADIO__CNT__MASK                                0x0000000fU
#define PSEQ_COUNT7_RADIO__CNT__READ(src)       ((uint32_t)(src) & 0x0000000fU)
#define PSEQ_COUNT7_RADIO__CNT__WRITE(src)      ((uint32_t)(src) & 0x0000000fU)
#define PSEQ_COUNT7_RADIO__CNT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000000fU) | ((uint32_t)(src) &\
                    0x0000000fU)
#define PSEQ_COUNT7_RADIO__CNT__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x0000000fU)))
#define PSEQ_COUNT7_RADIO__CNT__RESET_VALUE                         0x00000000U
/** @} */
#define PSEQ_COUNT7_RADIO__TYPE                                        uint32_t
#define PSEQ_COUNT7_RADIO__READ                                     0x0000000fU
#define PSEQ_COUNT7_RADIO__WRITE                                    0x0000000fU
#define PSEQ_COUNT7_RADIO__PRESERVED                                0x00000000U
#define PSEQ_COUNT7_RADIO__RESET_VALUE                              0x00000000U

#endif /* __PSEQ_COUNT7_RADIO_MACRO__ */

/** @} end of count7_radio */

/* macros for BlueprintGlobalNameSpace::PSEQ_count8_radio */
/**
 * @defgroup at_apb_pseq_regs_core_count8_radio count8_radio
 * @brief specifies how long power sequencer FSM will stay in states referencing radio count8 definitions.
 * @{
 */
#ifndef __PSEQ_COUNT8_RADIO_MACRO__
#define __PSEQ_COUNT8_RADIO_MACRO__

/* macros for field cnt */
/**
 * @defgroup at_apb_pseq_regs_core_cnt_field cnt_field
 * @brief macros for field cnt
 * @details will wait N+1 32kHz clock cycles
 * @{
 */
#define PSEQ_COUNT8_RADIO__CNT__SHIFT                                         0
#define PSEQ_COUNT8_RADIO__CNT__WIDTH                                         4
#define PSEQ_COUNT8_RADIO__CNT__MASK                                0x0000000fU
#define PSEQ_COUNT8_RADIO__CNT__READ(src)       ((uint32_t)(src) & 0x0000000fU)
#define PSEQ_COUNT8_RADIO__CNT__WRITE(src)      ((uint32_t)(src) & 0x0000000fU)
#define PSEQ_COUNT8_RADIO__CNT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000000fU) | ((uint32_t)(src) &\
                    0x0000000fU)
#define PSEQ_COUNT8_RADIO__CNT__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x0000000fU)))
#define PSEQ_COUNT8_RADIO__CNT__RESET_VALUE                         0x00000000U
/** @} */
#define PSEQ_COUNT8_RADIO__TYPE                                        uint32_t
#define PSEQ_COUNT8_RADIO__READ                                     0x0000000fU
#define PSEQ_COUNT8_RADIO__WRITE                                    0x0000000fU
#define PSEQ_COUNT8_RADIO__PRESERVED                                0x00000000U
#define PSEQ_COUNT8_RADIO__RESET_VALUE                              0x00000000U

#endif /* __PSEQ_COUNT8_RADIO_MACRO__ */

/** @} end of count8_radio */

/* macros for BlueprintGlobalNameSpace::PSEQ_count9_radio */
/**
 * @defgroup at_apb_pseq_regs_core_count9_radio count9_radio
 * @brief specifies how long power sequencer FSM will stay in states referencing radio count9 definitions.
 * @{
 */
#ifndef __PSEQ_COUNT9_RADIO_MACRO__
#define __PSEQ_COUNT9_RADIO_MACRO__

/* macros for field cnt */
/**
 * @defgroup at_apb_pseq_regs_core_cnt_field cnt_field
 * @brief macros for field cnt
 * @details will wait N+1 32kHz clock cycles
 * @{
 */
#define PSEQ_COUNT9_RADIO__CNT__SHIFT                                         0
#define PSEQ_COUNT9_RADIO__CNT__WIDTH                                         4
#define PSEQ_COUNT9_RADIO__CNT__MASK                                0x0000000fU
#define PSEQ_COUNT9_RADIO__CNT__READ(src)       ((uint32_t)(src) & 0x0000000fU)
#define PSEQ_COUNT9_RADIO__CNT__WRITE(src)      ((uint32_t)(src) & 0x0000000fU)
#define PSEQ_COUNT9_RADIO__CNT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000000fU) | ((uint32_t)(src) &\
                    0x0000000fU)
#define PSEQ_COUNT9_RADIO__CNT__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x0000000fU)))
#define PSEQ_COUNT9_RADIO__CNT__RESET_VALUE                         0x00000000U
/** @} */

/* macros for field em_block_wdata */
/**
 * @defgroup at_apb_pseq_regs_core_em_block_wdata_field em_block_wdata_field
 * @brief macros for field em_block_wdata
 * @details ugly hack for CPF ISO39 error; no practical use
 * @{
 */
#define PSEQ_COUNT9_RADIO__EM_BLOCK_WDATA__SHIFT                              8
#define PSEQ_COUNT9_RADIO__EM_BLOCK_WDATA__WIDTH                              1
#define PSEQ_COUNT9_RADIO__EM_BLOCK_WDATA__MASK                     0x00000100U
#define PSEQ_COUNT9_RADIO__EM_BLOCK_WDATA__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000100U) >> 8)
#define PSEQ_COUNT9_RADIO__EM_BLOCK_WDATA__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x00000100U)
#define PSEQ_COUNT9_RADIO__EM_BLOCK_WDATA__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000100U) | (((uint32_t)(src) <<\
                    8) & 0x00000100U)
#define PSEQ_COUNT9_RADIO__EM_BLOCK_WDATA__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x00000100U)))
#define PSEQ_COUNT9_RADIO__EM_BLOCK_WDATA__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000100U) | ((uint32_t)(1) << 8)
#define PSEQ_COUNT9_RADIO__EM_BLOCK_WDATA__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000100U) | ((uint32_t)(0) << 8)
#define PSEQ_COUNT9_RADIO__EM_BLOCK_WDATA__RESET_VALUE              0x00000000U
/** @} */

/* macros for field em_block_addr */
/**
 * @defgroup at_apb_pseq_regs_core_em_block_addr_field em_block_addr_field
 * @brief macros for field em_block_addr
 * @details ugly hack for CPF ISO39 error; no practical use
 * @{
 */
#define PSEQ_COUNT9_RADIO__EM_BLOCK_ADDR__SHIFT                               9
#define PSEQ_COUNT9_RADIO__EM_BLOCK_ADDR__WIDTH                               1
#define PSEQ_COUNT9_RADIO__EM_BLOCK_ADDR__MASK                      0x00000200U
#define PSEQ_COUNT9_RADIO__EM_BLOCK_ADDR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000200U) >> 9)
#define PSEQ_COUNT9_RADIO__EM_BLOCK_ADDR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 9) & 0x00000200U)
#define PSEQ_COUNT9_RADIO__EM_BLOCK_ADDR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000200U) | (((uint32_t)(src) <<\
                    9) & 0x00000200U)
#define PSEQ_COUNT9_RADIO__EM_BLOCK_ADDR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 9) & ~0x00000200U)))
#define PSEQ_COUNT9_RADIO__EM_BLOCK_ADDR__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000200U) | ((uint32_t)(1) << 9)
#define PSEQ_COUNT9_RADIO__EM_BLOCK_ADDR__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000200U) | ((uint32_t)(0) << 9)
#define PSEQ_COUNT9_RADIO__EM_BLOCK_ADDR__RESET_VALUE               0x00000000U
/** @} */

/* macros for field spare */
/**
 * @defgroup at_apb_pseq_regs_core_spare_field spare_field
 * @brief macros for field spare
 * @details spare control bits if needed
 * @{
 */
#define PSEQ_COUNT9_RADIO__SPARE__SHIFT                                      10
#define PSEQ_COUNT9_RADIO__SPARE__WIDTH                                       6
#define PSEQ_COUNT9_RADIO__SPARE__MASK                              0x0000fc00U
#define PSEQ_COUNT9_RADIO__SPARE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000fc00U) >> 10)
#define PSEQ_COUNT9_RADIO__SPARE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 10) & 0x0000fc00U)
#define PSEQ_COUNT9_RADIO__SPARE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000fc00U) | (((uint32_t)(src) <<\
                    10) & 0x0000fc00U)
#define PSEQ_COUNT9_RADIO__SPARE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 10) & ~0x0000fc00U)))
#define PSEQ_COUNT9_RADIO__SPARE__RESET_VALUE                       0x00000000U
/** @} */
#define PSEQ_COUNT9_RADIO__TYPE                                        uint32_t
#define PSEQ_COUNT9_RADIO__READ                                     0x0000ff0fU
#define PSEQ_COUNT9_RADIO__WRITE                                    0x0000ff0fU
#define PSEQ_COUNT9_RADIO__PRESERVED                                0x00000000U
#define PSEQ_COUNT9_RADIO__RESET_VALUE                              0x00000000U

#endif /* __PSEQ_COUNT9_RADIO_MACRO__ */

/** @} end of count9_radio */

/* macros for BlueprintGlobalNameSpace::PSEQ_xtal_bits0 */
/**
 * @defgroup at_apb_pseq_regs_core_xtal_bits0 xtal_bits0
 * @brief control signals for clk_mpc crystal circuit definitions.
 * @{
 */
#ifndef __PSEQ_XTAL_BITS0_MACRO__
#define __PSEQ_XTAL_BITS0_MACRO__

/* macros for field xtalfreq */
/**
 * @defgroup at_apb_pseq_regs_core_xtalfreq_field xtalfreq_field
 * @brief macros for field xtalfreq
 * @details 0=16MHz 1=8MHz
 * @{
 */
#define PSEQ_XTAL_BITS0__XTALFREQ__SHIFT                                      0
#define PSEQ_XTAL_BITS0__XTALFREQ__WIDTH                                      1
#define PSEQ_XTAL_BITS0__XTALFREQ__MASK                             0x00000001U
#define PSEQ_XTAL_BITS0__XTALFREQ__READ(src)    ((uint32_t)(src) & 0x00000001U)
#define PSEQ_XTAL_BITS0__XTALFREQ__WRITE(src)   ((uint32_t)(src) & 0x00000001U)
#define PSEQ_XTAL_BITS0__XTALFREQ__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define PSEQ_XTAL_BITS0__XTALFREQ__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define PSEQ_XTAL_BITS0__XTALFREQ__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define PSEQ_XTAL_BITS0__XTALFREQ__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define PSEQ_XTAL_BITS0__XTALFREQ__RESET_VALUE                      0x00000000U
/** @} */

/* macros for field xocapin */
/**
 * @defgroup at_apb_pseq_regs_core_xocapin_field xocapin_field
 * @brief macros for field xocapin
 * @details 16MHz crystal tuning cap on XTALI_16M pin, typically set to same value as xocapout
 * @{
 */
#define PSEQ_XTAL_BITS0__XOCAPIN__SHIFT                                       1
#define PSEQ_XTAL_BITS0__XOCAPIN__WIDTH                                       5
#define PSEQ_XTAL_BITS0__XOCAPIN__MASK                              0x0000003eU
#define PSEQ_XTAL_BITS0__XOCAPIN__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000003eU) >> 1)
#define PSEQ_XTAL_BITS0__XOCAPIN__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x0000003eU)
#define PSEQ_XTAL_BITS0__XOCAPIN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000003eU) | (((uint32_t)(src) <<\
                    1) & 0x0000003eU)
#define PSEQ_XTAL_BITS0__XOCAPIN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x0000003eU)))
#define PSEQ_XTAL_BITS0__XOCAPIN__RESET_VALUE                       0x0000000dU
/** @} */

/* macros for field xocapout */
/**
 * @defgroup at_apb_pseq_regs_core_xocapout_field xocapout_field
 * @brief macros for field xocapout
 * @details 16MHz crystal tuning cap on XTALO_16M pin, typically set to same value as xocapin
 * @{
 */
#define PSEQ_XTAL_BITS0__XOCAPOUT__SHIFT                                      6
#define PSEQ_XTAL_BITS0__XOCAPOUT__WIDTH                                      5
#define PSEQ_XTAL_BITS0__XOCAPOUT__MASK                             0x000007c0U
#define PSEQ_XTAL_BITS0__XOCAPOUT__READ(src) \
                    (((uint32_t)(src)\
                    & 0x000007c0U) >> 6)
#define PSEQ_XTAL_BITS0__XOCAPOUT__WRITE(src) \
                    (((uint32_t)(src)\
                    << 6) & 0x000007c0U)
#define PSEQ_XTAL_BITS0__XOCAPOUT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000007c0U) | (((uint32_t)(src) <<\
                    6) & 0x000007c0U)
#define PSEQ_XTAL_BITS0__XOCAPOUT__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 6) & ~0x000007c0U)))
#define PSEQ_XTAL_BITS0__XOCAPOUT__RESET_VALUE                      0x0000000dU
/** @} */
#define PSEQ_XTAL_BITS0__TYPE                                          uint32_t
#define PSEQ_XTAL_BITS0__READ                                       0x000007ffU
#define PSEQ_XTAL_BITS0__WRITE                                      0x000007ffU
#define PSEQ_XTAL_BITS0__PRESERVED                                  0x00000000U
#define PSEQ_XTAL_BITS0__RESET_VALUE                                0x0000035aU

#endif /* __PSEQ_XTAL_BITS0_MACRO__ */

/** @} end of xtal_bits0 */

/* macros for BlueprintGlobalNameSpace::PSEQ_xtal_bits1 */
/**
 * @defgroup at_apb_pseq_regs_core_xtal_bits1 xtal_bits1
 * @brief control signals for clk_mpc crystal circuit definitions.
 * @{
 */
#ifndef __PSEQ_XTAL_BITS1_MACRO__
#define __PSEQ_XTAL_BITS1_MACRO__

/* macros for field xobias */
/**
 * @defgroup at_apb_pseq_regs_core_xobias_field xobias_field
 * @brief macros for field xobias
 * @details 16MHz bias current setting or AGC target value when AGC enabled
 * @{
 */
#define PSEQ_XTAL_BITS1__XOBIAS__SHIFT                                        0
#define PSEQ_XTAL_BITS1__XOBIAS__WIDTH                                        4
#define PSEQ_XTAL_BITS1__XOBIAS__MASK                               0x0000000fU
#define PSEQ_XTAL_BITS1__XOBIAS__READ(src)      ((uint32_t)(src) & 0x0000000fU)
#define PSEQ_XTAL_BITS1__XOBIAS__WRITE(src)     ((uint32_t)(src) & 0x0000000fU)
#define PSEQ_XTAL_BITS1__XOBIAS__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000000fU) | ((uint32_t)(src) &\
                    0x0000000fU)
#define PSEQ_XTAL_BITS1__XOBIAS__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x0000000fU)))
#define PSEQ_XTAL_BITS1__XOBIAS__RESET_VALUE                        0x0000000cU
/** @} */

/* macros for field xoagc_en */
/**
 * @defgroup at_apb_pseq_regs_core_xoagc_en_field xoagc_en_field
 * @brief macros for field xoagc_en
 * @details Enable AGC for 16MHz xtal
 * @{
 */
#define PSEQ_XTAL_BITS1__XOAGC_EN__SHIFT                                      4
#define PSEQ_XTAL_BITS1__XOAGC_EN__WIDTH                                      1
#define PSEQ_XTAL_BITS1__XOAGC_EN__MASK                             0x00000010U
#define PSEQ_XTAL_BITS1__XOAGC_EN__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000010U) >> 4)
#define PSEQ_XTAL_BITS1__XOAGC_EN__WRITE(src) \
                    (((uint32_t)(src)\
                    << 4) & 0x00000010U)
#define PSEQ_XTAL_BITS1__XOAGC_EN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | (((uint32_t)(src) <<\
                    4) & 0x00000010U)
#define PSEQ_XTAL_BITS1__XOAGC_EN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 4) & ~0x00000010U)))
#define PSEQ_XTAL_BITS1__XOAGC_EN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(1) << 4)
#define PSEQ_XTAL_BITS1__XOAGC_EN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(0) << 4)
#define PSEQ_XTAL_BITS1__XOAGC_EN__RESET_VALUE                      0x00000001U
/** @} */

/* macros for field xofaststart */
/**
 * @defgroup at_apb_pseq_regs_core_xofaststart_field xofaststart_field
 * @brief macros for field xofaststart
 * @details Speed up crystal settling, 7 - max
 * @{
 */
#define PSEQ_XTAL_BITS1__XOFASTSTART__SHIFT                                   5
#define PSEQ_XTAL_BITS1__XOFASTSTART__WIDTH                                   3
#define PSEQ_XTAL_BITS1__XOFASTSTART__MASK                          0x000000e0U
#define PSEQ_XTAL_BITS1__XOFASTSTART__READ(src) \
                    (((uint32_t)(src)\
                    & 0x000000e0U) >> 5)
#define PSEQ_XTAL_BITS1__XOFASTSTART__WRITE(src) \
                    (((uint32_t)(src)\
                    << 5) & 0x000000e0U)
#define PSEQ_XTAL_BITS1__XOFASTSTART__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000e0U) | (((uint32_t)(src) <<\
                    5) & 0x000000e0U)
#define PSEQ_XTAL_BITS1__XOFASTSTART__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 5) & ~0x000000e0U)))
#define PSEQ_XTAL_BITS1__XOFASTSTART__RESET_VALUE                   0x00000007U
/** @} */

/* macros for field xosettle */
/**
 * @defgroup at_apb_pseq_regs_core_xosettle_field xosettle_field
 * @brief macros for field xosettle
 * @details 16MHz xtal settling time after which clock source is switched to xtal, in 64us steps, min valid setting is 1, do not set to 0
 * @{
 */
#define PSEQ_XTAL_BITS1__XOSETTLE__SHIFT                                      8
#define PSEQ_XTAL_BITS1__XOSETTLE__WIDTH                                      6
#define PSEQ_XTAL_BITS1__XOSETTLE__MASK                             0x00003f00U
#define PSEQ_XTAL_BITS1__XOSETTLE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00003f00U) >> 8)
#define PSEQ_XTAL_BITS1__XOSETTLE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x00003f00U)
#define PSEQ_XTAL_BITS1__XOSETTLE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00003f00U) | (((uint32_t)(src) <<\
                    8) & 0x00003f00U)
#define PSEQ_XTAL_BITS1__XOSETTLE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x00003f00U)))
#define PSEQ_XTAL_BITS1__XOSETTLE__RESET_VALUE                      0x00000010U
/** @} */

/* macros for field rcoscfreq */
/**
 * @defgroup at_apb_pseq_regs_core_rcoscfreq_field rcoscfreq_field
 * @brief macros for field rcoscfreq
 * @details 16MHz RC oscillator frequency tuning, 0 - slowest, 15 - fastest
 * @{
 */
#define PSEQ_XTAL_BITS1__RCOSCFREQ__SHIFT                                    14
#define PSEQ_XTAL_BITS1__RCOSCFREQ__WIDTH                                     4
#define PSEQ_XTAL_BITS1__RCOSCFREQ__MASK                            0x0003c000U
#define PSEQ_XTAL_BITS1__RCOSCFREQ__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0003c000U) >> 14)
#define PSEQ_XTAL_BITS1__RCOSCFREQ__WRITE(src) \
                    (((uint32_t)(src)\
                    << 14) & 0x0003c000U)
#define PSEQ_XTAL_BITS1__RCOSCFREQ__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0003c000U) | (((uint32_t)(src) <<\
                    14) & 0x0003c000U)
#define PSEQ_XTAL_BITS1__RCOSCFREQ__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 14) & ~0x0003c000U)))
#define PSEQ_XTAL_BITS1__RCOSCFREQ__RESET_VALUE                     0x0000000bU
/** @} */

/* macros for field doublerdcc_en */
/**
 * @defgroup at_apb_pseq_regs_core_doublerdcc_en_field doublerdcc_en_field
 * @brief macros for field doublerdcc_en
 * @details enable duty cycle correction for clock doubler
 * @{
 */
#define PSEQ_XTAL_BITS1__DOUBLERDCC_EN__SHIFT                                18
#define PSEQ_XTAL_BITS1__DOUBLERDCC_EN__WIDTH                                 1
#define PSEQ_XTAL_BITS1__DOUBLERDCC_EN__MASK                        0x00040000U
#define PSEQ_XTAL_BITS1__DOUBLERDCC_EN__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00040000U) >> 18)
#define PSEQ_XTAL_BITS1__DOUBLERDCC_EN__WRITE(src) \
                    (((uint32_t)(src)\
                    << 18) & 0x00040000U)
#define PSEQ_XTAL_BITS1__DOUBLERDCC_EN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | (((uint32_t)(src) <<\
                    18) & 0x00040000U)
#define PSEQ_XTAL_BITS1__DOUBLERDCC_EN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 18) & ~0x00040000U)))
#define PSEQ_XTAL_BITS1__DOUBLERDCC_EN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(1) << 18)
#define PSEQ_XTAL_BITS1__DOUBLERDCC_EN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(0) << 18)
#define PSEQ_XTAL_BITS1__DOUBLERDCC_EN__RESET_VALUE                 0x00000001U
/** @} */

/* macros for field clkhpc_en */
/**
 * @defgroup at_apb_pseq_regs_core_clkhpc_en_field clkhpc_en_field
 * @brief macros for field clkhpc_en
 * @details enable root clk_hpc buffer
 * @{
 */
#define PSEQ_XTAL_BITS1__CLKHPC_EN__SHIFT                                    19
#define PSEQ_XTAL_BITS1__CLKHPC_EN__WIDTH                                     1
#define PSEQ_XTAL_BITS1__CLKHPC_EN__MASK                            0x00080000U
#define PSEQ_XTAL_BITS1__CLKHPC_EN__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00080000U) >> 19)
#define PSEQ_XTAL_BITS1__CLKHPC_EN__WRITE(src) \
                    (((uint32_t)(src)\
                    << 19) & 0x00080000U)
#define PSEQ_XTAL_BITS1__CLKHPC_EN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00080000U) | (((uint32_t)(src) <<\
                    19) & 0x00080000U)
#define PSEQ_XTAL_BITS1__CLKHPC_EN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 19) & ~0x00080000U)))
#define PSEQ_XTAL_BITS1__CLKHPC_EN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00080000U) | ((uint32_t)(1) << 19)
#define PSEQ_XTAL_BITS1__CLKHPC_EN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00080000U) | ((uint32_t)(0) << 19)
#define PSEQ_XTAL_BITS1__CLKHPC_EN__RESET_VALUE                     0x00000000U
/** @} */

/* macros for field clkmpc_en */
/**
 * @defgroup at_apb_pseq_regs_core_clkmpc_en_field clkmpc_en_field
 * @brief macros for field clkmpc_en
 * @details enable root clk_mpc buffer; chip will not be operational if cleared
 * @{
 */
#define PSEQ_XTAL_BITS1__CLKMPC_EN__SHIFT                                    20
#define PSEQ_XTAL_BITS1__CLKMPC_EN__WIDTH                                     1
#define PSEQ_XTAL_BITS1__CLKMPC_EN__MASK                            0x00100000U
#define PSEQ_XTAL_BITS1__CLKMPC_EN__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00100000U) >> 20)
#define PSEQ_XTAL_BITS1__CLKMPC_EN__WRITE(src) \
                    (((uint32_t)(src)\
                    << 20) & 0x00100000U)
#define PSEQ_XTAL_BITS1__CLKMPC_EN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00100000U) | (((uint32_t)(src) <<\
                    20) & 0x00100000U)
#define PSEQ_XTAL_BITS1__CLKMPC_EN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 20) & ~0x00100000U)))
#define PSEQ_XTAL_BITS1__CLKMPC_EN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00100000U) | ((uint32_t)(1) << 20)
#define PSEQ_XTAL_BITS1__CLKMPC_EN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00100000U) | ((uint32_t)(0) << 20)
#define PSEQ_XTAL_BITS1__CLKMPC_EN__RESET_VALUE                     0x00000001U
/** @} */

/* macros for field extclk */
/**
 * @defgroup at_apb_pseq_regs_core_extclk_field extclk_field
 * @brief macros for field extclk
 * @details Set to 1 if supplying external clock source on XTALI_16M pin
 * @{
 */
#define PSEQ_XTAL_BITS1__EXTCLK__SHIFT                                       21
#define PSEQ_XTAL_BITS1__EXTCLK__WIDTH                                        1
#define PSEQ_XTAL_BITS1__EXTCLK__MASK                               0x00200000U
#define PSEQ_XTAL_BITS1__EXTCLK__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00200000U) >> 21)
#define PSEQ_XTAL_BITS1__EXTCLK__WRITE(src) \
                    (((uint32_t)(src)\
                    << 21) & 0x00200000U)
#define PSEQ_XTAL_BITS1__EXTCLK__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00200000U) | (((uint32_t)(src) <<\
                    21) & 0x00200000U)
#define PSEQ_XTAL_BITS1__EXTCLK__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 21) & ~0x00200000U)))
#define PSEQ_XTAL_BITS1__EXTCLK__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00200000U) | ((uint32_t)(1) << 21)
#define PSEQ_XTAL_BITS1__EXTCLK__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00200000U) | ((uint32_t)(0) << 21)
#define PSEQ_XTAL_BITS1__EXTCLK__RESET_VALUE                        0x00000000U
/** @} */

/* macros for field xtal_spare */
/**
 * @defgroup at_apb_pseq_regs_core_xtal_spare_field xtal_spare_field
 * @brief macros for field xtal_spare
 * @details unused spare bits (before eco, are connected to radio input but not used)  bit 5 to 2 remain unused  bit 1 is used for eco digital 6 whitening initial seed bit 0  bit 0 is used for eco digital 6 enable
 * @{
 */
#define PSEQ_XTAL_BITS1__XTAL_SPARE__SHIFT                                   22
#define PSEQ_XTAL_BITS1__XTAL_SPARE__WIDTH                                    6
#define PSEQ_XTAL_BITS1__XTAL_SPARE__MASK                           0x0fc00000U
#define PSEQ_XTAL_BITS1__XTAL_SPARE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0fc00000U) >> 22)
#define PSEQ_XTAL_BITS1__XTAL_SPARE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 22) & 0x0fc00000U)
#define PSEQ_XTAL_BITS1__XTAL_SPARE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0fc00000U) | (((uint32_t)(src) <<\
                    22) & 0x0fc00000U)
#define PSEQ_XTAL_BITS1__XTAL_SPARE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 22) & ~0x0fc00000U)))
#define PSEQ_XTAL_BITS1__XTAL_SPARE__RESET_VALUE                    0x00000000U
/** @} */
#define PSEQ_XTAL_BITS1__TYPE                                          uint32_t
#define PSEQ_XTAL_BITS1__READ                                       0x0fffffffU
#define PSEQ_XTAL_BITS1__WRITE                                      0x0fffffffU
#define PSEQ_XTAL_BITS1__PRESERVED                                  0x00000000U
#define PSEQ_XTAL_BITS1__RESET_VALUE                                0x0016d0fcU

#endif /* __PSEQ_XTAL_BITS1_MACRO__ */

/** @} end of xtal_bits1 */

/* macros for BlueprintGlobalNameSpace::PSEQ_overrides */
/**
 * @defgroup at_apb_pseq_regs_core_overrides overrides
 * @brief override portion of pmu control signals definitions.
 * @{
 */
#ifndef __PSEQ_OVERRIDES_MACRO__
#define __PSEQ_OVERRIDES_MACRO__

/* macros for field force_precision_req */
/**
 * @defgroup at_apb_pseq_regs_core_force_precision_req_field force_precision_req_field
 * @brief macros for field force_precision_req
 * @details force the type of precision when clk_mpc is requested
 * @{
 */
#define PSEQ_OVERRIDES__FORCE_PRECISION_REQ__SHIFT                            0
#define PSEQ_OVERRIDES__FORCE_PRECISION_REQ__WIDTH                            1
#define PSEQ_OVERRIDES__FORCE_PRECISION_REQ__MASK                   0x00000001U
#define PSEQ_OVERRIDES__FORCE_PRECISION_REQ__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define PSEQ_OVERRIDES__FORCE_PRECISION_REQ__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define PSEQ_OVERRIDES__FORCE_PRECISION_REQ__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define PSEQ_OVERRIDES__FORCE_PRECISION_REQ__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define PSEQ_OVERRIDES__FORCE_PRECISION_REQ__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define PSEQ_OVERRIDES__FORCE_PRECISION_REQ__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define PSEQ_OVERRIDES__FORCE_PRECISION_REQ__RESET_VALUE            0x00000000U
/** @} */

/* macros for field force_precision_val */
/**
 * @defgroup at_apb_pseq_regs_core_force_precision_val_field force_precision_val_field
 * @brief macros for field force_precision_val
 * @details when type of precision for clk_mpc is forced, what should it be?  1=high/xtal  0=low/osc
 * @{
 */
#define PSEQ_OVERRIDES__FORCE_PRECISION_VAL__SHIFT                            1
#define PSEQ_OVERRIDES__FORCE_PRECISION_VAL__WIDTH                            1
#define PSEQ_OVERRIDES__FORCE_PRECISION_VAL__MASK                   0x00000002U
#define PSEQ_OVERRIDES__FORCE_PRECISION_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define PSEQ_OVERRIDES__FORCE_PRECISION_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define PSEQ_OVERRIDES__FORCE_PRECISION_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define PSEQ_OVERRIDES__FORCE_PRECISION_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define PSEQ_OVERRIDES__FORCE_PRECISION_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define PSEQ_OVERRIDES__FORCE_PRECISION_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define PSEQ_OVERRIDES__FORCE_PRECISION_VAL__RESET_VALUE            0x00000000U
/** @} */

/* macros for field force_osc_on_req */
/**
 * @defgroup at_apb_pseq_regs_core_force_osc_on_req_field force_osc_on_req_field
 * @brief macros for field force_osc_on_req
 * @details force that clk_mpc oscillator request always be on
 * @{
 */
#define PSEQ_OVERRIDES__FORCE_OSC_ON_REQ__SHIFT                               2
#define PSEQ_OVERRIDES__FORCE_OSC_ON_REQ__WIDTH                               1
#define PSEQ_OVERRIDES__FORCE_OSC_ON_REQ__MASK                      0x00000004U
#define PSEQ_OVERRIDES__FORCE_OSC_ON_REQ__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000004U) >> 2)
#define PSEQ_OVERRIDES__FORCE_OSC_ON_REQ__WRITE(src) \
                    (((uint32_t)(src)\
                    << 2) & 0x00000004U)
#define PSEQ_OVERRIDES__FORCE_OSC_ON_REQ__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | (((uint32_t)(src) <<\
                    2) & 0x00000004U)
#define PSEQ_OVERRIDES__FORCE_OSC_ON_REQ__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 2) & ~0x00000004U)))
#define PSEQ_OVERRIDES__FORCE_OSC_ON_REQ__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(1) << 2)
#define PSEQ_OVERRIDES__FORCE_OSC_ON_REQ__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(0) << 2)
#define PSEQ_OVERRIDES__FORCE_OSC_ON_REQ__RESET_VALUE               0x00000000U
/** @} */

/* macros for field block_ble_osc_on_req */
/**
 * @defgroup at_apb_pseq_regs_core_block_ble_osc_on_req_field block_ble_osc_on_req_field
 * @brief macros for field block_ble_osc_on_req
 * @details if set, ble core cannot request clk_mpc oscillator to be enabled, mostly for debug and testing
 * @{
 */
#define PSEQ_OVERRIDES__BLOCK_BLE_OSC_ON_REQ__SHIFT                           3
#define PSEQ_OVERRIDES__BLOCK_BLE_OSC_ON_REQ__WIDTH                           1
#define PSEQ_OVERRIDES__BLOCK_BLE_OSC_ON_REQ__MASK                  0x00000008U
#define PSEQ_OVERRIDES__BLOCK_BLE_OSC_ON_REQ__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000008U) >> 3)
#define PSEQ_OVERRIDES__BLOCK_BLE_OSC_ON_REQ__WRITE(src) \
                    (((uint32_t)(src)\
                    << 3) & 0x00000008U)
#define PSEQ_OVERRIDES__BLOCK_BLE_OSC_ON_REQ__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | (((uint32_t)(src) <<\
                    3) & 0x00000008U)
#define PSEQ_OVERRIDES__BLOCK_BLE_OSC_ON_REQ__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 3) & ~0x00000008U)))
#define PSEQ_OVERRIDES__BLOCK_BLE_OSC_ON_REQ__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((uint32_t)(1) << 3)
#define PSEQ_OVERRIDES__BLOCK_BLE_OSC_ON_REQ__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((uint32_t)(0) << 3)
#define PSEQ_OVERRIDES__BLOCK_BLE_OSC_ON_REQ__RESET_VALUE           0x00000000U
/** @} */

/* macros for field block_ble_high_precision_req */
/**
 * @defgroup at_apb_pseq_regs_core_block_ble_high_precision_req_field block_ble_high_precision_req_field
 * @brief macros for field block_ble_high_precision_req
 * @details if set, ble core cannot request high precision clock, mostly for debug and testing
 * @{
 */
#define PSEQ_OVERRIDES__BLOCK_BLE_HIGH_PRECISION_REQ__SHIFT                   4
#define PSEQ_OVERRIDES__BLOCK_BLE_HIGH_PRECISION_REQ__WIDTH                   1
#define PSEQ_OVERRIDES__BLOCK_BLE_HIGH_PRECISION_REQ__MASK          0x00000010U
#define PSEQ_OVERRIDES__BLOCK_BLE_HIGH_PRECISION_REQ__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000010U) >> 4)
#define PSEQ_OVERRIDES__BLOCK_BLE_HIGH_PRECISION_REQ__WRITE(src) \
                    (((uint32_t)(src)\
                    << 4) & 0x00000010U)
#define PSEQ_OVERRIDES__BLOCK_BLE_HIGH_PRECISION_REQ__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | (((uint32_t)(src) <<\
                    4) & 0x00000010U)
#define PSEQ_OVERRIDES__BLOCK_BLE_HIGH_PRECISION_REQ__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 4) & ~0x00000010U)))
#define PSEQ_OVERRIDES__BLOCK_BLE_HIGH_PRECISION_REQ__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(1) << 4)
#define PSEQ_OVERRIDES__BLOCK_BLE_HIGH_PRECISION_REQ__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(0) << 4)
#define PSEQ_OVERRIDES__BLOCK_BLE_HIGH_PRECISION_REQ__RESET_VALUE   0x00000000U
/** @} */
#define PSEQ_OVERRIDES__TYPE                                           uint32_t
#define PSEQ_OVERRIDES__READ                                        0x0000001fU
#define PSEQ_OVERRIDES__WRITE                                       0x0000001fU
#define PSEQ_OVERRIDES__PRESERVED                                   0x00000000U
#define PSEQ_OVERRIDES__RESET_VALUE                                 0x00000000U

#endif /* __PSEQ_OVERRIDES_MACRO__ */

/** @} end of overrides */

/* macros for BlueprintGlobalNameSpace::PSEQ_overrides2 */
/**
 * @defgroup at_apb_pseq_regs_core_overrides2 overrides2
 * @brief override portion of pmu control signals definitions.
 * @{
 */
#ifndef __PSEQ_OVERRIDES2_MACRO__
#define __PSEQ_OVERRIDES2_MACRO__

/* macros for field block_cache_psd */
/**
 * @defgroup at_apb_pseq_regs_core_block_cache_psd_field block_cache_psd_field
 * @brief macros for field block_cache_psd
 * @details if set, this core's FSM cannot assert the cache PSD pin
 * @{
 */
#define PSEQ_OVERRIDES2__BLOCK_CACHE_PSD__SHIFT                               0
#define PSEQ_OVERRIDES2__BLOCK_CACHE_PSD__WIDTH                               1
#define PSEQ_OVERRIDES2__BLOCK_CACHE_PSD__MASK                      0x00000001U
#define PSEQ_OVERRIDES2__BLOCK_CACHE_PSD__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define PSEQ_OVERRIDES2__BLOCK_CACHE_PSD__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define PSEQ_OVERRIDES2__BLOCK_CACHE_PSD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define PSEQ_OVERRIDES2__BLOCK_CACHE_PSD__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define PSEQ_OVERRIDES2__BLOCK_CACHE_PSD__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define PSEQ_OVERRIDES2__BLOCK_CACHE_PSD__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define PSEQ_OVERRIDES2__BLOCK_CACHE_PSD__RESET_VALUE               0x00000000U
/** @} */

/* macros for field block_cache_vddcut */
/**
 * @defgroup at_apb_pseq_regs_core_block_cache_vddcut_field block_cache_vddcut_field
 * @brief macros for field block_cache_vddcut
 * @details if set, this core's FSM cannot power off the cache
 * @{
 */
#define PSEQ_OVERRIDES2__BLOCK_CACHE_VDDCUT__SHIFT                            1
#define PSEQ_OVERRIDES2__BLOCK_CACHE_VDDCUT__WIDTH                            1
#define PSEQ_OVERRIDES2__BLOCK_CACHE_VDDCUT__MASK                   0x00000002U
#define PSEQ_OVERRIDES2__BLOCK_CACHE_VDDCUT__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define PSEQ_OVERRIDES2__BLOCK_CACHE_VDDCUT__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define PSEQ_OVERRIDES2__BLOCK_CACHE_VDDCUT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define PSEQ_OVERRIDES2__BLOCK_CACHE_VDDCUT__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define PSEQ_OVERRIDES2__BLOCK_CACHE_VDDCUT__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define PSEQ_OVERRIDES2__BLOCK_CACHE_VDDCUT__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define PSEQ_OVERRIDES2__BLOCK_CACHE_VDDCUT__RESET_VALUE            0x00000000U
/** @} */

/* macros for field override_cache_psd_val */
/**
 * @defgroup at_apb_pseq_regs_core_override_cache_psd_val_field override_cache_psd_val_field
 * @brief macros for field override_cache_psd_val
 * @details if override is set, what value should be driven onto cache PSD pin?
 * @{
 */
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_PSD_VAL__SHIFT                        2
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_PSD_VAL__WIDTH                        1
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_PSD_VAL__MASK               0x00000004U
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_PSD_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000004U) >> 2)
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_PSD_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 2) & 0x00000004U)
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_PSD_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | (((uint32_t)(src) <<\
                    2) & 0x00000004U)
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_PSD_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 2) & ~0x00000004U)))
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_PSD_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(1) << 2)
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_PSD_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(0) << 2)
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_PSD_VAL__RESET_VALUE        0x00000000U
/** @} */

/* macros for field override_cache_psd */
/**
 * @defgroup at_apb_pseq_regs_core_override_cache_psd_field override_cache_psd_field
 * @brief macros for field override_cache_psd
 * @details if set, software now has direct control of the cache PSD pin
 * @{
 */
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_PSD__SHIFT                            3
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_PSD__WIDTH                            1
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_PSD__MASK                   0x00000008U
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_PSD__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000008U) >> 3)
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_PSD__WRITE(src) \
                    (((uint32_t)(src)\
                    << 3) & 0x00000008U)
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_PSD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | (((uint32_t)(src) <<\
                    3) & 0x00000008U)
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_PSD__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 3) & ~0x00000008U)))
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_PSD__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((uint32_t)(1) << 3)
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_PSD__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((uint32_t)(0) << 3)
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_PSD__RESET_VALUE            0x00000000U
/** @} */

/* macros for field override_cache_ret_val */
/**
 * @defgroup at_apb_pseq_regs_core_override_cache_ret_val_field override_cache_ret_val_field
 * @brief macros for field override_cache_ret_val
 * @details if override is set, what value should be driven onto cache RET pin?
 * @{
 */
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_RET_VAL__SHIFT                        4
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_RET_VAL__WIDTH                        1
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_RET_VAL__MASK               0x00000010U
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_RET_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000010U) >> 4)
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_RET_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 4) & 0x00000010U)
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_RET_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | (((uint32_t)(src) <<\
                    4) & 0x00000010U)
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_RET_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 4) & ~0x00000010U)))
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_RET_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(1) << 4)
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_RET_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(0) << 4)
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_RET_VAL__RESET_VALUE        0x00000000U
/** @} */

/* macros for field override_cache_ret */
/**
 * @defgroup at_apb_pseq_regs_core_override_cache_ret_field override_cache_ret_field
 * @brief macros for field override_cache_ret
 * @details if set, software now has direct control of the cache RET pin
 * @{
 */
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_RET__SHIFT                            5
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_RET__WIDTH                            1
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_RET__MASK                   0x00000020U
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_RET__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000020U) >> 5)
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_RET__WRITE(src) \
                    (((uint32_t)(src)\
                    << 5) & 0x00000020U)
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_RET__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | (((uint32_t)(src) <<\
                    5) & 0x00000020U)
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_RET__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 5) & ~0x00000020U)))
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_RET__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | ((uint32_t)(1) << 5)
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_RET__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | ((uint32_t)(0) << 5)
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_RET__RESET_VALUE            0x00000000U
/** @} */

/* macros for field override_cache_nap_val */
/**
 * @defgroup at_apb_pseq_regs_core_override_cache_nap_val_field override_cache_nap_val_field
 * @brief macros for field override_cache_nap_val
 * @details if override is set, what value should be driven onto cache NAP pin?
 * @{
 */
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_NAP_VAL__SHIFT                        6
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_NAP_VAL__WIDTH                        1
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_NAP_VAL__MASK               0x00000040U
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_NAP_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000040U) >> 6)
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_NAP_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 6) & 0x00000040U)
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_NAP_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000040U) | (((uint32_t)(src) <<\
                    6) & 0x00000040U)
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_NAP_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 6) & ~0x00000040U)))
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_NAP_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000040U) | ((uint32_t)(1) << 6)
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_NAP_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000040U) | ((uint32_t)(0) << 6)
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_NAP_VAL__RESET_VALUE        0x00000000U
/** @} */

/* macros for field override_cache_nap */
/**
 * @defgroup at_apb_pseq_regs_core_override_cache_nap_field override_cache_nap_field
 * @brief macros for field override_cache_nap
 * @details if set, software now has direct control of the cache NAP pin
 * @{
 */
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_NAP__SHIFT                            7
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_NAP__WIDTH                            1
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_NAP__MASK                   0x00000080U
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_NAP__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000080U) >> 7)
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_NAP__WRITE(src) \
                    (((uint32_t)(src)\
                    << 7) & 0x00000080U)
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_NAP__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000080U) | (((uint32_t)(src) <<\
                    7) & 0x00000080U)
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_NAP__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 7) & ~0x00000080U)))
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_NAP__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000080U) | ((uint32_t)(1) << 7)
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_NAP__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000080U) | ((uint32_t)(0) << 7)
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_NAP__RESET_VALUE            0x00000000U
/** @} */

/* macros for field override_cache_iso_val */
/**
 * @defgroup at_apb_pseq_regs_core_override_cache_iso_val_field override_cache_iso_val_field
 * @brief macros for field override_cache_iso_val
 * @details if override is set, what value should be driven onto cache ISO pin?
 * @{
 */
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_ISO_VAL__SHIFT                        8
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_ISO_VAL__WIDTH                        1
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_ISO_VAL__MASK               0x00000100U
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_ISO_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000100U) >> 8)
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_ISO_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x00000100U)
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_ISO_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000100U) | (((uint32_t)(src) <<\
                    8) & 0x00000100U)
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_ISO_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x00000100U)))
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_ISO_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000100U) | ((uint32_t)(1) << 8)
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_ISO_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000100U) | ((uint32_t)(0) << 8)
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_ISO_VAL__RESET_VALUE        0x00000000U
/** @} */

/* macros for field override_cache_iso */
/**
 * @defgroup at_apb_pseq_regs_core_override_cache_iso_field override_cache_iso_field
 * @brief macros for field override_cache_iso
 * @details if set, software now has direct control of the cache ISO pin
 * @{
 */
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_ISO__SHIFT                            9
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_ISO__WIDTH                            1
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_ISO__MASK                   0x00000200U
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_ISO__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000200U) >> 9)
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_ISO__WRITE(src) \
                    (((uint32_t)(src)\
                    << 9) & 0x00000200U)
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_ISO__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000200U) | (((uint32_t)(src) <<\
                    9) & 0x00000200U)
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_ISO__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 9) & ~0x00000200U)))
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_ISO__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000200U) | ((uint32_t)(1) << 9)
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_ISO__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000200U) | ((uint32_t)(0) << 9)
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_ISO__RESET_VALUE            0x00000000U
/** @} */

/* macros for field override_cache_clken_val */
/**
 * @defgroup at_apb_pseq_regs_core_override_cache_clken_val_field override_cache_clken_val_field
 * @brief macros for field override_cache_clken_val
 * @details if override is set, should the clock gate on the cache be enabled?  1=clock running  0=clock gated off
 * @{
 */
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_CLKEN_VAL__SHIFT                     10
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_CLKEN_VAL__WIDTH                      1
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_CLKEN_VAL__MASK             0x00000400U
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_CLKEN_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000400U) >> 10)
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_CLKEN_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 10) & 0x00000400U)
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_CLKEN_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000400U) | (((uint32_t)(src) <<\
                    10) & 0x00000400U)
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_CLKEN_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 10) & ~0x00000400U)))
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_CLKEN_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000400U) | ((uint32_t)(1) << 10)
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_CLKEN_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000400U) | ((uint32_t)(0) << 10)
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_CLKEN_VAL__RESET_VALUE      0x00000000U
/** @} */

/* macros for field override_cache_clken */
/**
 * @defgroup at_apb_pseq_regs_core_override_cache_clken_field override_cache_clken_field
 * @brief macros for field override_cache_clken
 * @details if set, clock gating to cache is now under software control
 * @{
 */
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_CLKEN__SHIFT                         11
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_CLKEN__WIDTH                          1
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_CLKEN__MASK                 0x00000800U
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_CLKEN__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000800U) >> 11)
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_CLKEN__WRITE(src) \
                    (((uint32_t)(src)\
                    << 11) & 0x00000800U)
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_CLKEN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000800U) | (((uint32_t)(src) <<\
                    11) & 0x00000800U)
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_CLKEN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 11) & ~0x00000800U)))
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_CLKEN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000800U) | ((uint32_t)(1) << 11)
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_CLKEN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000800U) | ((uint32_t)(0) << 11)
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_CLKEN__RESET_VALUE          0x00000000U
/** @} */

/* macros for field override_cache_vddcut_val */
/**
 * @defgroup at_apb_pseq_regs_core_override_cache_vddcut_val_field override_cache_vddcut_val_field
 * @brief macros for field override_cache_vddcut_val
 * @details if override is set, should head switch on cache be open or close?  1=open  0=close
 * @{
 */
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_VDDCUT_VAL__SHIFT                    12
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_VDDCUT_VAL__WIDTH                     1
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_VDDCUT_VAL__MASK            0x00001000U
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_VDDCUT_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00001000U) >> 12)
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_VDDCUT_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 12) & 0x00001000U)
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_VDDCUT_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00001000U) | (((uint32_t)(src) <<\
                    12) & 0x00001000U)
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_VDDCUT_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 12) & ~0x00001000U)))
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_VDDCUT_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00001000U) | ((uint32_t)(1) << 12)
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_VDDCUT_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00001000U) | ((uint32_t)(0) << 12)
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_VDDCUT_VAL__RESET_VALUE     0x00000000U
/** @} */

/* macros for field override_cache_vddcut */
/**
 * @defgroup at_apb_pseq_regs_core_override_cache_vddcut_field override_cache_vddcut_field
 * @brief macros for field override_cache_vddcut
 * @details if set, head switch on cache is now software controllable
 * @{
 */
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_VDDCUT__SHIFT                        13
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_VDDCUT__WIDTH                         1
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_VDDCUT__MASK                0x00002000U
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_VDDCUT__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00002000U) >> 13)
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_VDDCUT__WRITE(src) \
                    (((uint32_t)(src)\
                    << 13) & 0x00002000U)
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_VDDCUT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00002000U) | (((uint32_t)(src) <<\
                    13) & 0x00002000U)
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_VDDCUT__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 13) & ~0x00002000U)))
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_VDDCUT__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00002000U) | ((uint32_t)(1) << 13)
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_VDDCUT__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00002000U) | ((uint32_t)(0) << 13)
#define PSEQ_OVERRIDES2__OVERRIDE_CACHE_VDDCUT__RESET_VALUE         0x00000000U
/** @} */

/* macros for field block_sysrom_vddcut */
/**
 * @defgroup at_apb_pseq_regs_core_block_sysrom_vddcut_field block_sysrom_vddcut_field
 * @brief macros for field block_sysrom_vddcut
 * @details if set, this core's FSM cannot power down the ROM macros
 * @{
 */
#define PSEQ_OVERRIDES2__BLOCK_SYSROM_VDDCUT__SHIFT                          16
#define PSEQ_OVERRIDES2__BLOCK_SYSROM_VDDCUT__WIDTH                           1
#define PSEQ_OVERRIDES2__BLOCK_SYSROM_VDDCUT__MASK                  0x00010000U
#define PSEQ_OVERRIDES2__BLOCK_SYSROM_VDDCUT__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00010000U) >> 16)
#define PSEQ_OVERRIDES2__BLOCK_SYSROM_VDDCUT__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00010000U)
#define PSEQ_OVERRIDES2__BLOCK_SYSROM_VDDCUT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00010000U) | (((uint32_t)(src) <<\
                    16) & 0x00010000U)
#define PSEQ_OVERRIDES2__BLOCK_SYSROM_VDDCUT__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00010000U)))
#define PSEQ_OVERRIDES2__BLOCK_SYSROM_VDDCUT__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00010000U) | ((uint32_t)(1) << 16)
#define PSEQ_OVERRIDES2__BLOCK_SYSROM_VDDCUT__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00010000U) | ((uint32_t)(0) << 16)
#define PSEQ_OVERRIDES2__BLOCK_SYSROM_VDDCUT__RESET_VALUE           0x00000000U
/** @} */

/* macros for field block_efuse_vddcut */
/**
 * @defgroup at_apb_pseq_regs_core_block_efuse_vddcut_field block_efuse_vddcut_field
 * @brief macros for field block_efuse_vddcut
 * @details if set, this core's FSM cannot power down the e-fuse macros
 * @{
 */
#define PSEQ_OVERRIDES2__BLOCK_EFUSE_VDDCUT__SHIFT                           17
#define PSEQ_OVERRIDES2__BLOCK_EFUSE_VDDCUT__WIDTH                            1
#define PSEQ_OVERRIDES2__BLOCK_EFUSE_VDDCUT__MASK                   0x00020000U
#define PSEQ_OVERRIDES2__BLOCK_EFUSE_VDDCUT__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00020000U) >> 17)
#define PSEQ_OVERRIDES2__BLOCK_EFUSE_VDDCUT__WRITE(src) \
                    (((uint32_t)(src)\
                    << 17) & 0x00020000U)
#define PSEQ_OVERRIDES2__BLOCK_EFUSE_VDDCUT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | (((uint32_t)(src) <<\
                    17) & 0x00020000U)
#define PSEQ_OVERRIDES2__BLOCK_EFUSE_VDDCUT__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 17) & ~0x00020000U)))
#define PSEQ_OVERRIDES2__BLOCK_EFUSE_VDDCUT__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(1) << 17)
#define PSEQ_OVERRIDES2__BLOCK_EFUSE_VDDCUT__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(0) << 17)
#define PSEQ_OVERRIDES2__BLOCK_EFUSE_VDDCUT__RESET_VALUE            0x00000000U
/** @} */
#define PSEQ_OVERRIDES2__TYPE                                          uint32_t
#define PSEQ_OVERRIDES2__READ                                       0x00033fffU
#define PSEQ_OVERRIDES2__WRITE                                      0x00033fffU
#define PSEQ_OVERRIDES2__PRESERVED                                  0x00000000U
#define PSEQ_OVERRIDES2__RESET_VALUE                                0x00000000U

#endif /* __PSEQ_OVERRIDES2_MACRO__ */

/** @} end of overrides2 */

/* macros for BlueprintGlobalNameSpace::PSEQ_overrides3 */
/**
 * @defgroup at_apb_pseq_regs_core_overrides3 overrides3
 * @brief override portion of pmu control signals definitions.
 * @{
 */
#ifndef __PSEQ_OVERRIDES3_MACRO__
#define __PSEQ_OVERRIDES3_MACRO__

/* macros for field override_sysrom_clken_val */
/**
 * @defgroup at_apb_pseq_regs_core_override_sysrom_clken_val_field override_sysrom_clken_val_field
 * @brief macros for field override_sysrom_clken_val
 * @details if override is set, what value should be driven onto rom clock enable pin?
 * @{
 */
#define PSEQ_OVERRIDES3__OVERRIDE_SYSROM_CLKEN_VAL__SHIFT                     6
#define PSEQ_OVERRIDES3__OVERRIDE_SYSROM_CLKEN_VAL__WIDTH                     1
#define PSEQ_OVERRIDES3__OVERRIDE_SYSROM_CLKEN_VAL__MASK            0x00000040U
#define PSEQ_OVERRIDES3__OVERRIDE_SYSROM_CLKEN_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000040U) >> 6)
#define PSEQ_OVERRIDES3__OVERRIDE_SYSROM_CLKEN_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 6) & 0x00000040U)
#define PSEQ_OVERRIDES3__OVERRIDE_SYSROM_CLKEN_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000040U) | (((uint32_t)(src) <<\
                    6) & 0x00000040U)
#define PSEQ_OVERRIDES3__OVERRIDE_SYSROM_CLKEN_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 6) & ~0x00000040U)))
#define PSEQ_OVERRIDES3__OVERRIDE_SYSROM_CLKEN_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000040U) | ((uint32_t)(1) << 6)
#define PSEQ_OVERRIDES3__OVERRIDE_SYSROM_CLKEN_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000040U) | ((uint32_t)(0) << 6)
#define PSEQ_OVERRIDES3__OVERRIDE_SYSROM_CLKEN_VAL__RESET_VALUE     0x00000000U
/** @} */

/* macros for field override_sysrom_clken */
/**
 * @defgroup at_apb_pseq_regs_core_override_sysrom_clken_field override_sysrom_clken_field
 * @brief macros for field override_sysrom_clken
 * @details if set, software now has direct control of the rom clock enable pin
 * @{
 */
#define PSEQ_OVERRIDES3__OVERRIDE_SYSROM_CLKEN__SHIFT                         7
#define PSEQ_OVERRIDES3__OVERRIDE_SYSROM_CLKEN__WIDTH                         1
#define PSEQ_OVERRIDES3__OVERRIDE_SYSROM_CLKEN__MASK                0x00000080U
#define PSEQ_OVERRIDES3__OVERRIDE_SYSROM_CLKEN__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000080U) >> 7)
#define PSEQ_OVERRIDES3__OVERRIDE_SYSROM_CLKEN__WRITE(src) \
                    (((uint32_t)(src)\
                    << 7) & 0x00000080U)
#define PSEQ_OVERRIDES3__OVERRIDE_SYSROM_CLKEN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000080U) | (((uint32_t)(src) <<\
                    7) & 0x00000080U)
#define PSEQ_OVERRIDES3__OVERRIDE_SYSROM_CLKEN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 7) & ~0x00000080U)))
#define PSEQ_OVERRIDES3__OVERRIDE_SYSROM_CLKEN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000080U) | ((uint32_t)(1) << 7)
#define PSEQ_OVERRIDES3__OVERRIDE_SYSROM_CLKEN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000080U) | ((uint32_t)(0) << 7)
#define PSEQ_OVERRIDES3__OVERRIDE_SYSROM_CLKEN__RESET_VALUE         0x00000000U
/** @} */

/* macros for field override_sysrom_iso_val */
/**
 * @defgroup at_apb_pseq_regs_core_override_sysrom_iso_val_field override_sysrom_iso_val_field
 * @brief macros for field override_sysrom_iso_val
 * @details if override is set, what value should be driven onto rom ISO pin?
 * @{
 */
#define PSEQ_OVERRIDES3__OVERRIDE_SYSROM_ISO_VAL__SHIFT                       8
#define PSEQ_OVERRIDES3__OVERRIDE_SYSROM_ISO_VAL__WIDTH                       1
#define PSEQ_OVERRIDES3__OVERRIDE_SYSROM_ISO_VAL__MASK              0x00000100U
#define PSEQ_OVERRIDES3__OVERRIDE_SYSROM_ISO_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000100U) >> 8)
#define PSEQ_OVERRIDES3__OVERRIDE_SYSROM_ISO_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x00000100U)
#define PSEQ_OVERRIDES3__OVERRIDE_SYSROM_ISO_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000100U) | (((uint32_t)(src) <<\
                    8) & 0x00000100U)
#define PSEQ_OVERRIDES3__OVERRIDE_SYSROM_ISO_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x00000100U)))
#define PSEQ_OVERRIDES3__OVERRIDE_SYSROM_ISO_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000100U) | ((uint32_t)(1) << 8)
#define PSEQ_OVERRIDES3__OVERRIDE_SYSROM_ISO_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000100U) | ((uint32_t)(0) << 8)
#define PSEQ_OVERRIDES3__OVERRIDE_SYSROM_ISO_VAL__RESET_VALUE       0x00000000U
/** @} */

/* macros for field override_sysrom_iso */
/**
 * @defgroup at_apb_pseq_regs_core_override_sysrom_iso_field override_sysrom_iso_field
 * @brief macros for field override_sysrom_iso
 * @details if set, software now has direct control of the rom ISO pin
 * @{
 */
#define PSEQ_OVERRIDES3__OVERRIDE_SYSROM_ISO__SHIFT                           9
#define PSEQ_OVERRIDES3__OVERRIDE_SYSROM_ISO__WIDTH                           1
#define PSEQ_OVERRIDES3__OVERRIDE_SYSROM_ISO__MASK                  0x00000200U
#define PSEQ_OVERRIDES3__OVERRIDE_SYSROM_ISO__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000200U) >> 9)
#define PSEQ_OVERRIDES3__OVERRIDE_SYSROM_ISO__WRITE(src) \
                    (((uint32_t)(src)\
                    << 9) & 0x00000200U)
#define PSEQ_OVERRIDES3__OVERRIDE_SYSROM_ISO__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000200U) | (((uint32_t)(src) <<\
                    9) & 0x00000200U)
#define PSEQ_OVERRIDES3__OVERRIDE_SYSROM_ISO__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 9) & ~0x00000200U)))
#define PSEQ_OVERRIDES3__OVERRIDE_SYSROM_ISO__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000200U) | ((uint32_t)(1) << 9)
#define PSEQ_OVERRIDES3__OVERRIDE_SYSROM_ISO__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000200U) | ((uint32_t)(0) << 9)
#define PSEQ_OVERRIDES3__OVERRIDE_SYSROM_ISO__RESET_VALUE           0x00000000U
/** @} */

/* macros for field override_sysrom_psd_val */
/**
 * @defgroup at_apb_pseq_regs_core_override_sysrom_psd_val_field override_sysrom_psd_val_field
 * @brief macros for field override_sysrom_psd_val
 * @details if override is set, what value should be driven onto rom PSD pin?
 * @{
 */
#define PSEQ_OVERRIDES3__OVERRIDE_SYSROM_PSD_VAL__SHIFT                      10
#define PSEQ_OVERRIDES3__OVERRIDE_SYSROM_PSD_VAL__WIDTH                       1
#define PSEQ_OVERRIDES3__OVERRIDE_SYSROM_PSD_VAL__MASK              0x00000400U
#define PSEQ_OVERRIDES3__OVERRIDE_SYSROM_PSD_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000400U) >> 10)
#define PSEQ_OVERRIDES3__OVERRIDE_SYSROM_PSD_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 10) & 0x00000400U)
#define PSEQ_OVERRIDES3__OVERRIDE_SYSROM_PSD_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000400U) | (((uint32_t)(src) <<\
                    10) & 0x00000400U)
#define PSEQ_OVERRIDES3__OVERRIDE_SYSROM_PSD_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 10) & ~0x00000400U)))
#define PSEQ_OVERRIDES3__OVERRIDE_SYSROM_PSD_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000400U) | ((uint32_t)(1) << 10)
#define PSEQ_OVERRIDES3__OVERRIDE_SYSROM_PSD_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000400U) | ((uint32_t)(0) << 10)
#define PSEQ_OVERRIDES3__OVERRIDE_SYSROM_PSD_VAL__RESET_VALUE       0x00000000U
/** @} */

/* macros for field override_sysrom_psd */
/**
 * @defgroup at_apb_pseq_regs_core_override_sysrom_psd_field override_sysrom_psd_field
 * @brief macros for field override_sysrom_psd
 * @details if set, software now has direct control of the rom PSD pin
 * @{
 */
#define PSEQ_OVERRIDES3__OVERRIDE_SYSROM_PSD__SHIFT                          11
#define PSEQ_OVERRIDES3__OVERRIDE_SYSROM_PSD__WIDTH                           1
#define PSEQ_OVERRIDES3__OVERRIDE_SYSROM_PSD__MASK                  0x00000800U
#define PSEQ_OVERRIDES3__OVERRIDE_SYSROM_PSD__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000800U) >> 11)
#define PSEQ_OVERRIDES3__OVERRIDE_SYSROM_PSD__WRITE(src) \
                    (((uint32_t)(src)\
                    << 11) & 0x00000800U)
#define PSEQ_OVERRIDES3__OVERRIDE_SYSROM_PSD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000800U) | (((uint32_t)(src) <<\
                    11) & 0x00000800U)
#define PSEQ_OVERRIDES3__OVERRIDE_SYSROM_PSD__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 11) & ~0x00000800U)))
#define PSEQ_OVERRIDES3__OVERRIDE_SYSROM_PSD__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000800U) | ((uint32_t)(1) << 11)
#define PSEQ_OVERRIDES3__OVERRIDE_SYSROM_PSD__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000800U) | ((uint32_t)(0) << 11)
#define PSEQ_OVERRIDES3__OVERRIDE_SYSROM_PSD__RESET_VALUE           0x00000000U
/** @} */
#define PSEQ_OVERRIDES3__TYPE                                          uint32_t
#define PSEQ_OVERRIDES3__READ                                       0x00000fc0U
#define PSEQ_OVERRIDES3__WRITE                                      0x00000fc0U
#define PSEQ_OVERRIDES3__PRESERVED                                  0x00000000U
#define PSEQ_OVERRIDES3__RESET_VALUE                                0x00000000U

#endif /* __PSEQ_OVERRIDES3_MACRO__ */

/** @} end of overrides3 */

/* macros for BlueprintGlobalNameSpace::PSEQ_overrides4 */
/**
 * @defgroup at_apb_pseq_regs_core_overrides4 overrides4
 * @brief override portion of pmu control signals definitions.
 * @{
 */
#ifndef __PSEQ_OVERRIDES4_MACRO__
#define __PSEQ_OVERRIDES4_MACRO__

/* macros for field override_ble_clken_val */
/**
 * @defgroup at_apb_pseq_regs_core_override_ble_clken_val_field override_ble_clken_val_field
 * @brief macros for field override_ble_clken_val
 * @details if override is set, what value should be driven onto the ble domain's clock enable signal?
 * @{
 */
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_CLKEN_VAL__SHIFT                        0
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_CLKEN_VAL__WIDTH                        1
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_CLKEN_VAL__MASK               0x00000001U
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_CLKEN_VAL__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_CLKEN_VAL__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_CLKEN_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_CLKEN_VAL__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_CLKEN_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_CLKEN_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_CLKEN_VAL__RESET_VALUE        0x00000000U
/** @} */

/* macros for field override_ble_clken */
/**
 * @defgroup at_apb_pseq_regs_core_override_ble_clken_field override_ble_clken_field
 * @brief macros for field override_ble_clken
 * @details if set, software now has direct control of the clock enable signal going to the ble domain
 * @{
 */
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_CLKEN__SHIFT                            1
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_CLKEN__WIDTH                            1
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_CLKEN__MASK                   0x00000002U
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_CLKEN__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_CLKEN__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_CLKEN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_CLKEN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_CLKEN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_CLKEN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_CLKEN__RESET_VALUE            0x00000000U
/** @} */

/* macros for field override_ble_frst_val */
/**
 * @defgroup at_apb_pseq_regs_core_override_ble_frst_val_field override_ble_frst_val_field
 * @brief macros for field override_ble_frst_val
 * @details if override is set, what value should be driven onto the ble domain's forced reset signal?
 * @{
 */
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_FRST_VAL__SHIFT                         2
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_FRST_VAL__WIDTH                         1
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_FRST_VAL__MASK                0x00000004U
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_FRST_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000004U) >> 2)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_FRST_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 2) & 0x00000004U)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_FRST_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | (((uint32_t)(src) <<\
                    2) & 0x00000004U)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_FRST_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 2) & ~0x00000004U)))
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_FRST_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(1) << 2)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_FRST_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(0) << 2)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_FRST_VAL__RESET_VALUE         0x00000000U
/** @} */

/* macros for field override_ble_frst */
/**
 * @defgroup at_apb_pseq_regs_core_override_ble_frst_field override_ble_frst_field
 * @brief macros for field override_ble_frst
 * @details if set, software now has direct control of the forced reset signal going to the ble domain
 * @{
 */
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_FRST__SHIFT                             3
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_FRST__WIDTH                             1
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_FRST__MASK                    0x00000008U
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_FRST__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000008U) >> 3)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_FRST__WRITE(src) \
                    (((uint32_t)(src)\
                    << 3) & 0x00000008U)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_FRST__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | (((uint32_t)(src) <<\
                    3) & 0x00000008U)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_FRST__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 3) & ~0x00000008U)))
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_FRST__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((uint32_t)(1) << 3)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_FRST__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((uint32_t)(0) << 3)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_FRST__RESET_VALUE             0x00000000U
/** @} */

/* macros for field override_ble_iso_val */
/**
 * @defgroup at_apb_pseq_regs_core_override_ble_iso_val_field override_ble_iso_val_field
 * @brief macros for field override_ble_iso_val
 * @details if override is set, what value should be driven onto the ble domain's iso signal?
 * @{
 */
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_ISO_VAL__SHIFT                          4
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_ISO_VAL__WIDTH                          1
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_ISO_VAL__MASK                 0x00000010U
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_ISO_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000010U) >> 4)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_ISO_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 4) & 0x00000010U)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_ISO_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | (((uint32_t)(src) <<\
                    4) & 0x00000010U)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_ISO_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 4) & ~0x00000010U)))
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_ISO_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(1) << 4)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_ISO_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(0) << 4)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_ISO_VAL__RESET_VALUE          0x00000000U
/** @} */

/* macros for field override_ble_iso */
/**
 * @defgroup at_apb_pseq_regs_core_override_ble_iso_field override_ble_iso_field
 * @brief macros for field override_ble_iso
 * @details if set, software now has direct control of the iso signal going to the ble domain
 * @{
 */
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_ISO__SHIFT                              5
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_ISO__WIDTH                              1
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_ISO__MASK                     0x00000020U
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_ISO__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000020U) >> 5)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_ISO__WRITE(src) \
                    (((uint32_t)(src)\
                    << 5) & 0x00000020U)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_ISO__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | (((uint32_t)(src) <<\
                    5) & 0x00000020U)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_ISO__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 5) & ~0x00000020U)))
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_ISO__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | ((uint32_t)(1) << 5)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_ISO__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | ((uint32_t)(0) << 5)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_ISO__RESET_VALUE              0x00000000U
/** @} */

/* macros for field override_ble_kill_val */
/**
 * @defgroup at_apb_pseq_regs_core_override_ble_kill_val_field override_ble_kill_val_field
 * @brief macros for field override_ble_kill_val
 * @details if override is set, what value should be driven onto the ble domain's kill signal?
 * @{
 */
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_KILL_VAL__SHIFT                         6
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_KILL_VAL__WIDTH                         1
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_KILL_VAL__MASK                0x00000040U
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_KILL_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000040U) >> 6)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_KILL_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 6) & 0x00000040U)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_KILL_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000040U) | (((uint32_t)(src) <<\
                    6) & 0x00000040U)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_KILL_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 6) & ~0x00000040U)))
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_KILL_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000040U) | ((uint32_t)(1) << 6)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_KILL_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000040U) | ((uint32_t)(0) << 6)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_KILL_VAL__RESET_VALUE         0x00000000U
/** @} */

/* macros for field override_ble_kill */
/**
 * @defgroup at_apb_pseq_regs_core_override_ble_kill_field override_ble_kill_field
 * @brief macros for field override_ble_kill
 * @details if set, software now has direct control of the kill signal going to the ble domain
 * @{
 */
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_KILL__SHIFT                             7
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_KILL__WIDTH                             1
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_KILL__MASK                    0x00000080U
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_KILL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000080U) >> 7)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_KILL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 7) & 0x00000080U)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_KILL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000080U) | (((uint32_t)(src) <<\
                    7) & 0x00000080U)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_KILL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 7) & ~0x00000080U)))
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_KILL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000080U) | ((uint32_t)(1) << 7)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_KILL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000080U) | ((uint32_t)(0) << 7)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_KILL__RESET_VALUE             0x00000000U
/** @} */

/* macros for field override_ble_sleep_val */
/**
 * @defgroup at_apb_pseq_regs_core_override_ble_sleep_val_field override_ble_sleep_val_field
 * @brief macros for field override_ble_sleep_val
 * @details if override is set, what value should be driven onto the ble domain's sleep signal?
 * @{
 */
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_SLEEP_VAL__SHIFT                        8
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_SLEEP_VAL__WIDTH                        1
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_SLEEP_VAL__MASK               0x00000100U
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_SLEEP_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000100U) >> 8)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_SLEEP_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x00000100U)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_SLEEP_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000100U) | (((uint32_t)(src) <<\
                    8) & 0x00000100U)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_SLEEP_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x00000100U)))
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_SLEEP_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000100U) | ((uint32_t)(1) << 8)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_SLEEP_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000100U) | ((uint32_t)(0) << 8)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_SLEEP_VAL__RESET_VALUE        0x00000000U
/** @} */

/* macros for field override_ble_sleep */
/**
 * @defgroup at_apb_pseq_regs_core_override_ble_sleep_field override_ble_sleep_field
 * @brief macros for field override_ble_sleep
 * @details if set, software now has direct control of the sleep signal going to the ble domain
 * @{
 */
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_SLEEP__SHIFT                            9
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_SLEEP__WIDTH                            1
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_SLEEP__MASK                   0x00000200U
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_SLEEP__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000200U) >> 9)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_SLEEP__WRITE(src) \
                    (((uint32_t)(src)\
                    << 9) & 0x00000200U)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_SLEEP__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000200U) | (((uint32_t)(src) <<\
                    9) & 0x00000200U)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_SLEEP__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 9) & ~0x00000200U)))
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_SLEEP__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000200U) | ((uint32_t)(1) << 9)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_SLEEP__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000200U) | ((uint32_t)(0) << 9)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_SLEEP__RESET_VALUE            0x00000000U
/** @} */

/* macros for field override_ble_loadb_val */
/**
 * @defgroup at_apb_pseq_regs_core_override_ble_loadb_val_field override_ble_loadb_val_field
 * @brief macros for field override_ble_loadb_val
 * @details if override is set, what value should be driven onto the ble domain's load signal?
 * @{
 */
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_LOADB_VAL__SHIFT                       10
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_LOADB_VAL__WIDTH                        1
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_LOADB_VAL__MASK               0x00000400U
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_LOADB_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000400U) >> 10)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_LOADB_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 10) & 0x00000400U)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_LOADB_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000400U) | (((uint32_t)(src) <<\
                    10) & 0x00000400U)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_LOADB_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 10) & ~0x00000400U)))
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_LOADB_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000400U) | ((uint32_t)(1) << 10)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_LOADB_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000400U) | ((uint32_t)(0) << 10)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_LOADB_VAL__RESET_VALUE        0x00000000U
/** @} */

/* macros for field override_ble_loadb */
/**
 * @defgroup at_apb_pseq_regs_core_override_ble_loadb_field override_ble_loadb_field
 * @brief macros for field override_ble_loadb
 * @details if set, software now has direct control of the load signal going to the ble domain
 * @{
 */
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_LOADB__SHIFT                           11
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_LOADB__WIDTH                            1
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_LOADB__MASK                   0x00000800U
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_LOADB__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000800U) >> 11)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_LOADB__WRITE(src) \
                    (((uint32_t)(src)\
                    << 11) & 0x00000800U)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_LOADB__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000800U) | (((uint32_t)(src) <<\
                    11) & 0x00000800U)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_LOADB__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 11) & ~0x00000800U)))
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_LOADB__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000800U) | ((uint32_t)(1) << 11)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_LOADB__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000800U) | ((uint32_t)(0) << 11)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_LOADB__RESET_VALUE            0x00000000U
/** @} */

/* macros for field override_ble_retn_val */
/**
 * @defgroup at_apb_pseq_regs_core_override_ble_retn_val_field override_ble_retn_val_field
 * @brief macros for field override_ble_retn_val
 * @details if override is set, what value should be driven onto the ble domain's retain signal?
 * @{
 */
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_RETN_VAL__SHIFT                        12
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_RETN_VAL__WIDTH                         1
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_RETN_VAL__MASK                0x00001000U
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_RETN_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00001000U) >> 12)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_RETN_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 12) & 0x00001000U)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_RETN_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00001000U) | (((uint32_t)(src) <<\
                    12) & 0x00001000U)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_RETN_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 12) & ~0x00001000U)))
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_RETN_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00001000U) | ((uint32_t)(1) << 12)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_RETN_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00001000U) | ((uint32_t)(0) << 12)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_RETN_VAL__RESET_VALUE         0x00000000U
/** @} */

/* macros for field override_ble_retn */
/**
 * @defgroup at_apb_pseq_regs_core_override_ble_retn_field override_ble_retn_field
 * @brief macros for field override_ble_retn
 * @details if set, software now has direct control of the retain signal going to the ble domain
 * @{
 */
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_RETN__SHIFT                            13
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_RETN__WIDTH                             1
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_RETN__MASK                    0x00002000U
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_RETN__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00002000U) >> 13)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_RETN__WRITE(src) \
                    (((uint32_t)(src)\
                    << 13) & 0x00002000U)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_RETN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00002000U) | (((uint32_t)(src) <<\
                    13) & 0x00002000U)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_RETN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 13) & ~0x00002000U)))
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_RETN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00002000U) | ((uint32_t)(1) << 13)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_RETN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00002000U) | ((uint32_t)(0) << 13)
#define PSEQ_OVERRIDES4__OVERRIDE_BLE_RETN__RESET_VALUE             0x00000000U
/** @} */

/* macros for field override_pnr_clken_val */
/**
 * @defgroup at_apb_pseq_regs_core_override_pnr_clken_val_field override_pnr_clken_val_field
 * @brief macros for field override_pnr_clken_val
 * @details if override is set, what value should be driven onto the cpu domain's clock enable signal?
 * @{
 */
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_CLKEN_VAL__SHIFT                       14
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_CLKEN_VAL__WIDTH                        1
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_CLKEN_VAL__MASK               0x00004000U
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_CLKEN_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00004000U) >> 14)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_CLKEN_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 14) & 0x00004000U)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_CLKEN_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00004000U) | (((uint32_t)(src) <<\
                    14) & 0x00004000U)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_CLKEN_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 14) & ~0x00004000U)))
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_CLKEN_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00004000U) | ((uint32_t)(1) << 14)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_CLKEN_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00004000U) | ((uint32_t)(0) << 14)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_CLKEN_VAL__RESET_VALUE        0x00000000U
/** @} */

/* macros for field override_pnr_clken */
/**
 * @defgroup at_apb_pseq_regs_core_override_pnr_clken_field override_pnr_clken_field
 * @brief macros for field override_pnr_clken
 * @details if set, software now has direct control of the clock enable signal going to the cpu domain
 * @{
 */
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_CLKEN__SHIFT                           15
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_CLKEN__WIDTH                            1
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_CLKEN__MASK                   0x00008000U
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_CLKEN__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00008000U) >> 15)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_CLKEN__WRITE(src) \
                    (((uint32_t)(src)\
                    << 15) & 0x00008000U)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_CLKEN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00008000U) | (((uint32_t)(src) <<\
                    15) & 0x00008000U)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_CLKEN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 15) & ~0x00008000U)))
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_CLKEN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00008000U) | ((uint32_t)(1) << 15)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_CLKEN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00008000U) | ((uint32_t)(0) << 15)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_CLKEN__RESET_VALUE            0x00000000U
/** @} */

/* macros for field override_pnr_frst_val */
/**
 * @defgroup at_apb_pseq_regs_core_override_pnr_frst_val_field override_pnr_frst_val_field
 * @brief macros for field override_pnr_frst_val
 * @details if override is set, what value should be driven onto the cpu domain's forced reset signal?
 * @{
 */
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_FRST_VAL__SHIFT                        16
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_FRST_VAL__WIDTH                         1
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_FRST_VAL__MASK                0x00010000U
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_FRST_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00010000U) >> 16)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_FRST_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00010000U)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_FRST_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00010000U) | (((uint32_t)(src) <<\
                    16) & 0x00010000U)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_FRST_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00010000U)))
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_FRST_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00010000U) | ((uint32_t)(1) << 16)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_FRST_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00010000U) | ((uint32_t)(0) << 16)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_FRST_VAL__RESET_VALUE         0x00000000U
/** @} */

/* macros for field override_pnr_frst */
/**
 * @defgroup at_apb_pseq_regs_core_override_pnr_frst_field override_pnr_frst_field
 * @brief macros for field override_pnr_frst
 * @details if set, software now has direct control of the forced reset signal going to the cpu domain
 * @{
 */
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_FRST__SHIFT                            17
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_FRST__WIDTH                             1
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_FRST__MASK                    0x00020000U
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_FRST__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00020000U) >> 17)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_FRST__WRITE(src) \
                    (((uint32_t)(src)\
                    << 17) & 0x00020000U)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_FRST__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | (((uint32_t)(src) <<\
                    17) & 0x00020000U)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_FRST__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 17) & ~0x00020000U)))
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_FRST__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(1) << 17)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_FRST__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(0) << 17)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_FRST__RESET_VALUE             0x00000000U
/** @} */

/* macros for field override_pnr_iso_val */
/**
 * @defgroup at_apb_pseq_regs_core_override_pnr_iso_val_field override_pnr_iso_val_field
 * @brief macros for field override_pnr_iso_val
 * @details if override is set, what value should be driven onto the cpu domain's iso signal?
 * @{
 */
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_ISO_VAL__SHIFT                         18
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_ISO_VAL__WIDTH                          1
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_ISO_VAL__MASK                 0x00040000U
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_ISO_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00040000U) >> 18)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_ISO_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 18) & 0x00040000U)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_ISO_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | (((uint32_t)(src) <<\
                    18) & 0x00040000U)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_ISO_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 18) & ~0x00040000U)))
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_ISO_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(1) << 18)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_ISO_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(0) << 18)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_ISO_VAL__RESET_VALUE          0x00000000U
/** @} */

/* macros for field override_pnr_iso */
/**
 * @defgroup at_apb_pseq_regs_core_override_pnr_iso_field override_pnr_iso_field
 * @brief macros for field override_pnr_iso
 * @details if set, software now has direct control of the iso signal going to the cpu domain
 * @{
 */
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_ISO__SHIFT                             19
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_ISO__WIDTH                              1
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_ISO__MASK                     0x00080000U
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_ISO__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00080000U) >> 19)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_ISO__WRITE(src) \
                    (((uint32_t)(src)\
                    << 19) & 0x00080000U)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_ISO__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00080000U) | (((uint32_t)(src) <<\
                    19) & 0x00080000U)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_ISO__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 19) & ~0x00080000U)))
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_ISO__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00080000U) | ((uint32_t)(1) << 19)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_ISO__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00080000U) | ((uint32_t)(0) << 19)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_ISO__RESET_VALUE              0x00000000U
/** @} */

/* macros for field override_pnr_kill_val */
/**
 * @defgroup at_apb_pseq_regs_core_override_pnr_kill_val_field override_pnr_kill_val_field
 * @brief macros for field override_pnr_kill_val
 * @details if override is set, what value should be driven onto the cpu domain's kill signal?
 * @{
 */
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_KILL_VAL__SHIFT                        20
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_KILL_VAL__WIDTH                         1
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_KILL_VAL__MASK                0x00100000U
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_KILL_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00100000U) >> 20)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_KILL_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 20) & 0x00100000U)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_KILL_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00100000U) | (((uint32_t)(src) <<\
                    20) & 0x00100000U)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_KILL_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 20) & ~0x00100000U)))
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_KILL_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00100000U) | ((uint32_t)(1) << 20)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_KILL_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00100000U) | ((uint32_t)(0) << 20)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_KILL_VAL__RESET_VALUE         0x00000000U
/** @} */

/* macros for field override_pnr_kill */
/**
 * @defgroup at_apb_pseq_regs_core_override_pnr_kill_field override_pnr_kill_field
 * @brief macros for field override_pnr_kill
 * @details if set, software now has direct control of the kill signal going to the cpu domain
 * @{
 */
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_KILL__SHIFT                            21
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_KILL__WIDTH                             1
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_KILL__MASK                    0x00200000U
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_KILL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00200000U) >> 21)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_KILL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 21) & 0x00200000U)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_KILL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00200000U) | (((uint32_t)(src) <<\
                    21) & 0x00200000U)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_KILL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 21) & ~0x00200000U)))
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_KILL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00200000U) | ((uint32_t)(1) << 21)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_KILL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00200000U) | ((uint32_t)(0) << 21)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_KILL__RESET_VALUE             0x00000000U
/** @} */

/* macros for field override_pnr_sleep_val */
/**
 * @defgroup at_apb_pseq_regs_core_override_pnr_sleep_val_field override_pnr_sleep_val_field
 * @brief macros for field override_pnr_sleep_val
 * @details if override is set, what value should be driven onto the cpu domain's sleep signal?
 * @{
 */
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_SLEEP_VAL__SHIFT                       22
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_SLEEP_VAL__WIDTH                        1
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_SLEEP_VAL__MASK               0x00400000U
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_SLEEP_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00400000U) >> 22)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_SLEEP_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 22) & 0x00400000U)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_SLEEP_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00400000U) | (((uint32_t)(src) <<\
                    22) & 0x00400000U)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_SLEEP_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 22) & ~0x00400000U)))
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_SLEEP_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00400000U) | ((uint32_t)(1) << 22)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_SLEEP_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00400000U) | ((uint32_t)(0) << 22)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_SLEEP_VAL__RESET_VALUE        0x00000000U
/** @} */

/* macros for field override_pnr_sleep */
/**
 * @defgroup at_apb_pseq_regs_core_override_pnr_sleep_field override_pnr_sleep_field
 * @brief macros for field override_pnr_sleep
 * @details if set, software now has direct control of the sleep signal going to the cpu domain
 * @{
 */
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_SLEEP__SHIFT                           23
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_SLEEP__WIDTH                            1
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_SLEEP__MASK                   0x00800000U
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_SLEEP__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00800000U) >> 23)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_SLEEP__WRITE(src) \
                    (((uint32_t)(src)\
                    << 23) & 0x00800000U)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_SLEEP__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | (((uint32_t)(src) <<\
                    23) & 0x00800000U)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_SLEEP__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 23) & ~0x00800000U)))
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_SLEEP__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(1) << 23)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_SLEEP__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(0) << 23)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_SLEEP__RESET_VALUE            0x00000000U
/** @} */

/* macros for field override_pnr_loadb_val */
/**
 * @defgroup at_apb_pseq_regs_core_override_pnr_loadb_val_field override_pnr_loadb_val_field
 * @brief macros for field override_pnr_loadb_val
 * @details if override is set, what value should be driven onto the cpu domain's load signal?
 * @{
 */
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_LOADB_VAL__SHIFT                       24
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_LOADB_VAL__WIDTH                        1
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_LOADB_VAL__MASK               0x01000000U
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_LOADB_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x01000000U) >> 24)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_LOADB_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0x01000000U)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_LOADB_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | (((uint32_t)(src) <<\
                    24) & 0x01000000U)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_LOADB_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x01000000U)))
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_LOADB_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(1) << 24)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_LOADB_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(0) << 24)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_LOADB_VAL__RESET_VALUE        0x00000000U
/** @} */

/* macros for field override_pnr_loadb */
/**
 * @defgroup at_apb_pseq_regs_core_override_pnr_loadb_field override_pnr_loadb_field
 * @brief macros for field override_pnr_loadb
 * @details if set, software now has direct control of the load signal going to the cpu domain
 * @{
 */
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_LOADB__SHIFT                           25
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_LOADB__WIDTH                            1
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_LOADB__MASK                   0x02000000U
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_LOADB__READ(src) \
                    (((uint32_t)(src)\
                    & 0x02000000U) >> 25)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_LOADB__WRITE(src) \
                    (((uint32_t)(src)\
                    << 25) & 0x02000000U)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_LOADB__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x02000000U) | (((uint32_t)(src) <<\
                    25) & 0x02000000U)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_LOADB__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 25) & ~0x02000000U)))
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_LOADB__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x02000000U) | ((uint32_t)(1) << 25)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_LOADB__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x02000000U) | ((uint32_t)(0) << 25)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_LOADB__RESET_VALUE            0x00000000U
/** @} */

/* macros for field override_pnr_retn_val */
/**
 * @defgroup at_apb_pseq_regs_core_override_pnr_retn_val_field override_pnr_retn_val_field
 * @brief macros for field override_pnr_retn_val
 * @details if override is set, what value should be driven onto the cpu domain's retain signal?
 * @{
 */
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_RETN_VAL__SHIFT                        26
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_RETN_VAL__WIDTH                         1
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_RETN_VAL__MASK                0x04000000U
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_RETN_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x04000000U) >> 26)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_RETN_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 26) & 0x04000000U)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_RETN_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x04000000U) | (((uint32_t)(src) <<\
                    26) & 0x04000000U)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_RETN_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 26) & ~0x04000000U)))
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_RETN_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x04000000U) | ((uint32_t)(1) << 26)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_RETN_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x04000000U) | ((uint32_t)(0) << 26)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_RETN_VAL__RESET_VALUE         0x00000000U
/** @} */

/* macros for field override_pnr_retn */
/**
 * @defgroup at_apb_pseq_regs_core_override_pnr_retn_field override_pnr_retn_field
 * @brief macros for field override_pnr_retn
 * @details if set, software now has direct control of the retain signal going to the cpu domain
 * @{
 */
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_RETN__SHIFT                            27
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_RETN__WIDTH                             1
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_RETN__MASK                    0x08000000U
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_RETN__READ(src) \
                    (((uint32_t)(src)\
                    & 0x08000000U) >> 27)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_RETN__WRITE(src) \
                    (((uint32_t)(src)\
                    << 27) & 0x08000000U)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_RETN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x08000000U) | (((uint32_t)(src) <<\
                    27) & 0x08000000U)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_RETN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 27) & ~0x08000000U)))
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_RETN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x08000000U) | ((uint32_t)(1) << 27)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_RETN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x08000000U) | ((uint32_t)(0) << 27)
#define PSEQ_OVERRIDES4__OVERRIDE_PNR_RETN__RESET_VALUE             0x00000000U
/** @} */

/* macros for field override_efuse_iso_val */
/**
 * @defgroup at_apb_pseq_regs_core_override_efuse_iso_val_field override_efuse_iso_val_field
 * @brief macros for field override_efuse_iso_val
 * @details if override is set, what value should be driven onto e-fuse ISO pin?
 * @{
 */
#define PSEQ_OVERRIDES4__OVERRIDE_EFUSE_ISO_VAL__SHIFT                       28
#define PSEQ_OVERRIDES4__OVERRIDE_EFUSE_ISO_VAL__WIDTH                        1
#define PSEQ_OVERRIDES4__OVERRIDE_EFUSE_ISO_VAL__MASK               0x10000000U
#define PSEQ_OVERRIDES4__OVERRIDE_EFUSE_ISO_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x10000000U) >> 28)
#define PSEQ_OVERRIDES4__OVERRIDE_EFUSE_ISO_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 28) & 0x10000000U)
#define PSEQ_OVERRIDES4__OVERRIDE_EFUSE_ISO_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x10000000U) | (((uint32_t)(src) <<\
                    28) & 0x10000000U)
#define PSEQ_OVERRIDES4__OVERRIDE_EFUSE_ISO_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 28) & ~0x10000000U)))
#define PSEQ_OVERRIDES4__OVERRIDE_EFUSE_ISO_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x10000000U) | ((uint32_t)(1) << 28)
#define PSEQ_OVERRIDES4__OVERRIDE_EFUSE_ISO_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x10000000U) | ((uint32_t)(0) << 28)
#define PSEQ_OVERRIDES4__OVERRIDE_EFUSE_ISO_VAL__RESET_VALUE        0x00000000U
/** @} */

/* macros for field override_efuse_iso */
/**
 * @defgroup at_apb_pseq_regs_core_override_efuse_iso_field override_efuse_iso_field
 * @brief macros for field override_efuse_iso
 * @details if set, software now has direct control of the e-fuse ISO pin
 * @{
 */
#define PSEQ_OVERRIDES4__OVERRIDE_EFUSE_ISO__SHIFT                           29
#define PSEQ_OVERRIDES4__OVERRIDE_EFUSE_ISO__WIDTH                            1
#define PSEQ_OVERRIDES4__OVERRIDE_EFUSE_ISO__MASK                   0x20000000U
#define PSEQ_OVERRIDES4__OVERRIDE_EFUSE_ISO__READ(src) \
                    (((uint32_t)(src)\
                    & 0x20000000U) >> 29)
#define PSEQ_OVERRIDES4__OVERRIDE_EFUSE_ISO__WRITE(src) \
                    (((uint32_t)(src)\
                    << 29) & 0x20000000U)
#define PSEQ_OVERRIDES4__OVERRIDE_EFUSE_ISO__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x20000000U) | (((uint32_t)(src) <<\
                    29) & 0x20000000U)
#define PSEQ_OVERRIDES4__OVERRIDE_EFUSE_ISO__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 29) & ~0x20000000U)))
#define PSEQ_OVERRIDES4__OVERRIDE_EFUSE_ISO__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x20000000U) | ((uint32_t)(1) << 29)
#define PSEQ_OVERRIDES4__OVERRIDE_EFUSE_ISO__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x20000000U) | ((uint32_t)(0) << 29)
#define PSEQ_OVERRIDES4__OVERRIDE_EFUSE_ISO__RESET_VALUE            0x00000000U
/** @} */

/* macros for field override_efuse_vddcut_val */
/**
 * @defgroup at_apb_pseq_regs_core_override_efuse_vddcut_val_field override_efuse_vddcut_val_field
 * @brief macros for field override_efuse_vddcut_val
 * @details if override is set, should head switch on e-fuse be open or close?  1=open  0=close
 * @{
 */
#define PSEQ_OVERRIDES4__OVERRIDE_EFUSE_VDDCUT_VAL__SHIFT                    30
#define PSEQ_OVERRIDES4__OVERRIDE_EFUSE_VDDCUT_VAL__WIDTH                     1
#define PSEQ_OVERRIDES4__OVERRIDE_EFUSE_VDDCUT_VAL__MASK            0x40000000U
#define PSEQ_OVERRIDES4__OVERRIDE_EFUSE_VDDCUT_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x40000000U) >> 30)
#define PSEQ_OVERRIDES4__OVERRIDE_EFUSE_VDDCUT_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 30) & 0x40000000U)
#define PSEQ_OVERRIDES4__OVERRIDE_EFUSE_VDDCUT_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x40000000U) | (((uint32_t)(src) <<\
                    30) & 0x40000000U)
#define PSEQ_OVERRIDES4__OVERRIDE_EFUSE_VDDCUT_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 30) & ~0x40000000U)))
#define PSEQ_OVERRIDES4__OVERRIDE_EFUSE_VDDCUT_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x40000000U) | ((uint32_t)(1) << 30)
#define PSEQ_OVERRIDES4__OVERRIDE_EFUSE_VDDCUT_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x40000000U) | ((uint32_t)(0) << 30)
#define PSEQ_OVERRIDES4__OVERRIDE_EFUSE_VDDCUT_VAL__RESET_VALUE     0x00000000U
/** @} */

/* macros for field override_efuse_vddcut */
/**
 * @defgroup at_apb_pseq_regs_core_override_efuse_vddcut_field override_efuse_vddcut_field
 * @brief macros for field override_efuse_vddcut
 * @details if set, head switch on e-fuse is now software controllable
 * @{
 */
#define PSEQ_OVERRIDES4__OVERRIDE_EFUSE_VDDCUT__SHIFT                        31
#define PSEQ_OVERRIDES4__OVERRIDE_EFUSE_VDDCUT__WIDTH                         1
#define PSEQ_OVERRIDES4__OVERRIDE_EFUSE_VDDCUT__MASK                0x80000000U
#define PSEQ_OVERRIDES4__OVERRIDE_EFUSE_VDDCUT__READ(src) \
                    (((uint32_t)(src)\
                    & 0x80000000U) >> 31)
#define PSEQ_OVERRIDES4__OVERRIDE_EFUSE_VDDCUT__WRITE(src) \
                    (((uint32_t)(src)\
                    << 31) & 0x80000000U)
#define PSEQ_OVERRIDES4__OVERRIDE_EFUSE_VDDCUT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x80000000U) | (((uint32_t)(src) <<\
                    31) & 0x80000000U)
#define PSEQ_OVERRIDES4__OVERRIDE_EFUSE_VDDCUT__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 31) & ~0x80000000U)))
#define PSEQ_OVERRIDES4__OVERRIDE_EFUSE_VDDCUT__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x80000000U) | ((uint32_t)(1) << 31)
#define PSEQ_OVERRIDES4__OVERRIDE_EFUSE_VDDCUT__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x80000000U) | ((uint32_t)(0) << 31)
#define PSEQ_OVERRIDES4__OVERRIDE_EFUSE_VDDCUT__RESET_VALUE         0x00000000U
/** @} */
#define PSEQ_OVERRIDES4__TYPE                                          uint32_t
#define PSEQ_OVERRIDES4__READ                                       0xffffffffU
#define PSEQ_OVERRIDES4__WRITE                                      0xffffffffU
#define PSEQ_OVERRIDES4__PRESERVED                                  0x00000000U
#define PSEQ_OVERRIDES4__RESET_VALUE                                0x00000000U

#endif /* __PSEQ_OVERRIDES4_MACRO__ */

/** @} end of overrides4 */

/* macros for BlueprintGlobalNameSpace::PSEQ_overrides5 */
/**
 * @defgroup at_apb_pseq_regs_core_overrides5 overrides5
 * @brief override portion of pmu control signals definitions.
 * @{
 */
#ifndef __PSEQ_OVERRIDES5_MACRO__
#define __PSEQ_OVERRIDES5_MACRO__

/* macros for field override_ble_frstdp_val */
/**
 * @defgroup at_apb_pseq_regs_core_override_ble_frstdp_val_field override_ble_frstdp_val_field
 * @brief macros for field override_ble_frstdp_val
 * @details If override is set, what value is the ble domain's datapath forced reset.
 * @{
 */
#define PSEQ_OVERRIDES5__OVERRIDE_BLE_FRSTDP_VAL__SHIFT                      16
#define PSEQ_OVERRIDES5__OVERRIDE_BLE_FRSTDP_VAL__WIDTH                       1
#define PSEQ_OVERRIDES5__OVERRIDE_BLE_FRSTDP_VAL__MASK              0x00010000U
#define PSEQ_OVERRIDES5__OVERRIDE_BLE_FRSTDP_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00010000U) >> 16)
#define PSEQ_OVERRIDES5__OVERRIDE_BLE_FRSTDP_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00010000U)
#define PSEQ_OVERRIDES5__OVERRIDE_BLE_FRSTDP_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00010000U) | (((uint32_t)(src) <<\
                    16) & 0x00010000U)
#define PSEQ_OVERRIDES5__OVERRIDE_BLE_FRSTDP_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00010000U)))
#define PSEQ_OVERRIDES5__OVERRIDE_BLE_FRSTDP_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00010000U) | ((uint32_t)(1) << 16)
#define PSEQ_OVERRIDES5__OVERRIDE_BLE_FRSTDP_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00010000U) | ((uint32_t)(0) << 16)
#define PSEQ_OVERRIDES5__OVERRIDE_BLE_FRSTDP_VAL__RESET_VALUE       0x00000000U
/** @} */

/* macros for field override_ble_frstdp */
/**
 * @defgroup at_apb_pseq_regs_core_override_ble_frstdp_field override_ble_frstdp_field
 * @brief macros for field override_ble_frstdp
 * @details If set, software now has direct control of ble domain's datapath forced reset. Not all state is retained even in Retain All state.
 * @{
 */
#define PSEQ_OVERRIDES5__OVERRIDE_BLE_FRSTDP__SHIFT                          17
#define PSEQ_OVERRIDES5__OVERRIDE_BLE_FRSTDP__WIDTH                           1
#define PSEQ_OVERRIDES5__OVERRIDE_BLE_FRSTDP__MASK                  0x00020000U
#define PSEQ_OVERRIDES5__OVERRIDE_BLE_FRSTDP__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00020000U) >> 17)
#define PSEQ_OVERRIDES5__OVERRIDE_BLE_FRSTDP__WRITE(src) \
                    (((uint32_t)(src)\
                    << 17) & 0x00020000U)
#define PSEQ_OVERRIDES5__OVERRIDE_BLE_FRSTDP__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | (((uint32_t)(src) <<\
                    17) & 0x00020000U)
#define PSEQ_OVERRIDES5__OVERRIDE_BLE_FRSTDP__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 17) & ~0x00020000U)))
#define PSEQ_OVERRIDES5__OVERRIDE_BLE_FRSTDP__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(1) << 17)
#define PSEQ_OVERRIDES5__OVERRIDE_BLE_FRSTDP__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(0) << 17)
#define PSEQ_OVERRIDES5__OVERRIDE_BLE_FRSTDP__RESET_VALUE           0x00000000U
/** @} */

/* macros for field override_radio_iso_val */
/**
 * @defgroup at_apb_pseq_regs_core_override_radio_iso_val_field override_radio_iso_val_field
 * @brief macros for field override_radio_iso_val
 * @details If override is set, what value is the radio isolation signal?
 * @{
 */
#define PSEQ_OVERRIDES5__OVERRIDE_RADIO_ISO_VAL__SHIFT                       18
#define PSEQ_OVERRIDES5__OVERRIDE_RADIO_ISO_VAL__WIDTH                        1
#define PSEQ_OVERRIDES5__OVERRIDE_RADIO_ISO_VAL__MASK               0x00040000U
#define PSEQ_OVERRIDES5__OVERRIDE_RADIO_ISO_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00040000U) >> 18)
#define PSEQ_OVERRIDES5__OVERRIDE_RADIO_ISO_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 18) & 0x00040000U)
#define PSEQ_OVERRIDES5__OVERRIDE_RADIO_ISO_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | (((uint32_t)(src) <<\
                    18) & 0x00040000U)
#define PSEQ_OVERRIDES5__OVERRIDE_RADIO_ISO_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 18) & ~0x00040000U)))
#define PSEQ_OVERRIDES5__OVERRIDE_RADIO_ISO_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(1) << 18)
#define PSEQ_OVERRIDES5__OVERRIDE_RADIO_ISO_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(0) << 18)
#define PSEQ_OVERRIDES5__OVERRIDE_RADIO_ISO_VAL__RESET_VALUE        0x00000000U
/** @} */

/* macros for field override_radio_iso */
/**
 * @defgroup at_apb_pseq_regs_core_override_radio_iso_field override_radio_iso_field
 * @brief macros for field override_radio_iso
 * @details If set, software now has direct control of radio isolation signal .
 * @{
 */
#define PSEQ_OVERRIDES5__OVERRIDE_RADIO_ISO__SHIFT                           19
#define PSEQ_OVERRIDES5__OVERRIDE_RADIO_ISO__WIDTH                            1
#define PSEQ_OVERRIDES5__OVERRIDE_RADIO_ISO__MASK                   0x00080000U
#define PSEQ_OVERRIDES5__OVERRIDE_RADIO_ISO__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00080000U) >> 19)
#define PSEQ_OVERRIDES5__OVERRIDE_RADIO_ISO__WRITE(src) \
                    (((uint32_t)(src)\
                    << 19) & 0x00080000U)
#define PSEQ_OVERRIDES5__OVERRIDE_RADIO_ISO__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00080000U) | (((uint32_t)(src) <<\
                    19) & 0x00080000U)
#define PSEQ_OVERRIDES5__OVERRIDE_RADIO_ISO__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 19) & ~0x00080000U)))
#define PSEQ_OVERRIDES5__OVERRIDE_RADIO_ISO__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00080000U) | ((uint32_t)(1) << 19)
#define PSEQ_OVERRIDES5__OVERRIDE_RADIO_ISO__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00080000U) | ((uint32_t)(0) << 19)
#define PSEQ_OVERRIDES5__OVERRIDE_RADIO_ISO__RESET_VALUE            0x00000000U
/** @} */

/* macros for field override_wreq_val */
/**
 * @defgroup at_apb_pseq_regs_core_override_wreq_val_field override_wreq_val_field
 * @brief macros for field override_wreq_val
 * @details If override is set, what value is value of wake up request? Useful for debug/test of pseq interrupt.  0=no wake  1=wake
 * @{
 */
#define PSEQ_OVERRIDES5__OVERRIDE_WREQ_VAL__SHIFT                            20
#define PSEQ_OVERRIDES5__OVERRIDE_WREQ_VAL__WIDTH                             1
#define PSEQ_OVERRIDES5__OVERRIDE_WREQ_VAL__MASK                    0x00100000U
#define PSEQ_OVERRIDES5__OVERRIDE_WREQ_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00100000U) >> 20)
#define PSEQ_OVERRIDES5__OVERRIDE_WREQ_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 20) & 0x00100000U)
#define PSEQ_OVERRIDES5__OVERRIDE_WREQ_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00100000U) | (((uint32_t)(src) <<\
                    20) & 0x00100000U)
#define PSEQ_OVERRIDES5__OVERRIDE_WREQ_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 20) & ~0x00100000U)))
#define PSEQ_OVERRIDES5__OVERRIDE_WREQ_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00100000U) | ((uint32_t)(1) << 20)
#define PSEQ_OVERRIDES5__OVERRIDE_WREQ_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00100000U) | ((uint32_t)(0) << 20)
#define PSEQ_OVERRIDES5__OVERRIDE_WREQ_VAL__RESET_VALUE             0x00000000U
/** @} */

/* macros for field override_wreq */
/**
 * @defgroup at_apb_pseq_regs_core_override_wreq_field override_wreq_field
 * @brief macros for field override_wreq
 * @details If set, software now has direct control of wake up request.
 * @{
 */
#define PSEQ_OVERRIDES5__OVERRIDE_WREQ__SHIFT                                21
#define PSEQ_OVERRIDES5__OVERRIDE_WREQ__WIDTH                                 1
#define PSEQ_OVERRIDES5__OVERRIDE_WREQ__MASK                        0x00200000U
#define PSEQ_OVERRIDES5__OVERRIDE_WREQ__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00200000U) >> 21)
#define PSEQ_OVERRIDES5__OVERRIDE_WREQ__WRITE(src) \
                    (((uint32_t)(src)\
                    << 21) & 0x00200000U)
#define PSEQ_OVERRIDES5__OVERRIDE_WREQ__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00200000U) | (((uint32_t)(src) <<\
                    21) & 0x00200000U)
#define PSEQ_OVERRIDES5__OVERRIDE_WREQ__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 21) & ~0x00200000U)))
#define PSEQ_OVERRIDES5__OVERRIDE_WREQ__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00200000U) | ((uint32_t)(1) << 21)
#define PSEQ_OVERRIDES5__OVERRIDE_WREQ__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00200000U) | ((uint32_t)(0) << 21)
#define PSEQ_OVERRIDES5__OVERRIDE_WREQ__RESET_VALUE                 0x00000000U
/** @} */

/* macros for field override_radio_frst_b_val */
/**
 * @defgroup at_apb_pseq_regs_core_override_radio_frst_b_val_field override_radio_frst_b_val_field
 * @brief macros for field override_radio_frst_b_val
 * @details If override is set, what value is the radio forced reset?  0=forced reset is enabled  1=forced reset is disabled
 * @{
 */
#define PSEQ_OVERRIDES5__OVERRIDE_RADIO_FRST_B_VAL__SHIFT                    22
#define PSEQ_OVERRIDES5__OVERRIDE_RADIO_FRST_B_VAL__WIDTH                     1
#define PSEQ_OVERRIDES5__OVERRIDE_RADIO_FRST_B_VAL__MASK            0x00400000U
#define PSEQ_OVERRIDES5__OVERRIDE_RADIO_FRST_B_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00400000U) >> 22)
#define PSEQ_OVERRIDES5__OVERRIDE_RADIO_FRST_B_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 22) & 0x00400000U)
#define PSEQ_OVERRIDES5__OVERRIDE_RADIO_FRST_B_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00400000U) | (((uint32_t)(src) <<\
                    22) & 0x00400000U)
#define PSEQ_OVERRIDES5__OVERRIDE_RADIO_FRST_B_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 22) & ~0x00400000U)))
#define PSEQ_OVERRIDES5__OVERRIDE_RADIO_FRST_B_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00400000U) | ((uint32_t)(1) << 22)
#define PSEQ_OVERRIDES5__OVERRIDE_RADIO_FRST_B_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00400000U) | ((uint32_t)(0) << 22)
#define PSEQ_OVERRIDES5__OVERRIDE_RADIO_FRST_B_VAL__RESET_VALUE     0x00000000U
/** @} */

/* macros for field override_radio_frst_b */
/**
 * @defgroup at_apb_pseq_regs_core_override_radio_frst_b_field override_radio_frst_b_field
 * @brief macros for field override_radio_frst_b
 * @details If set, software now has direct control of radio forced reset .
 * @{
 */
#define PSEQ_OVERRIDES5__OVERRIDE_RADIO_FRST_B__SHIFT                        23
#define PSEQ_OVERRIDES5__OVERRIDE_RADIO_FRST_B__WIDTH                         1
#define PSEQ_OVERRIDES5__OVERRIDE_RADIO_FRST_B__MASK                0x00800000U
#define PSEQ_OVERRIDES5__OVERRIDE_RADIO_FRST_B__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00800000U) >> 23)
#define PSEQ_OVERRIDES5__OVERRIDE_RADIO_FRST_B__WRITE(src) \
                    (((uint32_t)(src)\
                    << 23) & 0x00800000U)
#define PSEQ_OVERRIDES5__OVERRIDE_RADIO_FRST_B__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | (((uint32_t)(src) <<\
                    23) & 0x00800000U)
#define PSEQ_OVERRIDES5__OVERRIDE_RADIO_FRST_B__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 23) & ~0x00800000U)))
#define PSEQ_OVERRIDES5__OVERRIDE_RADIO_FRST_B__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(1) << 23)
#define PSEQ_OVERRIDES5__OVERRIDE_RADIO_FRST_B__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(0) << 23)
#define PSEQ_OVERRIDES5__OVERRIDE_RADIO_FRST_B__RESET_VALUE         0x00000000U
/** @} */

/* macros for field override_cutvdd_b_val */
/**
 * @defgroup at_apb_pseq_regs_core_override_cutvdd_b_val_field override_cutvdd_b_val_field
 * @brief macros for field override_cutvdd_b_val
 * @details If override is set, what value is the radio enable?  0=head switches are open  1=head switches are closed
 * @{
 */
#define PSEQ_OVERRIDES5__OVERRIDE_CUTVDD_B_VAL__SHIFT                        24
#define PSEQ_OVERRIDES5__OVERRIDE_CUTVDD_B_VAL__WIDTH                         1
#define PSEQ_OVERRIDES5__OVERRIDE_CUTVDD_B_VAL__MASK                0x01000000U
#define PSEQ_OVERRIDES5__OVERRIDE_CUTVDD_B_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x01000000U) >> 24)
#define PSEQ_OVERRIDES5__OVERRIDE_CUTVDD_B_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0x01000000U)
#define PSEQ_OVERRIDES5__OVERRIDE_CUTVDD_B_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | (((uint32_t)(src) <<\
                    24) & 0x01000000U)
#define PSEQ_OVERRIDES5__OVERRIDE_CUTVDD_B_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x01000000U)))
#define PSEQ_OVERRIDES5__OVERRIDE_CUTVDD_B_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(1) << 24)
#define PSEQ_OVERRIDES5__OVERRIDE_CUTVDD_B_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(0) << 24)
#define PSEQ_OVERRIDES5__OVERRIDE_CUTVDD_B_VAL__RESET_VALUE         0x00000000U
/** @} */

/* macros for field override_cutvdd_b */
/**
 * @defgroup at_apb_pseq_regs_core_override_cutvdd_b_field override_cutvdd_b_field
 * @brief macros for field override_cutvdd_b
 * @details If set, software now has direct control of radio head switches.
 * @{
 */
#define PSEQ_OVERRIDES5__OVERRIDE_CUTVDD_B__SHIFT                            25
#define PSEQ_OVERRIDES5__OVERRIDE_CUTVDD_B__WIDTH                             1
#define PSEQ_OVERRIDES5__OVERRIDE_CUTVDD_B__MASK                    0x02000000U
#define PSEQ_OVERRIDES5__OVERRIDE_CUTVDD_B__READ(src) \
                    (((uint32_t)(src)\
                    & 0x02000000U) >> 25)
#define PSEQ_OVERRIDES5__OVERRIDE_CUTVDD_B__WRITE(src) \
                    (((uint32_t)(src)\
                    << 25) & 0x02000000U)
#define PSEQ_OVERRIDES5__OVERRIDE_CUTVDD_B__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x02000000U) | (((uint32_t)(src) <<\
                    25) & 0x02000000U)
#define PSEQ_OVERRIDES5__OVERRIDE_CUTVDD_B__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 25) & ~0x02000000U)))
#define PSEQ_OVERRIDES5__OVERRIDE_CUTVDD_B__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x02000000U) | ((uint32_t)(1) << 25)
#define PSEQ_OVERRIDES5__OVERRIDE_CUTVDD_B__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x02000000U) | ((uint32_t)(0) << 25)
#define PSEQ_OVERRIDES5__OVERRIDE_CUTVDD_B__RESET_VALUE             0x00000000U
/** @} */

/* macros for field override_radio_en_o_val */
/**
 * @defgroup at_apb_pseq_regs_core_override_radio_en_o_val_field override_radio_en_o_val_field
 * @brief macros for field override_radio_en_o_val
 * @details If override is set, what value is the radio enable?  0=off  1=on
 * @{
 */
#define PSEQ_OVERRIDES5__OVERRIDE_RADIO_EN_O_VAL__SHIFT                      26
#define PSEQ_OVERRIDES5__OVERRIDE_RADIO_EN_O_VAL__WIDTH                       1
#define PSEQ_OVERRIDES5__OVERRIDE_RADIO_EN_O_VAL__MASK              0x04000000U
#define PSEQ_OVERRIDES5__OVERRIDE_RADIO_EN_O_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x04000000U) >> 26)
#define PSEQ_OVERRIDES5__OVERRIDE_RADIO_EN_O_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 26) & 0x04000000U)
#define PSEQ_OVERRIDES5__OVERRIDE_RADIO_EN_O_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x04000000U) | (((uint32_t)(src) <<\
                    26) & 0x04000000U)
#define PSEQ_OVERRIDES5__OVERRIDE_RADIO_EN_O_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 26) & ~0x04000000U)))
#define PSEQ_OVERRIDES5__OVERRIDE_RADIO_EN_O_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x04000000U) | ((uint32_t)(1) << 26)
#define PSEQ_OVERRIDES5__OVERRIDE_RADIO_EN_O_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x04000000U) | ((uint32_t)(0) << 26)
#define PSEQ_OVERRIDES5__OVERRIDE_RADIO_EN_O_VAL__RESET_VALUE       0x00000000U
/** @} */

/* macros for field override_radio_en_o */
/**
 * @defgroup at_apb_pseq_regs_core_override_radio_en_o_field override_radio_en_o_field
 * @brief macros for field override_radio_en_o
 * @details If set, software now has direct control of radio enable.
 * @{
 */
#define PSEQ_OVERRIDES5__OVERRIDE_RADIO_EN_O__SHIFT                          27
#define PSEQ_OVERRIDES5__OVERRIDE_RADIO_EN_O__WIDTH                           1
#define PSEQ_OVERRIDES5__OVERRIDE_RADIO_EN_O__MASK                  0x08000000U
#define PSEQ_OVERRIDES5__OVERRIDE_RADIO_EN_O__READ(src) \
                    (((uint32_t)(src)\
                    & 0x08000000U) >> 27)
#define PSEQ_OVERRIDES5__OVERRIDE_RADIO_EN_O__WRITE(src) \
                    (((uint32_t)(src)\
                    << 27) & 0x08000000U)
#define PSEQ_OVERRIDES5__OVERRIDE_RADIO_EN_O__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x08000000U) | (((uint32_t)(src) <<\
                    27) & 0x08000000U)
#define PSEQ_OVERRIDES5__OVERRIDE_RADIO_EN_O__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 27) & ~0x08000000U)))
#define PSEQ_OVERRIDES5__OVERRIDE_RADIO_EN_O__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x08000000U) | ((uint32_t)(1) << 27)
#define PSEQ_OVERRIDES5__OVERRIDE_RADIO_EN_O__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x08000000U) | ((uint32_t)(0) << 27)
#define PSEQ_OVERRIDES5__OVERRIDE_RADIO_EN_O__RESET_VALUE           0x00000000U
/** @} */

/* macros for field override_retv_val */
/**
 * @defgroup at_apb_pseq_regs_core_override_retv_val_field override_retv_val_field
 * @brief macros for field override_retv_val
 * @details If override is set, what value is the memory retention voltage?  0=nominal  1=ultra low
 * @{
 */
#define PSEQ_OVERRIDES5__OVERRIDE_RETV_VAL__SHIFT                            28
#define PSEQ_OVERRIDES5__OVERRIDE_RETV_VAL__WIDTH                             1
#define PSEQ_OVERRIDES5__OVERRIDE_RETV_VAL__MASK                    0x10000000U
#define PSEQ_OVERRIDES5__OVERRIDE_RETV_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x10000000U) >> 28)
#define PSEQ_OVERRIDES5__OVERRIDE_RETV_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 28) & 0x10000000U)
#define PSEQ_OVERRIDES5__OVERRIDE_RETV_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x10000000U) | (((uint32_t)(src) <<\
                    28) & 0x10000000U)
#define PSEQ_OVERRIDES5__OVERRIDE_RETV_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 28) & ~0x10000000U)))
#define PSEQ_OVERRIDES5__OVERRIDE_RETV_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x10000000U) | ((uint32_t)(1) << 28)
#define PSEQ_OVERRIDES5__OVERRIDE_RETV_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x10000000U) | ((uint32_t)(0) << 28)
#define PSEQ_OVERRIDES5__OVERRIDE_RETV_VAL__RESET_VALUE             0x00000000U
/** @} */

/* macros for field override_retv */
/**
 * @defgroup at_apb_pseq_regs_core_override_retv_field override_retv_field
 * @brief macros for field override_retv
 * @details If set, software now has direct control of the memory retention voltage.
 * @{
 */
#define PSEQ_OVERRIDES5__OVERRIDE_RETV__SHIFT                                29
#define PSEQ_OVERRIDES5__OVERRIDE_RETV__WIDTH                                 1
#define PSEQ_OVERRIDES5__OVERRIDE_RETV__MASK                        0x20000000U
#define PSEQ_OVERRIDES5__OVERRIDE_RETV__READ(src) \
                    (((uint32_t)(src)\
                    & 0x20000000U) >> 29)
#define PSEQ_OVERRIDES5__OVERRIDE_RETV__WRITE(src) \
                    (((uint32_t)(src)\
                    << 29) & 0x20000000U)
#define PSEQ_OVERRIDES5__OVERRIDE_RETV__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x20000000U) | (((uint32_t)(src) <<\
                    29) & 0x20000000U)
#define PSEQ_OVERRIDES5__OVERRIDE_RETV__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 29) & ~0x20000000U)))
#define PSEQ_OVERRIDES5__OVERRIDE_RETV__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x20000000U) | ((uint32_t)(1) << 29)
#define PSEQ_OVERRIDES5__OVERRIDE_RETV__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x20000000U) | ((uint32_t)(0) << 29)
#define PSEQ_OVERRIDES5__OVERRIDE_RETV__RESET_VALUE                 0x00000000U
/** @} */

/* macros for field override_xtal_val */
/**
 * @defgroup at_apb_pseq_regs_core_override_xtal_val_field override_xtal_val_field
 * @brief macros for field override_xtal_val
 * @details If override is set, what value is clk_mpc's cystal circuit enable?  0=off  1=on
 * @{
 */
#define PSEQ_OVERRIDES5__OVERRIDE_XTAL_VAL__SHIFT                            30
#define PSEQ_OVERRIDES5__OVERRIDE_XTAL_VAL__WIDTH                             1
#define PSEQ_OVERRIDES5__OVERRIDE_XTAL_VAL__MASK                    0x40000000U
#define PSEQ_OVERRIDES5__OVERRIDE_XTAL_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x40000000U) >> 30)
#define PSEQ_OVERRIDES5__OVERRIDE_XTAL_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 30) & 0x40000000U)
#define PSEQ_OVERRIDES5__OVERRIDE_XTAL_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x40000000U) | (((uint32_t)(src) <<\
                    30) & 0x40000000U)
#define PSEQ_OVERRIDES5__OVERRIDE_XTAL_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 30) & ~0x40000000U)))
#define PSEQ_OVERRIDES5__OVERRIDE_XTAL_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x40000000U) | ((uint32_t)(1) << 30)
#define PSEQ_OVERRIDES5__OVERRIDE_XTAL_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x40000000U) | ((uint32_t)(0) << 30)
#define PSEQ_OVERRIDES5__OVERRIDE_XTAL_VAL__RESET_VALUE             0x00000000U
/** @} */

/* macros for field override_xtal */
/**
 * @defgroup at_apb_pseq_regs_core_override_xtal_field override_xtal_field
 * @brief macros for field override_xtal
 * @details If set, software now has direct control of clk_mpc's crystal circuit enable.
 * @{
 */
#define PSEQ_OVERRIDES5__OVERRIDE_XTAL__SHIFT                                31
#define PSEQ_OVERRIDES5__OVERRIDE_XTAL__WIDTH                                 1
#define PSEQ_OVERRIDES5__OVERRIDE_XTAL__MASK                        0x80000000U
#define PSEQ_OVERRIDES5__OVERRIDE_XTAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x80000000U) >> 31)
#define PSEQ_OVERRIDES5__OVERRIDE_XTAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 31) & 0x80000000U)
#define PSEQ_OVERRIDES5__OVERRIDE_XTAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x80000000U) | (((uint32_t)(src) <<\
                    31) & 0x80000000U)
#define PSEQ_OVERRIDES5__OVERRIDE_XTAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 31) & ~0x80000000U)))
#define PSEQ_OVERRIDES5__OVERRIDE_XTAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x80000000U) | ((uint32_t)(1) << 31)
#define PSEQ_OVERRIDES5__OVERRIDE_XTAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x80000000U) | ((uint32_t)(0) << 31)
#define PSEQ_OVERRIDES5__OVERRIDE_XTAL__RESET_VALUE                 0x00000000U
/** @} */
#define PSEQ_OVERRIDES5__TYPE                                          uint32_t
#define PSEQ_OVERRIDES5__READ                                       0xffff0000U
#define PSEQ_OVERRIDES5__WRITE                                      0xffff0000U
#define PSEQ_OVERRIDES5__PRESERVED                                  0x00000000U
#define PSEQ_OVERRIDES5__RESET_VALUE                                0x00000000U

#endif /* __PSEQ_OVERRIDES5_MACRO__ */

/** @} end of overrides5 */

/* macros for BlueprintGlobalNameSpace::PSEQ_sysram_overrides */
/**
 * @defgroup at_apb_pseq_regs_core_sysram_overrides sysram_overrides
 * @brief override portion of pmu control signals definitions.
 * @{
 */
#ifndef __PSEQ_SYSRAM_OVERRIDES_MACRO__
#define __PSEQ_SYSRAM_OVERRIDES_MACRO__

/* macros for field override_sysram_vddcut_val */
/**
 * @defgroup at_apb_pseq_regs_core_override_sysram_vddcut_val_field override_sysram_vddcut_val_field
 * @brief macros for field override_sysram_vddcut_val
 * @details If override is set, what is state of sysram's head switches?  [11:6] reserved  [5] 16kB macro at high address space; [1] head switch open [0] head switch close  [4] 16kB macro; [1] head switch open [0] head switch close  [3] 16kB macro; [1] head switch open [0] head switch close  [2] 16kB macro; [1] head switch open [0] head switch close  [1] 16kB macro; [1] head switch open [0] head switch close  [0] 16kB macro at lowest address space; [1] head switch open [0] head switch close
 * @{
 */
#define PSEQ_SYSRAM_OVERRIDES__OVERRIDE_SYSRAM_VDDCUT_VAL__SHIFT              0
#define PSEQ_SYSRAM_OVERRIDES__OVERRIDE_SYSRAM_VDDCUT_VAL__WIDTH             12
#define PSEQ_SYSRAM_OVERRIDES__OVERRIDE_SYSRAM_VDDCUT_VAL__MASK     0x00000fffU
#define PSEQ_SYSRAM_OVERRIDES__OVERRIDE_SYSRAM_VDDCUT_VAL__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000fffU)
#define PSEQ_SYSRAM_OVERRIDES__OVERRIDE_SYSRAM_VDDCUT_VAL__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000fffU)
#define PSEQ_SYSRAM_OVERRIDES__OVERRIDE_SYSRAM_VDDCUT_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000fffU) | ((uint32_t)(src) &\
                    0x00000fffU)
#define PSEQ_SYSRAM_OVERRIDES__OVERRIDE_SYSRAM_VDDCUT_VAL__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000fffU)))
#define PSEQ_SYSRAM_OVERRIDES__OVERRIDE_SYSRAM_VDDCUT_VAL__RESET_VALUE \
                    0x00000000U
/** @} */

/* macros for field override_sysram_vddcut */
/**
 * @defgroup at_apb_pseq_regs_core_override_sysram_vddcut_field override_sysram_vddcut_field
 * @brief macros for field override_sysram_vddcut
 * @details If set, software now has direct control of sysram's head switches.  [23:18] reserved  [17] 16kB macro at high address space  [16] 16kB macro  [15] 16kB macro  [14] 16kB macro  [13] 16kB macro  [12] 16kB macro at lowest address space
 * @{
 */
#define PSEQ_SYSRAM_OVERRIDES__OVERRIDE_SYSRAM_VDDCUT__SHIFT                 12
#define PSEQ_SYSRAM_OVERRIDES__OVERRIDE_SYSRAM_VDDCUT__WIDTH                 12
#define PSEQ_SYSRAM_OVERRIDES__OVERRIDE_SYSRAM_VDDCUT__MASK         0x00fff000U
#define PSEQ_SYSRAM_OVERRIDES__OVERRIDE_SYSRAM_VDDCUT__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00fff000U) >> 12)
#define PSEQ_SYSRAM_OVERRIDES__OVERRIDE_SYSRAM_VDDCUT__WRITE(src) \
                    (((uint32_t)(src)\
                    << 12) & 0x00fff000U)
#define PSEQ_SYSRAM_OVERRIDES__OVERRIDE_SYSRAM_VDDCUT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00fff000U) | (((uint32_t)(src) <<\
                    12) & 0x00fff000U)
#define PSEQ_SYSRAM_OVERRIDES__OVERRIDE_SYSRAM_VDDCUT__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 12) & ~0x00fff000U)))
#define PSEQ_SYSRAM_OVERRIDES__OVERRIDE_SYSRAM_VDDCUT__RESET_VALUE  0x00000000U
/** @} */
#define PSEQ_SYSRAM_OVERRIDES__TYPE                                    uint32_t
#define PSEQ_SYSRAM_OVERRIDES__READ                                 0x00ffffffU
#define PSEQ_SYSRAM_OVERRIDES__WRITE                                0x00ffffffU
#define PSEQ_SYSRAM_OVERRIDES__PRESERVED                            0x00000000U
#define PSEQ_SYSRAM_OVERRIDES__RESET_VALUE                          0x00000000U

#endif /* __PSEQ_SYSRAM_OVERRIDES_MACRO__ */

/** @} end of sysram_overrides */

/* macros for BlueprintGlobalNameSpace::PSEQ_sysram_overrides2 */
/**
 * @defgroup at_apb_pseq_regs_core_sysram_overrides2 sysram_overrides2
 * @brief override portion of pmu control signals definitions.
 * @{
 */
#ifndef __PSEQ_SYSRAM_OVERRIDES2_MACRO__
#define __PSEQ_SYSRAM_OVERRIDES2_MACRO__

/* macros for field override_sysram_clken_val */
/**
 * @defgroup at_apb_pseq_regs_core_override_sysram_clken_val_field override_sysram_clken_val_field
 * @brief macros for field override_sysram_clken_val
 * @details If override is set, what is state of sysram's clock enable signals?  [11:6] reserved  [5] 16kB macro at high address space  [4] 16kB macro  [3] 16kB macro  [2] 16kB macro  [1] 16kB macro  [0] 16kB macro at lowest address space
 * @{
 */
#define PSEQ_SYSRAM_OVERRIDES2__OVERRIDE_SYSRAM_CLKEN_VAL__SHIFT              0
#define PSEQ_SYSRAM_OVERRIDES2__OVERRIDE_SYSRAM_CLKEN_VAL__WIDTH             12
#define PSEQ_SYSRAM_OVERRIDES2__OVERRIDE_SYSRAM_CLKEN_VAL__MASK     0x00000fffU
#define PSEQ_SYSRAM_OVERRIDES2__OVERRIDE_SYSRAM_CLKEN_VAL__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000fffU)
#define PSEQ_SYSRAM_OVERRIDES2__OVERRIDE_SYSRAM_CLKEN_VAL__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000fffU)
#define PSEQ_SYSRAM_OVERRIDES2__OVERRIDE_SYSRAM_CLKEN_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000fffU) | ((uint32_t)(src) &\
                    0x00000fffU)
#define PSEQ_SYSRAM_OVERRIDES2__OVERRIDE_SYSRAM_CLKEN_VAL__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000fffU)))
#define PSEQ_SYSRAM_OVERRIDES2__OVERRIDE_SYSRAM_CLKEN_VAL__RESET_VALUE \
                    0x00000000U
/** @} */

/* macros for field override_sysram_clken */
/**
 * @defgroup at_apb_pseq_regs_core_override_sysram_clken_field override_sysram_clken_field
 * @brief macros for field override_sysram_clken
 * @details If set, software now has direct control of sysram's clock enable signals.  [23:18] reserved  [17] 16kB macro at high address space  [16] 16kB macro  [15] 16kB macro  [14] 16kB macro  [13] 16kB macro  [12] 16kB macro at lowest address space
 * @{
 */
#define PSEQ_SYSRAM_OVERRIDES2__OVERRIDE_SYSRAM_CLKEN__SHIFT                 12
#define PSEQ_SYSRAM_OVERRIDES2__OVERRIDE_SYSRAM_CLKEN__WIDTH                 12
#define PSEQ_SYSRAM_OVERRIDES2__OVERRIDE_SYSRAM_CLKEN__MASK         0x00fff000U
#define PSEQ_SYSRAM_OVERRIDES2__OVERRIDE_SYSRAM_CLKEN__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00fff000U) >> 12)
#define PSEQ_SYSRAM_OVERRIDES2__OVERRIDE_SYSRAM_CLKEN__WRITE(src) \
                    (((uint32_t)(src)\
                    << 12) & 0x00fff000U)
#define PSEQ_SYSRAM_OVERRIDES2__OVERRIDE_SYSRAM_CLKEN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00fff000U) | (((uint32_t)(src) <<\
                    12) & 0x00fff000U)
#define PSEQ_SYSRAM_OVERRIDES2__OVERRIDE_SYSRAM_CLKEN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 12) & ~0x00fff000U)))
#define PSEQ_SYSRAM_OVERRIDES2__OVERRIDE_SYSRAM_CLKEN__RESET_VALUE  0x00000000U
/** @} */
#define PSEQ_SYSRAM_OVERRIDES2__TYPE                                   uint32_t
#define PSEQ_SYSRAM_OVERRIDES2__READ                                0x00ffffffU
#define PSEQ_SYSRAM_OVERRIDES2__WRITE                               0x00ffffffU
#define PSEQ_SYSRAM_OVERRIDES2__PRESERVED                           0x00000000U
#define PSEQ_SYSRAM_OVERRIDES2__RESET_VALUE                         0x00000000U

#endif /* __PSEQ_SYSRAM_OVERRIDES2_MACRO__ */

/** @} end of sysram_overrides2 */

/* macros for BlueprintGlobalNameSpace::PSEQ_sysram_overrides3 */
/**
 * @defgroup at_apb_pseq_regs_core_sysram_overrides3 sysram_overrides3
 * @brief override portion of pmu control signals definitions.
 * @{
 */
#ifndef __PSEQ_SYSRAM_OVERRIDES3_MACRO__
#define __PSEQ_SYSRAM_OVERRIDES3_MACRO__

/* macros for field override_sysram_iso_val */
/**
 * @defgroup at_apb_pseq_regs_core_override_sysram_iso_val_field override_sysram_iso_val_field
 * @brief macros for field override_sysram_iso_val
 * @details If override is set, what is state of sysram's isolation signals?  [11:6] reserved  [5] 16kB macro at high address space  [4] 16kB macro  [3] 16kB macro  [2] 16kB macro  [1] 16kB macro  [0] 16kB macro at lowest address space
 * @{
 */
#define PSEQ_SYSRAM_OVERRIDES3__OVERRIDE_SYSRAM_ISO_VAL__SHIFT                0
#define PSEQ_SYSRAM_OVERRIDES3__OVERRIDE_SYSRAM_ISO_VAL__WIDTH               12
#define PSEQ_SYSRAM_OVERRIDES3__OVERRIDE_SYSRAM_ISO_VAL__MASK       0x00000fffU
#define PSEQ_SYSRAM_OVERRIDES3__OVERRIDE_SYSRAM_ISO_VAL__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000fffU)
#define PSEQ_SYSRAM_OVERRIDES3__OVERRIDE_SYSRAM_ISO_VAL__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000fffU)
#define PSEQ_SYSRAM_OVERRIDES3__OVERRIDE_SYSRAM_ISO_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000fffU) | ((uint32_t)(src) &\
                    0x00000fffU)
#define PSEQ_SYSRAM_OVERRIDES3__OVERRIDE_SYSRAM_ISO_VAL__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000fffU)))
#define PSEQ_SYSRAM_OVERRIDES3__OVERRIDE_SYSRAM_ISO_VAL__RESET_VALUE \
                    0x00000000U
/** @} */

/* macros for field override_sysram_iso */
/**
 * @defgroup at_apb_pseq_regs_core_override_sysram_iso_field override_sysram_iso_field
 * @brief macros for field override_sysram_iso
 * @details If set, software now has direct control of sysram's isolation signals.  [23:18] reserved  [17] 16kB macro at high address space  [16] 16kB macro  [15] 16kB macro  [14] 16kB macro  [13] 16kB macro  [12] 16kB macro at lowest address space
 * @{
 */
#define PSEQ_SYSRAM_OVERRIDES3__OVERRIDE_SYSRAM_ISO__SHIFT                   12
#define PSEQ_SYSRAM_OVERRIDES3__OVERRIDE_SYSRAM_ISO__WIDTH                   12
#define PSEQ_SYSRAM_OVERRIDES3__OVERRIDE_SYSRAM_ISO__MASK           0x00fff000U
#define PSEQ_SYSRAM_OVERRIDES3__OVERRIDE_SYSRAM_ISO__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00fff000U) >> 12)
#define PSEQ_SYSRAM_OVERRIDES3__OVERRIDE_SYSRAM_ISO__WRITE(src) \
                    (((uint32_t)(src)\
                    << 12) & 0x00fff000U)
#define PSEQ_SYSRAM_OVERRIDES3__OVERRIDE_SYSRAM_ISO__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00fff000U) | (((uint32_t)(src) <<\
                    12) & 0x00fff000U)
#define PSEQ_SYSRAM_OVERRIDES3__OVERRIDE_SYSRAM_ISO__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 12) & ~0x00fff000U)))
#define PSEQ_SYSRAM_OVERRIDES3__OVERRIDE_SYSRAM_ISO__RESET_VALUE    0x00000000U
/** @} */
#define PSEQ_SYSRAM_OVERRIDES3__TYPE                                   uint32_t
#define PSEQ_SYSRAM_OVERRIDES3__READ                                0x00ffffffU
#define PSEQ_SYSRAM_OVERRIDES3__WRITE                               0x00ffffffU
#define PSEQ_SYSRAM_OVERRIDES3__PRESERVED                           0x00000000U
#define PSEQ_SYSRAM_OVERRIDES3__RESET_VALUE                         0x00000000U

#endif /* __PSEQ_SYSRAM_OVERRIDES3_MACRO__ */

/** @} end of sysram_overrides3 */

/* macros for BlueprintGlobalNameSpace::PSEQ_sysram_overrides4 */
/**
 * @defgroup at_apb_pseq_regs_core_sysram_overrides4 sysram_overrides4
 * @brief override portion of pmu control signals definitions.
 * @{
 */
#ifndef __PSEQ_SYSRAM_OVERRIDES4_MACRO__
#define __PSEQ_SYSRAM_OVERRIDES4_MACRO__

/* macros for field override_sysram_nap_val */
/**
 * @defgroup at_apb_pseq_regs_core_override_sysram_nap_val_field override_sysram_nap_val_field
 * @brief macros for field override_sysram_nap_val
 * @details If override is set, what is state of sysram's nap signals?  [11:6] reserved  [5] 16kB macro at high address space  [4] 16kB macro  [3] 16kB macro  [2] 16kB macro  [1] 16kB macro  [0] 16kB macro at lowest address space
 * @{
 */
#define PSEQ_SYSRAM_OVERRIDES4__OVERRIDE_SYSRAM_NAP_VAL__SHIFT                0
#define PSEQ_SYSRAM_OVERRIDES4__OVERRIDE_SYSRAM_NAP_VAL__WIDTH               12
#define PSEQ_SYSRAM_OVERRIDES4__OVERRIDE_SYSRAM_NAP_VAL__MASK       0x00000fffU
#define PSEQ_SYSRAM_OVERRIDES4__OVERRIDE_SYSRAM_NAP_VAL__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000fffU)
#define PSEQ_SYSRAM_OVERRIDES4__OVERRIDE_SYSRAM_NAP_VAL__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000fffU)
#define PSEQ_SYSRAM_OVERRIDES4__OVERRIDE_SYSRAM_NAP_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000fffU) | ((uint32_t)(src) &\
                    0x00000fffU)
#define PSEQ_SYSRAM_OVERRIDES4__OVERRIDE_SYSRAM_NAP_VAL__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000fffU)))
#define PSEQ_SYSRAM_OVERRIDES4__OVERRIDE_SYSRAM_NAP_VAL__RESET_VALUE \
                    0x00000000U
/** @} */

/* macros for field override_sysram_nap */
/**
 * @defgroup at_apb_pseq_regs_core_override_sysram_nap_field override_sysram_nap_field
 * @brief macros for field override_sysram_nap
 * @details If set, software now has direct control of sysram's nap signals.  [23:18] reserved  [17] 16kB macro at high address space  [16] 16kB macro  [15] 16kB macro  [14] 16kB macro  [13] 16kB macro  [12] 16kB macro at lowest address space
 * @{
 */
#define PSEQ_SYSRAM_OVERRIDES4__OVERRIDE_SYSRAM_NAP__SHIFT                   12
#define PSEQ_SYSRAM_OVERRIDES4__OVERRIDE_SYSRAM_NAP__WIDTH                   12
#define PSEQ_SYSRAM_OVERRIDES4__OVERRIDE_SYSRAM_NAP__MASK           0x00fff000U
#define PSEQ_SYSRAM_OVERRIDES4__OVERRIDE_SYSRAM_NAP__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00fff000U) >> 12)
#define PSEQ_SYSRAM_OVERRIDES4__OVERRIDE_SYSRAM_NAP__WRITE(src) \
                    (((uint32_t)(src)\
                    << 12) & 0x00fff000U)
#define PSEQ_SYSRAM_OVERRIDES4__OVERRIDE_SYSRAM_NAP__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00fff000U) | (((uint32_t)(src) <<\
                    12) & 0x00fff000U)
#define PSEQ_SYSRAM_OVERRIDES4__OVERRIDE_SYSRAM_NAP__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 12) & ~0x00fff000U)))
#define PSEQ_SYSRAM_OVERRIDES4__OVERRIDE_SYSRAM_NAP__RESET_VALUE    0x00000000U
/** @} */
#define PSEQ_SYSRAM_OVERRIDES4__TYPE                                   uint32_t
#define PSEQ_SYSRAM_OVERRIDES4__READ                                0x00ffffffU
#define PSEQ_SYSRAM_OVERRIDES4__WRITE                               0x00ffffffU
#define PSEQ_SYSRAM_OVERRIDES4__PRESERVED                           0x00000000U
#define PSEQ_SYSRAM_OVERRIDES4__RESET_VALUE                         0x00000000U

#endif /* __PSEQ_SYSRAM_OVERRIDES4_MACRO__ */

/** @} end of sysram_overrides4 */

/* macros for BlueprintGlobalNameSpace::PSEQ_sysram_overrides5 */
/**
 * @defgroup at_apb_pseq_regs_core_sysram_overrides5 sysram_overrides5
 * @brief override portion of pmu control signals definitions.
 * @{
 */
#ifndef __PSEQ_SYSRAM_OVERRIDES5_MACRO__
#define __PSEQ_SYSRAM_OVERRIDES5_MACRO__

/* macros for field override_sysram_ret_val */
/**
 * @defgroup at_apb_pseq_regs_core_override_sysram_ret_val_field override_sysram_ret_val_field
 * @brief macros for field override_sysram_ret_val
 * @details If override is set, what is state of sysram's retain signals?  [11:6] reserved  [5] 16kB macro at high address space  [4] 16kB macro  [3] 16kB macro  [2] 16kB macro  [1] 16kB macro  [0] 16kB macro at lowest address space
 * @{
 */
#define PSEQ_SYSRAM_OVERRIDES5__OVERRIDE_SYSRAM_RET_VAL__SHIFT                0
#define PSEQ_SYSRAM_OVERRIDES5__OVERRIDE_SYSRAM_RET_VAL__WIDTH               12
#define PSEQ_SYSRAM_OVERRIDES5__OVERRIDE_SYSRAM_RET_VAL__MASK       0x00000fffU
#define PSEQ_SYSRAM_OVERRIDES5__OVERRIDE_SYSRAM_RET_VAL__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000fffU)
#define PSEQ_SYSRAM_OVERRIDES5__OVERRIDE_SYSRAM_RET_VAL__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000fffU)
#define PSEQ_SYSRAM_OVERRIDES5__OVERRIDE_SYSRAM_RET_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000fffU) | ((uint32_t)(src) &\
                    0x00000fffU)
#define PSEQ_SYSRAM_OVERRIDES5__OVERRIDE_SYSRAM_RET_VAL__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000fffU)))
#define PSEQ_SYSRAM_OVERRIDES5__OVERRIDE_SYSRAM_RET_VAL__RESET_VALUE \
                    0x00000000U
/** @} */

/* macros for field override_sysram_ret */
/**
 * @defgroup at_apb_pseq_regs_core_override_sysram_ret_field override_sysram_ret_field
 * @brief macros for field override_sysram_ret
 * @details If set, software now has direct control of sysram's retain signals.  [23:18] reserved  [17] 16kB macro at high address space  [16] 16kB macro  [15] 16kB macro  [14] 16kB macro  [13] 16kB macro  [12] 16kB macro at lowest address space
 * @{
 */
#define PSEQ_SYSRAM_OVERRIDES5__OVERRIDE_SYSRAM_RET__SHIFT                   12
#define PSEQ_SYSRAM_OVERRIDES5__OVERRIDE_SYSRAM_RET__WIDTH                   12
#define PSEQ_SYSRAM_OVERRIDES5__OVERRIDE_SYSRAM_RET__MASK           0x00fff000U
#define PSEQ_SYSRAM_OVERRIDES5__OVERRIDE_SYSRAM_RET__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00fff000U) >> 12)
#define PSEQ_SYSRAM_OVERRIDES5__OVERRIDE_SYSRAM_RET__WRITE(src) \
                    (((uint32_t)(src)\
                    << 12) & 0x00fff000U)
#define PSEQ_SYSRAM_OVERRIDES5__OVERRIDE_SYSRAM_RET__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00fff000U) | (((uint32_t)(src) <<\
                    12) & 0x00fff000U)
#define PSEQ_SYSRAM_OVERRIDES5__OVERRIDE_SYSRAM_RET__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 12) & ~0x00fff000U)))
#define PSEQ_SYSRAM_OVERRIDES5__OVERRIDE_SYSRAM_RET__RESET_VALUE    0x00000000U
/** @} */
#define PSEQ_SYSRAM_OVERRIDES5__TYPE                                   uint32_t
#define PSEQ_SYSRAM_OVERRIDES5__READ                                0x00ffffffU
#define PSEQ_SYSRAM_OVERRIDES5__WRITE                               0x00ffffffU
#define PSEQ_SYSRAM_OVERRIDES5__PRESERVED                           0x00000000U
#define PSEQ_SYSRAM_OVERRIDES5__RESET_VALUE                         0x00000000U

#endif /* __PSEQ_SYSRAM_OVERRIDES5_MACRO__ */

/** @} end of sysram_overrides5 */

/* macros for BlueprintGlobalNameSpace::PSEQ_sysram_overrides6 */
/**
 * @defgroup at_apb_pseq_regs_core_sysram_overrides6 sysram_overrides6
 * @brief override portion of pmu control signals definitions.
 * @{
 */
#ifndef __PSEQ_SYSRAM_OVERRIDES6_MACRO__
#define __PSEQ_SYSRAM_OVERRIDES6_MACRO__

/* macros for field override_sysram_psd_val */
/**
 * @defgroup at_apb_pseq_regs_core_override_sysram_psd_val_field override_sysram_psd_val_field
 * @brief macros for field override_sysram_psd_val
 * @details If override is set, what is state of sysram's psd signals?  [11:6] reserved  [5] 16kB macro at high address space  [4] 16kB macro  [3] 16kB macro  [2] 16kB macro  [1] 16kB macro  [0] 16kB macro at lowest address space
 * @{
 */
#define PSEQ_SYSRAM_OVERRIDES6__OVERRIDE_SYSRAM_PSD_VAL__SHIFT                0
#define PSEQ_SYSRAM_OVERRIDES6__OVERRIDE_SYSRAM_PSD_VAL__WIDTH               12
#define PSEQ_SYSRAM_OVERRIDES6__OVERRIDE_SYSRAM_PSD_VAL__MASK       0x00000fffU
#define PSEQ_SYSRAM_OVERRIDES6__OVERRIDE_SYSRAM_PSD_VAL__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000fffU)
#define PSEQ_SYSRAM_OVERRIDES6__OVERRIDE_SYSRAM_PSD_VAL__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000fffU)
#define PSEQ_SYSRAM_OVERRIDES6__OVERRIDE_SYSRAM_PSD_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000fffU) | ((uint32_t)(src) &\
                    0x00000fffU)
#define PSEQ_SYSRAM_OVERRIDES6__OVERRIDE_SYSRAM_PSD_VAL__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000fffU)))
#define PSEQ_SYSRAM_OVERRIDES6__OVERRIDE_SYSRAM_PSD_VAL__RESET_VALUE \
                    0x00000000U
/** @} */

/* macros for field override_sysram_psd */
/**
 * @defgroup at_apb_pseq_regs_core_override_sysram_psd_field override_sysram_psd_field
 * @brief macros for field override_sysram_psd
 * @details If set, software now has direct control of sysram's psd signals.  [23:18] reserved  [17] 16kB macro at high address space  [16] 16kB macro  [15] 16kB macro  [14] 16kB macro  [13] 16kB macro  [12] 16kB macro at lowest address space
 * @{
 */
#define PSEQ_SYSRAM_OVERRIDES6__OVERRIDE_SYSRAM_PSD__SHIFT                   12
#define PSEQ_SYSRAM_OVERRIDES6__OVERRIDE_SYSRAM_PSD__WIDTH                   12
#define PSEQ_SYSRAM_OVERRIDES6__OVERRIDE_SYSRAM_PSD__MASK           0x00fff000U
#define PSEQ_SYSRAM_OVERRIDES6__OVERRIDE_SYSRAM_PSD__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00fff000U) >> 12)
#define PSEQ_SYSRAM_OVERRIDES6__OVERRIDE_SYSRAM_PSD__WRITE(src) \
                    (((uint32_t)(src)\
                    << 12) & 0x00fff000U)
#define PSEQ_SYSRAM_OVERRIDES6__OVERRIDE_SYSRAM_PSD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00fff000U) | (((uint32_t)(src) <<\
                    12) & 0x00fff000U)
#define PSEQ_SYSRAM_OVERRIDES6__OVERRIDE_SYSRAM_PSD__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 12) & ~0x00fff000U)))
#define PSEQ_SYSRAM_OVERRIDES6__OVERRIDE_SYSRAM_PSD__RESET_VALUE    0x00000000U
/** @} */
#define PSEQ_SYSRAM_OVERRIDES6__TYPE                                   uint32_t
#define PSEQ_SYSRAM_OVERRIDES6__READ                                0x00ffffffU
#define PSEQ_SYSRAM_OVERRIDES6__WRITE                               0x00ffffffU
#define PSEQ_SYSRAM_OVERRIDES6__PRESERVED                           0x00000000U
#define PSEQ_SYSRAM_OVERRIDES6__RESET_VALUE                         0x00000000U

#endif /* __PSEQ_SYSRAM_OVERRIDES6_MACRO__ */

/** @} end of sysram_overrides6 */

/* macros for BlueprintGlobalNameSpace::PSEQ_sysram_overrides7 */
/**
 * @defgroup at_apb_pseq_regs_core_sysram_overrides7 sysram_overrides7
 * @brief override portion of pmu control signals definitions.
 * @{
 */
#ifndef __PSEQ_SYSRAM_OVERRIDES7_MACRO__
#define __PSEQ_SYSRAM_OVERRIDES7_MACRO__

/* macros for field block_sysram_vddcut */
/**
 * @defgroup at_apb_pseq_regs_core_block_sysram_vddcut_field block_sysram_vddcut_field
 * @brief macros for field block_sysram_vddcut
 * @details Block core's FSM from cutting the vdd supplies to the sysram.  [11:6] reserved  [5] 16kB macro at high address space  [4] 16kB macro  [3] 16kB macro  [2] 16kB macro  [1] 16kB macro  [0] 16kB macro at lowest address space
 * @{
 */
#define PSEQ_SYSRAM_OVERRIDES7__BLOCK_SYSRAM_VDDCUT__SHIFT                    0
#define PSEQ_SYSRAM_OVERRIDES7__BLOCK_SYSRAM_VDDCUT__WIDTH                   12
#define PSEQ_SYSRAM_OVERRIDES7__BLOCK_SYSRAM_VDDCUT__MASK           0x00000fffU
#define PSEQ_SYSRAM_OVERRIDES7__BLOCK_SYSRAM_VDDCUT__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000fffU)
#define PSEQ_SYSRAM_OVERRIDES7__BLOCK_SYSRAM_VDDCUT__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000fffU)
#define PSEQ_SYSRAM_OVERRIDES7__BLOCK_SYSRAM_VDDCUT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000fffU) | ((uint32_t)(src) &\
                    0x00000fffU)
#define PSEQ_SYSRAM_OVERRIDES7__BLOCK_SYSRAM_VDDCUT__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000fffU)))
#define PSEQ_SYSRAM_OVERRIDES7__BLOCK_SYSRAM_VDDCUT__RESET_VALUE    0x00000000U
/** @} */
#define PSEQ_SYSRAM_OVERRIDES7__TYPE                                   uint32_t
#define PSEQ_SYSRAM_OVERRIDES7__READ                                0x00000fffU
#define PSEQ_SYSRAM_OVERRIDES7__WRITE                               0x00000fffU
#define PSEQ_SYSRAM_OVERRIDES7__PRESERVED                           0x00000000U
#define PSEQ_SYSRAM_OVERRIDES7__RESET_VALUE                         0x00000000U

#endif /* __PSEQ_SYSRAM_OVERRIDES7_MACRO__ */

/** @} end of sysram_overrides7 */

/* macros for BlueprintGlobalNameSpace::PSEQ_sysram_overrides8 */
/**
 * @defgroup at_apb_pseq_regs_core_sysram_overrides8 sysram_overrides8
 * @brief override portion of pmu control signals definitions.
 * @{
 */
#ifndef __PSEQ_SYSRAM_OVERRIDES8_MACRO__
#define __PSEQ_SYSRAM_OVERRIDES8_MACRO__

/* macros for field block_sysram_psd */
/**
 * @defgroup at_apb_pseq_regs_core_block_sysram_psd_field block_sysram_psd_field
 * @brief macros for field block_sysram_psd
 * @details Block core's FSM from setting the psd signal to the sysram.  [11:6] reserved  [5] 16kB macro at high address space  [4] 16kB macro  [3] 16kB macro  [2] 16kB macro  [1] 16kB macro  [0] 16kB macro at lowest address space
 * @{
 */
#define PSEQ_SYSRAM_OVERRIDES8__BLOCK_SYSRAM_PSD__SHIFT                       0
#define PSEQ_SYSRAM_OVERRIDES8__BLOCK_SYSRAM_PSD__WIDTH                      12
#define PSEQ_SYSRAM_OVERRIDES8__BLOCK_SYSRAM_PSD__MASK              0x00000fffU
#define PSEQ_SYSRAM_OVERRIDES8__BLOCK_SYSRAM_PSD__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000fffU)
#define PSEQ_SYSRAM_OVERRIDES8__BLOCK_SYSRAM_PSD__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000fffU)
#define PSEQ_SYSRAM_OVERRIDES8__BLOCK_SYSRAM_PSD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000fffU) | ((uint32_t)(src) &\
                    0x00000fffU)
#define PSEQ_SYSRAM_OVERRIDES8__BLOCK_SYSRAM_PSD__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000fffU)))
#define PSEQ_SYSRAM_OVERRIDES8__BLOCK_SYSRAM_PSD__RESET_VALUE       0x00000000U
/** @} */
#define PSEQ_SYSRAM_OVERRIDES8__TYPE                                   uint32_t
#define PSEQ_SYSRAM_OVERRIDES8__READ                                0x00000fffU
#define PSEQ_SYSRAM_OVERRIDES8__WRITE                               0x00000fffU
#define PSEQ_SYSRAM_OVERRIDES8__PRESERVED                           0x00000000U
#define PSEQ_SYSRAM_OVERRIDES8__RESET_VALUE                         0x00000000U

#endif /* __PSEQ_SYSRAM_OVERRIDES8_MACRO__ */

/** @} end of sysram_overrides8 */

/* macros for BlueprintGlobalNameSpace::PSEQ_sysram_conf */
/**
 * @defgroup at_apb_pseq_regs_core_sysram_conf sysram_conf
 * @brief if both bits are 0, then SVT block is used definitions.
 * @{
 */
#ifndef __PSEQ_SYSRAM_CONF_MACRO__
#define __PSEQ_SYSRAM_CONF_MACRO__

/* macros for field sysram_hvt_en */
/**
 * @defgroup at_apb_pseq_regs_core_sysram_hvt_en_field sysram_hvt_en_field
 * @brief macros for field sysram_hvt_en
 * @details 0= disable HVT SRAM block ; 1= enable HVT SRAM block
 * @{
 */
#define PSEQ_SYSRAM_CONF__SYSRAM_HVT_EN__SHIFT                                0
#define PSEQ_SYSRAM_CONF__SYSRAM_HVT_EN__WIDTH                                1
#define PSEQ_SYSRAM_CONF__SYSRAM_HVT_EN__MASK                       0x00000001U
#define PSEQ_SYSRAM_CONF__SYSRAM_HVT_EN__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define PSEQ_SYSRAM_CONF__SYSRAM_HVT_EN__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define PSEQ_SYSRAM_CONF__SYSRAM_HVT_EN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define PSEQ_SYSRAM_CONF__SYSRAM_HVT_EN__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define PSEQ_SYSRAM_CONF__SYSRAM_HVT_EN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define PSEQ_SYSRAM_CONF__SYSRAM_HVT_EN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define PSEQ_SYSRAM_CONF__SYSRAM_HVT_EN__RESET_VALUE                0x00000000U
/** @} */

/* macros for field sysram_svt_en */
/**
 * @defgroup at_apb_pseq_regs_core_sysram_svt_en_field sysram_svt_en_field
 * @brief macros for field sysram_svt_en
 * @details 0= disable SVT SRAM block); 1= enable SVT SRAM block
 * @{
 */
#define PSEQ_SYSRAM_CONF__SYSRAM_SVT_EN__SHIFT                                1
#define PSEQ_SYSRAM_CONF__SYSRAM_SVT_EN__WIDTH                                1
#define PSEQ_SYSRAM_CONF__SYSRAM_SVT_EN__MASK                       0x00000002U
#define PSEQ_SYSRAM_CONF__SYSRAM_SVT_EN__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define PSEQ_SYSRAM_CONF__SYSRAM_SVT_EN__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define PSEQ_SYSRAM_CONF__SYSRAM_SVT_EN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define PSEQ_SYSRAM_CONF__SYSRAM_SVT_EN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define PSEQ_SYSRAM_CONF__SYSRAM_SVT_EN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define PSEQ_SYSRAM_CONF__SYSRAM_SVT_EN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define PSEQ_SYSRAM_CONF__SYSRAM_SVT_EN__RESET_VALUE                0x00000000U
/** @} */

/* macros for field sw_override */
/**
 * @defgroup at_apb_pseq_regs_core_sw_override_field sw_override_field
 * @brief macros for field sw_override
 * @details 0= efuse bits have control over sysram config, 1= the bits below set the configuration
 * @{
 */
#define PSEQ_SYSRAM_CONF__SW_OVERRIDE__SHIFT                                  2
#define PSEQ_SYSRAM_CONF__SW_OVERRIDE__WIDTH                                  1
#define PSEQ_SYSRAM_CONF__SW_OVERRIDE__MASK                         0x00000004U
#define PSEQ_SYSRAM_CONF__SW_OVERRIDE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000004U) >> 2)
#define PSEQ_SYSRAM_CONF__SW_OVERRIDE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 2) & 0x00000004U)
#define PSEQ_SYSRAM_CONF__SW_OVERRIDE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | (((uint32_t)(src) <<\
                    2) & 0x00000004U)
#define PSEQ_SYSRAM_CONF__SW_OVERRIDE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 2) & ~0x00000004U)))
#define PSEQ_SYSRAM_CONF__SW_OVERRIDE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(1) << 2)
#define PSEQ_SYSRAM_CONF__SW_OVERRIDE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(0) << 2)
#define PSEQ_SYSRAM_CONF__SW_OVERRIDE__RESET_VALUE                  0x00000000U
/** @} */
#define PSEQ_SYSRAM_CONF__TYPE                                         uint32_t
#define PSEQ_SYSRAM_CONF__READ                                      0x00000007U
#define PSEQ_SYSRAM_CONF__WRITE                                     0x00000007U
#define PSEQ_SYSRAM_CONF__PRESERVED                                 0x00000000U
#define PSEQ_SYSRAM_CONF__RESET_VALUE                               0x00000000U

#endif /* __PSEQ_SYSRAM_CONF_MACRO__ */

/** @} end of sysram_conf */

/* macros for BlueprintGlobalNameSpace::PSEQ_emram_overrides */
/**
 * @defgroup at_apb_pseq_regs_core_emram_overrides emram_overrides
 * @brief override portion of pmu control signals definitions.
 * @{
 */
#ifndef __PSEQ_EMRAM_OVERRIDES_MACRO__
#define __PSEQ_EMRAM_OVERRIDES_MACRO__

/* macros for field override_emram_vddcut_val */
/**
 * @defgroup at_apb_pseq_regs_core_override_emram_vddcut_val_field override_emram_vddcut_val_field
 * @brief macros for field override_emram_vddcut_val
 * @details If override is set, what are the states of exchange memory vddcut signals?
 * @{
 */
#define PSEQ_EMRAM_OVERRIDES__OVERRIDE_EMRAM_VDDCUT_VAL__SHIFT                0
#define PSEQ_EMRAM_OVERRIDES__OVERRIDE_EMRAM_VDDCUT_VAL__WIDTH                2
#define PSEQ_EMRAM_OVERRIDES__OVERRIDE_EMRAM_VDDCUT_VAL__MASK       0x00000003U
#define PSEQ_EMRAM_OVERRIDES__OVERRIDE_EMRAM_VDDCUT_VAL__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000003U)
#define PSEQ_EMRAM_OVERRIDES__OVERRIDE_EMRAM_VDDCUT_VAL__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000003U)
#define PSEQ_EMRAM_OVERRIDES__OVERRIDE_EMRAM_VDDCUT_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000003U) | ((uint32_t)(src) &\
                    0x00000003U)
#define PSEQ_EMRAM_OVERRIDES__OVERRIDE_EMRAM_VDDCUT_VAL__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000003U)))
#define PSEQ_EMRAM_OVERRIDES__OVERRIDE_EMRAM_VDDCUT_VAL__RESET_VALUE \
                    0x00000000U
/** @} */

/* macros for field override_emram_vddcut */
/**
 * @defgroup at_apb_pseq_regs_core_override_emram_vddcut_field override_emram_vddcut_field
 * @brief macros for field override_emram_vddcut
 * @details If set, software now has direct control of exchange memory vddcut signals.
 * @{
 */
#define PSEQ_EMRAM_OVERRIDES__OVERRIDE_EMRAM_VDDCUT__SHIFT                   12
#define PSEQ_EMRAM_OVERRIDES__OVERRIDE_EMRAM_VDDCUT__WIDTH                    2
#define PSEQ_EMRAM_OVERRIDES__OVERRIDE_EMRAM_VDDCUT__MASK           0x00003000U
#define PSEQ_EMRAM_OVERRIDES__OVERRIDE_EMRAM_VDDCUT__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00003000U) >> 12)
#define PSEQ_EMRAM_OVERRIDES__OVERRIDE_EMRAM_VDDCUT__WRITE(src) \
                    (((uint32_t)(src)\
                    << 12) & 0x00003000U)
#define PSEQ_EMRAM_OVERRIDES__OVERRIDE_EMRAM_VDDCUT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00003000U) | (((uint32_t)(src) <<\
                    12) & 0x00003000U)
#define PSEQ_EMRAM_OVERRIDES__OVERRIDE_EMRAM_VDDCUT__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 12) & ~0x00003000U)))
#define PSEQ_EMRAM_OVERRIDES__OVERRIDE_EMRAM_VDDCUT__RESET_VALUE    0x00000000U
/** @} */
#define PSEQ_EMRAM_OVERRIDES__TYPE                                     uint32_t
#define PSEQ_EMRAM_OVERRIDES__READ                                  0x00003003U
#define PSEQ_EMRAM_OVERRIDES__WRITE                                 0x00003003U
#define PSEQ_EMRAM_OVERRIDES__PRESERVED                             0x00000000U
#define PSEQ_EMRAM_OVERRIDES__RESET_VALUE                           0x00000000U

#endif /* __PSEQ_EMRAM_OVERRIDES_MACRO__ */

/** @} end of emram_overrides */

/* macros for BlueprintGlobalNameSpace::PSEQ_emram_overrides2 */
/**
 * @defgroup at_apb_pseq_regs_core_emram_overrides2 emram_overrides2
 * @brief override portion of pmu control signals definitions.
 * @{
 */
#ifndef __PSEQ_EMRAM_OVERRIDES2_MACRO__
#define __PSEQ_EMRAM_OVERRIDES2_MACRO__

/* macros for field override_emram_clken_val */
/**
 * @defgroup at_apb_pseq_regs_core_override_emram_clken_val_field override_emram_clken_val_field
 * @brief macros for field override_emram_clken_val
 * @details If override is set, what are the states of exchange memory clock enable signals?
 * @{
 */
#define PSEQ_EMRAM_OVERRIDES2__OVERRIDE_EMRAM_CLKEN_VAL__SHIFT                0
#define PSEQ_EMRAM_OVERRIDES2__OVERRIDE_EMRAM_CLKEN_VAL__WIDTH                2
#define PSEQ_EMRAM_OVERRIDES2__OVERRIDE_EMRAM_CLKEN_VAL__MASK       0x00000003U
#define PSEQ_EMRAM_OVERRIDES2__OVERRIDE_EMRAM_CLKEN_VAL__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000003U)
#define PSEQ_EMRAM_OVERRIDES2__OVERRIDE_EMRAM_CLKEN_VAL__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000003U)
#define PSEQ_EMRAM_OVERRIDES2__OVERRIDE_EMRAM_CLKEN_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000003U) | ((uint32_t)(src) &\
                    0x00000003U)
#define PSEQ_EMRAM_OVERRIDES2__OVERRIDE_EMRAM_CLKEN_VAL__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000003U)))
#define PSEQ_EMRAM_OVERRIDES2__OVERRIDE_EMRAM_CLKEN_VAL__RESET_VALUE \
                    0x00000000U
/** @} */

/* macros for field override_emram_clken */
/**
 * @defgroup at_apb_pseq_regs_core_override_emram_clken_field override_emram_clken_field
 * @brief macros for field override_emram_clken
 * @details If set, software now has direct control of exchange memory clock enable signals.
 * @{
 */
#define PSEQ_EMRAM_OVERRIDES2__OVERRIDE_EMRAM_CLKEN__SHIFT                   12
#define PSEQ_EMRAM_OVERRIDES2__OVERRIDE_EMRAM_CLKEN__WIDTH                    2
#define PSEQ_EMRAM_OVERRIDES2__OVERRIDE_EMRAM_CLKEN__MASK           0x00003000U
#define PSEQ_EMRAM_OVERRIDES2__OVERRIDE_EMRAM_CLKEN__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00003000U) >> 12)
#define PSEQ_EMRAM_OVERRIDES2__OVERRIDE_EMRAM_CLKEN__WRITE(src) \
                    (((uint32_t)(src)\
                    << 12) & 0x00003000U)
#define PSEQ_EMRAM_OVERRIDES2__OVERRIDE_EMRAM_CLKEN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00003000U) | (((uint32_t)(src) <<\
                    12) & 0x00003000U)
#define PSEQ_EMRAM_OVERRIDES2__OVERRIDE_EMRAM_CLKEN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 12) & ~0x00003000U)))
#define PSEQ_EMRAM_OVERRIDES2__OVERRIDE_EMRAM_CLKEN__RESET_VALUE    0x00000000U
/** @} */
#define PSEQ_EMRAM_OVERRIDES2__TYPE                                    uint32_t
#define PSEQ_EMRAM_OVERRIDES2__READ                                 0x00003003U
#define PSEQ_EMRAM_OVERRIDES2__WRITE                                0x00003003U
#define PSEQ_EMRAM_OVERRIDES2__PRESERVED                            0x00000000U
#define PSEQ_EMRAM_OVERRIDES2__RESET_VALUE                          0x00000000U

#endif /* __PSEQ_EMRAM_OVERRIDES2_MACRO__ */

/** @} end of emram_overrides2 */

/* macros for BlueprintGlobalNameSpace::PSEQ_emram_overrides3 */
/**
 * @defgroup at_apb_pseq_regs_core_emram_overrides3 emram_overrides3
 * @brief override portion of pmu control signals definitions.
 * @{
 */
#ifndef __PSEQ_EMRAM_OVERRIDES3_MACRO__
#define __PSEQ_EMRAM_OVERRIDES3_MACRO__

/* macros for field override_emram_iso_val */
/**
 * @defgroup at_apb_pseq_regs_core_override_emram_iso_val_field override_emram_iso_val_field
 * @brief macros for field override_emram_iso_val
 * @details If override is set, what are the states of exchange memory isolation signals?
 * @{
 */
#define PSEQ_EMRAM_OVERRIDES3__OVERRIDE_EMRAM_ISO_VAL__SHIFT                  0
#define PSEQ_EMRAM_OVERRIDES3__OVERRIDE_EMRAM_ISO_VAL__WIDTH                  2
#define PSEQ_EMRAM_OVERRIDES3__OVERRIDE_EMRAM_ISO_VAL__MASK         0x00000003U
#define PSEQ_EMRAM_OVERRIDES3__OVERRIDE_EMRAM_ISO_VAL__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000003U)
#define PSEQ_EMRAM_OVERRIDES3__OVERRIDE_EMRAM_ISO_VAL__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000003U)
#define PSEQ_EMRAM_OVERRIDES3__OVERRIDE_EMRAM_ISO_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000003U) | ((uint32_t)(src) &\
                    0x00000003U)
#define PSEQ_EMRAM_OVERRIDES3__OVERRIDE_EMRAM_ISO_VAL__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000003U)))
#define PSEQ_EMRAM_OVERRIDES3__OVERRIDE_EMRAM_ISO_VAL__RESET_VALUE  0x00000000U
/** @} */

/* macros for field override_emram_iso */
/**
 * @defgroup at_apb_pseq_regs_core_override_emram_iso_field override_emram_iso_field
 * @brief macros for field override_emram_iso
 * @details If set, software now has direct control of exchange memory isolation signals.
 * @{
 */
#define PSEQ_EMRAM_OVERRIDES3__OVERRIDE_EMRAM_ISO__SHIFT                     12
#define PSEQ_EMRAM_OVERRIDES3__OVERRIDE_EMRAM_ISO__WIDTH                      2
#define PSEQ_EMRAM_OVERRIDES3__OVERRIDE_EMRAM_ISO__MASK             0x00003000U
#define PSEQ_EMRAM_OVERRIDES3__OVERRIDE_EMRAM_ISO__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00003000U) >> 12)
#define PSEQ_EMRAM_OVERRIDES3__OVERRIDE_EMRAM_ISO__WRITE(src) \
                    (((uint32_t)(src)\
                    << 12) & 0x00003000U)
#define PSEQ_EMRAM_OVERRIDES3__OVERRIDE_EMRAM_ISO__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00003000U) | (((uint32_t)(src) <<\
                    12) & 0x00003000U)
#define PSEQ_EMRAM_OVERRIDES3__OVERRIDE_EMRAM_ISO__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 12) & ~0x00003000U)))
#define PSEQ_EMRAM_OVERRIDES3__OVERRIDE_EMRAM_ISO__RESET_VALUE      0x00000000U
/** @} */
#define PSEQ_EMRAM_OVERRIDES3__TYPE                                    uint32_t
#define PSEQ_EMRAM_OVERRIDES3__READ                                 0x00003003U
#define PSEQ_EMRAM_OVERRIDES3__WRITE                                0x00003003U
#define PSEQ_EMRAM_OVERRIDES3__PRESERVED                            0x00000000U
#define PSEQ_EMRAM_OVERRIDES3__RESET_VALUE                          0x00000000U

#endif /* __PSEQ_EMRAM_OVERRIDES3_MACRO__ */

/** @} end of emram_overrides3 */

/* macros for BlueprintGlobalNameSpace::PSEQ_emram_overrides4 */
/**
 * @defgroup at_apb_pseq_regs_core_emram_overrides4 emram_overrides4
 * @brief override portion of pmu control signals definitions.
 * @{
 */
#ifndef __PSEQ_EMRAM_OVERRIDES4_MACRO__
#define __PSEQ_EMRAM_OVERRIDES4_MACRO__

/* macros for field override_emram_nap_val */
/**
 * @defgroup at_apb_pseq_regs_core_override_emram_nap_val_field override_emram_nap_val_field
 * @brief macros for field override_emram_nap_val
 * @details If override is set, what are the states of exchange memory nap signals?
 * @{
 */
#define PSEQ_EMRAM_OVERRIDES4__OVERRIDE_EMRAM_NAP_VAL__SHIFT                  0
#define PSEQ_EMRAM_OVERRIDES4__OVERRIDE_EMRAM_NAP_VAL__WIDTH                  2
#define PSEQ_EMRAM_OVERRIDES4__OVERRIDE_EMRAM_NAP_VAL__MASK         0x00000003U
#define PSEQ_EMRAM_OVERRIDES4__OVERRIDE_EMRAM_NAP_VAL__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000003U)
#define PSEQ_EMRAM_OVERRIDES4__OVERRIDE_EMRAM_NAP_VAL__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000003U)
#define PSEQ_EMRAM_OVERRIDES4__OVERRIDE_EMRAM_NAP_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000003U) | ((uint32_t)(src) &\
                    0x00000003U)
#define PSEQ_EMRAM_OVERRIDES4__OVERRIDE_EMRAM_NAP_VAL__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000003U)))
#define PSEQ_EMRAM_OVERRIDES4__OVERRIDE_EMRAM_NAP_VAL__RESET_VALUE  0x00000000U
/** @} */

/* macros for field override_emram_nap */
/**
 * @defgroup at_apb_pseq_regs_core_override_emram_nap_field override_emram_nap_field
 * @brief macros for field override_emram_nap
 * @details If set, software now has direct control of exchange memory nap signals.
 * @{
 */
#define PSEQ_EMRAM_OVERRIDES4__OVERRIDE_EMRAM_NAP__SHIFT                     12
#define PSEQ_EMRAM_OVERRIDES4__OVERRIDE_EMRAM_NAP__WIDTH                      2
#define PSEQ_EMRAM_OVERRIDES4__OVERRIDE_EMRAM_NAP__MASK             0x00003000U
#define PSEQ_EMRAM_OVERRIDES4__OVERRIDE_EMRAM_NAP__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00003000U) >> 12)
#define PSEQ_EMRAM_OVERRIDES4__OVERRIDE_EMRAM_NAP__WRITE(src) \
                    (((uint32_t)(src)\
                    << 12) & 0x00003000U)
#define PSEQ_EMRAM_OVERRIDES4__OVERRIDE_EMRAM_NAP__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00003000U) | (((uint32_t)(src) <<\
                    12) & 0x00003000U)
#define PSEQ_EMRAM_OVERRIDES4__OVERRIDE_EMRAM_NAP__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 12) & ~0x00003000U)))
#define PSEQ_EMRAM_OVERRIDES4__OVERRIDE_EMRAM_NAP__RESET_VALUE      0x00000000U
/** @} */
#define PSEQ_EMRAM_OVERRIDES4__TYPE                                    uint32_t
#define PSEQ_EMRAM_OVERRIDES4__READ                                 0x00003003U
#define PSEQ_EMRAM_OVERRIDES4__WRITE                                0x00003003U
#define PSEQ_EMRAM_OVERRIDES4__PRESERVED                            0x00000000U
#define PSEQ_EMRAM_OVERRIDES4__RESET_VALUE                          0x00000000U

#endif /* __PSEQ_EMRAM_OVERRIDES4_MACRO__ */

/** @} end of emram_overrides4 */

/* macros for BlueprintGlobalNameSpace::PSEQ_emram_overrides5 */
/**
 * @defgroup at_apb_pseq_regs_core_emram_overrides5 emram_overrides5
 * @brief override portion of pmu control signals definitions.
 * @{
 */
#ifndef __PSEQ_EMRAM_OVERRIDES5_MACRO__
#define __PSEQ_EMRAM_OVERRIDES5_MACRO__

/* macros for field override_emram_ret_val */
/**
 * @defgroup at_apb_pseq_regs_core_override_emram_ret_val_field override_emram_ret_val_field
 * @brief macros for field override_emram_ret_val
 * @details If override is set, what are the states of exchange memory retain signals?
 * @{
 */
#define PSEQ_EMRAM_OVERRIDES5__OVERRIDE_EMRAM_RET_VAL__SHIFT                  0
#define PSEQ_EMRAM_OVERRIDES5__OVERRIDE_EMRAM_RET_VAL__WIDTH                  2
#define PSEQ_EMRAM_OVERRIDES5__OVERRIDE_EMRAM_RET_VAL__MASK         0x00000003U
#define PSEQ_EMRAM_OVERRIDES5__OVERRIDE_EMRAM_RET_VAL__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000003U)
#define PSEQ_EMRAM_OVERRIDES5__OVERRIDE_EMRAM_RET_VAL__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000003U)
#define PSEQ_EMRAM_OVERRIDES5__OVERRIDE_EMRAM_RET_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000003U) | ((uint32_t)(src) &\
                    0x00000003U)
#define PSEQ_EMRAM_OVERRIDES5__OVERRIDE_EMRAM_RET_VAL__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000003U)))
#define PSEQ_EMRAM_OVERRIDES5__OVERRIDE_EMRAM_RET_VAL__RESET_VALUE  0x00000000U
/** @} */

/* macros for field override_emram_ret */
/**
 * @defgroup at_apb_pseq_regs_core_override_emram_ret_field override_emram_ret_field
 * @brief macros for field override_emram_ret
 * @details If set, software now has direct control of exchange memory retain signals.
 * @{
 */
#define PSEQ_EMRAM_OVERRIDES5__OVERRIDE_EMRAM_RET__SHIFT                     12
#define PSEQ_EMRAM_OVERRIDES5__OVERRIDE_EMRAM_RET__WIDTH                      2
#define PSEQ_EMRAM_OVERRIDES5__OVERRIDE_EMRAM_RET__MASK             0x00003000U
#define PSEQ_EMRAM_OVERRIDES5__OVERRIDE_EMRAM_RET__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00003000U) >> 12)
#define PSEQ_EMRAM_OVERRIDES5__OVERRIDE_EMRAM_RET__WRITE(src) \
                    (((uint32_t)(src)\
                    << 12) & 0x00003000U)
#define PSEQ_EMRAM_OVERRIDES5__OVERRIDE_EMRAM_RET__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00003000U) | (((uint32_t)(src) <<\
                    12) & 0x00003000U)
#define PSEQ_EMRAM_OVERRIDES5__OVERRIDE_EMRAM_RET__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 12) & ~0x00003000U)))
#define PSEQ_EMRAM_OVERRIDES5__OVERRIDE_EMRAM_RET__RESET_VALUE      0x00000000U
/** @} */
#define PSEQ_EMRAM_OVERRIDES5__TYPE                                    uint32_t
#define PSEQ_EMRAM_OVERRIDES5__READ                                 0x00003003U
#define PSEQ_EMRAM_OVERRIDES5__WRITE                                0x00003003U
#define PSEQ_EMRAM_OVERRIDES5__PRESERVED                            0x00000000U
#define PSEQ_EMRAM_OVERRIDES5__RESET_VALUE                          0x00000000U

#endif /* __PSEQ_EMRAM_OVERRIDES5_MACRO__ */

/** @} end of emram_overrides5 */

/* macros for BlueprintGlobalNameSpace::PSEQ_emram_overrides6 */
/**
 * @defgroup at_apb_pseq_regs_core_emram_overrides6 emram_overrides6
 * @brief override portion of pmu control signals definitions.
 * @{
 */
#ifndef __PSEQ_EMRAM_OVERRIDES6_MACRO__
#define __PSEQ_EMRAM_OVERRIDES6_MACRO__

/* macros for field override_emram_psd_val */
/**
 * @defgroup at_apb_pseq_regs_core_override_emram_psd_val_field override_emram_psd_val_field
 * @brief macros for field override_emram_psd_val
 * @details If override is set, what are the states of exchange memory psd signals?
 * @{
 */
#define PSEQ_EMRAM_OVERRIDES6__OVERRIDE_EMRAM_PSD_VAL__SHIFT                  0
#define PSEQ_EMRAM_OVERRIDES6__OVERRIDE_EMRAM_PSD_VAL__WIDTH                  2
#define PSEQ_EMRAM_OVERRIDES6__OVERRIDE_EMRAM_PSD_VAL__MASK         0x00000003U
#define PSEQ_EMRAM_OVERRIDES6__OVERRIDE_EMRAM_PSD_VAL__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000003U)
#define PSEQ_EMRAM_OVERRIDES6__OVERRIDE_EMRAM_PSD_VAL__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000003U)
#define PSEQ_EMRAM_OVERRIDES6__OVERRIDE_EMRAM_PSD_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000003U) | ((uint32_t)(src) &\
                    0x00000003U)
#define PSEQ_EMRAM_OVERRIDES6__OVERRIDE_EMRAM_PSD_VAL__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000003U)))
#define PSEQ_EMRAM_OVERRIDES6__OVERRIDE_EMRAM_PSD_VAL__RESET_VALUE  0x00000000U
/** @} */

/* macros for field override_emram_psd */
/**
 * @defgroup at_apb_pseq_regs_core_override_emram_psd_field override_emram_psd_field
 * @brief macros for field override_emram_psd
 * @details If set, software now has direct control of exchange memory psd signals.
 * @{
 */
#define PSEQ_EMRAM_OVERRIDES6__OVERRIDE_EMRAM_PSD__SHIFT                     12
#define PSEQ_EMRAM_OVERRIDES6__OVERRIDE_EMRAM_PSD__WIDTH                      2
#define PSEQ_EMRAM_OVERRIDES6__OVERRIDE_EMRAM_PSD__MASK             0x00003000U
#define PSEQ_EMRAM_OVERRIDES6__OVERRIDE_EMRAM_PSD__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00003000U) >> 12)
#define PSEQ_EMRAM_OVERRIDES6__OVERRIDE_EMRAM_PSD__WRITE(src) \
                    (((uint32_t)(src)\
                    << 12) & 0x00003000U)
#define PSEQ_EMRAM_OVERRIDES6__OVERRIDE_EMRAM_PSD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00003000U) | (((uint32_t)(src) <<\
                    12) & 0x00003000U)
#define PSEQ_EMRAM_OVERRIDES6__OVERRIDE_EMRAM_PSD__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 12) & ~0x00003000U)))
#define PSEQ_EMRAM_OVERRIDES6__OVERRIDE_EMRAM_PSD__RESET_VALUE      0x00000000U
/** @} */
#define PSEQ_EMRAM_OVERRIDES6__TYPE                                    uint32_t
#define PSEQ_EMRAM_OVERRIDES6__READ                                 0x00003003U
#define PSEQ_EMRAM_OVERRIDES6__WRITE                                0x00003003U
#define PSEQ_EMRAM_OVERRIDES6__PRESERVED                            0x00000000U
#define PSEQ_EMRAM_OVERRIDES6__RESET_VALUE                          0x00000000U

#endif /* __PSEQ_EMRAM_OVERRIDES6_MACRO__ */

/** @} end of emram_overrides6 */

/* macros for BlueprintGlobalNameSpace::PSEQ_emram_overrides7 */
/**
 * @defgroup at_apb_pseq_regs_core_emram_overrides7 emram_overrides7
 * @brief override portion of pmu control signals definitions.
 * @{
 */
#ifndef __PSEQ_EMRAM_OVERRIDES7_MACRO__
#define __PSEQ_EMRAM_OVERRIDES7_MACRO__

/* macros for field block_emram_vddcut */
/**
 * @defgroup at_apb_pseq_regs_core_block_emram_vddcut_field block_emram_vddcut_field
 * @brief macros for field block_emram_vddcut
 * @details If set, core's FSM cannot open the exchange memory head switches.
 * @{
 */
#define PSEQ_EMRAM_OVERRIDES7__BLOCK_EMRAM_VDDCUT__SHIFT                      0
#define PSEQ_EMRAM_OVERRIDES7__BLOCK_EMRAM_VDDCUT__WIDTH                      2
#define PSEQ_EMRAM_OVERRIDES7__BLOCK_EMRAM_VDDCUT__MASK             0x00000003U
#define PSEQ_EMRAM_OVERRIDES7__BLOCK_EMRAM_VDDCUT__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000003U)
#define PSEQ_EMRAM_OVERRIDES7__BLOCK_EMRAM_VDDCUT__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000003U)
#define PSEQ_EMRAM_OVERRIDES7__BLOCK_EMRAM_VDDCUT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000003U) | ((uint32_t)(src) &\
                    0x00000003U)
#define PSEQ_EMRAM_OVERRIDES7__BLOCK_EMRAM_VDDCUT__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000003U)))
#define PSEQ_EMRAM_OVERRIDES7__BLOCK_EMRAM_VDDCUT__RESET_VALUE      0x00000000U
/** @} */
#define PSEQ_EMRAM_OVERRIDES7__TYPE                                    uint32_t
#define PSEQ_EMRAM_OVERRIDES7__READ                                 0x00000003U
#define PSEQ_EMRAM_OVERRIDES7__WRITE                                0x00000003U
#define PSEQ_EMRAM_OVERRIDES7__PRESERVED                            0x00000000U
#define PSEQ_EMRAM_OVERRIDES7__RESET_VALUE                          0x00000000U

#endif /* __PSEQ_EMRAM_OVERRIDES7_MACRO__ */

/** @} end of emram_overrides7 */

/* macros for BlueprintGlobalNameSpace::PSEQ_emram_overrides8 */
/**
 * @defgroup at_apb_pseq_regs_core_emram_overrides8 emram_overrides8
 * @brief override portion of pmu control signals definitions.
 * @{
 */
#ifndef __PSEQ_EMRAM_OVERRIDES8_MACRO__
#define __PSEQ_EMRAM_OVERRIDES8_MACRO__

/* macros for field block_emram_psd */
/**
 * @defgroup at_apb_pseq_regs_core_block_emram_psd_field block_emram_psd_field
 * @brief macros for field block_emram_psd
 * @details If set, core's FSM cannot set the exchange memory psd signals.
 * @{
 */
#define PSEQ_EMRAM_OVERRIDES8__BLOCK_EMRAM_PSD__SHIFT                         0
#define PSEQ_EMRAM_OVERRIDES8__BLOCK_EMRAM_PSD__WIDTH                         2
#define PSEQ_EMRAM_OVERRIDES8__BLOCK_EMRAM_PSD__MASK                0x00000003U
#define PSEQ_EMRAM_OVERRIDES8__BLOCK_EMRAM_PSD__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000003U)
#define PSEQ_EMRAM_OVERRIDES8__BLOCK_EMRAM_PSD__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000003U)
#define PSEQ_EMRAM_OVERRIDES8__BLOCK_EMRAM_PSD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000003U) | ((uint32_t)(src) &\
                    0x00000003U)
#define PSEQ_EMRAM_OVERRIDES8__BLOCK_EMRAM_PSD__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000003U)))
#define PSEQ_EMRAM_OVERRIDES8__BLOCK_EMRAM_PSD__RESET_VALUE         0x00000000U
/** @} */
#define PSEQ_EMRAM_OVERRIDES8__TYPE                                    uint32_t
#define PSEQ_EMRAM_OVERRIDES8__READ                                 0x00000003U
#define PSEQ_EMRAM_OVERRIDES8__WRITE                                0x00000003U
#define PSEQ_EMRAM_OVERRIDES8__PRESERVED                            0x00000000U
#define PSEQ_EMRAM_OVERRIDES8__RESET_VALUE                          0x00000000U

#endif /* __PSEQ_EMRAM_OVERRIDES8_MACRO__ */

/** @} end of emram_overrides8 */

/* macros for BlueprintGlobalNameSpace::PSEQ_counter_control */
/**
 * @defgroup at_apb_pseq_regs_core_counter_control counter_control
 * @brief control signals for counters definitions.
 * @{
 */
#ifndef __PSEQ_COUNTER_CONTROL_MACRO__
#define __PSEQ_COUNTER_CONTROL_MACRO__

/* macros for field halt_real_time_counter */
/**
 * @defgroup at_apb_pseq_regs_core_halt_real_time_counter_field halt_real_time_counter_field
 * @brief macros for field halt_real_time_counter
 * @details stop the real time counter from advancing
 * @{
 */
#define PSEQ_COUNTER_CONTROL__HALT_REAL_TIME_COUNTER__SHIFT                   0
#define PSEQ_COUNTER_CONTROL__HALT_REAL_TIME_COUNTER__WIDTH                   1
#define PSEQ_COUNTER_CONTROL__HALT_REAL_TIME_COUNTER__MASK          0x00000001U
#define PSEQ_COUNTER_CONTROL__HALT_REAL_TIME_COUNTER__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define PSEQ_COUNTER_CONTROL__HALT_REAL_TIME_COUNTER__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define PSEQ_COUNTER_CONTROL__HALT_REAL_TIME_COUNTER__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define PSEQ_COUNTER_CONTROL__HALT_REAL_TIME_COUNTER__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define PSEQ_COUNTER_CONTROL__HALT_REAL_TIME_COUNTER__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define PSEQ_COUNTER_CONTROL__HALT_REAL_TIME_COUNTER__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define PSEQ_COUNTER_CONTROL__HALT_REAL_TIME_COUNTER__RESET_VALUE   0x00000000U
/** @} */

/* macros for field load_count_down_timer */
/**
 * @defgroup at_apb_pseq_regs_core_load_count_down_timer_field load_count_down_timer_field
 * @brief macros for field load_count_down_timer
 * @details loads on positive edge; hardware doesn't reset this bit
 * @{
 */
#define PSEQ_COUNTER_CONTROL__LOAD_COUNT_DOWN_TIMER__SHIFT                    1
#define PSEQ_COUNTER_CONTROL__LOAD_COUNT_DOWN_TIMER__WIDTH                    1
#define PSEQ_COUNTER_CONTROL__LOAD_COUNT_DOWN_TIMER__MASK           0x00000002U
#define PSEQ_COUNTER_CONTROL__LOAD_COUNT_DOWN_TIMER__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define PSEQ_COUNTER_CONTROL__LOAD_COUNT_DOWN_TIMER__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define PSEQ_COUNTER_CONTROL__LOAD_COUNT_DOWN_TIMER__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define PSEQ_COUNTER_CONTROL__LOAD_COUNT_DOWN_TIMER__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define PSEQ_COUNTER_CONTROL__LOAD_COUNT_DOWN_TIMER__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define PSEQ_COUNTER_CONTROL__LOAD_COUNT_DOWN_TIMER__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define PSEQ_COUNTER_CONTROL__LOAD_COUNT_DOWN_TIMER__RESET_VALUE    0x00000000U
/** @} */
#define PSEQ_COUNTER_CONTROL__TYPE                                     uint32_t
#define PSEQ_COUNTER_CONTROL__READ                                  0x00000003U
#define PSEQ_COUNTER_CONTROL__WRITE                                 0x00000003U
#define PSEQ_COUNTER_CONTROL__PRESERVED                             0x00000000U
#define PSEQ_COUNTER_CONTROL__RESET_VALUE                           0x00000000U

#endif /* __PSEQ_COUNTER_CONTROL_MACRO__ */

/** @} end of counter_control */

/* macros for BlueprintGlobalNameSpace::PSEQ_current_real_time */
/**
 * @defgroup at_apb_pseq_regs_core_current_real_time current_real_time
 * @brief counter value definitions.
 * @{
 */
#ifndef __PSEQ_CURRENT_REAL_TIME_MACRO__
#define __PSEQ_CURRENT_REAL_TIME_MACRO__

/* macros for field val */
/**
 * @defgroup at_apb_pseq_regs_core_val_field val_field
 * @brief macros for field val
 * @details real time in clk_lpc clock cycles
 * @{
 */
#define PSEQ_CURRENT_REAL_TIME__VAL__SHIFT                                    0
#define PSEQ_CURRENT_REAL_TIME__VAL__WIDTH                                   32
#define PSEQ_CURRENT_REAL_TIME__VAL__MASK                           0xffffffffU
#define PSEQ_CURRENT_REAL_TIME__VAL__READ(src)  ((uint32_t)(src) & 0xffffffffU)
#define PSEQ_CURRENT_REAL_TIME__VAL__RESET_VALUE                    0x00000000U
/** @} */
#define PSEQ_CURRENT_REAL_TIME__TYPE                                   uint32_t
#define PSEQ_CURRENT_REAL_TIME__READ                                0xffffffffU
#define PSEQ_CURRENT_REAL_TIME__PRESERVED                           0x00000000U
#define PSEQ_CURRENT_REAL_TIME__RESET_VALUE                         0x00000000U

#endif /* __PSEQ_CURRENT_REAL_TIME_MACRO__ */

/** @} end of current_real_time */

/* macros for BlueprintGlobalNameSpace::PSEQ_current_count_down_time */
/**
 * @defgroup at_apb_pseq_regs_core_current_count_down_time current_count_down_time
 * @brief counter value definitions.
 * @{
 */
#ifndef __PSEQ_CURRENT_COUNT_DOWN_TIME_MACRO__
#define __PSEQ_CURRENT_COUNT_DOWN_TIME_MACRO__

/* macros for field val */
/**
 * @defgroup at_apb_pseq_regs_core_val_field val_field
 * @brief macros for field val
 * @details this value is on 32kHz domain; read twice and check value is the same; if it's not, reread
 * @{
 */
#define PSEQ_CURRENT_COUNT_DOWN_TIME__VAL__SHIFT                              0
#define PSEQ_CURRENT_COUNT_DOWN_TIME__VAL__WIDTH                             32
#define PSEQ_CURRENT_COUNT_DOWN_TIME__VAL__MASK                     0xffffffffU
#define PSEQ_CURRENT_COUNT_DOWN_TIME__VAL__READ(src) \
                    ((uint32_t)(src)\
                    & 0xffffffffU)
#define PSEQ_CURRENT_COUNT_DOWN_TIME__VAL__RESET_VALUE              0x00000000U
/** @} */
#define PSEQ_CURRENT_COUNT_DOWN_TIME__TYPE                             uint32_t
#define PSEQ_CURRENT_COUNT_DOWN_TIME__READ                          0xffffffffU
#define PSEQ_CURRENT_COUNT_DOWN_TIME__PRESERVED                     0x00000000U
#define PSEQ_CURRENT_COUNT_DOWN_TIME__RESET_VALUE                   0x00000000U

#endif /* __PSEQ_CURRENT_COUNT_DOWN_TIME_MACRO__ */

/** @} end of current_count_down_time */

/* macros for BlueprintGlobalNameSpace::PSEQ_init_count_down */
/**
 * @defgroup at_apb_pseq_regs_core_init_count_down init_count_down
 * @brief counter value definitions.
 * @{
 */
#ifndef __PSEQ_INIT_COUNT_DOWN_MACRO__
#define __PSEQ_INIT_COUNT_DOWN_MACRO__

/* macros for field val */
/**
 * @defgroup at_apb_pseq_regs_core_val_field val_field
 * @brief macros for field val
 * @details initial value for count down timer
 * @{
 */
#define PSEQ_INIT_COUNT_DOWN__VAL__SHIFT                                      0
#define PSEQ_INIT_COUNT_DOWN__VAL__WIDTH                                     32
#define PSEQ_INIT_COUNT_DOWN__VAL__MASK                             0xffffffffU
#define PSEQ_INIT_COUNT_DOWN__VAL__READ(src)    ((uint32_t)(src) & 0xffffffffU)
#define PSEQ_INIT_COUNT_DOWN__VAL__WRITE(src)   ((uint32_t)(src) & 0xffffffffU)
#define PSEQ_INIT_COUNT_DOWN__VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffffffffU) | ((uint32_t)(src) &\
                    0xffffffffU)
#define PSEQ_INIT_COUNT_DOWN__VAL__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0xffffffffU)))
#define PSEQ_INIT_COUNT_DOWN__VAL__RESET_VALUE                      0x00000fffU
/** @} */
#define PSEQ_INIT_COUNT_DOWN__TYPE                                     uint32_t
#define PSEQ_INIT_COUNT_DOWN__READ                                  0xffffffffU
#define PSEQ_INIT_COUNT_DOWN__WRITE                                 0xffffffffU
#define PSEQ_INIT_COUNT_DOWN__PRESERVED                             0x00000000U
#define PSEQ_INIT_COUNT_DOWN__RESET_VALUE                           0x00000fffU

#endif /* __PSEQ_INIT_COUNT_DOWN_MACRO__ */

/** @} end of init_count_down */

/* macros for BlueprintGlobalNameSpace::PSEQ_inst_pending */
/**
 * @defgroup at_apb_pseq_regs_core_inst_pending inst_pending
 * @brief instructions from clk_mpc to clk_lpc still pending definitions.
 * @{
 */
#ifndef __PSEQ_INST_PENDING_MACRO__
#define __PSEQ_INST_PENDING_MACRO__

/* macros for field cntdwn_timer_load */
/**
 * @defgroup at_apb_pseq_regs_core_cntdwn_timer_load_field cntdwn_timer_load_field
 * @brief macros for field cntdwn_timer_load
 * @details load of count down timer is still pending
 * @{
 */
#define PSEQ_INST_PENDING__CNTDWN_TIMER_LOAD__SHIFT                          16
#define PSEQ_INST_PENDING__CNTDWN_TIMER_LOAD__WIDTH                           1
#define PSEQ_INST_PENDING__CNTDWN_TIMER_LOAD__MASK                  0x00010000U
#define PSEQ_INST_PENDING__CNTDWN_TIMER_LOAD__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00010000U) >> 16)
#define PSEQ_INST_PENDING__CNTDWN_TIMER_LOAD__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00010000U) | ((uint32_t)(1) << 16)
#define PSEQ_INST_PENDING__CNTDWN_TIMER_LOAD__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00010000U) | ((uint32_t)(0) << 16)
#define PSEQ_INST_PENDING__CNTDWN_TIMER_LOAD__RESET_VALUE           0x00000000U
/** @} */
#define PSEQ_INST_PENDING__TYPE                                        uint32_t
#define PSEQ_INST_PENDING__READ                                     0x00010000U
#define PSEQ_INST_PENDING__PRESERVED                                0x00000000U
#define PSEQ_INST_PENDING__RESET_VALUE                              0x00000000U

#endif /* __PSEQ_INST_PENDING_MACRO__ */

/** @} end of inst_pending */

/* macros for BlueprintGlobalNameSpace::PSEQ_status */
/**
 * @defgroup at_apb_pseq_regs_core_status status
 * @brief status signals definitions.
 * @{
 */
#ifndef __PSEQ_STATUS_MACRO__
#define __PSEQ_STATUS_MACRO__

/* macros for field in_active_state */
/**
 * @defgroup at_apb_pseq_regs_core_in_active_state_field in_active_state_field
 * @brief macros for field in_active_state
 * @details pseq is currently in active state
 * @{
 */
#define PSEQ_STATUS__IN_ACTIVE_STATE__SHIFT                                   0
#define PSEQ_STATUS__IN_ACTIVE_STATE__WIDTH                                   1
#define PSEQ_STATUS__IN_ACTIVE_STATE__MASK                          0x00000001U
#define PSEQ_STATUS__IN_ACTIVE_STATE__READ(src) ((uint32_t)(src) & 0x00000001U)
#define PSEQ_STATUS__IN_ACTIVE_STATE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define PSEQ_STATUS__IN_ACTIVE_STATE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define PSEQ_STATUS__IN_ACTIVE_STATE__RESET_VALUE                   0x00000000U
/** @} */

/* macros for field in_cpu_active_state */
/**
 * @defgroup at_apb_pseq_regs_core_in_cpu_active_state_field in_cpu_active_state_field
 * @brief macros for field in_cpu_active_state
 * @details pseq is currently in cpu active state
 * @{
 */
#define PSEQ_STATUS__IN_CPU_ACTIVE_STATE__SHIFT                               1
#define PSEQ_STATUS__IN_CPU_ACTIVE_STATE__WIDTH                               1
#define PSEQ_STATUS__IN_CPU_ACTIVE_STATE__MASK                      0x00000002U
#define PSEQ_STATUS__IN_CPU_ACTIVE_STATE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define PSEQ_STATUS__IN_CPU_ACTIVE_STATE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define PSEQ_STATUS__IN_CPU_ACTIVE_STATE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define PSEQ_STATUS__IN_CPU_ACTIVE_STATE__RESET_VALUE               0x00000000U
/** @} */

/* macros for field in_hibernate_state */
/**
 * @defgroup at_apb_pseq_regs_core_in_hibernate_state_field in_hibernate_state_field
 * @brief macros for field in_hibernate_state
 * @details pseq is currently in hibernate state
 * @{
 */
#define PSEQ_STATUS__IN_HIBERNATE_STATE__SHIFT                                2
#define PSEQ_STATUS__IN_HIBERNATE_STATE__WIDTH                                1
#define PSEQ_STATUS__IN_HIBERNATE_STATE__MASK                       0x00000004U
#define PSEQ_STATUS__IN_HIBERNATE_STATE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000004U) >> 2)
#define PSEQ_STATUS__IN_HIBERNATE_STATE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(1) << 2)
#define PSEQ_STATUS__IN_HIBERNATE_STATE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(0) << 2)
#define PSEQ_STATUS__IN_HIBERNATE_STATE__RESET_VALUE                0x00000000U
/** @} */

/* macros for field timer_triggered */
/**
 * @defgroup at_apb_pseq_regs_core_timer_triggered_field timer_triggered_field
 * @brief macros for field timer_triggered
 * @details wake triggered by count down timer
 * @{
 */
#define PSEQ_STATUS__TIMER_TRIGGERED__SHIFT                                   8
#define PSEQ_STATUS__TIMER_TRIGGERED__WIDTH                                   1
#define PSEQ_STATUS__TIMER_TRIGGERED__MASK                          0x00000100U
#define PSEQ_STATUS__TIMER_TRIGGERED__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000100U) >> 8)
#define PSEQ_STATUS__TIMER_TRIGGERED__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000100U) | ((uint32_t)(1) << 8)
#define PSEQ_STATUS__TIMER_TRIGGERED__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000100U) | ((uint32_t)(0) << 8)
#define PSEQ_STATUS__TIMER_TRIGGERED__RESET_VALUE                   0x00000000U
/** @} */

/* macros for field gpio_triggered */
/**
 * @defgroup at_apb_pseq_regs_core_gpio_triggered_field gpio_triggered_field
 * @brief macros for field gpio_triggered
 * @details wake triggered by gpio
 * @{
 */
#define PSEQ_STATUS__GPIO_TRIGGERED__SHIFT                                    9
#define PSEQ_STATUS__GPIO_TRIGGERED__WIDTH                                    1
#define PSEQ_STATUS__GPIO_TRIGGERED__MASK                           0x00000200U
#define PSEQ_STATUS__GPIO_TRIGGERED__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000200U) >> 9)
#define PSEQ_STATUS__GPIO_TRIGGERED__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000200U) | ((uint32_t)(1) << 9)
#define PSEQ_STATUS__GPIO_TRIGGERED__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000200U) | ((uint32_t)(0) << 9)
#define PSEQ_STATUS__GPIO_TRIGGERED__RESET_VALUE                    0x00000000U
/** @} */

/* macros for field wurx0_triggered */
/**
 * @defgroup at_apb_pseq_regs_core_wurx0_triggered_field wurx0_triggered_field
 * @brief macros for field wurx0_triggered
 * @details wake triggered by wurx0
 * @{
 */
#define PSEQ_STATUS__WURX0_TRIGGERED__SHIFT                                  10
#define PSEQ_STATUS__WURX0_TRIGGERED__WIDTH                                   1
#define PSEQ_STATUS__WURX0_TRIGGERED__MASK                          0x00000400U
#define PSEQ_STATUS__WURX0_TRIGGERED__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000400U) >> 10)
#define PSEQ_STATUS__WURX0_TRIGGERED__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000400U) | ((uint32_t)(1) << 10)
#define PSEQ_STATUS__WURX0_TRIGGERED__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000400U) | ((uint32_t)(0) << 10)
#define PSEQ_STATUS__WURX0_TRIGGERED__RESET_VALUE                   0x00000000U
/** @} */

/* macros for field wurx1_triggered */
/**
 * @defgroup at_apb_pseq_regs_core_wurx1_triggered_field wurx1_triggered_field
 * @brief macros for field wurx1_triggered
 * @details wake triggered by wurx1
 * @{
 */
#define PSEQ_STATUS__WURX1_TRIGGERED__SHIFT                                  11
#define PSEQ_STATUS__WURX1_TRIGGERED__WIDTH                                   1
#define PSEQ_STATUS__WURX1_TRIGGERED__MASK                          0x00000800U
#define PSEQ_STATUS__WURX1_TRIGGERED__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000800U) >> 11)
#define PSEQ_STATUS__WURX1_TRIGGERED__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000800U) | ((uint32_t)(1) << 11)
#define PSEQ_STATUS__WURX1_TRIGGERED__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000800U) | ((uint32_t)(0) << 11)
#define PSEQ_STATUS__WURX1_TRIGGERED__RESET_VALUE                   0x00000000U
/** @} */

/* macros for field qdec_triggered */
/**
 * @defgroup at_apb_pseq_regs_core_qdec_triggered_field qdec_triggered_field
 * @brief macros for field qdec_triggered
 * @details wake triggered by qdec activity
 * @{
 */
#define PSEQ_STATUS__QDEC_TRIGGERED__SHIFT                                   12
#define PSEQ_STATUS__QDEC_TRIGGERED__WIDTH                                    1
#define PSEQ_STATUS__QDEC_TRIGGERED__MASK                           0x00001000U
#define PSEQ_STATUS__QDEC_TRIGGERED__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00001000U) >> 12)
#define PSEQ_STATUS__QDEC_TRIGGERED__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00001000U) | ((uint32_t)(1) << 12)
#define PSEQ_STATUS__QDEC_TRIGGERED__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00001000U) | ((uint32_t)(0) << 12)
#define PSEQ_STATUS__QDEC_TRIGGERED__RESET_VALUE                    0x00000000U
/** @} */

/* macros for field ksm_triggered */
/**
 * @defgroup at_apb_pseq_regs_core_ksm_triggered_field ksm_triggered_field
 * @brief macros for field ksm_triggered
 * @details wake triggered by ksm activity
 * @{
 */
#define PSEQ_STATUS__KSM_TRIGGERED__SHIFT                                    13
#define PSEQ_STATUS__KSM_TRIGGERED__WIDTH                                     1
#define PSEQ_STATUS__KSM_TRIGGERED__MASK                            0x00002000U
#define PSEQ_STATUS__KSM_TRIGGERED__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00002000U) >> 13)
#define PSEQ_STATUS__KSM_TRIGGERED__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00002000U) | ((uint32_t)(1) << 13)
#define PSEQ_STATUS__KSM_TRIGGERED__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00002000U) | ((uint32_t)(0) << 13)
#define PSEQ_STATUS__KSM_TRIGGERED__RESET_VALUE                     0x00000000U
/** @} */

/* macros for field dbg_triggered */
/**
 * @defgroup at_apb_pseq_regs_core_dbg_triggered_field dbg_triggered_field
 * @brief macros for field dbg_triggered
 * @details wake triggered by debugger
 * @{
 */
#define PSEQ_STATUS__DBG_TRIGGERED__SHIFT                                    14
#define PSEQ_STATUS__DBG_TRIGGERED__WIDTH                                     1
#define PSEQ_STATUS__DBG_TRIGGERED__MASK                            0x00004000U
#define PSEQ_STATUS__DBG_TRIGGERED__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00004000U) >> 14)
#define PSEQ_STATUS__DBG_TRIGGERED__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00004000U) | ((uint32_t)(1) << 14)
#define PSEQ_STATUS__DBG_TRIGGERED__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00004000U) | ((uint32_t)(0) << 14)
#define PSEQ_STATUS__DBG_TRIGGERED__RESET_VALUE                     0x00000000U
/** @} */

/* macros for field shub_triggered */
/**
 * @defgroup at_apb_pseq_regs_core_shub_triggered_field shub_triggered_field
 * @brief macros for field shub_triggered
 * @details wake triggered by sensor hub
 * @{
 */
#define PSEQ_STATUS__SHUB_TRIGGERED__SHIFT                                   15
#define PSEQ_STATUS__SHUB_TRIGGERED__WIDTH                                    1
#define PSEQ_STATUS__SHUB_TRIGGERED__MASK                           0x00008000U
#define PSEQ_STATUS__SHUB_TRIGGERED__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00008000U) >> 15)
#define PSEQ_STATUS__SHUB_TRIGGERED__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00008000U) | ((uint32_t)(1) << 15)
#define PSEQ_STATUS__SHUB_TRIGGERED__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00008000U) | ((uint32_t)(0) << 15)
#define PSEQ_STATUS__SHUB_TRIGGERED__RESET_VALUE                    0x00000000U
/** @} */
#define PSEQ_STATUS__TYPE                                              uint32_t
#define PSEQ_STATUS__READ                                           0x0000ff07U
#define PSEQ_STATUS__PRESERVED                                      0x00000000U
#define PSEQ_STATUS__RESET_VALUE                                    0x00000000U

#endif /* __PSEQ_STATUS_MACRO__ */

/** @} end of status */

/* macros for BlueprintGlobalNameSpace::PSEQ_persistent0 */
/**
 * @defgroup at_apb_pseq_regs_core_persistent0 persistent0
 * @brief persistent scratchpad register definitions.
 * @{
 */
#ifndef __PSEQ_PERSISTENT0_MACRO__
#define __PSEQ_PERSISTENT0_MACRO__

/* macros for field data */
/**
 * @defgroup at_apb_pseq_regs_core_data_field data_field
 * @brief macros for field data
 * @details holds persistent state; persists through hibernation; might be of use to sw
 * @{
 */
#define PSEQ_PERSISTENT0__DATA__SHIFT                                         0
#define PSEQ_PERSISTENT0__DATA__WIDTH                                        32
#define PSEQ_PERSISTENT0__DATA__MASK                                0xffffffffU
#define PSEQ_PERSISTENT0__DATA__READ(src)       ((uint32_t)(src) & 0xffffffffU)
#define PSEQ_PERSISTENT0__DATA__WRITE(src)      ((uint32_t)(src) & 0xffffffffU)
#define PSEQ_PERSISTENT0__DATA__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffffffffU) | ((uint32_t)(src) &\
                    0xffffffffU)
#define PSEQ_PERSISTENT0__DATA__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0xffffffffU)))
#define PSEQ_PERSISTENT0__DATA__RESET_VALUE                         0x00000000U
/** @} */
#define PSEQ_PERSISTENT0__TYPE                                         uint32_t
#define PSEQ_PERSISTENT0__READ                                      0xffffffffU
#define PSEQ_PERSISTENT0__WRITE                                     0xffffffffU
#define PSEQ_PERSISTENT0__PRESERVED                                 0x00000000U
#define PSEQ_PERSISTENT0__RESET_VALUE                               0x00000000U

#endif /* __PSEQ_PERSISTENT0_MACRO__ */

/** @} end of persistent0 */

/* macros for BlueprintGlobalNameSpace::PSEQ_sensor_hub_control */
/**
 * @defgroup at_apb_pseq_regs_core_sensor_hub_control sensor_hub_control
 * @brief control signals for sensor hub definitions.
 * @{
 */
#ifndef __PSEQ_SENSOR_HUB_CONTROL_MACRO__
#define __PSEQ_SENSOR_HUB_CONTROL_MACRO__

/* macros for field enable_func */
/**
 * @defgroup at_apb_pseq_regs_core_enable_func_field enable_func_field
 * @brief macros for field enable_func
 * @details 1= sensor hub can trigger pseq out of hibernation early due to a threshold crossing event in sensor hub.  0= sensor hub cannot trigger pseq out of hibernatio  This bit does not disable the trigger signal to start the sensor functionality at the onset of hibernation.
 * @{
 */
#define PSEQ_SENSOR_HUB_CONTROL__ENABLE_FUNC__SHIFT                           0
#define PSEQ_SENSOR_HUB_CONTROL__ENABLE_FUNC__WIDTH                           1
#define PSEQ_SENSOR_HUB_CONTROL__ENABLE_FUNC__MASK                  0x00000001U
#define PSEQ_SENSOR_HUB_CONTROL__ENABLE_FUNC__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define PSEQ_SENSOR_HUB_CONTROL__ENABLE_FUNC__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define PSEQ_SENSOR_HUB_CONTROL__ENABLE_FUNC__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define PSEQ_SENSOR_HUB_CONTROL__ENABLE_FUNC__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define PSEQ_SENSOR_HUB_CONTROL__ENABLE_FUNC__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define PSEQ_SENSOR_HUB_CONTROL__ENABLE_FUNC__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define PSEQ_SENSOR_HUB_CONTROL__ENABLE_FUNC__RESET_VALUE           0x00000000U
/** @} */

/* macros for field shub_reset */
/**
 * @defgroup at_apb_pseq_regs_core_shub_reset_field shub_reset_field
 * @brief macros for field shub_reset
 * @details 1= keep shub in reset state; 0= release shub from reset
 * @{
 */
#define PSEQ_SENSOR_HUB_CONTROL__SHUB_RESET__SHIFT                            1
#define PSEQ_SENSOR_HUB_CONTROL__SHUB_RESET__WIDTH                            1
#define PSEQ_SENSOR_HUB_CONTROL__SHUB_RESET__MASK                   0x00000002U
#define PSEQ_SENSOR_HUB_CONTROL__SHUB_RESET__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define PSEQ_SENSOR_HUB_CONTROL__SHUB_RESET__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define PSEQ_SENSOR_HUB_CONTROL__SHUB_RESET__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define PSEQ_SENSOR_HUB_CONTROL__SHUB_RESET__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define PSEQ_SENSOR_HUB_CONTROL__SHUB_RESET__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define PSEQ_SENSOR_HUB_CONTROL__SHUB_RESET__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define PSEQ_SENSOR_HUB_CONTROL__SHUB_RESET__RESET_VALUE            0x00000000U
/** @} */

/* macros for field shub_running_val */
/**
 * @defgroup at_apb_pseq_regs_core_shub_running_val_field shub_running_val_field
 * @brief macros for field shub_running_val
 * @details value fo shub_running when override is set
 * @{
 */
#define PSEQ_SENSOR_HUB_CONTROL__SHUB_RUNNING_VAL__SHIFT                      2
#define PSEQ_SENSOR_HUB_CONTROL__SHUB_RUNNING_VAL__WIDTH                      1
#define PSEQ_SENSOR_HUB_CONTROL__SHUB_RUNNING_VAL__MASK             0x00000004U
#define PSEQ_SENSOR_HUB_CONTROL__SHUB_RUNNING_VAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000004U) >> 2)
#define PSEQ_SENSOR_HUB_CONTROL__SHUB_RUNNING_VAL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 2) & 0x00000004U)
#define PSEQ_SENSOR_HUB_CONTROL__SHUB_RUNNING_VAL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | (((uint32_t)(src) <<\
                    2) & 0x00000004U)
#define PSEQ_SENSOR_HUB_CONTROL__SHUB_RUNNING_VAL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 2) & ~0x00000004U)))
#define PSEQ_SENSOR_HUB_CONTROL__SHUB_RUNNING_VAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(1) << 2)
#define PSEQ_SENSOR_HUB_CONTROL__SHUB_RUNNING_VAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(0) << 2)
#define PSEQ_SENSOR_HUB_CONTROL__SHUB_RUNNING_VAL__RESET_VALUE      0x00000000U
/** @} */

/* macros for field shub_running_ovrd */
/**
 * @defgroup at_apb_pseq_regs_core_shub_running_ovrd_field shub_running_ovrd_field
 * @brief macros for field shub_running_ovrd
 * @details 1= override
 * @{
 */
#define PSEQ_SENSOR_HUB_CONTROL__SHUB_RUNNING_OVRD__SHIFT                     3
#define PSEQ_SENSOR_HUB_CONTROL__SHUB_RUNNING_OVRD__WIDTH                     1
#define PSEQ_SENSOR_HUB_CONTROL__SHUB_RUNNING_OVRD__MASK            0x00000008U
#define PSEQ_SENSOR_HUB_CONTROL__SHUB_RUNNING_OVRD__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000008U) >> 3)
#define PSEQ_SENSOR_HUB_CONTROL__SHUB_RUNNING_OVRD__WRITE(src) \
                    (((uint32_t)(src)\
                    << 3) & 0x00000008U)
#define PSEQ_SENSOR_HUB_CONTROL__SHUB_RUNNING_OVRD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | (((uint32_t)(src) <<\
                    3) & 0x00000008U)
#define PSEQ_SENSOR_HUB_CONTROL__SHUB_RUNNING_OVRD__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 3) & ~0x00000008U)))
#define PSEQ_SENSOR_HUB_CONTROL__SHUB_RUNNING_OVRD__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((uint32_t)(1) << 3)
#define PSEQ_SENSOR_HUB_CONTROL__SHUB_RUNNING_OVRD__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((uint32_t)(0) << 3)
#define PSEQ_SENSOR_HUB_CONTROL__SHUB_RUNNING_OVRD__RESET_VALUE     0x00000000U
/** @} */

/* macros for field shub_clken */
/**
 * @defgroup at_apb_pseq_regs_core_shub_clken_field shub_clken_field
 * @brief macros for field shub_clken
 * @details sensor hub clock enable  0 = clock gated off  1 = clock running
 * @{
 */
#define PSEQ_SENSOR_HUB_CONTROL__SHUB_CLKEN__SHIFT                            4
#define PSEQ_SENSOR_HUB_CONTROL__SHUB_CLKEN__WIDTH                            1
#define PSEQ_SENSOR_HUB_CONTROL__SHUB_CLKEN__MASK                   0x00000010U
#define PSEQ_SENSOR_HUB_CONTROL__SHUB_CLKEN__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000010U) >> 4)
#define PSEQ_SENSOR_HUB_CONTROL__SHUB_CLKEN__WRITE(src) \
                    (((uint32_t)(src)\
                    << 4) & 0x00000010U)
#define PSEQ_SENSOR_HUB_CONTROL__SHUB_CLKEN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | (((uint32_t)(src) <<\
                    4) & 0x00000010U)
#define PSEQ_SENSOR_HUB_CONTROL__SHUB_CLKEN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 4) & ~0x00000010U)))
#define PSEQ_SENSOR_HUB_CONTROL__SHUB_CLKEN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(1) << 4)
#define PSEQ_SENSOR_HUB_CONTROL__SHUB_CLKEN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(0) << 4)
#define PSEQ_SENSOR_HUB_CONTROL__SHUB_CLKEN__RESET_VALUE            0x00000001U
/** @} */

/* macros for field shub_iso */
/**
 * @defgroup at_apb_pseq_regs_core_shub_iso_field shub_iso_field
 * @brief macros for field shub_iso
 * @details sensor hub isolation  0 = not isolated  1 = isolated
 * @{
 */
#define PSEQ_SENSOR_HUB_CONTROL__SHUB_ISO__SHIFT                              5
#define PSEQ_SENSOR_HUB_CONTROL__SHUB_ISO__WIDTH                              1
#define PSEQ_SENSOR_HUB_CONTROL__SHUB_ISO__MASK                     0x00000020U
#define PSEQ_SENSOR_HUB_CONTROL__SHUB_ISO__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000020U) >> 5)
#define PSEQ_SENSOR_HUB_CONTROL__SHUB_ISO__WRITE(src) \
                    (((uint32_t)(src)\
                    << 5) & 0x00000020U)
#define PSEQ_SENSOR_HUB_CONTROL__SHUB_ISO__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | (((uint32_t)(src) <<\
                    5) & 0x00000020U)
#define PSEQ_SENSOR_HUB_CONTROL__SHUB_ISO__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 5) & ~0x00000020U)))
#define PSEQ_SENSOR_HUB_CONTROL__SHUB_ISO__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | ((uint32_t)(1) << 5)
#define PSEQ_SENSOR_HUB_CONTROL__SHUB_ISO__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | ((uint32_t)(0) << 5)
#define PSEQ_SENSOR_HUB_CONTROL__SHUB_ISO__RESET_VALUE              0x00000000U
/** @} */

/* macros for field shub_vddcut */
/**
 * @defgroup at_apb_pseq_regs_core_shub_vddcut_field shub_vddcut_field
 * @brief macros for field shub_vddcut
 * @details sensor hub head switch control  0 = head switch is closed  1 = head switch is open
 * @{
 */
#define PSEQ_SENSOR_HUB_CONTROL__SHUB_VDDCUT__SHIFT                           6
#define PSEQ_SENSOR_HUB_CONTROL__SHUB_VDDCUT__WIDTH                           1
#define PSEQ_SENSOR_HUB_CONTROL__SHUB_VDDCUT__MASK                  0x00000040U
#define PSEQ_SENSOR_HUB_CONTROL__SHUB_VDDCUT__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000040U) >> 6)
#define PSEQ_SENSOR_HUB_CONTROL__SHUB_VDDCUT__WRITE(src) \
                    (((uint32_t)(src)\
                    << 6) & 0x00000040U)
#define PSEQ_SENSOR_HUB_CONTROL__SHUB_VDDCUT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000040U) | (((uint32_t)(src) <<\
                    6) & 0x00000040U)
#define PSEQ_SENSOR_HUB_CONTROL__SHUB_VDDCUT__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 6) & ~0x00000040U)))
#define PSEQ_SENSOR_HUB_CONTROL__SHUB_VDDCUT__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000040U) | ((uint32_t)(1) << 6)
#define PSEQ_SENSOR_HUB_CONTROL__SHUB_VDDCUT__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000040U) | ((uint32_t)(0) << 6)
#define PSEQ_SENSOR_HUB_CONTROL__SHUB_VDDCUT__RESET_VALUE           0x00000000U
/** @} */
#define PSEQ_SENSOR_HUB_CONTROL__TYPE                                  uint32_t
#define PSEQ_SENSOR_HUB_CONTROL__READ                               0x0000007fU
#define PSEQ_SENSOR_HUB_CONTROL__WRITE                              0x0000007fU
#define PSEQ_SENSOR_HUB_CONTROL__PRESERVED                          0x00000000U
#define PSEQ_SENSOR_HUB_CONTROL__RESET_VALUE                        0x00000010U

#endif /* __PSEQ_SENSOR_HUB_CONTROL_MACRO__ */

/** @} end of sensor_hub_control */

/* macros for BlueprintGlobalNameSpace::PSEQ_ksmqdec_control */
/**
 * @defgroup at_apb_pseq_regs_core_ksmqdec_control ksmqdec_control
 * @brief keyboard and mouse power domain controls definitions.
 * @{
 */
#ifndef __PSEQ_KSMQDEC_CONTROL_MACRO__
#define __PSEQ_KSMQDEC_CONTROL_MACRO__

/* macros for field ksmqdec_clken */
/**
 * @defgroup at_apb_pseq_regs_core_ksmqdec_clken_field ksmqdec_clken_field
 * @brief macros for field ksmqdec_clken
 * @details clock enable  0 = clock gated off  1 = clock running
 * @{
 */
#define PSEQ_KSMQDEC_CONTROL__KSMQDEC_CLKEN__SHIFT                            0
#define PSEQ_KSMQDEC_CONTROL__KSMQDEC_CLKEN__WIDTH                            1
#define PSEQ_KSMQDEC_CONTROL__KSMQDEC_CLKEN__MASK                   0x00000001U
#define PSEQ_KSMQDEC_CONTROL__KSMQDEC_CLKEN__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define PSEQ_KSMQDEC_CONTROL__KSMQDEC_CLKEN__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define PSEQ_KSMQDEC_CONTROL__KSMQDEC_CLKEN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define PSEQ_KSMQDEC_CONTROL__KSMQDEC_CLKEN__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define PSEQ_KSMQDEC_CONTROL__KSMQDEC_CLKEN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define PSEQ_KSMQDEC_CONTROL__KSMQDEC_CLKEN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define PSEQ_KSMQDEC_CONTROL__KSMQDEC_CLKEN__RESET_VALUE            0x00000001U
/** @} */

/* macros for field ksmqdec_frst */
/**
 * @defgroup at_apb_pseq_regs_core_ksmqdec_frst_field ksmqdec_frst_field
 * @brief macros for field ksmqdec_frst
 * @details forced reset  0 = reset  1 = not reset
 * @{
 */
#define PSEQ_KSMQDEC_CONTROL__KSMQDEC_FRST__SHIFT                             1
#define PSEQ_KSMQDEC_CONTROL__KSMQDEC_FRST__WIDTH                             1
#define PSEQ_KSMQDEC_CONTROL__KSMQDEC_FRST__MASK                    0x00000002U
#define PSEQ_KSMQDEC_CONTROL__KSMQDEC_FRST__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define PSEQ_KSMQDEC_CONTROL__KSMQDEC_FRST__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define PSEQ_KSMQDEC_CONTROL__KSMQDEC_FRST__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define PSEQ_KSMQDEC_CONTROL__KSMQDEC_FRST__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define PSEQ_KSMQDEC_CONTROL__KSMQDEC_FRST__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define PSEQ_KSMQDEC_CONTROL__KSMQDEC_FRST__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define PSEQ_KSMQDEC_CONTROL__KSMQDEC_FRST__RESET_VALUE             0x00000000U
/** @} */

/* macros for field ksmqdec_iso */
/**
 * @defgroup at_apb_pseq_regs_core_ksmqdec_iso_field ksmqdec_iso_field
 * @brief macros for field ksmqdec_iso
 * @details isolation  0 = not isolated  1 = isolated
 * @{
 */
#define PSEQ_KSMQDEC_CONTROL__KSMQDEC_ISO__SHIFT                              2
#define PSEQ_KSMQDEC_CONTROL__KSMQDEC_ISO__WIDTH                              1
#define PSEQ_KSMQDEC_CONTROL__KSMQDEC_ISO__MASK                     0x00000004U
#define PSEQ_KSMQDEC_CONTROL__KSMQDEC_ISO__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000004U) >> 2)
#define PSEQ_KSMQDEC_CONTROL__KSMQDEC_ISO__WRITE(src) \
                    (((uint32_t)(src)\
                    << 2) & 0x00000004U)
#define PSEQ_KSMQDEC_CONTROL__KSMQDEC_ISO__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | (((uint32_t)(src) <<\
                    2) & 0x00000004U)
#define PSEQ_KSMQDEC_CONTROL__KSMQDEC_ISO__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 2) & ~0x00000004U)))
#define PSEQ_KSMQDEC_CONTROL__KSMQDEC_ISO__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(1) << 2)
#define PSEQ_KSMQDEC_CONTROL__KSMQDEC_ISO__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(0) << 2)
#define PSEQ_KSMQDEC_CONTROL__KSMQDEC_ISO__RESET_VALUE              0x00000000U
/** @} */

/* macros for field ksmqdec_vddcut */
/**
 * @defgroup at_apb_pseq_regs_core_ksmqdec_vddcut_field ksmqdec_vddcut_field
 * @brief macros for field ksmqdec_vddcut
 * @details head switch control  0 = head switch is closed  1 = head switch is open
 * @{
 */
#define PSEQ_KSMQDEC_CONTROL__KSMQDEC_VDDCUT__SHIFT                           3
#define PSEQ_KSMQDEC_CONTROL__KSMQDEC_VDDCUT__WIDTH                           1
#define PSEQ_KSMQDEC_CONTROL__KSMQDEC_VDDCUT__MASK                  0x00000008U
#define PSEQ_KSMQDEC_CONTROL__KSMQDEC_VDDCUT__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000008U) >> 3)
#define PSEQ_KSMQDEC_CONTROL__KSMQDEC_VDDCUT__WRITE(src) \
                    (((uint32_t)(src)\
                    << 3) & 0x00000008U)
#define PSEQ_KSMQDEC_CONTROL__KSMQDEC_VDDCUT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | (((uint32_t)(src) <<\
                    3) & 0x00000008U)
#define PSEQ_KSMQDEC_CONTROL__KSMQDEC_VDDCUT__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 3) & ~0x00000008U)))
#define PSEQ_KSMQDEC_CONTROL__KSMQDEC_VDDCUT__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((uint32_t)(1) << 3)
#define PSEQ_KSMQDEC_CONTROL__KSMQDEC_VDDCUT__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((uint32_t)(0) << 3)
#define PSEQ_KSMQDEC_CONTROL__KSMQDEC_VDDCUT__RESET_VALUE           0x00000000U
/** @} */
#define PSEQ_KSMQDEC_CONTROL__TYPE                                     uint32_t
#define PSEQ_KSMQDEC_CONTROL__READ                                  0x0000000fU
#define PSEQ_KSMQDEC_CONTROL__WRITE                                 0x0000000fU
#define PSEQ_KSMQDEC_CONTROL__PRESERVED                             0x00000000U
#define PSEQ_KSMQDEC_CONTROL__RESET_VALUE                           0x00000001U

#endif /* __PSEQ_KSMQDEC_CONTROL_MACRO__ */

/** @} end of ksmqdec_control */

/* macros for BlueprintGlobalNameSpace::PSEQ_pmu_status */
/**
 * @defgroup at_apb_pseq_regs_core_pmu_status pmu_status
 * @brief pmu status information definitions.
 * @{
 */
#ifndef __PSEQ_PMU_STATUS_MACRO__
#define __PSEQ_PMU_STATUS_MACRO__

/* macros for field energy4CPU */
/**
 * @defgroup at_apb_pseq_regs_core_energy4CPU_field energy4CPU_field
 * @brief macros for field energy4CPU
 * @details enough energy is present to operation the CPU
 * @{
 */
#define PSEQ_PMU_STATUS__ENERGY4CPU__SHIFT                                    0
#define PSEQ_PMU_STATUS__ENERGY4CPU__WIDTH                                    1
#define PSEQ_PMU_STATUS__ENERGY4CPU__MASK                           0x00000001U
#define PSEQ_PMU_STATUS__ENERGY4CPU__READ(src)  ((uint32_t)(src) & 0x00000001U)
#define PSEQ_PMU_STATUS__ENERGY4CPU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define PSEQ_PMU_STATUS__ENERGY4CPU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define PSEQ_PMU_STATUS__ENERGY4CPU__RESET_VALUE                    0x00000000U
/** @} */

/* macros for field energy4TX */
/**
 * @defgroup at_apb_pseq_regs_core_energy4TX_field energy4TX_field
 * @brief macros for field energy4TX
 * @details enough energy is present to do a transmit
 * @{
 */
#define PSEQ_PMU_STATUS__ENERGY4TX__SHIFT                                     1
#define PSEQ_PMU_STATUS__ENERGY4TX__WIDTH                                     1
#define PSEQ_PMU_STATUS__ENERGY4TX__MASK                            0x00000002U
#define PSEQ_PMU_STATUS__ENERGY4TX__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define PSEQ_PMU_STATUS__ENERGY4TX__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define PSEQ_PMU_STATUS__ENERGY4TX__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define PSEQ_PMU_STATUS__ENERGY4TX__RESET_VALUE                     0x00000000U
/** @} */

/* macros for field endoflife */
/**
 * @defgroup at_apb_pseq_regs_core_endoflife_field endoflife_field
 * @brief macros for field endoflife
 * @details battery is detected to be at end of life; do not start flash writes or radio operation
 * @{
 */
#define PSEQ_PMU_STATUS__ENDOFLIFE__SHIFT                                     2
#define PSEQ_PMU_STATUS__ENDOFLIFE__WIDTH                                     1
#define PSEQ_PMU_STATUS__ENDOFLIFE__MASK                            0x00000004U
#define PSEQ_PMU_STATUS__ENDOFLIFE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000004U) >> 2)
#define PSEQ_PMU_STATUS__ENDOFLIFE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(1) << 2)
#define PSEQ_PMU_STATUS__ENDOFLIFE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(0) << 2)
#define PSEQ_PMU_STATUS__ENDOFLIFE__RESET_VALUE                     0x00000000U
/** @} */

/* macros for field brownout */
/**
 * @defgroup at_apb_pseq_regs_core_brownout_field brownout_field
 * @brief macros for field brownout
 * @details brownout detected; go to low power state as quickly as possible
 * @{
 */
#define PSEQ_PMU_STATUS__BROWNOUT__SHIFT                                      3
#define PSEQ_PMU_STATUS__BROWNOUT__WIDTH                                      1
#define PSEQ_PMU_STATUS__BROWNOUT__MASK                             0x00000008U
#define PSEQ_PMU_STATUS__BROWNOUT__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000008U) >> 3)
#define PSEQ_PMU_STATUS__BROWNOUT__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((uint32_t)(1) << 3)
#define PSEQ_PMU_STATUS__BROWNOUT__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((uint32_t)(0) << 3)
#define PSEQ_PMU_STATUS__BROWNOUT__RESET_VALUE                      0x00000000U
/** @} */

/* macros for field soc_off_wkup_det */
/**
 * @defgroup at_apb_pseq_regs_core_soc_off_wkup_det_field soc_off_wkup_det_field
 * @brief macros for field soc_off_wkup_det
 * @details returned from SOC Off state
 * @{
 */
#define PSEQ_PMU_STATUS__SOC_OFF_WKUP_DET__SHIFT                              4
#define PSEQ_PMU_STATUS__SOC_OFF_WKUP_DET__WIDTH                              3
#define PSEQ_PMU_STATUS__SOC_OFF_WKUP_DET__MASK                     0x00000070U
#define PSEQ_PMU_STATUS__SOC_OFF_WKUP_DET__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000070U) >> 4)
#define PSEQ_PMU_STATUS__SOC_OFF_WKUP_DET__RESET_VALUE              0x00000000U
/** @} */
#define PSEQ_PMU_STATUS__TYPE                                          uint32_t
#define PSEQ_PMU_STATUS__READ                                       0x0000007fU
#define PSEQ_PMU_STATUS__PRESERVED                                  0x00000000U
#define PSEQ_PMU_STATUS__RESET_VALUE                                0x00000000U

#endif /* __PSEQ_PMU_STATUS_MACRO__ */

/** @} end of pmu_status */

/* macros for BlueprintGlobalNameSpace::PSEQ_flash_control */
/**
 * @defgroup at_apb_pseq_regs_core_flash_control flash_control
 * @brief low power control of external flash needs definitions.
 * @{
 */
#ifndef __PSEQ_FLASH_CONTROL_MACRO__
#define __PSEQ_FLASH_CONTROL_MACRO__

/* macros for field power_cycle_en */
/**
 * @defgroup at_apb_pseq_regs_core_power_cycle_en_field power_cycle_en_field
 * @brief macros for field power_cycle_en
 * @details 1'b1=trigger command to release flash from power down when waking up, 1'b0= no action
 * @{
 */
#define PSEQ_FLASH_CONTROL__POWER_CYCLE_EN__SHIFT                             0
#define PSEQ_FLASH_CONTROL__POWER_CYCLE_EN__WIDTH                             1
#define PSEQ_FLASH_CONTROL__POWER_CYCLE_EN__MASK                    0x00000001U
#define PSEQ_FLASH_CONTROL__POWER_CYCLE_EN__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define PSEQ_FLASH_CONTROL__POWER_CYCLE_EN__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define PSEQ_FLASH_CONTROL__POWER_CYCLE_EN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define PSEQ_FLASH_CONTROL__POWER_CYCLE_EN__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define PSEQ_FLASH_CONTROL__POWER_CYCLE_EN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define PSEQ_FLASH_CONTROL__POWER_CYCLE_EN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define PSEQ_FLASH_CONTROL__POWER_CYCLE_EN__RESET_VALUE             0x00000000U
/** @} */

/* macros for field rpd_has_clock */
/**
 * @defgroup at_apb_pseq_regs_core_rpd_has_clock_field rpd_has_clock_field
 * @brief macros for field rpd_has_clock
 * @details 1=flash requires opcode to wakeup, 0=flash requires only CS to wakeup
 * @{
 */
#define PSEQ_FLASH_CONTROL__RPD_HAS_CLOCK__SHIFT                              1
#define PSEQ_FLASH_CONTROL__RPD_HAS_CLOCK__WIDTH                              1
#define PSEQ_FLASH_CONTROL__RPD_HAS_CLOCK__MASK                     0x00000002U
#define PSEQ_FLASH_CONTROL__RPD_HAS_CLOCK__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define PSEQ_FLASH_CONTROL__RPD_HAS_CLOCK__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define PSEQ_FLASH_CONTROL__RPD_HAS_CLOCK__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define PSEQ_FLASH_CONTROL__RPD_HAS_CLOCK__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define PSEQ_FLASH_CONTROL__RPD_HAS_CLOCK__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define PSEQ_FLASH_CONTROL__RPD_HAS_CLOCK__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define PSEQ_FLASH_CONTROL__RPD_HAS_CLOCK__RESET_VALUE              0x00000001U
/** @} */

/* macros for field mode */
/**
 * @defgroup at_apb_pseq_regs_core_mode_field mode_field
 * @brief macros for field mode
 * @details 0,3=single 1=dual 2=quad
 * @{
 */
#define PSEQ_FLASH_CONTROL__MODE__SHIFT                                       2
#define PSEQ_FLASH_CONTROL__MODE__WIDTH                                       2
#define PSEQ_FLASH_CONTROL__MODE__MASK                              0x0000000cU
#define PSEQ_FLASH_CONTROL__MODE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000000cU) >> 2)
#define PSEQ_FLASH_CONTROL__MODE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 2) & 0x0000000cU)
#define PSEQ_FLASH_CONTROL__MODE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000000cU) | (((uint32_t)(src) <<\
                    2) & 0x0000000cU)
#define PSEQ_FLASH_CONTROL__MODE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 2) & ~0x0000000cU)))
#define PSEQ_FLASH_CONTROL__MODE__RESET_VALUE                       0x00000000U
/** @} */

/* macros for field opcode */
/**
 * @defgroup at_apb_pseq_regs_core_opcode_field opcode_field
 * @brief macros for field opcode
 * @details opcode that wakes up the external flash from deep power down mode
 * @{
 */
#define PSEQ_FLASH_CONTROL__OPCODE__SHIFT                                     4
#define PSEQ_FLASH_CONTROL__OPCODE__WIDTH                                     8
#define PSEQ_FLASH_CONTROL__OPCODE__MASK                            0x00000ff0U
#define PSEQ_FLASH_CONTROL__OPCODE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000ff0U) >> 4)
#define PSEQ_FLASH_CONTROL__OPCODE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 4) & 0x00000ff0U)
#define PSEQ_FLASH_CONTROL__OPCODE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000ff0U) | (((uint32_t)(src) <<\
                    4) & 0x00000ff0U)
#define PSEQ_FLASH_CONTROL__OPCODE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 4) & ~0x00000ff0U)))
#define PSEQ_FLASH_CONTROL__OPCODE__RESET_VALUE                     0x00000000U
/** @} */
#define PSEQ_FLASH_CONTROL__TYPE                                       uint32_t
#define PSEQ_FLASH_CONTROL__READ                                    0x00000fffU
#define PSEQ_FLASH_CONTROL__WRITE                                   0x00000fffU
#define PSEQ_FLASH_CONTROL__PRESERVED                               0x00000000U
#define PSEQ_FLASH_CONTROL__RESET_VALUE                             0x00000002U

#endif /* __PSEQ_FLASH_CONTROL_MACRO__ */

/** @} end of flash_control */

/* macros for BlueprintGlobalNameSpace::PSEQ_pmu_interrupt */
/**
 * @defgroup at_apb_pseq_regs_core_pmu_interrupt pmu_interrupt
 * @brief pmu interrupt source definitions.
 * @{
 */
#ifndef __PSEQ_PMU_INTERRUPT_MACRO__
#define __PSEQ_PMU_INTERRUPT_MACRO__

/* macros for field brownout_high */
/**
 * @defgroup at_apb_pseq_regs_core_brownout_high_field brownout_high_field
 * @brief macros for field brownout_high
 * @details  0 = pmu_status_brownout level  1 = pmu_status_brownout negated level  2 = pmu_status_brownout rising edge  3 = pmu_status_brownout falling edge  4 = pmu_status_energy4CPU level  5 = pmu_status_energy4CPU negated level  6 = pmu_status_energy4CPU rising edge  7 = pmu_status_energy4CPU falling edge  8 = pmu_status_energy4TX level  9 = pmu_status_energy4TX negated level  10 = pmu_status_energy4TX rising edge  11 = pmu_status_energy4TX falling edge
 * @{
 */
#define PSEQ_PMU_INTERRUPT__BROWNOUT_HIGH__SHIFT                              0
#define PSEQ_PMU_INTERRUPT__BROWNOUT_HIGH__WIDTH                              1
#define PSEQ_PMU_INTERRUPT__BROWNOUT_HIGH__MASK                     0x00000001U
#define PSEQ_PMU_INTERRUPT__BROWNOUT_HIGH__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define PSEQ_PMU_INTERRUPT__BROWNOUT_HIGH__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define PSEQ_PMU_INTERRUPT__BROWNOUT_HIGH__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define PSEQ_PMU_INTERRUPT__BROWNOUT_HIGH__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define PSEQ_PMU_INTERRUPT__BROWNOUT_HIGH__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define PSEQ_PMU_INTERRUPT__BROWNOUT_HIGH__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define PSEQ_PMU_INTERRUPT__BROWNOUT_HIGH__RESET_VALUE              0x00000000U
/** @} */

/* macros for field brownout_low */
/**
 * @defgroup at_apb_pseq_regs_core_brownout_low_field brownout_low_field
 * @brief macros for field brownout_low
 * @details  0 = pmu_status_brownout level  1 = pmu_status_brownout negated level  2 = pmu_status_brownout rising edge  3 = pmu_status_brownout falling edge  4 = pmu_status_energy4CPU level  5 = pmu_status_energy4CPU negated level  6 = pmu_status_energy4CPU rising edge  7 = pmu_status_energy4CPU falling edge  8 = pmu_status_energy4TX level  9 = pmu_status_energy4TX negated level  10 = pmu_status_energy4TX rising edge  11 = pmu_status_energy4TX falling edge
 * @{
 */
#define PSEQ_PMU_INTERRUPT__BROWNOUT_LOW__SHIFT                               1
#define PSEQ_PMU_INTERRUPT__BROWNOUT_LOW__WIDTH                               1
#define PSEQ_PMU_INTERRUPT__BROWNOUT_LOW__MASK                      0x00000002U
#define PSEQ_PMU_INTERRUPT__BROWNOUT_LOW__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define PSEQ_PMU_INTERRUPT__BROWNOUT_LOW__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define PSEQ_PMU_INTERRUPT__BROWNOUT_LOW__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define PSEQ_PMU_INTERRUPT__BROWNOUT_LOW__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define PSEQ_PMU_INTERRUPT__BROWNOUT_LOW__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define PSEQ_PMU_INTERRUPT__BROWNOUT_LOW__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define PSEQ_PMU_INTERRUPT__BROWNOUT_LOW__RESET_VALUE               0x00000000U
/** @} */

/* macros for field brownout_rising */
/**
 * @defgroup at_apb_pseq_regs_core_brownout_rising_field brownout_rising_field
 * @brief macros for field brownout_rising
 * @details  0 = pmu_status_brownout level  1 = pmu_status_brownout negated level  2 = pmu_status_brownout rising edge  3 = pmu_status_brownout falling edge  4 = pmu_status_energy4CPU level  5 = pmu_status_energy4CPU negated level  6 = pmu_status_energy4CPU rising edge  7 = pmu_status_energy4CPU falling edge  8 = pmu_status_energy4TX level  9 = pmu_status_energy4TX negated level  10 = pmu_status_energy4TX rising edge  11 = pmu_status_energy4TX falling edge
 * @{
 */
#define PSEQ_PMU_INTERRUPT__BROWNOUT_RISING__SHIFT                            2
#define PSEQ_PMU_INTERRUPT__BROWNOUT_RISING__WIDTH                            1
#define PSEQ_PMU_INTERRUPT__BROWNOUT_RISING__MASK                   0x00000004U
#define PSEQ_PMU_INTERRUPT__BROWNOUT_RISING__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000004U) >> 2)
#define PSEQ_PMU_INTERRUPT__BROWNOUT_RISING__WRITE(src) \
                    (((uint32_t)(src)\
                    << 2) & 0x00000004U)
#define PSEQ_PMU_INTERRUPT__BROWNOUT_RISING__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | (((uint32_t)(src) <<\
                    2) & 0x00000004U)
#define PSEQ_PMU_INTERRUPT__BROWNOUT_RISING__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 2) & ~0x00000004U)))
#define PSEQ_PMU_INTERRUPT__BROWNOUT_RISING__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(1) << 2)
#define PSEQ_PMU_INTERRUPT__BROWNOUT_RISING__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(0) << 2)
#define PSEQ_PMU_INTERRUPT__BROWNOUT_RISING__RESET_VALUE            0x00000000U
/** @} */

/* macros for field brownout_falling */
/**
 * @defgroup at_apb_pseq_regs_core_brownout_falling_field brownout_falling_field
 * @brief macros for field brownout_falling
 * @details  0 = pmu_status_brownout level  1 = pmu_status_brownout negated level  2 = pmu_status_brownout rising edge  3 = pmu_status_brownout falling edge  4 = pmu_status_energy4CPU level  5 = pmu_status_energy4CPU negated level  6 = pmu_status_energy4CPU rising edge  7 = pmu_status_energy4CPU falling edge  8 = pmu_status_energy4TX level  9 = pmu_status_energy4TX negated level  10 = pmu_status_energy4TX rising edge  11 = pmu_status_energy4TX falling edge
 * @{
 */
#define PSEQ_PMU_INTERRUPT__BROWNOUT_FALLING__SHIFT                           3
#define PSEQ_PMU_INTERRUPT__BROWNOUT_FALLING__WIDTH                           1
#define PSEQ_PMU_INTERRUPT__BROWNOUT_FALLING__MASK                  0x00000008U
#define PSEQ_PMU_INTERRUPT__BROWNOUT_FALLING__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000008U) >> 3)
#define PSEQ_PMU_INTERRUPT__BROWNOUT_FALLING__WRITE(src) \
                    (((uint32_t)(src)\
                    << 3) & 0x00000008U)
#define PSEQ_PMU_INTERRUPT__BROWNOUT_FALLING__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | (((uint32_t)(src) <<\
                    3) & 0x00000008U)
#define PSEQ_PMU_INTERRUPT__BROWNOUT_FALLING__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 3) & ~0x00000008U)))
#define PSEQ_PMU_INTERRUPT__BROWNOUT_FALLING__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((uint32_t)(1) << 3)
#define PSEQ_PMU_INTERRUPT__BROWNOUT_FALLING__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((uint32_t)(0) << 3)
#define PSEQ_PMU_INTERRUPT__BROWNOUT_FALLING__RESET_VALUE           0x00000000U
/** @} */

/* macros for field energy4CPU_high */
/**
 * @defgroup at_apb_pseq_regs_core_energy4CPU_high_field energy4CPU_high_field
 * @brief macros for field energy4CPU_high
 * @details  0 = pmu_status_brownout level  1 = pmu_status_brownout negated level  2 = pmu_status_brownout rising edge  3 = pmu_status_brownout falling edge  4 = pmu_status_energy4CPU level  5 = pmu_status_energy4CPU negated level  6 = pmu_status_energy4CPU rising edge  7 = pmu_status_energy4CPU falling edge  8 = pmu_status_energy4TX level  9 = pmu_status_energy4TX negated level  10 = pmu_status_energy4TX rising edge  11 = pmu_status_energy4TX falling edge
 * @{
 */
#define PSEQ_PMU_INTERRUPT__ENERGY4CPU_HIGH__SHIFT                            4
#define PSEQ_PMU_INTERRUPT__ENERGY4CPU_HIGH__WIDTH                            1
#define PSEQ_PMU_INTERRUPT__ENERGY4CPU_HIGH__MASK                   0x00000010U
#define PSEQ_PMU_INTERRUPT__ENERGY4CPU_HIGH__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000010U) >> 4)
#define PSEQ_PMU_INTERRUPT__ENERGY4CPU_HIGH__WRITE(src) \
                    (((uint32_t)(src)\
                    << 4) & 0x00000010U)
#define PSEQ_PMU_INTERRUPT__ENERGY4CPU_HIGH__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | (((uint32_t)(src) <<\
                    4) & 0x00000010U)
#define PSEQ_PMU_INTERRUPT__ENERGY4CPU_HIGH__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 4) & ~0x00000010U)))
#define PSEQ_PMU_INTERRUPT__ENERGY4CPU_HIGH__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(1) << 4)
#define PSEQ_PMU_INTERRUPT__ENERGY4CPU_HIGH__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(0) << 4)
#define PSEQ_PMU_INTERRUPT__ENERGY4CPU_HIGH__RESET_VALUE            0x00000000U
/** @} */

/* macros for field energy4CPU_low */
/**
 * @defgroup at_apb_pseq_regs_core_energy4CPU_low_field energy4CPU_low_field
 * @brief macros for field energy4CPU_low
 * @details  0 = pmu_status_brownout level  1 = pmu_status_brownout negated level  2 = pmu_status_brownout rising edge  3 = pmu_status_brownout falling edge  4 = pmu_status_energy4CPU level  5 = pmu_status_energy4CPU negated level  6 = pmu_status_energy4CPU rising edge  7 = pmu_status_energy4CPU falling edge  8 = pmu_status_energy4TX level  9 = pmu_status_energy4TX negated level  10 = pmu_status_energy4TX rising edge  11 = pmu_status_energy4TX falling edge
 * @{
 */
#define PSEQ_PMU_INTERRUPT__ENERGY4CPU_LOW__SHIFT                             5
#define PSEQ_PMU_INTERRUPT__ENERGY4CPU_LOW__WIDTH                             1
#define PSEQ_PMU_INTERRUPT__ENERGY4CPU_LOW__MASK                    0x00000020U
#define PSEQ_PMU_INTERRUPT__ENERGY4CPU_LOW__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000020U) >> 5)
#define PSEQ_PMU_INTERRUPT__ENERGY4CPU_LOW__WRITE(src) \
                    (((uint32_t)(src)\
                    << 5) & 0x00000020U)
#define PSEQ_PMU_INTERRUPT__ENERGY4CPU_LOW__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | (((uint32_t)(src) <<\
                    5) & 0x00000020U)
#define PSEQ_PMU_INTERRUPT__ENERGY4CPU_LOW__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 5) & ~0x00000020U)))
#define PSEQ_PMU_INTERRUPT__ENERGY4CPU_LOW__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | ((uint32_t)(1) << 5)
#define PSEQ_PMU_INTERRUPT__ENERGY4CPU_LOW__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | ((uint32_t)(0) << 5)
#define PSEQ_PMU_INTERRUPT__ENERGY4CPU_LOW__RESET_VALUE             0x00000000U
/** @} */

/* macros for field energy4CPU_rising */
/**
 * @defgroup at_apb_pseq_regs_core_energy4CPU_rising_field energy4CPU_rising_field
 * @brief macros for field energy4CPU_rising
 * @details  0 = pmu_status_brownout level  1 = pmu_status_brownout negated level  2 = pmu_status_brownout rising edge  3 = pmu_status_brownout falling edge  4 = pmu_status_energy4CPU level  5 = pmu_status_energy4CPU negated level  6 = pmu_status_energy4CPU rising edge  7 = pmu_status_energy4CPU falling edge  8 = pmu_status_energy4TX level  9 = pmu_status_energy4TX negated level  10 = pmu_status_energy4TX rising edge  11 = pmu_status_energy4TX falling edge
 * @{
 */
#define PSEQ_PMU_INTERRUPT__ENERGY4CPU_RISING__SHIFT                          6
#define PSEQ_PMU_INTERRUPT__ENERGY4CPU_RISING__WIDTH                          1
#define PSEQ_PMU_INTERRUPT__ENERGY4CPU_RISING__MASK                 0x00000040U
#define PSEQ_PMU_INTERRUPT__ENERGY4CPU_RISING__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000040U) >> 6)
#define PSEQ_PMU_INTERRUPT__ENERGY4CPU_RISING__WRITE(src) \
                    (((uint32_t)(src)\
                    << 6) & 0x00000040U)
#define PSEQ_PMU_INTERRUPT__ENERGY4CPU_RISING__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000040U) | (((uint32_t)(src) <<\
                    6) & 0x00000040U)
#define PSEQ_PMU_INTERRUPT__ENERGY4CPU_RISING__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 6) & ~0x00000040U)))
#define PSEQ_PMU_INTERRUPT__ENERGY4CPU_RISING__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000040U) | ((uint32_t)(1) << 6)
#define PSEQ_PMU_INTERRUPT__ENERGY4CPU_RISING__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000040U) | ((uint32_t)(0) << 6)
#define PSEQ_PMU_INTERRUPT__ENERGY4CPU_RISING__RESET_VALUE          0x00000000U
/** @} */

/* macros for field energy4CPU_falling */
/**
 * @defgroup at_apb_pseq_regs_core_energy4CPU_falling_field energy4CPU_falling_field
 * @brief macros for field energy4CPU_falling
 * @details  0 = pmu_status_brownout level  1 = pmu_status_brownout negated level  2 = pmu_status_brownout rising edge  3 = pmu_status_brownout falling edge  4 = pmu_status_energy4CPU level  5 = pmu_status_energy4CPU negated level  6 = pmu_status_energy4CPU rising edge  7 = pmu_status_energy4CPU falling edge  8 = pmu_status_energy4TX level  9 = pmu_status_energy4TX negated level  10 = pmu_status_energy4TX rising edge  11 = pmu_status_energy4TX falling edge
 * @{
 */
#define PSEQ_PMU_INTERRUPT__ENERGY4CPU_FALLING__SHIFT                         7
#define PSEQ_PMU_INTERRUPT__ENERGY4CPU_FALLING__WIDTH                         1
#define PSEQ_PMU_INTERRUPT__ENERGY4CPU_FALLING__MASK                0x00000080U
#define PSEQ_PMU_INTERRUPT__ENERGY4CPU_FALLING__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000080U) >> 7)
#define PSEQ_PMU_INTERRUPT__ENERGY4CPU_FALLING__WRITE(src) \
                    (((uint32_t)(src)\
                    << 7) & 0x00000080U)
#define PSEQ_PMU_INTERRUPT__ENERGY4CPU_FALLING__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000080U) | (((uint32_t)(src) <<\
                    7) & 0x00000080U)
#define PSEQ_PMU_INTERRUPT__ENERGY4CPU_FALLING__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 7) & ~0x00000080U)))
#define PSEQ_PMU_INTERRUPT__ENERGY4CPU_FALLING__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000080U) | ((uint32_t)(1) << 7)
#define PSEQ_PMU_INTERRUPT__ENERGY4CPU_FALLING__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000080U) | ((uint32_t)(0) << 7)
#define PSEQ_PMU_INTERRUPT__ENERGY4CPU_FALLING__RESET_VALUE         0x00000000U
/** @} */

/* macros for field energy4TX_high */
/**
 * @defgroup at_apb_pseq_regs_core_energy4TX_high_field energy4TX_high_field
 * @brief macros for field energy4TX_high
 * @details  0 = pmu_status_brownout level  1 = pmu_status_brownout negated level  2 = pmu_status_brownout rising edge  3 = pmu_status_brownout falling edge  4 = pmu_status_energy4CPU level  5 = pmu_status_energy4CPU negated level  6 = pmu_status_energy4CPU rising edge  7 = pmu_status_energy4CPU falling edge  8 = pmu_status_energy4TX level  9 = pmu_status_energy4TX negated level  10 = pmu_status_energy4TX rising edge  11 = pmu_status_energy4TX falling edge
 * @{
 */
#define PSEQ_PMU_INTERRUPT__ENERGY4TX_HIGH__SHIFT                             8
#define PSEQ_PMU_INTERRUPT__ENERGY4TX_HIGH__WIDTH                             1
#define PSEQ_PMU_INTERRUPT__ENERGY4TX_HIGH__MASK                    0x00000100U
#define PSEQ_PMU_INTERRUPT__ENERGY4TX_HIGH__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000100U) >> 8)
#define PSEQ_PMU_INTERRUPT__ENERGY4TX_HIGH__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x00000100U)
#define PSEQ_PMU_INTERRUPT__ENERGY4TX_HIGH__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000100U) | (((uint32_t)(src) <<\
                    8) & 0x00000100U)
#define PSEQ_PMU_INTERRUPT__ENERGY4TX_HIGH__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x00000100U)))
#define PSEQ_PMU_INTERRUPT__ENERGY4TX_HIGH__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000100U) | ((uint32_t)(1) << 8)
#define PSEQ_PMU_INTERRUPT__ENERGY4TX_HIGH__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000100U) | ((uint32_t)(0) << 8)
#define PSEQ_PMU_INTERRUPT__ENERGY4TX_HIGH__RESET_VALUE             0x00000000U
/** @} */

/* macros for field energy4TX_low */
/**
 * @defgroup at_apb_pseq_regs_core_energy4TX_low_field energy4TX_low_field
 * @brief macros for field energy4TX_low
 * @details  0 = pmu_status_brownout level  1 = pmu_status_brownout negated level  2 = pmu_status_brownout rising edge  3 = pmu_status_brownout falling edge  4 = pmu_status_energy4CPU level  5 = pmu_status_energy4CPU negated level  6 = pmu_status_energy4CPU rising edge  7 = pmu_status_energy4CPU falling edge  8 = pmu_status_energy4TX level  9 = pmu_status_energy4TX negated level  10 = pmu_status_energy4TX rising edge  11 = pmu_status_energy4TX falling edge
 * @{
 */
#define PSEQ_PMU_INTERRUPT__ENERGY4TX_LOW__SHIFT                              9
#define PSEQ_PMU_INTERRUPT__ENERGY4TX_LOW__WIDTH                              1
#define PSEQ_PMU_INTERRUPT__ENERGY4TX_LOW__MASK                     0x00000200U
#define PSEQ_PMU_INTERRUPT__ENERGY4TX_LOW__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000200U) >> 9)
#define PSEQ_PMU_INTERRUPT__ENERGY4TX_LOW__WRITE(src) \
                    (((uint32_t)(src)\
                    << 9) & 0x00000200U)
#define PSEQ_PMU_INTERRUPT__ENERGY4TX_LOW__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000200U) | (((uint32_t)(src) <<\
                    9) & 0x00000200U)
#define PSEQ_PMU_INTERRUPT__ENERGY4TX_LOW__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 9) & ~0x00000200U)))
#define PSEQ_PMU_INTERRUPT__ENERGY4TX_LOW__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000200U) | ((uint32_t)(1) << 9)
#define PSEQ_PMU_INTERRUPT__ENERGY4TX_LOW__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000200U) | ((uint32_t)(0) << 9)
#define PSEQ_PMU_INTERRUPT__ENERGY4TX_LOW__RESET_VALUE              0x00000000U
/** @} */

/* macros for field energy4TX_rising */
/**
 * @defgroup at_apb_pseq_regs_core_energy4TX_rising_field energy4TX_rising_field
 * @brief macros for field energy4TX_rising
 * @details  0 = pmu_status_brownout level  1 = pmu_status_brownout negated level  2 = pmu_status_brownout rising edge  3 = pmu_status_brownout falling edge  4 = pmu_status_energy4CPU level  5 = pmu_status_energy4CPU negated level  6 = pmu_status_energy4CPU rising edge  7 = pmu_status_energy4CPU falling edge  8 = pmu_status_energy4TX level  9 = pmu_status_energy4TX negated level  10 = pmu_status_energy4TX rising edge  11 = pmu_status_energy4TX falling edge
 * @{
 */
#define PSEQ_PMU_INTERRUPT__ENERGY4TX_RISING__SHIFT                          10
#define PSEQ_PMU_INTERRUPT__ENERGY4TX_RISING__WIDTH                           1
#define PSEQ_PMU_INTERRUPT__ENERGY4TX_RISING__MASK                  0x00000400U
#define PSEQ_PMU_INTERRUPT__ENERGY4TX_RISING__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000400U) >> 10)
#define PSEQ_PMU_INTERRUPT__ENERGY4TX_RISING__WRITE(src) \
                    (((uint32_t)(src)\
                    << 10) & 0x00000400U)
#define PSEQ_PMU_INTERRUPT__ENERGY4TX_RISING__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000400U) | (((uint32_t)(src) <<\
                    10) & 0x00000400U)
#define PSEQ_PMU_INTERRUPT__ENERGY4TX_RISING__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 10) & ~0x00000400U)))
#define PSEQ_PMU_INTERRUPT__ENERGY4TX_RISING__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000400U) | ((uint32_t)(1) << 10)
#define PSEQ_PMU_INTERRUPT__ENERGY4TX_RISING__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000400U) | ((uint32_t)(0) << 10)
#define PSEQ_PMU_INTERRUPT__ENERGY4TX_RISING__RESET_VALUE           0x00000000U
/** @} */

/* macros for field energy4TX_falling */
/**
 * @defgroup at_apb_pseq_regs_core_energy4TX_falling_field energy4TX_falling_field
 * @brief macros for field energy4TX_falling
 * @details  0 = pmu_status_brownout level  1 = pmu_status_brownout negated level  2 = pmu_status_brownout rising edge  3 = pmu_status_brownout falling edge  4 = pmu_status_energy4CPU level  5 = pmu_status_energy4CPU negated level  6 = pmu_status_energy4CPU rising edge  7 = pmu_status_energy4CPU falling edge  8 = pmu_status_energy4TX level  9 = pmu_status_energy4TX negated level  10 = pmu_status_energy4TX rising edge  11 = pmu_status_energy4TX falling edge
 * @{
 */
#define PSEQ_PMU_INTERRUPT__ENERGY4TX_FALLING__SHIFT                         11
#define PSEQ_PMU_INTERRUPT__ENERGY4TX_FALLING__WIDTH                          1
#define PSEQ_PMU_INTERRUPT__ENERGY4TX_FALLING__MASK                 0x00000800U
#define PSEQ_PMU_INTERRUPT__ENERGY4TX_FALLING__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000800U) >> 11)
#define PSEQ_PMU_INTERRUPT__ENERGY4TX_FALLING__WRITE(src) \
                    (((uint32_t)(src)\
                    << 11) & 0x00000800U)
#define PSEQ_PMU_INTERRUPT__ENERGY4TX_FALLING__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000800U) | (((uint32_t)(src) <<\
                    11) & 0x00000800U)
#define PSEQ_PMU_INTERRUPT__ENERGY4TX_FALLING__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 11) & ~0x00000800U)))
#define PSEQ_PMU_INTERRUPT__ENERGY4TX_FALLING__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000800U) | ((uint32_t)(1) << 11)
#define PSEQ_PMU_INTERRUPT__ENERGY4TX_FALLING__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000800U) | ((uint32_t)(0) << 11)
#define PSEQ_PMU_INTERRUPT__ENERGY4TX_FALLING__RESET_VALUE          0x00000000U
/** @} */

/* macros for field clear_re_brownout */
/**
 * @defgroup at_apb_pseq_regs_core_clear_re_brownout_field clear_re_brownout_field
 * @brief macros for field clear_re_brownout
 * @details clear the falling edge capture blocks
 * @{
 */
#define PSEQ_PMU_INTERRUPT__CLEAR_RE_BROWNOUT__SHIFT                         12
#define PSEQ_PMU_INTERRUPT__CLEAR_RE_BROWNOUT__WIDTH                          1
#define PSEQ_PMU_INTERRUPT__CLEAR_RE_BROWNOUT__MASK                 0x00001000U
#define PSEQ_PMU_INTERRUPT__CLEAR_RE_BROWNOUT__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00001000U) >> 12)
#define PSEQ_PMU_INTERRUPT__CLEAR_RE_BROWNOUT__WRITE(src) \
                    (((uint32_t)(src)\
                    << 12) & 0x00001000U)
#define PSEQ_PMU_INTERRUPT__CLEAR_RE_BROWNOUT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00001000U) | (((uint32_t)(src) <<\
                    12) & 0x00001000U)
#define PSEQ_PMU_INTERRUPT__CLEAR_RE_BROWNOUT__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 12) & ~0x00001000U)))
#define PSEQ_PMU_INTERRUPT__CLEAR_RE_BROWNOUT__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00001000U) | ((uint32_t)(1) << 12)
#define PSEQ_PMU_INTERRUPT__CLEAR_RE_BROWNOUT__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00001000U) | ((uint32_t)(0) << 12)
#define PSEQ_PMU_INTERRUPT__CLEAR_RE_BROWNOUT__RESET_VALUE          0x00000000U
/** @} */

/* macros for field clear_re_energy4CPU */
/**
 * @defgroup at_apb_pseq_regs_core_clear_re_energy4CPU_field clear_re_energy4CPU_field
 * @brief macros for field clear_re_energy4CPU
 * @details clear the falling edge capture blocks
 * @{
 */
#define PSEQ_PMU_INTERRUPT__CLEAR_RE_ENERGY4CPU__SHIFT                       13
#define PSEQ_PMU_INTERRUPT__CLEAR_RE_ENERGY4CPU__WIDTH                        1
#define PSEQ_PMU_INTERRUPT__CLEAR_RE_ENERGY4CPU__MASK               0x00002000U
#define PSEQ_PMU_INTERRUPT__CLEAR_RE_ENERGY4CPU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00002000U) >> 13)
#define PSEQ_PMU_INTERRUPT__CLEAR_RE_ENERGY4CPU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 13) & 0x00002000U)
#define PSEQ_PMU_INTERRUPT__CLEAR_RE_ENERGY4CPU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00002000U) | (((uint32_t)(src) <<\
                    13) & 0x00002000U)
#define PSEQ_PMU_INTERRUPT__CLEAR_RE_ENERGY4CPU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 13) & ~0x00002000U)))
#define PSEQ_PMU_INTERRUPT__CLEAR_RE_ENERGY4CPU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00002000U) | ((uint32_t)(1) << 13)
#define PSEQ_PMU_INTERRUPT__CLEAR_RE_ENERGY4CPU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00002000U) | ((uint32_t)(0) << 13)
#define PSEQ_PMU_INTERRUPT__CLEAR_RE_ENERGY4CPU__RESET_VALUE        0x00000000U
/** @} */

/* macros for field clear_re_energy4TX */
/**
 * @defgroup at_apb_pseq_regs_core_clear_re_energy4TX_field clear_re_energy4TX_field
 * @brief macros for field clear_re_energy4TX
 * @details clear the falling edge capture blocks
 * @{
 */
#define PSEQ_PMU_INTERRUPT__CLEAR_RE_ENERGY4TX__SHIFT                        14
#define PSEQ_PMU_INTERRUPT__CLEAR_RE_ENERGY4TX__WIDTH                         1
#define PSEQ_PMU_INTERRUPT__CLEAR_RE_ENERGY4TX__MASK                0x00004000U
#define PSEQ_PMU_INTERRUPT__CLEAR_RE_ENERGY4TX__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00004000U) >> 14)
#define PSEQ_PMU_INTERRUPT__CLEAR_RE_ENERGY4TX__WRITE(src) \
                    (((uint32_t)(src)\
                    << 14) & 0x00004000U)
#define PSEQ_PMU_INTERRUPT__CLEAR_RE_ENERGY4TX__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00004000U) | (((uint32_t)(src) <<\
                    14) & 0x00004000U)
#define PSEQ_PMU_INTERRUPT__CLEAR_RE_ENERGY4TX__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 14) & ~0x00004000U)))
#define PSEQ_PMU_INTERRUPT__CLEAR_RE_ENERGY4TX__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00004000U) | ((uint32_t)(1) << 14)
#define PSEQ_PMU_INTERRUPT__CLEAR_RE_ENERGY4TX__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00004000U) | ((uint32_t)(0) << 14)
#define PSEQ_PMU_INTERRUPT__CLEAR_RE_ENERGY4TX__RESET_VALUE         0x00000000U
/** @} */

/* macros for field clear_fe_brownout */
/**
 * @defgroup at_apb_pseq_regs_core_clear_fe_brownout_field clear_fe_brownout_field
 * @brief macros for field clear_fe_brownout
 * @details clear the rising edge capture blocks
 * @{
 */
#define PSEQ_PMU_INTERRUPT__CLEAR_FE_BROWNOUT__SHIFT                         15
#define PSEQ_PMU_INTERRUPT__CLEAR_FE_BROWNOUT__WIDTH                          1
#define PSEQ_PMU_INTERRUPT__CLEAR_FE_BROWNOUT__MASK                 0x00008000U
#define PSEQ_PMU_INTERRUPT__CLEAR_FE_BROWNOUT__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00008000U) >> 15)
#define PSEQ_PMU_INTERRUPT__CLEAR_FE_BROWNOUT__WRITE(src) \
                    (((uint32_t)(src)\
                    << 15) & 0x00008000U)
#define PSEQ_PMU_INTERRUPT__CLEAR_FE_BROWNOUT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00008000U) | (((uint32_t)(src) <<\
                    15) & 0x00008000U)
#define PSEQ_PMU_INTERRUPT__CLEAR_FE_BROWNOUT__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 15) & ~0x00008000U)))
#define PSEQ_PMU_INTERRUPT__CLEAR_FE_BROWNOUT__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00008000U) | ((uint32_t)(1) << 15)
#define PSEQ_PMU_INTERRUPT__CLEAR_FE_BROWNOUT__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00008000U) | ((uint32_t)(0) << 15)
#define PSEQ_PMU_INTERRUPT__CLEAR_FE_BROWNOUT__RESET_VALUE          0x00000000U
/** @} */

/* macros for field clear_fe_energy4CPU */
/**
 * @defgroup at_apb_pseq_regs_core_clear_fe_energy4CPU_field clear_fe_energy4CPU_field
 * @brief macros for field clear_fe_energy4CPU
 * @details clear the rising edge capture blocks
 * @{
 */
#define PSEQ_PMU_INTERRUPT__CLEAR_FE_ENERGY4CPU__SHIFT                       16
#define PSEQ_PMU_INTERRUPT__CLEAR_FE_ENERGY4CPU__WIDTH                        1
#define PSEQ_PMU_INTERRUPT__CLEAR_FE_ENERGY4CPU__MASK               0x00010000U
#define PSEQ_PMU_INTERRUPT__CLEAR_FE_ENERGY4CPU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00010000U) >> 16)
#define PSEQ_PMU_INTERRUPT__CLEAR_FE_ENERGY4CPU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00010000U)
#define PSEQ_PMU_INTERRUPT__CLEAR_FE_ENERGY4CPU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00010000U) | (((uint32_t)(src) <<\
                    16) & 0x00010000U)
#define PSEQ_PMU_INTERRUPT__CLEAR_FE_ENERGY4CPU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00010000U)))
#define PSEQ_PMU_INTERRUPT__CLEAR_FE_ENERGY4CPU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00010000U) | ((uint32_t)(1) << 16)
#define PSEQ_PMU_INTERRUPT__CLEAR_FE_ENERGY4CPU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00010000U) | ((uint32_t)(0) << 16)
#define PSEQ_PMU_INTERRUPT__CLEAR_FE_ENERGY4CPU__RESET_VALUE        0x00000000U
/** @} */

/* macros for field clear_fe_energy4TX */
/**
 * @defgroup at_apb_pseq_regs_core_clear_fe_energy4TX_field clear_fe_energy4TX_field
 * @brief macros for field clear_fe_energy4TX
 * @details clear the rising edge capture blocks
 * @{
 */
#define PSEQ_PMU_INTERRUPT__CLEAR_FE_ENERGY4TX__SHIFT                        17
#define PSEQ_PMU_INTERRUPT__CLEAR_FE_ENERGY4TX__WIDTH                         1
#define PSEQ_PMU_INTERRUPT__CLEAR_FE_ENERGY4TX__MASK                0x00020000U
#define PSEQ_PMU_INTERRUPT__CLEAR_FE_ENERGY4TX__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00020000U) >> 17)
#define PSEQ_PMU_INTERRUPT__CLEAR_FE_ENERGY4TX__WRITE(src) \
                    (((uint32_t)(src)\
                    << 17) & 0x00020000U)
#define PSEQ_PMU_INTERRUPT__CLEAR_FE_ENERGY4TX__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | (((uint32_t)(src) <<\
                    17) & 0x00020000U)
#define PSEQ_PMU_INTERRUPT__CLEAR_FE_ENERGY4TX__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 17) & ~0x00020000U)))
#define PSEQ_PMU_INTERRUPT__CLEAR_FE_ENERGY4TX__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(1) << 17)
#define PSEQ_PMU_INTERRUPT__CLEAR_FE_ENERGY4TX__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(0) << 17)
#define PSEQ_PMU_INTERRUPT__CLEAR_FE_ENERGY4TX__RESET_VALUE         0x00000000U
/** @} */
#define PSEQ_PMU_INTERRUPT__TYPE                                       uint32_t
#define PSEQ_PMU_INTERRUPT__READ                                    0x0003ffffU
#define PSEQ_PMU_INTERRUPT__WRITE                                   0x0003ffffU
#define PSEQ_PMU_INTERRUPT__PRESERVED                               0x00000000U
#define PSEQ_PMU_INTERRUPT__RESET_VALUE                             0x00000000U

#endif /* __PSEQ_PMU_INTERRUPT_MACRO__ */

/** @} end of pmu_interrupt */

/* macros for BlueprintGlobalNameSpace::PSEQ_interrupt_status */
/**
 * @defgroup at_apb_pseq_regs_core_interrupt_status interrupt_status
 * @brief interrupt status definitions.
 * @{
 */
#ifndef __PSEQ_INTERRUPT_STATUS_MACRO__
#define __PSEQ_INTERRUPT_STATUS_MACRO__

/* macros for field returned_from_low_power_state */
/**
 * @defgroup at_apb_pseq_regs_core_returned_from_low_power_state_field returned_from_low_power_state_field
 * @brief macros for field returned_from_low_power_state
 * @details indicates system returned from low power state (as oppposed to first power on)
 * @{
 */
#define PSEQ_INTERRUPT_STATUS__RETURNED_FROM_LOW_POWER_STATE__SHIFT           0
#define PSEQ_INTERRUPT_STATUS__RETURNED_FROM_LOW_POWER_STATE__WIDTH           1
#define PSEQ_INTERRUPT_STATUS__RETURNED_FROM_LOW_POWER_STATE__MASK  0x00000001U
#define PSEQ_INTERRUPT_STATUS__RETURNED_FROM_LOW_POWER_STATE__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define PSEQ_INTERRUPT_STATUS__RETURNED_FROM_LOW_POWER_STATE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define PSEQ_INTERRUPT_STATUS__RETURNED_FROM_LOW_POWER_STATE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define PSEQ_INTERRUPT_STATUS__RETURNED_FROM_LOW_POWER_STATE__RESET_VALUE \
                    0x00000000U
/** @} */
#define PSEQ_INTERRUPT_STATUS__TYPE                                    uint32_t
#define PSEQ_INTERRUPT_STATUS__READ                                 0x00000001U
#define PSEQ_INTERRUPT_STATUS__PRESERVED                            0x00000000U
#define PSEQ_INTERRUPT_STATUS__RESET_VALUE                          0x00000000U

#endif /* __PSEQ_INTERRUPT_STATUS_MACRO__ */

/** @} end of interrupt_status */

/* macros for BlueprintGlobalNameSpace::PSEQ_interrupt_mask */
/**
 * @defgroup at_apb_pseq_regs_core_interrupt_mask interrupt_mask
 * @brief interrupt mask definitions.
 * @{
 */
#ifndef __PSEQ_INTERRUPT_MASK_MACRO__
#define __PSEQ_INTERRUPT_MASK_MACRO__

/* macros for field intrpt_mask */
/**
 * @defgroup at_apb_pseq_regs_core_intrpt_mask_field intrpt_mask_field
 * @brief macros for field intrpt_mask
 * @details if nth bit set, the nth interrupt source is allowed to propogate to core's interrupt
 * @{
 */
#define PSEQ_INTERRUPT_MASK__INTRPT_MASK__SHIFT                               0
#define PSEQ_INTERRUPT_MASK__INTRPT_MASK__WIDTH                               1
#define PSEQ_INTERRUPT_MASK__INTRPT_MASK__MASK                      0x00000001U
#define PSEQ_INTERRUPT_MASK__INTRPT_MASK__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define PSEQ_INTERRUPT_MASK__INTRPT_MASK__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define PSEQ_INTERRUPT_MASK__INTRPT_MASK__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define PSEQ_INTERRUPT_MASK__INTRPT_MASK__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define PSEQ_INTERRUPT_MASK__INTRPT_MASK__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define PSEQ_INTERRUPT_MASK__INTRPT_MASK__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define PSEQ_INTERRUPT_MASK__INTRPT_MASK__RESET_VALUE               0x00000001U
/** @} */
#define PSEQ_INTERRUPT_MASK__TYPE                                      uint32_t
#define PSEQ_INTERRUPT_MASK__READ                                   0x00000001U
#define PSEQ_INTERRUPT_MASK__WRITE                                  0x00000001U
#define PSEQ_INTERRUPT_MASK__PRESERVED                              0x00000000U
#define PSEQ_INTERRUPT_MASK__RESET_VALUE                            0x00000001U

#endif /* __PSEQ_INTERRUPT_MASK_MACRO__ */

/** @} end of interrupt_mask */

/* macros for BlueprintGlobalNameSpace::PSEQ_reset_interrupt */
/**
 * @defgroup at_apb_pseq_regs_core_reset_interrupt reset_interrupt
 * @brief interrupt resets definitions.
 * @{
 */
#ifndef __PSEQ_RESET_INTERRUPT_MACRO__
#define __PSEQ_RESET_INTERRUPT_MACRO__

/* macros for field intrpt_reset */
/**
 * @defgroup at_apb_pseq_regs_core_intrpt_reset_field intrpt_reset_field
 * @brief macros for field intrpt_reset
 * @details not self clearing
 * @{
 */
#define PSEQ_RESET_INTERRUPT__INTRPT_RESET__SHIFT                             0
#define PSEQ_RESET_INTERRUPT__INTRPT_RESET__WIDTH                             1
#define PSEQ_RESET_INTERRUPT__INTRPT_RESET__MASK                    0x00000001U
#define PSEQ_RESET_INTERRUPT__INTRPT_RESET__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define PSEQ_RESET_INTERRUPT__INTRPT_RESET__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define PSEQ_RESET_INTERRUPT__INTRPT_RESET__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define PSEQ_RESET_INTERRUPT__INTRPT_RESET__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define PSEQ_RESET_INTERRUPT__INTRPT_RESET__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define PSEQ_RESET_INTERRUPT__INTRPT_RESET__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define PSEQ_RESET_INTERRUPT__INTRPT_RESET__RESET_VALUE             0x00000000U
/** @} */
#define PSEQ_RESET_INTERRUPT__TYPE                                     uint32_t
#define PSEQ_RESET_INTERRUPT__READ                                  0x00000001U
#define PSEQ_RESET_INTERRUPT__WRITE                                 0x00000001U
#define PSEQ_RESET_INTERRUPT__PRESERVED                             0x00000000U
#define PSEQ_RESET_INTERRUPT__RESET_VALUE                           0x00000000U

#endif /* __PSEQ_RESET_INTERRUPT_MACRO__ */

/** @} end of reset_interrupt */

/* macros for BlueprintGlobalNameSpace::PSEQ_core_id */
/**
 * @defgroup at_apb_pseq_regs_core_core_id core_id
 * @brief core's id definitions.
 * @{
 */
#ifndef __PSEQ_CORE_ID_MACRO__
#define __PSEQ_CORE_ID_MACRO__

/* macros for field id */
/**
 * @defgroup at_apb_pseq_regs_core_id_field id_field
 * @brief macros for field id
 * @details PSEQ in ASCII
 * @{
 */
#define PSEQ_CORE_ID__ID__SHIFT                                               0
#define PSEQ_CORE_ID__ID__WIDTH                                              32
#define PSEQ_CORE_ID__ID__MASK                                      0xffffffffU
#define PSEQ_CORE_ID__ID__READ(src)             ((uint32_t)(src) & 0xffffffffU)
#define PSEQ_CORE_ID__ID__RESET_VALUE                               0x50534551U
/** @} */
#define PSEQ_CORE_ID__TYPE                                             uint32_t
#define PSEQ_CORE_ID__READ                                          0xffffffffU
#define PSEQ_CORE_ID__PRESERVED                                     0x00000000U
#define PSEQ_CORE_ID__RESET_VALUE                                   0x50534551U

#endif /* __PSEQ_CORE_ID_MACRO__ */

/** @} end of core_id */

/** @} end of AT_APB_PSEQ_REGS_CORE */
#endif /* __REG_AT_APB_PSEQ_REGS_CORE_H__ */
