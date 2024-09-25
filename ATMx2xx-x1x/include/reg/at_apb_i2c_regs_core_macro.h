/*                                                                           */
/* File:       at_apb_i2c_regs_core_macro.h                                  */
/*                                                                           */
/* Arguments:  /cad/tools/cadence/blueprint_3.7.5/Linux-64bit/blueprint -eval*/
/*             $DEFINE_PROPERTY=1; -ansic at_apb_i2c_regs_core.rdl           */
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


#ifndef __REG_AT_APB_I2C_REGS_CORE_H__
#define __REG_AT_APB_I2C_REGS_CORE_H__

/**
 *****************************************************************************
 * @defgroup AT_APB_I2C_REGS_CORE at_apb_i2c_regs_core
 * @ingroup AT_REG
 * @brief at_apb_i2c_regs_core definitions.
 * @{
 *****************************************************************************
 */

/* macros for BlueprintGlobalNameSpace::I2C0_transaction_setup */
/**
 * @defgroup at_apb_i2c_regs_core_transaction_setup transaction_setup
 * @brief setup i2c transaction definitions.
 * @{
 */
#ifndef __I2C0_TRANSACTION_SETUP_MACRO__
#define __I2C0_TRANSACTION_SETUP_MACRO__

/* macros for field head */
/**
 * @defgroup at_apb_i2c_regs_core_head_field head_field
 * @brief macros for field head
 * @details Before data transmission starts, what should head be?  0 = start  1 = stall
 * @{
 */
#define I2C0_TRANSACTION_SETUP__HEAD__SHIFT                                   0
#define I2C0_TRANSACTION_SETUP__HEAD__WIDTH                                   2
#define I2C0_TRANSACTION_SETUP__HEAD__MASK                          0x00000003U
#define I2C0_TRANSACTION_SETUP__HEAD__READ(src) ((uint32_t)(src) & 0x00000003U)
#define I2C0_TRANSACTION_SETUP__HEAD__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000003U)
#define I2C0_TRANSACTION_SETUP__HEAD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000003U) | ((uint32_t)(src) &\
                    0x00000003U)
#define I2C0_TRANSACTION_SETUP__HEAD__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000003U)))
#define I2C0_TRANSACTION_SETUP__HEAD__RESET_VALUE                   0x00000000U
/** @} */

/* macros for field tail */
/**
 * @defgroup at_apb_i2c_regs_core_tail_field tail_field
 * @brief macros for field tail
 * @details At end of 8 bits plus ack/nack, what should tail be?  0 = stop  1 = stall  2 = restart
 * @{
 */
#define I2C0_TRANSACTION_SETUP__TAIL__SHIFT                                   4
#define I2C0_TRANSACTION_SETUP__TAIL__WIDTH                                   2
#define I2C0_TRANSACTION_SETUP__TAIL__MASK                          0x00000030U
#define I2C0_TRANSACTION_SETUP__TAIL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000030U) >> 4)
#define I2C0_TRANSACTION_SETUP__TAIL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 4) & 0x00000030U)
#define I2C0_TRANSACTION_SETUP__TAIL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000030U) | (((uint32_t)(src) <<\
                    4) & 0x00000030U)
#define I2C0_TRANSACTION_SETUP__TAIL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 4) & ~0x00000030U)))
#define I2C0_TRANSACTION_SETUP__TAIL__RESET_VALUE                   0x00000000U
/** @} */

/* macros for field master_drives_ack */
/**
 * @defgroup at_apb_i2c_regs_core_master_drives_ack_field master_drives_ack_field
 * @brief macros for field master_drives_ack
 * @details Specifies that master is to drive ack.
 * @{
 */
#define I2C0_TRANSACTION_SETUP__MASTER_DRIVES_ACK__SHIFT                     16
#define I2C0_TRANSACTION_SETUP__MASTER_DRIVES_ACK__WIDTH                      1
#define I2C0_TRANSACTION_SETUP__MASTER_DRIVES_ACK__MASK             0x00010000U
#define I2C0_TRANSACTION_SETUP__MASTER_DRIVES_ACK__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00010000U) >> 16)
#define I2C0_TRANSACTION_SETUP__MASTER_DRIVES_ACK__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00010000U)
#define I2C0_TRANSACTION_SETUP__MASTER_DRIVES_ACK__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00010000U) | (((uint32_t)(src) <<\
                    16) & 0x00010000U)
#define I2C0_TRANSACTION_SETUP__MASTER_DRIVES_ACK__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00010000U)))
#define I2C0_TRANSACTION_SETUP__MASTER_DRIVES_ACK__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00010000U) | ((uint32_t)(1) << 16)
#define I2C0_TRANSACTION_SETUP__MASTER_DRIVES_ACK__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00010000U) | ((uint32_t)(0) << 16)
#define I2C0_TRANSACTION_SETUP__MASTER_DRIVES_ACK__RESET_VALUE      0x00000000U
/** @} */

/* macros for field ack_value_to_drive */
/**
 * @defgroup at_apb_i2c_regs_core_ack_value_to_drive_field ack_value_to_drive_field
 * @brief macros for field ack_value_to_drive
 * @details If ack is to be driven by master, what value to drive?
 * @{
 */
#define I2C0_TRANSACTION_SETUP__ACK_VALUE_TO_DRIVE__SHIFT                    17
#define I2C0_TRANSACTION_SETUP__ACK_VALUE_TO_DRIVE__WIDTH                     1
#define I2C0_TRANSACTION_SETUP__ACK_VALUE_TO_DRIVE__MASK            0x00020000U
#define I2C0_TRANSACTION_SETUP__ACK_VALUE_TO_DRIVE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00020000U) >> 17)
#define I2C0_TRANSACTION_SETUP__ACK_VALUE_TO_DRIVE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 17) & 0x00020000U)
#define I2C0_TRANSACTION_SETUP__ACK_VALUE_TO_DRIVE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | (((uint32_t)(src) <<\
                    17) & 0x00020000U)
#define I2C0_TRANSACTION_SETUP__ACK_VALUE_TO_DRIVE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 17) & ~0x00020000U)))
#define I2C0_TRANSACTION_SETUP__ACK_VALUE_TO_DRIVE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(1) << 17)
#define I2C0_TRANSACTION_SETUP__ACK_VALUE_TO_DRIVE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(0) << 17)
#define I2C0_TRANSACTION_SETUP__ACK_VALUE_TO_DRIVE__RESET_VALUE     0x00000000U
/** @} */

/* macros for field go */
/**
 * @defgroup at_apb_i2c_regs_core_go_field go_field
 * @brief macros for field go
 * @details Transaction lauches on rising edge. Not self reseting.
 * @{
 */
#define I2C0_TRANSACTION_SETUP__GO__SHIFT                                    20
#define I2C0_TRANSACTION_SETUP__GO__WIDTH                                     1
#define I2C0_TRANSACTION_SETUP__GO__MASK                            0x00100000U
#define I2C0_TRANSACTION_SETUP__GO__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00100000U) >> 20)
#define I2C0_TRANSACTION_SETUP__GO__WRITE(src) \
                    (((uint32_t)(src)\
                    << 20) & 0x00100000U)
#define I2C0_TRANSACTION_SETUP__GO__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00100000U) | (((uint32_t)(src) <<\
                    20) & 0x00100000U)
#define I2C0_TRANSACTION_SETUP__GO__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 20) & ~0x00100000U)))
#define I2C0_TRANSACTION_SETUP__GO__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00100000U) | ((uint32_t)(1) << 20)
#define I2C0_TRANSACTION_SETUP__GO__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00100000U) | ((uint32_t)(0) << 20)
#define I2C0_TRANSACTION_SETUP__GO__RESET_VALUE                     0x00000000U
/** @} */
#define I2C0_TRANSACTION_SETUP__TYPE                                   uint32_t
#define I2C0_TRANSACTION_SETUP__READ                                0x00130033U
#define I2C0_TRANSACTION_SETUP__WRITE                               0x00130033U
#define I2C0_TRANSACTION_SETUP__PRESERVED                           0x00000000U
#define I2C0_TRANSACTION_SETUP__RESET_VALUE                         0x00000000U

#endif /* __I2C0_TRANSACTION_SETUP_MACRO__ */

/** @} end of transaction_setup */

/* macros for BlueprintGlobalNameSpace::I2C0_clock_control */
/**
 * @defgroup at_apb_i2c_regs_core_clock_control clock_control
 * @brief clock behavior definitions.
 * @{
 */
#ifndef __I2C0_CLOCK_CONTROL_MACRO__
#define __I2C0_CLOCK_CONTROL_MACRO__

/* macros for field clkdiv */
/**
 * @defgroup at_apb_i2c_regs_core_clkdiv_field clkdiv_field
 * @brief macros for field clkdiv
 * @details freq_sclk = f_pclk/(4*(clkdiv+1))
 * @{
 */
#define I2C0_CLOCK_CONTROL__CLKDIV__SHIFT                                     0
#define I2C0_CLOCK_CONTROL__CLKDIV__WIDTH                                    10
#define I2C0_CLOCK_CONTROL__CLKDIV__MASK                            0x000003ffU
#define I2C0_CLOCK_CONTROL__CLKDIV__READ(src)   ((uint32_t)(src) & 0x000003ffU)
#define I2C0_CLOCK_CONTROL__CLKDIV__WRITE(src)  ((uint32_t)(src) & 0x000003ffU)
#define I2C0_CLOCK_CONTROL__CLKDIV__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000003ffU) | ((uint32_t)(src) &\
                    0x000003ffU)
#define I2C0_CLOCK_CONTROL__CLKDIV__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000003ffU)))
#define I2C0_CLOCK_CONTROL__CLKDIV__RESET_VALUE                     0x00000007U
/** @} */

/* macros for field clk_pu */
/**
 * @defgroup at_apb_i2c_regs_core_clk_pu_field clk_pu_field
 * @brief macros for field clk_pu
 * @details sck pin pullup enable
 * @{
 */
#define I2C0_CLOCK_CONTROL__CLK_PU__SHIFT                                    10
#define I2C0_CLOCK_CONTROL__CLK_PU__WIDTH                                     1
#define I2C0_CLOCK_CONTROL__CLK_PU__MASK                            0x00000400U
#define I2C0_CLOCK_CONTROL__CLK_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000400U) >> 10)
#define I2C0_CLOCK_CONTROL__CLK_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 10) & 0x00000400U)
#define I2C0_CLOCK_CONTROL__CLK_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000400U) | (((uint32_t)(src) <<\
                    10) & 0x00000400U)
#define I2C0_CLOCK_CONTROL__CLK_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 10) & ~0x00000400U)))
#define I2C0_CLOCK_CONTROL__CLK_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000400U) | ((uint32_t)(1) << 10)
#define I2C0_CLOCK_CONTROL__CLK_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000400U) | ((uint32_t)(0) << 10)
#define I2C0_CLOCK_CONTROL__CLK_PU__RESET_VALUE                     0x00000000U
/** @} */
#define I2C0_CLOCK_CONTROL__TYPE                                       uint32_t
#define I2C0_CLOCK_CONTROL__READ                                    0x000007ffU
#define I2C0_CLOCK_CONTROL__WRITE                                   0x000007ffU
#define I2C0_CLOCK_CONTROL__PRESERVED                               0x00000000U
#define I2C0_CLOCK_CONTROL__RESET_VALUE                             0x00000007U

#endif /* __I2C0_CLOCK_CONTROL_MACRO__ */

/** @} end of clock_control */

/* macros for BlueprintGlobalNameSpace::I2C0_outgoing_data */
/**
 * @defgroup at_apb_i2c_regs_core_outgoing_data outgoing_data
 * @brief outbound data definitions.
 * @{
 */
#ifndef __I2C0_OUTGOING_DATA_MACRO__
#define __I2C0_OUTGOING_DATA_MACRO__

/* macros for field data_o */
/**
 * @defgroup at_apb_i2c_regs_core_data_o_field data_o_field
 * @brief macros for field data_o
 * @details outbound data; can be device id, address within device, or write data; if it's device id, the LSB is the R/Wb indicator
 * @{
 */
#define I2C0_OUTGOING_DATA__DATA_O__SHIFT                                     0
#define I2C0_OUTGOING_DATA__DATA_O__WIDTH                                     8
#define I2C0_OUTGOING_DATA__DATA_O__MASK                            0x000000ffU
#define I2C0_OUTGOING_DATA__DATA_O__READ(src)   ((uint32_t)(src) & 0x000000ffU)
#define I2C0_OUTGOING_DATA__DATA_O__WRITE(src)  ((uint32_t)(src) & 0x000000ffU)
#define I2C0_OUTGOING_DATA__DATA_O__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define I2C0_OUTGOING_DATA__DATA_O__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000000ffU)))
#define I2C0_OUTGOING_DATA__DATA_O__RESET_VALUE                     0x00000000U
/** @} */

/* macros for field data_oe */
/**
 * @defgroup at_apb_i2c_regs_core_data_oe_field data_oe_field
 * @brief macros for field data_oe
 * @details sda output enable per bit
 * @{
 */
#define I2C0_OUTGOING_DATA__DATA_OE__SHIFT                                    8
#define I2C0_OUTGOING_DATA__DATA_OE__WIDTH                                    8
#define I2C0_OUTGOING_DATA__DATA_OE__MASK                           0x0000ff00U
#define I2C0_OUTGOING_DATA__DATA_OE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000ff00U) >> 8)
#define I2C0_OUTGOING_DATA__DATA_OE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x0000ff00U)
#define I2C0_OUTGOING_DATA__DATA_OE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ff00U) | (((uint32_t)(src) <<\
                    8) & 0x0000ff00U)
#define I2C0_OUTGOING_DATA__DATA_OE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x0000ff00U)))
#define I2C0_OUTGOING_DATA__DATA_OE__RESET_VALUE                    0x000000ffU
/** @} */

/* macros for field data_pu */
/**
 * @defgroup at_apb_i2c_regs_core_data_pu_field data_pu_field
 * @brief macros for field data_pu
 * @details sda pin pullup enable; if no external pullup resistor, this is needed to allow logic high when the slave device reponses.
 * @{
 */
#define I2C0_OUTGOING_DATA__DATA_PU__SHIFT                                   16
#define I2C0_OUTGOING_DATA__DATA_PU__WIDTH                                    1
#define I2C0_OUTGOING_DATA__DATA_PU__MASK                           0x00010000U
#define I2C0_OUTGOING_DATA__DATA_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00010000U) >> 16)
#define I2C0_OUTGOING_DATA__DATA_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00010000U)
#define I2C0_OUTGOING_DATA__DATA_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00010000U) | (((uint32_t)(src) <<\
                    16) & 0x00010000U)
#define I2C0_OUTGOING_DATA__DATA_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00010000U)))
#define I2C0_OUTGOING_DATA__DATA_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00010000U) | ((uint32_t)(1) << 16)
#define I2C0_OUTGOING_DATA__DATA_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00010000U) | ((uint32_t)(0) << 16)
#define I2C0_OUTGOING_DATA__DATA_PU__RESET_VALUE                    0x00000000U
/** @} */
#define I2C0_OUTGOING_DATA__TYPE                                       uint32_t
#define I2C0_OUTGOING_DATA__READ                                    0x0001ffffU
#define I2C0_OUTGOING_DATA__WRITE                                   0x0001ffffU
#define I2C0_OUTGOING_DATA__PRESERVED                               0x00000000U
#define I2C0_OUTGOING_DATA__RESET_VALUE                             0x0000ff00U

#endif /* __I2C0_OUTGOING_DATA_MACRO__ */

/** @} end of outgoing_data */

/* macros for BlueprintGlobalNameSpace::I2C0_io_ctrl */
/**
 * @defgroup at_apb_i2c_regs_core_io_ctrl io_ctrl
 * @brief input enable control definitions.
 * @{
 */
#ifndef __I2C0_IO_CTRL_MACRO__
#define __I2C0_IO_CTRL_MACRO__

/* macros for field data_ie_ovrd */
/**
 * @defgroup at_apb_i2c_regs_core_data_ie_ovrd_field data_ie_ovrd_field
 * @brief macros for field data_ie_ovrd
 * @details 1 = ie is high  0 = ie is ~oe
 * @{
 */
#define I2C0_IO_CTRL__DATA_IE_OVRD__SHIFT                                     0
#define I2C0_IO_CTRL__DATA_IE_OVRD__WIDTH                                     1
#define I2C0_IO_CTRL__DATA_IE_OVRD__MASK                            0x00000001U
#define I2C0_IO_CTRL__DATA_IE_OVRD__READ(src)   ((uint32_t)(src) & 0x00000001U)
#define I2C0_IO_CTRL__DATA_IE_OVRD__WRITE(src)  ((uint32_t)(src) & 0x00000001U)
#define I2C0_IO_CTRL__DATA_IE_OVRD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define I2C0_IO_CTRL__DATA_IE_OVRD__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define I2C0_IO_CTRL__DATA_IE_OVRD__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define I2C0_IO_CTRL__DATA_IE_OVRD__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define I2C0_IO_CTRL__DATA_IE_OVRD__RESET_VALUE                     0x00000000U
/** @} */
#define I2C0_IO_CTRL__TYPE                                             uint32_t
#define I2C0_IO_CTRL__READ                                          0x00000001U
#define I2C0_IO_CTRL__WRITE                                         0x00000001U
#define I2C0_IO_CTRL__PRESERVED                                     0x00000000U
#define I2C0_IO_CTRL__RESET_VALUE                                   0x00000000U

#endif /* __I2C0_IO_CTRL_MACRO__ */

/** @} end of io_ctrl */

/* macros for BlueprintGlobalNameSpace::I2C0_incoming_data */
/**
 * @defgroup at_apb_i2c_regs_core_incoming_data incoming_data
 * @brief inbound data definitions.
 * @{
 */
#ifndef __I2C0_INCOMING_DATA_MACRO__
#define __I2C0_INCOMING_DATA_MACRO__

/* macros for field data_i */
/**
 * @defgroup at_apb_i2c_regs_core_data_i_field data_i_field
 * @brief macros for field data_i
 * @details inbound data
 * @{
 */
#define I2C0_INCOMING_DATA__DATA_I__SHIFT                                     0
#define I2C0_INCOMING_DATA__DATA_I__WIDTH                                     8
#define I2C0_INCOMING_DATA__DATA_I__MASK                            0x000000ffU
#define I2C0_INCOMING_DATA__DATA_I__READ(src)   ((uint32_t)(src) & 0x000000ffU)
#define I2C0_INCOMING_DATA__DATA_I__RESET_VALUE                     0x00000000U
/** @} */
#define I2C0_INCOMING_DATA__TYPE                                       uint32_t
#define I2C0_INCOMING_DATA__READ                                    0x000000ffU
#define I2C0_INCOMING_DATA__PRESERVED                               0x00000000U
#define I2C0_INCOMING_DATA__RESET_VALUE                             0x00000000U

#endif /* __I2C0_INCOMING_DATA_MACRO__ */

/** @} end of incoming_data */

/* macros for BlueprintGlobalNameSpace::I2C0_transaction_status */
/**
 * @defgroup at_apb_i2c_regs_core_transaction_status transaction_status
 * @brief transaction status definitions.
 * @{
 */
#ifndef __I2C0_TRANSACTION_STATUS_MACRO__
#define __I2C0_TRANSACTION_STATUS_MACRO__

/* macros for field ack_value */
/**
 * @defgroup at_apb_i2c_regs_core_ack_value_field ack_value_field
 * @brief macros for field ack_value
 * @details What was most recent ack/nack value? Useless if mast_drives_ack is set.
 * @{
 */
#define I2C0_TRANSACTION_STATUS__ACK_VALUE__SHIFT                             0
#define I2C0_TRANSACTION_STATUS__ACK_VALUE__WIDTH                             1
#define I2C0_TRANSACTION_STATUS__ACK_VALUE__MASK                    0x00000001U
#define I2C0_TRANSACTION_STATUS__ACK_VALUE__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define I2C0_TRANSACTION_STATUS__ACK_VALUE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define I2C0_TRANSACTION_STATUS__ACK_VALUE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define I2C0_TRANSACTION_STATUS__ACK_VALUE__RESET_VALUE             0x00000000U
/** @} */

/* macros for field running */
/**
 * @defgroup at_apb_i2c_regs_core_running_field running_field
 * @brief macros for field running
 * @details Is transaction running?
 * @{
 */
#define I2C0_TRANSACTION_STATUS__RUNNING__SHIFT                               1
#define I2C0_TRANSACTION_STATUS__RUNNING__WIDTH                               1
#define I2C0_TRANSACTION_STATUS__RUNNING__MASK                      0x00000002U
#define I2C0_TRANSACTION_STATUS__RUNNING__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define I2C0_TRANSACTION_STATUS__RUNNING__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define I2C0_TRANSACTION_STATUS__RUNNING__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define I2C0_TRANSACTION_STATUS__RUNNING__RESET_VALUE               0x00000000U
/** @} */
#define I2C0_TRANSACTION_STATUS__TYPE                                  uint32_t
#define I2C0_TRANSACTION_STATUS__READ                               0x00000003U
#define I2C0_TRANSACTION_STATUS__PRESERVED                          0x00000000U
#define I2C0_TRANSACTION_STATUS__RESET_VALUE                        0x00000000U

#endif /* __I2C0_TRANSACTION_STATUS_MACRO__ */

/** @} end of transaction_status */

/* macros for BlueprintGlobalNameSpace::I2C0_interrupt_mask */
/**
 * @defgroup at_apb_i2c_regs_core_interrupt_mask interrupt_mask
 * @brief interrupt mask definitions.
 * @{
 */
#ifndef __I2C0_INTERRUPT_MASK_MACRO__
#define __I2C0_INTERRUPT_MASK_MACRO__

/* macros for field passthru0 */
/**
 * @defgroup at_apb_i2c_regs_core_passthru0_field passthru0_field
 * @brief macros for field passthru0
 * @details 1 = allow interrupt0 to be OR'ed into core interrupt
 * @{
 */
#define I2C0_INTERRUPT_MASK__PASSTHRU0__SHIFT                                 0
#define I2C0_INTERRUPT_MASK__PASSTHRU0__WIDTH                                 1
#define I2C0_INTERRUPT_MASK__PASSTHRU0__MASK                        0x00000001U
#define I2C0_INTERRUPT_MASK__PASSTHRU0__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define I2C0_INTERRUPT_MASK__PASSTHRU0__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define I2C0_INTERRUPT_MASK__PASSTHRU0__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define I2C0_INTERRUPT_MASK__PASSTHRU0__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define I2C0_INTERRUPT_MASK__PASSTHRU0__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define I2C0_INTERRUPT_MASK__PASSTHRU0__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define I2C0_INTERRUPT_MASK__PASSTHRU0__RESET_VALUE                 0x00000000U
/** @} */
#define I2C0_INTERRUPT_MASK__TYPE                                      uint32_t
#define I2C0_INTERRUPT_MASK__READ                                   0x00000001U
#define I2C0_INTERRUPT_MASK__WRITE                                  0x00000001U
#define I2C0_INTERRUPT_MASK__PRESERVED                              0x00000000U
#define I2C0_INTERRUPT_MASK__RESET_VALUE                            0x00000000U

#endif /* __I2C0_INTERRUPT_MASK_MACRO__ */

/** @} end of interrupt_mask */

/* macros for BlueprintGlobalNameSpace::I2C0_interrupt_status */
/**
 * @defgroup at_apb_i2c_regs_core_interrupt_status interrupt_status
 * @brief interrupt status definitions.
 * @{
 */
#ifndef __I2C0_INTERRUPT_STATUS_MACRO__
#define __I2C0_INTERRUPT_STATUS_MACRO__

/* macros for field interrupt0 */
/**
 * @defgroup at_apb_i2c_regs_core_interrupt0_field interrupt0_field
 * @brief macros for field interrupt0
 * @details saw a rising edge on done; independent of mask
 * @{
 */
#define I2C0_INTERRUPT_STATUS__INTERRUPT0__SHIFT                              0
#define I2C0_INTERRUPT_STATUS__INTERRUPT0__WIDTH                              1
#define I2C0_INTERRUPT_STATUS__INTERRUPT0__MASK                     0x00000001U
#define I2C0_INTERRUPT_STATUS__INTERRUPT0__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define I2C0_INTERRUPT_STATUS__INTERRUPT0__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define I2C0_INTERRUPT_STATUS__INTERRUPT0__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define I2C0_INTERRUPT_STATUS__INTERRUPT0__RESET_VALUE              0x00000000U
/** @} */
#define I2C0_INTERRUPT_STATUS__TYPE                                    uint32_t
#define I2C0_INTERRUPT_STATUS__READ                                 0x00000001U
#define I2C0_INTERRUPT_STATUS__PRESERVED                            0x00000000U
#define I2C0_INTERRUPT_STATUS__RESET_VALUE                          0x00000000U

#endif /* __I2C0_INTERRUPT_STATUS_MACRO__ */

/** @} end of interrupt_status */

/* macros for BlueprintGlobalNameSpace::I2C0_set_interrupt */
/**
 * @defgroup at_apb_i2c_regs_core_set_interrupt set_interrupt
 * @brief interrupt set definitions.
 * @{
 */
#ifndef __I2C0_SET_INTERRUPT_MACRO__
#define __I2C0_SET_INTERRUPT_MACRO__

/* macros for field set_interrupt0 */
/**
 * @defgroup at_apb_i2c_regs_core_set_interrupt0_field set_interrupt0_field
 * @brief macros for field set_interrupt0
 * @details set interrupt0; useful for software debug and testing; not auto cleared
 * @{
 */
#define I2C0_SET_INTERRUPT__SET_INTERRUPT0__SHIFT                             0
#define I2C0_SET_INTERRUPT__SET_INTERRUPT0__WIDTH                             1
#define I2C0_SET_INTERRUPT__SET_INTERRUPT0__MASK                    0x00000001U
#define I2C0_SET_INTERRUPT__SET_INTERRUPT0__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define I2C0_SET_INTERRUPT__SET_INTERRUPT0__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define I2C0_SET_INTERRUPT__SET_INTERRUPT0__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define I2C0_SET_INTERRUPT__SET_INTERRUPT0__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define I2C0_SET_INTERRUPT__SET_INTERRUPT0__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define I2C0_SET_INTERRUPT__SET_INTERRUPT0__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define I2C0_SET_INTERRUPT__SET_INTERRUPT0__RESET_VALUE             0x00000000U
/** @} */
#define I2C0_SET_INTERRUPT__TYPE                                       uint32_t
#define I2C0_SET_INTERRUPT__READ                                    0x00000001U
#define I2C0_SET_INTERRUPT__WRITE                                   0x00000001U
#define I2C0_SET_INTERRUPT__PRESERVED                               0x00000000U
#define I2C0_SET_INTERRUPT__RESET_VALUE                             0x00000000U

#endif /* __I2C0_SET_INTERRUPT_MACRO__ */

/** @} end of set_interrupt */

/* macros for BlueprintGlobalNameSpace::I2C0_reset_interrupt */
/**
 * @defgroup at_apb_i2c_regs_core_reset_interrupt reset_interrupt
 * @brief interrupt clear definitions.
 * @{
 */
#ifndef __I2C0_RESET_INTERRUPT_MACRO__
#define __I2C0_RESET_INTERRUPT_MACRO__

/* macros for field reset_interrupt0 */
/**
 * @defgroup at_apb_i2c_regs_core_reset_interrupt0_field reset_interrupt0_field
 * @brief macros for field reset_interrupt0
 * @details clear interrupt0; not auto cleared
 * @{
 */
#define I2C0_RESET_INTERRUPT__RESET_INTERRUPT0__SHIFT                         0
#define I2C0_RESET_INTERRUPT__RESET_INTERRUPT0__WIDTH                         1
#define I2C0_RESET_INTERRUPT__RESET_INTERRUPT0__MASK                0x00000001U
#define I2C0_RESET_INTERRUPT__RESET_INTERRUPT0__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define I2C0_RESET_INTERRUPT__RESET_INTERRUPT0__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define I2C0_RESET_INTERRUPT__RESET_INTERRUPT0__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define I2C0_RESET_INTERRUPT__RESET_INTERRUPT0__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define I2C0_RESET_INTERRUPT__RESET_INTERRUPT0__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define I2C0_RESET_INTERRUPT__RESET_INTERRUPT0__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define I2C0_RESET_INTERRUPT__RESET_INTERRUPT0__RESET_VALUE         0x00000000U
/** @} */
#define I2C0_RESET_INTERRUPT__TYPE                                     uint32_t
#define I2C0_RESET_INTERRUPT__READ                                  0x00000001U
#define I2C0_RESET_INTERRUPT__WRITE                                 0x00000001U
#define I2C0_RESET_INTERRUPT__PRESERVED                             0x00000000U
#define I2C0_RESET_INTERRUPT__RESET_VALUE                           0x00000000U

#endif /* __I2C0_RESET_INTERRUPT_MACRO__ */

/** @} end of reset_interrupt */

/* macros for BlueprintGlobalNameSpace::I2C0_id */
/**
 * @defgroup at_apb_i2c_regs_core_id id
 * @brief core ID definitions.
 * @{
 */
#ifndef __I2C0_ID_MACRO__
#define __I2C0_ID_MACRO__

/* macros for field id */
/**
 * @defgroup at_apb_i2c_regs_core_id_field id_field
 * @brief macros for field id
 * @details I2C in ASCII
 * @{
 */
#define I2C0_ID__ID__SHIFT                                                    0
#define I2C0_ID__ID__WIDTH                                                   32
#define I2C0_ID__ID__MASK                                           0xffffffffU
#define I2C0_ID__ID__READ(src)                  ((uint32_t)(src) & 0xffffffffU)
#define I2C0_ID__ID__RESET_VALUE                                    0x49324320U
/** @} */
#define I2C0_ID__TYPE                                                  uint32_t
#define I2C0_ID__READ                                               0xffffffffU
#define I2C0_ID__PRESERVED                                          0x00000000U
#define I2C0_ID__RESET_VALUE                                        0x49324320U

#endif /* __I2C0_ID_MACRO__ */

/** @} end of id */

/** @} end of AT_APB_I2C_REGS_CORE */
#endif /* __REG_AT_APB_I2C_REGS_CORE_H__ */
