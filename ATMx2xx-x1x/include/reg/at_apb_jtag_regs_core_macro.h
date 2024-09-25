/*                                                                           */
/* File:       at_apb_jtag_regs_core_macro.h                                 */
/*                                                                           */
/* Arguments:  /cad/tools/cadence/blueprint_3.7.5/Linux-64bit/blueprint -eval*/
/*             $DEFINE_PROPERTY=1; -ansic at_apb_jtag_regs_core.rdl          */
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


#ifndef __REG_AT_APB_JTAG_REGS_CORE_H__
#define __REG_AT_APB_JTAG_REGS_CORE_H__

/**
 *****************************************************************************
 * @defgroup AT_APB_JTAG_REGS_CORE at_apb_jtag_regs_core
 * @ingroup AT_REG
 * @brief at_apb_jtag_regs_core definitions.
 * @{
 *****************************************************************************
 */

/* macros for BlueprintGlobalNameSpace::JTAG_jtag_addr_ctrl */
/**
 * @defgroup at_apb_jtag_regs_core_jtag_addr_ctrl jtag_addr_ctrl
 * @brief Contains register fields associated with jtag_addr_ctrl. definitions.
 * @{
 */
#ifndef __JTAG_JTAG_ADDR_CTRL_MACRO__
#define __JTAG_JTAG_ADDR_CTRL_MACRO__

/* macros for field jtag_addr */
/**
 * @defgroup at_apb_jtag_regs_core_jtag_addr_field jtag_addr_field
 * @brief macros for field jtag_addr
 * @{
 */
#define JTAG_JTAG_ADDR_CTRL__JTAG_ADDR__SHIFT                                 0
#define JTAG_JTAG_ADDR_CTRL__JTAG_ADDR__WIDTH                                 5
#define JTAG_JTAG_ADDR_CTRL__JTAG_ADDR__MASK                        0x0000001fU
#define JTAG_JTAG_ADDR_CTRL__JTAG_ADDR__READ(src) \
                    ((uint32_t)(src)\
                    & 0x0000001fU)
#define JTAG_JTAG_ADDR_CTRL__JTAG_ADDR__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x0000001fU)
#define JTAG_JTAG_ADDR_CTRL__JTAG_ADDR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000001fU) | ((uint32_t)(src) &\
                    0x0000001fU)
#define JTAG_JTAG_ADDR_CTRL__JTAG_ADDR__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x0000001fU)))
#define JTAG_JTAG_ADDR_CTRL__JTAG_ADDR__RESET_VALUE                 0x00000000U
/** @} */
#define JTAG_JTAG_ADDR_CTRL__TYPE                                      uint32_t
#define JTAG_JTAG_ADDR_CTRL__READ                                   0x0000001fU
#define JTAG_JTAG_ADDR_CTRL__WRITE                                  0x0000001fU
#define JTAG_JTAG_ADDR_CTRL__PRESERVED                              0x00000000U
#define JTAG_JTAG_ADDR_CTRL__RESET_VALUE                            0x00000000U

#endif /* __JTAG_JTAG_ADDR_CTRL_MACRO__ */

/** @} end of jtag_addr_ctrl */

/* macros for BlueprintGlobalNameSpace::JTAG_jtag_data_upper_ctrl */
/**
 * @defgroup at_apb_jtag_regs_core_jtag_data_upper_ctrl jtag_data_upper_ctrl
 * @brief Contains register fields associated with jtag_data_upper_ctrl. definitions.
 * @{
 */
#ifndef __JTAG_JTAG_DATA_UPPER_CTRL_MACRO__
#define __JTAG_JTAG_DATA_UPPER_CTRL_MACRO__

/* macros for field jtag_data_upper */
/**
 * @defgroup at_apb_jtag_regs_core_jtag_data_upper_field jtag_data_upper_field
 * @brief macros for field jtag_data_upper
 * @{
 */
#define JTAG_JTAG_DATA_UPPER_CTRL__JTAG_DATA_UPPER__SHIFT                     0
#define JTAG_JTAG_DATA_UPPER_CTRL__JTAG_DATA_UPPER__WIDTH                    32
#define JTAG_JTAG_DATA_UPPER_CTRL__JTAG_DATA_UPPER__MASK            0xffffffffU
#define JTAG_JTAG_DATA_UPPER_CTRL__JTAG_DATA_UPPER__READ(src) \
                    ((uint32_t)(src)\
                    & 0xffffffffU)
#define JTAG_JTAG_DATA_UPPER_CTRL__JTAG_DATA_UPPER__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0xffffffffU)
#define JTAG_JTAG_DATA_UPPER_CTRL__JTAG_DATA_UPPER__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffffffffU) | ((uint32_t)(src) &\
                    0xffffffffU)
#define JTAG_JTAG_DATA_UPPER_CTRL__JTAG_DATA_UPPER__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0xffffffffU)))
#define JTAG_JTAG_DATA_UPPER_CTRL__JTAG_DATA_UPPER__RESET_VALUE     0x00000000U
/** @} */
#define JTAG_JTAG_DATA_UPPER_CTRL__TYPE                                uint32_t
#define JTAG_JTAG_DATA_UPPER_CTRL__READ                             0xffffffffU
#define JTAG_JTAG_DATA_UPPER_CTRL__WRITE                            0xffffffffU
#define JTAG_JTAG_DATA_UPPER_CTRL__PRESERVED                        0x00000000U
#define JTAG_JTAG_DATA_UPPER_CTRL__RESET_VALUE                      0x00000000U

#endif /* __JTAG_JTAG_DATA_UPPER_CTRL_MACRO__ */

/** @} end of jtag_data_upper_ctrl */

/* macros for BlueprintGlobalNameSpace::JTAG_jtag_data_lower_ctrl */
/**
 * @defgroup at_apb_jtag_regs_core_jtag_data_lower_ctrl jtag_data_lower_ctrl
 * @brief Contains register fields associated with jtag_data_lower_ctrl. definitions.
 * @{
 */
#ifndef __JTAG_JTAG_DATA_LOWER_CTRL_MACRO__
#define __JTAG_JTAG_DATA_LOWER_CTRL_MACRO__

/* macros for field jtag_data_lower */
/**
 * @defgroup at_apb_jtag_regs_core_jtag_data_lower_field jtag_data_lower_field
 * @brief macros for field jtag_data_lower
 * @{
 */
#define JTAG_JTAG_DATA_LOWER_CTRL__JTAG_DATA_LOWER__SHIFT                     0
#define JTAG_JTAG_DATA_LOWER_CTRL__JTAG_DATA_LOWER__WIDTH                    32
#define JTAG_JTAG_DATA_LOWER_CTRL__JTAG_DATA_LOWER__MASK            0xffffffffU
#define JTAG_JTAG_DATA_LOWER_CTRL__JTAG_DATA_LOWER__READ(src) \
                    ((uint32_t)(src)\
                    & 0xffffffffU)
#define JTAG_JTAG_DATA_LOWER_CTRL__JTAG_DATA_LOWER__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0xffffffffU)
#define JTAG_JTAG_DATA_LOWER_CTRL__JTAG_DATA_LOWER__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffffffffU) | ((uint32_t)(src) &\
                    0xffffffffU)
#define JTAG_JTAG_DATA_LOWER_CTRL__JTAG_DATA_LOWER__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0xffffffffU)))
#define JTAG_JTAG_DATA_LOWER_CTRL__JTAG_DATA_LOWER__RESET_VALUE     0x00000000U
/** @} */
#define JTAG_JTAG_DATA_LOWER_CTRL__TYPE                                uint32_t
#define JTAG_JTAG_DATA_LOWER_CTRL__READ                             0xffffffffU
#define JTAG_JTAG_DATA_LOWER_CTRL__WRITE                            0xffffffffU
#define JTAG_JTAG_DATA_LOWER_CTRL__PRESERVED                        0x00000000U
#define JTAG_JTAG_DATA_LOWER_CTRL__RESET_VALUE                      0x00000000U

#endif /* __JTAG_JTAG_DATA_LOWER_CTRL_MACRO__ */

/** @} end of jtag_data_lower_ctrl */

/* macros for BlueprintGlobalNameSpace::JTAG_jtag_clk_div_ctrl */
/**
 * @defgroup at_apb_jtag_regs_core_jtag_clk_div_ctrl jtag_clk_div_ctrl
 * @brief Contains register fields associated with jtag_clk_div_ctrl. definitions.
 * @{
 */
#ifndef __JTAG_JTAG_CLK_DIV_CTRL_MACRO__
#define __JTAG_JTAG_CLK_DIV_CTRL_MACRO__

/* macros for field jtag_clk_div */
/**
 * @defgroup at_apb_jtag_regs_core_jtag_clk_div_field jtag_clk_div_field
 * @brief macros for field jtag_clk_div
 * @{
 */
#define JTAG_JTAG_CLK_DIV_CTRL__JTAG_CLK_DIV__SHIFT                           0
#define JTAG_JTAG_CLK_DIV_CTRL__JTAG_CLK_DIV__WIDTH                           2
#define JTAG_JTAG_CLK_DIV_CTRL__JTAG_CLK_DIV__MASK                  0x00000003U
#define JTAG_JTAG_CLK_DIV_CTRL__JTAG_CLK_DIV__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000003U)
#define JTAG_JTAG_CLK_DIV_CTRL__JTAG_CLK_DIV__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000003U)
#define JTAG_JTAG_CLK_DIV_CTRL__JTAG_CLK_DIV__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000003U) | ((uint32_t)(src) &\
                    0x00000003U)
#define JTAG_JTAG_CLK_DIV_CTRL__JTAG_CLK_DIV__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000003U)))
#define JTAG_JTAG_CLK_DIV_CTRL__JTAG_CLK_DIV__RESET_VALUE           0x00000000U
/** @} */
#define JTAG_JTAG_CLK_DIV_CTRL__TYPE                                   uint32_t
#define JTAG_JTAG_CLK_DIV_CTRL__READ                                0x00000003U
#define JTAG_JTAG_CLK_DIV_CTRL__WRITE                               0x00000003U
#define JTAG_JTAG_CLK_DIV_CTRL__PRESERVED                           0x00000000U
#define JTAG_JTAG_CLK_DIV_CTRL__RESET_VALUE                         0x00000000U

#endif /* __JTAG_JTAG_CLK_DIV_CTRL_MACRO__ */

/** @} end of jtag_clk_div_ctrl */

/* macros for BlueprintGlobalNameSpace::JTAG_jtag_bridge_status */
/**
 * @defgroup at_apb_jtag_regs_core_jtag_bridge_status jtag_bridge_status
 * @brief Contains register fields associated with jtag_bridge_status. definitions.
 * @{
 */
#ifndef __JTAG_JTAG_BRIDGE_STATUS_MACRO__
#define __JTAG_JTAG_BRIDGE_STATUS_MACRO__

/* macros for field busy */
/**
 * @defgroup at_apb_jtag_regs_core_busy_field busy_field
 * @brief macros for field busy
 * @{
 */
#define JTAG_JTAG_BRIDGE_STATUS__BUSY__SHIFT                                  0
#define JTAG_JTAG_BRIDGE_STATUS__BUSY__WIDTH                                  1
#define JTAG_JTAG_BRIDGE_STATUS__BUSY__MASK                         0x00000001U
#define JTAG_JTAG_BRIDGE_STATUS__BUSY__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define JTAG_JTAG_BRIDGE_STATUS__BUSY__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define JTAG_JTAG_BRIDGE_STATUS__BUSY__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define JTAG_JTAG_BRIDGE_STATUS__BUSY__RESET_VALUE                  0x00000000U
/** @} */
#define JTAG_JTAG_BRIDGE_STATUS__TYPE                                  uint32_t
#define JTAG_JTAG_BRIDGE_STATUS__READ                               0x00000001U
#define JTAG_JTAG_BRIDGE_STATUS__PRESERVED                          0x00000000U
#define JTAG_JTAG_BRIDGE_STATUS__RESET_VALUE                        0x00000000U

#endif /* __JTAG_JTAG_BRIDGE_STATUS_MACRO__ */

/** @} end of jtag_bridge_status */

/* macros for BlueprintGlobalNameSpace::JTAG_jtag_dwidth_ctrl */
/**
 * @defgroup at_apb_jtag_regs_core_jtag_dwidth_ctrl jtag_dwidth_ctrl
 * @brief Contains register fields associated with jtag_dwidth_ctrl. definitions.
 * @{
 */
#ifndef __JTAG_JTAG_DWIDTH_CTRL_MACRO__
#define __JTAG_JTAG_DWIDTH_CTRL_MACRO__

/* macros for field dwidth */
/**
 * @defgroup at_apb_jtag_regs_core_dwidth_field dwidth_field
 * @brief macros for field dwidth
 * @details FW-controlled data width if dwidth_ovrd is set to 1.
 * @{
 */
#define JTAG_JTAG_DWIDTH_CTRL__DWIDTH__SHIFT                                  0
#define JTAG_JTAG_DWIDTH_CTRL__DWIDTH__WIDTH                                  5
#define JTAG_JTAG_DWIDTH_CTRL__DWIDTH__MASK                         0x0000001fU
#define JTAG_JTAG_DWIDTH_CTRL__DWIDTH__READ(src) \
                    ((uint32_t)(src)\
                    & 0x0000001fU)
#define JTAG_JTAG_DWIDTH_CTRL__DWIDTH__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x0000001fU)
#define JTAG_JTAG_DWIDTH_CTRL__DWIDTH__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000001fU) | ((uint32_t)(src) &\
                    0x0000001fU)
#define JTAG_JTAG_DWIDTH_CTRL__DWIDTH__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x0000001fU)))
#define JTAG_JTAG_DWIDTH_CTRL__DWIDTH__RESET_VALUE                  0x00000000U
/** @} */

/* macros for field dwidth_ovrd */
/**
 * @defgroup at_apb_jtag_regs_core_dwidth_ovrd_field dwidth_ovrd_field
 * @brief macros for field dwidth_ovrd
 * @details 1 for Read, 0 for Write
 * @{
 */
#define JTAG_JTAG_DWIDTH_CTRL__DWIDTH_OVRD__SHIFT                            31
#define JTAG_JTAG_DWIDTH_CTRL__DWIDTH_OVRD__WIDTH                             1
#define JTAG_JTAG_DWIDTH_CTRL__DWIDTH_OVRD__MASK                    0x80000000U
#define JTAG_JTAG_DWIDTH_CTRL__DWIDTH_OVRD__READ(src) \
                    (((uint32_t)(src)\
                    & 0x80000000U) >> 31)
#define JTAG_JTAG_DWIDTH_CTRL__DWIDTH_OVRD__WRITE(src) \
                    (((uint32_t)(src)\
                    << 31) & 0x80000000U)
#define JTAG_JTAG_DWIDTH_CTRL__DWIDTH_OVRD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x80000000U) | (((uint32_t)(src) <<\
                    31) & 0x80000000U)
#define JTAG_JTAG_DWIDTH_CTRL__DWIDTH_OVRD__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 31) & ~0x80000000U)))
#define JTAG_JTAG_DWIDTH_CTRL__DWIDTH_OVRD__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x80000000U) | ((uint32_t)(1) << 31)
#define JTAG_JTAG_DWIDTH_CTRL__DWIDTH_OVRD__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x80000000U) | ((uint32_t)(0) << 31)
#define JTAG_JTAG_DWIDTH_CTRL__DWIDTH_OVRD__RESET_VALUE             0x00000000U
/** @} */
#define JTAG_JTAG_DWIDTH_CTRL__TYPE                                    uint32_t
#define JTAG_JTAG_DWIDTH_CTRL__READ                                 0x8000001fU
#define JTAG_JTAG_DWIDTH_CTRL__WRITE                                0x8000001fU
#define JTAG_JTAG_DWIDTH_CTRL__PRESERVED                            0x00000000U
#define JTAG_JTAG_DWIDTH_CTRL__RESET_VALUE                          0x00000000U

#endif /* __JTAG_JTAG_DWIDTH_CTRL_MACRO__ */

/** @} end of jtag_dwidth_ctrl */

/* macros for BlueprintGlobalNameSpace::JTAG_trigger_ctrl */
/**
 * @defgroup at_apb_jtag_regs_core_trigger_ctrl trigger_ctrl
 * @brief Contains register fields associated with trigger_ctrl. definitions.
 * @{
 */
#ifndef __JTAG_TRIGGER_CTRL_MACRO__
#define __JTAG_TRIGGER_CTRL_MACRO__

/* macros for field go */
/**
 * @defgroup at_apb_jtag_regs_core_go_field go_field
 * @brief macros for field go
 * @details 1 to start jtag, not self-resetting
 * @{
 */
#define JTAG_TRIGGER_CTRL__GO__SHIFT                                          0
#define JTAG_TRIGGER_CTRL__GO__WIDTH                                          1
#define JTAG_TRIGGER_CTRL__GO__MASK                                 0x00000001U
#define JTAG_TRIGGER_CTRL__GO__READ(src)        ((uint32_t)(src) & 0x00000001U)
#define JTAG_TRIGGER_CTRL__GO__WRITE(src)       ((uint32_t)(src) & 0x00000001U)
#define JTAG_TRIGGER_CTRL__GO__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define JTAG_TRIGGER_CTRL__GO__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define JTAG_TRIGGER_CTRL__GO__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define JTAG_TRIGGER_CTRL__GO__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define JTAG_TRIGGER_CTRL__GO__RESET_VALUE                          0x00000000U
/** @} */
#define JTAG_TRIGGER_CTRL__TYPE                                        uint32_t
#define JTAG_TRIGGER_CTRL__READ                                     0x00000001U
#define JTAG_TRIGGER_CTRL__WRITE                                    0x00000001U
#define JTAG_TRIGGER_CTRL__PRESERVED                                0x00000000U
#define JTAG_TRIGGER_CTRL__RESET_VALUE                              0x00000000U

#endif /* __JTAG_TRIGGER_CTRL_MACRO__ */

/** @} end of trigger_ctrl */

/* macros for BlueprintGlobalNameSpace::JTAG_jtag_reset */
/**
 * @defgroup at_apb_jtag_regs_core_jtag_reset jtag_reset
 * @brief Contains register fields associated with jtag_reset. definitions.
 * @{
 */
#ifndef __JTAG_JTAG_RESET_MACRO__
#define __JTAG_JTAG_RESET_MACRO__

/* macros for field go_reset */
/**
 * @defgroup at_apb_jtag_regs_core_go_reset_field go_reset_field
 * @brief macros for field go_reset
 * @details 1 to start resetting jtag, not self-resetting
 * @{
 */
#define JTAG_JTAG_RESET__GO_RESET__SHIFT                                      0
#define JTAG_JTAG_RESET__GO_RESET__WIDTH                                      1
#define JTAG_JTAG_RESET__GO_RESET__MASK                             0x00000001U
#define JTAG_JTAG_RESET__GO_RESET__READ(src)    ((uint32_t)(src) & 0x00000001U)
#define JTAG_JTAG_RESET__GO_RESET__WRITE(src)   ((uint32_t)(src) & 0x00000001U)
#define JTAG_JTAG_RESET__GO_RESET__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define JTAG_JTAG_RESET__GO_RESET__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define JTAG_JTAG_RESET__GO_RESET__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define JTAG_JTAG_RESET__GO_RESET__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define JTAG_JTAG_RESET__GO_RESET__RESET_VALUE                      0x00000000U
/** @} */
#define JTAG_JTAG_RESET__TYPE                                          uint32_t
#define JTAG_JTAG_RESET__READ                                       0x00000001U
#define JTAG_JTAG_RESET__WRITE                                      0x00000001U
#define JTAG_JTAG_RESET__PRESERVED                                  0x00000000U
#define JTAG_JTAG_RESET__RESET_VALUE                                0x00000000U

#endif /* __JTAG_JTAG_RESET_MACRO__ */

/** @} end of jtag_reset */

/* macros for BlueprintGlobalNameSpace::JTAG_jtag_rdata */
/**
 * @defgroup at_apb_jtag_regs_core_jtag_rdata jtag_rdata
 * @brief Contains register fields associated with jtag_rdata. definitions.
 * @{
 */
#ifndef __JTAG_JTAG_RDATA_MACRO__
#define __JTAG_JTAG_RDATA_MACRO__

/* macros for field jtag_rdata */
/**
 * @defgroup at_apb_jtag_regs_core_jtag_rdata_field jtag_rdata_field
 * @brief macros for field jtag_rdata
 * @{
 */
#define JTAG_JTAG_RDATA__JTAG_RDATA__SHIFT                                    0
#define JTAG_JTAG_RDATA__JTAG_RDATA__WIDTH                                   32
#define JTAG_JTAG_RDATA__JTAG_RDATA__MASK                           0xffffffffU
#define JTAG_JTAG_RDATA__JTAG_RDATA__READ(src)  ((uint32_t)(src) & 0xffffffffU)
#define JTAG_JTAG_RDATA__JTAG_RDATA__RESET_VALUE                    0x00000000U
/** @} */
#define JTAG_JTAG_RDATA__TYPE                                          uint32_t
#define JTAG_JTAG_RDATA__READ                                       0xffffffffU
#define JTAG_JTAG_RDATA__PRESERVED                                  0x00000000U
#define JTAG_JTAG_RDATA__RESET_VALUE                                0x00000000U

#endif /* __JTAG_JTAG_RDATA_MACRO__ */

/** @} end of jtag_rdata */

/* macros for BlueprintGlobalNameSpace::JTAG_core_id */
/**
 * @defgroup at_apb_jtag_regs_core_core_id core_id
 * @brief Contains register fields associated with core_id. definitions.
 * @{
 */
#ifndef __JTAG_CORE_ID_MACRO__
#define __JTAG_CORE_ID_MACRO__

/* macros for field id */
/**
 * @defgroup at_apb_jtag_regs_core_id_field id_field
 * @brief macros for field id
 * @details JTAG in ASCII
 * @{
 */
#define JTAG_CORE_ID__ID__SHIFT                                               0
#define JTAG_CORE_ID__ID__WIDTH                                              32
#define JTAG_CORE_ID__ID__MASK                                      0xffffffffU
#define JTAG_CORE_ID__ID__READ(src)             ((uint32_t)(src) & 0xffffffffU)
#define JTAG_CORE_ID__ID__RESET_VALUE                               0x4a544147U
/** @} */
#define JTAG_CORE_ID__TYPE                                             uint32_t
#define JTAG_CORE_ID__READ                                          0xffffffffU
#define JTAG_CORE_ID__PRESERVED                                     0x00000000U
#define JTAG_CORE_ID__RESET_VALUE                                   0x4a544147U

#endif /* __JTAG_CORE_ID_MACRO__ */

/** @} end of core_id */

/** @} end of AT_APB_JTAG_REGS_CORE */
#endif /* __REG_AT_APB_JTAG_REGS_CORE_H__ */
