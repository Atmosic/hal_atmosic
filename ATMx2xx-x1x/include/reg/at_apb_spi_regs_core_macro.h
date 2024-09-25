/*                                                                           */
/* File:       at_apb_spi_regs_core_macro.h                                  */
/*                                                                           */
/* Arguments:  /cad/tools/cadence/blueprint_3.7.5/Linux-64bit/blueprint -eval*/
/*             $DEFINE_PROPERTY=1; -ansic at_apb_spi_regs_core.rdl           */
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


#ifndef __REG_AT_APB_SPI_REGS_CORE_H__
#define __REG_AT_APB_SPI_REGS_CORE_H__

/**
 *****************************************************************************
 * @defgroup AT_APB_SPI_REGS_CORE at_apb_spi_regs_core
 * @ingroup AT_REG
 * @brief at_apb_spi_regs_core definitions.
 * @{
 *****************************************************************************
 */

/* macros for BlueprintGlobalNameSpace::SPI_transaction_setup */
/**
 * @defgroup at_apb_spi_regs_core_transaction_setup transaction_setup
 * @brief transaction setup definitions.
 * @{
 */
#ifndef __SPI_TRANSACTION_SETUP_MACRO__
#define __SPI_TRANSACTION_SETUP_MACRO__

/* macros for field start */
/**
 * @defgroup at_apb_spi_regs_core_start_field start_field
 * @brief macros for field start
 * @details FSM needs to see low to high transition to start; not auto cleared
 * @{
 */
#define SPI_TRANSACTION_SETUP__START__SHIFT                                   0
#define SPI_TRANSACTION_SETUP__START__WIDTH                                   1
#define SPI_TRANSACTION_SETUP__START__MASK                          0x00000001U
#define SPI_TRANSACTION_SETUP__START__READ(src) ((uint32_t)(src) & 0x00000001U)
#define SPI_TRANSACTION_SETUP__START__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SPI_TRANSACTION_SETUP__START__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define SPI_TRANSACTION_SETUP__START__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define SPI_TRANSACTION_SETUP__START__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define SPI_TRANSACTION_SETUP__START__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define SPI_TRANSACTION_SETUP__START__RESET_VALUE                   0x00000000U
/** @} */

/* macros for field num_data_bytes */
/**
 * @defgroup at_apb_spi_regs_core_num_data_bytes_field num_data_bytes_field
 * @brief macros for field num_data_bytes
 * @details just the data; don't add 1 for opcode
 * @{
 */
#define SPI_TRANSACTION_SETUP__NUM_DATA_BYTES__SHIFT                          1
#define SPI_TRANSACTION_SETUP__NUM_DATA_BYTES__WIDTH                          4
#define SPI_TRANSACTION_SETUP__NUM_DATA_BYTES__MASK                 0x0000001eU
#define SPI_TRANSACTION_SETUP__NUM_DATA_BYTES__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000001eU) >> 1)
#define SPI_TRANSACTION_SETUP__NUM_DATA_BYTES__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x0000001eU)
#define SPI_TRANSACTION_SETUP__NUM_DATA_BYTES__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000001eU) | (((uint32_t)(src) <<\
                    1) & 0x0000001eU)
#define SPI_TRANSACTION_SETUP__NUM_DATA_BYTES__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x0000001eU)))
#define SPI_TRANSACTION_SETUP__NUM_DATA_BYTES__RESET_VALUE          0x00000000U
/** @} */

/* macros for field rwb */
/**
 * @defgroup at_apb_spi_regs_core_rwb_field rwb_field
 * @brief macros for field rwb
 * @details 1=read 0=write; note it's possibly redundant with opcode
 * @{
 */
#define SPI_TRANSACTION_SETUP__RWB__SHIFT                                     5
#define SPI_TRANSACTION_SETUP__RWB__WIDTH                                     1
#define SPI_TRANSACTION_SETUP__RWB__MASK                            0x00000020U
#define SPI_TRANSACTION_SETUP__RWB__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000020U) >> 5)
#define SPI_TRANSACTION_SETUP__RWB__WRITE(src) \
                    (((uint32_t)(src)\
                    << 5) & 0x00000020U)
#define SPI_TRANSACTION_SETUP__RWB__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | (((uint32_t)(src) <<\
                    5) & 0x00000020U)
#define SPI_TRANSACTION_SETUP__RWB__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 5) & ~0x00000020U)))
#define SPI_TRANSACTION_SETUP__RWB__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | ((uint32_t)(1) << 5)
#define SPI_TRANSACTION_SETUP__RWB__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | ((uint32_t)(0) << 5)
#define SPI_TRANSACTION_SETUP__RWB__RESET_VALUE                     0x00000000U
/** @} */

/* macros for field clkdiv */
/**
 * @defgroup at_apb_spi_regs_core_clkdiv_field clkdiv_field
 * @brief macros for field clkdiv
 * @details freq_sclk = f_pclk/(2*(clkdiv+1))
 * @{
 */
#define SPI_TRANSACTION_SETUP__CLKDIV__SHIFT                                  6
#define SPI_TRANSACTION_SETUP__CLKDIV__WIDTH                                 10
#define SPI_TRANSACTION_SETUP__CLKDIV__MASK                         0x0000ffc0U
#define SPI_TRANSACTION_SETUP__CLKDIV__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000ffc0U) >> 6)
#define SPI_TRANSACTION_SETUP__CLKDIV__WRITE(src) \
                    (((uint32_t)(src)\
                    << 6) & 0x0000ffc0U)
#define SPI_TRANSACTION_SETUP__CLKDIV__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ffc0U) | (((uint32_t)(src) <<\
                    6) & 0x0000ffc0U)
#define SPI_TRANSACTION_SETUP__CLKDIV__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 6) & ~0x0000ffc0U)))
#define SPI_TRANSACTION_SETUP__CLKDIV__RESET_VALUE                  0x00000000U
/** @} */

/* macros for field opcode */
/**
 * @defgroup at_apb_spi_regs_core_opcode_field opcode_field
 * @brief macros for field opcode
 * @details opcode
 * @{
 */
#define SPI_TRANSACTION_SETUP__OPCODE__SHIFT                                 16
#define SPI_TRANSACTION_SETUP__OPCODE__WIDTH                                  8
#define SPI_TRANSACTION_SETUP__OPCODE__MASK                         0x00ff0000U
#define SPI_TRANSACTION_SETUP__OPCODE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00ff0000U) >> 16)
#define SPI_TRANSACTION_SETUP__OPCODE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00ff0000U)
#define SPI_TRANSACTION_SETUP__OPCODE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00ff0000U) | (((uint32_t)(src) <<\
                    16) & 0x00ff0000U)
#define SPI_TRANSACTION_SETUP__OPCODE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00ff0000U)))
#define SPI_TRANSACTION_SETUP__OPCODE__RESET_VALUE                  0x00000000U
/** @} */

/* macros for field loopback */
/**
 * @defgroup at_apb_spi_regs_core_loopback_field loopback_field
 * @brief macros for field loopback
 * @details if 1, mosi is internally connected to miso
 * @{
 */
#define SPI_TRANSACTION_SETUP__LOOPBACK__SHIFT                               24
#define SPI_TRANSACTION_SETUP__LOOPBACK__WIDTH                                1
#define SPI_TRANSACTION_SETUP__LOOPBACK__MASK                       0x01000000U
#define SPI_TRANSACTION_SETUP__LOOPBACK__READ(src) \
                    (((uint32_t)(src)\
                    & 0x01000000U) >> 24)
#define SPI_TRANSACTION_SETUP__LOOPBACK__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0x01000000U)
#define SPI_TRANSACTION_SETUP__LOOPBACK__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | (((uint32_t)(src) <<\
                    24) & 0x01000000U)
#define SPI_TRANSACTION_SETUP__LOOPBACK__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x01000000U)))
#define SPI_TRANSACTION_SETUP__LOOPBACK__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(1) << 24)
#define SPI_TRANSACTION_SETUP__LOOPBACK__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(0) << 24)
#define SPI_TRANSACTION_SETUP__LOOPBACK__RESET_VALUE                0x00000000U
/** @} */

/* macros for field csn_stays_low */
/**
 * @defgroup at_apb_spi_regs_core_csn_stays_low_field csn_stays_low_field
 * @brief macros for field csn_stays_low
 * @details at end of transaction, leave csn low
 * @{
 */
#define SPI_TRANSACTION_SETUP__CSN_STAYS_LOW__SHIFT                          25
#define SPI_TRANSACTION_SETUP__CSN_STAYS_LOW__WIDTH                           1
#define SPI_TRANSACTION_SETUP__CSN_STAYS_LOW__MASK                  0x02000000U
#define SPI_TRANSACTION_SETUP__CSN_STAYS_LOW__READ(src) \
                    (((uint32_t)(src)\
                    & 0x02000000U) >> 25)
#define SPI_TRANSACTION_SETUP__CSN_STAYS_LOW__WRITE(src) \
                    (((uint32_t)(src)\
                    << 25) & 0x02000000U)
#define SPI_TRANSACTION_SETUP__CSN_STAYS_LOW__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x02000000U) | (((uint32_t)(src) <<\
                    25) & 0x02000000U)
#define SPI_TRANSACTION_SETUP__CSN_STAYS_LOW__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 25) & ~0x02000000U)))
#define SPI_TRANSACTION_SETUP__CSN_STAYS_LOW__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x02000000U) | ((uint32_t)(1) << 25)
#define SPI_TRANSACTION_SETUP__CSN_STAYS_LOW__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x02000000U) | ((uint32_t)(0) << 25)
#define SPI_TRANSACTION_SETUP__CSN_STAYS_LOW__RESET_VALUE           0x00000000U
/** @} */

/* macros for field dummy_cycles */
/**
 * @defgroup at_apb_spi_regs_core_dummy_cycles_field dummy_cycles_field
 * @brief macros for field dummy_cycles
 * @details number of extra shift cycles to help with turn-around
 * @{
 */
#define SPI_TRANSACTION_SETUP__DUMMY_CYCLES__SHIFT                           26
#define SPI_TRANSACTION_SETUP__DUMMY_CYCLES__WIDTH                            4
#define SPI_TRANSACTION_SETUP__DUMMY_CYCLES__MASK                   0x3c000000U
#define SPI_TRANSACTION_SETUP__DUMMY_CYCLES__READ(src) \
                    (((uint32_t)(src)\
                    & 0x3c000000U) >> 26)
#define SPI_TRANSACTION_SETUP__DUMMY_CYCLES__WRITE(src) \
                    (((uint32_t)(src)\
                    << 26) & 0x3c000000U)
#define SPI_TRANSACTION_SETUP__DUMMY_CYCLES__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x3c000000U) | (((uint32_t)(src) <<\
                    26) & 0x3c000000U)
#define SPI_TRANSACTION_SETUP__DUMMY_CYCLES__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 26) & ~0x3c000000U)))
#define SPI_TRANSACTION_SETUP__DUMMY_CYCLES__RESET_VALUE            0x00000000U
/** @} */
#define SPI_TRANSACTION_SETUP__TYPE                                    uint32_t
#define SPI_TRANSACTION_SETUP__READ                                 0x3fffffffU
#define SPI_TRANSACTION_SETUP__WRITE                                0x3fffffffU
#define SPI_TRANSACTION_SETUP__PRESERVED                            0x00000000U
#define SPI_TRANSACTION_SETUP__RESET_VALUE                          0x00000000U

#endif /* __SPI_TRANSACTION_SETUP_MACRO__ */

/** @} end of transaction_setup */

/* macros for BlueprintGlobalNameSpace::SPI_transaction_status */
/**
 * @defgroup at_apb_spi_regs_core_transaction_status transaction_status
 * @brief transaction status definitions.
 * @{
 */
#ifndef __SPI_TRANSACTION_STATUS_MACRO__
#define __SPI_TRANSACTION_STATUS_MACRO__

/* macros for field done */
/**
 * @defgroup at_apb_spi_regs_core_done_field done_field
 * @brief macros for field done
 * @details transaction is done
 * @{
 */
#define SPI_TRANSACTION_STATUS__DONE__SHIFT                                   0
#define SPI_TRANSACTION_STATUS__DONE__WIDTH                                   1
#define SPI_TRANSACTION_STATUS__DONE__MASK                          0x00000001U
#define SPI_TRANSACTION_STATUS__DONE__READ(src) ((uint32_t)(src) & 0x00000001U)
#define SPI_TRANSACTION_STATUS__DONE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define SPI_TRANSACTION_STATUS__DONE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define SPI_TRANSACTION_STATUS__DONE__RESET_VALUE                   0x00000000U
/** @} */

/* macros for field running */
/**
 * @defgroup at_apb_spi_regs_core_running_field running_field
 * @brief macros for field running
 * @details transaction is running
 * @{
 */
#define SPI_TRANSACTION_STATUS__RUNNING__SHIFT                                1
#define SPI_TRANSACTION_STATUS__RUNNING__WIDTH                                1
#define SPI_TRANSACTION_STATUS__RUNNING__MASK                       0x00000002U
#define SPI_TRANSACTION_STATUS__RUNNING__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define SPI_TRANSACTION_STATUS__RUNNING__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define SPI_TRANSACTION_STATUS__RUNNING__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define SPI_TRANSACTION_STATUS__RUNNING__RESET_VALUE                0x00000000U
/** @} */

/* macros for field opcode_status */
/**
 * @defgroup at_apb_spi_regs_core_opcode_status_field opcode_status_field
 * @brief macros for field opcode_status
 * @details opcode status
 * @{
 */
#define SPI_TRANSACTION_STATUS__OPCODE_STATUS__SHIFT                          8
#define SPI_TRANSACTION_STATUS__OPCODE_STATUS__WIDTH                          8
#define SPI_TRANSACTION_STATUS__OPCODE_STATUS__MASK                 0x0000ff00U
#define SPI_TRANSACTION_STATUS__OPCODE_STATUS__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000ff00U) >> 8)
#define SPI_TRANSACTION_STATUS__OPCODE_STATUS__RESET_VALUE          0x00000000U
/** @} */
#define SPI_TRANSACTION_STATUS__TYPE                                   uint32_t
#define SPI_TRANSACTION_STATUS__READ                                0x0000ff03U
#define SPI_TRANSACTION_STATUS__PRESERVED                           0x00000000U
#define SPI_TRANSACTION_STATUS__RESET_VALUE                         0x00000000U

#endif /* __SPI_TRANSACTION_STATUS_MACRO__ */

/** @} end of transaction_status */

/* macros for BlueprintGlobalNameSpace::SPI_data_bytes_lower */
/**
 * @defgroup at_apb_spi_regs_core_data_bytes_lower data_bytes_lower
 * @brief preload if write; postread if read; readback data will change if num_data_bytes changes post done definitions.
 * @{
 */
#ifndef __SPI_DATA_BYTES_LOWER_MACRO__
#define __SPI_DATA_BYTES_LOWER_MACRO__

/* macros for field byte0 */
/**
 * @defgroup at_apb_spi_regs_core_byte0_field byte0_field
 * @brief macros for field byte0
 * @details data byte0
 * @{
 */
#define SPI_DATA_BYTES_LOWER__BYTE0__SHIFT                                    0
#define SPI_DATA_BYTES_LOWER__BYTE0__WIDTH                                    8
#define SPI_DATA_BYTES_LOWER__BYTE0__MASK                           0x000000ffU
#define SPI_DATA_BYTES_LOWER__BYTE0__READ(src)  ((uint32_t)(src) & 0x000000ffU)
#define SPI_DATA_BYTES_LOWER__BYTE0__WRITE(src) ((uint32_t)(src) & 0x000000ffU)
#define SPI_DATA_BYTES_LOWER__BYTE0__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define SPI_DATA_BYTES_LOWER__BYTE0__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000000ffU)))
#define SPI_DATA_BYTES_LOWER__BYTE0__RESET_VALUE                    0x00000000U
/** @} */

/* macros for field byte1 */
/**
 * @defgroup at_apb_spi_regs_core_byte1_field byte1_field
 * @brief macros for field byte1
 * @details data byte1
 * @{
 */
#define SPI_DATA_BYTES_LOWER__BYTE1__SHIFT                                    8
#define SPI_DATA_BYTES_LOWER__BYTE1__WIDTH                                    8
#define SPI_DATA_BYTES_LOWER__BYTE1__MASK                           0x0000ff00U
#define SPI_DATA_BYTES_LOWER__BYTE1__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000ff00U) >> 8)
#define SPI_DATA_BYTES_LOWER__BYTE1__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x0000ff00U)
#define SPI_DATA_BYTES_LOWER__BYTE1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ff00U) | (((uint32_t)(src) <<\
                    8) & 0x0000ff00U)
#define SPI_DATA_BYTES_LOWER__BYTE1__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x0000ff00U)))
#define SPI_DATA_BYTES_LOWER__BYTE1__RESET_VALUE                    0x00000000U
/** @} */

/* macros for field byte2 */
/**
 * @defgroup at_apb_spi_regs_core_byte2_field byte2_field
 * @brief macros for field byte2
 * @details data byte2
 * @{
 */
#define SPI_DATA_BYTES_LOWER__BYTE2__SHIFT                                   16
#define SPI_DATA_BYTES_LOWER__BYTE2__WIDTH                                    8
#define SPI_DATA_BYTES_LOWER__BYTE2__MASK                           0x00ff0000U
#define SPI_DATA_BYTES_LOWER__BYTE2__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00ff0000U) >> 16)
#define SPI_DATA_BYTES_LOWER__BYTE2__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00ff0000U)
#define SPI_DATA_BYTES_LOWER__BYTE2__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00ff0000U) | (((uint32_t)(src) <<\
                    16) & 0x00ff0000U)
#define SPI_DATA_BYTES_LOWER__BYTE2__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00ff0000U)))
#define SPI_DATA_BYTES_LOWER__BYTE2__RESET_VALUE                    0x00000000U
/** @} */

/* macros for field byte3 */
/**
 * @defgroup at_apb_spi_regs_core_byte3_field byte3_field
 * @brief macros for field byte3
 * @details data byte3
 * @{
 */
#define SPI_DATA_BYTES_LOWER__BYTE3__SHIFT                                   24
#define SPI_DATA_BYTES_LOWER__BYTE3__WIDTH                                    8
#define SPI_DATA_BYTES_LOWER__BYTE3__MASK                           0xff000000U
#define SPI_DATA_BYTES_LOWER__BYTE3__READ(src) \
                    (((uint32_t)(src)\
                    & 0xff000000U) >> 24)
#define SPI_DATA_BYTES_LOWER__BYTE3__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0xff000000U)
#define SPI_DATA_BYTES_LOWER__BYTE3__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xff000000U) | (((uint32_t)(src) <<\
                    24) & 0xff000000U)
#define SPI_DATA_BYTES_LOWER__BYTE3__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0xff000000U)))
#define SPI_DATA_BYTES_LOWER__BYTE3__RESET_VALUE                    0x00000000U
/** @} */
#define SPI_DATA_BYTES_LOWER__TYPE                                     uint32_t
#define SPI_DATA_BYTES_LOWER__READ                                  0xffffffffU
#define SPI_DATA_BYTES_LOWER__WRITE                                 0xffffffffU
#define SPI_DATA_BYTES_LOWER__PRESERVED                             0x00000000U
#define SPI_DATA_BYTES_LOWER__RESET_VALUE                           0x00000000U

#endif /* __SPI_DATA_BYTES_LOWER_MACRO__ */

/** @} end of data_bytes_lower */

/* macros for BlueprintGlobalNameSpace::SPI_data_bytes_upper */
/**
 * @defgroup at_apb_spi_regs_core_data_bytes_upper data_bytes_upper
 * @brief preload if write; postread if read; readback data will change if num_data_bytes changes post done definitions.
 * @{
 */
#ifndef __SPI_DATA_BYTES_UPPER_MACRO__
#define __SPI_DATA_BYTES_UPPER_MACRO__

/* macros for field byte4 */
/**
 * @defgroup at_apb_spi_regs_core_byte4_field byte4_field
 * @brief macros for field byte4
 * @details data byte4
 * @{
 */
#define SPI_DATA_BYTES_UPPER__BYTE4__SHIFT                                    0
#define SPI_DATA_BYTES_UPPER__BYTE4__WIDTH                                    8
#define SPI_DATA_BYTES_UPPER__BYTE4__MASK                           0x000000ffU
#define SPI_DATA_BYTES_UPPER__BYTE4__READ(src)  ((uint32_t)(src) & 0x000000ffU)
#define SPI_DATA_BYTES_UPPER__BYTE4__WRITE(src) ((uint32_t)(src) & 0x000000ffU)
#define SPI_DATA_BYTES_UPPER__BYTE4__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define SPI_DATA_BYTES_UPPER__BYTE4__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000000ffU)))
#define SPI_DATA_BYTES_UPPER__BYTE4__RESET_VALUE                    0x00000000U
/** @} */

/* macros for field byte5 */
/**
 * @defgroup at_apb_spi_regs_core_byte5_field byte5_field
 * @brief macros for field byte5
 * @details data byte5
 * @{
 */
#define SPI_DATA_BYTES_UPPER__BYTE5__SHIFT                                    8
#define SPI_DATA_BYTES_UPPER__BYTE5__WIDTH                                    8
#define SPI_DATA_BYTES_UPPER__BYTE5__MASK                           0x0000ff00U
#define SPI_DATA_BYTES_UPPER__BYTE5__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000ff00U) >> 8)
#define SPI_DATA_BYTES_UPPER__BYTE5__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x0000ff00U)
#define SPI_DATA_BYTES_UPPER__BYTE5__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ff00U) | (((uint32_t)(src) <<\
                    8) & 0x0000ff00U)
#define SPI_DATA_BYTES_UPPER__BYTE5__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x0000ff00U)))
#define SPI_DATA_BYTES_UPPER__BYTE5__RESET_VALUE                    0x00000000U
/** @} */

/* macros for field byte6 */
/**
 * @defgroup at_apb_spi_regs_core_byte6_field byte6_field
 * @brief macros for field byte6
 * @details data byte6
 * @{
 */
#define SPI_DATA_BYTES_UPPER__BYTE6__SHIFT                                   16
#define SPI_DATA_BYTES_UPPER__BYTE6__WIDTH                                    8
#define SPI_DATA_BYTES_UPPER__BYTE6__MASK                           0x00ff0000U
#define SPI_DATA_BYTES_UPPER__BYTE6__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00ff0000U) >> 16)
#define SPI_DATA_BYTES_UPPER__BYTE6__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00ff0000U)
#define SPI_DATA_BYTES_UPPER__BYTE6__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00ff0000U) | (((uint32_t)(src) <<\
                    16) & 0x00ff0000U)
#define SPI_DATA_BYTES_UPPER__BYTE6__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00ff0000U)))
#define SPI_DATA_BYTES_UPPER__BYTE6__RESET_VALUE                    0x00000000U
/** @} */

/* macros for field byte7 */
/**
 * @defgroup at_apb_spi_regs_core_byte7_field byte7_field
 * @brief macros for field byte7
 * @details data byte7
 * @{
 */
#define SPI_DATA_BYTES_UPPER__BYTE7__SHIFT                                   24
#define SPI_DATA_BYTES_UPPER__BYTE7__WIDTH                                    8
#define SPI_DATA_BYTES_UPPER__BYTE7__MASK                           0xff000000U
#define SPI_DATA_BYTES_UPPER__BYTE7__READ(src) \
                    (((uint32_t)(src)\
                    & 0xff000000U) >> 24)
#define SPI_DATA_BYTES_UPPER__BYTE7__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0xff000000U)
#define SPI_DATA_BYTES_UPPER__BYTE7__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xff000000U) | (((uint32_t)(src) <<\
                    24) & 0xff000000U)
#define SPI_DATA_BYTES_UPPER__BYTE7__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0xff000000U)))
#define SPI_DATA_BYTES_UPPER__BYTE7__RESET_VALUE                    0x00000000U
/** @} */
#define SPI_DATA_BYTES_UPPER__TYPE                                     uint32_t
#define SPI_DATA_BYTES_UPPER__READ                                  0xffffffffU
#define SPI_DATA_BYTES_UPPER__WRITE                                 0xffffffffU
#define SPI_DATA_BYTES_UPPER__PRESERVED                             0x00000000U
#define SPI_DATA_BYTES_UPPER__RESET_VALUE                           0x00000000U

#endif /* __SPI_DATA_BYTES_UPPER_MACRO__ */

/** @} end of data_bytes_upper */

/* macros for BlueprintGlobalNameSpace::SPI_interrupt_mask */
/**
 * @defgroup at_apb_spi_regs_core_interrupt_mask interrupt_mask
 * @brief interrupt mask definitions.
 * @{
 */
#ifndef __SPI_INTERRUPT_MASK_MACRO__
#define __SPI_INTERRUPT_MASK_MACRO__

/* macros for field passthru0 */
/**
 * @defgroup at_apb_spi_regs_core_passthru0_field passthru0_field
 * @brief macros for field passthru0
 * @details 1=allow interrupt0 to be OR'ed into core interrupt
 * @{
 */
#define SPI_INTERRUPT_MASK__PASSTHRU0__SHIFT                                  0
#define SPI_INTERRUPT_MASK__PASSTHRU0__WIDTH                                  1
#define SPI_INTERRUPT_MASK__PASSTHRU0__MASK                         0x00000001U
#define SPI_INTERRUPT_MASK__PASSTHRU0__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SPI_INTERRUPT_MASK__PASSTHRU0__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SPI_INTERRUPT_MASK__PASSTHRU0__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define SPI_INTERRUPT_MASK__PASSTHRU0__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define SPI_INTERRUPT_MASK__PASSTHRU0__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define SPI_INTERRUPT_MASK__PASSTHRU0__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define SPI_INTERRUPT_MASK__PASSTHRU0__RESET_VALUE                  0x00000000U
/** @} */
#define SPI_INTERRUPT_MASK__TYPE                                       uint32_t
#define SPI_INTERRUPT_MASK__READ                                    0x00000001U
#define SPI_INTERRUPT_MASK__WRITE                                   0x00000001U
#define SPI_INTERRUPT_MASK__PRESERVED                               0x00000000U
#define SPI_INTERRUPT_MASK__RESET_VALUE                             0x00000000U

#endif /* __SPI_INTERRUPT_MASK_MACRO__ */

/** @} end of interrupt_mask */

/* macros for BlueprintGlobalNameSpace::SPI_interrupt_status */
/**
 * @defgroup at_apb_spi_regs_core_interrupt_status interrupt_status
 * @brief interrupt status definitions.
 * @{
 */
#ifndef __SPI_INTERRUPT_STATUS_MACRO__
#define __SPI_INTERRUPT_STATUS_MACRO__

/* macros for field interrupt0 */
/**
 * @defgroup at_apb_spi_regs_core_interrupt0_field interrupt0_field
 * @brief macros for field interrupt0
 * @details saw a rising edge on done; independent of mask
 * @{
 */
#define SPI_INTERRUPT_STATUS__INTERRUPT0__SHIFT                               0
#define SPI_INTERRUPT_STATUS__INTERRUPT0__WIDTH                               1
#define SPI_INTERRUPT_STATUS__INTERRUPT0__MASK                      0x00000001U
#define SPI_INTERRUPT_STATUS__INTERRUPT0__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SPI_INTERRUPT_STATUS__INTERRUPT0__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define SPI_INTERRUPT_STATUS__INTERRUPT0__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define SPI_INTERRUPT_STATUS__INTERRUPT0__RESET_VALUE               0x00000000U
/** @} */
#define SPI_INTERRUPT_STATUS__TYPE                                     uint32_t
#define SPI_INTERRUPT_STATUS__READ                                  0x00000001U
#define SPI_INTERRUPT_STATUS__PRESERVED                             0x00000000U
#define SPI_INTERRUPT_STATUS__RESET_VALUE                           0x00000000U

#endif /* __SPI_INTERRUPT_STATUS_MACRO__ */

/** @} end of interrupt_status */

/* macros for BlueprintGlobalNameSpace::SPI_set_interrupt */
/**
 * @defgroup at_apb_spi_regs_core_set_interrupt set_interrupt
 * @brief interrupt set definitions.
 * @{
 */
#ifndef __SPI_SET_INTERRUPT_MACRO__
#define __SPI_SET_INTERRUPT_MACRO__

/* macros for field set_interrupt0 */
/**
 * @defgroup at_apb_spi_regs_core_set_interrupt0_field set_interrupt0_field
 * @brief macros for field set_interrupt0
 * @details set interrupt0; not auto cleared
 * @{
 */
#define SPI_SET_INTERRUPT__SET_INTERRUPT0__SHIFT                              0
#define SPI_SET_INTERRUPT__SET_INTERRUPT0__WIDTH                              1
#define SPI_SET_INTERRUPT__SET_INTERRUPT0__MASK                     0x00000001U
#define SPI_SET_INTERRUPT__SET_INTERRUPT0__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SPI_SET_INTERRUPT__SET_INTERRUPT0__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SPI_SET_INTERRUPT__SET_INTERRUPT0__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define SPI_SET_INTERRUPT__SET_INTERRUPT0__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define SPI_SET_INTERRUPT__SET_INTERRUPT0__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define SPI_SET_INTERRUPT__SET_INTERRUPT0__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define SPI_SET_INTERRUPT__SET_INTERRUPT0__RESET_VALUE              0x00000000U
/** @} */
#define SPI_SET_INTERRUPT__TYPE                                        uint32_t
#define SPI_SET_INTERRUPT__READ                                     0x00000001U
#define SPI_SET_INTERRUPT__WRITE                                    0x00000001U
#define SPI_SET_INTERRUPT__PRESERVED                                0x00000000U
#define SPI_SET_INTERRUPT__RESET_VALUE                              0x00000000U

#endif /* __SPI_SET_INTERRUPT_MACRO__ */

/** @} end of set_interrupt */

/* macros for BlueprintGlobalNameSpace::SPI_reset_interrupt */
/**
 * @defgroup at_apb_spi_regs_core_reset_interrupt reset_interrupt
 * @brief interrupt clear definitions.
 * @{
 */
#ifndef __SPI_RESET_INTERRUPT_MACRO__
#define __SPI_RESET_INTERRUPT_MACRO__

/* macros for field reset_interrupt0 */
/**
 * @defgroup at_apb_spi_regs_core_reset_interrupt0_field reset_interrupt0_field
 * @brief macros for field reset_interrupt0
 * @details clear interrupt0; not auto cleared
 * @{
 */
#define SPI_RESET_INTERRUPT__RESET_INTERRUPT0__SHIFT                          0
#define SPI_RESET_INTERRUPT__RESET_INTERRUPT0__WIDTH                          1
#define SPI_RESET_INTERRUPT__RESET_INTERRUPT0__MASK                 0x00000001U
#define SPI_RESET_INTERRUPT__RESET_INTERRUPT0__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SPI_RESET_INTERRUPT__RESET_INTERRUPT0__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SPI_RESET_INTERRUPT__RESET_INTERRUPT0__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define SPI_RESET_INTERRUPT__RESET_INTERRUPT0__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define SPI_RESET_INTERRUPT__RESET_INTERRUPT0__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define SPI_RESET_INTERRUPT__RESET_INTERRUPT0__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define SPI_RESET_INTERRUPT__RESET_INTERRUPT0__RESET_VALUE          0x00000000U
/** @} */
#define SPI_RESET_INTERRUPT__TYPE                                      uint32_t
#define SPI_RESET_INTERRUPT__READ                                   0x00000001U
#define SPI_RESET_INTERRUPT__WRITE                                  0x00000001U
#define SPI_RESET_INTERRUPT__PRESERVED                              0x00000000U
#define SPI_RESET_INTERRUPT__RESET_VALUE                            0x00000000U

#endif /* __SPI_RESET_INTERRUPT_MACRO__ */

/** @} end of reset_interrupt */

/* macros for BlueprintGlobalNameSpace::SPI_core_id */
/**
 * @defgroup at_apb_spi_regs_core_core_id core_id
 * @brief core ID definitions.
 * @{
 */
#ifndef __SPI_CORE_ID_MACRO__
#define __SPI_CORE_ID_MACRO__

/* macros for field id */
/**
 * @defgroup at_apb_spi_regs_core_id_field id_field
 * @brief macros for field id
 * @details SPI in ASCII
 * @{
 */
#define SPI_CORE_ID__ID__SHIFT                                                0
#define SPI_CORE_ID__ID__WIDTH                                               32
#define SPI_CORE_ID__ID__MASK                                       0xffffffffU
#define SPI_CORE_ID__ID__READ(src)              ((uint32_t)(src) & 0xffffffffU)
#define SPI_CORE_ID__ID__RESET_VALUE                                0x53504920U
/** @} */
#define SPI_CORE_ID__TYPE                                              uint32_t
#define SPI_CORE_ID__READ                                           0xffffffffU
#define SPI_CORE_ID__PRESERVED                                      0x00000000U
#define SPI_CORE_ID__RESET_VALUE                                    0x53504920U

#endif /* __SPI_CORE_ID_MACRO__ */

/** @} end of core_id */

/** @} end of AT_APB_SPI_REGS_CORE */
#endif /* __REG_AT_APB_SPI_REGS_CORE_H__ */
