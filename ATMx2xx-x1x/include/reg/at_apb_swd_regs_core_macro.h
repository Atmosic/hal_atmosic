/*                                                                           */
/* File:       at_apb_swd_regs_core_macro.h                                  */
/*                                                                           */
/* Arguments:  /cad/tools/cadence/blueprint_3.7.5/Linux-64bit/blueprint -eval*/
/*             $DEFINE_PROPERTY=1; -ansic at_apb_swd_regs_core.rdl           */
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


#ifndef __REG_AT_APB_SWD_REGS_CORE_H__
#define __REG_AT_APB_SWD_REGS_CORE_H__

/**
 *****************************************************************************
 * @defgroup AT_APB_SWD_REGS_CORE at_apb_swd_regs_core
 * @ingroup AT_REG
 * @brief at_apb_swd_regs_core definitions.
 * @{
 *****************************************************************************
 */

/* macros for BlueprintGlobalNameSpace::SWD_dap_addr_ctrl */
/**
 * @defgroup at_apb_swd_regs_core_dap_addr_ctrl dap_addr_ctrl
 * @brief Contains register fields associated with dap_addr_ctrl. definitions.
 * @{
 */
#ifndef __SWD_DAP_ADDR_CTRL_MACRO__
#define __SWD_DAP_ADDR_CTRL_MACRO__

/* macros for field dap_addr */
/**
 * @defgroup at_apb_swd_regs_core_dap_addr_field dap_addr_field
 * @brief macros for field dap_addr
 * @details DAP address
 * @{
 */
#define SWD_DAP_ADDR_CTRL__DAP_ADDR__SHIFT                                    0
#define SWD_DAP_ADDR_CTRL__DAP_ADDR__WIDTH                                    2
#define SWD_DAP_ADDR_CTRL__DAP_ADDR__MASK                           0x00000003U
#define SWD_DAP_ADDR_CTRL__DAP_ADDR__READ(src)  ((uint32_t)(src) & 0x00000003U)
#define SWD_DAP_ADDR_CTRL__DAP_ADDR__WRITE(src) ((uint32_t)(src) & 0x00000003U)
#define SWD_DAP_ADDR_CTRL__DAP_ADDR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000003U) | ((uint32_t)(src) &\
                    0x00000003U)
#define SWD_DAP_ADDR_CTRL__DAP_ADDR__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000003U)))
#define SWD_DAP_ADDR_CTRL__DAP_ADDR__RESET_VALUE                    0x00000000U
/** @} */
#define SWD_DAP_ADDR_CTRL__TYPE                                        uint32_t
#define SWD_DAP_ADDR_CTRL__READ                                     0x00000003U
#define SWD_DAP_ADDR_CTRL__WRITE                                    0x00000003U
#define SWD_DAP_ADDR_CTRL__PRESERVED                                0x00000000U
#define SWD_DAP_ADDR_CTRL__RESET_VALUE                              0x00000000U

#endif /* __SWD_DAP_ADDR_CTRL_MACRO__ */

/** @} end of dap_addr_ctrl */

/* macros for BlueprintGlobalNameSpace::SWD_dap_wdata_ctrl */
/**
 * @defgroup at_apb_swd_regs_core_dap_wdata_ctrl dap_wdata_ctrl
 * @brief Contains register fields associated with dap_wdata_ctrl. definitions.
 * @{
 */
#ifndef __SWD_DAP_WDATA_CTRL_MACRO__
#define __SWD_DAP_WDATA_CTRL_MACRO__

/* macros for field dap_wdata */
/**
 * @defgroup at_apb_swd_regs_core_dap_wdata_field dap_wdata_field
 * @brief macros for field dap_wdata
 * @details DAP write data
 * @{
 */
#define SWD_DAP_WDATA_CTRL__DAP_WDATA__SHIFT                                  0
#define SWD_DAP_WDATA_CTRL__DAP_WDATA__WIDTH                                 32
#define SWD_DAP_WDATA_CTRL__DAP_WDATA__MASK                         0xffffffffU
#define SWD_DAP_WDATA_CTRL__DAP_WDATA__READ(src) \
                    ((uint32_t)(src)\
                    & 0xffffffffU)
#define SWD_DAP_WDATA_CTRL__DAP_WDATA__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0xffffffffU)
#define SWD_DAP_WDATA_CTRL__DAP_WDATA__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffffffffU) | ((uint32_t)(src) &\
                    0xffffffffU)
#define SWD_DAP_WDATA_CTRL__DAP_WDATA__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0xffffffffU)))
#define SWD_DAP_WDATA_CTRL__DAP_WDATA__RESET_VALUE                  0x00000000U
/** @} */
#define SWD_DAP_WDATA_CTRL__TYPE                                       uint32_t
#define SWD_DAP_WDATA_CTRL__READ                                    0xffffffffU
#define SWD_DAP_WDATA_CTRL__WRITE                                   0xffffffffU
#define SWD_DAP_WDATA_CTRL__PRESERVED                               0x00000000U
#define SWD_DAP_WDATA_CTRL__RESET_VALUE                             0x00000000U

#endif /* __SWD_DAP_WDATA_CTRL_MACRO__ */

/** @} end of dap_wdata_ctrl */

/* macros for BlueprintGlobalNameSpace::SWD_swd_clk_div_ctrl */
/**
 * @defgroup at_apb_swd_regs_core_swd_clk_div_ctrl swd_clk_div_ctrl
 * @brief Contains register fields associated with swd_clk_div_ctrl. definitions.
 * @{
 */
#ifndef __SWD_SWD_CLK_DIV_CTRL_MACRO__
#define __SWD_SWD_CLK_DIV_CTRL_MACRO__

/* macros for field swd_clk_div */
/**
 * @defgroup at_apb_swd_regs_core_swd_clk_div_field swd_clk_div_field
 * @brief macros for field swd_clk_div
 * @details swd_clk clock divider
 * @{
 */
#define SWD_SWD_CLK_DIV_CTRL__SWD_CLK_DIV__SHIFT                              0
#define SWD_SWD_CLK_DIV_CTRL__SWD_CLK_DIV__WIDTH                              2
#define SWD_SWD_CLK_DIV_CTRL__SWD_CLK_DIV__MASK                     0x00000003U
#define SWD_SWD_CLK_DIV_CTRL__SWD_CLK_DIV__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000003U)
#define SWD_SWD_CLK_DIV_CTRL__SWD_CLK_DIV__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000003U)
#define SWD_SWD_CLK_DIV_CTRL__SWD_CLK_DIV__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000003U) | ((uint32_t)(src) &\
                    0x00000003U)
#define SWD_SWD_CLK_DIV_CTRL__SWD_CLK_DIV__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000003U)))
#define SWD_SWD_CLK_DIV_CTRL__SWD_CLK_DIV__RESET_VALUE              0x00000003U
/** @} */
#define SWD_SWD_CLK_DIV_CTRL__TYPE                                     uint32_t
#define SWD_SWD_CLK_DIV_CTRL__READ                                  0x00000003U
#define SWD_SWD_CLK_DIV_CTRL__WRITE                                 0x00000003U
#define SWD_SWD_CLK_DIV_CTRL__PRESERVED                             0x00000000U
#define SWD_SWD_CLK_DIV_CTRL__RESET_VALUE                           0x00000003U

#endif /* __SWD_SWD_CLK_DIV_CTRL_MACRO__ */

/** @} end of swd_clk_div_ctrl */

/* macros for BlueprintGlobalNameSpace::SWD_dap_bridge_status */
/**
 * @defgroup at_apb_swd_regs_core_dap_bridge_status dap_bridge_status
 * @brief Contains register fields associated with dap_bridge_status. definitions.
 * @{
 */
#ifndef __SWD_DAP_BRIDGE_STATUS_MACRO__
#define __SWD_DAP_BRIDGE_STATUS_MACRO__

/* macros for field busy */
/**
 * @defgroup at_apb_swd_regs_core_busy_field busy_field
 * @brief macros for field busy
 * @details bridge is busy
 * @{
 */
#define SWD_DAP_BRIDGE_STATUS__BUSY__SHIFT                                    0
#define SWD_DAP_BRIDGE_STATUS__BUSY__WIDTH                                    1
#define SWD_DAP_BRIDGE_STATUS__BUSY__MASK                           0x00000001U
#define SWD_DAP_BRIDGE_STATUS__BUSY__READ(src)  ((uint32_t)(src) & 0x00000001U)
#define SWD_DAP_BRIDGE_STATUS__BUSY__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define SWD_DAP_BRIDGE_STATUS__BUSY__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define SWD_DAP_BRIDGE_STATUS__BUSY__RESET_VALUE                    0x00000000U
/** @} */
#define SWD_DAP_BRIDGE_STATUS__TYPE                                    uint32_t
#define SWD_DAP_BRIDGE_STATUS__READ                                 0x00000001U
#define SWD_DAP_BRIDGE_STATUS__PRESERVED                            0x00000000U
#define SWD_DAP_BRIDGE_STATUS__RESET_VALUE                          0x00000000U

#endif /* __SWD_DAP_BRIDGE_STATUS_MACRO__ */

/** @} end of dap_bridge_status */

/* macros for BlueprintGlobalNameSpace::SWD_dap_resp_status */
/**
 * @defgroup at_apb_swd_regs_core_dap_resp_status dap_resp_status
 * @brief Contains register fields associated with dap_resp_status. definitions.
 * @{
 */
#ifndef __SWD_DAP_RESP_STATUS_MACRO__
#define __SWD_DAP_RESP_STATUS_MACRO__

/* macros for field dap_resp */
/**
 * @defgroup at_apb_swd_regs_core_dap_resp_field dap_resp_field
 * @brief macros for field dap_resp
 * @details DAP response
 * @{
 */
#define SWD_DAP_RESP_STATUS__DAP_RESP__SHIFT                                  0
#define SWD_DAP_RESP_STATUS__DAP_RESP__WIDTH                                  3
#define SWD_DAP_RESP_STATUS__DAP_RESP__MASK                         0x00000007U
#define SWD_DAP_RESP_STATUS__DAP_RESP__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000007U)
#define SWD_DAP_RESP_STATUS__DAP_RESP__RESET_VALUE                  0x00000000U
/** @} */

/* macros for field par_err */
/**
 * @defgroup at_apb_swd_regs_core_par_err_field par_err_field
 * @brief macros for field par_err
 * @details 1 = RDATA has parity error  0 = otherwise
 * @{
 */
#define SWD_DAP_RESP_STATUS__PAR_ERR__SHIFT                                   3
#define SWD_DAP_RESP_STATUS__PAR_ERR__WIDTH                                   1
#define SWD_DAP_RESP_STATUS__PAR_ERR__MASK                          0x00000008U
#define SWD_DAP_RESP_STATUS__PAR_ERR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000008U) >> 3)
#define SWD_DAP_RESP_STATUS__PAR_ERR__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((uint32_t)(1) << 3)
#define SWD_DAP_RESP_STATUS__PAR_ERR__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((uint32_t)(0) << 3)
#define SWD_DAP_RESP_STATUS__PAR_ERR__RESET_VALUE                   0x00000000U
/** @} */
#define SWD_DAP_RESP_STATUS__TYPE                                      uint32_t
#define SWD_DAP_RESP_STATUS__READ                                   0x0000000fU
#define SWD_DAP_RESP_STATUS__PRESERVED                              0x00000000U
#define SWD_DAP_RESP_STATUS__RESET_VALUE                            0x00000000U

#endif /* __SWD_DAP_RESP_STATUS_MACRO__ */

/** @} end of dap_resp_status */

/* macros for BlueprintGlobalNameSpace::SWD_RW_ctrl */
/**
 * @defgroup at_apb_swd_regs_core_RW_ctrl RW_ctrl
 * @brief Contains register fields associated with RW_ctrl. definitions.
 * @{
 */
#ifndef __SWD_RW_CTRL_MACRO__
#define __SWD_RW_CTRL_MACRO__

/* macros for field RnW */
/**
 * @defgroup at_apb_swd_regs_core_RnW_field RnW_field
 * @brief macros for field RnW
 * @details 1 for Read, 0 for Write
 * @{
 */
#define SWD_RW_CTRL__RNW__SHIFT                                               0
#define SWD_RW_CTRL__RNW__WIDTH                                               1
#define SWD_RW_CTRL__RNW__MASK                                      0x00000001U
#define SWD_RW_CTRL__RNW__READ(src)             ((uint32_t)(src) & 0x00000001U)
#define SWD_RW_CTRL__RNW__WRITE(src)            ((uint32_t)(src) & 0x00000001U)
#define SWD_RW_CTRL__RNW__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define SWD_RW_CTRL__RNW__VERIFY(src)     (!(((uint32_t)(src) & ~0x00000001U)))
#define SWD_RW_CTRL__RNW__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define SWD_RW_CTRL__RNW__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define SWD_RW_CTRL__RNW__RESET_VALUE                               0x00000000U
/** @} */
#define SWD_RW_CTRL__TYPE                                              uint32_t
#define SWD_RW_CTRL__READ                                           0x00000001U
#define SWD_RW_CTRL__WRITE                                          0x00000001U
#define SWD_RW_CTRL__PRESERVED                                      0x00000000U
#define SWD_RW_CTRL__RESET_VALUE                                    0x00000000U

#endif /* __SWD_RW_CTRL_MACRO__ */

/** @} end of RW_ctrl */

/* macros for BlueprintGlobalNameSpace::SWD_apndp_ctrl */
/**
 * @defgroup at_apb_swd_regs_core_apndp_ctrl apndp_ctrl
 * @brief Contains register fields associated with apndp_ctrl. definitions.
 * @{
 */
#ifndef __SWD_APNDP_CTRL_MACRO__
#define __SWD_APNDP_CTRL_MACRO__

/* macros for field APnDP */
/**
 * @defgroup at_apb_swd_regs_core_APnDP_field APnDP_field
 * @brief macros for field APnDP
 * @details 0 for DPACC, 1 for APACC
 * @{
 */
#define SWD_APNDP_CTRL__APNDP__SHIFT                                          0
#define SWD_APNDP_CTRL__APNDP__WIDTH                                          1
#define SWD_APNDP_CTRL__APNDP__MASK                                 0x00000001U
#define SWD_APNDP_CTRL__APNDP__READ(src)        ((uint32_t)(src) & 0x00000001U)
#define SWD_APNDP_CTRL__APNDP__WRITE(src)       ((uint32_t)(src) & 0x00000001U)
#define SWD_APNDP_CTRL__APNDP__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define SWD_APNDP_CTRL__APNDP__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define SWD_APNDP_CTRL__APNDP__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define SWD_APNDP_CTRL__APNDP__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define SWD_APNDP_CTRL__APNDP__RESET_VALUE                          0x00000000U
/** @} */
#define SWD_APNDP_CTRL__TYPE                                           uint32_t
#define SWD_APNDP_CTRL__READ                                        0x00000001U
#define SWD_APNDP_CTRL__WRITE                                       0x00000001U
#define SWD_APNDP_CTRL__PRESERVED                                   0x00000000U
#define SWD_APNDP_CTRL__RESET_VALUE                                 0x00000000U

#endif /* __SWD_APNDP_CTRL_MACRO__ */

/** @} end of apndp_ctrl */

/* macros for BlueprintGlobalNameSpace::SWD_trigger_ctrl */
/**
 * @defgroup at_apb_swd_regs_core_trigger_ctrl trigger_ctrl
 * @brief Contains register fields associated with trigger_ctrl. definitions.
 * @{
 */
#ifndef __SWD_TRIGGER_CTRL_MACRO__
#define __SWD_TRIGGER_CTRL_MACRO__

/* macros for field go_reset */
/**
 * @defgroup at_apb_swd_regs_core_go_reset_field go_reset_field
 * @brief macros for field go_reset
 * @details 1 to start dapacc, not self-resetting
 * @{
 */
#define SWD_TRIGGER_CTRL__GO_RESET__SHIFT                                     0
#define SWD_TRIGGER_CTRL__GO_RESET__WIDTH                                     1
#define SWD_TRIGGER_CTRL__GO_RESET__MASK                            0x00000001U
#define SWD_TRIGGER_CTRL__GO_RESET__READ(src)   ((uint32_t)(src) & 0x00000001U)
#define SWD_TRIGGER_CTRL__GO_RESET__WRITE(src)  ((uint32_t)(src) & 0x00000001U)
#define SWD_TRIGGER_CTRL__GO_RESET__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define SWD_TRIGGER_CTRL__GO_RESET__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define SWD_TRIGGER_CTRL__GO_RESET__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define SWD_TRIGGER_CTRL__GO_RESET__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define SWD_TRIGGER_CTRL__GO_RESET__RESET_VALUE                     0x00000000U
/** @} */

/* macros for field go */
/**
 * @defgroup at_apb_swd_regs_core_go_field go_field
 * @brief macros for field go
 * @details 1 to start dapacc, not self-resetting
 * @{
 */
#define SWD_TRIGGER_CTRL__GO__SHIFT                                           1
#define SWD_TRIGGER_CTRL__GO__WIDTH                                           1
#define SWD_TRIGGER_CTRL__GO__MASK                                  0x00000002U
#define SWD_TRIGGER_CTRL__GO__READ(src)  (((uint32_t)(src) & 0x00000002U) >> 1)
#define SWD_TRIGGER_CTRL__GO__WRITE(src) (((uint32_t)(src) << 1) & 0x00000002U)
#define SWD_TRIGGER_CTRL__GO__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define SWD_TRIGGER_CTRL__GO__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define SWD_TRIGGER_CTRL__GO__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define SWD_TRIGGER_CTRL__GO__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define SWD_TRIGGER_CTRL__GO__RESET_VALUE                           0x00000000U
/** @} */
#define SWD_TRIGGER_CTRL__TYPE                                         uint32_t
#define SWD_TRIGGER_CTRL__READ                                      0x00000003U
#define SWD_TRIGGER_CTRL__WRITE                                     0x00000003U
#define SWD_TRIGGER_CTRL__PRESERVED                                 0x00000000U
#define SWD_TRIGGER_CTRL__RESET_VALUE                               0x00000000U

#endif /* __SWD_TRIGGER_CTRL_MACRO__ */

/** @} end of trigger_ctrl */

/* macros for BlueprintGlobalNameSpace::SWD_dap_rdata */
/**
 * @defgroup at_apb_swd_regs_core_dap_rdata dap_rdata
 * @brief Contains register fields associated with dap_rdata. definitions.
 * @{
 */
#ifndef __SWD_DAP_RDATA_MACRO__
#define __SWD_DAP_RDATA_MACRO__

/* macros for field dap_rdata */
/**
 * @defgroup at_apb_swd_regs_core_dap_rdata_field dap_rdata_field
 * @brief macros for field dap_rdata
 * @details DAP read data
 * @{
 */
#define SWD_DAP_RDATA__DAP_RDATA__SHIFT                                       0
#define SWD_DAP_RDATA__DAP_RDATA__WIDTH                                      32
#define SWD_DAP_RDATA__DAP_RDATA__MASK                              0xffffffffU
#define SWD_DAP_RDATA__DAP_RDATA__READ(src)     ((uint32_t)(src) & 0xffffffffU)
#define SWD_DAP_RDATA__DAP_RDATA__RESET_VALUE                       0x00000000U
/** @} */
#define SWD_DAP_RDATA__TYPE                                            uint32_t
#define SWD_DAP_RDATA__READ                                         0xffffffffU
#define SWD_DAP_RDATA__PRESERVED                                    0x00000000U
#define SWD_DAP_RDATA__RESET_VALUE                                  0x00000000U

#endif /* __SWD_DAP_RDATA_MACRO__ */

/** @} end of dap_rdata */

/* macros for BlueprintGlobalNameSpace::SWD_dtop_bypass_ctrl */
/**
 * @defgroup at_apb_swd_regs_core_dtop_bypass_ctrl dtop_bypass_ctrl
 * @brief Contains register fields associated with dtop_bypass_ctrl. definitions.
 * @{
 */
#ifndef __SWD_DTOP_BYPASS_CTRL_MACRO__
#define __SWD_DTOP_BYPASS_CTRL_MACRO__

/* macros for field hw_own */
/**
 * @defgroup at_apb_swd_regs_core_hw_own_field hw_own_field
 * @brief macros for field hw_own
 * @details 1 to indicate hw own and sw control is disabled
 * @{
 */
#define SWD_DTOP_BYPASS_CTRL__HW_OWN__SHIFT                                   0
#define SWD_DTOP_BYPASS_CTRL__HW_OWN__WIDTH                                   1
#define SWD_DTOP_BYPASS_CTRL__HW_OWN__MASK                          0x00000001U
#define SWD_DTOP_BYPASS_CTRL__HW_OWN__READ(src) ((uint32_t)(src) & 0x00000001U)
#define SWD_DTOP_BYPASS_CTRL__HW_OWN__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SWD_DTOP_BYPASS_CTRL__HW_OWN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define SWD_DTOP_BYPASS_CTRL__HW_OWN__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define SWD_DTOP_BYPASS_CTRL__HW_OWN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define SWD_DTOP_BYPASS_CTRL__HW_OWN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define SWD_DTOP_BYPASS_CTRL__HW_OWN__RESET_VALUE                   0x00000000U
/** @} */

/* macros for field byp_rd */
/**
 * @defgroup at_apb_swd_regs_core_byp_rd_field byp_rd_field
 * @brief macros for field byp_rd
 * @details 1 to bypass read modify write
 * @{
 */
#define SWD_DTOP_BYPASS_CTRL__BYP_RD__SHIFT                                   1
#define SWD_DTOP_BYPASS_CTRL__BYP_RD__WIDTH                                   1
#define SWD_DTOP_BYPASS_CTRL__BYP_RD__MASK                          0x00000002U
#define SWD_DTOP_BYPASS_CTRL__BYP_RD__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define SWD_DTOP_BYPASS_CTRL__BYP_RD__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define SWD_DTOP_BYPASS_CTRL__BYP_RD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define SWD_DTOP_BYPASS_CTRL__BYP_RD__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define SWD_DTOP_BYPASS_CTRL__BYP_RD__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define SWD_DTOP_BYPASS_CTRL__BYP_RD__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define SWD_DTOP_BYPASS_CTRL__BYP_RD__RESET_VALUE                   0x00000000U
/** @} */
#define SWD_DTOP_BYPASS_CTRL__TYPE                                     uint32_t
#define SWD_DTOP_BYPASS_CTRL__READ                                  0x00000003U
#define SWD_DTOP_BYPASS_CTRL__WRITE                                 0x00000003U
#define SWD_DTOP_BYPASS_CTRL__PRESERVED                             0x00000000U
#define SWD_DTOP_BYPASS_CTRL__RESET_VALUE                           0x00000000U

#endif /* __SWD_DTOP_BYPASS_CTRL_MACRO__ */

/** @} end of dtop_bypass_ctrl */

/* macros for BlueprintGlobalNameSpace::SWD_dtop_bypass_stat */
/**
 * @defgroup at_apb_swd_regs_core_dtop_bypass_stat dtop_bypass_stat
 * @brief Contains register fields associated with dtop_bypass_stat. definitions.
 * @{
 */
#ifndef __SWD_DTOP_BYPASS_STAT_MACRO__
#define __SWD_DTOP_BYPASS_STAT_MACRO__

/* macros for field mode */
/**
 * @defgroup at_apb_swd_regs_core_mode_field mode_field
 * @brief macros for field mode
 * @details 1 if fpga is in dtop_bypass mode (built with FPGA_DTOP_BYP defined)
 * @{
 */
#define SWD_DTOP_BYPASS_STAT__MODE__SHIFT                                     0
#define SWD_DTOP_BYPASS_STAT__MODE__WIDTH                                     1
#define SWD_DTOP_BYPASS_STAT__MODE__MASK                            0x00000001U
#define SWD_DTOP_BYPASS_STAT__MODE__READ(src)   ((uint32_t)(src) & 0x00000001U)
#define SWD_DTOP_BYPASS_STAT__MODE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define SWD_DTOP_BYPASS_STAT__MODE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define SWD_DTOP_BYPASS_STAT__MODE__RESET_VALUE                     0x00000000U
/** @} */
#define SWD_DTOP_BYPASS_STAT__TYPE                                     uint32_t
#define SWD_DTOP_BYPASS_STAT__READ                                  0x00000001U
#define SWD_DTOP_BYPASS_STAT__PRESERVED                             0x00000000U
#define SWD_DTOP_BYPASS_STAT__RESET_VALUE                           0x00000000U

#endif /* __SWD_DTOP_BYPASS_STAT_MACRO__ */

/** @} end of dtop_bypass_stat */

/* macros for BlueprintGlobalNameSpace::SWD_dtop_bypass_gpo */
/**
 * @defgroup at_apb_swd_regs_core_dtop_bypass_gpo dtop_bypass_gpo
 * @brief Contains register fields associated with dtop_bypass_gpo. definitions.
 * @{
 */
#ifndef __SWD_DTOP_BYPASS_GPO_MACRO__
#define __SWD_DTOP_BYPASS_GPO_MACRO__

/* macros for field dtop_bypass_frst */
/**
 * @defgroup at_apb_swd_regs_core_dtop_bypass_frst_field dtop_bypass_frst_field
 * @brief macros for field dtop_bypass_frst
 * @details 1 force reset the dtop_bypass chip.
 * @{
 */
#define SWD_DTOP_BYPASS_GPO__DTOP_BYPASS_FRST__SHIFT                          0
#define SWD_DTOP_BYPASS_GPO__DTOP_BYPASS_FRST__WIDTH                          1
#define SWD_DTOP_BYPASS_GPO__DTOP_BYPASS_FRST__MASK                 0x00000001U
#define SWD_DTOP_BYPASS_GPO__DTOP_BYPASS_FRST__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SWD_DTOP_BYPASS_GPO__DTOP_BYPASS_FRST__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SWD_DTOP_BYPASS_GPO__DTOP_BYPASS_FRST__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define SWD_DTOP_BYPASS_GPO__DTOP_BYPASS_FRST__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define SWD_DTOP_BYPASS_GPO__DTOP_BYPASS_FRST__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define SWD_DTOP_BYPASS_GPO__DTOP_BYPASS_FRST__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define SWD_DTOP_BYPASS_GPO__DTOP_BYPASS_FRST__RESET_VALUE          0x00000000U
/** @} */
#define SWD_DTOP_BYPASS_GPO__TYPE                                      uint32_t
#define SWD_DTOP_BYPASS_GPO__READ                                   0x00000001U
#define SWD_DTOP_BYPASS_GPO__WRITE                                  0x00000001U
#define SWD_DTOP_BYPASS_GPO__PRESERVED                              0x00000000U
#define SWD_DTOP_BYPASS_GPO__RESET_VALUE                            0x00000000U

#endif /* __SWD_DTOP_BYPASS_GPO_MACRO__ */

/** @} end of dtop_bypass_gpo */

/* macros for BlueprintGlobalNameSpace::SWD_core_id */
/**
 * @defgroup at_apb_swd_regs_core_core_id core_id
 * @brief Contains register fields associated with core_id. definitions.
 * @{
 */
#ifndef __SWD_CORE_ID_MACRO__
#define __SWD_CORE_ID_MACRO__

/* macros for field id */
/**
 * @defgroup at_apb_swd_regs_core_id_field id_field
 * @brief macros for field id
 * @details 'SWD ' in ASCII
 * @{
 */
#define SWD_CORE_ID__ID__SHIFT                                                0
#define SWD_CORE_ID__ID__WIDTH                                               32
#define SWD_CORE_ID__ID__MASK                                       0xffffffffU
#define SWD_CORE_ID__ID__READ(src)              ((uint32_t)(src) & 0xffffffffU)
#define SWD_CORE_ID__ID__RESET_VALUE                                0x53574420U
/** @} */
#define SWD_CORE_ID__TYPE                                              uint32_t
#define SWD_CORE_ID__READ                                           0xffffffffU
#define SWD_CORE_ID__PRESERVED                                      0x00000000U
#define SWD_CORE_ID__RESET_VALUE                                    0x53574420U

#endif /* __SWD_CORE_ID_MACRO__ */

/** @} end of core_id */

/** @} end of AT_APB_SWD_REGS_CORE */
#endif /* __REG_AT_APB_SWD_REGS_CORE_H__ */
