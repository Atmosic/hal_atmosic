/*                                                                           */
/* File:       at_apb_shub_regs_core_macro.h                                 */
/*                                                                           */
/* Arguments:  /cad/tools/cadence/blueprint_3.7.5/Linux-64bit/blueprint -eval*/
/*             $DEFINE_PROPERTY=1; -ansic at_apb_shub_regs_core.rdl          */
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


#ifndef __REG_AT_APB_SHUB_REGS_CORE_H__
#define __REG_AT_APB_SHUB_REGS_CORE_H__

/**
 *****************************************************************************
 * @defgroup AT_APB_SHUB_REGS_CORE at_apb_shub_regs_core
 * @ingroup AT_REG
 * @brief at_apb_shub_regs_core definitions.
 * @{
 *****************************************************************************
 */

/* macros for BlueprintGlobalNameSpace::SHUB_setup0 */
/**
 * @defgroup at_apb_shub_regs_core_setup0 setup0
 * @brief trigger control used for block-level testing definitions.
 * @{
 */
#ifndef __SHUB_SETUP0_MACRO__
#define __SHUB_SETUP0_MACRO__

/* macros for field go */
/**
 * @defgroup at_apb_shub_regs_core_go_field go_field
 * @brief macros for field go
 * @details not self reseting; for software manual use.
 * @{
 */
#define SHUB_SETUP0__GO__SHIFT                                                0
#define SHUB_SETUP0__GO__WIDTH                                                1
#define SHUB_SETUP0__GO__MASK                                       0x00000001U
#define SHUB_SETUP0__GO__READ(src)              ((uint32_t)(src) & 0x00000001U)
#define SHUB_SETUP0__GO__WRITE(src)             ((uint32_t)(src) & 0x00000001U)
#define SHUB_SETUP0__GO__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define SHUB_SETUP0__GO__VERIFY(src)      (!(((uint32_t)(src) & ~0x00000001U)))
#define SHUB_SETUP0__GO__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define SHUB_SETUP0__GO__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define SHUB_SETUP0__GO__RESET_VALUE                                0x00000000U
/** @} */

/* macros for field breakout */
/**
 * @defgroup at_apb_shub_regs_core_breakout_field breakout_field
 * @brief macros for field breakout
 * @details useful for testing.
 * @{
 */
#define SHUB_SETUP0__BREAKOUT__SHIFT                                          1
#define SHUB_SETUP0__BREAKOUT__WIDTH                                          1
#define SHUB_SETUP0__BREAKOUT__MASK                                 0x00000002U
#define SHUB_SETUP0__BREAKOUT__READ(src) (((uint32_t)(src) & 0x00000002U) >> 1)
#define SHUB_SETUP0__BREAKOUT__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define SHUB_SETUP0__BREAKOUT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define SHUB_SETUP0__BREAKOUT__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define SHUB_SETUP0__BREAKOUT__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define SHUB_SETUP0__BREAKOUT__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define SHUB_SETUP0__BREAKOUT__RESET_VALUE                          0x00000000U
/** @} */
#define SHUB_SETUP0__TYPE                                              uint32_t
#define SHUB_SETUP0__READ                                           0x00000003U
#define SHUB_SETUP0__WRITE                                          0x00000003U
#define SHUB_SETUP0__PRESERVED                                      0x00000000U
#define SHUB_SETUP0__RESET_VALUE                                    0x00000000U

#endif /* __SHUB_SETUP0_MACRO__ */

/** @} end of setup0 */

/* macros for BlueprintGlobalNameSpace::SHUB_setup1 */
/**
 * @defgroup at_apb_shub_regs_core_setup1 setup1
 * @brief loop time setup determines the duration of one read/write cycle. In each cycle, the sensor hub read from one sensor connected to port0 and port1 and write to flash. definitions.
 * @{
 */
#ifndef __SHUB_SETUP1_MACRO__
#define __SHUB_SETUP1_MACRO__

/* macros for field loop_time */
/**
 * @defgroup at_apb_shub_regs_core_loop_time_field loop_time_field
 * @brief macros for field loop_time
 * @details how long should each iteration (sensor read and flash write) be ? (800 = wr_delay*2 + 16bytes read + overhead). The multiplier of 2 is needed beause when there are mulitple data bytes straddling the page boundary, the shub issues the page program twice. The first one sends all bytes up to the at the page boundary, and the second sends the rest of the data bytes.
 * @{
 */
#define SHUB_SETUP1__LOOP_TIME__SHIFT                                         0
#define SHUB_SETUP1__LOOP_TIME__WIDTH                                        32
#define SHUB_SETUP1__LOOP_TIME__MASK                                0xffffffffU
#define SHUB_SETUP1__LOOP_TIME__READ(src)       ((uint32_t)(src) & 0xffffffffU)
#define SHUB_SETUP1__LOOP_TIME__WRITE(src)      ((uint32_t)(src) & 0xffffffffU)
#define SHUB_SETUP1__LOOP_TIME__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffffffffU) | ((uint32_t)(src) &\
                    0xffffffffU)
#define SHUB_SETUP1__LOOP_TIME__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0xffffffffU)))
#define SHUB_SETUP1__LOOP_TIME__RESET_VALUE                         0x00003fffU
/** @} */
#define SHUB_SETUP1__TYPE                                              uint32_t
#define SHUB_SETUP1__READ                                           0xffffffffU
#define SHUB_SETUP1__WRITE                                          0xffffffffU
#define SHUB_SETUP1__PRESERVED                                      0xffffffffU
#define SHUB_SETUP1__RESET_VALUE                                    0x00003fffU

#endif /* __SHUB_SETUP1_MACRO__ */

/** @} end of setup1 */

/* macros for BlueprintGlobalNameSpace::SHUB_port0_setup */
/**
 * @defgroup at_apb_shub_regs_core_port0_setup port0_setup
 * @brief configuration bits for Port 0 definitions.
 * @{
 */
#ifndef __SHUB_PORT0_SETUP_MACRO__
#define __SHUB_PORT0_SETUP_MACRO__

/* macros for field port_en */
/**
 * @defgroup at_apb_shub_regs_core_port_en_field port_en_field
 * @brief macros for field port_en
 * @details enable port0
 * @{
 */
#define SHUB_PORT0_SETUP__PORT_EN__SHIFT                                      0
#define SHUB_PORT0_SETUP__PORT_EN__WIDTH                                      1
#define SHUB_PORT0_SETUP__PORT_EN__MASK                             0x00000001U
#define SHUB_PORT0_SETUP__PORT_EN__READ(src)    ((uint32_t)(src) & 0x00000001U)
#define SHUB_PORT0_SETUP__PORT_EN__WRITE(src)   ((uint32_t)(src) & 0x00000001U)
#define SHUB_PORT0_SETUP__PORT_EN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define SHUB_PORT0_SETUP__PORT_EN__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define SHUB_PORT0_SETUP__PORT_EN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define SHUB_PORT0_SETUP__PORT_EN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define SHUB_PORT0_SETUP__PORT_EN__RESET_VALUE                      0x00000000U
/** @} */

/* macros for field spi_n_i2c */
/**
 * @defgroup at_apb_shub_regs_core_spi_n_i2c_field spi_n_i2c_field
 * @brief macros for field spi_n_i2c
 * @details 1= use spi for port0, 0= use i2c
 * @{
 */
#define SHUB_PORT0_SETUP__SPI_N_I2C__SHIFT                                    1
#define SHUB_PORT0_SETUP__SPI_N_I2C__WIDTH                                    1
#define SHUB_PORT0_SETUP__SPI_N_I2C__MASK                           0x00000002U
#define SHUB_PORT0_SETUP__SPI_N_I2C__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define SHUB_PORT0_SETUP__SPI_N_I2C__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define SHUB_PORT0_SETUP__SPI_N_I2C__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define SHUB_PORT0_SETUP__SPI_N_I2C__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define SHUB_PORT0_SETUP__SPI_N_I2C__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define SHUB_PORT0_SETUP__SPI_N_I2C__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define SHUB_PORT0_SETUP__SPI_N_I2C__RESET_VALUE                    0x00000000U
/** @} */

/* macros for field num_sensors */
/**
 * @defgroup at_apb_shub_regs_core_num_sensors_field num_sensors_field
 * @brief macros for field num_sensors
 * @details number of sensors connected to port = num_sensors + 1
 * @{
 */
#define SHUB_PORT0_SETUP__NUM_SENSORS__SHIFT                                  4
#define SHUB_PORT0_SETUP__NUM_SENSORS__WIDTH                                  3
#define SHUB_PORT0_SETUP__NUM_SENSORS__MASK                         0x00000070U
#define SHUB_PORT0_SETUP__NUM_SENSORS__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000070U) >> 4)
#define SHUB_PORT0_SETUP__NUM_SENSORS__WRITE(src) \
                    (((uint32_t)(src)\
                    << 4) & 0x00000070U)
#define SHUB_PORT0_SETUP__NUM_SENSORS__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000070U) | (((uint32_t)(src) <<\
                    4) & 0x00000070U)
#define SHUB_PORT0_SETUP__NUM_SENSORS__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 4) & ~0x00000070U)))
#define SHUB_PORT0_SETUP__NUM_SENSORS__RESET_VALUE                  0x00000000U
/** @} */

/* macros for field trig_en */
/**
 * @defgroup at_apb_shub_regs_core_trig_en_field trig_en_field
 * @brief macros for field trig_en
 * @details 1= enable threshold comparison with measurement results.
 * @{
 */
#define SHUB_PORT0_SETUP__TRIG_EN__SHIFT                                     11
#define SHUB_PORT0_SETUP__TRIG_EN__WIDTH                                      1
#define SHUB_PORT0_SETUP__TRIG_EN__MASK                             0x00000800U
#define SHUB_PORT0_SETUP__TRIG_EN__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000800U) >> 11)
#define SHUB_PORT0_SETUP__TRIG_EN__WRITE(src) \
                    (((uint32_t)(src)\
                    << 11) & 0x00000800U)
#define SHUB_PORT0_SETUP__TRIG_EN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000800U) | (((uint32_t)(src) <<\
                    11) & 0x00000800U)
#define SHUB_PORT0_SETUP__TRIG_EN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 11) & ~0x00000800U)))
#define SHUB_PORT0_SETUP__TRIG_EN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000800U) | ((uint32_t)(1) << 11)
#define SHUB_PORT0_SETUP__TRIG_EN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000800U) | ((uint32_t)(0) << 11)
#define SHUB_PORT0_SETUP__TRIG_EN__RESET_VALUE                      0x00000000U
/** @} */
#define SHUB_PORT0_SETUP__TYPE                                         uint32_t
#define SHUB_PORT0_SETUP__READ                                      0x00000873U
#define SHUB_PORT0_SETUP__WRITE                                     0x00000873U
#define SHUB_PORT0_SETUP__PRESERVED                                 0x00000873U
#define SHUB_PORT0_SETUP__RESET_VALUE                               0x00000000U

#endif /* __SHUB_PORT0_SETUP_MACRO__ */

/** @} end of port0_setup */

/* macros for BlueprintGlobalNameSpace::SHUB_port0_sensor0_setup */
/**
 * @defgroup at_apb_shub_regs_core_port0_sensor0_setup port0_sensor0_setup
 * @brief number of bytes to read from this sensor definitions.
 * @{
 */
#ifndef __SHUB_PORT0_SENSOR0_SETUP_MACRO__
#define __SHUB_PORT0_SENSOR0_SETUP_MACRO__

/* macros for field num_bytes */
/**
 * @defgroup at_apb_shub_regs_core_num_bytes_field num_bytes_field
 * @brief macros for field num_bytes
 * @details total number of bytes in sensor data = num_bytes+1
 * @{
 */
#define SHUB_PORT0_SENSOR0_SETUP__NUM_BYTES__SHIFT                            0
#define SHUB_PORT0_SENSOR0_SETUP__NUM_BYTES__WIDTH                            5
#define SHUB_PORT0_SENSOR0_SETUP__NUM_BYTES__MASK                   0x0000001fU
#define SHUB_PORT0_SENSOR0_SETUP__NUM_BYTES__READ(src) \
                    ((uint32_t)(src)\
                    & 0x0000001fU)
#define SHUB_PORT0_SENSOR0_SETUP__NUM_BYTES__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x0000001fU)
#define SHUB_PORT0_SENSOR0_SETUP__NUM_BYTES__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000001fU) | ((uint32_t)(src) &\
                    0x0000001fU)
#define SHUB_PORT0_SENSOR0_SETUP__NUM_BYTES__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x0000001fU)))
#define SHUB_PORT0_SENSOR0_SETUP__NUM_BYTES__RESET_VALUE            0x00000001U
/** @} */
#define SHUB_PORT0_SENSOR0_SETUP__TYPE                                 uint32_t
#define SHUB_PORT0_SENSOR0_SETUP__READ                              0x0000001fU
#define SHUB_PORT0_SENSOR0_SETUP__WRITE                             0x0000001fU
#define SHUB_PORT0_SENSOR0_SETUP__PRESERVED                         0x0000001fU
#define SHUB_PORT0_SENSOR0_SETUP__RESET_VALUE                       0x00000001U

#endif /* __SHUB_PORT0_SENSOR0_SETUP_MACRO__ */

/** @} end of port0_sensor0_setup */

/* macros for BlueprintGlobalNameSpace::SHUB_port0_sensor1_setup */
/**
 * @defgroup at_apb_shub_regs_core_port0_sensor1_setup port0_sensor1_setup
 * @brief number of bytes to read from this sensor definitions.
 * @{
 */
#ifndef __SHUB_PORT0_SENSOR1_SETUP_MACRO__
#define __SHUB_PORT0_SENSOR1_SETUP_MACRO__

/* macros for field num_bytes */
/**
 * @defgroup at_apb_shub_regs_core_num_bytes_field num_bytes_field
 * @brief macros for field num_bytes
 * @details total number of bytes in sensor data = num_bytes+1
 * @{
 */
#define SHUB_PORT0_SENSOR1_SETUP__NUM_BYTES__SHIFT                            0
#define SHUB_PORT0_SENSOR1_SETUP__NUM_BYTES__WIDTH                            5
#define SHUB_PORT0_SENSOR1_SETUP__NUM_BYTES__MASK                   0x0000001fU
#define SHUB_PORT0_SENSOR1_SETUP__NUM_BYTES__READ(src) \
                    ((uint32_t)(src)\
                    & 0x0000001fU)
#define SHUB_PORT0_SENSOR1_SETUP__NUM_BYTES__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x0000001fU)
#define SHUB_PORT0_SENSOR1_SETUP__NUM_BYTES__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000001fU) | ((uint32_t)(src) &\
                    0x0000001fU)
#define SHUB_PORT0_SENSOR1_SETUP__NUM_BYTES__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x0000001fU)))
#define SHUB_PORT0_SENSOR1_SETUP__NUM_BYTES__RESET_VALUE            0x00000001U
/** @} */
#define SHUB_PORT0_SENSOR1_SETUP__TYPE                                 uint32_t
#define SHUB_PORT0_SENSOR1_SETUP__READ                              0x0000001fU
#define SHUB_PORT0_SENSOR1_SETUP__WRITE                             0x0000001fU
#define SHUB_PORT0_SENSOR1_SETUP__PRESERVED                         0x0000001fU
#define SHUB_PORT0_SENSOR1_SETUP__RESET_VALUE                       0x00000001U

#endif /* __SHUB_PORT0_SENSOR1_SETUP_MACRO__ */

/** @} end of port0_sensor1_setup */

/* macros for BlueprintGlobalNameSpace::SHUB_port0_sensor2_setup */
/**
 * @defgroup at_apb_shub_regs_core_port0_sensor2_setup port0_sensor2_setup
 * @brief number of bytes to read from this sensor definitions.
 * @{
 */
#ifndef __SHUB_PORT0_SENSOR2_SETUP_MACRO__
#define __SHUB_PORT0_SENSOR2_SETUP_MACRO__

/* macros for field num_bytes */
/**
 * @defgroup at_apb_shub_regs_core_num_bytes_field num_bytes_field
 * @brief macros for field num_bytes
 * @details total number of bytes in sensor data = num_bytes+1
 * @{
 */
#define SHUB_PORT0_SENSOR2_SETUP__NUM_BYTES__SHIFT                            0
#define SHUB_PORT0_SENSOR2_SETUP__NUM_BYTES__WIDTH                            5
#define SHUB_PORT0_SENSOR2_SETUP__NUM_BYTES__MASK                   0x0000001fU
#define SHUB_PORT0_SENSOR2_SETUP__NUM_BYTES__READ(src) \
                    ((uint32_t)(src)\
                    & 0x0000001fU)
#define SHUB_PORT0_SENSOR2_SETUP__NUM_BYTES__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x0000001fU)
#define SHUB_PORT0_SENSOR2_SETUP__NUM_BYTES__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000001fU) | ((uint32_t)(src) &\
                    0x0000001fU)
#define SHUB_PORT0_SENSOR2_SETUP__NUM_BYTES__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x0000001fU)))
#define SHUB_PORT0_SENSOR2_SETUP__NUM_BYTES__RESET_VALUE            0x00000001U
/** @} */
#define SHUB_PORT0_SENSOR2_SETUP__TYPE                                 uint32_t
#define SHUB_PORT0_SENSOR2_SETUP__READ                              0x0000001fU
#define SHUB_PORT0_SENSOR2_SETUP__WRITE                             0x0000001fU
#define SHUB_PORT0_SENSOR2_SETUP__PRESERVED                         0x0000001fU
#define SHUB_PORT0_SENSOR2_SETUP__RESET_VALUE                       0x00000001U

#endif /* __SHUB_PORT0_SENSOR2_SETUP_MACRO__ */

/** @} end of port0_sensor2_setup */

/* macros for BlueprintGlobalNameSpace::SHUB_port0_sensor3_setup */
/**
 * @defgroup at_apb_shub_regs_core_port0_sensor3_setup port0_sensor3_setup
 * @brief number of bytes to read from this sensor definitions.
 * @{
 */
#ifndef __SHUB_PORT0_SENSOR3_SETUP_MACRO__
#define __SHUB_PORT0_SENSOR3_SETUP_MACRO__

/* macros for field num_bytes */
/**
 * @defgroup at_apb_shub_regs_core_num_bytes_field num_bytes_field
 * @brief macros for field num_bytes
 * @details total number of bytes in sensor data = num_bytes+1
 * @{
 */
#define SHUB_PORT0_SENSOR3_SETUP__NUM_BYTES__SHIFT                            0
#define SHUB_PORT0_SENSOR3_SETUP__NUM_BYTES__WIDTH                            5
#define SHUB_PORT0_SENSOR3_SETUP__NUM_BYTES__MASK                   0x0000001fU
#define SHUB_PORT0_SENSOR3_SETUP__NUM_BYTES__READ(src) \
                    ((uint32_t)(src)\
                    & 0x0000001fU)
#define SHUB_PORT0_SENSOR3_SETUP__NUM_BYTES__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x0000001fU)
#define SHUB_PORT0_SENSOR3_SETUP__NUM_BYTES__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000001fU) | ((uint32_t)(src) &\
                    0x0000001fU)
#define SHUB_PORT0_SENSOR3_SETUP__NUM_BYTES__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x0000001fU)))
#define SHUB_PORT0_SENSOR3_SETUP__NUM_BYTES__RESET_VALUE            0x00000001U
/** @} */
#define SHUB_PORT0_SENSOR3_SETUP__TYPE                                 uint32_t
#define SHUB_PORT0_SENSOR3_SETUP__READ                              0x0000001fU
#define SHUB_PORT0_SENSOR3_SETUP__WRITE                             0x0000001fU
#define SHUB_PORT0_SENSOR3_SETUP__PRESERVED                         0x0000001fU
#define SHUB_PORT0_SENSOR3_SETUP__RESET_VALUE                       0x00000001U

#endif /* __SHUB_PORT0_SENSOR3_SETUP_MACRO__ */

/** @} end of port0_sensor3_setup */

/* macros for BlueprintGlobalNameSpace::SHUB_port0_sensor4_setup */
/**
 * @defgroup at_apb_shub_regs_core_port0_sensor4_setup port0_sensor4_setup
 * @brief number of bytes to read from this sensor definitions.
 * @{
 */
#ifndef __SHUB_PORT0_SENSOR4_SETUP_MACRO__
#define __SHUB_PORT0_SENSOR4_SETUP_MACRO__

/* macros for field num_bytes */
/**
 * @defgroup at_apb_shub_regs_core_num_bytes_field num_bytes_field
 * @brief macros for field num_bytes
 * @details total number of bytes in sensor data = num_bytes+1
 * @{
 */
#define SHUB_PORT0_SENSOR4_SETUP__NUM_BYTES__SHIFT                            0
#define SHUB_PORT0_SENSOR4_SETUP__NUM_BYTES__WIDTH                            5
#define SHUB_PORT0_SENSOR4_SETUP__NUM_BYTES__MASK                   0x0000001fU
#define SHUB_PORT0_SENSOR4_SETUP__NUM_BYTES__READ(src) \
                    ((uint32_t)(src)\
                    & 0x0000001fU)
#define SHUB_PORT0_SENSOR4_SETUP__NUM_BYTES__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x0000001fU)
#define SHUB_PORT0_SENSOR4_SETUP__NUM_BYTES__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000001fU) | ((uint32_t)(src) &\
                    0x0000001fU)
#define SHUB_PORT0_SENSOR4_SETUP__NUM_BYTES__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x0000001fU)))
#define SHUB_PORT0_SENSOR4_SETUP__NUM_BYTES__RESET_VALUE            0x00000001U
/** @} */
#define SHUB_PORT0_SENSOR4_SETUP__TYPE                                 uint32_t
#define SHUB_PORT0_SENSOR4_SETUP__READ                              0x0000001fU
#define SHUB_PORT0_SENSOR4_SETUP__WRITE                             0x0000001fU
#define SHUB_PORT0_SENSOR4_SETUP__PRESERVED                         0x0000001fU
#define SHUB_PORT0_SENSOR4_SETUP__RESET_VALUE                       0x00000001U

#endif /* __SHUB_PORT0_SENSOR4_SETUP_MACRO__ */

/** @} end of port0_sensor4_setup */

/* macros for BlueprintGlobalNameSpace::SHUB_port0_sensor5_setup */
/**
 * @defgroup at_apb_shub_regs_core_port0_sensor5_setup port0_sensor5_setup
 * @brief number of bytes to read from this sensor definitions.
 * @{
 */
#ifndef __SHUB_PORT0_SENSOR5_SETUP_MACRO__
#define __SHUB_PORT0_SENSOR5_SETUP_MACRO__

/* macros for field num_bytes */
/**
 * @defgroup at_apb_shub_regs_core_num_bytes_field num_bytes_field
 * @brief macros for field num_bytes
 * @details total number of bytes in sensor data = num_bytes+1
 * @{
 */
#define SHUB_PORT0_SENSOR5_SETUP__NUM_BYTES__SHIFT                            0
#define SHUB_PORT0_SENSOR5_SETUP__NUM_BYTES__WIDTH                            5
#define SHUB_PORT0_SENSOR5_SETUP__NUM_BYTES__MASK                   0x0000001fU
#define SHUB_PORT0_SENSOR5_SETUP__NUM_BYTES__READ(src) \
                    ((uint32_t)(src)\
                    & 0x0000001fU)
#define SHUB_PORT0_SENSOR5_SETUP__NUM_BYTES__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x0000001fU)
#define SHUB_PORT0_SENSOR5_SETUP__NUM_BYTES__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000001fU) | ((uint32_t)(src) &\
                    0x0000001fU)
#define SHUB_PORT0_SENSOR5_SETUP__NUM_BYTES__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x0000001fU)))
#define SHUB_PORT0_SENSOR5_SETUP__NUM_BYTES__RESET_VALUE            0x00000001U
/** @} */
#define SHUB_PORT0_SENSOR5_SETUP__TYPE                                 uint32_t
#define SHUB_PORT0_SENSOR5_SETUP__READ                              0x0000001fU
#define SHUB_PORT0_SENSOR5_SETUP__WRITE                             0x0000001fU
#define SHUB_PORT0_SENSOR5_SETUP__PRESERVED                         0x0000001fU
#define SHUB_PORT0_SENSOR5_SETUP__RESET_VALUE                       0x00000001U

#endif /* __SHUB_PORT0_SENSOR5_SETUP_MACRO__ */

/** @} end of port0_sensor5_setup */

/* macros for BlueprintGlobalNameSpace::SHUB_port0_sensor6_setup */
/**
 * @defgroup at_apb_shub_regs_core_port0_sensor6_setup port0_sensor6_setup
 * @brief number of bytes to read from this sensor definitions.
 * @{
 */
#ifndef __SHUB_PORT0_SENSOR6_SETUP_MACRO__
#define __SHUB_PORT0_SENSOR6_SETUP_MACRO__

/* macros for field num_bytes */
/**
 * @defgroup at_apb_shub_regs_core_num_bytes_field num_bytes_field
 * @brief macros for field num_bytes
 * @details total number of bytes in sensor data = num_bytes+1
 * @{
 */
#define SHUB_PORT0_SENSOR6_SETUP__NUM_BYTES__SHIFT                            0
#define SHUB_PORT0_SENSOR6_SETUP__NUM_BYTES__WIDTH                            5
#define SHUB_PORT0_SENSOR6_SETUP__NUM_BYTES__MASK                   0x0000001fU
#define SHUB_PORT0_SENSOR6_SETUP__NUM_BYTES__READ(src) \
                    ((uint32_t)(src)\
                    & 0x0000001fU)
#define SHUB_PORT0_SENSOR6_SETUP__NUM_BYTES__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x0000001fU)
#define SHUB_PORT0_SENSOR6_SETUP__NUM_BYTES__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000001fU) | ((uint32_t)(src) &\
                    0x0000001fU)
#define SHUB_PORT0_SENSOR6_SETUP__NUM_BYTES__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x0000001fU)))
#define SHUB_PORT0_SENSOR6_SETUP__NUM_BYTES__RESET_VALUE            0x00000001U
/** @} */
#define SHUB_PORT0_SENSOR6_SETUP__TYPE                                 uint32_t
#define SHUB_PORT0_SENSOR6_SETUP__READ                              0x0000001fU
#define SHUB_PORT0_SENSOR6_SETUP__WRITE                             0x0000001fU
#define SHUB_PORT0_SENSOR6_SETUP__PRESERVED                         0x0000001fU
#define SHUB_PORT0_SENSOR6_SETUP__RESET_VALUE                       0x00000001U

#endif /* __SHUB_PORT0_SENSOR6_SETUP_MACRO__ */

/** @} end of port0_sensor6_setup */

/* macros for BlueprintGlobalNameSpace::SHUB_port0_sensor7_setup */
/**
 * @defgroup at_apb_shub_regs_core_port0_sensor7_setup port0_sensor7_setup
 * @brief number of bytes to read from this sensor definitions.
 * @{
 */
#ifndef __SHUB_PORT0_SENSOR7_SETUP_MACRO__
#define __SHUB_PORT0_SENSOR7_SETUP_MACRO__

/* macros for field num_bytes */
/**
 * @defgroup at_apb_shub_regs_core_num_bytes_field num_bytes_field
 * @brief macros for field num_bytes
 * @details total number of bytes in sensor data = num_bytes+1
 * @{
 */
#define SHUB_PORT0_SENSOR7_SETUP__NUM_BYTES__SHIFT                            0
#define SHUB_PORT0_SENSOR7_SETUP__NUM_BYTES__WIDTH                            5
#define SHUB_PORT0_SENSOR7_SETUP__NUM_BYTES__MASK                   0x0000001fU
#define SHUB_PORT0_SENSOR7_SETUP__NUM_BYTES__READ(src) \
                    ((uint32_t)(src)\
                    & 0x0000001fU)
#define SHUB_PORT0_SENSOR7_SETUP__NUM_BYTES__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x0000001fU)
#define SHUB_PORT0_SENSOR7_SETUP__NUM_BYTES__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000001fU) | ((uint32_t)(src) &\
                    0x0000001fU)
#define SHUB_PORT0_SENSOR7_SETUP__NUM_BYTES__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x0000001fU)))
#define SHUB_PORT0_SENSOR7_SETUP__NUM_BYTES__RESET_VALUE            0x00000001U
/** @} */
#define SHUB_PORT0_SENSOR7_SETUP__TYPE                                 uint32_t
#define SHUB_PORT0_SENSOR7_SETUP__READ                              0x0000001fU
#define SHUB_PORT0_SENSOR7_SETUP__WRITE                             0x0000001fU
#define SHUB_PORT0_SENSOR7_SETUP__PRESERVED                         0x0000001fU
#define SHUB_PORT0_SENSOR7_SETUP__RESET_VALUE                       0x00000001U

#endif /* __SHUB_PORT0_SENSOR7_SETUP_MACRO__ */

/** @} end of port0_sensor7_setup */

/* macros for BlueprintGlobalNameSpace::SHUB_port0_spi_eng0_ctrl */
/**
 * @defgroup at_apb_shub_regs_core_port0_spi_eng0_ctrl port0_spi_eng0_ctrl
 * @brief config register for spi interface definitions.
 * @{
 */
#ifndef __SHUB_PORT0_SPI_ENG0_CTRL_MACRO__
#define __SHUB_PORT0_SPI_ENG0_CTRL_MACRO__

/* macros for field sensor_opcode */
/**
 * @defgroup at_apb_shub_regs_core_sensor_opcode_field sensor_opcode_field
 * @brief macros for field sensor_opcode
 * @details opcode used to communicate with sensor in spi mode
 * @{
 */
#define SHUB_PORT0_SPI_ENG0_CTRL__SENSOR_OPCODE__SHIFT                        0
#define SHUB_PORT0_SPI_ENG0_CTRL__SENSOR_OPCODE__WIDTH                        8
#define SHUB_PORT0_SPI_ENG0_CTRL__SENSOR_OPCODE__MASK               0x000000ffU
#define SHUB_PORT0_SPI_ENG0_CTRL__SENSOR_OPCODE__READ(src) \
                    ((uint32_t)(src)\
                    & 0x000000ffU)
#define SHUB_PORT0_SPI_ENG0_CTRL__SENSOR_OPCODE__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x000000ffU)
#define SHUB_PORT0_SPI_ENG0_CTRL__SENSOR_OPCODE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define SHUB_PORT0_SPI_ENG0_CTRL__SENSOR_OPCODE__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000000ffU)))
#define SHUB_PORT0_SPI_ENG0_CTRL__SENSOR_OPCODE__RESET_VALUE        0x00000000U
/** @} */
#define SHUB_PORT0_SPI_ENG0_CTRL__TYPE                                 uint32_t
#define SHUB_PORT0_SPI_ENG0_CTRL__READ                              0x000000ffU
#define SHUB_PORT0_SPI_ENG0_CTRL__WRITE                             0x000000ffU
#define SHUB_PORT0_SPI_ENG0_CTRL__PRESERVED                         0x000000ffU
#define SHUB_PORT0_SPI_ENG0_CTRL__RESET_VALUE                       0x00000000U

#endif /* __SHUB_PORT0_SPI_ENG0_CTRL_MACRO__ */

/** @} end of port0_spi_eng0_ctrl */

/* macros for BlueprintGlobalNameSpace::SHUB_port0_i2c_idw_0 */
/**
 * @defgroup at_apb_shub_regs_core_port0_i2c_idw_0 port0_i2c_idw_0
 * @brief id(read) of sensor0 on port0 prior to pointer address write definitions.
 * @{
 */
#ifndef __SHUB_PORT0_I2C_IDW_0_MACRO__
#define __SHUB_PORT0_I2C_IDW_0_MACRO__

/* macros for field ext_data_ie_ovrd */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_ie_ovrd_field ext_data_ie_ovrd_field
 * @brief macros for field ext_data_ie_ovrd
 * @details 1 = ie is high  0 = ie is ~oe
 * @{
 */
#define SHUB_PORT0_I2C_IDW_0__EXT_DATA_IE_OVRD__SHIFT                         0
#define SHUB_PORT0_I2C_IDW_0__EXT_DATA_IE_OVRD__WIDTH                         1
#define SHUB_PORT0_I2C_IDW_0__EXT_DATA_IE_OVRD__MASK                0x00000001U
#define SHUB_PORT0_I2C_IDW_0__EXT_DATA_IE_OVRD__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT0_I2C_IDW_0__EXT_DATA_IE_OVRD__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT0_I2C_IDW_0__EXT_DATA_IE_OVRD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define SHUB_PORT0_I2C_IDW_0__EXT_DATA_IE_OVRD__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define SHUB_PORT0_I2C_IDW_0__EXT_DATA_IE_OVRD__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define SHUB_PORT0_I2C_IDW_0__EXT_DATA_IE_OVRD__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define SHUB_PORT0_I2C_IDW_0__EXT_DATA_IE_OVRD__RESET_VALUE         0x00000000U
/** @} */

/* macros for field ext_data_o */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_o_field ext_data_o_field
 * @brief macros for field ext_data_o
 * @details outbound data; can be device id, address within device, or write data; if it's device id, the LSB is the R/Wb indicator
 * @{
 */
#define SHUB_PORT0_I2C_IDW_0__EXT_DATA_O__SHIFT                               1
#define SHUB_PORT0_I2C_IDW_0__EXT_DATA_O__WIDTH                               8
#define SHUB_PORT0_I2C_IDW_0__EXT_DATA_O__MASK                      0x000001feU
#define SHUB_PORT0_I2C_IDW_0__EXT_DATA_O__READ(src) \
                    (((uint32_t)(src)\
                    & 0x000001feU) >> 1)
#define SHUB_PORT0_I2C_IDW_0__EXT_DATA_O__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x000001feU)
#define SHUB_PORT0_I2C_IDW_0__EXT_DATA_O__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000001feU) | (((uint32_t)(src) <<\
                    1) & 0x000001feU)
#define SHUB_PORT0_I2C_IDW_0__EXT_DATA_O__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x000001feU)))
#define SHUB_PORT0_I2C_IDW_0__EXT_DATA_O__RESET_VALUE               0x00000000U
/** @} */

/* macros for field ext_data_oe */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_oe_field ext_data_oe_field
 * @brief macros for field ext_data_oe
 * @details sda output enable per bit
 * @{
 */
#define SHUB_PORT0_I2C_IDW_0__EXT_DATA_OE__SHIFT                              9
#define SHUB_PORT0_I2C_IDW_0__EXT_DATA_OE__WIDTH                              8
#define SHUB_PORT0_I2C_IDW_0__EXT_DATA_OE__MASK                     0x0001fe00U
#define SHUB_PORT0_I2C_IDW_0__EXT_DATA_OE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0001fe00U) >> 9)
#define SHUB_PORT0_I2C_IDW_0__EXT_DATA_OE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 9) & 0x0001fe00U)
#define SHUB_PORT0_I2C_IDW_0__EXT_DATA_OE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0001fe00U) | (((uint32_t)(src) <<\
                    9) & 0x0001fe00U)
#define SHUB_PORT0_I2C_IDW_0__EXT_DATA_OE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 9) & ~0x0001fe00U)))
#define SHUB_PORT0_I2C_IDW_0__EXT_DATA_OE__RESET_VALUE              0x000000ffU
/** @} */

/* macros for field ext_data_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_pu_field ext_data_pu_field
 * @brief macros for field ext_data_pu
 * @details sda pin pullup enable
 * @{
 */
#define SHUB_PORT0_I2C_IDW_0__EXT_DATA_PU__SHIFT                             17
#define SHUB_PORT0_I2C_IDW_0__EXT_DATA_PU__WIDTH                              1
#define SHUB_PORT0_I2C_IDW_0__EXT_DATA_PU__MASK                     0x00020000U
#define SHUB_PORT0_I2C_IDW_0__EXT_DATA_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00020000U) >> 17)
#define SHUB_PORT0_I2C_IDW_0__EXT_DATA_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 17) & 0x00020000U)
#define SHUB_PORT0_I2C_IDW_0__EXT_DATA_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | (((uint32_t)(src) <<\
                    17) & 0x00020000U)
#define SHUB_PORT0_I2C_IDW_0__EXT_DATA_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 17) & ~0x00020000U)))
#define SHUB_PORT0_I2C_IDW_0__EXT_DATA_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(1) << 17)
#define SHUB_PORT0_I2C_IDW_0__EXT_DATA_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(0) << 17)
#define SHUB_PORT0_I2C_IDW_0__EXT_DATA_PU__RESET_VALUE              0x00000000U
/** @} */

/* macros for field ext_clk_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_clk_pu_field ext_clk_pu_field
 * @brief macros for field ext_clk_pu
 * @details sck pin pullup enable
 * @{
 */
#define SHUB_PORT0_I2C_IDW_0__EXT_CLK_PU__SHIFT                              18
#define SHUB_PORT0_I2C_IDW_0__EXT_CLK_PU__WIDTH                               1
#define SHUB_PORT0_I2C_IDW_0__EXT_CLK_PU__MASK                      0x00040000U
#define SHUB_PORT0_I2C_IDW_0__EXT_CLK_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00040000U) >> 18)
#define SHUB_PORT0_I2C_IDW_0__EXT_CLK_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 18) & 0x00040000U)
#define SHUB_PORT0_I2C_IDW_0__EXT_CLK_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | (((uint32_t)(src) <<\
                    18) & 0x00040000U)
#define SHUB_PORT0_I2C_IDW_0__EXT_CLK_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 18) & ~0x00040000U)))
#define SHUB_PORT0_I2C_IDW_0__EXT_CLK_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(1) << 18)
#define SHUB_PORT0_I2C_IDW_0__EXT_CLK_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(0) << 18)
#define SHUB_PORT0_I2C_IDW_0__EXT_CLK_PU__RESET_VALUE               0x00000000U
/** @} */

/* macros for field ext_head */
/**
 * @defgroup at_apb_shub_regs_core_ext_head_field ext_head_field
 * @brief macros for field ext_head
 * @details Before data transmission starts, what should head be?  0 = start  1 = stall
 * @{
 */
#define SHUB_PORT0_I2C_IDW_0__EXT_HEAD__SHIFT                                19
#define SHUB_PORT0_I2C_IDW_0__EXT_HEAD__WIDTH                                 2
#define SHUB_PORT0_I2C_IDW_0__EXT_HEAD__MASK                        0x00180000U
#define SHUB_PORT0_I2C_IDW_0__EXT_HEAD__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00180000U) >> 19)
#define SHUB_PORT0_I2C_IDW_0__EXT_HEAD__WRITE(src) \
                    (((uint32_t)(src)\
                    << 19) & 0x00180000U)
#define SHUB_PORT0_I2C_IDW_0__EXT_HEAD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00180000U) | (((uint32_t)(src) <<\
                    19) & 0x00180000U)
#define SHUB_PORT0_I2C_IDW_0__EXT_HEAD__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 19) & ~0x00180000U)))
#define SHUB_PORT0_I2C_IDW_0__EXT_HEAD__RESET_VALUE                 0x00000000U
/** @} */

/* macros for field ext_tail */
/**
 * @defgroup at_apb_shub_regs_core_ext_tail_field ext_tail_field
 * @brief macros for field ext_tail
 * @details At end of 8 bits plus ack/nack, what should tail be?  0 = stop  1 = stall  2 = restart
 * @{
 */
#define SHUB_PORT0_I2C_IDW_0__EXT_TAIL__SHIFT                                21
#define SHUB_PORT0_I2C_IDW_0__EXT_TAIL__WIDTH                                 2
#define SHUB_PORT0_I2C_IDW_0__EXT_TAIL__MASK                        0x00600000U
#define SHUB_PORT0_I2C_IDW_0__EXT_TAIL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00600000U) >> 21)
#define SHUB_PORT0_I2C_IDW_0__EXT_TAIL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 21) & 0x00600000U)
#define SHUB_PORT0_I2C_IDW_0__EXT_TAIL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00600000U) | (((uint32_t)(src) <<\
                    21) & 0x00600000U)
#define SHUB_PORT0_I2C_IDW_0__EXT_TAIL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 21) & ~0x00600000U)))
#define SHUB_PORT0_I2C_IDW_0__EXT_TAIL__RESET_VALUE                 0x00000000U
/** @} */

/* macros for field ext_master_drives_ack */
/**
 * @defgroup at_apb_shub_regs_core_ext_master_drives_ack_field ext_master_drives_ack_field
 * @brief macros for field ext_master_drives_ack
 * @details Specifies that master is to drive ack.
 * @{
 */
#define SHUB_PORT0_I2C_IDW_0__EXT_MASTER_DRIVES_ACK__SHIFT                   23
#define SHUB_PORT0_I2C_IDW_0__EXT_MASTER_DRIVES_ACK__WIDTH                    1
#define SHUB_PORT0_I2C_IDW_0__EXT_MASTER_DRIVES_ACK__MASK           0x00800000U
#define SHUB_PORT0_I2C_IDW_0__EXT_MASTER_DRIVES_ACK__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00800000U) >> 23)
#define SHUB_PORT0_I2C_IDW_0__EXT_MASTER_DRIVES_ACK__WRITE(src) \
                    (((uint32_t)(src)\
                    << 23) & 0x00800000U)
#define SHUB_PORT0_I2C_IDW_0__EXT_MASTER_DRIVES_ACK__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | (((uint32_t)(src) <<\
                    23) & 0x00800000U)
#define SHUB_PORT0_I2C_IDW_0__EXT_MASTER_DRIVES_ACK__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 23) & ~0x00800000U)))
#define SHUB_PORT0_I2C_IDW_0__EXT_MASTER_DRIVES_ACK__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(1) << 23)
#define SHUB_PORT0_I2C_IDW_0__EXT_MASTER_DRIVES_ACK__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(0) << 23)
#define SHUB_PORT0_I2C_IDW_0__EXT_MASTER_DRIVES_ACK__RESET_VALUE    0x00000000U
/** @} */

/* macros for field ext_ack_value_to_drive */
/**
 * @defgroup at_apb_shub_regs_core_ext_ack_value_to_drive_field ext_ack_value_to_drive_field
 * @brief macros for field ext_ack_value_to_drive
 * @details If ack is to be driven by master, what value to drive?
 * @{
 */
#define SHUB_PORT0_I2C_IDW_0__EXT_ACK_VALUE_TO_DRIVE__SHIFT                  24
#define SHUB_PORT0_I2C_IDW_0__EXT_ACK_VALUE_TO_DRIVE__WIDTH                   1
#define SHUB_PORT0_I2C_IDW_0__EXT_ACK_VALUE_TO_DRIVE__MASK          0x01000000U
#define SHUB_PORT0_I2C_IDW_0__EXT_ACK_VALUE_TO_DRIVE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x01000000U) >> 24)
#define SHUB_PORT0_I2C_IDW_0__EXT_ACK_VALUE_TO_DRIVE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0x01000000U)
#define SHUB_PORT0_I2C_IDW_0__EXT_ACK_VALUE_TO_DRIVE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | (((uint32_t)(src) <<\
                    24) & 0x01000000U)
#define SHUB_PORT0_I2C_IDW_0__EXT_ACK_VALUE_TO_DRIVE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x01000000U)))
#define SHUB_PORT0_I2C_IDW_0__EXT_ACK_VALUE_TO_DRIVE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(1) << 24)
#define SHUB_PORT0_I2C_IDW_0__EXT_ACK_VALUE_TO_DRIVE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(0) << 24)
#define SHUB_PORT0_I2C_IDW_0__EXT_ACK_VALUE_TO_DRIVE__RESET_VALUE   0x00000000U
/** @} */
#define SHUB_PORT0_I2C_IDW_0__TYPE                                     uint32_t
#define SHUB_PORT0_I2C_IDW_0__READ                                  0x01ffffffU
#define SHUB_PORT0_I2C_IDW_0__WRITE                                 0x01ffffffU
#define SHUB_PORT0_I2C_IDW_0__PRESERVED                             0x01ffffffU
#define SHUB_PORT0_I2C_IDW_0__RESET_VALUE                           0x0001fe00U

#endif /* __SHUB_PORT0_I2C_IDW_0_MACRO__ */

/** @} end of port0_i2c_idw_0 */

/* macros for BlueprintGlobalNameSpace::SHUB_port0_i2c_idw_1 */
/**
 * @defgroup at_apb_shub_regs_core_port0_i2c_idw_1 port0_i2c_idw_1
 * @brief id(read) of sensor1 on port0 prior to pointer address write definitions.
 * @{
 */
#ifndef __SHUB_PORT0_I2C_IDW_1_MACRO__
#define __SHUB_PORT0_I2C_IDW_1_MACRO__

/* macros for field ext_data_ie_ovrd */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_ie_ovrd_field ext_data_ie_ovrd_field
 * @brief macros for field ext_data_ie_ovrd
 * @details 1 = ie is high  0 = ie is ~oe
 * @{
 */
#define SHUB_PORT0_I2C_IDW_1__EXT_DATA_IE_OVRD__SHIFT                         0
#define SHUB_PORT0_I2C_IDW_1__EXT_DATA_IE_OVRD__WIDTH                         1
#define SHUB_PORT0_I2C_IDW_1__EXT_DATA_IE_OVRD__MASK                0x00000001U
#define SHUB_PORT0_I2C_IDW_1__EXT_DATA_IE_OVRD__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT0_I2C_IDW_1__EXT_DATA_IE_OVRD__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT0_I2C_IDW_1__EXT_DATA_IE_OVRD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define SHUB_PORT0_I2C_IDW_1__EXT_DATA_IE_OVRD__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define SHUB_PORT0_I2C_IDW_1__EXT_DATA_IE_OVRD__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define SHUB_PORT0_I2C_IDW_1__EXT_DATA_IE_OVRD__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define SHUB_PORT0_I2C_IDW_1__EXT_DATA_IE_OVRD__RESET_VALUE         0x00000000U
/** @} */

/* macros for field ext_data_o */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_o_field ext_data_o_field
 * @brief macros for field ext_data_o
 * @details outbound data; can be device id, address within device, or write data; if it's device id, the LSB is the R/Wb indicator
 * @{
 */
#define SHUB_PORT0_I2C_IDW_1__EXT_DATA_O__SHIFT                               1
#define SHUB_PORT0_I2C_IDW_1__EXT_DATA_O__WIDTH                               8
#define SHUB_PORT0_I2C_IDW_1__EXT_DATA_O__MASK                      0x000001feU
#define SHUB_PORT0_I2C_IDW_1__EXT_DATA_O__READ(src) \
                    (((uint32_t)(src)\
                    & 0x000001feU) >> 1)
#define SHUB_PORT0_I2C_IDW_1__EXT_DATA_O__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x000001feU)
#define SHUB_PORT0_I2C_IDW_1__EXT_DATA_O__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000001feU) | (((uint32_t)(src) <<\
                    1) & 0x000001feU)
#define SHUB_PORT0_I2C_IDW_1__EXT_DATA_O__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x000001feU)))
#define SHUB_PORT0_I2C_IDW_1__EXT_DATA_O__RESET_VALUE               0x00000000U
/** @} */

/* macros for field ext_data_oe */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_oe_field ext_data_oe_field
 * @brief macros for field ext_data_oe
 * @details sda output enable per bit
 * @{
 */
#define SHUB_PORT0_I2C_IDW_1__EXT_DATA_OE__SHIFT                              9
#define SHUB_PORT0_I2C_IDW_1__EXT_DATA_OE__WIDTH                              8
#define SHUB_PORT0_I2C_IDW_1__EXT_DATA_OE__MASK                     0x0001fe00U
#define SHUB_PORT0_I2C_IDW_1__EXT_DATA_OE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0001fe00U) >> 9)
#define SHUB_PORT0_I2C_IDW_1__EXT_DATA_OE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 9) & 0x0001fe00U)
#define SHUB_PORT0_I2C_IDW_1__EXT_DATA_OE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0001fe00U) | (((uint32_t)(src) <<\
                    9) & 0x0001fe00U)
#define SHUB_PORT0_I2C_IDW_1__EXT_DATA_OE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 9) & ~0x0001fe00U)))
#define SHUB_PORT0_I2C_IDW_1__EXT_DATA_OE__RESET_VALUE              0x000000ffU
/** @} */

/* macros for field ext_data_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_pu_field ext_data_pu_field
 * @brief macros for field ext_data_pu
 * @details sda pin pullup enable
 * @{
 */
#define SHUB_PORT0_I2C_IDW_1__EXT_DATA_PU__SHIFT                             17
#define SHUB_PORT0_I2C_IDW_1__EXT_DATA_PU__WIDTH                              1
#define SHUB_PORT0_I2C_IDW_1__EXT_DATA_PU__MASK                     0x00020000U
#define SHUB_PORT0_I2C_IDW_1__EXT_DATA_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00020000U) >> 17)
#define SHUB_PORT0_I2C_IDW_1__EXT_DATA_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 17) & 0x00020000U)
#define SHUB_PORT0_I2C_IDW_1__EXT_DATA_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | (((uint32_t)(src) <<\
                    17) & 0x00020000U)
#define SHUB_PORT0_I2C_IDW_1__EXT_DATA_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 17) & ~0x00020000U)))
#define SHUB_PORT0_I2C_IDW_1__EXT_DATA_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(1) << 17)
#define SHUB_PORT0_I2C_IDW_1__EXT_DATA_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(0) << 17)
#define SHUB_PORT0_I2C_IDW_1__EXT_DATA_PU__RESET_VALUE              0x00000000U
/** @} */

/* macros for field ext_clk_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_clk_pu_field ext_clk_pu_field
 * @brief macros for field ext_clk_pu
 * @details sck pin pullup enable
 * @{
 */
#define SHUB_PORT0_I2C_IDW_1__EXT_CLK_PU__SHIFT                              18
#define SHUB_PORT0_I2C_IDW_1__EXT_CLK_PU__WIDTH                               1
#define SHUB_PORT0_I2C_IDW_1__EXT_CLK_PU__MASK                      0x00040000U
#define SHUB_PORT0_I2C_IDW_1__EXT_CLK_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00040000U) >> 18)
#define SHUB_PORT0_I2C_IDW_1__EXT_CLK_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 18) & 0x00040000U)
#define SHUB_PORT0_I2C_IDW_1__EXT_CLK_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | (((uint32_t)(src) <<\
                    18) & 0x00040000U)
#define SHUB_PORT0_I2C_IDW_1__EXT_CLK_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 18) & ~0x00040000U)))
#define SHUB_PORT0_I2C_IDW_1__EXT_CLK_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(1) << 18)
#define SHUB_PORT0_I2C_IDW_1__EXT_CLK_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(0) << 18)
#define SHUB_PORT0_I2C_IDW_1__EXT_CLK_PU__RESET_VALUE               0x00000000U
/** @} */

/* macros for field ext_head */
/**
 * @defgroup at_apb_shub_regs_core_ext_head_field ext_head_field
 * @brief macros for field ext_head
 * @details Before data transmission starts, what should head be?  0 = start  1 = stall
 * @{
 */
#define SHUB_PORT0_I2C_IDW_1__EXT_HEAD__SHIFT                                19
#define SHUB_PORT0_I2C_IDW_1__EXT_HEAD__WIDTH                                 2
#define SHUB_PORT0_I2C_IDW_1__EXT_HEAD__MASK                        0x00180000U
#define SHUB_PORT0_I2C_IDW_1__EXT_HEAD__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00180000U) >> 19)
#define SHUB_PORT0_I2C_IDW_1__EXT_HEAD__WRITE(src) \
                    (((uint32_t)(src)\
                    << 19) & 0x00180000U)
#define SHUB_PORT0_I2C_IDW_1__EXT_HEAD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00180000U) | (((uint32_t)(src) <<\
                    19) & 0x00180000U)
#define SHUB_PORT0_I2C_IDW_1__EXT_HEAD__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 19) & ~0x00180000U)))
#define SHUB_PORT0_I2C_IDW_1__EXT_HEAD__RESET_VALUE                 0x00000000U
/** @} */

/* macros for field ext_tail */
/**
 * @defgroup at_apb_shub_regs_core_ext_tail_field ext_tail_field
 * @brief macros for field ext_tail
 * @details At end of 8 bits plus ack/nack, what should tail be?  0 = stop  1 = stall  2 = restart
 * @{
 */
#define SHUB_PORT0_I2C_IDW_1__EXT_TAIL__SHIFT                                21
#define SHUB_PORT0_I2C_IDW_1__EXT_TAIL__WIDTH                                 2
#define SHUB_PORT0_I2C_IDW_1__EXT_TAIL__MASK                        0x00600000U
#define SHUB_PORT0_I2C_IDW_1__EXT_TAIL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00600000U) >> 21)
#define SHUB_PORT0_I2C_IDW_1__EXT_TAIL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 21) & 0x00600000U)
#define SHUB_PORT0_I2C_IDW_1__EXT_TAIL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00600000U) | (((uint32_t)(src) <<\
                    21) & 0x00600000U)
#define SHUB_PORT0_I2C_IDW_1__EXT_TAIL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 21) & ~0x00600000U)))
#define SHUB_PORT0_I2C_IDW_1__EXT_TAIL__RESET_VALUE                 0x00000000U
/** @} */

/* macros for field ext_master_drives_ack */
/**
 * @defgroup at_apb_shub_regs_core_ext_master_drives_ack_field ext_master_drives_ack_field
 * @brief macros for field ext_master_drives_ack
 * @details Specifies that master is to drive ack.
 * @{
 */
#define SHUB_PORT0_I2C_IDW_1__EXT_MASTER_DRIVES_ACK__SHIFT                   23
#define SHUB_PORT0_I2C_IDW_1__EXT_MASTER_DRIVES_ACK__WIDTH                    1
#define SHUB_PORT0_I2C_IDW_1__EXT_MASTER_DRIVES_ACK__MASK           0x00800000U
#define SHUB_PORT0_I2C_IDW_1__EXT_MASTER_DRIVES_ACK__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00800000U) >> 23)
#define SHUB_PORT0_I2C_IDW_1__EXT_MASTER_DRIVES_ACK__WRITE(src) \
                    (((uint32_t)(src)\
                    << 23) & 0x00800000U)
#define SHUB_PORT0_I2C_IDW_1__EXT_MASTER_DRIVES_ACK__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | (((uint32_t)(src) <<\
                    23) & 0x00800000U)
#define SHUB_PORT0_I2C_IDW_1__EXT_MASTER_DRIVES_ACK__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 23) & ~0x00800000U)))
#define SHUB_PORT0_I2C_IDW_1__EXT_MASTER_DRIVES_ACK__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(1) << 23)
#define SHUB_PORT0_I2C_IDW_1__EXT_MASTER_DRIVES_ACK__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(0) << 23)
#define SHUB_PORT0_I2C_IDW_1__EXT_MASTER_DRIVES_ACK__RESET_VALUE    0x00000000U
/** @} */

/* macros for field ext_ack_value_to_drive */
/**
 * @defgroup at_apb_shub_regs_core_ext_ack_value_to_drive_field ext_ack_value_to_drive_field
 * @brief macros for field ext_ack_value_to_drive
 * @details If ack is to be driven by master, what value to drive?
 * @{
 */
#define SHUB_PORT0_I2C_IDW_1__EXT_ACK_VALUE_TO_DRIVE__SHIFT                  24
#define SHUB_PORT0_I2C_IDW_1__EXT_ACK_VALUE_TO_DRIVE__WIDTH                   1
#define SHUB_PORT0_I2C_IDW_1__EXT_ACK_VALUE_TO_DRIVE__MASK          0x01000000U
#define SHUB_PORT0_I2C_IDW_1__EXT_ACK_VALUE_TO_DRIVE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x01000000U) >> 24)
#define SHUB_PORT0_I2C_IDW_1__EXT_ACK_VALUE_TO_DRIVE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0x01000000U)
#define SHUB_PORT0_I2C_IDW_1__EXT_ACK_VALUE_TO_DRIVE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | (((uint32_t)(src) <<\
                    24) & 0x01000000U)
#define SHUB_PORT0_I2C_IDW_1__EXT_ACK_VALUE_TO_DRIVE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x01000000U)))
#define SHUB_PORT0_I2C_IDW_1__EXT_ACK_VALUE_TO_DRIVE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(1) << 24)
#define SHUB_PORT0_I2C_IDW_1__EXT_ACK_VALUE_TO_DRIVE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(0) << 24)
#define SHUB_PORT0_I2C_IDW_1__EXT_ACK_VALUE_TO_DRIVE__RESET_VALUE   0x00000000U
/** @} */
#define SHUB_PORT0_I2C_IDW_1__TYPE                                     uint32_t
#define SHUB_PORT0_I2C_IDW_1__READ                                  0x01ffffffU
#define SHUB_PORT0_I2C_IDW_1__WRITE                                 0x01ffffffU
#define SHUB_PORT0_I2C_IDW_1__PRESERVED                             0x01ffffffU
#define SHUB_PORT0_I2C_IDW_1__RESET_VALUE                           0x0001fe00U

#endif /* __SHUB_PORT0_I2C_IDW_1_MACRO__ */

/** @} end of port0_i2c_idw_1 */

/* macros for BlueprintGlobalNameSpace::SHUB_port0_i2c_idw_2 */
/**
 * @defgroup at_apb_shub_regs_core_port0_i2c_idw_2 port0_i2c_idw_2
 * @brief id(read) of sensor2 on port0 prior to pointer address write definitions.
 * @{
 */
#ifndef __SHUB_PORT0_I2C_IDW_2_MACRO__
#define __SHUB_PORT0_I2C_IDW_2_MACRO__

/* macros for field ext_data_ie_ovrd */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_ie_ovrd_field ext_data_ie_ovrd_field
 * @brief macros for field ext_data_ie_ovrd
 * @details 1 = ie is high  0 = ie is ~oe
 * @{
 */
#define SHUB_PORT0_I2C_IDW_2__EXT_DATA_IE_OVRD__SHIFT                         0
#define SHUB_PORT0_I2C_IDW_2__EXT_DATA_IE_OVRD__WIDTH                         1
#define SHUB_PORT0_I2C_IDW_2__EXT_DATA_IE_OVRD__MASK                0x00000001U
#define SHUB_PORT0_I2C_IDW_2__EXT_DATA_IE_OVRD__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT0_I2C_IDW_2__EXT_DATA_IE_OVRD__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT0_I2C_IDW_2__EXT_DATA_IE_OVRD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define SHUB_PORT0_I2C_IDW_2__EXT_DATA_IE_OVRD__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define SHUB_PORT0_I2C_IDW_2__EXT_DATA_IE_OVRD__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define SHUB_PORT0_I2C_IDW_2__EXT_DATA_IE_OVRD__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define SHUB_PORT0_I2C_IDW_2__EXT_DATA_IE_OVRD__RESET_VALUE         0x00000000U
/** @} */

/* macros for field ext_data_o */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_o_field ext_data_o_field
 * @brief macros for field ext_data_o
 * @details outbound data; can be device id, address within device, or write data; if it's device id, the LSB is the R/Wb indicator
 * @{
 */
#define SHUB_PORT0_I2C_IDW_2__EXT_DATA_O__SHIFT                               1
#define SHUB_PORT0_I2C_IDW_2__EXT_DATA_O__WIDTH                               8
#define SHUB_PORT0_I2C_IDW_2__EXT_DATA_O__MASK                      0x000001feU
#define SHUB_PORT0_I2C_IDW_2__EXT_DATA_O__READ(src) \
                    (((uint32_t)(src)\
                    & 0x000001feU) >> 1)
#define SHUB_PORT0_I2C_IDW_2__EXT_DATA_O__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x000001feU)
#define SHUB_PORT0_I2C_IDW_2__EXT_DATA_O__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000001feU) | (((uint32_t)(src) <<\
                    1) & 0x000001feU)
#define SHUB_PORT0_I2C_IDW_2__EXT_DATA_O__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x000001feU)))
#define SHUB_PORT0_I2C_IDW_2__EXT_DATA_O__RESET_VALUE               0x00000000U
/** @} */

/* macros for field ext_data_oe */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_oe_field ext_data_oe_field
 * @brief macros for field ext_data_oe
 * @details sda output enable per bit
 * @{
 */
#define SHUB_PORT0_I2C_IDW_2__EXT_DATA_OE__SHIFT                              9
#define SHUB_PORT0_I2C_IDW_2__EXT_DATA_OE__WIDTH                              8
#define SHUB_PORT0_I2C_IDW_2__EXT_DATA_OE__MASK                     0x0001fe00U
#define SHUB_PORT0_I2C_IDW_2__EXT_DATA_OE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0001fe00U) >> 9)
#define SHUB_PORT0_I2C_IDW_2__EXT_DATA_OE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 9) & 0x0001fe00U)
#define SHUB_PORT0_I2C_IDW_2__EXT_DATA_OE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0001fe00U) | (((uint32_t)(src) <<\
                    9) & 0x0001fe00U)
#define SHUB_PORT0_I2C_IDW_2__EXT_DATA_OE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 9) & ~0x0001fe00U)))
#define SHUB_PORT0_I2C_IDW_2__EXT_DATA_OE__RESET_VALUE              0x000000ffU
/** @} */

/* macros for field ext_data_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_pu_field ext_data_pu_field
 * @brief macros for field ext_data_pu
 * @details sda pin pullup enable
 * @{
 */
#define SHUB_PORT0_I2C_IDW_2__EXT_DATA_PU__SHIFT                             17
#define SHUB_PORT0_I2C_IDW_2__EXT_DATA_PU__WIDTH                              1
#define SHUB_PORT0_I2C_IDW_2__EXT_DATA_PU__MASK                     0x00020000U
#define SHUB_PORT0_I2C_IDW_2__EXT_DATA_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00020000U) >> 17)
#define SHUB_PORT0_I2C_IDW_2__EXT_DATA_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 17) & 0x00020000U)
#define SHUB_PORT0_I2C_IDW_2__EXT_DATA_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | (((uint32_t)(src) <<\
                    17) & 0x00020000U)
#define SHUB_PORT0_I2C_IDW_2__EXT_DATA_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 17) & ~0x00020000U)))
#define SHUB_PORT0_I2C_IDW_2__EXT_DATA_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(1) << 17)
#define SHUB_PORT0_I2C_IDW_2__EXT_DATA_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(0) << 17)
#define SHUB_PORT0_I2C_IDW_2__EXT_DATA_PU__RESET_VALUE              0x00000000U
/** @} */

/* macros for field ext_clk_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_clk_pu_field ext_clk_pu_field
 * @brief macros for field ext_clk_pu
 * @details sck pin pullup enable
 * @{
 */
#define SHUB_PORT0_I2C_IDW_2__EXT_CLK_PU__SHIFT                              18
#define SHUB_PORT0_I2C_IDW_2__EXT_CLK_PU__WIDTH                               1
#define SHUB_PORT0_I2C_IDW_2__EXT_CLK_PU__MASK                      0x00040000U
#define SHUB_PORT0_I2C_IDW_2__EXT_CLK_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00040000U) >> 18)
#define SHUB_PORT0_I2C_IDW_2__EXT_CLK_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 18) & 0x00040000U)
#define SHUB_PORT0_I2C_IDW_2__EXT_CLK_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | (((uint32_t)(src) <<\
                    18) & 0x00040000U)
#define SHUB_PORT0_I2C_IDW_2__EXT_CLK_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 18) & ~0x00040000U)))
#define SHUB_PORT0_I2C_IDW_2__EXT_CLK_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(1) << 18)
#define SHUB_PORT0_I2C_IDW_2__EXT_CLK_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(0) << 18)
#define SHUB_PORT0_I2C_IDW_2__EXT_CLK_PU__RESET_VALUE               0x00000000U
/** @} */

/* macros for field ext_head */
/**
 * @defgroup at_apb_shub_regs_core_ext_head_field ext_head_field
 * @brief macros for field ext_head
 * @details Before data transmission starts, what should head be?  0 = start  1 = stall
 * @{
 */
#define SHUB_PORT0_I2C_IDW_2__EXT_HEAD__SHIFT                                19
#define SHUB_PORT0_I2C_IDW_2__EXT_HEAD__WIDTH                                 2
#define SHUB_PORT0_I2C_IDW_2__EXT_HEAD__MASK                        0x00180000U
#define SHUB_PORT0_I2C_IDW_2__EXT_HEAD__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00180000U) >> 19)
#define SHUB_PORT0_I2C_IDW_2__EXT_HEAD__WRITE(src) \
                    (((uint32_t)(src)\
                    << 19) & 0x00180000U)
#define SHUB_PORT0_I2C_IDW_2__EXT_HEAD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00180000U) | (((uint32_t)(src) <<\
                    19) & 0x00180000U)
#define SHUB_PORT0_I2C_IDW_2__EXT_HEAD__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 19) & ~0x00180000U)))
#define SHUB_PORT0_I2C_IDW_2__EXT_HEAD__RESET_VALUE                 0x00000000U
/** @} */

/* macros for field ext_tail */
/**
 * @defgroup at_apb_shub_regs_core_ext_tail_field ext_tail_field
 * @brief macros for field ext_tail
 * @details At end of 8 bits plus ack/nack, what should tail be?  0 = stop  1 = stall  2 = restart
 * @{
 */
#define SHUB_PORT0_I2C_IDW_2__EXT_TAIL__SHIFT                                21
#define SHUB_PORT0_I2C_IDW_2__EXT_TAIL__WIDTH                                 2
#define SHUB_PORT0_I2C_IDW_2__EXT_TAIL__MASK                        0x00600000U
#define SHUB_PORT0_I2C_IDW_2__EXT_TAIL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00600000U) >> 21)
#define SHUB_PORT0_I2C_IDW_2__EXT_TAIL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 21) & 0x00600000U)
#define SHUB_PORT0_I2C_IDW_2__EXT_TAIL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00600000U) | (((uint32_t)(src) <<\
                    21) & 0x00600000U)
#define SHUB_PORT0_I2C_IDW_2__EXT_TAIL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 21) & ~0x00600000U)))
#define SHUB_PORT0_I2C_IDW_2__EXT_TAIL__RESET_VALUE                 0x00000000U
/** @} */

/* macros for field ext_master_drives_ack */
/**
 * @defgroup at_apb_shub_regs_core_ext_master_drives_ack_field ext_master_drives_ack_field
 * @brief macros for field ext_master_drives_ack
 * @details Specifies that master is to drive ack.
 * @{
 */
#define SHUB_PORT0_I2C_IDW_2__EXT_MASTER_DRIVES_ACK__SHIFT                   23
#define SHUB_PORT0_I2C_IDW_2__EXT_MASTER_DRIVES_ACK__WIDTH                    1
#define SHUB_PORT0_I2C_IDW_2__EXT_MASTER_DRIVES_ACK__MASK           0x00800000U
#define SHUB_PORT0_I2C_IDW_2__EXT_MASTER_DRIVES_ACK__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00800000U) >> 23)
#define SHUB_PORT0_I2C_IDW_2__EXT_MASTER_DRIVES_ACK__WRITE(src) \
                    (((uint32_t)(src)\
                    << 23) & 0x00800000U)
#define SHUB_PORT0_I2C_IDW_2__EXT_MASTER_DRIVES_ACK__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | (((uint32_t)(src) <<\
                    23) & 0x00800000U)
#define SHUB_PORT0_I2C_IDW_2__EXT_MASTER_DRIVES_ACK__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 23) & ~0x00800000U)))
#define SHUB_PORT0_I2C_IDW_2__EXT_MASTER_DRIVES_ACK__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(1) << 23)
#define SHUB_PORT0_I2C_IDW_2__EXT_MASTER_DRIVES_ACK__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(0) << 23)
#define SHUB_PORT0_I2C_IDW_2__EXT_MASTER_DRIVES_ACK__RESET_VALUE    0x00000000U
/** @} */

/* macros for field ext_ack_value_to_drive */
/**
 * @defgroup at_apb_shub_regs_core_ext_ack_value_to_drive_field ext_ack_value_to_drive_field
 * @brief macros for field ext_ack_value_to_drive
 * @details If ack is to be driven by master, what value to drive?
 * @{
 */
#define SHUB_PORT0_I2C_IDW_2__EXT_ACK_VALUE_TO_DRIVE__SHIFT                  24
#define SHUB_PORT0_I2C_IDW_2__EXT_ACK_VALUE_TO_DRIVE__WIDTH                   1
#define SHUB_PORT0_I2C_IDW_2__EXT_ACK_VALUE_TO_DRIVE__MASK          0x01000000U
#define SHUB_PORT0_I2C_IDW_2__EXT_ACK_VALUE_TO_DRIVE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x01000000U) >> 24)
#define SHUB_PORT0_I2C_IDW_2__EXT_ACK_VALUE_TO_DRIVE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0x01000000U)
#define SHUB_PORT0_I2C_IDW_2__EXT_ACK_VALUE_TO_DRIVE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | (((uint32_t)(src) <<\
                    24) & 0x01000000U)
#define SHUB_PORT0_I2C_IDW_2__EXT_ACK_VALUE_TO_DRIVE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x01000000U)))
#define SHUB_PORT0_I2C_IDW_2__EXT_ACK_VALUE_TO_DRIVE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(1) << 24)
#define SHUB_PORT0_I2C_IDW_2__EXT_ACK_VALUE_TO_DRIVE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(0) << 24)
#define SHUB_PORT0_I2C_IDW_2__EXT_ACK_VALUE_TO_DRIVE__RESET_VALUE   0x00000000U
/** @} */
#define SHUB_PORT0_I2C_IDW_2__TYPE                                     uint32_t
#define SHUB_PORT0_I2C_IDW_2__READ                                  0x01ffffffU
#define SHUB_PORT0_I2C_IDW_2__WRITE                                 0x01ffffffU
#define SHUB_PORT0_I2C_IDW_2__PRESERVED                             0x01ffffffU
#define SHUB_PORT0_I2C_IDW_2__RESET_VALUE                           0x0001fe00U

#endif /* __SHUB_PORT0_I2C_IDW_2_MACRO__ */

/** @} end of port0_i2c_idw_2 */

/* macros for BlueprintGlobalNameSpace::SHUB_port0_i2c_idw_3 */
/**
 * @defgroup at_apb_shub_regs_core_port0_i2c_idw_3 port0_i2c_idw_3
 * @brief id(read) of sensor3 on port0 prior to pointer address write definitions.
 * @{
 */
#ifndef __SHUB_PORT0_I2C_IDW_3_MACRO__
#define __SHUB_PORT0_I2C_IDW_3_MACRO__

/* macros for field ext_data_ie_ovrd */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_ie_ovrd_field ext_data_ie_ovrd_field
 * @brief macros for field ext_data_ie_ovrd
 * @details 1 = ie is high  0 = ie is ~oe
 * @{
 */
#define SHUB_PORT0_I2C_IDW_3__EXT_DATA_IE_OVRD__SHIFT                         0
#define SHUB_PORT0_I2C_IDW_3__EXT_DATA_IE_OVRD__WIDTH                         1
#define SHUB_PORT0_I2C_IDW_3__EXT_DATA_IE_OVRD__MASK                0x00000001U
#define SHUB_PORT0_I2C_IDW_3__EXT_DATA_IE_OVRD__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT0_I2C_IDW_3__EXT_DATA_IE_OVRD__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT0_I2C_IDW_3__EXT_DATA_IE_OVRD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define SHUB_PORT0_I2C_IDW_3__EXT_DATA_IE_OVRD__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define SHUB_PORT0_I2C_IDW_3__EXT_DATA_IE_OVRD__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define SHUB_PORT0_I2C_IDW_3__EXT_DATA_IE_OVRD__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define SHUB_PORT0_I2C_IDW_3__EXT_DATA_IE_OVRD__RESET_VALUE         0x00000000U
/** @} */

/* macros for field ext_data_o */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_o_field ext_data_o_field
 * @brief macros for field ext_data_o
 * @details outbound data; can be device id, address within device, or write data; if it's device id, the LSB is the R/Wb indicator
 * @{
 */
#define SHUB_PORT0_I2C_IDW_3__EXT_DATA_O__SHIFT                               1
#define SHUB_PORT0_I2C_IDW_3__EXT_DATA_O__WIDTH                               8
#define SHUB_PORT0_I2C_IDW_3__EXT_DATA_O__MASK                      0x000001feU
#define SHUB_PORT0_I2C_IDW_3__EXT_DATA_O__READ(src) \
                    (((uint32_t)(src)\
                    & 0x000001feU) >> 1)
#define SHUB_PORT0_I2C_IDW_3__EXT_DATA_O__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x000001feU)
#define SHUB_PORT0_I2C_IDW_3__EXT_DATA_O__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000001feU) | (((uint32_t)(src) <<\
                    1) & 0x000001feU)
#define SHUB_PORT0_I2C_IDW_3__EXT_DATA_O__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x000001feU)))
#define SHUB_PORT0_I2C_IDW_3__EXT_DATA_O__RESET_VALUE               0x00000000U
/** @} */

/* macros for field ext_data_oe */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_oe_field ext_data_oe_field
 * @brief macros for field ext_data_oe
 * @details sda output enable per bit
 * @{
 */
#define SHUB_PORT0_I2C_IDW_3__EXT_DATA_OE__SHIFT                              9
#define SHUB_PORT0_I2C_IDW_3__EXT_DATA_OE__WIDTH                              8
#define SHUB_PORT0_I2C_IDW_3__EXT_DATA_OE__MASK                     0x0001fe00U
#define SHUB_PORT0_I2C_IDW_3__EXT_DATA_OE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0001fe00U) >> 9)
#define SHUB_PORT0_I2C_IDW_3__EXT_DATA_OE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 9) & 0x0001fe00U)
#define SHUB_PORT0_I2C_IDW_3__EXT_DATA_OE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0001fe00U) | (((uint32_t)(src) <<\
                    9) & 0x0001fe00U)
#define SHUB_PORT0_I2C_IDW_3__EXT_DATA_OE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 9) & ~0x0001fe00U)))
#define SHUB_PORT0_I2C_IDW_3__EXT_DATA_OE__RESET_VALUE              0x000000ffU
/** @} */

/* macros for field ext_data_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_pu_field ext_data_pu_field
 * @brief macros for field ext_data_pu
 * @details sda pin pullup enable
 * @{
 */
#define SHUB_PORT0_I2C_IDW_3__EXT_DATA_PU__SHIFT                             17
#define SHUB_PORT0_I2C_IDW_3__EXT_DATA_PU__WIDTH                              1
#define SHUB_PORT0_I2C_IDW_3__EXT_DATA_PU__MASK                     0x00020000U
#define SHUB_PORT0_I2C_IDW_3__EXT_DATA_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00020000U) >> 17)
#define SHUB_PORT0_I2C_IDW_3__EXT_DATA_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 17) & 0x00020000U)
#define SHUB_PORT0_I2C_IDW_3__EXT_DATA_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | (((uint32_t)(src) <<\
                    17) & 0x00020000U)
#define SHUB_PORT0_I2C_IDW_3__EXT_DATA_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 17) & ~0x00020000U)))
#define SHUB_PORT0_I2C_IDW_3__EXT_DATA_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(1) << 17)
#define SHUB_PORT0_I2C_IDW_3__EXT_DATA_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(0) << 17)
#define SHUB_PORT0_I2C_IDW_3__EXT_DATA_PU__RESET_VALUE              0x00000000U
/** @} */

/* macros for field ext_clk_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_clk_pu_field ext_clk_pu_field
 * @brief macros for field ext_clk_pu
 * @details sck pin pullup enable
 * @{
 */
#define SHUB_PORT0_I2C_IDW_3__EXT_CLK_PU__SHIFT                              18
#define SHUB_PORT0_I2C_IDW_3__EXT_CLK_PU__WIDTH                               1
#define SHUB_PORT0_I2C_IDW_3__EXT_CLK_PU__MASK                      0x00040000U
#define SHUB_PORT0_I2C_IDW_3__EXT_CLK_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00040000U) >> 18)
#define SHUB_PORT0_I2C_IDW_3__EXT_CLK_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 18) & 0x00040000U)
#define SHUB_PORT0_I2C_IDW_3__EXT_CLK_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | (((uint32_t)(src) <<\
                    18) & 0x00040000U)
#define SHUB_PORT0_I2C_IDW_3__EXT_CLK_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 18) & ~0x00040000U)))
#define SHUB_PORT0_I2C_IDW_3__EXT_CLK_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(1) << 18)
#define SHUB_PORT0_I2C_IDW_3__EXT_CLK_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(0) << 18)
#define SHUB_PORT0_I2C_IDW_3__EXT_CLK_PU__RESET_VALUE               0x00000000U
/** @} */

/* macros for field ext_head */
/**
 * @defgroup at_apb_shub_regs_core_ext_head_field ext_head_field
 * @brief macros for field ext_head
 * @details Before data transmission starts, what should head be?  0 = start  1 = stall
 * @{
 */
#define SHUB_PORT0_I2C_IDW_3__EXT_HEAD__SHIFT                                19
#define SHUB_PORT0_I2C_IDW_3__EXT_HEAD__WIDTH                                 2
#define SHUB_PORT0_I2C_IDW_3__EXT_HEAD__MASK                        0x00180000U
#define SHUB_PORT0_I2C_IDW_3__EXT_HEAD__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00180000U) >> 19)
#define SHUB_PORT0_I2C_IDW_3__EXT_HEAD__WRITE(src) \
                    (((uint32_t)(src)\
                    << 19) & 0x00180000U)
#define SHUB_PORT0_I2C_IDW_3__EXT_HEAD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00180000U) | (((uint32_t)(src) <<\
                    19) & 0x00180000U)
#define SHUB_PORT0_I2C_IDW_3__EXT_HEAD__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 19) & ~0x00180000U)))
#define SHUB_PORT0_I2C_IDW_3__EXT_HEAD__RESET_VALUE                 0x00000000U
/** @} */

/* macros for field ext_tail */
/**
 * @defgroup at_apb_shub_regs_core_ext_tail_field ext_tail_field
 * @brief macros for field ext_tail
 * @details At end of 8 bits plus ack/nack, what should tail be?  0 = stop  1 = stall  2 = restart
 * @{
 */
#define SHUB_PORT0_I2C_IDW_3__EXT_TAIL__SHIFT                                21
#define SHUB_PORT0_I2C_IDW_3__EXT_TAIL__WIDTH                                 2
#define SHUB_PORT0_I2C_IDW_3__EXT_TAIL__MASK                        0x00600000U
#define SHUB_PORT0_I2C_IDW_3__EXT_TAIL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00600000U) >> 21)
#define SHUB_PORT0_I2C_IDW_3__EXT_TAIL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 21) & 0x00600000U)
#define SHUB_PORT0_I2C_IDW_3__EXT_TAIL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00600000U) | (((uint32_t)(src) <<\
                    21) & 0x00600000U)
#define SHUB_PORT0_I2C_IDW_3__EXT_TAIL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 21) & ~0x00600000U)))
#define SHUB_PORT0_I2C_IDW_3__EXT_TAIL__RESET_VALUE                 0x00000000U
/** @} */

/* macros for field ext_master_drives_ack */
/**
 * @defgroup at_apb_shub_regs_core_ext_master_drives_ack_field ext_master_drives_ack_field
 * @brief macros for field ext_master_drives_ack
 * @details Specifies that master is to drive ack.
 * @{
 */
#define SHUB_PORT0_I2C_IDW_3__EXT_MASTER_DRIVES_ACK__SHIFT                   23
#define SHUB_PORT0_I2C_IDW_3__EXT_MASTER_DRIVES_ACK__WIDTH                    1
#define SHUB_PORT0_I2C_IDW_3__EXT_MASTER_DRIVES_ACK__MASK           0x00800000U
#define SHUB_PORT0_I2C_IDW_3__EXT_MASTER_DRIVES_ACK__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00800000U) >> 23)
#define SHUB_PORT0_I2C_IDW_3__EXT_MASTER_DRIVES_ACK__WRITE(src) \
                    (((uint32_t)(src)\
                    << 23) & 0x00800000U)
#define SHUB_PORT0_I2C_IDW_3__EXT_MASTER_DRIVES_ACK__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | (((uint32_t)(src) <<\
                    23) & 0x00800000U)
#define SHUB_PORT0_I2C_IDW_3__EXT_MASTER_DRIVES_ACK__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 23) & ~0x00800000U)))
#define SHUB_PORT0_I2C_IDW_3__EXT_MASTER_DRIVES_ACK__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(1) << 23)
#define SHUB_PORT0_I2C_IDW_3__EXT_MASTER_DRIVES_ACK__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(0) << 23)
#define SHUB_PORT0_I2C_IDW_3__EXT_MASTER_DRIVES_ACK__RESET_VALUE    0x00000000U
/** @} */

/* macros for field ext_ack_value_to_drive */
/**
 * @defgroup at_apb_shub_regs_core_ext_ack_value_to_drive_field ext_ack_value_to_drive_field
 * @brief macros for field ext_ack_value_to_drive
 * @details If ack is to be driven by master, what value to drive?
 * @{
 */
#define SHUB_PORT0_I2C_IDW_3__EXT_ACK_VALUE_TO_DRIVE__SHIFT                  24
#define SHUB_PORT0_I2C_IDW_3__EXT_ACK_VALUE_TO_DRIVE__WIDTH                   1
#define SHUB_PORT0_I2C_IDW_3__EXT_ACK_VALUE_TO_DRIVE__MASK          0x01000000U
#define SHUB_PORT0_I2C_IDW_3__EXT_ACK_VALUE_TO_DRIVE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x01000000U) >> 24)
#define SHUB_PORT0_I2C_IDW_3__EXT_ACK_VALUE_TO_DRIVE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0x01000000U)
#define SHUB_PORT0_I2C_IDW_3__EXT_ACK_VALUE_TO_DRIVE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | (((uint32_t)(src) <<\
                    24) & 0x01000000U)
#define SHUB_PORT0_I2C_IDW_3__EXT_ACK_VALUE_TO_DRIVE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x01000000U)))
#define SHUB_PORT0_I2C_IDW_3__EXT_ACK_VALUE_TO_DRIVE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(1) << 24)
#define SHUB_PORT0_I2C_IDW_3__EXT_ACK_VALUE_TO_DRIVE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(0) << 24)
#define SHUB_PORT0_I2C_IDW_3__EXT_ACK_VALUE_TO_DRIVE__RESET_VALUE   0x00000000U
/** @} */
#define SHUB_PORT0_I2C_IDW_3__TYPE                                     uint32_t
#define SHUB_PORT0_I2C_IDW_3__READ                                  0x01ffffffU
#define SHUB_PORT0_I2C_IDW_3__WRITE                                 0x01ffffffU
#define SHUB_PORT0_I2C_IDW_3__PRESERVED                             0x01ffffffU
#define SHUB_PORT0_I2C_IDW_3__RESET_VALUE                           0x0001fe00U

#endif /* __SHUB_PORT0_I2C_IDW_3_MACRO__ */

/** @} end of port0_i2c_idw_3 */

/* macros for BlueprintGlobalNameSpace::SHUB_port0_i2c_idw_4 */
/**
 * @defgroup at_apb_shub_regs_core_port0_i2c_idw_4 port0_i2c_idw_4
 * @brief id(read) of sensor4 on port0 prior to pointer address write definitions.
 * @{
 */
#ifndef __SHUB_PORT0_I2C_IDW_4_MACRO__
#define __SHUB_PORT0_I2C_IDW_4_MACRO__

/* macros for field ext_data_ie_ovrd */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_ie_ovrd_field ext_data_ie_ovrd_field
 * @brief macros for field ext_data_ie_ovrd
 * @details 1 = ie is high  0 = ie is ~oe
 * @{
 */
#define SHUB_PORT0_I2C_IDW_4__EXT_DATA_IE_OVRD__SHIFT                         0
#define SHUB_PORT0_I2C_IDW_4__EXT_DATA_IE_OVRD__WIDTH                         1
#define SHUB_PORT0_I2C_IDW_4__EXT_DATA_IE_OVRD__MASK                0x00000001U
#define SHUB_PORT0_I2C_IDW_4__EXT_DATA_IE_OVRD__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT0_I2C_IDW_4__EXT_DATA_IE_OVRD__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT0_I2C_IDW_4__EXT_DATA_IE_OVRD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define SHUB_PORT0_I2C_IDW_4__EXT_DATA_IE_OVRD__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define SHUB_PORT0_I2C_IDW_4__EXT_DATA_IE_OVRD__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define SHUB_PORT0_I2C_IDW_4__EXT_DATA_IE_OVRD__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define SHUB_PORT0_I2C_IDW_4__EXT_DATA_IE_OVRD__RESET_VALUE         0x00000000U
/** @} */

/* macros for field ext_data_o */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_o_field ext_data_o_field
 * @brief macros for field ext_data_o
 * @details outbound data; can be device id, address within device, or write data; if it's device id, the LSB is the R/Wb indicator
 * @{
 */
#define SHUB_PORT0_I2C_IDW_4__EXT_DATA_O__SHIFT                               1
#define SHUB_PORT0_I2C_IDW_4__EXT_DATA_O__WIDTH                               8
#define SHUB_PORT0_I2C_IDW_4__EXT_DATA_O__MASK                      0x000001feU
#define SHUB_PORT0_I2C_IDW_4__EXT_DATA_O__READ(src) \
                    (((uint32_t)(src)\
                    & 0x000001feU) >> 1)
#define SHUB_PORT0_I2C_IDW_4__EXT_DATA_O__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x000001feU)
#define SHUB_PORT0_I2C_IDW_4__EXT_DATA_O__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000001feU) | (((uint32_t)(src) <<\
                    1) & 0x000001feU)
#define SHUB_PORT0_I2C_IDW_4__EXT_DATA_O__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x000001feU)))
#define SHUB_PORT0_I2C_IDW_4__EXT_DATA_O__RESET_VALUE               0x00000000U
/** @} */

/* macros for field ext_data_oe */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_oe_field ext_data_oe_field
 * @brief macros for field ext_data_oe
 * @details sda output enable per bit
 * @{
 */
#define SHUB_PORT0_I2C_IDW_4__EXT_DATA_OE__SHIFT                              9
#define SHUB_PORT0_I2C_IDW_4__EXT_DATA_OE__WIDTH                              8
#define SHUB_PORT0_I2C_IDW_4__EXT_DATA_OE__MASK                     0x0001fe00U
#define SHUB_PORT0_I2C_IDW_4__EXT_DATA_OE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0001fe00U) >> 9)
#define SHUB_PORT0_I2C_IDW_4__EXT_DATA_OE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 9) & 0x0001fe00U)
#define SHUB_PORT0_I2C_IDW_4__EXT_DATA_OE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0001fe00U) | (((uint32_t)(src) <<\
                    9) & 0x0001fe00U)
#define SHUB_PORT0_I2C_IDW_4__EXT_DATA_OE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 9) & ~0x0001fe00U)))
#define SHUB_PORT0_I2C_IDW_4__EXT_DATA_OE__RESET_VALUE              0x000000ffU
/** @} */

/* macros for field ext_data_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_pu_field ext_data_pu_field
 * @brief macros for field ext_data_pu
 * @details sda pin pullup enable
 * @{
 */
#define SHUB_PORT0_I2C_IDW_4__EXT_DATA_PU__SHIFT                             17
#define SHUB_PORT0_I2C_IDW_4__EXT_DATA_PU__WIDTH                              1
#define SHUB_PORT0_I2C_IDW_4__EXT_DATA_PU__MASK                     0x00020000U
#define SHUB_PORT0_I2C_IDW_4__EXT_DATA_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00020000U) >> 17)
#define SHUB_PORT0_I2C_IDW_4__EXT_DATA_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 17) & 0x00020000U)
#define SHUB_PORT0_I2C_IDW_4__EXT_DATA_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | (((uint32_t)(src) <<\
                    17) & 0x00020000U)
#define SHUB_PORT0_I2C_IDW_4__EXT_DATA_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 17) & ~0x00020000U)))
#define SHUB_PORT0_I2C_IDW_4__EXT_DATA_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(1) << 17)
#define SHUB_PORT0_I2C_IDW_4__EXT_DATA_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(0) << 17)
#define SHUB_PORT0_I2C_IDW_4__EXT_DATA_PU__RESET_VALUE              0x00000000U
/** @} */

/* macros for field ext_clk_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_clk_pu_field ext_clk_pu_field
 * @brief macros for field ext_clk_pu
 * @details sck pin pullup enable
 * @{
 */
#define SHUB_PORT0_I2C_IDW_4__EXT_CLK_PU__SHIFT                              18
#define SHUB_PORT0_I2C_IDW_4__EXT_CLK_PU__WIDTH                               1
#define SHUB_PORT0_I2C_IDW_4__EXT_CLK_PU__MASK                      0x00040000U
#define SHUB_PORT0_I2C_IDW_4__EXT_CLK_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00040000U) >> 18)
#define SHUB_PORT0_I2C_IDW_4__EXT_CLK_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 18) & 0x00040000U)
#define SHUB_PORT0_I2C_IDW_4__EXT_CLK_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | (((uint32_t)(src) <<\
                    18) & 0x00040000U)
#define SHUB_PORT0_I2C_IDW_4__EXT_CLK_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 18) & ~0x00040000U)))
#define SHUB_PORT0_I2C_IDW_4__EXT_CLK_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(1) << 18)
#define SHUB_PORT0_I2C_IDW_4__EXT_CLK_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(0) << 18)
#define SHUB_PORT0_I2C_IDW_4__EXT_CLK_PU__RESET_VALUE               0x00000000U
/** @} */

/* macros for field ext_head */
/**
 * @defgroup at_apb_shub_regs_core_ext_head_field ext_head_field
 * @brief macros for field ext_head
 * @details Before data transmission starts, what should head be?  0 = start  1 = stall
 * @{
 */
#define SHUB_PORT0_I2C_IDW_4__EXT_HEAD__SHIFT                                19
#define SHUB_PORT0_I2C_IDW_4__EXT_HEAD__WIDTH                                 2
#define SHUB_PORT0_I2C_IDW_4__EXT_HEAD__MASK                        0x00180000U
#define SHUB_PORT0_I2C_IDW_4__EXT_HEAD__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00180000U) >> 19)
#define SHUB_PORT0_I2C_IDW_4__EXT_HEAD__WRITE(src) \
                    (((uint32_t)(src)\
                    << 19) & 0x00180000U)
#define SHUB_PORT0_I2C_IDW_4__EXT_HEAD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00180000U) | (((uint32_t)(src) <<\
                    19) & 0x00180000U)
#define SHUB_PORT0_I2C_IDW_4__EXT_HEAD__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 19) & ~0x00180000U)))
#define SHUB_PORT0_I2C_IDW_4__EXT_HEAD__RESET_VALUE                 0x00000000U
/** @} */

/* macros for field ext_tail */
/**
 * @defgroup at_apb_shub_regs_core_ext_tail_field ext_tail_field
 * @brief macros for field ext_tail
 * @details At end of 8 bits plus ack/nack, what should tail be?  0 = stop  1 = stall  2 = restart
 * @{
 */
#define SHUB_PORT0_I2C_IDW_4__EXT_TAIL__SHIFT                                21
#define SHUB_PORT0_I2C_IDW_4__EXT_TAIL__WIDTH                                 2
#define SHUB_PORT0_I2C_IDW_4__EXT_TAIL__MASK                        0x00600000U
#define SHUB_PORT0_I2C_IDW_4__EXT_TAIL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00600000U) >> 21)
#define SHUB_PORT0_I2C_IDW_4__EXT_TAIL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 21) & 0x00600000U)
#define SHUB_PORT0_I2C_IDW_4__EXT_TAIL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00600000U) | (((uint32_t)(src) <<\
                    21) & 0x00600000U)
#define SHUB_PORT0_I2C_IDW_4__EXT_TAIL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 21) & ~0x00600000U)))
#define SHUB_PORT0_I2C_IDW_4__EXT_TAIL__RESET_VALUE                 0x00000000U
/** @} */

/* macros for field ext_master_drives_ack */
/**
 * @defgroup at_apb_shub_regs_core_ext_master_drives_ack_field ext_master_drives_ack_field
 * @brief macros for field ext_master_drives_ack
 * @details Specifies that master is to drive ack.
 * @{
 */
#define SHUB_PORT0_I2C_IDW_4__EXT_MASTER_DRIVES_ACK__SHIFT                   23
#define SHUB_PORT0_I2C_IDW_4__EXT_MASTER_DRIVES_ACK__WIDTH                    1
#define SHUB_PORT0_I2C_IDW_4__EXT_MASTER_DRIVES_ACK__MASK           0x00800000U
#define SHUB_PORT0_I2C_IDW_4__EXT_MASTER_DRIVES_ACK__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00800000U) >> 23)
#define SHUB_PORT0_I2C_IDW_4__EXT_MASTER_DRIVES_ACK__WRITE(src) \
                    (((uint32_t)(src)\
                    << 23) & 0x00800000U)
#define SHUB_PORT0_I2C_IDW_4__EXT_MASTER_DRIVES_ACK__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | (((uint32_t)(src) <<\
                    23) & 0x00800000U)
#define SHUB_PORT0_I2C_IDW_4__EXT_MASTER_DRIVES_ACK__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 23) & ~0x00800000U)))
#define SHUB_PORT0_I2C_IDW_4__EXT_MASTER_DRIVES_ACK__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(1) << 23)
#define SHUB_PORT0_I2C_IDW_4__EXT_MASTER_DRIVES_ACK__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(0) << 23)
#define SHUB_PORT0_I2C_IDW_4__EXT_MASTER_DRIVES_ACK__RESET_VALUE    0x00000000U
/** @} */

/* macros for field ext_ack_value_to_drive */
/**
 * @defgroup at_apb_shub_regs_core_ext_ack_value_to_drive_field ext_ack_value_to_drive_field
 * @brief macros for field ext_ack_value_to_drive
 * @details If ack is to be driven by master, what value to drive?
 * @{
 */
#define SHUB_PORT0_I2C_IDW_4__EXT_ACK_VALUE_TO_DRIVE__SHIFT                  24
#define SHUB_PORT0_I2C_IDW_4__EXT_ACK_VALUE_TO_DRIVE__WIDTH                   1
#define SHUB_PORT0_I2C_IDW_4__EXT_ACK_VALUE_TO_DRIVE__MASK          0x01000000U
#define SHUB_PORT0_I2C_IDW_4__EXT_ACK_VALUE_TO_DRIVE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x01000000U) >> 24)
#define SHUB_PORT0_I2C_IDW_4__EXT_ACK_VALUE_TO_DRIVE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0x01000000U)
#define SHUB_PORT0_I2C_IDW_4__EXT_ACK_VALUE_TO_DRIVE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | (((uint32_t)(src) <<\
                    24) & 0x01000000U)
#define SHUB_PORT0_I2C_IDW_4__EXT_ACK_VALUE_TO_DRIVE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x01000000U)))
#define SHUB_PORT0_I2C_IDW_4__EXT_ACK_VALUE_TO_DRIVE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(1) << 24)
#define SHUB_PORT0_I2C_IDW_4__EXT_ACK_VALUE_TO_DRIVE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(0) << 24)
#define SHUB_PORT0_I2C_IDW_4__EXT_ACK_VALUE_TO_DRIVE__RESET_VALUE   0x00000000U
/** @} */
#define SHUB_PORT0_I2C_IDW_4__TYPE                                     uint32_t
#define SHUB_PORT0_I2C_IDW_4__READ                                  0x01ffffffU
#define SHUB_PORT0_I2C_IDW_4__WRITE                                 0x01ffffffU
#define SHUB_PORT0_I2C_IDW_4__PRESERVED                             0x01ffffffU
#define SHUB_PORT0_I2C_IDW_4__RESET_VALUE                           0x0001fe00U

#endif /* __SHUB_PORT0_I2C_IDW_4_MACRO__ */

/** @} end of port0_i2c_idw_4 */

/* macros for BlueprintGlobalNameSpace::SHUB_port0_i2c_idw_5 */
/**
 * @defgroup at_apb_shub_regs_core_port0_i2c_idw_5 port0_i2c_idw_5
 * @brief id(read) of sensor5 on port0 prior to pointer address write definitions.
 * @{
 */
#ifndef __SHUB_PORT0_I2C_IDW_5_MACRO__
#define __SHUB_PORT0_I2C_IDW_5_MACRO__

/* macros for field ext_data_ie_ovrd */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_ie_ovrd_field ext_data_ie_ovrd_field
 * @brief macros for field ext_data_ie_ovrd
 * @details 1 = ie is high  0 = ie is ~oe
 * @{
 */
#define SHUB_PORT0_I2C_IDW_5__EXT_DATA_IE_OVRD__SHIFT                         0
#define SHUB_PORT0_I2C_IDW_5__EXT_DATA_IE_OVRD__WIDTH                         1
#define SHUB_PORT0_I2C_IDW_5__EXT_DATA_IE_OVRD__MASK                0x00000001U
#define SHUB_PORT0_I2C_IDW_5__EXT_DATA_IE_OVRD__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT0_I2C_IDW_5__EXT_DATA_IE_OVRD__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT0_I2C_IDW_5__EXT_DATA_IE_OVRD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define SHUB_PORT0_I2C_IDW_5__EXT_DATA_IE_OVRD__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define SHUB_PORT0_I2C_IDW_5__EXT_DATA_IE_OVRD__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define SHUB_PORT0_I2C_IDW_5__EXT_DATA_IE_OVRD__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define SHUB_PORT0_I2C_IDW_5__EXT_DATA_IE_OVRD__RESET_VALUE         0x00000000U
/** @} */

/* macros for field ext_data_o */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_o_field ext_data_o_field
 * @brief macros for field ext_data_o
 * @details outbound data; can be device id, address within device, or write data; if it's device id, the LSB is the R/Wb indicator
 * @{
 */
#define SHUB_PORT0_I2C_IDW_5__EXT_DATA_O__SHIFT                               1
#define SHUB_PORT0_I2C_IDW_5__EXT_DATA_O__WIDTH                               8
#define SHUB_PORT0_I2C_IDW_5__EXT_DATA_O__MASK                      0x000001feU
#define SHUB_PORT0_I2C_IDW_5__EXT_DATA_O__READ(src) \
                    (((uint32_t)(src)\
                    & 0x000001feU) >> 1)
#define SHUB_PORT0_I2C_IDW_5__EXT_DATA_O__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x000001feU)
#define SHUB_PORT0_I2C_IDW_5__EXT_DATA_O__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000001feU) | (((uint32_t)(src) <<\
                    1) & 0x000001feU)
#define SHUB_PORT0_I2C_IDW_5__EXT_DATA_O__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x000001feU)))
#define SHUB_PORT0_I2C_IDW_5__EXT_DATA_O__RESET_VALUE               0x00000000U
/** @} */

/* macros for field ext_data_oe */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_oe_field ext_data_oe_field
 * @brief macros for field ext_data_oe
 * @details sda output enable per bit
 * @{
 */
#define SHUB_PORT0_I2C_IDW_5__EXT_DATA_OE__SHIFT                              9
#define SHUB_PORT0_I2C_IDW_5__EXT_DATA_OE__WIDTH                              8
#define SHUB_PORT0_I2C_IDW_5__EXT_DATA_OE__MASK                     0x0001fe00U
#define SHUB_PORT0_I2C_IDW_5__EXT_DATA_OE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0001fe00U) >> 9)
#define SHUB_PORT0_I2C_IDW_5__EXT_DATA_OE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 9) & 0x0001fe00U)
#define SHUB_PORT0_I2C_IDW_5__EXT_DATA_OE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0001fe00U) | (((uint32_t)(src) <<\
                    9) & 0x0001fe00U)
#define SHUB_PORT0_I2C_IDW_5__EXT_DATA_OE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 9) & ~0x0001fe00U)))
#define SHUB_PORT0_I2C_IDW_5__EXT_DATA_OE__RESET_VALUE              0x000000ffU
/** @} */

/* macros for field ext_data_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_pu_field ext_data_pu_field
 * @brief macros for field ext_data_pu
 * @details sda pin pullup enable
 * @{
 */
#define SHUB_PORT0_I2C_IDW_5__EXT_DATA_PU__SHIFT                             17
#define SHUB_PORT0_I2C_IDW_5__EXT_DATA_PU__WIDTH                              1
#define SHUB_PORT0_I2C_IDW_5__EXT_DATA_PU__MASK                     0x00020000U
#define SHUB_PORT0_I2C_IDW_5__EXT_DATA_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00020000U) >> 17)
#define SHUB_PORT0_I2C_IDW_5__EXT_DATA_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 17) & 0x00020000U)
#define SHUB_PORT0_I2C_IDW_5__EXT_DATA_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | (((uint32_t)(src) <<\
                    17) & 0x00020000U)
#define SHUB_PORT0_I2C_IDW_5__EXT_DATA_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 17) & ~0x00020000U)))
#define SHUB_PORT0_I2C_IDW_5__EXT_DATA_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(1) << 17)
#define SHUB_PORT0_I2C_IDW_5__EXT_DATA_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(0) << 17)
#define SHUB_PORT0_I2C_IDW_5__EXT_DATA_PU__RESET_VALUE              0x00000000U
/** @} */

/* macros for field ext_clk_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_clk_pu_field ext_clk_pu_field
 * @brief macros for field ext_clk_pu
 * @details sck pin pullup enable
 * @{
 */
#define SHUB_PORT0_I2C_IDW_5__EXT_CLK_PU__SHIFT                              18
#define SHUB_PORT0_I2C_IDW_5__EXT_CLK_PU__WIDTH                               1
#define SHUB_PORT0_I2C_IDW_5__EXT_CLK_PU__MASK                      0x00040000U
#define SHUB_PORT0_I2C_IDW_5__EXT_CLK_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00040000U) >> 18)
#define SHUB_PORT0_I2C_IDW_5__EXT_CLK_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 18) & 0x00040000U)
#define SHUB_PORT0_I2C_IDW_5__EXT_CLK_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | (((uint32_t)(src) <<\
                    18) & 0x00040000U)
#define SHUB_PORT0_I2C_IDW_5__EXT_CLK_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 18) & ~0x00040000U)))
#define SHUB_PORT0_I2C_IDW_5__EXT_CLK_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(1) << 18)
#define SHUB_PORT0_I2C_IDW_5__EXT_CLK_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(0) << 18)
#define SHUB_PORT0_I2C_IDW_5__EXT_CLK_PU__RESET_VALUE               0x00000000U
/** @} */

/* macros for field ext_head */
/**
 * @defgroup at_apb_shub_regs_core_ext_head_field ext_head_field
 * @brief macros for field ext_head
 * @details Before data transmission starts, what should head be?  0 = start  1 = stall
 * @{
 */
#define SHUB_PORT0_I2C_IDW_5__EXT_HEAD__SHIFT                                19
#define SHUB_PORT0_I2C_IDW_5__EXT_HEAD__WIDTH                                 2
#define SHUB_PORT0_I2C_IDW_5__EXT_HEAD__MASK                        0x00180000U
#define SHUB_PORT0_I2C_IDW_5__EXT_HEAD__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00180000U) >> 19)
#define SHUB_PORT0_I2C_IDW_5__EXT_HEAD__WRITE(src) \
                    (((uint32_t)(src)\
                    << 19) & 0x00180000U)
#define SHUB_PORT0_I2C_IDW_5__EXT_HEAD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00180000U) | (((uint32_t)(src) <<\
                    19) & 0x00180000U)
#define SHUB_PORT0_I2C_IDW_5__EXT_HEAD__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 19) & ~0x00180000U)))
#define SHUB_PORT0_I2C_IDW_5__EXT_HEAD__RESET_VALUE                 0x00000000U
/** @} */

/* macros for field ext_tail */
/**
 * @defgroup at_apb_shub_regs_core_ext_tail_field ext_tail_field
 * @brief macros for field ext_tail
 * @details At end of 8 bits plus ack/nack, what should tail be?  0 = stop  1 = stall  2 = restart
 * @{
 */
#define SHUB_PORT0_I2C_IDW_5__EXT_TAIL__SHIFT                                21
#define SHUB_PORT0_I2C_IDW_5__EXT_TAIL__WIDTH                                 2
#define SHUB_PORT0_I2C_IDW_5__EXT_TAIL__MASK                        0x00600000U
#define SHUB_PORT0_I2C_IDW_5__EXT_TAIL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00600000U) >> 21)
#define SHUB_PORT0_I2C_IDW_5__EXT_TAIL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 21) & 0x00600000U)
#define SHUB_PORT0_I2C_IDW_5__EXT_TAIL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00600000U) | (((uint32_t)(src) <<\
                    21) & 0x00600000U)
#define SHUB_PORT0_I2C_IDW_5__EXT_TAIL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 21) & ~0x00600000U)))
#define SHUB_PORT0_I2C_IDW_5__EXT_TAIL__RESET_VALUE                 0x00000000U
/** @} */

/* macros for field ext_master_drives_ack */
/**
 * @defgroup at_apb_shub_regs_core_ext_master_drives_ack_field ext_master_drives_ack_field
 * @brief macros for field ext_master_drives_ack
 * @details Specifies that master is to drive ack.
 * @{
 */
#define SHUB_PORT0_I2C_IDW_5__EXT_MASTER_DRIVES_ACK__SHIFT                   23
#define SHUB_PORT0_I2C_IDW_5__EXT_MASTER_DRIVES_ACK__WIDTH                    1
#define SHUB_PORT0_I2C_IDW_5__EXT_MASTER_DRIVES_ACK__MASK           0x00800000U
#define SHUB_PORT0_I2C_IDW_5__EXT_MASTER_DRIVES_ACK__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00800000U) >> 23)
#define SHUB_PORT0_I2C_IDW_5__EXT_MASTER_DRIVES_ACK__WRITE(src) \
                    (((uint32_t)(src)\
                    << 23) & 0x00800000U)
#define SHUB_PORT0_I2C_IDW_5__EXT_MASTER_DRIVES_ACK__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | (((uint32_t)(src) <<\
                    23) & 0x00800000U)
#define SHUB_PORT0_I2C_IDW_5__EXT_MASTER_DRIVES_ACK__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 23) & ~0x00800000U)))
#define SHUB_PORT0_I2C_IDW_5__EXT_MASTER_DRIVES_ACK__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(1) << 23)
#define SHUB_PORT0_I2C_IDW_5__EXT_MASTER_DRIVES_ACK__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(0) << 23)
#define SHUB_PORT0_I2C_IDW_5__EXT_MASTER_DRIVES_ACK__RESET_VALUE    0x00000000U
/** @} */

/* macros for field ext_ack_value_to_drive */
/**
 * @defgroup at_apb_shub_regs_core_ext_ack_value_to_drive_field ext_ack_value_to_drive_field
 * @brief macros for field ext_ack_value_to_drive
 * @details If ack is to be driven by master, what value to drive?
 * @{
 */
#define SHUB_PORT0_I2C_IDW_5__EXT_ACK_VALUE_TO_DRIVE__SHIFT                  24
#define SHUB_PORT0_I2C_IDW_5__EXT_ACK_VALUE_TO_DRIVE__WIDTH                   1
#define SHUB_PORT0_I2C_IDW_5__EXT_ACK_VALUE_TO_DRIVE__MASK          0x01000000U
#define SHUB_PORT0_I2C_IDW_5__EXT_ACK_VALUE_TO_DRIVE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x01000000U) >> 24)
#define SHUB_PORT0_I2C_IDW_5__EXT_ACK_VALUE_TO_DRIVE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0x01000000U)
#define SHUB_PORT0_I2C_IDW_5__EXT_ACK_VALUE_TO_DRIVE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | (((uint32_t)(src) <<\
                    24) & 0x01000000U)
#define SHUB_PORT0_I2C_IDW_5__EXT_ACK_VALUE_TO_DRIVE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x01000000U)))
#define SHUB_PORT0_I2C_IDW_5__EXT_ACK_VALUE_TO_DRIVE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(1) << 24)
#define SHUB_PORT0_I2C_IDW_5__EXT_ACK_VALUE_TO_DRIVE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(0) << 24)
#define SHUB_PORT0_I2C_IDW_5__EXT_ACK_VALUE_TO_DRIVE__RESET_VALUE   0x00000000U
/** @} */
#define SHUB_PORT0_I2C_IDW_5__TYPE                                     uint32_t
#define SHUB_PORT0_I2C_IDW_5__READ                                  0x01ffffffU
#define SHUB_PORT0_I2C_IDW_5__WRITE                                 0x01ffffffU
#define SHUB_PORT0_I2C_IDW_5__PRESERVED                             0x01ffffffU
#define SHUB_PORT0_I2C_IDW_5__RESET_VALUE                           0x0001fe00U

#endif /* __SHUB_PORT0_I2C_IDW_5_MACRO__ */

/** @} end of port0_i2c_idw_5 */

/* macros for BlueprintGlobalNameSpace::SHUB_port0_i2c_idw_6 */
/**
 * @defgroup at_apb_shub_regs_core_port0_i2c_idw_6 port0_i2c_idw_6
 * @brief id(read) of sensor6 on port0 prior to pointer address write definitions.
 * @{
 */
#ifndef __SHUB_PORT0_I2C_IDW_6_MACRO__
#define __SHUB_PORT0_I2C_IDW_6_MACRO__

/* macros for field ext_data_ie_ovrd */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_ie_ovrd_field ext_data_ie_ovrd_field
 * @brief macros for field ext_data_ie_ovrd
 * @details 1 = ie is high  0 = ie is ~oe
 * @{
 */
#define SHUB_PORT0_I2C_IDW_6__EXT_DATA_IE_OVRD__SHIFT                         0
#define SHUB_PORT0_I2C_IDW_6__EXT_DATA_IE_OVRD__WIDTH                         1
#define SHUB_PORT0_I2C_IDW_6__EXT_DATA_IE_OVRD__MASK                0x00000001U
#define SHUB_PORT0_I2C_IDW_6__EXT_DATA_IE_OVRD__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT0_I2C_IDW_6__EXT_DATA_IE_OVRD__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT0_I2C_IDW_6__EXT_DATA_IE_OVRD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define SHUB_PORT0_I2C_IDW_6__EXT_DATA_IE_OVRD__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define SHUB_PORT0_I2C_IDW_6__EXT_DATA_IE_OVRD__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define SHUB_PORT0_I2C_IDW_6__EXT_DATA_IE_OVRD__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define SHUB_PORT0_I2C_IDW_6__EXT_DATA_IE_OVRD__RESET_VALUE         0x00000000U
/** @} */

/* macros for field ext_data_o */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_o_field ext_data_o_field
 * @brief macros for field ext_data_o
 * @details outbound data; can be device id, address within device, or write data; if it's device id, the LSB is the R/Wb indicator
 * @{
 */
#define SHUB_PORT0_I2C_IDW_6__EXT_DATA_O__SHIFT                               1
#define SHUB_PORT0_I2C_IDW_6__EXT_DATA_O__WIDTH                               8
#define SHUB_PORT0_I2C_IDW_6__EXT_DATA_O__MASK                      0x000001feU
#define SHUB_PORT0_I2C_IDW_6__EXT_DATA_O__READ(src) \
                    (((uint32_t)(src)\
                    & 0x000001feU) >> 1)
#define SHUB_PORT0_I2C_IDW_6__EXT_DATA_O__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x000001feU)
#define SHUB_PORT0_I2C_IDW_6__EXT_DATA_O__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000001feU) | (((uint32_t)(src) <<\
                    1) & 0x000001feU)
#define SHUB_PORT0_I2C_IDW_6__EXT_DATA_O__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x000001feU)))
#define SHUB_PORT0_I2C_IDW_6__EXT_DATA_O__RESET_VALUE               0x00000000U
/** @} */

/* macros for field ext_data_oe */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_oe_field ext_data_oe_field
 * @brief macros for field ext_data_oe
 * @details sda output enable per bit
 * @{
 */
#define SHUB_PORT0_I2C_IDW_6__EXT_DATA_OE__SHIFT                              9
#define SHUB_PORT0_I2C_IDW_6__EXT_DATA_OE__WIDTH                              8
#define SHUB_PORT0_I2C_IDW_6__EXT_DATA_OE__MASK                     0x0001fe00U
#define SHUB_PORT0_I2C_IDW_6__EXT_DATA_OE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0001fe00U) >> 9)
#define SHUB_PORT0_I2C_IDW_6__EXT_DATA_OE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 9) & 0x0001fe00U)
#define SHUB_PORT0_I2C_IDW_6__EXT_DATA_OE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0001fe00U) | (((uint32_t)(src) <<\
                    9) & 0x0001fe00U)
#define SHUB_PORT0_I2C_IDW_6__EXT_DATA_OE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 9) & ~0x0001fe00U)))
#define SHUB_PORT0_I2C_IDW_6__EXT_DATA_OE__RESET_VALUE              0x000000ffU
/** @} */

/* macros for field ext_data_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_pu_field ext_data_pu_field
 * @brief macros for field ext_data_pu
 * @details sda pin pullup enable
 * @{
 */
#define SHUB_PORT0_I2C_IDW_6__EXT_DATA_PU__SHIFT                             17
#define SHUB_PORT0_I2C_IDW_6__EXT_DATA_PU__WIDTH                              1
#define SHUB_PORT0_I2C_IDW_6__EXT_DATA_PU__MASK                     0x00020000U
#define SHUB_PORT0_I2C_IDW_6__EXT_DATA_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00020000U) >> 17)
#define SHUB_PORT0_I2C_IDW_6__EXT_DATA_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 17) & 0x00020000U)
#define SHUB_PORT0_I2C_IDW_6__EXT_DATA_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | (((uint32_t)(src) <<\
                    17) & 0x00020000U)
#define SHUB_PORT0_I2C_IDW_6__EXT_DATA_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 17) & ~0x00020000U)))
#define SHUB_PORT0_I2C_IDW_6__EXT_DATA_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(1) << 17)
#define SHUB_PORT0_I2C_IDW_6__EXT_DATA_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(0) << 17)
#define SHUB_PORT0_I2C_IDW_6__EXT_DATA_PU__RESET_VALUE              0x00000000U
/** @} */

/* macros for field ext_clk_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_clk_pu_field ext_clk_pu_field
 * @brief macros for field ext_clk_pu
 * @details sck pin pullup enable
 * @{
 */
#define SHUB_PORT0_I2C_IDW_6__EXT_CLK_PU__SHIFT                              18
#define SHUB_PORT0_I2C_IDW_6__EXT_CLK_PU__WIDTH                               1
#define SHUB_PORT0_I2C_IDW_6__EXT_CLK_PU__MASK                      0x00040000U
#define SHUB_PORT0_I2C_IDW_6__EXT_CLK_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00040000U) >> 18)
#define SHUB_PORT0_I2C_IDW_6__EXT_CLK_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 18) & 0x00040000U)
#define SHUB_PORT0_I2C_IDW_6__EXT_CLK_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | (((uint32_t)(src) <<\
                    18) & 0x00040000U)
#define SHUB_PORT0_I2C_IDW_6__EXT_CLK_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 18) & ~0x00040000U)))
#define SHUB_PORT0_I2C_IDW_6__EXT_CLK_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(1) << 18)
#define SHUB_PORT0_I2C_IDW_6__EXT_CLK_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(0) << 18)
#define SHUB_PORT0_I2C_IDW_6__EXT_CLK_PU__RESET_VALUE               0x00000000U
/** @} */

/* macros for field ext_head */
/**
 * @defgroup at_apb_shub_regs_core_ext_head_field ext_head_field
 * @brief macros for field ext_head
 * @details Before data transmission starts, what should head be?  0 = start  1 = stall
 * @{
 */
#define SHUB_PORT0_I2C_IDW_6__EXT_HEAD__SHIFT                                19
#define SHUB_PORT0_I2C_IDW_6__EXT_HEAD__WIDTH                                 2
#define SHUB_PORT0_I2C_IDW_6__EXT_HEAD__MASK                        0x00180000U
#define SHUB_PORT0_I2C_IDW_6__EXT_HEAD__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00180000U) >> 19)
#define SHUB_PORT0_I2C_IDW_6__EXT_HEAD__WRITE(src) \
                    (((uint32_t)(src)\
                    << 19) & 0x00180000U)
#define SHUB_PORT0_I2C_IDW_6__EXT_HEAD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00180000U) | (((uint32_t)(src) <<\
                    19) & 0x00180000U)
#define SHUB_PORT0_I2C_IDW_6__EXT_HEAD__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 19) & ~0x00180000U)))
#define SHUB_PORT0_I2C_IDW_6__EXT_HEAD__RESET_VALUE                 0x00000000U
/** @} */

/* macros for field ext_tail */
/**
 * @defgroup at_apb_shub_regs_core_ext_tail_field ext_tail_field
 * @brief macros for field ext_tail
 * @details At end of 8 bits plus ack/nack, what should tail be?  0 = stop  1 = stall  2 = restart
 * @{
 */
#define SHUB_PORT0_I2C_IDW_6__EXT_TAIL__SHIFT                                21
#define SHUB_PORT0_I2C_IDW_6__EXT_TAIL__WIDTH                                 2
#define SHUB_PORT0_I2C_IDW_6__EXT_TAIL__MASK                        0x00600000U
#define SHUB_PORT0_I2C_IDW_6__EXT_TAIL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00600000U) >> 21)
#define SHUB_PORT0_I2C_IDW_6__EXT_TAIL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 21) & 0x00600000U)
#define SHUB_PORT0_I2C_IDW_6__EXT_TAIL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00600000U) | (((uint32_t)(src) <<\
                    21) & 0x00600000U)
#define SHUB_PORT0_I2C_IDW_6__EXT_TAIL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 21) & ~0x00600000U)))
#define SHUB_PORT0_I2C_IDW_6__EXT_TAIL__RESET_VALUE                 0x00000000U
/** @} */

/* macros for field ext_master_drives_ack */
/**
 * @defgroup at_apb_shub_regs_core_ext_master_drives_ack_field ext_master_drives_ack_field
 * @brief macros for field ext_master_drives_ack
 * @details Specifies that master is to drive ack.
 * @{
 */
#define SHUB_PORT0_I2C_IDW_6__EXT_MASTER_DRIVES_ACK__SHIFT                   23
#define SHUB_PORT0_I2C_IDW_6__EXT_MASTER_DRIVES_ACK__WIDTH                    1
#define SHUB_PORT0_I2C_IDW_6__EXT_MASTER_DRIVES_ACK__MASK           0x00800000U
#define SHUB_PORT0_I2C_IDW_6__EXT_MASTER_DRIVES_ACK__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00800000U) >> 23)
#define SHUB_PORT0_I2C_IDW_6__EXT_MASTER_DRIVES_ACK__WRITE(src) \
                    (((uint32_t)(src)\
                    << 23) & 0x00800000U)
#define SHUB_PORT0_I2C_IDW_6__EXT_MASTER_DRIVES_ACK__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | (((uint32_t)(src) <<\
                    23) & 0x00800000U)
#define SHUB_PORT0_I2C_IDW_6__EXT_MASTER_DRIVES_ACK__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 23) & ~0x00800000U)))
#define SHUB_PORT0_I2C_IDW_6__EXT_MASTER_DRIVES_ACK__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(1) << 23)
#define SHUB_PORT0_I2C_IDW_6__EXT_MASTER_DRIVES_ACK__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(0) << 23)
#define SHUB_PORT0_I2C_IDW_6__EXT_MASTER_DRIVES_ACK__RESET_VALUE    0x00000000U
/** @} */

/* macros for field ext_ack_value_to_drive */
/**
 * @defgroup at_apb_shub_regs_core_ext_ack_value_to_drive_field ext_ack_value_to_drive_field
 * @brief macros for field ext_ack_value_to_drive
 * @details If ack is to be driven by master, what value to drive?
 * @{
 */
#define SHUB_PORT0_I2C_IDW_6__EXT_ACK_VALUE_TO_DRIVE__SHIFT                  24
#define SHUB_PORT0_I2C_IDW_6__EXT_ACK_VALUE_TO_DRIVE__WIDTH                   1
#define SHUB_PORT0_I2C_IDW_6__EXT_ACK_VALUE_TO_DRIVE__MASK          0x01000000U
#define SHUB_PORT0_I2C_IDW_6__EXT_ACK_VALUE_TO_DRIVE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x01000000U) >> 24)
#define SHUB_PORT0_I2C_IDW_6__EXT_ACK_VALUE_TO_DRIVE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0x01000000U)
#define SHUB_PORT0_I2C_IDW_6__EXT_ACK_VALUE_TO_DRIVE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | (((uint32_t)(src) <<\
                    24) & 0x01000000U)
#define SHUB_PORT0_I2C_IDW_6__EXT_ACK_VALUE_TO_DRIVE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x01000000U)))
#define SHUB_PORT0_I2C_IDW_6__EXT_ACK_VALUE_TO_DRIVE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(1) << 24)
#define SHUB_PORT0_I2C_IDW_6__EXT_ACK_VALUE_TO_DRIVE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(0) << 24)
#define SHUB_PORT0_I2C_IDW_6__EXT_ACK_VALUE_TO_DRIVE__RESET_VALUE   0x00000000U
/** @} */
#define SHUB_PORT0_I2C_IDW_6__TYPE                                     uint32_t
#define SHUB_PORT0_I2C_IDW_6__READ                                  0x01ffffffU
#define SHUB_PORT0_I2C_IDW_6__WRITE                                 0x01ffffffU
#define SHUB_PORT0_I2C_IDW_6__PRESERVED                             0x01ffffffU
#define SHUB_PORT0_I2C_IDW_6__RESET_VALUE                           0x0001fe00U

#endif /* __SHUB_PORT0_I2C_IDW_6_MACRO__ */

/** @} end of port0_i2c_idw_6 */

/* macros for BlueprintGlobalNameSpace::SHUB_port0_i2c_idw_7 */
/**
 * @defgroup at_apb_shub_regs_core_port0_i2c_idw_7 port0_i2c_idw_7
 * @brief id(read) of sensor7 on port0 prior to pointer address write definitions.
 * @{
 */
#ifndef __SHUB_PORT0_I2C_IDW_7_MACRO__
#define __SHUB_PORT0_I2C_IDW_7_MACRO__

/* macros for field ext_data_ie_ovrd */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_ie_ovrd_field ext_data_ie_ovrd_field
 * @brief macros for field ext_data_ie_ovrd
 * @details 1 = ie is high  0 = ie is ~oe
 * @{
 */
#define SHUB_PORT0_I2C_IDW_7__EXT_DATA_IE_OVRD__SHIFT                         0
#define SHUB_PORT0_I2C_IDW_7__EXT_DATA_IE_OVRD__WIDTH                         1
#define SHUB_PORT0_I2C_IDW_7__EXT_DATA_IE_OVRD__MASK                0x00000001U
#define SHUB_PORT0_I2C_IDW_7__EXT_DATA_IE_OVRD__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT0_I2C_IDW_7__EXT_DATA_IE_OVRD__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT0_I2C_IDW_7__EXT_DATA_IE_OVRD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define SHUB_PORT0_I2C_IDW_7__EXT_DATA_IE_OVRD__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define SHUB_PORT0_I2C_IDW_7__EXT_DATA_IE_OVRD__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define SHUB_PORT0_I2C_IDW_7__EXT_DATA_IE_OVRD__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define SHUB_PORT0_I2C_IDW_7__EXT_DATA_IE_OVRD__RESET_VALUE         0x00000000U
/** @} */

/* macros for field ext_data_o */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_o_field ext_data_o_field
 * @brief macros for field ext_data_o
 * @details outbound data; can be device id, address within device, or write data; if it's device id, the LSB is the R/Wb indicator
 * @{
 */
#define SHUB_PORT0_I2C_IDW_7__EXT_DATA_O__SHIFT                               1
#define SHUB_PORT0_I2C_IDW_7__EXT_DATA_O__WIDTH                               8
#define SHUB_PORT0_I2C_IDW_7__EXT_DATA_O__MASK                      0x000001feU
#define SHUB_PORT0_I2C_IDW_7__EXT_DATA_O__READ(src) \
                    (((uint32_t)(src)\
                    & 0x000001feU) >> 1)
#define SHUB_PORT0_I2C_IDW_7__EXT_DATA_O__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x000001feU)
#define SHUB_PORT0_I2C_IDW_7__EXT_DATA_O__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000001feU) | (((uint32_t)(src) <<\
                    1) & 0x000001feU)
#define SHUB_PORT0_I2C_IDW_7__EXT_DATA_O__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x000001feU)))
#define SHUB_PORT0_I2C_IDW_7__EXT_DATA_O__RESET_VALUE               0x00000000U
/** @} */

/* macros for field ext_data_oe */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_oe_field ext_data_oe_field
 * @brief macros for field ext_data_oe
 * @details sda output enable per bit
 * @{
 */
#define SHUB_PORT0_I2C_IDW_7__EXT_DATA_OE__SHIFT                              9
#define SHUB_PORT0_I2C_IDW_7__EXT_DATA_OE__WIDTH                              8
#define SHUB_PORT0_I2C_IDW_7__EXT_DATA_OE__MASK                     0x0001fe00U
#define SHUB_PORT0_I2C_IDW_7__EXT_DATA_OE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0001fe00U) >> 9)
#define SHUB_PORT0_I2C_IDW_7__EXT_DATA_OE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 9) & 0x0001fe00U)
#define SHUB_PORT0_I2C_IDW_7__EXT_DATA_OE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0001fe00U) | (((uint32_t)(src) <<\
                    9) & 0x0001fe00U)
#define SHUB_PORT0_I2C_IDW_7__EXT_DATA_OE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 9) & ~0x0001fe00U)))
#define SHUB_PORT0_I2C_IDW_7__EXT_DATA_OE__RESET_VALUE              0x000000ffU
/** @} */

/* macros for field ext_data_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_pu_field ext_data_pu_field
 * @brief macros for field ext_data_pu
 * @details sda pin pullup enable
 * @{
 */
#define SHUB_PORT0_I2C_IDW_7__EXT_DATA_PU__SHIFT                             17
#define SHUB_PORT0_I2C_IDW_7__EXT_DATA_PU__WIDTH                              1
#define SHUB_PORT0_I2C_IDW_7__EXT_DATA_PU__MASK                     0x00020000U
#define SHUB_PORT0_I2C_IDW_7__EXT_DATA_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00020000U) >> 17)
#define SHUB_PORT0_I2C_IDW_7__EXT_DATA_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 17) & 0x00020000U)
#define SHUB_PORT0_I2C_IDW_7__EXT_DATA_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | (((uint32_t)(src) <<\
                    17) & 0x00020000U)
#define SHUB_PORT0_I2C_IDW_7__EXT_DATA_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 17) & ~0x00020000U)))
#define SHUB_PORT0_I2C_IDW_7__EXT_DATA_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(1) << 17)
#define SHUB_PORT0_I2C_IDW_7__EXT_DATA_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(0) << 17)
#define SHUB_PORT0_I2C_IDW_7__EXT_DATA_PU__RESET_VALUE              0x00000000U
/** @} */

/* macros for field ext_clk_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_clk_pu_field ext_clk_pu_field
 * @brief macros for field ext_clk_pu
 * @details sck pin pullup enable
 * @{
 */
#define SHUB_PORT0_I2C_IDW_7__EXT_CLK_PU__SHIFT                              18
#define SHUB_PORT0_I2C_IDW_7__EXT_CLK_PU__WIDTH                               1
#define SHUB_PORT0_I2C_IDW_7__EXT_CLK_PU__MASK                      0x00040000U
#define SHUB_PORT0_I2C_IDW_7__EXT_CLK_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00040000U) >> 18)
#define SHUB_PORT0_I2C_IDW_7__EXT_CLK_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 18) & 0x00040000U)
#define SHUB_PORT0_I2C_IDW_7__EXT_CLK_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | (((uint32_t)(src) <<\
                    18) & 0x00040000U)
#define SHUB_PORT0_I2C_IDW_7__EXT_CLK_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 18) & ~0x00040000U)))
#define SHUB_PORT0_I2C_IDW_7__EXT_CLK_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(1) << 18)
#define SHUB_PORT0_I2C_IDW_7__EXT_CLK_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(0) << 18)
#define SHUB_PORT0_I2C_IDW_7__EXT_CLK_PU__RESET_VALUE               0x00000000U
/** @} */

/* macros for field ext_head */
/**
 * @defgroup at_apb_shub_regs_core_ext_head_field ext_head_field
 * @brief macros for field ext_head
 * @details Before data transmission starts, what should head be?  0 = start  1 = stall
 * @{
 */
#define SHUB_PORT0_I2C_IDW_7__EXT_HEAD__SHIFT                                19
#define SHUB_PORT0_I2C_IDW_7__EXT_HEAD__WIDTH                                 2
#define SHUB_PORT0_I2C_IDW_7__EXT_HEAD__MASK                        0x00180000U
#define SHUB_PORT0_I2C_IDW_7__EXT_HEAD__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00180000U) >> 19)
#define SHUB_PORT0_I2C_IDW_7__EXT_HEAD__WRITE(src) \
                    (((uint32_t)(src)\
                    << 19) & 0x00180000U)
#define SHUB_PORT0_I2C_IDW_7__EXT_HEAD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00180000U) | (((uint32_t)(src) <<\
                    19) & 0x00180000U)
#define SHUB_PORT0_I2C_IDW_7__EXT_HEAD__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 19) & ~0x00180000U)))
#define SHUB_PORT0_I2C_IDW_7__EXT_HEAD__RESET_VALUE                 0x00000000U
/** @} */

/* macros for field ext_tail */
/**
 * @defgroup at_apb_shub_regs_core_ext_tail_field ext_tail_field
 * @brief macros for field ext_tail
 * @details At end of 8 bits plus ack/nack, what should tail be?  0 = stop  1 = stall  2 = restart
 * @{
 */
#define SHUB_PORT0_I2C_IDW_7__EXT_TAIL__SHIFT                                21
#define SHUB_PORT0_I2C_IDW_7__EXT_TAIL__WIDTH                                 2
#define SHUB_PORT0_I2C_IDW_7__EXT_TAIL__MASK                        0x00600000U
#define SHUB_PORT0_I2C_IDW_7__EXT_TAIL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00600000U) >> 21)
#define SHUB_PORT0_I2C_IDW_7__EXT_TAIL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 21) & 0x00600000U)
#define SHUB_PORT0_I2C_IDW_7__EXT_TAIL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00600000U) | (((uint32_t)(src) <<\
                    21) & 0x00600000U)
#define SHUB_PORT0_I2C_IDW_7__EXT_TAIL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 21) & ~0x00600000U)))
#define SHUB_PORT0_I2C_IDW_7__EXT_TAIL__RESET_VALUE                 0x00000000U
/** @} */

/* macros for field ext_master_drives_ack */
/**
 * @defgroup at_apb_shub_regs_core_ext_master_drives_ack_field ext_master_drives_ack_field
 * @brief macros for field ext_master_drives_ack
 * @details Specifies that master is to drive ack.
 * @{
 */
#define SHUB_PORT0_I2C_IDW_7__EXT_MASTER_DRIVES_ACK__SHIFT                   23
#define SHUB_PORT0_I2C_IDW_7__EXT_MASTER_DRIVES_ACK__WIDTH                    1
#define SHUB_PORT0_I2C_IDW_7__EXT_MASTER_DRIVES_ACK__MASK           0x00800000U
#define SHUB_PORT0_I2C_IDW_7__EXT_MASTER_DRIVES_ACK__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00800000U) >> 23)
#define SHUB_PORT0_I2C_IDW_7__EXT_MASTER_DRIVES_ACK__WRITE(src) \
                    (((uint32_t)(src)\
                    << 23) & 0x00800000U)
#define SHUB_PORT0_I2C_IDW_7__EXT_MASTER_DRIVES_ACK__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | (((uint32_t)(src) <<\
                    23) & 0x00800000U)
#define SHUB_PORT0_I2C_IDW_7__EXT_MASTER_DRIVES_ACK__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 23) & ~0x00800000U)))
#define SHUB_PORT0_I2C_IDW_7__EXT_MASTER_DRIVES_ACK__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(1) << 23)
#define SHUB_PORT0_I2C_IDW_7__EXT_MASTER_DRIVES_ACK__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(0) << 23)
#define SHUB_PORT0_I2C_IDW_7__EXT_MASTER_DRIVES_ACK__RESET_VALUE    0x00000000U
/** @} */

/* macros for field ext_ack_value_to_drive */
/**
 * @defgroup at_apb_shub_regs_core_ext_ack_value_to_drive_field ext_ack_value_to_drive_field
 * @brief macros for field ext_ack_value_to_drive
 * @details If ack is to be driven by master, what value to drive?
 * @{
 */
#define SHUB_PORT0_I2C_IDW_7__EXT_ACK_VALUE_TO_DRIVE__SHIFT                  24
#define SHUB_PORT0_I2C_IDW_7__EXT_ACK_VALUE_TO_DRIVE__WIDTH                   1
#define SHUB_PORT0_I2C_IDW_7__EXT_ACK_VALUE_TO_DRIVE__MASK          0x01000000U
#define SHUB_PORT0_I2C_IDW_7__EXT_ACK_VALUE_TO_DRIVE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x01000000U) >> 24)
#define SHUB_PORT0_I2C_IDW_7__EXT_ACK_VALUE_TO_DRIVE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0x01000000U)
#define SHUB_PORT0_I2C_IDW_7__EXT_ACK_VALUE_TO_DRIVE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | (((uint32_t)(src) <<\
                    24) & 0x01000000U)
#define SHUB_PORT0_I2C_IDW_7__EXT_ACK_VALUE_TO_DRIVE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x01000000U)))
#define SHUB_PORT0_I2C_IDW_7__EXT_ACK_VALUE_TO_DRIVE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(1) << 24)
#define SHUB_PORT0_I2C_IDW_7__EXT_ACK_VALUE_TO_DRIVE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(0) << 24)
#define SHUB_PORT0_I2C_IDW_7__EXT_ACK_VALUE_TO_DRIVE__RESET_VALUE   0x00000000U
/** @} */
#define SHUB_PORT0_I2C_IDW_7__TYPE                                     uint32_t
#define SHUB_PORT0_I2C_IDW_7__READ                                  0x01ffffffU
#define SHUB_PORT0_I2C_IDW_7__WRITE                                 0x01ffffffU
#define SHUB_PORT0_I2C_IDW_7__PRESERVED                             0x01ffffffU
#define SHUB_PORT0_I2C_IDW_7__RESET_VALUE                           0x0001fe00U

#endif /* __SHUB_PORT0_I2C_IDW_7_MACRO__ */

/** @} end of port0_i2c_idw_7 */

/* macros for BlueprintGlobalNameSpace::SHUB_port0_i2c_addr_0 */
/**
 * @defgroup at_apb_shub_regs_core_port0_i2c_addr_0 port0_i2c_addr_0
 * @brief pointer addr of sensor0 on port0 definitions.
 * @{
 */
#ifndef __SHUB_PORT0_I2C_ADDR_0_MACRO__
#define __SHUB_PORT0_I2C_ADDR_0_MACRO__

/* macros for field ext_data_ie_ovrd */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_ie_ovrd_field ext_data_ie_ovrd_field
 * @brief macros for field ext_data_ie_ovrd
 * @details 1 = ie is high  0 = ie is ~oe
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_0__EXT_DATA_IE_OVRD__SHIFT                        0
#define SHUB_PORT0_I2C_ADDR_0__EXT_DATA_IE_OVRD__WIDTH                        1
#define SHUB_PORT0_I2C_ADDR_0__EXT_DATA_IE_OVRD__MASK               0x00000001U
#define SHUB_PORT0_I2C_ADDR_0__EXT_DATA_IE_OVRD__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT0_I2C_ADDR_0__EXT_DATA_IE_OVRD__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT0_I2C_ADDR_0__EXT_DATA_IE_OVRD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define SHUB_PORT0_I2C_ADDR_0__EXT_DATA_IE_OVRD__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define SHUB_PORT0_I2C_ADDR_0__EXT_DATA_IE_OVRD__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define SHUB_PORT0_I2C_ADDR_0__EXT_DATA_IE_OVRD__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define SHUB_PORT0_I2C_ADDR_0__EXT_DATA_IE_OVRD__RESET_VALUE        0x00000000U
/** @} */

/* macros for field ext_data_o */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_o_field ext_data_o_field
 * @brief macros for field ext_data_o
 * @details outbound data; can be device id, address within device, or write data; if it's device id, the LSB is the R/Wb indicator
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_0__EXT_DATA_O__SHIFT                              1
#define SHUB_PORT0_I2C_ADDR_0__EXT_DATA_O__WIDTH                              8
#define SHUB_PORT0_I2C_ADDR_0__EXT_DATA_O__MASK                     0x000001feU
#define SHUB_PORT0_I2C_ADDR_0__EXT_DATA_O__READ(src) \
                    (((uint32_t)(src)\
                    & 0x000001feU) >> 1)
#define SHUB_PORT0_I2C_ADDR_0__EXT_DATA_O__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x000001feU)
#define SHUB_PORT0_I2C_ADDR_0__EXT_DATA_O__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000001feU) | (((uint32_t)(src) <<\
                    1) & 0x000001feU)
#define SHUB_PORT0_I2C_ADDR_0__EXT_DATA_O__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x000001feU)))
#define SHUB_PORT0_I2C_ADDR_0__EXT_DATA_O__RESET_VALUE              0x00000000U
/** @} */

/* macros for field ext_data_oe */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_oe_field ext_data_oe_field
 * @brief macros for field ext_data_oe
 * @details sda output enable per bit
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_0__EXT_DATA_OE__SHIFT                             9
#define SHUB_PORT0_I2C_ADDR_0__EXT_DATA_OE__WIDTH                             8
#define SHUB_PORT0_I2C_ADDR_0__EXT_DATA_OE__MASK                    0x0001fe00U
#define SHUB_PORT0_I2C_ADDR_0__EXT_DATA_OE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0001fe00U) >> 9)
#define SHUB_PORT0_I2C_ADDR_0__EXT_DATA_OE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 9) & 0x0001fe00U)
#define SHUB_PORT0_I2C_ADDR_0__EXT_DATA_OE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0001fe00U) | (((uint32_t)(src) <<\
                    9) & 0x0001fe00U)
#define SHUB_PORT0_I2C_ADDR_0__EXT_DATA_OE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 9) & ~0x0001fe00U)))
#define SHUB_PORT0_I2C_ADDR_0__EXT_DATA_OE__RESET_VALUE             0x000000ffU
/** @} */

/* macros for field ext_data_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_pu_field ext_data_pu_field
 * @brief macros for field ext_data_pu
 * @details sda pin pullup enable
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_0__EXT_DATA_PU__SHIFT                            17
#define SHUB_PORT0_I2C_ADDR_0__EXT_DATA_PU__WIDTH                             1
#define SHUB_PORT0_I2C_ADDR_0__EXT_DATA_PU__MASK                    0x00020000U
#define SHUB_PORT0_I2C_ADDR_0__EXT_DATA_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00020000U) >> 17)
#define SHUB_PORT0_I2C_ADDR_0__EXT_DATA_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 17) & 0x00020000U)
#define SHUB_PORT0_I2C_ADDR_0__EXT_DATA_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | (((uint32_t)(src) <<\
                    17) & 0x00020000U)
#define SHUB_PORT0_I2C_ADDR_0__EXT_DATA_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 17) & ~0x00020000U)))
#define SHUB_PORT0_I2C_ADDR_0__EXT_DATA_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(1) << 17)
#define SHUB_PORT0_I2C_ADDR_0__EXT_DATA_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(0) << 17)
#define SHUB_PORT0_I2C_ADDR_0__EXT_DATA_PU__RESET_VALUE             0x00000000U
/** @} */

/* macros for field ext_clk_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_clk_pu_field ext_clk_pu_field
 * @brief macros for field ext_clk_pu
 * @details sck pin pullup enable
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_0__EXT_CLK_PU__SHIFT                             18
#define SHUB_PORT0_I2C_ADDR_0__EXT_CLK_PU__WIDTH                              1
#define SHUB_PORT0_I2C_ADDR_0__EXT_CLK_PU__MASK                     0x00040000U
#define SHUB_PORT0_I2C_ADDR_0__EXT_CLK_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00040000U) >> 18)
#define SHUB_PORT0_I2C_ADDR_0__EXT_CLK_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 18) & 0x00040000U)
#define SHUB_PORT0_I2C_ADDR_0__EXT_CLK_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | (((uint32_t)(src) <<\
                    18) & 0x00040000U)
#define SHUB_PORT0_I2C_ADDR_0__EXT_CLK_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 18) & ~0x00040000U)))
#define SHUB_PORT0_I2C_ADDR_0__EXT_CLK_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(1) << 18)
#define SHUB_PORT0_I2C_ADDR_0__EXT_CLK_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(0) << 18)
#define SHUB_PORT0_I2C_ADDR_0__EXT_CLK_PU__RESET_VALUE              0x00000000U
/** @} */

/* macros for field ext_head */
/**
 * @defgroup at_apb_shub_regs_core_ext_head_field ext_head_field
 * @brief macros for field ext_head
 * @details Before data transmission starts, what should head be?  0 = start  1 = stall
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_0__EXT_HEAD__SHIFT                               19
#define SHUB_PORT0_I2C_ADDR_0__EXT_HEAD__WIDTH                                2
#define SHUB_PORT0_I2C_ADDR_0__EXT_HEAD__MASK                       0x00180000U
#define SHUB_PORT0_I2C_ADDR_0__EXT_HEAD__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00180000U) >> 19)
#define SHUB_PORT0_I2C_ADDR_0__EXT_HEAD__WRITE(src) \
                    (((uint32_t)(src)\
                    << 19) & 0x00180000U)
#define SHUB_PORT0_I2C_ADDR_0__EXT_HEAD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00180000U) | (((uint32_t)(src) <<\
                    19) & 0x00180000U)
#define SHUB_PORT0_I2C_ADDR_0__EXT_HEAD__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 19) & ~0x00180000U)))
#define SHUB_PORT0_I2C_ADDR_0__EXT_HEAD__RESET_VALUE                0x00000000U
/** @} */

/* macros for field ext_tail */
/**
 * @defgroup at_apb_shub_regs_core_ext_tail_field ext_tail_field
 * @brief macros for field ext_tail
 * @details At end of 8 bits plus ack/nack, what should tail be?  0 = stop  1 = stall  2 = restart
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_0__EXT_TAIL__SHIFT                               21
#define SHUB_PORT0_I2C_ADDR_0__EXT_TAIL__WIDTH                                2
#define SHUB_PORT0_I2C_ADDR_0__EXT_TAIL__MASK                       0x00600000U
#define SHUB_PORT0_I2C_ADDR_0__EXT_TAIL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00600000U) >> 21)
#define SHUB_PORT0_I2C_ADDR_0__EXT_TAIL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 21) & 0x00600000U)
#define SHUB_PORT0_I2C_ADDR_0__EXT_TAIL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00600000U) | (((uint32_t)(src) <<\
                    21) & 0x00600000U)
#define SHUB_PORT0_I2C_ADDR_0__EXT_TAIL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 21) & ~0x00600000U)))
#define SHUB_PORT0_I2C_ADDR_0__EXT_TAIL__RESET_VALUE                0x00000000U
/** @} */

/* macros for field ext_master_drives_ack */
/**
 * @defgroup at_apb_shub_regs_core_ext_master_drives_ack_field ext_master_drives_ack_field
 * @brief macros for field ext_master_drives_ack
 * @details Specifies that master is to drive ack.
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_0__EXT_MASTER_DRIVES_ACK__SHIFT                  23
#define SHUB_PORT0_I2C_ADDR_0__EXT_MASTER_DRIVES_ACK__WIDTH                   1
#define SHUB_PORT0_I2C_ADDR_0__EXT_MASTER_DRIVES_ACK__MASK          0x00800000U
#define SHUB_PORT0_I2C_ADDR_0__EXT_MASTER_DRIVES_ACK__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00800000U) >> 23)
#define SHUB_PORT0_I2C_ADDR_0__EXT_MASTER_DRIVES_ACK__WRITE(src) \
                    (((uint32_t)(src)\
                    << 23) & 0x00800000U)
#define SHUB_PORT0_I2C_ADDR_0__EXT_MASTER_DRIVES_ACK__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | (((uint32_t)(src) <<\
                    23) & 0x00800000U)
#define SHUB_PORT0_I2C_ADDR_0__EXT_MASTER_DRIVES_ACK__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 23) & ~0x00800000U)))
#define SHUB_PORT0_I2C_ADDR_0__EXT_MASTER_DRIVES_ACK__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(1) << 23)
#define SHUB_PORT0_I2C_ADDR_0__EXT_MASTER_DRIVES_ACK__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(0) << 23)
#define SHUB_PORT0_I2C_ADDR_0__EXT_MASTER_DRIVES_ACK__RESET_VALUE   0x00000000U
/** @} */

/* macros for field ext_ack_value_to_drive */
/**
 * @defgroup at_apb_shub_regs_core_ext_ack_value_to_drive_field ext_ack_value_to_drive_field
 * @brief macros for field ext_ack_value_to_drive
 * @details If ack is to be driven by master, what value to drive?
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_0__EXT_ACK_VALUE_TO_DRIVE__SHIFT                 24
#define SHUB_PORT0_I2C_ADDR_0__EXT_ACK_VALUE_TO_DRIVE__WIDTH                  1
#define SHUB_PORT0_I2C_ADDR_0__EXT_ACK_VALUE_TO_DRIVE__MASK         0x01000000U
#define SHUB_PORT0_I2C_ADDR_0__EXT_ACK_VALUE_TO_DRIVE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x01000000U) >> 24)
#define SHUB_PORT0_I2C_ADDR_0__EXT_ACK_VALUE_TO_DRIVE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0x01000000U)
#define SHUB_PORT0_I2C_ADDR_0__EXT_ACK_VALUE_TO_DRIVE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | (((uint32_t)(src) <<\
                    24) & 0x01000000U)
#define SHUB_PORT0_I2C_ADDR_0__EXT_ACK_VALUE_TO_DRIVE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x01000000U)))
#define SHUB_PORT0_I2C_ADDR_0__EXT_ACK_VALUE_TO_DRIVE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(1) << 24)
#define SHUB_PORT0_I2C_ADDR_0__EXT_ACK_VALUE_TO_DRIVE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(0) << 24)
#define SHUB_PORT0_I2C_ADDR_0__EXT_ACK_VALUE_TO_DRIVE__RESET_VALUE  0x00000000U
/** @} */
#define SHUB_PORT0_I2C_ADDR_0__TYPE                                    uint32_t
#define SHUB_PORT0_I2C_ADDR_0__READ                                 0x01ffffffU
#define SHUB_PORT0_I2C_ADDR_0__WRITE                                0x01ffffffU
#define SHUB_PORT0_I2C_ADDR_0__PRESERVED                            0x01ffffffU
#define SHUB_PORT0_I2C_ADDR_0__RESET_VALUE                          0x0001fe00U

#endif /* __SHUB_PORT0_I2C_ADDR_0_MACRO__ */

/** @} end of port0_i2c_addr_0 */

/* macros for BlueprintGlobalNameSpace::SHUB_port0_i2c_addr_1 */
/**
 * @defgroup at_apb_shub_regs_core_port0_i2c_addr_1 port0_i2c_addr_1
 * @brief pointer addr of sensor1 on port0 definitions.
 * @{
 */
#ifndef __SHUB_PORT0_I2C_ADDR_1_MACRO__
#define __SHUB_PORT0_I2C_ADDR_1_MACRO__

/* macros for field ext_data_ie_ovrd */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_ie_ovrd_field ext_data_ie_ovrd_field
 * @brief macros for field ext_data_ie_ovrd
 * @details 1 = ie is high  0 = ie is ~oe
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_1__EXT_DATA_IE_OVRD__SHIFT                        0
#define SHUB_PORT0_I2C_ADDR_1__EXT_DATA_IE_OVRD__WIDTH                        1
#define SHUB_PORT0_I2C_ADDR_1__EXT_DATA_IE_OVRD__MASK               0x00000001U
#define SHUB_PORT0_I2C_ADDR_1__EXT_DATA_IE_OVRD__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT0_I2C_ADDR_1__EXT_DATA_IE_OVRD__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT0_I2C_ADDR_1__EXT_DATA_IE_OVRD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define SHUB_PORT0_I2C_ADDR_1__EXT_DATA_IE_OVRD__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define SHUB_PORT0_I2C_ADDR_1__EXT_DATA_IE_OVRD__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define SHUB_PORT0_I2C_ADDR_1__EXT_DATA_IE_OVRD__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define SHUB_PORT0_I2C_ADDR_1__EXT_DATA_IE_OVRD__RESET_VALUE        0x00000000U
/** @} */

/* macros for field ext_data_o */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_o_field ext_data_o_field
 * @brief macros for field ext_data_o
 * @details outbound data; can be device id, address within device, or write data; if it's device id, the LSB is the R/Wb indicator
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_1__EXT_DATA_O__SHIFT                              1
#define SHUB_PORT0_I2C_ADDR_1__EXT_DATA_O__WIDTH                              8
#define SHUB_PORT0_I2C_ADDR_1__EXT_DATA_O__MASK                     0x000001feU
#define SHUB_PORT0_I2C_ADDR_1__EXT_DATA_O__READ(src) \
                    (((uint32_t)(src)\
                    & 0x000001feU) >> 1)
#define SHUB_PORT0_I2C_ADDR_1__EXT_DATA_O__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x000001feU)
#define SHUB_PORT0_I2C_ADDR_1__EXT_DATA_O__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000001feU) | (((uint32_t)(src) <<\
                    1) & 0x000001feU)
#define SHUB_PORT0_I2C_ADDR_1__EXT_DATA_O__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x000001feU)))
#define SHUB_PORT0_I2C_ADDR_1__EXT_DATA_O__RESET_VALUE              0x00000000U
/** @} */

/* macros for field ext_data_oe */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_oe_field ext_data_oe_field
 * @brief macros for field ext_data_oe
 * @details sda output enable per bit
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_1__EXT_DATA_OE__SHIFT                             9
#define SHUB_PORT0_I2C_ADDR_1__EXT_DATA_OE__WIDTH                             8
#define SHUB_PORT0_I2C_ADDR_1__EXT_DATA_OE__MASK                    0x0001fe00U
#define SHUB_PORT0_I2C_ADDR_1__EXT_DATA_OE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0001fe00U) >> 9)
#define SHUB_PORT0_I2C_ADDR_1__EXT_DATA_OE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 9) & 0x0001fe00U)
#define SHUB_PORT0_I2C_ADDR_1__EXT_DATA_OE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0001fe00U) | (((uint32_t)(src) <<\
                    9) & 0x0001fe00U)
#define SHUB_PORT0_I2C_ADDR_1__EXT_DATA_OE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 9) & ~0x0001fe00U)))
#define SHUB_PORT0_I2C_ADDR_1__EXT_DATA_OE__RESET_VALUE             0x000000ffU
/** @} */

/* macros for field ext_data_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_pu_field ext_data_pu_field
 * @brief macros for field ext_data_pu
 * @details sda pin pullup enable
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_1__EXT_DATA_PU__SHIFT                            17
#define SHUB_PORT0_I2C_ADDR_1__EXT_DATA_PU__WIDTH                             1
#define SHUB_PORT0_I2C_ADDR_1__EXT_DATA_PU__MASK                    0x00020000U
#define SHUB_PORT0_I2C_ADDR_1__EXT_DATA_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00020000U) >> 17)
#define SHUB_PORT0_I2C_ADDR_1__EXT_DATA_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 17) & 0x00020000U)
#define SHUB_PORT0_I2C_ADDR_1__EXT_DATA_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | (((uint32_t)(src) <<\
                    17) & 0x00020000U)
#define SHUB_PORT0_I2C_ADDR_1__EXT_DATA_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 17) & ~0x00020000U)))
#define SHUB_PORT0_I2C_ADDR_1__EXT_DATA_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(1) << 17)
#define SHUB_PORT0_I2C_ADDR_1__EXT_DATA_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(0) << 17)
#define SHUB_PORT0_I2C_ADDR_1__EXT_DATA_PU__RESET_VALUE             0x00000000U
/** @} */

/* macros for field ext_clk_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_clk_pu_field ext_clk_pu_field
 * @brief macros for field ext_clk_pu
 * @details sck pin pullup enable
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_1__EXT_CLK_PU__SHIFT                             18
#define SHUB_PORT0_I2C_ADDR_1__EXT_CLK_PU__WIDTH                              1
#define SHUB_PORT0_I2C_ADDR_1__EXT_CLK_PU__MASK                     0x00040000U
#define SHUB_PORT0_I2C_ADDR_1__EXT_CLK_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00040000U) >> 18)
#define SHUB_PORT0_I2C_ADDR_1__EXT_CLK_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 18) & 0x00040000U)
#define SHUB_PORT0_I2C_ADDR_1__EXT_CLK_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | (((uint32_t)(src) <<\
                    18) & 0x00040000U)
#define SHUB_PORT0_I2C_ADDR_1__EXT_CLK_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 18) & ~0x00040000U)))
#define SHUB_PORT0_I2C_ADDR_1__EXT_CLK_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(1) << 18)
#define SHUB_PORT0_I2C_ADDR_1__EXT_CLK_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(0) << 18)
#define SHUB_PORT0_I2C_ADDR_1__EXT_CLK_PU__RESET_VALUE              0x00000000U
/** @} */

/* macros for field ext_head */
/**
 * @defgroup at_apb_shub_regs_core_ext_head_field ext_head_field
 * @brief macros for field ext_head
 * @details Before data transmission starts, what should head be?  0 = start  1 = stall
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_1__EXT_HEAD__SHIFT                               19
#define SHUB_PORT0_I2C_ADDR_1__EXT_HEAD__WIDTH                                2
#define SHUB_PORT0_I2C_ADDR_1__EXT_HEAD__MASK                       0x00180000U
#define SHUB_PORT0_I2C_ADDR_1__EXT_HEAD__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00180000U) >> 19)
#define SHUB_PORT0_I2C_ADDR_1__EXT_HEAD__WRITE(src) \
                    (((uint32_t)(src)\
                    << 19) & 0x00180000U)
#define SHUB_PORT0_I2C_ADDR_1__EXT_HEAD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00180000U) | (((uint32_t)(src) <<\
                    19) & 0x00180000U)
#define SHUB_PORT0_I2C_ADDR_1__EXT_HEAD__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 19) & ~0x00180000U)))
#define SHUB_PORT0_I2C_ADDR_1__EXT_HEAD__RESET_VALUE                0x00000000U
/** @} */

/* macros for field ext_tail */
/**
 * @defgroup at_apb_shub_regs_core_ext_tail_field ext_tail_field
 * @brief macros for field ext_tail
 * @details At end of 8 bits plus ack/nack, what should tail be?  0 = stop  1 = stall  2 = restart
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_1__EXT_TAIL__SHIFT                               21
#define SHUB_PORT0_I2C_ADDR_1__EXT_TAIL__WIDTH                                2
#define SHUB_PORT0_I2C_ADDR_1__EXT_TAIL__MASK                       0x00600000U
#define SHUB_PORT0_I2C_ADDR_1__EXT_TAIL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00600000U) >> 21)
#define SHUB_PORT0_I2C_ADDR_1__EXT_TAIL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 21) & 0x00600000U)
#define SHUB_PORT0_I2C_ADDR_1__EXT_TAIL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00600000U) | (((uint32_t)(src) <<\
                    21) & 0x00600000U)
#define SHUB_PORT0_I2C_ADDR_1__EXT_TAIL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 21) & ~0x00600000U)))
#define SHUB_PORT0_I2C_ADDR_1__EXT_TAIL__RESET_VALUE                0x00000000U
/** @} */

/* macros for field ext_master_drives_ack */
/**
 * @defgroup at_apb_shub_regs_core_ext_master_drives_ack_field ext_master_drives_ack_field
 * @brief macros for field ext_master_drives_ack
 * @details Specifies that master is to drive ack.
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_1__EXT_MASTER_DRIVES_ACK__SHIFT                  23
#define SHUB_PORT0_I2C_ADDR_1__EXT_MASTER_DRIVES_ACK__WIDTH                   1
#define SHUB_PORT0_I2C_ADDR_1__EXT_MASTER_DRIVES_ACK__MASK          0x00800000U
#define SHUB_PORT0_I2C_ADDR_1__EXT_MASTER_DRIVES_ACK__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00800000U) >> 23)
#define SHUB_PORT0_I2C_ADDR_1__EXT_MASTER_DRIVES_ACK__WRITE(src) \
                    (((uint32_t)(src)\
                    << 23) & 0x00800000U)
#define SHUB_PORT0_I2C_ADDR_1__EXT_MASTER_DRIVES_ACK__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | (((uint32_t)(src) <<\
                    23) & 0x00800000U)
#define SHUB_PORT0_I2C_ADDR_1__EXT_MASTER_DRIVES_ACK__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 23) & ~0x00800000U)))
#define SHUB_PORT0_I2C_ADDR_1__EXT_MASTER_DRIVES_ACK__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(1) << 23)
#define SHUB_PORT0_I2C_ADDR_1__EXT_MASTER_DRIVES_ACK__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(0) << 23)
#define SHUB_PORT0_I2C_ADDR_1__EXT_MASTER_DRIVES_ACK__RESET_VALUE   0x00000000U
/** @} */

/* macros for field ext_ack_value_to_drive */
/**
 * @defgroup at_apb_shub_regs_core_ext_ack_value_to_drive_field ext_ack_value_to_drive_field
 * @brief macros for field ext_ack_value_to_drive
 * @details If ack is to be driven by master, what value to drive?
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_1__EXT_ACK_VALUE_TO_DRIVE__SHIFT                 24
#define SHUB_PORT0_I2C_ADDR_1__EXT_ACK_VALUE_TO_DRIVE__WIDTH                  1
#define SHUB_PORT0_I2C_ADDR_1__EXT_ACK_VALUE_TO_DRIVE__MASK         0x01000000U
#define SHUB_PORT0_I2C_ADDR_1__EXT_ACK_VALUE_TO_DRIVE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x01000000U) >> 24)
#define SHUB_PORT0_I2C_ADDR_1__EXT_ACK_VALUE_TO_DRIVE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0x01000000U)
#define SHUB_PORT0_I2C_ADDR_1__EXT_ACK_VALUE_TO_DRIVE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | (((uint32_t)(src) <<\
                    24) & 0x01000000U)
#define SHUB_PORT0_I2C_ADDR_1__EXT_ACK_VALUE_TO_DRIVE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x01000000U)))
#define SHUB_PORT0_I2C_ADDR_1__EXT_ACK_VALUE_TO_DRIVE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(1) << 24)
#define SHUB_PORT0_I2C_ADDR_1__EXT_ACK_VALUE_TO_DRIVE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(0) << 24)
#define SHUB_PORT0_I2C_ADDR_1__EXT_ACK_VALUE_TO_DRIVE__RESET_VALUE  0x00000000U
/** @} */
#define SHUB_PORT0_I2C_ADDR_1__TYPE                                    uint32_t
#define SHUB_PORT0_I2C_ADDR_1__READ                                 0x01ffffffU
#define SHUB_PORT0_I2C_ADDR_1__WRITE                                0x01ffffffU
#define SHUB_PORT0_I2C_ADDR_1__PRESERVED                            0x01ffffffU
#define SHUB_PORT0_I2C_ADDR_1__RESET_VALUE                          0x0001fe00U

#endif /* __SHUB_PORT0_I2C_ADDR_1_MACRO__ */

/** @} end of port0_i2c_addr_1 */

/* macros for BlueprintGlobalNameSpace::SHUB_port0_i2c_addr_2 */
/**
 * @defgroup at_apb_shub_regs_core_port0_i2c_addr_2 port0_i2c_addr_2
 * @brief pointer addr of sensor2 on port0 definitions.
 * @{
 */
#ifndef __SHUB_PORT0_I2C_ADDR_2_MACRO__
#define __SHUB_PORT0_I2C_ADDR_2_MACRO__

/* macros for field ext_data_ie_ovrd */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_ie_ovrd_field ext_data_ie_ovrd_field
 * @brief macros for field ext_data_ie_ovrd
 * @details 1 = ie is high  0 = ie is ~oe
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_2__EXT_DATA_IE_OVRD__SHIFT                        0
#define SHUB_PORT0_I2C_ADDR_2__EXT_DATA_IE_OVRD__WIDTH                        1
#define SHUB_PORT0_I2C_ADDR_2__EXT_DATA_IE_OVRD__MASK               0x00000001U
#define SHUB_PORT0_I2C_ADDR_2__EXT_DATA_IE_OVRD__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT0_I2C_ADDR_2__EXT_DATA_IE_OVRD__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT0_I2C_ADDR_2__EXT_DATA_IE_OVRD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define SHUB_PORT0_I2C_ADDR_2__EXT_DATA_IE_OVRD__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define SHUB_PORT0_I2C_ADDR_2__EXT_DATA_IE_OVRD__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define SHUB_PORT0_I2C_ADDR_2__EXT_DATA_IE_OVRD__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define SHUB_PORT0_I2C_ADDR_2__EXT_DATA_IE_OVRD__RESET_VALUE        0x00000000U
/** @} */

/* macros for field ext_data_o */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_o_field ext_data_o_field
 * @brief macros for field ext_data_o
 * @details outbound data; can be device id, address within device, or write data; if it's device id, the LSB is the R/Wb indicator
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_2__EXT_DATA_O__SHIFT                              1
#define SHUB_PORT0_I2C_ADDR_2__EXT_DATA_O__WIDTH                              8
#define SHUB_PORT0_I2C_ADDR_2__EXT_DATA_O__MASK                     0x000001feU
#define SHUB_PORT0_I2C_ADDR_2__EXT_DATA_O__READ(src) \
                    (((uint32_t)(src)\
                    & 0x000001feU) >> 1)
#define SHUB_PORT0_I2C_ADDR_2__EXT_DATA_O__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x000001feU)
#define SHUB_PORT0_I2C_ADDR_2__EXT_DATA_O__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000001feU) | (((uint32_t)(src) <<\
                    1) & 0x000001feU)
#define SHUB_PORT0_I2C_ADDR_2__EXT_DATA_O__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x000001feU)))
#define SHUB_PORT0_I2C_ADDR_2__EXT_DATA_O__RESET_VALUE              0x00000000U
/** @} */

/* macros for field ext_data_oe */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_oe_field ext_data_oe_field
 * @brief macros for field ext_data_oe
 * @details sda output enable per bit
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_2__EXT_DATA_OE__SHIFT                             9
#define SHUB_PORT0_I2C_ADDR_2__EXT_DATA_OE__WIDTH                             8
#define SHUB_PORT0_I2C_ADDR_2__EXT_DATA_OE__MASK                    0x0001fe00U
#define SHUB_PORT0_I2C_ADDR_2__EXT_DATA_OE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0001fe00U) >> 9)
#define SHUB_PORT0_I2C_ADDR_2__EXT_DATA_OE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 9) & 0x0001fe00U)
#define SHUB_PORT0_I2C_ADDR_2__EXT_DATA_OE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0001fe00U) | (((uint32_t)(src) <<\
                    9) & 0x0001fe00U)
#define SHUB_PORT0_I2C_ADDR_2__EXT_DATA_OE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 9) & ~0x0001fe00U)))
#define SHUB_PORT0_I2C_ADDR_2__EXT_DATA_OE__RESET_VALUE             0x000000ffU
/** @} */

/* macros for field ext_data_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_pu_field ext_data_pu_field
 * @brief macros for field ext_data_pu
 * @details sda pin pullup enable
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_2__EXT_DATA_PU__SHIFT                            17
#define SHUB_PORT0_I2C_ADDR_2__EXT_DATA_PU__WIDTH                             1
#define SHUB_PORT0_I2C_ADDR_2__EXT_DATA_PU__MASK                    0x00020000U
#define SHUB_PORT0_I2C_ADDR_2__EXT_DATA_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00020000U) >> 17)
#define SHUB_PORT0_I2C_ADDR_2__EXT_DATA_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 17) & 0x00020000U)
#define SHUB_PORT0_I2C_ADDR_2__EXT_DATA_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | (((uint32_t)(src) <<\
                    17) & 0x00020000U)
#define SHUB_PORT0_I2C_ADDR_2__EXT_DATA_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 17) & ~0x00020000U)))
#define SHUB_PORT0_I2C_ADDR_2__EXT_DATA_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(1) << 17)
#define SHUB_PORT0_I2C_ADDR_2__EXT_DATA_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(0) << 17)
#define SHUB_PORT0_I2C_ADDR_2__EXT_DATA_PU__RESET_VALUE             0x00000000U
/** @} */

/* macros for field ext_clk_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_clk_pu_field ext_clk_pu_field
 * @brief macros for field ext_clk_pu
 * @details sck pin pullup enable
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_2__EXT_CLK_PU__SHIFT                             18
#define SHUB_PORT0_I2C_ADDR_2__EXT_CLK_PU__WIDTH                              1
#define SHUB_PORT0_I2C_ADDR_2__EXT_CLK_PU__MASK                     0x00040000U
#define SHUB_PORT0_I2C_ADDR_2__EXT_CLK_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00040000U) >> 18)
#define SHUB_PORT0_I2C_ADDR_2__EXT_CLK_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 18) & 0x00040000U)
#define SHUB_PORT0_I2C_ADDR_2__EXT_CLK_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | (((uint32_t)(src) <<\
                    18) & 0x00040000U)
#define SHUB_PORT0_I2C_ADDR_2__EXT_CLK_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 18) & ~0x00040000U)))
#define SHUB_PORT0_I2C_ADDR_2__EXT_CLK_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(1) << 18)
#define SHUB_PORT0_I2C_ADDR_2__EXT_CLK_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(0) << 18)
#define SHUB_PORT0_I2C_ADDR_2__EXT_CLK_PU__RESET_VALUE              0x00000000U
/** @} */

/* macros for field ext_head */
/**
 * @defgroup at_apb_shub_regs_core_ext_head_field ext_head_field
 * @brief macros for field ext_head
 * @details Before data transmission starts, what should head be?  0 = start  1 = stall
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_2__EXT_HEAD__SHIFT                               19
#define SHUB_PORT0_I2C_ADDR_2__EXT_HEAD__WIDTH                                2
#define SHUB_PORT0_I2C_ADDR_2__EXT_HEAD__MASK                       0x00180000U
#define SHUB_PORT0_I2C_ADDR_2__EXT_HEAD__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00180000U) >> 19)
#define SHUB_PORT0_I2C_ADDR_2__EXT_HEAD__WRITE(src) \
                    (((uint32_t)(src)\
                    << 19) & 0x00180000U)
#define SHUB_PORT0_I2C_ADDR_2__EXT_HEAD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00180000U) | (((uint32_t)(src) <<\
                    19) & 0x00180000U)
#define SHUB_PORT0_I2C_ADDR_2__EXT_HEAD__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 19) & ~0x00180000U)))
#define SHUB_PORT0_I2C_ADDR_2__EXT_HEAD__RESET_VALUE                0x00000000U
/** @} */

/* macros for field ext_tail */
/**
 * @defgroup at_apb_shub_regs_core_ext_tail_field ext_tail_field
 * @brief macros for field ext_tail
 * @details At end of 8 bits plus ack/nack, what should tail be?  0 = stop  1 = stall  2 = restart
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_2__EXT_TAIL__SHIFT                               21
#define SHUB_PORT0_I2C_ADDR_2__EXT_TAIL__WIDTH                                2
#define SHUB_PORT0_I2C_ADDR_2__EXT_TAIL__MASK                       0x00600000U
#define SHUB_PORT0_I2C_ADDR_2__EXT_TAIL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00600000U) >> 21)
#define SHUB_PORT0_I2C_ADDR_2__EXT_TAIL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 21) & 0x00600000U)
#define SHUB_PORT0_I2C_ADDR_2__EXT_TAIL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00600000U) | (((uint32_t)(src) <<\
                    21) & 0x00600000U)
#define SHUB_PORT0_I2C_ADDR_2__EXT_TAIL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 21) & ~0x00600000U)))
#define SHUB_PORT0_I2C_ADDR_2__EXT_TAIL__RESET_VALUE                0x00000000U
/** @} */

/* macros for field ext_master_drives_ack */
/**
 * @defgroup at_apb_shub_regs_core_ext_master_drives_ack_field ext_master_drives_ack_field
 * @brief macros for field ext_master_drives_ack
 * @details Specifies that master is to drive ack.
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_2__EXT_MASTER_DRIVES_ACK__SHIFT                  23
#define SHUB_PORT0_I2C_ADDR_2__EXT_MASTER_DRIVES_ACK__WIDTH                   1
#define SHUB_PORT0_I2C_ADDR_2__EXT_MASTER_DRIVES_ACK__MASK          0x00800000U
#define SHUB_PORT0_I2C_ADDR_2__EXT_MASTER_DRIVES_ACK__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00800000U) >> 23)
#define SHUB_PORT0_I2C_ADDR_2__EXT_MASTER_DRIVES_ACK__WRITE(src) \
                    (((uint32_t)(src)\
                    << 23) & 0x00800000U)
#define SHUB_PORT0_I2C_ADDR_2__EXT_MASTER_DRIVES_ACK__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | (((uint32_t)(src) <<\
                    23) & 0x00800000U)
#define SHUB_PORT0_I2C_ADDR_2__EXT_MASTER_DRIVES_ACK__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 23) & ~0x00800000U)))
#define SHUB_PORT0_I2C_ADDR_2__EXT_MASTER_DRIVES_ACK__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(1) << 23)
#define SHUB_PORT0_I2C_ADDR_2__EXT_MASTER_DRIVES_ACK__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(0) << 23)
#define SHUB_PORT0_I2C_ADDR_2__EXT_MASTER_DRIVES_ACK__RESET_VALUE   0x00000000U
/** @} */

/* macros for field ext_ack_value_to_drive */
/**
 * @defgroup at_apb_shub_regs_core_ext_ack_value_to_drive_field ext_ack_value_to_drive_field
 * @brief macros for field ext_ack_value_to_drive
 * @details If ack is to be driven by master, what value to drive?
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_2__EXT_ACK_VALUE_TO_DRIVE__SHIFT                 24
#define SHUB_PORT0_I2C_ADDR_2__EXT_ACK_VALUE_TO_DRIVE__WIDTH                  1
#define SHUB_PORT0_I2C_ADDR_2__EXT_ACK_VALUE_TO_DRIVE__MASK         0x01000000U
#define SHUB_PORT0_I2C_ADDR_2__EXT_ACK_VALUE_TO_DRIVE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x01000000U) >> 24)
#define SHUB_PORT0_I2C_ADDR_2__EXT_ACK_VALUE_TO_DRIVE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0x01000000U)
#define SHUB_PORT0_I2C_ADDR_2__EXT_ACK_VALUE_TO_DRIVE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | (((uint32_t)(src) <<\
                    24) & 0x01000000U)
#define SHUB_PORT0_I2C_ADDR_2__EXT_ACK_VALUE_TO_DRIVE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x01000000U)))
#define SHUB_PORT0_I2C_ADDR_2__EXT_ACK_VALUE_TO_DRIVE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(1) << 24)
#define SHUB_PORT0_I2C_ADDR_2__EXT_ACK_VALUE_TO_DRIVE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(0) << 24)
#define SHUB_PORT0_I2C_ADDR_2__EXT_ACK_VALUE_TO_DRIVE__RESET_VALUE  0x00000000U
/** @} */
#define SHUB_PORT0_I2C_ADDR_2__TYPE                                    uint32_t
#define SHUB_PORT0_I2C_ADDR_2__READ                                 0x01ffffffU
#define SHUB_PORT0_I2C_ADDR_2__WRITE                                0x01ffffffU
#define SHUB_PORT0_I2C_ADDR_2__PRESERVED                            0x01ffffffU
#define SHUB_PORT0_I2C_ADDR_2__RESET_VALUE                          0x0001fe00U

#endif /* __SHUB_PORT0_I2C_ADDR_2_MACRO__ */

/** @} end of port0_i2c_addr_2 */

/* macros for BlueprintGlobalNameSpace::SHUB_port0_i2c_addr_3 */
/**
 * @defgroup at_apb_shub_regs_core_port0_i2c_addr_3 port0_i2c_addr_3
 * @brief pointer addr of sensor3 on port0 definitions.
 * @{
 */
#ifndef __SHUB_PORT0_I2C_ADDR_3_MACRO__
#define __SHUB_PORT0_I2C_ADDR_3_MACRO__

/* macros for field ext_data_ie_ovrd */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_ie_ovrd_field ext_data_ie_ovrd_field
 * @brief macros for field ext_data_ie_ovrd
 * @details 1 = ie is high  0 = ie is ~oe
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_3__EXT_DATA_IE_OVRD__SHIFT                        0
#define SHUB_PORT0_I2C_ADDR_3__EXT_DATA_IE_OVRD__WIDTH                        1
#define SHUB_PORT0_I2C_ADDR_3__EXT_DATA_IE_OVRD__MASK               0x00000001U
#define SHUB_PORT0_I2C_ADDR_3__EXT_DATA_IE_OVRD__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT0_I2C_ADDR_3__EXT_DATA_IE_OVRD__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT0_I2C_ADDR_3__EXT_DATA_IE_OVRD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define SHUB_PORT0_I2C_ADDR_3__EXT_DATA_IE_OVRD__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define SHUB_PORT0_I2C_ADDR_3__EXT_DATA_IE_OVRD__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define SHUB_PORT0_I2C_ADDR_3__EXT_DATA_IE_OVRD__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define SHUB_PORT0_I2C_ADDR_3__EXT_DATA_IE_OVRD__RESET_VALUE        0x00000000U
/** @} */

/* macros for field ext_data_o */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_o_field ext_data_o_field
 * @brief macros for field ext_data_o
 * @details outbound data; can be device id, address within device, or write data; if it's device id, the LSB is the R/Wb indicator
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_3__EXT_DATA_O__SHIFT                              1
#define SHUB_PORT0_I2C_ADDR_3__EXT_DATA_O__WIDTH                              8
#define SHUB_PORT0_I2C_ADDR_3__EXT_DATA_O__MASK                     0x000001feU
#define SHUB_PORT0_I2C_ADDR_3__EXT_DATA_O__READ(src) \
                    (((uint32_t)(src)\
                    & 0x000001feU) >> 1)
#define SHUB_PORT0_I2C_ADDR_3__EXT_DATA_O__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x000001feU)
#define SHUB_PORT0_I2C_ADDR_3__EXT_DATA_O__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000001feU) | (((uint32_t)(src) <<\
                    1) & 0x000001feU)
#define SHUB_PORT0_I2C_ADDR_3__EXT_DATA_O__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x000001feU)))
#define SHUB_PORT0_I2C_ADDR_3__EXT_DATA_O__RESET_VALUE              0x00000000U
/** @} */

/* macros for field ext_data_oe */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_oe_field ext_data_oe_field
 * @brief macros for field ext_data_oe
 * @details sda output enable per bit
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_3__EXT_DATA_OE__SHIFT                             9
#define SHUB_PORT0_I2C_ADDR_3__EXT_DATA_OE__WIDTH                             8
#define SHUB_PORT0_I2C_ADDR_3__EXT_DATA_OE__MASK                    0x0001fe00U
#define SHUB_PORT0_I2C_ADDR_3__EXT_DATA_OE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0001fe00U) >> 9)
#define SHUB_PORT0_I2C_ADDR_3__EXT_DATA_OE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 9) & 0x0001fe00U)
#define SHUB_PORT0_I2C_ADDR_3__EXT_DATA_OE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0001fe00U) | (((uint32_t)(src) <<\
                    9) & 0x0001fe00U)
#define SHUB_PORT0_I2C_ADDR_3__EXT_DATA_OE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 9) & ~0x0001fe00U)))
#define SHUB_PORT0_I2C_ADDR_3__EXT_DATA_OE__RESET_VALUE             0x000000ffU
/** @} */

/* macros for field ext_data_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_pu_field ext_data_pu_field
 * @brief macros for field ext_data_pu
 * @details sda pin pullup enable
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_3__EXT_DATA_PU__SHIFT                            17
#define SHUB_PORT0_I2C_ADDR_3__EXT_DATA_PU__WIDTH                             1
#define SHUB_PORT0_I2C_ADDR_3__EXT_DATA_PU__MASK                    0x00020000U
#define SHUB_PORT0_I2C_ADDR_3__EXT_DATA_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00020000U) >> 17)
#define SHUB_PORT0_I2C_ADDR_3__EXT_DATA_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 17) & 0x00020000U)
#define SHUB_PORT0_I2C_ADDR_3__EXT_DATA_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | (((uint32_t)(src) <<\
                    17) & 0x00020000U)
#define SHUB_PORT0_I2C_ADDR_3__EXT_DATA_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 17) & ~0x00020000U)))
#define SHUB_PORT0_I2C_ADDR_3__EXT_DATA_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(1) << 17)
#define SHUB_PORT0_I2C_ADDR_3__EXT_DATA_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(0) << 17)
#define SHUB_PORT0_I2C_ADDR_3__EXT_DATA_PU__RESET_VALUE             0x00000000U
/** @} */

/* macros for field ext_clk_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_clk_pu_field ext_clk_pu_field
 * @brief macros for field ext_clk_pu
 * @details sck pin pullup enable
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_3__EXT_CLK_PU__SHIFT                             18
#define SHUB_PORT0_I2C_ADDR_3__EXT_CLK_PU__WIDTH                              1
#define SHUB_PORT0_I2C_ADDR_3__EXT_CLK_PU__MASK                     0x00040000U
#define SHUB_PORT0_I2C_ADDR_3__EXT_CLK_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00040000U) >> 18)
#define SHUB_PORT0_I2C_ADDR_3__EXT_CLK_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 18) & 0x00040000U)
#define SHUB_PORT0_I2C_ADDR_3__EXT_CLK_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | (((uint32_t)(src) <<\
                    18) & 0x00040000U)
#define SHUB_PORT0_I2C_ADDR_3__EXT_CLK_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 18) & ~0x00040000U)))
#define SHUB_PORT0_I2C_ADDR_3__EXT_CLK_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(1) << 18)
#define SHUB_PORT0_I2C_ADDR_3__EXT_CLK_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(0) << 18)
#define SHUB_PORT0_I2C_ADDR_3__EXT_CLK_PU__RESET_VALUE              0x00000000U
/** @} */

/* macros for field ext_head */
/**
 * @defgroup at_apb_shub_regs_core_ext_head_field ext_head_field
 * @brief macros for field ext_head
 * @details Before data transmission starts, what should head be?  0 = start  1 = stall
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_3__EXT_HEAD__SHIFT                               19
#define SHUB_PORT0_I2C_ADDR_3__EXT_HEAD__WIDTH                                2
#define SHUB_PORT0_I2C_ADDR_3__EXT_HEAD__MASK                       0x00180000U
#define SHUB_PORT0_I2C_ADDR_3__EXT_HEAD__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00180000U) >> 19)
#define SHUB_PORT0_I2C_ADDR_3__EXT_HEAD__WRITE(src) \
                    (((uint32_t)(src)\
                    << 19) & 0x00180000U)
#define SHUB_PORT0_I2C_ADDR_3__EXT_HEAD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00180000U) | (((uint32_t)(src) <<\
                    19) & 0x00180000U)
#define SHUB_PORT0_I2C_ADDR_3__EXT_HEAD__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 19) & ~0x00180000U)))
#define SHUB_PORT0_I2C_ADDR_3__EXT_HEAD__RESET_VALUE                0x00000000U
/** @} */

/* macros for field ext_tail */
/**
 * @defgroup at_apb_shub_regs_core_ext_tail_field ext_tail_field
 * @brief macros for field ext_tail
 * @details At end of 8 bits plus ack/nack, what should tail be?  0 = stop  1 = stall  2 = restart
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_3__EXT_TAIL__SHIFT                               21
#define SHUB_PORT0_I2C_ADDR_3__EXT_TAIL__WIDTH                                2
#define SHUB_PORT0_I2C_ADDR_3__EXT_TAIL__MASK                       0x00600000U
#define SHUB_PORT0_I2C_ADDR_3__EXT_TAIL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00600000U) >> 21)
#define SHUB_PORT0_I2C_ADDR_3__EXT_TAIL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 21) & 0x00600000U)
#define SHUB_PORT0_I2C_ADDR_3__EXT_TAIL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00600000U) | (((uint32_t)(src) <<\
                    21) & 0x00600000U)
#define SHUB_PORT0_I2C_ADDR_3__EXT_TAIL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 21) & ~0x00600000U)))
#define SHUB_PORT0_I2C_ADDR_3__EXT_TAIL__RESET_VALUE                0x00000000U
/** @} */

/* macros for field ext_master_drives_ack */
/**
 * @defgroup at_apb_shub_regs_core_ext_master_drives_ack_field ext_master_drives_ack_field
 * @brief macros for field ext_master_drives_ack
 * @details Specifies that master is to drive ack.
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_3__EXT_MASTER_DRIVES_ACK__SHIFT                  23
#define SHUB_PORT0_I2C_ADDR_3__EXT_MASTER_DRIVES_ACK__WIDTH                   1
#define SHUB_PORT0_I2C_ADDR_3__EXT_MASTER_DRIVES_ACK__MASK          0x00800000U
#define SHUB_PORT0_I2C_ADDR_3__EXT_MASTER_DRIVES_ACK__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00800000U) >> 23)
#define SHUB_PORT0_I2C_ADDR_3__EXT_MASTER_DRIVES_ACK__WRITE(src) \
                    (((uint32_t)(src)\
                    << 23) & 0x00800000U)
#define SHUB_PORT0_I2C_ADDR_3__EXT_MASTER_DRIVES_ACK__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | (((uint32_t)(src) <<\
                    23) & 0x00800000U)
#define SHUB_PORT0_I2C_ADDR_3__EXT_MASTER_DRIVES_ACK__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 23) & ~0x00800000U)))
#define SHUB_PORT0_I2C_ADDR_3__EXT_MASTER_DRIVES_ACK__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(1) << 23)
#define SHUB_PORT0_I2C_ADDR_3__EXT_MASTER_DRIVES_ACK__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(0) << 23)
#define SHUB_PORT0_I2C_ADDR_3__EXT_MASTER_DRIVES_ACK__RESET_VALUE   0x00000000U
/** @} */

/* macros for field ext_ack_value_to_drive */
/**
 * @defgroup at_apb_shub_regs_core_ext_ack_value_to_drive_field ext_ack_value_to_drive_field
 * @brief macros for field ext_ack_value_to_drive
 * @details If ack is to be driven by master, what value to drive?
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_3__EXT_ACK_VALUE_TO_DRIVE__SHIFT                 24
#define SHUB_PORT0_I2C_ADDR_3__EXT_ACK_VALUE_TO_DRIVE__WIDTH                  1
#define SHUB_PORT0_I2C_ADDR_3__EXT_ACK_VALUE_TO_DRIVE__MASK         0x01000000U
#define SHUB_PORT0_I2C_ADDR_3__EXT_ACK_VALUE_TO_DRIVE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x01000000U) >> 24)
#define SHUB_PORT0_I2C_ADDR_3__EXT_ACK_VALUE_TO_DRIVE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0x01000000U)
#define SHUB_PORT0_I2C_ADDR_3__EXT_ACK_VALUE_TO_DRIVE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | (((uint32_t)(src) <<\
                    24) & 0x01000000U)
#define SHUB_PORT0_I2C_ADDR_3__EXT_ACK_VALUE_TO_DRIVE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x01000000U)))
#define SHUB_PORT0_I2C_ADDR_3__EXT_ACK_VALUE_TO_DRIVE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(1) << 24)
#define SHUB_PORT0_I2C_ADDR_3__EXT_ACK_VALUE_TO_DRIVE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(0) << 24)
#define SHUB_PORT0_I2C_ADDR_3__EXT_ACK_VALUE_TO_DRIVE__RESET_VALUE  0x00000000U
/** @} */
#define SHUB_PORT0_I2C_ADDR_3__TYPE                                    uint32_t
#define SHUB_PORT0_I2C_ADDR_3__READ                                 0x01ffffffU
#define SHUB_PORT0_I2C_ADDR_3__WRITE                                0x01ffffffU
#define SHUB_PORT0_I2C_ADDR_3__PRESERVED                            0x01ffffffU
#define SHUB_PORT0_I2C_ADDR_3__RESET_VALUE                          0x0001fe00U

#endif /* __SHUB_PORT0_I2C_ADDR_3_MACRO__ */

/** @} end of port0_i2c_addr_3 */

/* macros for BlueprintGlobalNameSpace::SHUB_port0_i2c_addr_4 */
/**
 * @defgroup at_apb_shub_regs_core_port0_i2c_addr_4 port0_i2c_addr_4
 * @brief pointer addr of sensor4 on port0 definitions.
 * @{
 */
#ifndef __SHUB_PORT0_I2C_ADDR_4_MACRO__
#define __SHUB_PORT0_I2C_ADDR_4_MACRO__

/* macros for field ext_data_ie_ovrd */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_ie_ovrd_field ext_data_ie_ovrd_field
 * @brief macros for field ext_data_ie_ovrd
 * @details 1 = ie is high  0 = ie is ~oe
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_4__EXT_DATA_IE_OVRD__SHIFT                        0
#define SHUB_PORT0_I2C_ADDR_4__EXT_DATA_IE_OVRD__WIDTH                        1
#define SHUB_PORT0_I2C_ADDR_4__EXT_DATA_IE_OVRD__MASK               0x00000001U
#define SHUB_PORT0_I2C_ADDR_4__EXT_DATA_IE_OVRD__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT0_I2C_ADDR_4__EXT_DATA_IE_OVRD__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT0_I2C_ADDR_4__EXT_DATA_IE_OVRD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define SHUB_PORT0_I2C_ADDR_4__EXT_DATA_IE_OVRD__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define SHUB_PORT0_I2C_ADDR_4__EXT_DATA_IE_OVRD__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define SHUB_PORT0_I2C_ADDR_4__EXT_DATA_IE_OVRD__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define SHUB_PORT0_I2C_ADDR_4__EXT_DATA_IE_OVRD__RESET_VALUE        0x00000000U
/** @} */

/* macros for field ext_data_o */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_o_field ext_data_o_field
 * @brief macros for field ext_data_o
 * @details outbound data; can be device id, address within device, or write data; if it's device id, the LSB is the R/Wb indicator
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_4__EXT_DATA_O__SHIFT                              1
#define SHUB_PORT0_I2C_ADDR_4__EXT_DATA_O__WIDTH                              8
#define SHUB_PORT0_I2C_ADDR_4__EXT_DATA_O__MASK                     0x000001feU
#define SHUB_PORT0_I2C_ADDR_4__EXT_DATA_O__READ(src) \
                    (((uint32_t)(src)\
                    & 0x000001feU) >> 1)
#define SHUB_PORT0_I2C_ADDR_4__EXT_DATA_O__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x000001feU)
#define SHUB_PORT0_I2C_ADDR_4__EXT_DATA_O__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000001feU) | (((uint32_t)(src) <<\
                    1) & 0x000001feU)
#define SHUB_PORT0_I2C_ADDR_4__EXT_DATA_O__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x000001feU)))
#define SHUB_PORT0_I2C_ADDR_4__EXT_DATA_O__RESET_VALUE              0x00000000U
/** @} */

/* macros for field ext_data_oe */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_oe_field ext_data_oe_field
 * @brief macros for field ext_data_oe
 * @details sda output enable per bit
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_4__EXT_DATA_OE__SHIFT                             9
#define SHUB_PORT0_I2C_ADDR_4__EXT_DATA_OE__WIDTH                             8
#define SHUB_PORT0_I2C_ADDR_4__EXT_DATA_OE__MASK                    0x0001fe00U
#define SHUB_PORT0_I2C_ADDR_4__EXT_DATA_OE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0001fe00U) >> 9)
#define SHUB_PORT0_I2C_ADDR_4__EXT_DATA_OE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 9) & 0x0001fe00U)
#define SHUB_PORT0_I2C_ADDR_4__EXT_DATA_OE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0001fe00U) | (((uint32_t)(src) <<\
                    9) & 0x0001fe00U)
#define SHUB_PORT0_I2C_ADDR_4__EXT_DATA_OE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 9) & ~0x0001fe00U)))
#define SHUB_PORT0_I2C_ADDR_4__EXT_DATA_OE__RESET_VALUE             0x000000ffU
/** @} */

/* macros for field ext_data_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_pu_field ext_data_pu_field
 * @brief macros for field ext_data_pu
 * @details sda pin pullup enable
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_4__EXT_DATA_PU__SHIFT                            17
#define SHUB_PORT0_I2C_ADDR_4__EXT_DATA_PU__WIDTH                             1
#define SHUB_PORT0_I2C_ADDR_4__EXT_DATA_PU__MASK                    0x00020000U
#define SHUB_PORT0_I2C_ADDR_4__EXT_DATA_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00020000U) >> 17)
#define SHUB_PORT0_I2C_ADDR_4__EXT_DATA_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 17) & 0x00020000U)
#define SHUB_PORT0_I2C_ADDR_4__EXT_DATA_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | (((uint32_t)(src) <<\
                    17) & 0x00020000U)
#define SHUB_PORT0_I2C_ADDR_4__EXT_DATA_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 17) & ~0x00020000U)))
#define SHUB_PORT0_I2C_ADDR_4__EXT_DATA_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(1) << 17)
#define SHUB_PORT0_I2C_ADDR_4__EXT_DATA_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(0) << 17)
#define SHUB_PORT0_I2C_ADDR_4__EXT_DATA_PU__RESET_VALUE             0x00000000U
/** @} */

/* macros for field ext_clk_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_clk_pu_field ext_clk_pu_field
 * @brief macros for field ext_clk_pu
 * @details sck pin pullup enable
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_4__EXT_CLK_PU__SHIFT                             18
#define SHUB_PORT0_I2C_ADDR_4__EXT_CLK_PU__WIDTH                              1
#define SHUB_PORT0_I2C_ADDR_4__EXT_CLK_PU__MASK                     0x00040000U
#define SHUB_PORT0_I2C_ADDR_4__EXT_CLK_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00040000U) >> 18)
#define SHUB_PORT0_I2C_ADDR_4__EXT_CLK_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 18) & 0x00040000U)
#define SHUB_PORT0_I2C_ADDR_4__EXT_CLK_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | (((uint32_t)(src) <<\
                    18) & 0x00040000U)
#define SHUB_PORT0_I2C_ADDR_4__EXT_CLK_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 18) & ~0x00040000U)))
#define SHUB_PORT0_I2C_ADDR_4__EXT_CLK_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(1) << 18)
#define SHUB_PORT0_I2C_ADDR_4__EXT_CLK_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(0) << 18)
#define SHUB_PORT0_I2C_ADDR_4__EXT_CLK_PU__RESET_VALUE              0x00000000U
/** @} */

/* macros for field ext_head */
/**
 * @defgroup at_apb_shub_regs_core_ext_head_field ext_head_field
 * @brief macros for field ext_head
 * @details Before data transmission starts, what should head be?  0 = start  1 = stall
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_4__EXT_HEAD__SHIFT                               19
#define SHUB_PORT0_I2C_ADDR_4__EXT_HEAD__WIDTH                                2
#define SHUB_PORT0_I2C_ADDR_4__EXT_HEAD__MASK                       0x00180000U
#define SHUB_PORT0_I2C_ADDR_4__EXT_HEAD__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00180000U) >> 19)
#define SHUB_PORT0_I2C_ADDR_4__EXT_HEAD__WRITE(src) \
                    (((uint32_t)(src)\
                    << 19) & 0x00180000U)
#define SHUB_PORT0_I2C_ADDR_4__EXT_HEAD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00180000U) | (((uint32_t)(src) <<\
                    19) & 0x00180000U)
#define SHUB_PORT0_I2C_ADDR_4__EXT_HEAD__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 19) & ~0x00180000U)))
#define SHUB_PORT0_I2C_ADDR_4__EXT_HEAD__RESET_VALUE                0x00000000U
/** @} */

/* macros for field ext_tail */
/**
 * @defgroup at_apb_shub_regs_core_ext_tail_field ext_tail_field
 * @brief macros for field ext_tail
 * @details At end of 8 bits plus ack/nack, what should tail be?  0 = stop  1 = stall  2 = restart
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_4__EXT_TAIL__SHIFT                               21
#define SHUB_PORT0_I2C_ADDR_4__EXT_TAIL__WIDTH                                2
#define SHUB_PORT0_I2C_ADDR_4__EXT_TAIL__MASK                       0x00600000U
#define SHUB_PORT0_I2C_ADDR_4__EXT_TAIL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00600000U) >> 21)
#define SHUB_PORT0_I2C_ADDR_4__EXT_TAIL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 21) & 0x00600000U)
#define SHUB_PORT0_I2C_ADDR_4__EXT_TAIL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00600000U) | (((uint32_t)(src) <<\
                    21) & 0x00600000U)
#define SHUB_PORT0_I2C_ADDR_4__EXT_TAIL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 21) & ~0x00600000U)))
#define SHUB_PORT0_I2C_ADDR_4__EXT_TAIL__RESET_VALUE                0x00000000U
/** @} */

/* macros for field ext_master_drives_ack */
/**
 * @defgroup at_apb_shub_regs_core_ext_master_drives_ack_field ext_master_drives_ack_field
 * @brief macros for field ext_master_drives_ack
 * @details Specifies that master is to drive ack.
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_4__EXT_MASTER_DRIVES_ACK__SHIFT                  23
#define SHUB_PORT0_I2C_ADDR_4__EXT_MASTER_DRIVES_ACK__WIDTH                   1
#define SHUB_PORT0_I2C_ADDR_4__EXT_MASTER_DRIVES_ACK__MASK          0x00800000U
#define SHUB_PORT0_I2C_ADDR_4__EXT_MASTER_DRIVES_ACK__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00800000U) >> 23)
#define SHUB_PORT0_I2C_ADDR_4__EXT_MASTER_DRIVES_ACK__WRITE(src) \
                    (((uint32_t)(src)\
                    << 23) & 0x00800000U)
#define SHUB_PORT0_I2C_ADDR_4__EXT_MASTER_DRIVES_ACK__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | (((uint32_t)(src) <<\
                    23) & 0x00800000U)
#define SHUB_PORT0_I2C_ADDR_4__EXT_MASTER_DRIVES_ACK__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 23) & ~0x00800000U)))
#define SHUB_PORT0_I2C_ADDR_4__EXT_MASTER_DRIVES_ACK__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(1) << 23)
#define SHUB_PORT0_I2C_ADDR_4__EXT_MASTER_DRIVES_ACK__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(0) << 23)
#define SHUB_PORT0_I2C_ADDR_4__EXT_MASTER_DRIVES_ACK__RESET_VALUE   0x00000000U
/** @} */

/* macros for field ext_ack_value_to_drive */
/**
 * @defgroup at_apb_shub_regs_core_ext_ack_value_to_drive_field ext_ack_value_to_drive_field
 * @brief macros for field ext_ack_value_to_drive
 * @details If ack is to be driven by master, what value to drive?
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_4__EXT_ACK_VALUE_TO_DRIVE__SHIFT                 24
#define SHUB_PORT0_I2C_ADDR_4__EXT_ACK_VALUE_TO_DRIVE__WIDTH                  1
#define SHUB_PORT0_I2C_ADDR_4__EXT_ACK_VALUE_TO_DRIVE__MASK         0x01000000U
#define SHUB_PORT0_I2C_ADDR_4__EXT_ACK_VALUE_TO_DRIVE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x01000000U) >> 24)
#define SHUB_PORT0_I2C_ADDR_4__EXT_ACK_VALUE_TO_DRIVE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0x01000000U)
#define SHUB_PORT0_I2C_ADDR_4__EXT_ACK_VALUE_TO_DRIVE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | (((uint32_t)(src) <<\
                    24) & 0x01000000U)
#define SHUB_PORT0_I2C_ADDR_4__EXT_ACK_VALUE_TO_DRIVE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x01000000U)))
#define SHUB_PORT0_I2C_ADDR_4__EXT_ACK_VALUE_TO_DRIVE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(1) << 24)
#define SHUB_PORT0_I2C_ADDR_4__EXT_ACK_VALUE_TO_DRIVE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(0) << 24)
#define SHUB_PORT0_I2C_ADDR_4__EXT_ACK_VALUE_TO_DRIVE__RESET_VALUE  0x00000000U
/** @} */
#define SHUB_PORT0_I2C_ADDR_4__TYPE                                    uint32_t
#define SHUB_PORT0_I2C_ADDR_4__READ                                 0x01ffffffU
#define SHUB_PORT0_I2C_ADDR_4__WRITE                                0x01ffffffU
#define SHUB_PORT0_I2C_ADDR_4__PRESERVED                            0x01ffffffU
#define SHUB_PORT0_I2C_ADDR_4__RESET_VALUE                          0x0001fe00U

#endif /* __SHUB_PORT0_I2C_ADDR_4_MACRO__ */

/** @} end of port0_i2c_addr_4 */

/* macros for BlueprintGlobalNameSpace::SHUB_port0_i2c_addr_5 */
/**
 * @defgroup at_apb_shub_regs_core_port0_i2c_addr_5 port0_i2c_addr_5
 * @brief pointer addr of sensor5 on port0 definitions.
 * @{
 */
#ifndef __SHUB_PORT0_I2C_ADDR_5_MACRO__
#define __SHUB_PORT0_I2C_ADDR_5_MACRO__

/* macros for field ext_data_ie_ovrd */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_ie_ovrd_field ext_data_ie_ovrd_field
 * @brief macros for field ext_data_ie_ovrd
 * @details 1 = ie is high  0 = ie is ~oe
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_5__EXT_DATA_IE_OVRD__SHIFT                        0
#define SHUB_PORT0_I2C_ADDR_5__EXT_DATA_IE_OVRD__WIDTH                        1
#define SHUB_PORT0_I2C_ADDR_5__EXT_DATA_IE_OVRD__MASK               0x00000001U
#define SHUB_PORT0_I2C_ADDR_5__EXT_DATA_IE_OVRD__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT0_I2C_ADDR_5__EXT_DATA_IE_OVRD__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT0_I2C_ADDR_5__EXT_DATA_IE_OVRD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define SHUB_PORT0_I2C_ADDR_5__EXT_DATA_IE_OVRD__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define SHUB_PORT0_I2C_ADDR_5__EXT_DATA_IE_OVRD__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define SHUB_PORT0_I2C_ADDR_5__EXT_DATA_IE_OVRD__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define SHUB_PORT0_I2C_ADDR_5__EXT_DATA_IE_OVRD__RESET_VALUE        0x00000000U
/** @} */

/* macros for field ext_data_o */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_o_field ext_data_o_field
 * @brief macros for field ext_data_o
 * @details outbound data; can be device id, address within device, or write data; if it's device id, the LSB is the R/Wb indicator
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_5__EXT_DATA_O__SHIFT                              1
#define SHUB_PORT0_I2C_ADDR_5__EXT_DATA_O__WIDTH                              8
#define SHUB_PORT0_I2C_ADDR_5__EXT_DATA_O__MASK                     0x000001feU
#define SHUB_PORT0_I2C_ADDR_5__EXT_DATA_O__READ(src) \
                    (((uint32_t)(src)\
                    & 0x000001feU) >> 1)
#define SHUB_PORT0_I2C_ADDR_5__EXT_DATA_O__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x000001feU)
#define SHUB_PORT0_I2C_ADDR_5__EXT_DATA_O__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000001feU) | (((uint32_t)(src) <<\
                    1) & 0x000001feU)
#define SHUB_PORT0_I2C_ADDR_5__EXT_DATA_O__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x000001feU)))
#define SHUB_PORT0_I2C_ADDR_5__EXT_DATA_O__RESET_VALUE              0x00000000U
/** @} */

/* macros for field ext_data_oe */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_oe_field ext_data_oe_field
 * @brief macros for field ext_data_oe
 * @details sda output enable per bit
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_5__EXT_DATA_OE__SHIFT                             9
#define SHUB_PORT0_I2C_ADDR_5__EXT_DATA_OE__WIDTH                             8
#define SHUB_PORT0_I2C_ADDR_5__EXT_DATA_OE__MASK                    0x0001fe00U
#define SHUB_PORT0_I2C_ADDR_5__EXT_DATA_OE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0001fe00U) >> 9)
#define SHUB_PORT0_I2C_ADDR_5__EXT_DATA_OE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 9) & 0x0001fe00U)
#define SHUB_PORT0_I2C_ADDR_5__EXT_DATA_OE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0001fe00U) | (((uint32_t)(src) <<\
                    9) & 0x0001fe00U)
#define SHUB_PORT0_I2C_ADDR_5__EXT_DATA_OE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 9) & ~0x0001fe00U)))
#define SHUB_PORT0_I2C_ADDR_5__EXT_DATA_OE__RESET_VALUE             0x000000ffU
/** @} */

/* macros for field ext_data_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_pu_field ext_data_pu_field
 * @brief macros for field ext_data_pu
 * @details sda pin pullup enable
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_5__EXT_DATA_PU__SHIFT                            17
#define SHUB_PORT0_I2C_ADDR_5__EXT_DATA_PU__WIDTH                             1
#define SHUB_PORT0_I2C_ADDR_5__EXT_DATA_PU__MASK                    0x00020000U
#define SHUB_PORT0_I2C_ADDR_5__EXT_DATA_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00020000U) >> 17)
#define SHUB_PORT0_I2C_ADDR_5__EXT_DATA_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 17) & 0x00020000U)
#define SHUB_PORT0_I2C_ADDR_5__EXT_DATA_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | (((uint32_t)(src) <<\
                    17) & 0x00020000U)
#define SHUB_PORT0_I2C_ADDR_5__EXT_DATA_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 17) & ~0x00020000U)))
#define SHUB_PORT0_I2C_ADDR_5__EXT_DATA_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(1) << 17)
#define SHUB_PORT0_I2C_ADDR_5__EXT_DATA_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(0) << 17)
#define SHUB_PORT0_I2C_ADDR_5__EXT_DATA_PU__RESET_VALUE             0x00000000U
/** @} */

/* macros for field ext_clk_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_clk_pu_field ext_clk_pu_field
 * @brief macros for field ext_clk_pu
 * @details sck pin pullup enable
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_5__EXT_CLK_PU__SHIFT                             18
#define SHUB_PORT0_I2C_ADDR_5__EXT_CLK_PU__WIDTH                              1
#define SHUB_PORT0_I2C_ADDR_5__EXT_CLK_PU__MASK                     0x00040000U
#define SHUB_PORT0_I2C_ADDR_5__EXT_CLK_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00040000U) >> 18)
#define SHUB_PORT0_I2C_ADDR_5__EXT_CLK_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 18) & 0x00040000U)
#define SHUB_PORT0_I2C_ADDR_5__EXT_CLK_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | (((uint32_t)(src) <<\
                    18) & 0x00040000U)
#define SHUB_PORT0_I2C_ADDR_5__EXT_CLK_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 18) & ~0x00040000U)))
#define SHUB_PORT0_I2C_ADDR_5__EXT_CLK_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(1) << 18)
#define SHUB_PORT0_I2C_ADDR_5__EXT_CLK_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(0) << 18)
#define SHUB_PORT0_I2C_ADDR_5__EXT_CLK_PU__RESET_VALUE              0x00000000U
/** @} */

/* macros for field ext_head */
/**
 * @defgroup at_apb_shub_regs_core_ext_head_field ext_head_field
 * @brief macros for field ext_head
 * @details Before data transmission starts, what should head be?  0 = start  1 = stall
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_5__EXT_HEAD__SHIFT                               19
#define SHUB_PORT0_I2C_ADDR_5__EXT_HEAD__WIDTH                                2
#define SHUB_PORT0_I2C_ADDR_5__EXT_HEAD__MASK                       0x00180000U
#define SHUB_PORT0_I2C_ADDR_5__EXT_HEAD__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00180000U) >> 19)
#define SHUB_PORT0_I2C_ADDR_5__EXT_HEAD__WRITE(src) \
                    (((uint32_t)(src)\
                    << 19) & 0x00180000U)
#define SHUB_PORT0_I2C_ADDR_5__EXT_HEAD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00180000U) | (((uint32_t)(src) <<\
                    19) & 0x00180000U)
#define SHUB_PORT0_I2C_ADDR_5__EXT_HEAD__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 19) & ~0x00180000U)))
#define SHUB_PORT0_I2C_ADDR_5__EXT_HEAD__RESET_VALUE                0x00000000U
/** @} */

/* macros for field ext_tail */
/**
 * @defgroup at_apb_shub_regs_core_ext_tail_field ext_tail_field
 * @brief macros for field ext_tail
 * @details At end of 8 bits plus ack/nack, what should tail be?  0 = stop  1 = stall  2 = restart
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_5__EXT_TAIL__SHIFT                               21
#define SHUB_PORT0_I2C_ADDR_5__EXT_TAIL__WIDTH                                2
#define SHUB_PORT0_I2C_ADDR_5__EXT_TAIL__MASK                       0x00600000U
#define SHUB_PORT0_I2C_ADDR_5__EXT_TAIL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00600000U) >> 21)
#define SHUB_PORT0_I2C_ADDR_5__EXT_TAIL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 21) & 0x00600000U)
#define SHUB_PORT0_I2C_ADDR_5__EXT_TAIL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00600000U) | (((uint32_t)(src) <<\
                    21) & 0x00600000U)
#define SHUB_PORT0_I2C_ADDR_5__EXT_TAIL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 21) & ~0x00600000U)))
#define SHUB_PORT0_I2C_ADDR_5__EXT_TAIL__RESET_VALUE                0x00000000U
/** @} */

/* macros for field ext_master_drives_ack */
/**
 * @defgroup at_apb_shub_regs_core_ext_master_drives_ack_field ext_master_drives_ack_field
 * @brief macros for field ext_master_drives_ack
 * @details Specifies that master is to drive ack.
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_5__EXT_MASTER_DRIVES_ACK__SHIFT                  23
#define SHUB_PORT0_I2C_ADDR_5__EXT_MASTER_DRIVES_ACK__WIDTH                   1
#define SHUB_PORT0_I2C_ADDR_5__EXT_MASTER_DRIVES_ACK__MASK          0x00800000U
#define SHUB_PORT0_I2C_ADDR_5__EXT_MASTER_DRIVES_ACK__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00800000U) >> 23)
#define SHUB_PORT0_I2C_ADDR_5__EXT_MASTER_DRIVES_ACK__WRITE(src) \
                    (((uint32_t)(src)\
                    << 23) & 0x00800000U)
#define SHUB_PORT0_I2C_ADDR_5__EXT_MASTER_DRIVES_ACK__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | (((uint32_t)(src) <<\
                    23) & 0x00800000U)
#define SHUB_PORT0_I2C_ADDR_5__EXT_MASTER_DRIVES_ACK__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 23) & ~0x00800000U)))
#define SHUB_PORT0_I2C_ADDR_5__EXT_MASTER_DRIVES_ACK__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(1) << 23)
#define SHUB_PORT0_I2C_ADDR_5__EXT_MASTER_DRIVES_ACK__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(0) << 23)
#define SHUB_PORT0_I2C_ADDR_5__EXT_MASTER_DRIVES_ACK__RESET_VALUE   0x00000000U
/** @} */

/* macros for field ext_ack_value_to_drive */
/**
 * @defgroup at_apb_shub_regs_core_ext_ack_value_to_drive_field ext_ack_value_to_drive_field
 * @brief macros for field ext_ack_value_to_drive
 * @details If ack is to be driven by master, what value to drive?
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_5__EXT_ACK_VALUE_TO_DRIVE__SHIFT                 24
#define SHUB_PORT0_I2C_ADDR_5__EXT_ACK_VALUE_TO_DRIVE__WIDTH                  1
#define SHUB_PORT0_I2C_ADDR_5__EXT_ACK_VALUE_TO_DRIVE__MASK         0x01000000U
#define SHUB_PORT0_I2C_ADDR_5__EXT_ACK_VALUE_TO_DRIVE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x01000000U) >> 24)
#define SHUB_PORT0_I2C_ADDR_5__EXT_ACK_VALUE_TO_DRIVE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0x01000000U)
#define SHUB_PORT0_I2C_ADDR_5__EXT_ACK_VALUE_TO_DRIVE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | (((uint32_t)(src) <<\
                    24) & 0x01000000U)
#define SHUB_PORT0_I2C_ADDR_5__EXT_ACK_VALUE_TO_DRIVE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x01000000U)))
#define SHUB_PORT0_I2C_ADDR_5__EXT_ACK_VALUE_TO_DRIVE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(1) << 24)
#define SHUB_PORT0_I2C_ADDR_5__EXT_ACK_VALUE_TO_DRIVE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(0) << 24)
#define SHUB_PORT0_I2C_ADDR_5__EXT_ACK_VALUE_TO_DRIVE__RESET_VALUE  0x00000000U
/** @} */
#define SHUB_PORT0_I2C_ADDR_5__TYPE                                    uint32_t
#define SHUB_PORT0_I2C_ADDR_5__READ                                 0x01ffffffU
#define SHUB_PORT0_I2C_ADDR_5__WRITE                                0x01ffffffU
#define SHUB_PORT0_I2C_ADDR_5__PRESERVED                            0x01ffffffU
#define SHUB_PORT0_I2C_ADDR_5__RESET_VALUE                          0x0001fe00U

#endif /* __SHUB_PORT0_I2C_ADDR_5_MACRO__ */

/** @} end of port0_i2c_addr_5 */

/* macros for BlueprintGlobalNameSpace::SHUB_port0_i2c_addr_6 */
/**
 * @defgroup at_apb_shub_regs_core_port0_i2c_addr_6 port0_i2c_addr_6
 * @brief pointer addr of sensor6 on port0 definitions.
 * @{
 */
#ifndef __SHUB_PORT0_I2C_ADDR_6_MACRO__
#define __SHUB_PORT0_I2C_ADDR_6_MACRO__

/* macros for field ext_data_ie_ovrd */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_ie_ovrd_field ext_data_ie_ovrd_field
 * @brief macros for field ext_data_ie_ovrd
 * @details 1 = ie is high  0 = ie is ~oe
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_6__EXT_DATA_IE_OVRD__SHIFT                        0
#define SHUB_PORT0_I2C_ADDR_6__EXT_DATA_IE_OVRD__WIDTH                        1
#define SHUB_PORT0_I2C_ADDR_6__EXT_DATA_IE_OVRD__MASK               0x00000001U
#define SHUB_PORT0_I2C_ADDR_6__EXT_DATA_IE_OVRD__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT0_I2C_ADDR_6__EXT_DATA_IE_OVRD__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT0_I2C_ADDR_6__EXT_DATA_IE_OVRD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define SHUB_PORT0_I2C_ADDR_6__EXT_DATA_IE_OVRD__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define SHUB_PORT0_I2C_ADDR_6__EXT_DATA_IE_OVRD__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define SHUB_PORT0_I2C_ADDR_6__EXT_DATA_IE_OVRD__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define SHUB_PORT0_I2C_ADDR_6__EXT_DATA_IE_OVRD__RESET_VALUE        0x00000000U
/** @} */

/* macros for field ext_data_o */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_o_field ext_data_o_field
 * @brief macros for field ext_data_o
 * @details outbound data; can be device id, address within device, or write data; if it's device id, the LSB is the R/Wb indicator
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_6__EXT_DATA_O__SHIFT                              1
#define SHUB_PORT0_I2C_ADDR_6__EXT_DATA_O__WIDTH                              8
#define SHUB_PORT0_I2C_ADDR_6__EXT_DATA_O__MASK                     0x000001feU
#define SHUB_PORT0_I2C_ADDR_6__EXT_DATA_O__READ(src) \
                    (((uint32_t)(src)\
                    & 0x000001feU) >> 1)
#define SHUB_PORT0_I2C_ADDR_6__EXT_DATA_O__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x000001feU)
#define SHUB_PORT0_I2C_ADDR_6__EXT_DATA_O__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000001feU) | (((uint32_t)(src) <<\
                    1) & 0x000001feU)
#define SHUB_PORT0_I2C_ADDR_6__EXT_DATA_O__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x000001feU)))
#define SHUB_PORT0_I2C_ADDR_6__EXT_DATA_O__RESET_VALUE              0x00000000U
/** @} */

/* macros for field ext_data_oe */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_oe_field ext_data_oe_field
 * @brief macros for field ext_data_oe
 * @details sda output enable per bit
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_6__EXT_DATA_OE__SHIFT                             9
#define SHUB_PORT0_I2C_ADDR_6__EXT_DATA_OE__WIDTH                             8
#define SHUB_PORT0_I2C_ADDR_6__EXT_DATA_OE__MASK                    0x0001fe00U
#define SHUB_PORT0_I2C_ADDR_6__EXT_DATA_OE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0001fe00U) >> 9)
#define SHUB_PORT0_I2C_ADDR_6__EXT_DATA_OE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 9) & 0x0001fe00U)
#define SHUB_PORT0_I2C_ADDR_6__EXT_DATA_OE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0001fe00U) | (((uint32_t)(src) <<\
                    9) & 0x0001fe00U)
#define SHUB_PORT0_I2C_ADDR_6__EXT_DATA_OE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 9) & ~0x0001fe00U)))
#define SHUB_PORT0_I2C_ADDR_6__EXT_DATA_OE__RESET_VALUE             0x000000ffU
/** @} */

/* macros for field ext_data_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_pu_field ext_data_pu_field
 * @brief macros for field ext_data_pu
 * @details sda pin pullup enable
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_6__EXT_DATA_PU__SHIFT                            17
#define SHUB_PORT0_I2C_ADDR_6__EXT_DATA_PU__WIDTH                             1
#define SHUB_PORT0_I2C_ADDR_6__EXT_DATA_PU__MASK                    0x00020000U
#define SHUB_PORT0_I2C_ADDR_6__EXT_DATA_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00020000U) >> 17)
#define SHUB_PORT0_I2C_ADDR_6__EXT_DATA_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 17) & 0x00020000U)
#define SHUB_PORT0_I2C_ADDR_6__EXT_DATA_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | (((uint32_t)(src) <<\
                    17) & 0x00020000U)
#define SHUB_PORT0_I2C_ADDR_6__EXT_DATA_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 17) & ~0x00020000U)))
#define SHUB_PORT0_I2C_ADDR_6__EXT_DATA_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(1) << 17)
#define SHUB_PORT0_I2C_ADDR_6__EXT_DATA_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(0) << 17)
#define SHUB_PORT0_I2C_ADDR_6__EXT_DATA_PU__RESET_VALUE             0x00000000U
/** @} */

/* macros for field ext_clk_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_clk_pu_field ext_clk_pu_field
 * @brief macros for field ext_clk_pu
 * @details sck pin pullup enable
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_6__EXT_CLK_PU__SHIFT                             18
#define SHUB_PORT0_I2C_ADDR_6__EXT_CLK_PU__WIDTH                              1
#define SHUB_PORT0_I2C_ADDR_6__EXT_CLK_PU__MASK                     0x00040000U
#define SHUB_PORT0_I2C_ADDR_6__EXT_CLK_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00040000U) >> 18)
#define SHUB_PORT0_I2C_ADDR_6__EXT_CLK_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 18) & 0x00040000U)
#define SHUB_PORT0_I2C_ADDR_6__EXT_CLK_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | (((uint32_t)(src) <<\
                    18) & 0x00040000U)
#define SHUB_PORT0_I2C_ADDR_6__EXT_CLK_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 18) & ~0x00040000U)))
#define SHUB_PORT0_I2C_ADDR_6__EXT_CLK_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(1) << 18)
#define SHUB_PORT0_I2C_ADDR_6__EXT_CLK_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(0) << 18)
#define SHUB_PORT0_I2C_ADDR_6__EXT_CLK_PU__RESET_VALUE              0x00000000U
/** @} */

/* macros for field ext_head */
/**
 * @defgroup at_apb_shub_regs_core_ext_head_field ext_head_field
 * @brief macros for field ext_head
 * @details Before data transmission starts, what should head be?  0 = start  1 = stall
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_6__EXT_HEAD__SHIFT                               19
#define SHUB_PORT0_I2C_ADDR_6__EXT_HEAD__WIDTH                                2
#define SHUB_PORT0_I2C_ADDR_6__EXT_HEAD__MASK                       0x00180000U
#define SHUB_PORT0_I2C_ADDR_6__EXT_HEAD__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00180000U) >> 19)
#define SHUB_PORT0_I2C_ADDR_6__EXT_HEAD__WRITE(src) \
                    (((uint32_t)(src)\
                    << 19) & 0x00180000U)
#define SHUB_PORT0_I2C_ADDR_6__EXT_HEAD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00180000U) | (((uint32_t)(src) <<\
                    19) & 0x00180000U)
#define SHUB_PORT0_I2C_ADDR_6__EXT_HEAD__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 19) & ~0x00180000U)))
#define SHUB_PORT0_I2C_ADDR_6__EXT_HEAD__RESET_VALUE                0x00000000U
/** @} */

/* macros for field ext_tail */
/**
 * @defgroup at_apb_shub_regs_core_ext_tail_field ext_tail_field
 * @brief macros for field ext_tail
 * @details At end of 8 bits plus ack/nack, what should tail be?  0 = stop  1 = stall  2 = restart
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_6__EXT_TAIL__SHIFT                               21
#define SHUB_PORT0_I2C_ADDR_6__EXT_TAIL__WIDTH                                2
#define SHUB_PORT0_I2C_ADDR_6__EXT_TAIL__MASK                       0x00600000U
#define SHUB_PORT0_I2C_ADDR_6__EXT_TAIL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00600000U) >> 21)
#define SHUB_PORT0_I2C_ADDR_6__EXT_TAIL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 21) & 0x00600000U)
#define SHUB_PORT0_I2C_ADDR_6__EXT_TAIL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00600000U) | (((uint32_t)(src) <<\
                    21) & 0x00600000U)
#define SHUB_PORT0_I2C_ADDR_6__EXT_TAIL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 21) & ~0x00600000U)))
#define SHUB_PORT0_I2C_ADDR_6__EXT_TAIL__RESET_VALUE                0x00000000U
/** @} */

/* macros for field ext_master_drives_ack */
/**
 * @defgroup at_apb_shub_regs_core_ext_master_drives_ack_field ext_master_drives_ack_field
 * @brief macros for field ext_master_drives_ack
 * @details Specifies that master is to drive ack.
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_6__EXT_MASTER_DRIVES_ACK__SHIFT                  23
#define SHUB_PORT0_I2C_ADDR_6__EXT_MASTER_DRIVES_ACK__WIDTH                   1
#define SHUB_PORT0_I2C_ADDR_6__EXT_MASTER_DRIVES_ACK__MASK          0x00800000U
#define SHUB_PORT0_I2C_ADDR_6__EXT_MASTER_DRIVES_ACK__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00800000U) >> 23)
#define SHUB_PORT0_I2C_ADDR_6__EXT_MASTER_DRIVES_ACK__WRITE(src) \
                    (((uint32_t)(src)\
                    << 23) & 0x00800000U)
#define SHUB_PORT0_I2C_ADDR_6__EXT_MASTER_DRIVES_ACK__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | (((uint32_t)(src) <<\
                    23) & 0x00800000U)
#define SHUB_PORT0_I2C_ADDR_6__EXT_MASTER_DRIVES_ACK__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 23) & ~0x00800000U)))
#define SHUB_PORT0_I2C_ADDR_6__EXT_MASTER_DRIVES_ACK__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(1) << 23)
#define SHUB_PORT0_I2C_ADDR_6__EXT_MASTER_DRIVES_ACK__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(0) << 23)
#define SHUB_PORT0_I2C_ADDR_6__EXT_MASTER_DRIVES_ACK__RESET_VALUE   0x00000000U
/** @} */

/* macros for field ext_ack_value_to_drive */
/**
 * @defgroup at_apb_shub_regs_core_ext_ack_value_to_drive_field ext_ack_value_to_drive_field
 * @brief macros for field ext_ack_value_to_drive
 * @details If ack is to be driven by master, what value to drive?
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_6__EXT_ACK_VALUE_TO_DRIVE__SHIFT                 24
#define SHUB_PORT0_I2C_ADDR_6__EXT_ACK_VALUE_TO_DRIVE__WIDTH                  1
#define SHUB_PORT0_I2C_ADDR_6__EXT_ACK_VALUE_TO_DRIVE__MASK         0x01000000U
#define SHUB_PORT0_I2C_ADDR_6__EXT_ACK_VALUE_TO_DRIVE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x01000000U) >> 24)
#define SHUB_PORT0_I2C_ADDR_6__EXT_ACK_VALUE_TO_DRIVE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0x01000000U)
#define SHUB_PORT0_I2C_ADDR_6__EXT_ACK_VALUE_TO_DRIVE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | (((uint32_t)(src) <<\
                    24) & 0x01000000U)
#define SHUB_PORT0_I2C_ADDR_6__EXT_ACK_VALUE_TO_DRIVE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x01000000U)))
#define SHUB_PORT0_I2C_ADDR_6__EXT_ACK_VALUE_TO_DRIVE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(1) << 24)
#define SHUB_PORT0_I2C_ADDR_6__EXT_ACK_VALUE_TO_DRIVE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(0) << 24)
#define SHUB_PORT0_I2C_ADDR_6__EXT_ACK_VALUE_TO_DRIVE__RESET_VALUE  0x00000000U
/** @} */
#define SHUB_PORT0_I2C_ADDR_6__TYPE                                    uint32_t
#define SHUB_PORT0_I2C_ADDR_6__READ                                 0x01ffffffU
#define SHUB_PORT0_I2C_ADDR_6__WRITE                                0x01ffffffU
#define SHUB_PORT0_I2C_ADDR_6__PRESERVED                            0x01ffffffU
#define SHUB_PORT0_I2C_ADDR_6__RESET_VALUE                          0x0001fe00U

#endif /* __SHUB_PORT0_I2C_ADDR_6_MACRO__ */

/** @} end of port0_i2c_addr_6 */

/* macros for BlueprintGlobalNameSpace::SHUB_port0_i2c_addr_7 */
/**
 * @defgroup at_apb_shub_regs_core_port0_i2c_addr_7 port0_i2c_addr_7
 * @brief pointer addr of sensor7 on port0 definitions.
 * @{
 */
#ifndef __SHUB_PORT0_I2C_ADDR_7_MACRO__
#define __SHUB_PORT0_I2C_ADDR_7_MACRO__

/* macros for field ext_data_ie_ovrd */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_ie_ovrd_field ext_data_ie_ovrd_field
 * @brief macros for field ext_data_ie_ovrd
 * @details 1 = ie is high  0 = ie is ~oe
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_7__EXT_DATA_IE_OVRD__SHIFT                        0
#define SHUB_PORT0_I2C_ADDR_7__EXT_DATA_IE_OVRD__WIDTH                        1
#define SHUB_PORT0_I2C_ADDR_7__EXT_DATA_IE_OVRD__MASK               0x00000001U
#define SHUB_PORT0_I2C_ADDR_7__EXT_DATA_IE_OVRD__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT0_I2C_ADDR_7__EXT_DATA_IE_OVRD__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT0_I2C_ADDR_7__EXT_DATA_IE_OVRD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define SHUB_PORT0_I2C_ADDR_7__EXT_DATA_IE_OVRD__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define SHUB_PORT0_I2C_ADDR_7__EXT_DATA_IE_OVRD__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define SHUB_PORT0_I2C_ADDR_7__EXT_DATA_IE_OVRD__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define SHUB_PORT0_I2C_ADDR_7__EXT_DATA_IE_OVRD__RESET_VALUE        0x00000000U
/** @} */

/* macros for field ext_data_o */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_o_field ext_data_o_field
 * @brief macros for field ext_data_o
 * @details outbound data; can be device id, address within device, or write data; if it's device id, the LSB is the R/Wb indicator
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_7__EXT_DATA_O__SHIFT                              1
#define SHUB_PORT0_I2C_ADDR_7__EXT_DATA_O__WIDTH                              8
#define SHUB_PORT0_I2C_ADDR_7__EXT_DATA_O__MASK                     0x000001feU
#define SHUB_PORT0_I2C_ADDR_7__EXT_DATA_O__READ(src) \
                    (((uint32_t)(src)\
                    & 0x000001feU) >> 1)
#define SHUB_PORT0_I2C_ADDR_7__EXT_DATA_O__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x000001feU)
#define SHUB_PORT0_I2C_ADDR_7__EXT_DATA_O__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000001feU) | (((uint32_t)(src) <<\
                    1) & 0x000001feU)
#define SHUB_PORT0_I2C_ADDR_7__EXT_DATA_O__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x000001feU)))
#define SHUB_PORT0_I2C_ADDR_7__EXT_DATA_O__RESET_VALUE              0x00000000U
/** @} */

/* macros for field ext_data_oe */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_oe_field ext_data_oe_field
 * @brief macros for field ext_data_oe
 * @details sda output enable per bit
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_7__EXT_DATA_OE__SHIFT                             9
#define SHUB_PORT0_I2C_ADDR_7__EXT_DATA_OE__WIDTH                             8
#define SHUB_PORT0_I2C_ADDR_7__EXT_DATA_OE__MASK                    0x0001fe00U
#define SHUB_PORT0_I2C_ADDR_7__EXT_DATA_OE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0001fe00U) >> 9)
#define SHUB_PORT0_I2C_ADDR_7__EXT_DATA_OE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 9) & 0x0001fe00U)
#define SHUB_PORT0_I2C_ADDR_7__EXT_DATA_OE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0001fe00U) | (((uint32_t)(src) <<\
                    9) & 0x0001fe00U)
#define SHUB_PORT0_I2C_ADDR_7__EXT_DATA_OE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 9) & ~0x0001fe00U)))
#define SHUB_PORT0_I2C_ADDR_7__EXT_DATA_OE__RESET_VALUE             0x000000ffU
/** @} */

/* macros for field ext_data_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_pu_field ext_data_pu_field
 * @brief macros for field ext_data_pu
 * @details sda pin pullup enable
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_7__EXT_DATA_PU__SHIFT                            17
#define SHUB_PORT0_I2C_ADDR_7__EXT_DATA_PU__WIDTH                             1
#define SHUB_PORT0_I2C_ADDR_7__EXT_DATA_PU__MASK                    0x00020000U
#define SHUB_PORT0_I2C_ADDR_7__EXT_DATA_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00020000U) >> 17)
#define SHUB_PORT0_I2C_ADDR_7__EXT_DATA_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 17) & 0x00020000U)
#define SHUB_PORT0_I2C_ADDR_7__EXT_DATA_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | (((uint32_t)(src) <<\
                    17) & 0x00020000U)
#define SHUB_PORT0_I2C_ADDR_7__EXT_DATA_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 17) & ~0x00020000U)))
#define SHUB_PORT0_I2C_ADDR_7__EXT_DATA_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(1) << 17)
#define SHUB_PORT0_I2C_ADDR_7__EXT_DATA_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(0) << 17)
#define SHUB_PORT0_I2C_ADDR_7__EXT_DATA_PU__RESET_VALUE             0x00000000U
/** @} */

/* macros for field ext_clk_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_clk_pu_field ext_clk_pu_field
 * @brief macros for field ext_clk_pu
 * @details sck pin pullup enable
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_7__EXT_CLK_PU__SHIFT                             18
#define SHUB_PORT0_I2C_ADDR_7__EXT_CLK_PU__WIDTH                              1
#define SHUB_PORT0_I2C_ADDR_7__EXT_CLK_PU__MASK                     0x00040000U
#define SHUB_PORT0_I2C_ADDR_7__EXT_CLK_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00040000U) >> 18)
#define SHUB_PORT0_I2C_ADDR_7__EXT_CLK_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 18) & 0x00040000U)
#define SHUB_PORT0_I2C_ADDR_7__EXT_CLK_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | (((uint32_t)(src) <<\
                    18) & 0x00040000U)
#define SHUB_PORT0_I2C_ADDR_7__EXT_CLK_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 18) & ~0x00040000U)))
#define SHUB_PORT0_I2C_ADDR_7__EXT_CLK_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(1) << 18)
#define SHUB_PORT0_I2C_ADDR_7__EXT_CLK_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(0) << 18)
#define SHUB_PORT0_I2C_ADDR_7__EXT_CLK_PU__RESET_VALUE              0x00000000U
/** @} */

/* macros for field ext_head */
/**
 * @defgroup at_apb_shub_regs_core_ext_head_field ext_head_field
 * @brief macros for field ext_head
 * @details Before data transmission starts, what should head be?  0 = start  1 = stall
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_7__EXT_HEAD__SHIFT                               19
#define SHUB_PORT0_I2C_ADDR_7__EXT_HEAD__WIDTH                                2
#define SHUB_PORT0_I2C_ADDR_7__EXT_HEAD__MASK                       0x00180000U
#define SHUB_PORT0_I2C_ADDR_7__EXT_HEAD__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00180000U) >> 19)
#define SHUB_PORT0_I2C_ADDR_7__EXT_HEAD__WRITE(src) \
                    (((uint32_t)(src)\
                    << 19) & 0x00180000U)
#define SHUB_PORT0_I2C_ADDR_7__EXT_HEAD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00180000U) | (((uint32_t)(src) <<\
                    19) & 0x00180000U)
#define SHUB_PORT0_I2C_ADDR_7__EXT_HEAD__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 19) & ~0x00180000U)))
#define SHUB_PORT0_I2C_ADDR_7__EXT_HEAD__RESET_VALUE                0x00000000U
/** @} */

/* macros for field ext_tail */
/**
 * @defgroup at_apb_shub_regs_core_ext_tail_field ext_tail_field
 * @brief macros for field ext_tail
 * @details At end of 8 bits plus ack/nack, what should tail be?  0 = stop  1 = stall  2 = restart
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_7__EXT_TAIL__SHIFT                               21
#define SHUB_PORT0_I2C_ADDR_7__EXT_TAIL__WIDTH                                2
#define SHUB_PORT0_I2C_ADDR_7__EXT_TAIL__MASK                       0x00600000U
#define SHUB_PORT0_I2C_ADDR_7__EXT_TAIL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00600000U) >> 21)
#define SHUB_PORT0_I2C_ADDR_7__EXT_TAIL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 21) & 0x00600000U)
#define SHUB_PORT0_I2C_ADDR_7__EXT_TAIL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00600000U) | (((uint32_t)(src) <<\
                    21) & 0x00600000U)
#define SHUB_PORT0_I2C_ADDR_7__EXT_TAIL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 21) & ~0x00600000U)))
#define SHUB_PORT0_I2C_ADDR_7__EXT_TAIL__RESET_VALUE                0x00000000U
/** @} */

/* macros for field ext_master_drives_ack */
/**
 * @defgroup at_apb_shub_regs_core_ext_master_drives_ack_field ext_master_drives_ack_field
 * @brief macros for field ext_master_drives_ack
 * @details Specifies that master is to drive ack.
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_7__EXT_MASTER_DRIVES_ACK__SHIFT                  23
#define SHUB_PORT0_I2C_ADDR_7__EXT_MASTER_DRIVES_ACK__WIDTH                   1
#define SHUB_PORT0_I2C_ADDR_7__EXT_MASTER_DRIVES_ACK__MASK          0x00800000U
#define SHUB_PORT0_I2C_ADDR_7__EXT_MASTER_DRIVES_ACK__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00800000U) >> 23)
#define SHUB_PORT0_I2C_ADDR_7__EXT_MASTER_DRIVES_ACK__WRITE(src) \
                    (((uint32_t)(src)\
                    << 23) & 0x00800000U)
#define SHUB_PORT0_I2C_ADDR_7__EXT_MASTER_DRIVES_ACK__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | (((uint32_t)(src) <<\
                    23) & 0x00800000U)
#define SHUB_PORT0_I2C_ADDR_7__EXT_MASTER_DRIVES_ACK__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 23) & ~0x00800000U)))
#define SHUB_PORT0_I2C_ADDR_7__EXT_MASTER_DRIVES_ACK__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(1) << 23)
#define SHUB_PORT0_I2C_ADDR_7__EXT_MASTER_DRIVES_ACK__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(0) << 23)
#define SHUB_PORT0_I2C_ADDR_7__EXT_MASTER_DRIVES_ACK__RESET_VALUE   0x00000000U
/** @} */

/* macros for field ext_ack_value_to_drive */
/**
 * @defgroup at_apb_shub_regs_core_ext_ack_value_to_drive_field ext_ack_value_to_drive_field
 * @brief macros for field ext_ack_value_to_drive
 * @details If ack is to be driven by master, what value to drive?
 * @{
 */
#define SHUB_PORT0_I2C_ADDR_7__EXT_ACK_VALUE_TO_DRIVE__SHIFT                 24
#define SHUB_PORT0_I2C_ADDR_7__EXT_ACK_VALUE_TO_DRIVE__WIDTH                  1
#define SHUB_PORT0_I2C_ADDR_7__EXT_ACK_VALUE_TO_DRIVE__MASK         0x01000000U
#define SHUB_PORT0_I2C_ADDR_7__EXT_ACK_VALUE_TO_DRIVE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x01000000U) >> 24)
#define SHUB_PORT0_I2C_ADDR_7__EXT_ACK_VALUE_TO_DRIVE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0x01000000U)
#define SHUB_PORT0_I2C_ADDR_7__EXT_ACK_VALUE_TO_DRIVE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | (((uint32_t)(src) <<\
                    24) & 0x01000000U)
#define SHUB_PORT0_I2C_ADDR_7__EXT_ACK_VALUE_TO_DRIVE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x01000000U)))
#define SHUB_PORT0_I2C_ADDR_7__EXT_ACK_VALUE_TO_DRIVE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(1) << 24)
#define SHUB_PORT0_I2C_ADDR_7__EXT_ACK_VALUE_TO_DRIVE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(0) << 24)
#define SHUB_PORT0_I2C_ADDR_7__EXT_ACK_VALUE_TO_DRIVE__RESET_VALUE  0x00000000U
/** @} */
#define SHUB_PORT0_I2C_ADDR_7__TYPE                                    uint32_t
#define SHUB_PORT0_I2C_ADDR_7__READ                                 0x01ffffffU
#define SHUB_PORT0_I2C_ADDR_7__WRITE                                0x01ffffffU
#define SHUB_PORT0_I2C_ADDR_7__PRESERVED                            0x01ffffffU
#define SHUB_PORT0_I2C_ADDR_7__RESET_VALUE                          0x0001fe00U

#endif /* __SHUB_PORT0_I2C_ADDR_7_MACRO__ */

/** @} end of port0_i2c_addr_7 */

/* macros for BlueprintGlobalNameSpace::SHUB_port0_i2c_idr_0 */
/**
 * @defgroup at_apb_shub_regs_core_port0_i2c_idr_0 port0_i2c_idr_0
 * @brief id(read) of sensor0 on port0 prior to data read definitions.
 * @{
 */
#ifndef __SHUB_PORT0_I2C_IDR_0_MACRO__
#define __SHUB_PORT0_I2C_IDR_0_MACRO__

/* macros for field ext_data_ie_ovrd */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_ie_ovrd_field ext_data_ie_ovrd_field
 * @brief macros for field ext_data_ie_ovrd
 * @details 1 = ie is high  0 = ie is ~oe
 * @{
 */
#define SHUB_PORT0_I2C_IDR_0__EXT_DATA_IE_OVRD__SHIFT                         0
#define SHUB_PORT0_I2C_IDR_0__EXT_DATA_IE_OVRD__WIDTH                         1
#define SHUB_PORT0_I2C_IDR_0__EXT_DATA_IE_OVRD__MASK                0x00000001U
#define SHUB_PORT0_I2C_IDR_0__EXT_DATA_IE_OVRD__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT0_I2C_IDR_0__EXT_DATA_IE_OVRD__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT0_I2C_IDR_0__EXT_DATA_IE_OVRD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define SHUB_PORT0_I2C_IDR_0__EXT_DATA_IE_OVRD__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define SHUB_PORT0_I2C_IDR_0__EXT_DATA_IE_OVRD__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define SHUB_PORT0_I2C_IDR_0__EXT_DATA_IE_OVRD__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define SHUB_PORT0_I2C_IDR_0__EXT_DATA_IE_OVRD__RESET_VALUE         0x00000000U
/** @} */

/* macros for field ext_data_o */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_o_field ext_data_o_field
 * @brief macros for field ext_data_o
 * @details outbound data; can be device id, address within device, or write data; if it's device id, the LSB is the R/Wb indicator
 * @{
 */
#define SHUB_PORT0_I2C_IDR_0__EXT_DATA_O__SHIFT                               1
#define SHUB_PORT0_I2C_IDR_0__EXT_DATA_O__WIDTH                               8
#define SHUB_PORT0_I2C_IDR_0__EXT_DATA_O__MASK                      0x000001feU
#define SHUB_PORT0_I2C_IDR_0__EXT_DATA_O__READ(src) \
                    (((uint32_t)(src)\
                    & 0x000001feU) >> 1)
#define SHUB_PORT0_I2C_IDR_0__EXT_DATA_O__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x000001feU)
#define SHUB_PORT0_I2C_IDR_0__EXT_DATA_O__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000001feU) | (((uint32_t)(src) <<\
                    1) & 0x000001feU)
#define SHUB_PORT0_I2C_IDR_0__EXT_DATA_O__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x000001feU)))
#define SHUB_PORT0_I2C_IDR_0__EXT_DATA_O__RESET_VALUE               0x00000000U
/** @} */

/* macros for field ext_data_oe */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_oe_field ext_data_oe_field
 * @brief macros for field ext_data_oe
 * @details sda output enable per bit
 * @{
 */
#define SHUB_PORT0_I2C_IDR_0__EXT_DATA_OE__SHIFT                              9
#define SHUB_PORT0_I2C_IDR_0__EXT_DATA_OE__WIDTH                              8
#define SHUB_PORT0_I2C_IDR_0__EXT_DATA_OE__MASK                     0x0001fe00U
#define SHUB_PORT0_I2C_IDR_0__EXT_DATA_OE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0001fe00U) >> 9)
#define SHUB_PORT0_I2C_IDR_0__EXT_DATA_OE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 9) & 0x0001fe00U)
#define SHUB_PORT0_I2C_IDR_0__EXT_DATA_OE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0001fe00U) | (((uint32_t)(src) <<\
                    9) & 0x0001fe00U)
#define SHUB_PORT0_I2C_IDR_0__EXT_DATA_OE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 9) & ~0x0001fe00U)))
#define SHUB_PORT0_I2C_IDR_0__EXT_DATA_OE__RESET_VALUE              0x000000ffU
/** @} */

/* macros for field ext_data_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_pu_field ext_data_pu_field
 * @brief macros for field ext_data_pu
 * @details sda pin pullup enable
 * @{
 */
#define SHUB_PORT0_I2C_IDR_0__EXT_DATA_PU__SHIFT                             17
#define SHUB_PORT0_I2C_IDR_0__EXT_DATA_PU__WIDTH                              1
#define SHUB_PORT0_I2C_IDR_0__EXT_DATA_PU__MASK                     0x00020000U
#define SHUB_PORT0_I2C_IDR_0__EXT_DATA_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00020000U) >> 17)
#define SHUB_PORT0_I2C_IDR_0__EXT_DATA_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 17) & 0x00020000U)
#define SHUB_PORT0_I2C_IDR_0__EXT_DATA_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | (((uint32_t)(src) <<\
                    17) & 0x00020000U)
#define SHUB_PORT0_I2C_IDR_0__EXT_DATA_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 17) & ~0x00020000U)))
#define SHUB_PORT0_I2C_IDR_0__EXT_DATA_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(1) << 17)
#define SHUB_PORT0_I2C_IDR_0__EXT_DATA_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(0) << 17)
#define SHUB_PORT0_I2C_IDR_0__EXT_DATA_PU__RESET_VALUE              0x00000000U
/** @} */

/* macros for field ext_clk_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_clk_pu_field ext_clk_pu_field
 * @brief macros for field ext_clk_pu
 * @details sck pin pullup enable
 * @{
 */
#define SHUB_PORT0_I2C_IDR_0__EXT_CLK_PU__SHIFT                              18
#define SHUB_PORT0_I2C_IDR_0__EXT_CLK_PU__WIDTH                               1
#define SHUB_PORT0_I2C_IDR_0__EXT_CLK_PU__MASK                      0x00040000U
#define SHUB_PORT0_I2C_IDR_0__EXT_CLK_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00040000U) >> 18)
#define SHUB_PORT0_I2C_IDR_0__EXT_CLK_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 18) & 0x00040000U)
#define SHUB_PORT0_I2C_IDR_0__EXT_CLK_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | (((uint32_t)(src) <<\
                    18) & 0x00040000U)
#define SHUB_PORT0_I2C_IDR_0__EXT_CLK_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 18) & ~0x00040000U)))
#define SHUB_PORT0_I2C_IDR_0__EXT_CLK_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(1) << 18)
#define SHUB_PORT0_I2C_IDR_0__EXT_CLK_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(0) << 18)
#define SHUB_PORT0_I2C_IDR_0__EXT_CLK_PU__RESET_VALUE               0x00000000U
/** @} */

/* macros for field ext_head */
/**
 * @defgroup at_apb_shub_regs_core_ext_head_field ext_head_field
 * @brief macros for field ext_head
 * @details Before data transmission starts, what should head be?  0 = start  1 = stall
 * @{
 */
#define SHUB_PORT0_I2C_IDR_0__EXT_HEAD__SHIFT                                19
#define SHUB_PORT0_I2C_IDR_0__EXT_HEAD__WIDTH                                 2
#define SHUB_PORT0_I2C_IDR_0__EXT_HEAD__MASK                        0x00180000U
#define SHUB_PORT0_I2C_IDR_0__EXT_HEAD__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00180000U) >> 19)
#define SHUB_PORT0_I2C_IDR_0__EXT_HEAD__WRITE(src) \
                    (((uint32_t)(src)\
                    << 19) & 0x00180000U)
#define SHUB_PORT0_I2C_IDR_0__EXT_HEAD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00180000U) | (((uint32_t)(src) <<\
                    19) & 0x00180000U)
#define SHUB_PORT0_I2C_IDR_0__EXT_HEAD__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 19) & ~0x00180000U)))
#define SHUB_PORT0_I2C_IDR_0__EXT_HEAD__RESET_VALUE                 0x00000000U
/** @} */

/* macros for field ext_tail */
/**
 * @defgroup at_apb_shub_regs_core_ext_tail_field ext_tail_field
 * @brief macros for field ext_tail
 * @details At end of 8 bits plus ack/nack, what should tail be?  0 = stop  1 = stall  2 = restart
 * @{
 */
#define SHUB_PORT0_I2C_IDR_0__EXT_TAIL__SHIFT                                21
#define SHUB_PORT0_I2C_IDR_0__EXT_TAIL__WIDTH                                 2
#define SHUB_PORT0_I2C_IDR_0__EXT_TAIL__MASK                        0x00600000U
#define SHUB_PORT0_I2C_IDR_0__EXT_TAIL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00600000U) >> 21)
#define SHUB_PORT0_I2C_IDR_0__EXT_TAIL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 21) & 0x00600000U)
#define SHUB_PORT0_I2C_IDR_0__EXT_TAIL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00600000U) | (((uint32_t)(src) <<\
                    21) & 0x00600000U)
#define SHUB_PORT0_I2C_IDR_0__EXT_TAIL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 21) & ~0x00600000U)))
#define SHUB_PORT0_I2C_IDR_0__EXT_TAIL__RESET_VALUE                 0x00000000U
/** @} */

/* macros for field ext_master_drives_ack */
/**
 * @defgroup at_apb_shub_regs_core_ext_master_drives_ack_field ext_master_drives_ack_field
 * @brief macros for field ext_master_drives_ack
 * @details Specifies that master is to drive ack.
 * @{
 */
#define SHUB_PORT0_I2C_IDR_0__EXT_MASTER_DRIVES_ACK__SHIFT                   23
#define SHUB_PORT0_I2C_IDR_0__EXT_MASTER_DRIVES_ACK__WIDTH                    1
#define SHUB_PORT0_I2C_IDR_0__EXT_MASTER_DRIVES_ACK__MASK           0x00800000U
#define SHUB_PORT0_I2C_IDR_0__EXT_MASTER_DRIVES_ACK__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00800000U) >> 23)
#define SHUB_PORT0_I2C_IDR_0__EXT_MASTER_DRIVES_ACK__WRITE(src) \
                    (((uint32_t)(src)\
                    << 23) & 0x00800000U)
#define SHUB_PORT0_I2C_IDR_0__EXT_MASTER_DRIVES_ACK__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | (((uint32_t)(src) <<\
                    23) & 0x00800000U)
#define SHUB_PORT0_I2C_IDR_0__EXT_MASTER_DRIVES_ACK__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 23) & ~0x00800000U)))
#define SHUB_PORT0_I2C_IDR_0__EXT_MASTER_DRIVES_ACK__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(1) << 23)
#define SHUB_PORT0_I2C_IDR_0__EXT_MASTER_DRIVES_ACK__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(0) << 23)
#define SHUB_PORT0_I2C_IDR_0__EXT_MASTER_DRIVES_ACK__RESET_VALUE    0x00000000U
/** @} */

/* macros for field ext_ack_value_to_drive */
/**
 * @defgroup at_apb_shub_regs_core_ext_ack_value_to_drive_field ext_ack_value_to_drive_field
 * @brief macros for field ext_ack_value_to_drive
 * @details If ack is to be driven by master, what value to drive?
 * @{
 */
#define SHUB_PORT0_I2C_IDR_0__EXT_ACK_VALUE_TO_DRIVE__SHIFT                  24
#define SHUB_PORT0_I2C_IDR_0__EXT_ACK_VALUE_TO_DRIVE__WIDTH                   1
#define SHUB_PORT0_I2C_IDR_0__EXT_ACK_VALUE_TO_DRIVE__MASK          0x01000000U
#define SHUB_PORT0_I2C_IDR_0__EXT_ACK_VALUE_TO_DRIVE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x01000000U) >> 24)
#define SHUB_PORT0_I2C_IDR_0__EXT_ACK_VALUE_TO_DRIVE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0x01000000U)
#define SHUB_PORT0_I2C_IDR_0__EXT_ACK_VALUE_TO_DRIVE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | (((uint32_t)(src) <<\
                    24) & 0x01000000U)
#define SHUB_PORT0_I2C_IDR_0__EXT_ACK_VALUE_TO_DRIVE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x01000000U)))
#define SHUB_PORT0_I2C_IDR_0__EXT_ACK_VALUE_TO_DRIVE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(1) << 24)
#define SHUB_PORT0_I2C_IDR_0__EXT_ACK_VALUE_TO_DRIVE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(0) << 24)
#define SHUB_PORT0_I2C_IDR_0__EXT_ACK_VALUE_TO_DRIVE__RESET_VALUE   0x00000000U
/** @} */
#define SHUB_PORT0_I2C_IDR_0__TYPE                                     uint32_t
#define SHUB_PORT0_I2C_IDR_0__READ                                  0x01ffffffU
#define SHUB_PORT0_I2C_IDR_0__WRITE                                 0x01ffffffU
#define SHUB_PORT0_I2C_IDR_0__PRESERVED                             0x01ffffffU
#define SHUB_PORT0_I2C_IDR_0__RESET_VALUE                           0x0001fe00U

#endif /* __SHUB_PORT0_I2C_IDR_0_MACRO__ */

/** @} end of port0_i2c_idr_0 */

/* macros for BlueprintGlobalNameSpace::SHUB_port0_i2c_idr_1 */
/**
 * @defgroup at_apb_shub_regs_core_port0_i2c_idr_1 port0_i2c_idr_1
 * @brief id(read) of sensor1 on port0 prior to data read definitions.
 * @{
 */
#ifndef __SHUB_PORT0_I2C_IDR_1_MACRO__
#define __SHUB_PORT0_I2C_IDR_1_MACRO__

/* macros for field ext_data_ie_ovrd */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_ie_ovrd_field ext_data_ie_ovrd_field
 * @brief macros for field ext_data_ie_ovrd
 * @details 1 = ie is high  0 = ie is ~oe
 * @{
 */
#define SHUB_PORT0_I2C_IDR_1__EXT_DATA_IE_OVRD__SHIFT                         0
#define SHUB_PORT0_I2C_IDR_1__EXT_DATA_IE_OVRD__WIDTH                         1
#define SHUB_PORT0_I2C_IDR_1__EXT_DATA_IE_OVRD__MASK                0x00000001U
#define SHUB_PORT0_I2C_IDR_1__EXT_DATA_IE_OVRD__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT0_I2C_IDR_1__EXT_DATA_IE_OVRD__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT0_I2C_IDR_1__EXT_DATA_IE_OVRD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define SHUB_PORT0_I2C_IDR_1__EXT_DATA_IE_OVRD__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define SHUB_PORT0_I2C_IDR_1__EXT_DATA_IE_OVRD__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define SHUB_PORT0_I2C_IDR_1__EXT_DATA_IE_OVRD__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define SHUB_PORT0_I2C_IDR_1__EXT_DATA_IE_OVRD__RESET_VALUE         0x00000000U
/** @} */

/* macros for field ext_data_o */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_o_field ext_data_o_field
 * @brief macros for field ext_data_o
 * @details outbound data; can be device id, address within device, or write data; if it's device id, the LSB is the R/Wb indicator
 * @{
 */
#define SHUB_PORT0_I2C_IDR_1__EXT_DATA_O__SHIFT                               1
#define SHUB_PORT0_I2C_IDR_1__EXT_DATA_O__WIDTH                               8
#define SHUB_PORT0_I2C_IDR_1__EXT_DATA_O__MASK                      0x000001feU
#define SHUB_PORT0_I2C_IDR_1__EXT_DATA_O__READ(src) \
                    (((uint32_t)(src)\
                    & 0x000001feU) >> 1)
#define SHUB_PORT0_I2C_IDR_1__EXT_DATA_O__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x000001feU)
#define SHUB_PORT0_I2C_IDR_1__EXT_DATA_O__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000001feU) | (((uint32_t)(src) <<\
                    1) & 0x000001feU)
#define SHUB_PORT0_I2C_IDR_1__EXT_DATA_O__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x000001feU)))
#define SHUB_PORT0_I2C_IDR_1__EXT_DATA_O__RESET_VALUE               0x00000000U
/** @} */

/* macros for field ext_data_oe */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_oe_field ext_data_oe_field
 * @brief macros for field ext_data_oe
 * @details sda output enable per bit
 * @{
 */
#define SHUB_PORT0_I2C_IDR_1__EXT_DATA_OE__SHIFT                              9
#define SHUB_PORT0_I2C_IDR_1__EXT_DATA_OE__WIDTH                              8
#define SHUB_PORT0_I2C_IDR_1__EXT_DATA_OE__MASK                     0x0001fe00U
#define SHUB_PORT0_I2C_IDR_1__EXT_DATA_OE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0001fe00U) >> 9)
#define SHUB_PORT0_I2C_IDR_1__EXT_DATA_OE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 9) & 0x0001fe00U)
#define SHUB_PORT0_I2C_IDR_1__EXT_DATA_OE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0001fe00U) | (((uint32_t)(src) <<\
                    9) & 0x0001fe00U)
#define SHUB_PORT0_I2C_IDR_1__EXT_DATA_OE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 9) & ~0x0001fe00U)))
#define SHUB_PORT0_I2C_IDR_1__EXT_DATA_OE__RESET_VALUE              0x000000ffU
/** @} */

/* macros for field ext_data_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_pu_field ext_data_pu_field
 * @brief macros for field ext_data_pu
 * @details sda pin pullup enable
 * @{
 */
#define SHUB_PORT0_I2C_IDR_1__EXT_DATA_PU__SHIFT                             17
#define SHUB_PORT0_I2C_IDR_1__EXT_DATA_PU__WIDTH                              1
#define SHUB_PORT0_I2C_IDR_1__EXT_DATA_PU__MASK                     0x00020000U
#define SHUB_PORT0_I2C_IDR_1__EXT_DATA_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00020000U) >> 17)
#define SHUB_PORT0_I2C_IDR_1__EXT_DATA_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 17) & 0x00020000U)
#define SHUB_PORT0_I2C_IDR_1__EXT_DATA_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | (((uint32_t)(src) <<\
                    17) & 0x00020000U)
#define SHUB_PORT0_I2C_IDR_1__EXT_DATA_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 17) & ~0x00020000U)))
#define SHUB_PORT0_I2C_IDR_1__EXT_DATA_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(1) << 17)
#define SHUB_PORT0_I2C_IDR_1__EXT_DATA_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(0) << 17)
#define SHUB_PORT0_I2C_IDR_1__EXT_DATA_PU__RESET_VALUE              0x00000000U
/** @} */

/* macros for field ext_clk_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_clk_pu_field ext_clk_pu_field
 * @brief macros for field ext_clk_pu
 * @details sck pin pullup enable
 * @{
 */
#define SHUB_PORT0_I2C_IDR_1__EXT_CLK_PU__SHIFT                              18
#define SHUB_PORT0_I2C_IDR_1__EXT_CLK_PU__WIDTH                               1
#define SHUB_PORT0_I2C_IDR_1__EXT_CLK_PU__MASK                      0x00040000U
#define SHUB_PORT0_I2C_IDR_1__EXT_CLK_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00040000U) >> 18)
#define SHUB_PORT0_I2C_IDR_1__EXT_CLK_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 18) & 0x00040000U)
#define SHUB_PORT0_I2C_IDR_1__EXT_CLK_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | (((uint32_t)(src) <<\
                    18) & 0x00040000U)
#define SHUB_PORT0_I2C_IDR_1__EXT_CLK_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 18) & ~0x00040000U)))
#define SHUB_PORT0_I2C_IDR_1__EXT_CLK_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(1) << 18)
#define SHUB_PORT0_I2C_IDR_1__EXT_CLK_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(0) << 18)
#define SHUB_PORT0_I2C_IDR_1__EXT_CLK_PU__RESET_VALUE               0x00000000U
/** @} */

/* macros for field ext_head */
/**
 * @defgroup at_apb_shub_regs_core_ext_head_field ext_head_field
 * @brief macros for field ext_head
 * @details Before data transmission starts, what should head be?  0 = start  1 = stall
 * @{
 */
#define SHUB_PORT0_I2C_IDR_1__EXT_HEAD__SHIFT                                19
#define SHUB_PORT0_I2C_IDR_1__EXT_HEAD__WIDTH                                 2
#define SHUB_PORT0_I2C_IDR_1__EXT_HEAD__MASK                        0x00180000U
#define SHUB_PORT0_I2C_IDR_1__EXT_HEAD__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00180000U) >> 19)
#define SHUB_PORT0_I2C_IDR_1__EXT_HEAD__WRITE(src) \
                    (((uint32_t)(src)\
                    << 19) & 0x00180000U)
#define SHUB_PORT0_I2C_IDR_1__EXT_HEAD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00180000U) | (((uint32_t)(src) <<\
                    19) & 0x00180000U)
#define SHUB_PORT0_I2C_IDR_1__EXT_HEAD__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 19) & ~0x00180000U)))
#define SHUB_PORT0_I2C_IDR_1__EXT_HEAD__RESET_VALUE                 0x00000000U
/** @} */

/* macros for field ext_tail */
/**
 * @defgroup at_apb_shub_regs_core_ext_tail_field ext_tail_field
 * @brief macros for field ext_tail
 * @details At end of 8 bits plus ack/nack, what should tail be?  0 = stop  1 = stall  2 = restart
 * @{
 */
#define SHUB_PORT0_I2C_IDR_1__EXT_TAIL__SHIFT                                21
#define SHUB_PORT0_I2C_IDR_1__EXT_TAIL__WIDTH                                 2
#define SHUB_PORT0_I2C_IDR_1__EXT_TAIL__MASK                        0x00600000U
#define SHUB_PORT0_I2C_IDR_1__EXT_TAIL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00600000U) >> 21)
#define SHUB_PORT0_I2C_IDR_1__EXT_TAIL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 21) & 0x00600000U)
#define SHUB_PORT0_I2C_IDR_1__EXT_TAIL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00600000U) | (((uint32_t)(src) <<\
                    21) & 0x00600000U)
#define SHUB_PORT0_I2C_IDR_1__EXT_TAIL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 21) & ~0x00600000U)))
#define SHUB_PORT0_I2C_IDR_1__EXT_TAIL__RESET_VALUE                 0x00000000U
/** @} */

/* macros for field ext_master_drives_ack */
/**
 * @defgroup at_apb_shub_regs_core_ext_master_drives_ack_field ext_master_drives_ack_field
 * @brief macros for field ext_master_drives_ack
 * @details Specifies that master is to drive ack.
 * @{
 */
#define SHUB_PORT0_I2C_IDR_1__EXT_MASTER_DRIVES_ACK__SHIFT                   23
#define SHUB_PORT0_I2C_IDR_1__EXT_MASTER_DRIVES_ACK__WIDTH                    1
#define SHUB_PORT0_I2C_IDR_1__EXT_MASTER_DRIVES_ACK__MASK           0x00800000U
#define SHUB_PORT0_I2C_IDR_1__EXT_MASTER_DRIVES_ACK__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00800000U) >> 23)
#define SHUB_PORT0_I2C_IDR_1__EXT_MASTER_DRIVES_ACK__WRITE(src) \
                    (((uint32_t)(src)\
                    << 23) & 0x00800000U)
#define SHUB_PORT0_I2C_IDR_1__EXT_MASTER_DRIVES_ACK__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | (((uint32_t)(src) <<\
                    23) & 0x00800000U)
#define SHUB_PORT0_I2C_IDR_1__EXT_MASTER_DRIVES_ACK__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 23) & ~0x00800000U)))
#define SHUB_PORT0_I2C_IDR_1__EXT_MASTER_DRIVES_ACK__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(1) << 23)
#define SHUB_PORT0_I2C_IDR_1__EXT_MASTER_DRIVES_ACK__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(0) << 23)
#define SHUB_PORT0_I2C_IDR_1__EXT_MASTER_DRIVES_ACK__RESET_VALUE    0x00000000U
/** @} */

/* macros for field ext_ack_value_to_drive */
/**
 * @defgroup at_apb_shub_regs_core_ext_ack_value_to_drive_field ext_ack_value_to_drive_field
 * @brief macros for field ext_ack_value_to_drive
 * @details If ack is to be driven by master, what value to drive?
 * @{
 */
#define SHUB_PORT0_I2C_IDR_1__EXT_ACK_VALUE_TO_DRIVE__SHIFT                  24
#define SHUB_PORT0_I2C_IDR_1__EXT_ACK_VALUE_TO_DRIVE__WIDTH                   1
#define SHUB_PORT0_I2C_IDR_1__EXT_ACK_VALUE_TO_DRIVE__MASK          0x01000000U
#define SHUB_PORT0_I2C_IDR_1__EXT_ACK_VALUE_TO_DRIVE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x01000000U) >> 24)
#define SHUB_PORT0_I2C_IDR_1__EXT_ACK_VALUE_TO_DRIVE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0x01000000U)
#define SHUB_PORT0_I2C_IDR_1__EXT_ACK_VALUE_TO_DRIVE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | (((uint32_t)(src) <<\
                    24) & 0x01000000U)
#define SHUB_PORT0_I2C_IDR_1__EXT_ACK_VALUE_TO_DRIVE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x01000000U)))
#define SHUB_PORT0_I2C_IDR_1__EXT_ACK_VALUE_TO_DRIVE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(1) << 24)
#define SHUB_PORT0_I2C_IDR_1__EXT_ACK_VALUE_TO_DRIVE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(0) << 24)
#define SHUB_PORT0_I2C_IDR_1__EXT_ACK_VALUE_TO_DRIVE__RESET_VALUE   0x00000000U
/** @} */
#define SHUB_PORT0_I2C_IDR_1__TYPE                                     uint32_t
#define SHUB_PORT0_I2C_IDR_1__READ                                  0x01ffffffU
#define SHUB_PORT0_I2C_IDR_1__WRITE                                 0x01ffffffU
#define SHUB_PORT0_I2C_IDR_1__PRESERVED                             0x01ffffffU
#define SHUB_PORT0_I2C_IDR_1__RESET_VALUE                           0x0001fe00U

#endif /* __SHUB_PORT0_I2C_IDR_1_MACRO__ */

/** @} end of port0_i2c_idr_1 */

/* macros for BlueprintGlobalNameSpace::SHUB_port0_i2c_idr_2 */
/**
 * @defgroup at_apb_shub_regs_core_port0_i2c_idr_2 port0_i2c_idr_2
 * @brief id(read) of sensor2 on port0 prior to data read definitions.
 * @{
 */
#ifndef __SHUB_PORT0_I2C_IDR_2_MACRO__
#define __SHUB_PORT0_I2C_IDR_2_MACRO__

/* macros for field ext_data_ie_ovrd */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_ie_ovrd_field ext_data_ie_ovrd_field
 * @brief macros for field ext_data_ie_ovrd
 * @details 1 = ie is high  0 = ie is ~oe
 * @{
 */
#define SHUB_PORT0_I2C_IDR_2__EXT_DATA_IE_OVRD__SHIFT                         0
#define SHUB_PORT0_I2C_IDR_2__EXT_DATA_IE_OVRD__WIDTH                         1
#define SHUB_PORT0_I2C_IDR_2__EXT_DATA_IE_OVRD__MASK                0x00000001U
#define SHUB_PORT0_I2C_IDR_2__EXT_DATA_IE_OVRD__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT0_I2C_IDR_2__EXT_DATA_IE_OVRD__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT0_I2C_IDR_2__EXT_DATA_IE_OVRD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define SHUB_PORT0_I2C_IDR_2__EXT_DATA_IE_OVRD__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define SHUB_PORT0_I2C_IDR_2__EXT_DATA_IE_OVRD__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define SHUB_PORT0_I2C_IDR_2__EXT_DATA_IE_OVRD__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define SHUB_PORT0_I2C_IDR_2__EXT_DATA_IE_OVRD__RESET_VALUE         0x00000000U
/** @} */

/* macros for field ext_data_o */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_o_field ext_data_o_field
 * @brief macros for field ext_data_o
 * @details outbound data; can be device id, address within device, or write data; if it's device id, the LSB is the R/Wb indicator
 * @{
 */
#define SHUB_PORT0_I2C_IDR_2__EXT_DATA_O__SHIFT                               1
#define SHUB_PORT0_I2C_IDR_2__EXT_DATA_O__WIDTH                               8
#define SHUB_PORT0_I2C_IDR_2__EXT_DATA_O__MASK                      0x000001feU
#define SHUB_PORT0_I2C_IDR_2__EXT_DATA_O__READ(src) \
                    (((uint32_t)(src)\
                    & 0x000001feU) >> 1)
#define SHUB_PORT0_I2C_IDR_2__EXT_DATA_O__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x000001feU)
#define SHUB_PORT0_I2C_IDR_2__EXT_DATA_O__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000001feU) | (((uint32_t)(src) <<\
                    1) & 0x000001feU)
#define SHUB_PORT0_I2C_IDR_2__EXT_DATA_O__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x000001feU)))
#define SHUB_PORT0_I2C_IDR_2__EXT_DATA_O__RESET_VALUE               0x00000000U
/** @} */

/* macros for field ext_data_oe */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_oe_field ext_data_oe_field
 * @brief macros for field ext_data_oe
 * @details sda output enable per bit
 * @{
 */
#define SHUB_PORT0_I2C_IDR_2__EXT_DATA_OE__SHIFT                              9
#define SHUB_PORT0_I2C_IDR_2__EXT_DATA_OE__WIDTH                              8
#define SHUB_PORT0_I2C_IDR_2__EXT_DATA_OE__MASK                     0x0001fe00U
#define SHUB_PORT0_I2C_IDR_2__EXT_DATA_OE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0001fe00U) >> 9)
#define SHUB_PORT0_I2C_IDR_2__EXT_DATA_OE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 9) & 0x0001fe00U)
#define SHUB_PORT0_I2C_IDR_2__EXT_DATA_OE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0001fe00U) | (((uint32_t)(src) <<\
                    9) & 0x0001fe00U)
#define SHUB_PORT0_I2C_IDR_2__EXT_DATA_OE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 9) & ~0x0001fe00U)))
#define SHUB_PORT0_I2C_IDR_2__EXT_DATA_OE__RESET_VALUE              0x000000ffU
/** @} */

/* macros for field ext_data_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_pu_field ext_data_pu_field
 * @brief macros for field ext_data_pu
 * @details sda pin pullup enable
 * @{
 */
#define SHUB_PORT0_I2C_IDR_2__EXT_DATA_PU__SHIFT                             17
#define SHUB_PORT0_I2C_IDR_2__EXT_DATA_PU__WIDTH                              1
#define SHUB_PORT0_I2C_IDR_2__EXT_DATA_PU__MASK                     0x00020000U
#define SHUB_PORT0_I2C_IDR_2__EXT_DATA_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00020000U) >> 17)
#define SHUB_PORT0_I2C_IDR_2__EXT_DATA_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 17) & 0x00020000U)
#define SHUB_PORT0_I2C_IDR_2__EXT_DATA_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | (((uint32_t)(src) <<\
                    17) & 0x00020000U)
#define SHUB_PORT0_I2C_IDR_2__EXT_DATA_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 17) & ~0x00020000U)))
#define SHUB_PORT0_I2C_IDR_2__EXT_DATA_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(1) << 17)
#define SHUB_PORT0_I2C_IDR_2__EXT_DATA_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(0) << 17)
#define SHUB_PORT0_I2C_IDR_2__EXT_DATA_PU__RESET_VALUE              0x00000000U
/** @} */

/* macros for field ext_clk_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_clk_pu_field ext_clk_pu_field
 * @brief macros for field ext_clk_pu
 * @details sck pin pullup enable
 * @{
 */
#define SHUB_PORT0_I2C_IDR_2__EXT_CLK_PU__SHIFT                              18
#define SHUB_PORT0_I2C_IDR_2__EXT_CLK_PU__WIDTH                               1
#define SHUB_PORT0_I2C_IDR_2__EXT_CLK_PU__MASK                      0x00040000U
#define SHUB_PORT0_I2C_IDR_2__EXT_CLK_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00040000U) >> 18)
#define SHUB_PORT0_I2C_IDR_2__EXT_CLK_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 18) & 0x00040000U)
#define SHUB_PORT0_I2C_IDR_2__EXT_CLK_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | (((uint32_t)(src) <<\
                    18) & 0x00040000U)
#define SHUB_PORT0_I2C_IDR_2__EXT_CLK_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 18) & ~0x00040000U)))
#define SHUB_PORT0_I2C_IDR_2__EXT_CLK_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(1) << 18)
#define SHUB_PORT0_I2C_IDR_2__EXT_CLK_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(0) << 18)
#define SHUB_PORT0_I2C_IDR_2__EXT_CLK_PU__RESET_VALUE               0x00000000U
/** @} */

/* macros for field ext_head */
/**
 * @defgroup at_apb_shub_regs_core_ext_head_field ext_head_field
 * @brief macros for field ext_head
 * @details Before data transmission starts, what should head be?  0 = start  1 = stall
 * @{
 */
#define SHUB_PORT0_I2C_IDR_2__EXT_HEAD__SHIFT                                19
#define SHUB_PORT0_I2C_IDR_2__EXT_HEAD__WIDTH                                 2
#define SHUB_PORT0_I2C_IDR_2__EXT_HEAD__MASK                        0x00180000U
#define SHUB_PORT0_I2C_IDR_2__EXT_HEAD__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00180000U) >> 19)
#define SHUB_PORT0_I2C_IDR_2__EXT_HEAD__WRITE(src) \
                    (((uint32_t)(src)\
                    << 19) & 0x00180000U)
#define SHUB_PORT0_I2C_IDR_2__EXT_HEAD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00180000U) | (((uint32_t)(src) <<\
                    19) & 0x00180000U)
#define SHUB_PORT0_I2C_IDR_2__EXT_HEAD__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 19) & ~0x00180000U)))
#define SHUB_PORT0_I2C_IDR_2__EXT_HEAD__RESET_VALUE                 0x00000000U
/** @} */

/* macros for field ext_tail */
/**
 * @defgroup at_apb_shub_regs_core_ext_tail_field ext_tail_field
 * @brief macros for field ext_tail
 * @details At end of 8 bits plus ack/nack, what should tail be?  0 = stop  1 = stall  2 = restart
 * @{
 */
#define SHUB_PORT0_I2C_IDR_2__EXT_TAIL__SHIFT                                21
#define SHUB_PORT0_I2C_IDR_2__EXT_TAIL__WIDTH                                 2
#define SHUB_PORT0_I2C_IDR_2__EXT_TAIL__MASK                        0x00600000U
#define SHUB_PORT0_I2C_IDR_2__EXT_TAIL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00600000U) >> 21)
#define SHUB_PORT0_I2C_IDR_2__EXT_TAIL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 21) & 0x00600000U)
#define SHUB_PORT0_I2C_IDR_2__EXT_TAIL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00600000U) | (((uint32_t)(src) <<\
                    21) & 0x00600000U)
#define SHUB_PORT0_I2C_IDR_2__EXT_TAIL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 21) & ~0x00600000U)))
#define SHUB_PORT0_I2C_IDR_2__EXT_TAIL__RESET_VALUE                 0x00000000U
/** @} */

/* macros for field ext_master_drives_ack */
/**
 * @defgroup at_apb_shub_regs_core_ext_master_drives_ack_field ext_master_drives_ack_field
 * @brief macros for field ext_master_drives_ack
 * @details Specifies that master is to drive ack.
 * @{
 */
#define SHUB_PORT0_I2C_IDR_2__EXT_MASTER_DRIVES_ACK__SHIFT                   23
#define SHUB_PORT0_I2C_IDR_2__EXT_MASTER_DRIVES_ACK__WIDTH                    1
#define SHUB_PORT0_I2C_IDR_2__EXT_MASTER_DRIVES_ACK__MASK           0x00800000U
#define SHUB_PORT0_I2C_IDR_2__EXT_MASTER_DRIVES_ACK__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00800000U) >> 23)
#define SHUB_PORT0_I2C_IDR_2__EXT_MASTER_DRIVES_ACK__WRITE(src) \
                    (((uint32_t)(src)\
                    << 23) & 0x00800000U)
#define SHUB_PORT0_I2C_IDR_2__EXT_MASTER_DRIVES_ACK__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | (((uint32_t)(src) <<\
                    23) & 0x00800000U)
#define SHUB_PORT0_I2C_IDR_2__EXT_MASTER_DRIVES_ACK__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 23) & ~0x00800000U)))
#define SHUB_PORT0_I2C_IDR_2__EXT_MASTER_DRIVES_ACK__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(1) << 23)
#define SHUB_PORT0_I2C_IDR_2__EXT_MASTER_DRIVES_ACK__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(0) << 23)
#define SHUB_PORT0_I2C_IDR_2__EXT_MASTER_DRIVES_ACK__RESET_VALUE    0x00000000U
/** @} */

/* macros for field ext_ack_value_to_drive */
/**
 * @defgroup at_apb_shub_regs_core_ext_ack_value_to_drive_field ext_ack_value_to_drive_field
 * @brief macros for field ext_ack_value_to_drive
 * @details If ack is to be driven by master, what value to drive?
 * @{
 */
#define SHUB_PORT0_I2C_IDR_2__EXT_ACK_VALUE_TO_DRIVE__SHIFT                  24
#define SHUB_PORT0_I2C_IDR_2__EXT_ACK_VALUE_TO_DRIVE__WIDTH                   1
#define SHUB_PORT0_I2C_IDR_2__EXT_ACK_VALUE_TO_DRIVE__MASK          0x01000000U
#define SHUB_PORT0_I2C_IDR_2__EXT_ACK_VALUE_TO_DRIVE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x01000000U) >> 24)
#define SHUB_PORT0_I2C_IDR_2__EXT_ACK_VALUE_TO_DRIVE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0x01000000U)
#define SHUB_PORT0_I2C_IDR_2__EXT_ACK_VALUE_TO_DRIVE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | (((uint32_t)(src) <<\
                    24) & 0x01000000U)
#define SHUB_PORT0_I2C_IDR_2__EXT_ACK_VALUE_TO_DRIVE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x01000000U)))
#define SHUB_PORT0_I2C_IDR_2__EXT_ACK_VALUE_TO_DRIVE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(1) << 24)
#define SHUB_PORT0_I2C_IDR_2__EXT_ACK_VALUE_TO_DRIVE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(0) << 24)
#define SHUB_PORT0_I2C_IDR_2__EXT_ACK_VALUE_TO_DRIVE__RESET_VALUE   0x00000000U
/** @} */
#define SHUB_PORT0_I2C_IDR_2__TYPE                                     uint32_t
#define SHUB_PORT0_I2C_IDR_2__READ                                  0x01ffffffU
#define SHUB_PORT0_I2C_IDR_2__WRITE                                 0x01ffffffU
#define SHUB_PORT0_I2C_IDR_2__PRESERVED                             0x01ffffffU
#define SHUB_PORT0_I2C_IDR_2__RESET_VALUE                           0x0001fe00U

#endif /* __SHUB_PORT0_I2C_IDR_2_MACRO__ */

/** @} end of port0_i2c_idr_2 */

/* macros for BlueprintGlobalNameSpace::SHUB_port0_i2c_idr_3 */
/**
 * @defgroup at_apb_shub_regs_core_port0_i2c_idr_3 port0_i2c_idr_3
 * @brief id(read) of sensor3 on port0 prior to data read definitions.
 * @{
 */
#ifndef __SHUB_PORT0_I2C_IDR_3_MACRO__
#define __SHUB_PORT0_I2C_IDR_3_MACRO__

/* macros for field ext_data_ie_ovrd */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_ie_ovrd_field ext_data_ie_ovrd_field
 * @brief macros for field ext_data_ie_ovrd
 * @details 1 = ie is high  0 = ie is ~oe
 * @{
 */
#define SHUB_PORT0_I2C_IDR_3__EXT_DATA_IE_OVRD__SHIFT                         0
#define SHUB_PORT0_I2C_IDR_3__EXT_DATA_IE_OVRD__WIDTH                         1
#define SHUB_PORT0_I2C_IDR_3__EXT_DATA_IE_OVRD__MASK                0x00000001U
#define SHUB_PORT0_I2C_IDR_3__EXT_DATA_IE_OVRD__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT0_I2C_IDR_3__EXT_DATA_IE_OVRD__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT0_I2C_IDR_3__EXT_DATA_IE_OVRD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define SHUB_PORT0_I2C_IDR_3__EXT_DATA_IE_OVRD__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define SHUB_PORT0_I2C_IDR_3__EXT_DATA_IE_OVRD__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define SHUB_PORT0_I2C_IDR_3__EXT_DATA_IE_OVRD__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define SHUB_PORT0_I2C_IDR_3__EXT_DATA_IE_OVRD__RESET_VALUE         0x00000000U
/** @} */

/* macros for field ext_data_o */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_o_field ext_data_o_field
 * @brief macros for field ext_data_o
 * @details outbound data; can be device id, address within device, or write data; if it's device id, the LSB is the R/Wb indicator
 * @{
 */
#define SHUB_PORT0_I2C_IDR_3__EXT_DATA_O__SHIFT                               1
#define SHUB_PORT0_I2C_IDR_3__EXT_DATA_O__WIDTH                               8
#define SHUB_PORT0_I2C_IDR_3__EXT_DATA_O__MASK                      0x000001feU
#define SHUB_PORT0_I2C_IDR_3__EXT_DATA_O__READ(src) \
                    (((uint32_t)(src)\
                    & 0x000001feU) >> 1)
#define SHUB_PORT0_I2C_IDR_3__EXT_DATA_O__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x000001feU)
#define SHUB_PORT0_I2C_IDR_3__EXT_DATA_O__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000001feU) | (((uint32_t)(src) <<\
                    1) & 0x000001feU)
#define SHUB_PORT0_I2C_IDR_3__EXT_DATA_O__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x000001feU)))
#define SHUB_PORT0_I2C_IDR_3__EXT_DATA_O__RESET_VALUE               0x00000000U
/** @} */

/* macros for field ext_data_oe */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_oe_field ext_data_oe_field
 * @brief macros for field ext_data_oe
 * @details sda output enable per bit
 * @{
 */
#define SHUB_PORT0_I2C_IDR_3__EXT_DATA_OE__SHIFT                              9
#define SHUB_PORT0_I2C_IDR_3__EXT_DATA_OE__WIDTH                              8
#define SHUB_PORT0_I2C_IDR_3__EXT_DATA_OE__MASK                     0x0001fe00U
#define SHUB_PORT0_I2C_IDR_3__EXT_DATA_OE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0001fe00U) >> 9)
#define SHUB_PORT0_I2C_IDR_3__EXT_DATA_OE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 9) & 0x0001fe00U)
#define SHUB_PORT0_I2C_IDR_3__EXT_DATA_OE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0001fe00U) | (((uint32_t)(src) <<\
                    9) & 0x0001fe00U)
#define SHUB_PORT0_I2C_IDR_3__EXT_DATA_OE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 9) & ~0x0001fe00U)))
#define SHUB_PORT0_I2C_IDR_3__EXT_DATA_OE__RESET_VALUE              0x000000ffU
/** @} */

/* macros for field ext_data_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_pu_field ext_data_pu_field
 * @brief macros for field ext_data_pu
 * @details sda pin pullup enable
 * @{
 */
#define SHUB_PORT0_I2C_IDR_3__EXT_DATA_PU__SHIFT                             17
#define SHUB_PORT0_I2C_IDR_3__EXT_DATA_PU__WIDTH                              1
#define SHUB_PORT0_I2C_IDR_3__EXT_DATA_PU__MASK                     0x00020000U
#define SHUB_PORT0_I2C_IDR_3__EXT_DATA_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00020000U) >> 17)
#define SHUB_PORT0_I2C_IDR_3__EXT_DATA_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 17) & 0x00020000U)
#define SHUB_PORT0_I2C_IDR_3__EXT_DATA_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | (((uint32_t)(src) <<\
                    17) & 0x00020000U)
#define SHUB_PORT0_I2C_IDR_3__EXT_DATA_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 17) & ~0x00020000U)))
#define SHUB_PORT0_I2C_IDR_3__EXT_DATA_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(1) << 17)
#define SHUB_PORT0_I2C_IDR_3__EXT_DATA_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(0) << 17)
#define SHUB_PORT0_I2C_IDR_3__EXT_DATA_PU__RESET_VALUE              0x00000000U
/** @} */

/* macros for field ext_clk_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_clk_pu_field ext_clk_pu_field
 * @brief macros for field ext_clk_pu
 * @details sck pin pullup enable
 * @{
 */
#define SHUB_PORT0_I2C_IDR_3__EXT_CLK_PU__SHIFT                              18
#define SHUB_PORT0_I2C_IDR_3__EXT_CLK_PU__WIDTH                               1
#define SHUB_PORT0_I2C_IDR_3__EXT_CLK_PU__MASK                      0x00040000U
#define SHUB_PORT0_I2C_IDR_3__EXT_CLK_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00040000U) >> 18)
#define SHUB_PORT0_I2C_IDR_3__EXT_CLK_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 18) & 0x00040000U)
#define SHUB_PORT0_I2C_IDR_3__EXT_CLK_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | (((uint32_t)(src) <<\
                    18) & 0x00040000U)
#define SHUB_PORT0_I2C_IDR_3__EXT_CLK_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 18) & ~0x00040000U)))
#define SHUB_PORT0_I2C_IDR_3__EXT_CLK_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(1) << 18)
#define SHUB_PORT0_I2C_IDR_3__EXT_CLK_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(0) << 18)
#define SHUB_PORT0_I2C_IDR_3__EXT_CLK_PU__RESET_VALUE               0x00000000U
/** @} */

/* macros for field ext_head */
/**
 * @defgroup at_apb_shub_regs_core_ext_head_field ext_head_field
 * @brief macros for field ext_head
 * @details Before data transmission starts, what should head be?  0 = start  1 = stall
 * @{
 */
#define SHUB_PORT0_I2C_IDR_3__EXT_HEAD__SHIFT                                19
#define SHUB_PORT0_I2C_IDR_3__EXT_HEAD__WIDTH                                 2
#define SHUB_PORT0_I2C_IDR_3__EXT_HEAD__MASK                        0x00180000U
#define SHUB_PORT0_I2C_IDR_3__EXT_HEAD__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00180000U) >> 19)
#define SHUB_PORT0_I2C_IDR_3__EXT_HEAD__WRITE(src) \
                    (((uint32_t)(src)\
                    << 19) & 0x00180000U)
#define SHUB_PORT0_I2C_IDR_3__EXT_HEAD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00180000U) | (((uint32_t)(src) <<\
                    19) & 0x00180000U)
#define SHUB_PORT0_I2C_IDR_3__EXT_HEAD__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 19) & ~0x00180000U)))
#define SHUB_PORT0_I2C_IDR_3__EXT_HEAD__RESET_VALUE                 0x00000000U
/** @} */

/* macros for field ext_tail */
/**
 * @defgroup at_apb_shub_regs_core_ext_tail_field ext_tail_field
 * @brief macros for field ext_tail
 * @details At end of 8 bits plus ack/nack, what should tail be?  0 = stop  1 = stall  2 = restart
 * @{
 */
#define SHUB_PORT0_I2C_IDR_3__EXT_TAIL__SHIFT                                21
#define SHUB_PORT0_I2C_IDR_3__EXT_TAIL__WIDTH                                 2
#define SHUB_PORT0_I2C_IDR_3__EXT_TAIL__MASK                        0x00600000U
#define SHUB_PORT0_I2C_IDR_3__EXT_TAIL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00600000U) >> 21)
#define SHUB_PORT0_I2C_IDR_3__EXT_TAIL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 21) & 0x00600000U)
#define SHUB_PORT0_I2C_IDR_3__EXT_TAIL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00600000U) | (((uint32_t)(src) <<\
                    21) & 0x00600000U)
#define SHUB_PORT0_I2C_IDR_3__EXT_TAIL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 21) & ~0x00600000U)))
#define SHUB_PORT0_I2C_IDR_3__EXT_TAIL__RESET_VALUE                 0x00000000U
/** @} */

/* macros for field ext_master_drives_ack */
/**
 * @defgroup at_apb_shub_regs_core_ext_master_drives_ack_field ext_master_drives_ack_field
 * @brief macros for field ext_master_drives_ack
 * @details Specifies that master is to drive ack.
 * @{
 */
#define SHUB_PORT0_I2C_IDR_3__EXT_MASTER_DRIVES_ACK__SHIFT                   23
#define SHUB_PORT0_I2C_IDR_3__EXT_MASTER_DRIVES_ACK__WIDTH                    1
#define SHUB_PORT0_I2C_IDR_3__EXT_MASTER_DRIVES_ACK__MASK           0x00800000U
#define SHUB_PORT0_I2C_IDR_3__EXT_MASTER_DRIVES_ACK__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00800000U) >> 23)
#define SHUB_PORT0_I2C_IDR_3__EXT_MASTER_DRIVES_ACK__WRITE(src) \
                    (((uint32_t)(src)\
                    << 23) & 0x00800000U)
#define SHUB_PORT0_I2C_IDR_3__EXT_MASTER_DRIVES_ACK__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | (((uint32_t)(src) <<\
                    23) & 0x00800000U)
#define SHUB_PORT0_I2C_IDR_3__EXT_MASTER_DRIVES_ACK__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 23) & ~0x00800000U)))
#define SHUB_PORT0_I2C_IDR_3__EXT_MASTER_DRIVES_ACK__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(1) << 23)
#define SHUB_PORT0_I2C_IDR_3__EXT_MASTER_DRIVES_ACK__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(0) << 23)
#define SHUB_PORT0_I2C_IDR_3__EXT_MASTER_DRIVES_ACK__RESET_VALUE    0x00000000U
/** @} */

/* macros for field ext_ack_value_to_drive */
/**
 * @defgroup at_apb_shub_regs_core_ext_ack_value_to_drive_field ext_ack_value_to_drive_field
 * @brief macros for field ext_ack_value_to_drive
 * @details If ack is to be driven by master, what value to drive?
 * @{
 */
#define SHUB_PORT0_I2C_IDR_3__EXT_ACK_VALUE_TO_DRIVE__SHIFT                  24
#define SHUB_PORT0_I2C_IDR_3__EXT_ACK_VALUE_TO_DRIVE__WIDTH                   1
#define SHUB_PORT0_I2C_IDR_3__EXT_ACK_VALUE_TO_DRIVE__MASK          0x01000000U
#define SHUB_PORT0_I2C_IDR_3__EXT_ACK_VALUE_TO_DRIVE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x01000000U) >> 24)
#define SHUB_PORT0_I2C_IDR_3__EXT_ACK_VALUE_TO_DRIVE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0x01000000U)
#define SHUB_PORT0_I2C_IDR_3__EXT_ACK_VALUE_TO_DRIVE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | (((uint32_t)(src) <<\
                    24) & 0x01000000U)
#define SHUB_PORT0_I2C_IDR_3__EXT_ACK_VALUE_TO_DRIVE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x01000000U)))
#define SHUB_PORT0_I2C_IDR_3__EXT_ACK_VALUE_TO_DRIVE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(1) << 24)
#define SHUB_PORT0_I2C_IDR_3__EXT_ACK_VALUE_TO_DRIVE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(0) << 24)
#define SHUB_PORT0_I2C_IDR_3__EXT_ACK_VALUE_TO_DRIVE__RESET_VALUE   0x00000000U
/** @} */
#define SHUB_PORT0_I2C_IDR_3__TYPE                                     uint32_t
#define SHUB_PORT0_I2C_IDR_3__READ                                  0x01ffffffU
#define SHUB_PORT0_I2C_IDR_3__WRITE                                 0x01ffffffU
#define SHUB_PORT0_I2C_IDR_3__PRESERVED                             0x01ffffffU
#define SHUB_PORT0_I2C_IDR_3__RESET_VALUE                           0x0001fe00U

#endif /* __SHUB_PORT0_I2C_IDR_3_MACRO__ */

/** @} end of port0_i2c_idr_3 */

/* macros for BlueprintGlobalNameSpace::SHUB_port0_i2c_idr_4 */
/**
 * @defgroup at_apb_shub_regs_core_port0_i2c_idr_4 port0_i2c_idr_4
 * @brief id(read) of sensor4 on port0 prior to data read definitions.
 * @{
 */
#ifndef __SHUB_PORT0_I2C_IDR_4_MACRO__
#define __SHUB_PORT0_I2C_IDR_4_MACRO__

/* macros for field ext_data_ie_ovrd */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_ie_ovrd_field ext_data_ie_ovrd_field
 * @brief macros for field ext_data_ie_ovrd
 * @details 1 = ie is high  0 = ie is ~oe
 * @{
 */
#define SHUB_PORT0_I2C_IDR_4__EXT_DATA_IE_OVRD__SHIFT                         0
#define SHUB_PORT0_I2C_IDR_4__EXT_DATA_IE_OVRD__WIDTH                         1
#define SHUB_PORT0_I2C_IDR_4__EXT_DATA_IE_OVRD__MASK                0x00000001U
#define SHUB_PORT0_I2C_IDR_4__EXT_DATA_IE_OVRD__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT0_I2C_IDR_4__EXT_DATA_IE_OVRD__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT0_I2C_IDR_4__EXT_DATA_IE_OVRD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define SHUB_PORT0_I2C_IDR_4__EXT_DATA_IE_OVRD__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define SHUB_PORT0_I2C_IDR_4__EXT_DATA_IE_OVRD__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define SHUB_PORT0_I2C_IDR_4__EXT_DATA_IE_OVRD__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define SHUB_PORT0_I2C_IDR_4__EXT_DATA_IE_OVRD__RESET_VALUE         0x00000000U
/** @} */

/* macros for field ext_data_o */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_o_field ext_data_o_field
 * @brief macros for field ext_data_o
 * @details outbound data; can be device id, address within device, or write data; if it's device id, the LSB is the R/Wb indicator
 * @{
 */
#define SHUB_PORT0_I2C_IDR_4__EXT_DATA_O__SHIFT                               1
#define SHUB_PORT0_I2C_IDR_4__EXT_DATA_O__WIDTH                               8
#define SHUB_PORT0_I2C_IDR_4__EXT_DATA_O__MASK                      0x000001feU
#define SHUB_PORT0_I2C_IDR_4__EXT_DATA_O__READ(src) \
                    (((uint32_t)(src)\
                    & 0x000001feU) >> 1)
#define SHUB_PORT0_I2C_IDR_4__EXT_DATA_O__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x000001feU)
#define SHUB_PORT0_I2C_IDR_4__EXT_DATA_O__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000001feU) | (((uint32_t)(src) <<\
                    1) & 0x000001feU)
#define SHUB_PORT0_I2C_IDR_4__EXT_DATA_O__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x000001feU)))
#define SHUB_PORT0_I2C_IDR_4__EXT_DATA_O__RESET_VALUE               0x00000000U
/** @} */

/* macros for field ext_data_oe */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_oe_field ext_data_oe_field
 * @brief macros for field ext_data_oe
 * @details sda output enable per bit
 * @{
 */
#define SHUB_PORT0_I2C_IDR_4__EXT_DATA_OE__SHIFT                              9
#define SHUB_PORT0_I2C_IDR_4__EXT_DATA_OE__WIDTH                              8
#define SHUB_PORT0_I2C_IDR_4__EXT_DATA_OE__MASK                     0x0001fe00U
#define SHUB_PORT0_I2C_IDR_4__EXT_DATA_OE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0001fe00U) >> 9)
#define SHUB_PORT0_I2C_IDR_4__EXT_DATA_OE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 9) & 0x0001fe00U)
#define SHUB_PORT0_I2C_IDR_4__EXT_DATA_OE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0001fe00U) | (((uint32_t)(src) <<\
                    9) & 0x0001fe00U)
#define SHUB_PORT0_I2C_IDR_4__EXT_DATA_OE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 9) & ~0x0001fe00U)))
#define SHUB_PORT0_I2C_IDR_4__EXT_DATA_OE__RESET_VALUE              0x000000ffU
/** @} */

/* macros for field ext_data_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_pu_field ext_data_pu_field
 * @brief macros for field ext_data_pu
 * @details sda pin pullup enable
 * @{
 */
#define SHUB_PORT0_I2C_IDR_4__EXT_DATA_PU__SHIFT                             17
#define SHUB_PORT0_I2C_IDR_4__EXT_DATA_PU__WIDTH                              1
#define SHUB_PORT0_I2C_IDR_4__EXT_DATA_PU__MASK                     0x00020000U
#define SHUB_PORT0_I2C_IDR_4__EXT_DATA_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00020000U) >> 17)
#define SHUB_PORT0_I2C_IDR_4__EXT_DATA_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 17) & 0x00020000U)
#define SHUB_PORT0_I2C_IDR_4__EXT_DATA_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | (((uint32_t)(src) <<\
                    17) & 0x00020000U)
#define SHUB_PORT0_I2C_IDR_4__EXT_DATA_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 17) & ~0x00020000U)))
#define SHUB_PORT0_I2C_IDR_4__EXT_DATA_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(1) << 17)
#define SHUB_PORT0_I2C_IDR_4__EXT_DATA_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(0) << 17)
#define SHUB_PORT0_I2C_IDR_4__EXT_DATA_PU__RESET_VALUE              0x00000000U
/** @} */

/* macros for field ext_clk_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_clk_pu_field ext_clk_pu_field
 * @brief macros for field ext_clk_pu
 * @details sck pin pullup enable
 * @{
 */
#define SHUB_PORT0_I2C_IDR_4__EXT_CLK_PU__SHIFT                              18
#define SHUB_PORT0_I2C_IDR_4__EXT_CLK_PU__WIDTH                               1
#define SHUB_PORT0_I2C_IDR_4__EXT_CLK_PU__MASK                      0x00040000U
#define SHUB_PORT0_I2C_IDR_4__EXT_CLK_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00040000U) >> 18)
#define SHUB_PORT0_I2C_IDR_4__EXT_CLK_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 18) & 0x00040000U)
#define SHUB_PORT0_I2C_IDR_4__EXT_CLK_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | (((uint32_t)(src) <<\
                    18) & 0x00040000U)
#define SHUB_PORT0_I2C_IDR_4__EXT_CLK_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 18) & ~0x00040000U)))
#define SHUB_PORT0_I2C_IDR_4__EXT_CLK_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(1) << 18)
#define SHUB_PORT0_I2C_IDR_4__EXT_CLK_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(0) << 18)
#define SHUB_PORT0_I2C_IDR_4__EXT_CLK_PU__RESET_VALUE               0x00000000U
/** @} */

/* macros for field ext_head */
/**
 * @defgroup at_apb_shub_regs_core_ext_head_field ext_head_field
 * @brief macros for field ext_head
 * @details Before data transmission starts, what should head be?  0 = start  1 = stall
 * @{
 */
#define SHUB_PORT0_I2C_IDR_4__EXT_HEAD__SHIFT                                19
#define SHUB_PORT0_I2C_IDR_4__EXT_HEAD__WIDTH                                 2
#define SHUB_PORT0_I2C_IDR_4__EXT_HEAD__MASK                        0x00180000U
#define SHUB_PORT0_I2C_IDR_4__EXT_HEAD__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00180000U) >> 19)
#define SHUB_PORT0_I2C_IDR_4__EXT_HEAD__WRITE(src) \
                    (((uint32_t)(src)\
                    << 19) & 0x00180000U)
#define SHUB_PORT0_I2C_IDR_4__EXT_HEAD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00180000U) | (((uint32_t)(src) <<\
                    19) & 0x00180000U)
#define SHUB_PORT0_I2C_IDR_4__EXT_HEAD__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 19) & ~0x00180000U)))
#define SHUB_PORT0_I2C_IDR_4__EXT_HEAD__RESET_VALUE                 0x00000000U
/** @} */

/* macros for field ext_tail */
/**
 * @defgroup at_apb_shub_regs_core_ext_tail_field ext_tail_field
 * @brief macros for field ext_tail
 * @details At end of 8 bits plus ack/nack, what should tail be?  0 = stop  1 = stall  2 = restart
 * @{
 */
#define SHUB_PORT0_I2C_IDR_4__EXT_TAIL__SHIFT                                21
#define SHUB_PORT0_I2C_IDR_4__EXT_TAIL__WIDTH                                 2
#define SHUB_PORT0_I2C_IDR_4__EXT_TAIL__MASK                        0x00600000U
#define SHUB_PORT0_I2C_IDR_4__EXT_TAIL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00600000U) >> 21)
#define SHUB_PORT0_I2C_IDR_4__EXT_TAIL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 21) & 0x00600000U)
#define SHUB_PORT0_I2C_IDR_4__EXT_TAIL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00600000U) | (((uint32_t)(src) <<\
                    21) & 0x00600000U)
#define SHUB_PORT0_I2C_IDR_4__EXT_TAIL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 21) & ~0x00600000U)))
#define SHUB_PORT0_I2C_IDR_4__EXT_TAIL__RESET_VALUE                 0x00000000U
/** @} */

/* macros for field ext_master_drives_ack */
/**
 * @defgroup at_apb_shub_regs_core_ext_master_drives_ack_field ext_master_drives_ack_field
 * @brief macros for field ext_master_drives_ack
 * @details Specifies that master is to drive ack.
 * @{
 */
#define SHUB_PORT0_I2C_IDR_4__EXT_MASTER_DRIVES_ACK__SHIFT                   23
#define SHUB_PORT0_I2C_IDR_4__EXT_MASTER_DRIVES_ACK__WIDTH                    1
#define SHUB_PORT0_I2C_IDR_4__EXT_MASTER_DRIVES_ACK__MASK           0x00800000U
#define SHUB_PORT0_I2C_IDR_4__EXT_MASTER_DRIVES_ACK__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00800000U) >> 23)
#define SHUB_PORT0_I2C_IDR_4__EXT_MASTER_DRIVES_ACK__WRITE(src) \
                    (((uint32_t)(src)\
                    << 23) & 0x00800000U)
#define SHUB_PORT0_I2C_IDR_4__EXT_MASTER_DRIVES_ACK__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | (((uint32_t)(src) <<\
                    23) & 0x00800000U)
#define SHUB_PORT0_I2C_IDR_4__EXT_MASTER_DRIVES_ACK__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 23) & ~0x00800000U)))
#define SHUB_PORT0_I2C_IDR_4__EXT_MASTER_DRIVES_ACK__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(1) << 23)
#define SHUB_PORT0_I2C_IDR_4__EXT_MASTER_DRIVES_ACK__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(0) << 23)
#define SHUB_PORT0_I2C_IDR_4__EXT_MASTER_DRIVES_ACK__RESET_VALUE    0x00000000U
/** @} */

/* macros for field ext_ack_value_to_drive */
/**
 * @defgroup at_apb_shub_regs_core_ext_ack_value_to_drive_field ext_ack_value_to_drive_field
 * @brief macros for field ext_ack_value_to_drive
 * @details If ack is to be driven by master, what value to drive?
 * @{
 */
#define SHUB_PORT0_I2C_IDR_4__EXT_ACK_VALUE_TO_DRIVE__SHIFT                  24
#define SHUB_PORT0_I2C_IDR_4__EXT_ACK_VALUE_TO_DRIVE__WIDTH                   1
#define SHUB_PORT0_I2C_IDR_4__EXT_ACK_VALUE_TO_DRIVE__MASK          0x01000000U
#define SHUB_PORT0_I2C_IDR_4__EXT_ACK_VALUE_TO_DRIVE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x01000000U) >> 24)
#define SHUB_PORT0_I2C_IDR_4__EXT_ACK_VALUE_TO_DRIVE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0x01000000U)
#define SHUB_PORT0_I2C_IDR_4__EXT_ACK_VALUE_TO_DRIVE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | (((uint32_t)(src) <<\
                    24) & 0x01000000U)
#define SHUB_PORT0_I2C_IDR_4__EXT_ACK_VALUE_TO_DRIVE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x01000000U)))
#define SHUB_PORT0_I2C_IDR_4__EXT_ACK_VALUE_TO_DRIVE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(1) << 24)
#define SHUB_PORT0_I2C_IDR_4__EXT_ACK_VALUE_TO_DRIVE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(0) << 24)
#define SHUB_PORT0_I2C_IDR_4__EXT_ACK_VALUE_TO_DRIVE__RESET_VALUE   0x00000000U
/** @} */
#define SHUB_PORT0_I2C_IDR_4__TYPE                                     uint32_t
#define SHUB_PORT0_I2C_IDR_4__READ                                  0x01ffffffU
#define SHUB_PORT0_I2C_IDR_4__WRITE                                 0x01ffffffU
#define SHUB_PORT0_I2C_IDR_4__PRESERVED                             0x01ffffffU
#define SHUB_PORT0_I2C_IDR_4__RESET_VALUE                           0x0001fe00U

#endif /* __SHUB_PORT0_I2C_IDR_4_MACRO__ */

/** @} end of port0_i2c_idr_4 */

/* macros for BlueprintGlobalNameSpace::SHUB_port0_i2c_idr_5 */
/**
 * @defgroup at_apb_shub_regs_core_port0_i2c_idr_5 port0_i2c_idr_5
 * @brief id(read) of sensor5 on port0 prior to data read definitions.
 * @{
 */
#ifndef __SHUB_PORT0_I2C_IDR_5_MACRO__
#define __SHUB_PORT0_I2C_IDR_5_MACRO__

/* macros for field ext_data_ie_ovrd */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_ie_ovrd_field ext_data_ie_ovrd_field
 * @brief macros for field ext_data_ie_ovrd
 * @details 1 = ie is high  0 = ie is ~oe
 * @{
 */
#define SHUB_PORT0_I2C_IDR_5__EXT_DATA_IE_OVRD__SHIFT                         0
#define SHUB_PORT0_I2C_IDR_5__EXT_DATA_IE_OVRD__WIDTH                         1
#define SHUB_PORT0_I2C_IDR_5__EXT_DATA_IE_OVRD__MASK                0x00000001U
#define SHUB_PORT0_I2C_IDR_5__EXT_DATA_IE_OVRD__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT0_I2C_IDR_5__EXT_DATA_IE_OVRD__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT0_I2C_IDR_5__EXT_DATA_IE_OVRD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define SHUB_PORT0_I2C_IDR_5__EXT_DATA_IE_OVRD__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define SHUB_PORT0_I2C_IDR_5__EXT_DATA_IE_OVRD__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define SHUB_PORT0_I2C_IDR_5__EXT_DATA_IE_OVRD__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define SHUB_PORT0_I2C_IDR_5__EXT_DATA_IE_OVRD__RESET_VALUE         0x00000000U
/** @} */

/* macros for field ext_data_o */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_o_field ext_data_o_field
 * @brief macros for field ext_data_o
 * @details outbound data; can be device id, address within device, or write data; if it's device id, the LSB is the R/Wb indicator
 * @{
 */
#define SHUB_PORT0_I2C_IDR_5__EXT_DATA_O__SHIFT                               1
#define SHUB_PORT0_I2C_IDR_5__EXT_DATA_O__WIDTH                               8
#define SHUB_PORT0_I2C_IDR_5__EXT_DATA_O__MASK                      0x000001feU
#define SHUB_PORT0_I2C_IDR_5__EXT_DATA_O__READ(src) \
                    (((uint32_t)(src)\
                    & 0x000001feU) >> 1)
#define SHUB_PORT0_I2C_IDR_5__EXT_DATA_O__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x000001feU)
#define SHUB_PORT0_I2C_IDR_5__EXT_DATA_O__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000001feU) | (((uint32_t)(src) <<\
                    1) & 0x000001feU)
#define SHUB_PORT0_I2C_IDR_5__EXT_DATA_O__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x000001feU)))
#define SHUB_PORT0_I2C_IDR_5__EXT_DATA_O__RESET_VALUE               0x00000000U
/** @} */

/* macros for field ext_data_oe */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_oe_field ext_data_oe_field
 * @brief macros for field ext_data_oe
 * @details sda output enable per bit
 * @{
 */
#define SHUB_PORT0_I2C_IDR_5__EXT_DATA_OE__SHIFT                              9
#define SHUB_PORT0_I2C_IDR_5__EXT_DATA_OE__WIDTH                              8
#define SHUB_PORT0_I2C_IDR_5__EXT_DATA_OE__MASK                     0x0001fe00U
#define SHUB_PORT0_I2C_IDR_5__EXT_DATA_OE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0001fe00U) >> 9)
#define SHUB_PORT0_I2C_IDR_5__EXT_DATA_OE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 9) & 0x0001fe00U)
#define SHUB_PORT0_I2C_IDR_5__EXT_DATA_OE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0001fe00U) | (((uint32_t)(src) <<\
                    9) & 0x0001fe00U)
#define SHUB_PORT0_I2C_IDR_5__EXT_DATA_OE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 9) & ~0x0001fe00U)))
#define SHUB_PORT0_I2C_IDR_5__EXT_DATA_OE__RESET_VALUE              0x000000ffU
/** @} */

/* macros for field ext_data_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_pu_field ext_data_pu_field
 * @brief macros for field ext_data_pu
 * @details sda pin pullup enable
 * @{
 */
#define SHUB_PORT0_I2C_IDR_5__EXT_DATA_PU__SHIFT                             17
#define SHUB_PORT0_I2C_IDR_5__EXT_DATA_PU__WIDTH                              1
#define SHUB_PORT0_I2C_IDR_5__EXT_DATA_PU__MASK                     0x00020000U
#define SHUB_PORT0_I2C_IDR_5__EXT_DATA_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00020000U) >> 17)
#define SHUB_PORT0_I2C_IDR_5__EXT_DATA_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 17) & 0x00020000U)
#define SHUB_PORT0_I2C_IDR_5__EXT_DATA_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | (((uint32_t)(src) <<\
                    17) & 0x00020000U)
#define SHUB_PORT0_I2C_IDR_5__EXT_DATA_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 17) & ~0x00020000U)))
#define SHUB_PORT0_I2C_IDR_5__EXT_DATA_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(1) << 17)
#define SHUB_PORT0_I2C_IDR_5__EXT_DATA_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(0) << 17)
#define SHUB_PORT0_I2C_IDR_5__EXT_DATA_PU__RESET_VALUE              0x00000000U
/** @} */

/* macros for field ext_clk_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_clk_pu_field ext_clk_pu_field
 * @brief macros for field ext_clk_pu
 * @details sck pin pullup enable
 * @{
 */
#define SHUB_PORT0_I2C_IDR_5__EXT_CLK_PU__SHIFT                              18
#define SHUB_PORT0_I2C_IDR_5__EXT_CLK_PU__WIDTH                               1
#define SHUB_PORT0_I2C_IDR_5__EXT_CLK_PU__MASK                      0x00040000U
#define SHUB_PORT0_I2C_IDR_5__EXT_CLK_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00040000U) >> 18)
#define SHUB_PORT0_I2C_IDR_5__EXT_CLK_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 18) & 0x00040000U)
#define SHUB_PORT0_I2C_IDR_5__EXT_CLK_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | (((uint32_t)(src) <<\
                    18) & 0x00040000U)
#define SHUB_PORT0_I2C_IDR_5__EXT_CLK_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 18) & ~0x00040000U)))
#define SHUB_PORT0_I2C_IDR_5__EXT_CLK_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(1) << 18)
#define SHUB_PORT0_I2C_IDR_5__EXT_CLK_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(0) << 18)
#define SHUB_PORT0_I2C_IDR_5__EXT_CLK_PU__RESET_VALUE               0x00000000U
/** @} */

/* macros for field ext_head */
/**
 * @defgroup at_apb_shub_regs_core_ext_head_field ext_head_field
 * @brief macros for field ext_head
 * @details Before data transmission starts, what should head be?  0 = start  1 = stall
 * @{
 */
#define SHUB_PORT0_I2C_IDR_5__EXT_HEAD__SHIFT                                19
#define SHUB_PORT0_I2C_IDR_5__EXT_HEAD__WIDTH                                 2
#define SHUB_PORT0_I2C_IDR_5__EXT_HEAD__MASK                        0x00180000U
#define SHUB_PORT0_I2C_IDR_5__EXT_HEAD__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00180000U) >> 19)
#define SHUB_PORT0_I2C_IDR_5__EXT_HEAD__WRITE(src) \
                    (((uint32_t)(src)\
                    << 19) & 0x00180000U)
#define SHUB_PORT0_I2C_IDR_5__EXT_HEAD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00180000U) | (((uint32_t)(src) <<\
                    19) & 0x00180000U)
#define SHUB_PORT0_I2C_IDR_5__EXT_HEAD__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 19) & ~0x00180000U)))
#define SHUB_PORT0_I2C_IDR_5__EXT_HEAD__RESET_VALUE                 0x00000000U
/** @} */

/* macros for field ext_tail */
/**
 * @defgroup at_apb_shub_regs_core_ext_tail_field ext_tail_field
 * @brief macros for field ext_tail
 * @details At end of 8 bits plus ack/nack, what should tail be?  0 = stop  1 = stall  2 = restart
 * @{
 */
#define SHUB_PORT0_I2C_IDR_5__EXT_TAIL__SHIFT                                21
#define SHUB_PORT0_I2C_IDR_5__EXT_TAIL__WIDTH                                 2
#define SHUB_PORT0_I2C_IDR_5__EXT_TAIL__MASK                        0x00600000U
#define SHUB_PORT0_I2C_IDR_5__EXT_TAIL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00600000U) >> 21)
#define SHUB_PORT0_I2C_IDR_5__EXT_TAIL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 21) & 0x00600000U)
#define SHUB_PORT0_I2C_IDR_5__EXT_TAIL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00600000U) | (((uint32_t)(src) <<\
                    21) & 0x00600000U)
#define SHUB_PORT0_I2C_IDR_5__EXT_TAIL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 21) & ~0x00600000U)))
#define SHUB_PORT0_I2C_IDR_5__EXT_TAIL__RESET_VALUE                 0x00000000U
/** @} */

/* macros for field ext_master_drives_ack */
/**
 * @defgroup at_apb_shub_regs_core_ext_master_drives_ack_field ext_master_drives_ack_field
 * @brief macros for field ext_master_drives_ack
 * @details Specifies that master is to drive ack.
 * @{
 */
#define SHUB_PORT0_I2C_IDR_5__EXT_MASTER_DRIVES_ACK__SHIFT                   23
#define SHUB_PORT0_I2C_IDR_5__EXT_MASTER_DRIVES_ACK__WIDTH                    1
#define SHUB_PORT0_I2C_IDR_5__EXT_MASTER_DRIVES_ACK__MASK           0x00800000U
#define SHUB_PORT0_I2C_IDR_5__EXT_MASTER_DRIVES_ACK__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00800000U) >> 23)
#define SHUB_PORT0_I2C_IDR_5__EXT_MASTER_DRIVES_ACK__WRITE(src) \
                    (((uint32_t)(src)\
                    << 23) & 0x00800000U)
#define SHUB_PORT0_I2C_IDR_5__EXT_MASTER_DRIVES_ACK__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | (((uint32_t)(src) <<\
                    23) & 0x00800000U)
#define SHUB_PORT0_I2C_IDR_5__EXT_MASTER_DRIVES_ACK__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 23) & ~0x00800000U)))
#define SHUB_PORT0_I2C_IDR_5__EXT_MASTER_DRIVES_ACK__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(1) << 23)
#define SHUB_PORT0_I2C_IDR_5__EXT_MASTER_DRIVES_ACK__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(0) << 23)
#define SHUB_PORT0_I2C_IDR_5__EXT_MASTER_DRIVES_ACK__RESET_VALUE    0x00000000U
/** @} */

/* macros for field ext_ack_value_to_drive */
/**
 * @defgroup at_apb_shub_regs_core_ext_ack_value_to_drive_field ext_ack_value_to_drive_field
 * @brief macros for field ext_ack_value_to_drive
 * @details If ack is to be driven by master, what value to drive?
 * @{
 */
#define SHUB_PORT0_I2C_IDR_5__EXT_ACK_VALUE_TO_DRIVE__SHIFT                  24
#define SHUB_PORT0_I2C_IDR_5__EXT_ACK_VALUE_TO_DRIVE__WIDTH                   1
#define SHUB_PORT0_I2C_IDR_5__EXT_ACK_VALUE_TO_DRIVE__MASK          0x01000000U
#define SHUB_PORT0_I2C_IDR_5__EXT_ACK_VALUE_TO_DRIVE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x01000000U) >> 24)
#define SHUB_PORT0_I2C_IDR_5__EXT_ACK_VALUE_TO_DRIVE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0x01000000U)
#define SHUB_PORT0_I2C_IDR_5__EXT_ACK_VALUE_TO_DRIVE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | (((uint32_t)(src) <<\
                    24) & 0x01000000U)
#define SHUB_PORT0_I2C_IDR_5__EXT_ACK_VALUE_TO_DRIVE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x01000000U)))
#define SHUB_PORT0_I2C_IDR_5__EXT_ACK_VALUE_TO_DRIVE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(1) << 24)
#define SHUB_PORT0_I2C_IDR_5__EXT_ACK_VALUE_TO_DRIVE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(0) << 24)
#define SHUB_PORT0_I2C_IDR_5__EXT_ACK_VALUE_TO_DRIVE__RESET_VALUE   0x00000000U
/** @} */
#define SHUB_PORT0_I2C_IDR_5__TYPE                                     uint32_t
#define SHUB_PORT0_I2C_IDR_5__READ                                  0x01ffffffU
#define SHUB_PORT0_I2C_IDR_5__WRITE                                 0x01ffffffU
#define SHUB_PORT0_I2C_IDR_5__PRESERVED                             0x01ffffffU
#define SHUB_PORT0_I2C_IDR_5__RESET_VALUE                           0x0001fe00U

#endif /* __SHUB_PORT0_I2C_IDR_5_MACRO__ */

/** @} end of port0_i2c_idr_5 */

/* macros for BlueprintGlobalNameSpace::SHUB_port0_i2c_idr_6 */
/**
 * @defgroup at_apb_shub_regs_core_port0_i2c_idr_6 port0_i2c_idr_6
 * @brief id(read) of sensor6 on port0 prior to data read definitions.
 * @{
 */
#ifndef __SHUB_PORT0_I2C_IDR_6_MACRO__
#define __SHUB_PORT0_I2C_IDR_6_MACRO__

/* macros for field ext_data_ie_ovrd */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_ie_ovrd_field ext_data_ie_ovrd_field
 * @brief macros for field ext_data_ie_ovrd
 * @details 1 = ie is high  0 = ie is ~oe
 * @{
 */
#define SHUB_PORT0_I2C_IDR_6__EXT_DATA_IE_OVRD__SHIFT                         0
#define SHUB_PORT0_I2C_IDR_6__EXT_DATA_IE_OVRD__WIDTH                         1
#define SHUB_PORT0_I2C_IDR_6__EXT_DATA_IE_OVRD__MASK                0x00000001U
#define SHUB_PORT0_I2C_IDR_6__EXT_DATA_IE_OVRD__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT0_I2C_IDR_6__EXT_DATA_IE_OVRD__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT0_I2C_IDR_6__EXT_DATA_IE_OVRD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define SHUB_PORT0_I2C_IDR_6__EXT_DATA_IE_OVRD__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define SHUB_PORT0_I2C_IDR_6__EXT_DATA_IE_OVRD__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define SHUB_PORT0_I2C_IDR_6__EXT_DATA_IE_OVRD__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define SHUB_PORT0_I2C_IDR_6__EXT_DATA_IE_OVRD__RESET_VALUE         0x00000000U
/** @} */

/* macros for field ext_data_o */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_o_field ext_data_o_field
 * @brief macros for field ext_data_o
 * @details outbound data; can be device id, address within device, or write data; if it's device id, the LSB is the R/Wb indicator
 * @{
 */
#define SHUB_PORT0_I2C_IDR_6__EXT_DATA_O__SHIFT                               1
#define SHUB_PORT0_I2C_IDR_6__EXT_DATA_O__WIDTH                               8
#define SHUB_PORT0_I2C_IDR_6__EXT_DATA_O__MASK                      0x000001feU
#define SHUB_PORT0_I2C_IDR_6__EXT_DATA_O__READ(src) \
                    (((uint32_t)(src)\
                    & 0x000001feU) >> 1)
#define SHUB_PORT0_I2C_IDR_6__EXT_DATA_O__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x000001feU)
#define SHUB_PORT0_I2C_IDR_6__EXT_DATA_O__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000001feU) | (((uint32_t)(src) <<\
                    1) & 0x000001feU)
#define SHUB_PORT0_I2C_IDR_6__EXT_DATA_O__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x000001feU)))
#define SHUB_PORT0_I2C_IDR_6__EXT_DATA_O__RESET_VALUE               0x00000000U
/** @} */

/* macros for field ext_data_oe */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_oe_field ext_data_oe_field
 * @brief macros for field ext_data_oe
 * @details sda output enable per bit
 * @{
 */
#define SHUB_PORT0_I2C_IDR_6__EXT_DATA_OE__SHIFT                              9
#define SHUB_PORT0_I2C_IDR_6__EXT_DATA_OE__WIDTH                              8
#define SHUB_PORT0_I2C_IDR_6__EXT_DATA_OE__MASK                     0x0001fe00U
#define SHUB_PORT0_I2C_IDR_6__EXT_DATA_OE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0001fe00U) >> 9)
#define SHUB_PORT0_I2C_IDR_6__EXT_DATA_OE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 9) & 0x0001fe00U)
#define SHUB_PORT0_I2C_IDR_6__EXT_DATA_OE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0001fe00U) | (((uint32_t)(src) <<\
                    9) & 0x0001fe00U)
#define SHUB_PORT0_I2C_IDR_6__EXT_DATA_OE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 9) & ~0x0001fe00U)))
#define SHUB_PORT0_I2C_IDR_6__EXT_DATA_OE__RESET_VALUE              0x000000ffU
/** @} */

/* macros for field ext_data_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_pu_field ext_data_pu_field
 * @brief macros for field ext_data_pu
 * @details sda pin pullup enable
 * @{
 */
#define SHUB_PORT0_I2C_IDR_6__EXT_DATA_PU__SHIFT                             17
#define SHUB_PORT0_I2C_IDR_6__EXT_DATA_PU__WIDTH                              1
#define SHUB_PORT0_I2C_IDR_6__EXT_DATA_PU__MASK                     0x00020000U
#define SHUB_PORT0_I2C_IDR_6__EXT_DATA_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00020000U) >> 17)
#define SHUB_PORT0_I2C_IDR_6__EXT_DATA_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 17) & 0x00020000U)
#define SHUB_PORT0_I2C_IDR_6__EXT_DATA_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | (((uint32_t)(src) <<\
                    17) & 0x00020000U)
#define SHUB_PORT0_I2C_IDR_6__EXT_DATA_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 17) & ~0x00020000U)))
#define SHUB_PORT0_I2C_IDR_6__EXT_DATA_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(1) << 17)
#define SHUB_PORT0_I2C_IDR_6__EXT_DATA_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(0) << 17)
#define SHUB_PORT0_I2C_IDR_6__EXT_DATA_PU__RESET_VALUE              0x00000000U
/** @} */

/* macros for field ext_clk_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_clk_pu_field ext_clk_pu_field
 * @brief macros for field ext_clk_pu
 * @details sck pin pullup enable
 * @{
 */
#define SHUB_PORT0_I2C_IDR_6__EXT_CLK_PU__SHIFT                              18
#define SHUB_PORT0_I2C_IDR_6__EXT_CLK_PU__WIDTH                               1
#define SHUB_PORT0_I2C_IDR_6__EXT_CLK_PU__MASK                      0x00040000U
#define SHUB_PORT0_I2C_IDR_6__EXT_CLK_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00040000U) >> 18)
#define SHUB_PORT0_I2C_IDR_6__EXT_CLK_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 18) & 0x00040000U)
#define SHUB_PORT0_I2C_IDR_6__EXT_CLK_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | (((uint32_t)(src) <<\
                    18) & 0x00040000U)
#define SHUB_PORT0_I2C_IDR_6__EXT_CLK_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 18) & ~0x00040000U)))
#define SHUB_PORT0_I2C_IDR_6__EXT_CLK_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(1) << 18)
#define SHUB_PORT0_I2C_IDR_6__EXT_CLK_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(0) << 18)
#define SHUB_PORT0_I2C_IDR_6__EXT_CLK_PU__RESET_VALUE               0x00000000U
/** @} */

/* macros for field ext_head */
/**
 * @defgroup at_apb_shub_regs_core_ext_head_field ext_head_field
 * @brief macros for field ext_head
 * @details Before data transmission starts, what should head be?  0 = start  1 = stall
 * @{
 */
#define SHUB_PORT0_I2C_IDR_6__EXT_HEAD__SHIFT                                19
#define SHUB_PORT0_I2C_IDR_6__EXT_HEAD__WIDTH                                 2
#define SHUB_PORT0_I2C_IDR_6__EXT_HEAD__MASK                        0x00180000U
#define SHUB_PORT0_I2C_IDR_6__EXT_HEAD__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00180000U) >> 19)
#define SHUB_PORT0_I2C_IDR_6__EXT_HEAD__WRITE(src) \
                    (((uint32_t)(src)\
                    << 19) & 0x00180000U)
#define SHUB_PORT0_I2C_IDR_6__EXT_HEAD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00180000U) | (((uint32_t)(src) <<\
                    19) & 0x00180000U)
#define SHUB_PORT0_I2C_IDR_6__EXT_HEAD__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 19) & ~0x00180000U)))
#define SHUB_PORT0_I2C_IDR_6__EXT_HEAD__RESET_VALUE                 0x00000000U
/** @} */

/* macros for field ext_tail */
/**
 * @defgroup at_apb_shub_regs_core_ext_tail_field ext_tail_field
 * @brief macros for field ext_tail
 * @details At end of 8 bits plus ack/nack, what should tail be?  0 = stop  1 = stall  2 = restart
 * @{
 */
#define SHUB_PORT0_I2C_IDR_6__EXT_TAIL__SHIFT                                21
#define SHUB_PORT0_I2C_IDR_6__EXT_TAIL__WIDTH                                 2
#define SHUB_PORT0_I2C_IDR_6__EXT_TAIL__MASK                        0x00600000U
#define SHUB_PORT0_I2C_IDR_6__EXT_TAIL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00600000U) >> 21)
#define SHUB_PORT0_I2C_IDR_6__EXT_TAIL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 21) & 0x00600000U)
#define SHUB_PORT0_I2C_IDR_6__EXT_TAIL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00600000U) | (((uint32_t)(src) <<\
                    21) & 0x00600000U)
#define SHUB_PORT0_I2C_IDR_6__EXT_TAIL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 21) & ~0x00600000U)))
#define SHUB_PORT0_I2C_IDR_6__EXT_TAIL__RESET_VALUE                 0x00000000U
/** @} */

/* macros for field ext_master_drives_ack */
/**
 * @defgroup at_apb_shub_regs_core_ext_master_drives_ack_field ext_master_drives_ack_field
 * @brief macros for field ext_master_drives_ack
 * @details Specifies that master is to drive ack.
 * @{
 */
#define SHUB_PORT0_I2C_IDR_6__EXT_MASTER_DRIVES_ACK__SHIFT                   23
#define SHUB_PORT0_I2C_IDR_6__EXT_MASTER_DRIVES_ACK__WIDTH                    1
#define SHUB_PORT0_I2C_IDR_6__EXT_MASTER_DRIVES_ACK__MASK           0x00800000U
#define SHUB_PORT0_I2C_IDR_6__EXT_MASTER_DRIVES_ACK__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00800000U) >> 23)
#define SHUB_PORT0_I2C_IDR_6__EXT_MASTER_DRIVES_ACK__WRITE(src) \
                    (((uint32_t)(src)\
                    << 23) & 0x00800000U)
#define SHUB_PORT0_I2C_IDR_6__EXT_MASTER_DRIVES_ACK__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | (((uint32_t)(src) <<\
                    23) & 0x00800000U)
#define SHUB_PORT0_I2C_IDR_6__EXT_MASTER_DRIVES_ACK__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 23) & ~0x00800000U)))
#define SHUB_PORT0_I2C_IDR_6__EXT_MASTER_DRIVES_ACK__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(1) << 23)
#define SHUB_PORT0_I2C_IDR_6__EXT_MASTER_DRIVES_ACK__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(0) << 23)
#define SHUB_PORT0_I2C_IDR_6__EXT_MASTER_DRIVES_ACK__RESET_VALUE    0x00000000U
/** @} */

/* macros for field ext_ack_value_to_drive */
/**
 * @defgroup at_apb_shub_regs_core_ext_ack_value_to_drive_field ext_ack_value_to_drive_field
 * @brief macros for field ext_ack_value_to_drive
 * @details If ack is to be driven by master, what value to drive?
 * @{
 */
#define SHUB_PORT0_I2C_IDR_6__EXT_ACK_VALUE_TO_DRIVE__SHIFT                  24
#define SHUB_PORT0_I2C_IDR_6__EXT_ACK_VALUE_TO_DRIVE__WIDTH                   1
#define SHUB_PORT0_I2C_IDR_6__EXT_ACK_VALUE_TO_DRIVE__MASK          0x01000000U
#define SHUB_PORT0_I2C_IDR_6__EXT_ACK_VALUE_TO_DRIVE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x01000000U) >> 24)
#define SHUB_PORT0_I2C_IDR_6__EXT_ACK_VALUE_TO_DRIVE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0x01000000U)
#define SHUB_PORT0_I2C_IDR_6__EXT_ACK_VALUE_TO_DRIVE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | (((uint32_t)(src) <<\
                    24) & 0x01000000U)
#define SHUB_PORT0_I2C_IDR_6__EXT_ACK_VALUE_TO_DRIVE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x01000000U)))
#define SHUB_PORT0_I2C_IDR_6__EXT_ACK_VALUE_TO_DRIVE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(1) << 24)
#define SHUB_PORT0_I2C_IDR_6__EXT_ACK_VALUE_TO_DRIVE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(0) << 24)
#define SHUB_PORT0_I2C_IDR_6__EXT_ACK_VALUE_TO_DRIVE__RESET_VALUE   0x00000000U
/** @} */
#define SHUB_PORT0_I2C_IDR_6__TYPE                                     uint32_t
#define SHUB_PORT0_I2C_IDR_6__READ                                  0x01ffffffU
#define SHUB_PORT0_I2C_IDR_6__WRITE                                 0x01ffffffU
#define SHUB_PORT0_I2C_IDR_6__PRESERVED                             0x01ffffffU
#define SHUB_PORT0_I2C_IDR_6__RESET_VALUE                           0x0001fe00U

#endif /* __SHUB_PORT0_I2C_IDR_6_MACRO__ */

/** @} end of port0_i2c_idr_6 */

/* macros for BlueprintGlobalNameSpace::SHUB_port0_i2c_idr_7 */
/**
 * @defgroup at_apb_shub_regs_core_port0_i2c_idr_7 port0_i2c_idr_7
 * @brief id(read) of sensor7 on port0 prior to data read definitions.
 * @{
 */
#ifndef __SHUB_PORT0_I2C_IDR_7_MACRO__
#define __SHUB_PORT0_I2C_IDR_7_MACRO__

/* macros for field ext_data_ie_ovrd */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_ie_ovrd_field ext_data_ie_ovrd_field
 * @brief macros for field ext_data_ie_ovrd
 * @details 1 = ie is high  0 = ie is ~oe
 * @{
 */
#define SHUB_PORT0_I2C_IDR_7__EXT_DATA_IE_OVRD__SHIFT                         0
#define SHUB_PORT0_I2C_IDR_7__EXT_DATA_IE_OVRD__WIDTH                         1
#define SHUB_PORT0_I2C_IDR_7__EXT_DATA_IE_OVRD__MASK                0x00000001U
#define SHUB_PORT0_I2C_IDR_7__EXT_DATA_IE_OVRD__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT0_I2C_IDR_7__EXT_DATA_IE_OVRD__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT0_I2C_IDR_7__EXT_DATA_IE_OVRD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define SHUB_PORT0_I2C_IDR_7__EXT_DATA_IE_OVRD__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define SHUB_PORT0_I2C_IDR_7__EXT_DATA_IE_OVRD__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define SHUB_PORT0_I2C_IDR_7__EXT_DATA_IE_OVRD__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define SHUB_PORT0_I2C_IDR_7__EXT_DATA_IE_OVRD__RESET_VALUE         0x00000000U
/** @} */

/* macros for field ext_data_o */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_o_field ext_data_o_field
 * @brief macros for field ext_data_o
 * @details outbound data; can be device id, address within device, or write data; if it's device id, the LSB is the R/Wb indicator
 * @{
 */
#define SHUB_PORT0_I2C_IDR_7__EXT_DATA_O__SHIFT                               1
#define SHUB_PORT0_I2C_IDR_7__EXT_DATA_O__WIDTH                               8
#define SHUB_PORT0_I2C_IDR_7__EXT_DATA_O__MASK                      0x000001feU
#define SHUB_PORT0_I2C_IDR_7__EXT_DATA_O__READ(src) \
                    (((uint32_t)(src)\
                    & 0x000001feU) >> 1)
#define SHUB_PORT0_I2C_IDR_7__EXT_DATA_O__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x000001feU)
#define SHUB_PORT0_I2C_IDR_7__EXT_DATA_O__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000001feU) | (((uint32_t)(src) <<\
                    1) & 0x000001feU)
#define SHUB_PORT0_I2C_IDR_7__EXT_DATA_O__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x000001feU)))
#define SHUB_PORT0_I2C_IDR_7__EXT_DATA_O__RESET_VALUE               0x00000000U
/** @} */

/* macros for field ext_data_oe */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_oe_field ext_data_oe_field
 * @brief macros for field ext_data_oe
 * @details sda output enable per bit
 * @{
 */
#define SHUB_PORT0_I2C_IDR_7__EXT_DATA_OE__SHIFT                              9
#define SHUB_PORT0_I2C_IDR_7__EXT_DATA_OE__WIDTH                              8
#define SHUB_PORT0_I2C_IDR_7__EXT_DATA_OE__MASK                     0x0001fe00U
#define SHUB_PORT0_I2C_IDR_7__EXT_DATA_OE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0001fe00U) >> 9)
#define SHUB_PORT0_I2C_IDR_7__EXT_DATA_OE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 9) & 0x0001fe00U)
#define SHUB_PORT0_I2C_IDR_7__EXT_DATA_OE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0001fe00U) | (((uint32_t)(src) <<\
                    9) & 0x0001fe00U)
#define SHUB_PORT0_I2C_IDR_7__EXT_DATA_OE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 9) & ~0x0001fe00U)))
#define SHUB_PORT0_I2C_IDR_7__EXT_DATA_OE__RESET_VALUE              0x000000ffU
/** @} */

/* macros for field ext_data_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_pu_field ext_data_pu_field
 * @brief macros for field ext_data_pu
 * @details sda pin pullup enable
 * @{
 */
#define SHUB_PORT0_I2C_IDR_7__EXT_DATA_PU__SHIFT                             17
#define SHUB_PORT0_I2C_IDR_7__EXT_DATA_PU__WIDTH                              1
#define SHUB_PORT0_I2C_IDR_7__EXT_DATA_PU__MASK                     0x00020000U
#define SHUB_PORT0_I2C_IDR_7__EXT_DATA_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00020000U) >> 17)
#define SHUB_PORT0_I2C_IDR_7__EXT_DATA_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 17) & 0x00020000U)
#define SHUB_PORT0_I2C_IDR_7__EXT_DATA_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | (((uint32_t)(src) <<\
                    17) & 0x00020000U)
#define SHUB_PORT0_I2C_IDR_7__EXT_DATA_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 17) & ~0x00020000U)))
#define SHUB_PORT0_I2C_IDR_7__EXT_DATA_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(1) << 17)
#define SHUB_PORT0_I2C_IDR_7__EXT_DATA_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(0) << 17)
#define SHUB_PORT0_I2C_IDR_7__EXT_DATA_PU__RESET_VALUE              0x00000000U
/** @} */

/* macros for field ext_clk_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_clk_pu_field ext_clk_pu_field
 * @brief macros for field ext_clk_pu
 * @details sck pin pullup enable
 * @{
 */
#define SHUB_PORT0_I2C_IDR_7__EXT_CLK_PU__SHIFT                              18
#define SHUB_PORT0_I2C_IDR_7__EXT_CLK_PU__WIDTH                               1
#define SHUB_PORT0_I2C_IDR_7__EXT_CLK_PU__MASK                      0x00040000U
#define SHUB_PORT0_I2C_IDR_7__EXT_CLK_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00040000U) >> 18)
#define SHUB_PORT0_I2C_IDR_7__EXT_CLK_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 18) & 0x00040000U)
#define SHUB_PORT0_I2C_IDR_7__EXT_CLK_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | (((uint32_t)(src) <<\
                    18) & 0x00040000U)
#define SHUB_PORT0_I2C_IDR_7__EXT_CLK_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 18) & ~0x00040000U)))
#define SHUB_PORT0_I2C_IDR_7__EXT_CLK_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(1) << 18)
#define SHUB_PORT0_I2C_IDR_7__EXT_CLK_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(0) << 18)
#define SHUB_PORT0_I2C_IDR_7__EXT_CLK_PU__RESET_VALUE               0x00000000U
/** @} */

/* macros for field ext_head */
/**
 * @defgroup at_apb_shub_regs_core_ext_head_field ext_head_field
 * @brief macros for field ext_head
 * @details Before data transmission starts, what should head be?  0 = start  1 = stall
 * @{
 */
#define SHUB_PORT0_I2C_IDR_7__EXT_HEAD__SHIFT                                19
#define SHUB_PORT0_I2C_IDR_7__EXT_HEAD__WIDTH                                 2
#define SHUB_PORT0_I2C_IDR_7__EXT_HEAD__MASK                        0x00180000U
#define SHUB_PORT0_I2C_IDR_7__EXT_HEAD__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00180000U) >> 19)
#define SHUB_PORT0_I2C_IDR_7__EXT_HEAD__WRITE(src) \
                    (((uint32_t)(src)\
                    << 19) & 0x00180000U)
#define SHUB_PORT0_I2C_IDR_7__EXT_HEAD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00180000U) | (((uint32_t)(src) <<\
                    19) & 0x00180000U)
#define SHUB_PORT0_I2C_IDR_7__EXT_HEAD__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 19) & ~0x00180000U)))
#define SHUB_PORT0_I2C_IDR_7__EXT_HEAD__RESET_VALUE                 0x00000000U
/** @} */

/* macros for field ext_tail */
/**
 * @defgroup at_apb_shub_regs_core_ext_tail_field ext_tail_field
 * @brief macros for field ext_tail
 * @details At end of 8 bits plus ack/nack, what should tail be?  0 = stop  1 = stall  2 = restart
 * @{
 */
#define SHUB_PORT0_I2C_IDR_7__EXT_TAIL__SHIFT                                21
#define SHUB_PORT0_I2C_IDR_7__EXT_TAIL__WIDTH                                 2
#define SHUB_PORT0_I2C_IDR_7__EXT_TAIL__MASK                        0x00600000U
#define SHUB_PORT0_I2C_IDR_7__EXT_TAIL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00600000U) >> 21)
#define SHUB_PORT0_I2C_IDR_7__EXT_TAIL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 21) & 0x00600000U)
#define SHUB_PORT0_I2C_IDR_7__EXT_TAIL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00600000U) | (((uint32_t)(src) <<\
                    21) & 0x00600000U)
#define SHUB_PORT0_I2C_IDR_7__EXT_TAIL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 21) & ~0x00600000U)))
#define SHUB_PORT0_I2C_IDR_7__EXT_TAIL__RESET_VALUE                 0x00000000U
/** @} */

/* macros for field ext_master_drives_ack */
/**
 * @defgroup at_apb_shub_regs_core_ext_master_drives_ack_field ext_master_drives_ack_field
 * @brief macros for field ext_master_drives_ack
 * @details Specifies that master is to drive ack.
 * @{
 */
#define SHUB_PORT0_I2C_IDR_7__EXT_MASTER_DRIVES_ACK__SHIFT                   23
#define SHUB_PORT0_I2C_IDR_7__EXT_MASTER_DRIVES_ACK__WIDTH                    1
#define SHUB_PORT0_I2C_IDR_7__EXT_MASTER_DRIVES_ACK__MASK           0x00800000U
#define SHUB_PORT0_I2C_IDR_7__EXT_MASTER_DRIVES_ACK__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00800000U) >> 23)
#define SHUB_PORT0_I2C_IDR_7__EXT_MASTER_DRIVES_ACK__WRITE(src) \
                    (((uint32_t)(src)\
                    << 23) & 0x00800000U)
#define SHUB_PORT0_I2C_IDR_7__EXT_MASTER_DRIVES_ACK__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | (((uint32_t)(src) <<\
                    23) & 0x00800000U)
#define SHUB_PORT0_I2C_IDR_7__EXT_MASTER_DRIVES_ACK__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 23) & ~0x00800000U)))
#define SHUB_PORT0_I2C_IDR_7__EXT_MASTER_DRIVES_ACK__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(1) << 23)
#define SHUB_PORT0_I2C_IDR_7__EXT_MASTER_DRIVES_ACK__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(0) << 23)
#define SHUB_PORT0_I2C_IDR_7__EXT_MASTER_DRIVES_ACK__RESET_VALUE    0x00000000U
/** @} */

/* macros for field ext_ack_value_to_drive */
/**
 * @defgroup at_apb_shub_regs_core_ext_ack_value_to_drive_field ext_ack_value_to_drive_field
 * @brief macros for field ext_ack_value_to_drive
 * @details If ack is to be driven by master, what value to drive?
 * @{
 */
#define SHUB_PORT0_I2C_IDR_7__EXT_ACK_VALUE_TO_DRIVE__SHIFT                  24
#define SHUB_PORT0_I2C_IDR_7__EXT_ACK_VALUE_TO_DRIVE__WIDTH                   1
#define SHUB_PORT0_I2C_IDR_7__EXT_ACK_VALUE_TO_DRIVE__MASK          0x01000000U
#define SHUB_PORT0_I2C_IDR_7__EXT_ACK_VALUE_TO_DRIVE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x01000000U) >> 24)
#define SHUB_PORT0_I2C_IDR_7__EXT_ACK_VALUE_TO_DRIVE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0x01000000U)
#define SHUB_PORT0_I2C_IDR_7__EXT_ACK_VALUE_TO_DRIVE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | (((uint32_t)(src) <<\
                    24) & 0x01000000U)
#define SHUB_PORT0_I2C_IDR_7__EXT_ACK_VALUE_TO_DRIVE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x01000000U)))
#define SHUB_PORT0_I2C_IDR_7__EXT_ACK_VALUE_TO_DRIVE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(1) << 24)
#define SHUB_PORT0_I2C_IDR_7__EXT_ACK_VALUE_TO_DRIVE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(0) << 24)
#define SHUB_PORT0_I2C_IDR_7__EXT_ACK_VALUE_TO_DRIVE__RESET_VALUE   0x00000000U
/** @} */
#define SHUB_PORT0_I2C_IDR_7__TYPE                                     uint32_t
#define SHUB_PORT0_I2C_IDR_7__READ                                  0x01ffffffU
#define SHUB_PORT0_I2C_IDR_7__WRITE                                 0x01ffffffU
#define SHUB_PORT0_I2C_IDR_7__PRESERVED                             0x01ffffffU
#define SHUB_PORT0_I2C_IDR_7__RESET_VALUE                           0x0001fe00U

#endif /* __SHUB_PORT0_I2C_IDR_7_MACRO__ */

/** @} end of port0_i2c_idr_7 */

/* macros for BlueprintGlobalNameSpace::SHUB_port0_i2c_dat_ctrl */
/**
 * @defgroup at_apb_shub_regs_core_port0_i2c_dat_ctrl port0_i2c_dat_ctrl
 * @brief slave(port0) data byte read (used in not the last byte) definitions.
 * @{
 */
#ifndef __SHUB_PORT0_I2C_DAT_CTRL_MACRO__
#define __SHUB_PORT0_I2C_DAT_CTRL_MACRO__

/* macros for field ext_data_ie_ovrd */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_ie_ovrd_field ext_data_ie_ovrd_field
 * @brief macros for field ext_data_ie_ovrd
 * @details 1 = ie is high  0 = ie is ~oe
 * @{
 */
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_DATA_IE_OVRD__SHIFT                      0
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_DATA_IE_OVRD__WIDTH                      1
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_DATA_IE_OVRD__MASK             0x00000001U
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_DATA_IE_OVRD__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_DATA_IE_OVRD__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_DATA_IE_OVRD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_DATA_IE_OVRD__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_DATA_IE_OVRD__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_DATA_IE_OVRD__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_DATA_IE_OVRD__RESET_VALUE      0x00000000U
/** @} */

/* macros for field ext_data_o */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_o_field ext_data_o_field
 * @brief macros for field ext_data_o
 * @details outbound data; can be device id, address within device, or write data; if it's device id, the LSB is the R/Wb indicator
 * @{
 */
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_DATA_O__SHIFT                            1
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_DATA_O__WIDTH                            8
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_DATA_O__MASK                   0x000001feU
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_DATA_O__READ(src) \
                    (((uint32_t)(src)\
                    & 0x000001feU) >> 1)
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_DATA_O__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x000001feU)
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_DATA_O__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000001feU) | (((uint32_t)(src) <<\
                    1) & 0x000001feU)
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_DATA_O__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x000001feU)))
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_DATA_O__RESET_VALUE            0x00000000U
/** @} */

/* macros for field ext_data_oe */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_oe_field ext_data_oe_field
 * @brief macros for field ext_data_oe
 * @details sda output enable per bit
 * @{
 */
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_DATA_OE__SHIFT                           9
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_DATA_OE__WIDTH                           8
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_DATA_OE__MASK                  0x0001fe00U
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_DATA_OE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0001fe00U) >> 9)
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_DATA_OE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 9) & 0x0001fe00U)
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_DATA_OE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0001fe00U) | (((uint32_t)(src) <<\
                    9) & 0x0001fe00U)
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_DATA_OE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 9) & ~0x0001fe00U)))
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_DATA_OE__RESET_VALUE           0x000000ffU
/** @} */

/* macros for field ext_data_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_pu_field ext_data_pu_field
 * @brief macros for field ext_data_pu
 * @details sda pin pullup enable
 * @{
 */
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_DATA_PU__SHIFT                          17
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_DATA_PU__WIDTH                           1
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_DATA_PU__MASK                  0x00020000U
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_DATA_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00020000U) >> 17)
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_DATA_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 17) & 0x00020000U)
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_DATA_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | (((uint32_t)(src) <<\
                    17) & 0x00020000U)
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_DATA_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 17) & ~0x00020000U)))
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_DATA_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(1) << 17)
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_DATA_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(0) << 17)
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_DATA_PU__RESET_VALUE           0x00000000U
/** @} */

/* macros for field ext_clk_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_clk_pu_field ext_clk_pu_field
 * @brief macros for field ext_clk_pu
 * @details sck pin pullup enable
 * @{
 */
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_CLK_PU__SHIFT                           18
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_CLK_PU__WIDTH                            1
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_CLK_PU__MASK                   0x00040000U
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_CLK_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00040000U) >> 18)
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_CLK_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 18) & 0x00040000U)
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_CLK_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | (((uint32_t)(src) <<\
                    18) & 0x00040000U)
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_CLK_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 18) & ~0x00040000U)))
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_CLK_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(1) << 18)
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_CLK_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(0) << 18)
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_CLK_PU__RESET_VALUE            0x00000000U
/** @} */

/* macros for field ext_head */
/**
 * @defgroup at_apb_shub_regs_core_ext_head_field ext_head_field
 * @brief macros for field ext_head
 * @details Before data transmission starts, what should head be?  0 = start  1 = stall
 * @{
 */
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_HEAD__SHIFT                             19
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_HEAD__WIDTH                              2
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_HEAD__MASK                     0x00180000U
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_HEAD__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00180000U) >> 19)
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_HEAD__WRITE(src) \
                    (((uint32_t)(src)\
                    << 19) & 0x00180000U)
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_HEAD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00180000U) | (((uint32_t)(src) <<\
                    19) & 0x00180000U)
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_HEAD__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 19) & ~0x00180000U)))
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_HEAD__RESET_VALUE              0x00000000U
/** @} */

/* macros for field ext_tail */
/**
 * @defgroup at_apb_shub_regs_core_ext_tail_field ext_tail_field
 * @brief macros for field ext_tail
 * @details At end of 8 bits plus ack/nack, what should tail be?  0 = stop  1 = stall  2 = restart
 * @{
 */
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_TAIL__SHIFT                             21
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_TAIL__WIDTH                              2
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_TAIL__MASK                     0x00600000U
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_TAIL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00600000U) >> 21)
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_TAIL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 21) & 0x00600000U)
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_TAIL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00600000U) | (((uint32_t)(src) <<\
                    21) & 0x00600000U)
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_TAIL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 21) & ~0x00600000U)))
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_TAIL__RESET_VALUE              0x00000000U
/** @} */

/* macros for field ext_master_drives_ack */
/**
 * @defgroup at_apb_shub_regs_core_ext_master_drives_ack_field ext_master_drives_ack_field
 * @brief macros for field ext_master_drives_ack
 * @details Specifies that master is to drive ack.
 * @{
 */
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_MASTER_DRIVES_ACK__SHIFT                23
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_MASTER_DRIVES_ACK__WIDTH                 1
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_MASTER_DRIVES_ACK__MASK        0x00800000U
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_MASTER_DRIVES_ACK__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00800000U) >> 23)
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_MASTER_DRIVES_ACK__WRITE(src) \
                    (((uint32_t)(src)\
                    << 23) & 0x00800000U)
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_MASTER_DRIVES_ACK__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | (((uint32_t)(src) <<\
                    23) & 0x00800000U)
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_MASTER_DRIVES_ACK__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 23) & ~0x00800000U)))
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_MASTER_DRIVES_ACK__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(1) << 23)
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_MASTER_DRIVES_ACK__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(0) << 23)
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_MASTER_DRIVES_ACK__RESET_VALUE 0x00000000U
/** @} */

/* macros for field ext_ack_value_to_drive */
/**
 * @defgroup at_apb_shub_regs_core_ext_ack_value_to_drive_field ext_ack_value_to_drive_field
 * @brief macros for field ext_ack_value_to_drive
 * @details If ack is to be driven by master, what value to drive?
 * @{
 */
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_ACK_VALUE_TO_DRIVE__SHIFT               24
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_ACK_VALUE_TO_DRIVE__WIDTH                1
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_ACK_VALUE_TO_DRIVE__MASK       0x01000000U
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_ACK_VALUE_TO_DRIVE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x01000000U) >> 24)
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_ACK_VALUE_TO_DRIVE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0x01000000U)
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_ACK_VALUE_TO_DRIVE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | (((uint32_t)(src) <<\
                    24) & 0x01000000U)
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_ACK_VALUE_TO_DRIVE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x01000000U)))
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_ACK_VALUE_TO_DRIVE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(1) << 24)
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_ACK_VALUE_TO_DRIVE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(0) << 24)
#define SHUB_PORT0_I2C_DAT_CTRL__EXT_ACK_VALUE_TO_DRIVE__RESET_VALUE \
                    0x00000000U
/** @} */
#define SHUB_PORT0_I2C_DAT_CTRL__TYPE                                  uint32_t
#define SHUB_PORT0_I2C_DAT_CTRL__READ                               0x01ffffffU
#define SHUB_PORT0_I2C_DAT_CTRL__WRITE                              0x01ffffffU
#define SHUB_PORT0_I2C_DAT_CTRL__PRESERVED                          0x01ffffffU
#define SHUB_PORT0_I2C_DAT_CTRL__RESET_VALUE                        0x0001fe00U

#endif /* __SHUB_PORT0_I2C_DAT_CTRL_MACRO__ */

/** @} end of port0_i2c_dat_ctrl */

/* macros for BlueprintGlobalNameSpace::SHUB_port0_i2c_dat_last_ctrl */
/**
 * @defgroup at_apb_shub_regs_core_port0_i2c_dat_last_ctrl port0_i2c_dat_last_ctrl
 * @brief slave(port0) data byte read (used in the last byte) definitions.
 * @{
 */
#ifndef __SHUB_PORT0_I2C_DAT_LAST_CTRL_MACRO__
#define __SHUB_PORT0_I2C_DAT_LAST_CTRL_MACRO__

/* macros for field ext_data_ie_ovrd */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_ie_ovrd_field ext_data_ie_ovrd_field
 * @brief macros for field ext_data_ie_ovrd
 * @details 1 = ie is high  0 = ie is ~oe
 * @{
 */
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_DATA_IE_OVRD__SHIFT                 0
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_DATA_IE_OVRD__WIDTH                 1
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_DATA_IE_OVRD__MASK        0x00000001U
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_DATA_IE_OVRD__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_DATA_IE_OVRD__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_DATA_IE_OVRD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_DATA_IE_OVRD__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_DATA_IE_OVRD__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_DATA_IE_OVRD__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_DATA_IE_OVRD__RESET_VALUE 0x00000000U
/** @} */

/* macros for field ext_data_o */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_o_field ext_data_o_field
 * @brief macros for field ext_data_o
 * @details outbound data; can be device id, address within device, or write data; if it's device id, the LSB is the R/Wb indicator
 * @{
 */
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_DATA_O__SHIFT                       1
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_DATA_O__WIDTH                       8
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_DATA_O__MASK              0x000001feU
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_DATA_O__READ(src) \
                    (((uint32_t)(src)\
                    & 0x000001feU) >> 1)
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_DATA_O__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x000001feU)
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_DATA_O__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000001feU) | (((uint32_t)(src) <<\
                    1) & 0x000001feU)
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_DATA_O__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x000001feU)))
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_DATA_O__RESET_VALUE       0x00000000U
/** @} */

/* macros for field ext_data_oe */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_oe_field ext_data_oe_field
 * @brief macros for field ext_data_oe
 * @details sda output enable per bit
 * @{
 */
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_DATA_OE__SHIFT                      9
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_DATA_OE__WIDTH                      8
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_DATA_OE__MASK             0x0001fe00U
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_DATA_OE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0001fe00U) >> 9)
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_DATA_OE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 9) & 0x0001fe00U)
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_DATA_OE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0001fe00U) | (((uint32_t)(src) <<\
                    9) & 0x0001fe00U)
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_DATA_OE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 9) & ~0x0001fe00U)))
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_DATA_OE__RESET_VALUE      0x000000ffU
/** @} */

/* macros for field ext_data_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_pu_field ext_data_pu_field
 * @brief macros for field ext_data_pu
 * @details sda pin pullup enable
 * @{
 */
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_DATA_PU__SHIFT                     17
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_DATA_PU__WIDTH                      1
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_DATA_PU__MASK             0x00020000U
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_DATA_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00020000U) >> 17)
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_DATA_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 17) & 0x00020000U)
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_DATA_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | (((uint32_t)(src) <<\
                    17) & 0x00020000U)
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_DATA_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 17) & ~0x00020000U)))
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_DATA_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(1) << 17)
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_DATA_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(0) << 17)
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_DATA_PU__RESET_VALUE      0x00000000U
/** @} */

/* macros for field ext_clk_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_clk_pu_field ext_clk_pu_field
 * @brief macros for field ext_clk_pu
 * @details sck pin pullup enable
 * @{
 */
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_CLK_PU__SHIFT                      18
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_CLK_PU__WIDTH                       1
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_CLK_PU__MASK              0x00040000U
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_CLK_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00040000U) >> 18)
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_CLK_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 18) & 0x00040000U)
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_CLK_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | (((uint32_t)(src) <<\
                    18) & 0x00040000U)
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_CLK_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 18) & ~0x00040000U)))
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_CLK_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(1) << 18)
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_CLK_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(0) << 18)
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_CLK_PU__RESET_VALUE       0x00000000U
/** @} */

/* macros for field ext_head */
/**
 * @defgroup at_apb_shub_regs_core_ext_head_field ext_head_field
 * @brief macros for field ext_head
 * @details Before data transmission starts, what should head be?  0 = start  1 = stall
 * @{
 */
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_HEAD__SHIFT                        19
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_HEAD__WIDTH                         2
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_HEAD__MASK                0x00180000U
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_HEAD__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00180000U) >> 19)
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_HEAD__WRITE(src) \
                    (((uint32_t)(src)\
                    << 19) & 0x00180000U)
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_HEAD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00180000U) | (((uint32_t)(src) <<\
                    19) & 0x00180000U)
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_HEAD__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 19) & ~0x00180000U)))
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_HEAD__RESET_VALUE         0x00000000U
/** @} */

/* macros for field ext_tail */
/**
 * @defgroup at_apb_shub_regs_core_ext_tail_field ext_tail_field
 * @brief macros for field ext_tail
 * @details At end of 8 bits plus ack/nack, what should tail be?  0 = stop  1 = stall  2 = restart
 * @{
 */
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_TAIL__SHIFT                        21
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_TAIL__WIDTH                         2
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_TAIL__MASK                0x00600000U
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_TAIL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00600000U) >> 21)
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_TAIL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 21) & 0x00600000U)
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_TAIL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00600000U) | (((uint32_t)(src) <<\
                    21) & 0x00600000U)
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_TAIL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 21) & ~0x00600000U)))
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_TAIL__RESET_VALUE         0x00000000U
/** @} */

/* macros for field ext_master_drives_ack */
/**
 * @defgroup at_apb_shub_regs_core_ext_master_drives_ack_field ext_master_drives_ack_field
 * @brief macros for field ext_master_drives_ack
 * @details Specifies that master is to drive ack.
 * @{
 */
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_MASTER_DRIVES_ACK__SHIFT           23
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_MASTER_DRIVES_ACK__WIDTH            1
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_MASTER_DRIVES_ACK__MASK   0x00800000U
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_MASTER_DRIVES_ACK__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00800000U) >> 23)
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_MASTER_DRIVES_ACK__WRITE(src) \
                    (((uint32_t)(src)\
                    << 23) & 0x00800000U)
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_MASTER_DRIVES_ACK__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | (((uint32_t)(src) <<\
                    23) & 0x00800000U)
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_MASTER_DRIVES_ACK__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 23) & ~0x00800000U)))
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_MASTER_DRIVES_ACK__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(1) << 23)
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_MASTER_DRIVES_ACK__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(0) << 23)
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_MASTER_DRIVES_ACK__RESET_VALUE \
                    0x00000000U
/** @} */

/* macros for field ext_ack_value_to_drive */
/**
 * @defgroup at_apb_shub_regs_core_ext_ack_value_to_drive_field ext_ack_value_to_drive_field
 * @brief macros for field ext_ack_value_to_drive
 * @details If ack is to be driven by master, what value to drive?
 * @{
 */
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_ACK_VALUE_TO_DRIVE__SHIFT          24
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_ACK_VALUE_TO_DRIVE__WIDTH           1
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_ACK_VALUE_TO_DRIVE__MASK  0x01000000U
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_ACK_VALUE_TO_DRIVE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x01000000U) >> 24)
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_ACK_VALUE_TO_DRIVE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0x01000000U)
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_ACK_VALUE_TO_DRIVE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | (((uint32_t)(src) <<\
                    24) & 0x01000000U)
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_ACK_VALUE_TO_DRIVE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x01000000U)))
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_ACK_VALUE_TO_DRIVE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(1) << 24)
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_ACK_VALUE_TO_DRIVE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(0) << 24)
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__EXT_ACK_VALUE_TO_DRIVE__RESET_VALUE \
                    0x00000000U
/** @} */
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__TYPE                             uint32_t
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__READ                          0x01ffffffU
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__WRITE                         0x01ffffffU
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__PRESERVED                     0x01ffffffU
#define SHUB_PORT0_I2C_DAT_LAST_CTRL__RESET_VALUE                   0x0001fe00U

#endif /* __SHUB_PORT0_I2C_DAT_LAST_CTRL_MACRO__ */

/** @} end of port0_i2c_dat_last_ctrl */

/* macros for BlueprintGlobalNameSpace::SHUB_port0_alm0_quan_ctrl */
/**
 * @defgroup at_apb_shub_regs_core_port0_alm0_quan_ctrl port0_alm0_quan_ctrl
 * @brief alarm0 quantity's definition definitions.
 * @{
 */
#ifndef __SHUB_PORT0_ALM0_QUAN_CTRL_MACRO__
#define __SHUB_PORT0_ALM0_QUAN_CTRL_MACRO__

/* macros for field quan0_pos */
/**
 * @defgroup at_apb_shub_regs_core_quan0_pos_field quan0_pos_field
 * @brief macros for field quan0_pos
 * @details starting position of the quantity 0
 * @{
 */
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN0_POS__SHIFT                           0
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN0_POS__WIDTH                           5
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN0_POS__MASK                  0x0000001fU
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN0_POS__READ(src) \
                    ((uint32_t)(src)\
                    & 0x0000001fU)
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN0_POS__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x0000001fU)
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN0_POS__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000001fU) | ((uint32_t)(src) &\
                    0x0000001fU)
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN0_POS__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x0000001fU)))
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN0_POS__RESET_VALUE           0x00000000U
/** @} */

/* macros for field quan1_pos */
/**
 * @defgroup at_apb_shub_regs_core_quan1_pos_field quan1_pos_field
 * @brief macros for field quan1_pos
 * @details starting position of the quantity 1
 * @{
 */
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN1_POS__SHIFT                           5
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN1_POS__WIDTH                           5
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN1_POS__MASK                  0x000003e0U
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN1_POS__READ(src) \
                    (((uint32_t)(src)\
                    & 0x000003e0U) >> 5)
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN1_POS__WRITE(src) \
                    (((uint32_t)(src)\
                    << 5) & 0x000003e0U)
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN1_POS__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000003e0U) | (((uint32_t)(src) <<\
                    5) & 0x000003e0U)
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN1_POS__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 5) & ~0x000003e0U)))
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN1_POS__RESET_VALUE           0x00000000U
/** @} */

/* macros for field quan2_pos */
/**
 * @defgroup at_apb_shub_regs_core_quan2_pos_field quan2_pos_field
 * @brief macros for field quan2_pos
 * @details starting position of the quantity 2
 * @{
 */
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN2_POS__SHIFT                          10
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN2_POS__WIDTH                           5
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN2_POS__MASK                  0x00007c00U
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN2_POS__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00007c00U) >> 10)
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN2_POS__WRITE(src) \
                    (((uint32_t)(src)\
                    << 10) & 0x00007c00U)
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN2_POS__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00007c00U) | (((uint32_t)(src) <<\
                    10) & 0x00007c00U)
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN2_POS__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 10) & ~0x00007c00U)))
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN2_POS__RESET_VALUE           0x00000000U
/** @} */

/* macros for field quan3_pos */
/**
 * @defgroup at_apb_shub_regs_core_quan3_pos_field quan3_pos_field
 * @brief macros for field quan3_pos
 * @details starting position of the quantity 3
 * @{
 */
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN3_POS__SHIFT                          15
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN3_POS__WIDTH                           5
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN3_POS__MASK                  0x000f8000U
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN3_POS__READ(src) \
                    (((uint32_t)(src)\
                    & 0x000f8000U) >> 15)
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN3_POS__WRITE(src) \
                    (((uint32_t)(src)\
                    << 15) & 0x000f8000U)
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN3_POS__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000f8000U) | (((uint32_t)(src) <<\
                    15) & 0x000f8000U)
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN3_POS__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 15) & ~0x000f8000U)))
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN3_POS__RESET_VALUE           0x00000000U
/** @} */

/* macros for field quan0_size */
/**
 * @defgroup at_apb_shub_regs_core_quan0_size_field quan0_size_field
 * @brief macros for field quan0_size
 * @details number of bytes making up the quantity data = programmed quan0_size + 1; must be < 2 (3 bytes max)
 * @{
 */
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN0_SIZE__SHIFT                         20
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN0_SIZE__WIDTH                          2
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN0_SIZE__MASK                 0x00300000U
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN0_SIZE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00300000U) >> 20)
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN0_SIZE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 20) & 0x00300000U)
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN0_SIZE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00300000U) | (((uint32_t)(src) <<\
                    20) & 0x00300000U)
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN0_SIZE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 20) & ~0x00300000U)))
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN0_SIZE__RESET_VALUE          0x00000001U
/** @} */

/* macros for field quan1_size */
/**
 * @defgroup at_apb_shub_regs_core_quan1_size_field quan1_size_field
 * @brief macros for field quan1_size
 * @details number of bytes making up the quantity data = programmed quan1_size + 1; must be < 2 (3 bytes max)
 * @{
 */
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN1_SIZE__SHIFT                         22
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN1_SIZE__WIDTH                          2
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN1_SIZE__MASK                 0x00c00000U
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN1_SIZE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00c00000U) >> 22)
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN1_SIZE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 22) & 0x00c00000U)
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN1_SIZE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00c00000U) | (((uint32_t)(src) <<\
                    22) & 0x00c00000U)
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN1_SIZE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 22) & ~0x00c00000U)))
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN1_SIZE__RESET_VALUE          0x00000001U
/** @} */

/* macros for field quan2_size */
/**
 * @defgroup at_apb_shub_regs_core_quan2_size_field quan2_size_field
 * @brief macros for field quan2_size
 * @details number of bytes making up the quantity data = programmed quan2_size + 1; must be < 2 (3 bytes max)
 * @{
 */
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN2_SIZE__SHIFT                         24
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN2_SIZE__WIDTH                          2
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN2_SIZE__MASK                 0x03000000U
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN2_SIZE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x03000000U) >> 24)
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN2_SIZE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0x03000000U)
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN2_SIZE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x03000000U) | (((uint32_t)(src) <<\
                    24) & 0x03000000U)
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN2_SIZE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x03000000U)))
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN2_SIZE__RESET_VALUE          0x00000001U
/** @} */

/* macros for field quan3_size */
/**
 * @defgroup at_apb_shub_regs_core_quan3_size_field quan3_size_field
 * @brief macros for field quan3_size
 * @details number of bytes making up the quantity data = programmed quan3_size + 1; must be < 2 (3 bytes max)
 * @{
 */
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN3_SIZE__SHIFT                         26
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN3_SIZE__WIDTH                          2
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN3_SIZE__MASK                 0x0c000000U
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN3_SIZE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0c000000U) >> 26)
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN3_SIZE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 26) & 0x0c000000U)
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN3_SIZE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0c000000U) | (((uint32_t)(src) <<\
                    26) & 0x0c000000U)
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN3_SIZE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 26) & ~0x0c000000U)))
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN3_SIZE__RESET_VALUE          0x00000001U
/** @} */

/* macros for field lsb_first */
/**
 * @defgroup at_apb_shub_regs_core_lsb_first_field lsb_first_field
 * @brief macros for field lsb_first
 * @details 1= least significant byte comes in first ; 0= most significant byte comes in first
 * @{
 */
#define SHUB_PORT0_ALM0_QUAN_CTRL__LSB_FIRST__SHIFT                          30
#define SHUB_PORT0_ALM0_QUAN_CTRL__LSB_FIRST__WIDTH                           1
#define SHUB_PORT0_ALM0_QUAN_CTRL__LSB_FIRST__MASK                  0x40000000U
#define SHUB_PORT0_ALM0_QUAN_CTRL__LSB_FIRST__READ(src) \
                    (((uint32_t)(src)\
                    & 0x40000000U) >> 30)
#define SHUB_PORT0_ALM0_QUAN_CTRL__LSB_FIRST__WRITE(src) \
                    (((uint32_t)(src)\
                    << 30) & 0x40000000U)
#define SHUB_PORT0_ALM0_QUAN_CTRL__LSB_FIRST__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x40000000U) | (((uint32_t)(src) <<\
                    30) & 0x40000000U)
#define SHUB_PORT0_ALM0_QUAN_CTRL__LSB_FIRST__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 30) & ~0x40000000U)))
#define SHUB_PORT0_ALM0_QUAN_CTRL__LSB_FIRST__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x40000000U) | ((uint32_t)(1) << 30)
#define SHUB_PORT0_ALM0_QUAN_CTRL__LSB_FIRST__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x40000000U) | ((uint32_t)(0) << 30)
#define SHUB_PORT0_ALM0_QUAN_CTRL__LSB_FIRST__RESET_VALUE           0x00000000U
/** @} */

/* macros for field quan_dat_is_signed */
/**
 * @defgroup at_apb_shub_regs_core_quan_dat_is_signed_field quan_dat_is_signed_field
 * @brief macros for field quan_dat_is_signed
 * @details quantity data is a signed data
 * @{
 */
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN_DAT_IS_SIGNED__SHIFT                 31
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN_DAT_IS_SIGNED__WIDTH                  1
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN_DAT_IS_SIGNED__MASK         0x80000000U
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN_DAT_IS_SIGNED__READ(src) \
                    (((uint32_t)(src)\
                    & 0x80000000U) >> 31)
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN_DAT_IS_SIGNED__WRITE(src) \
                    (((uint32_t)(src)\
                    << 31) & 0x80000000U)
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN_DAT_IS_SIGNED__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x80000000U) | (((uint32_t)(src) <<\
                    31) & 0x80000000U)
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN_DAT_IS_SIGNED__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 31) & ~0x80000000U)))
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN_DAT_IS_SIGNED__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x80000000U) | ((uint32_t)(1) << 31)
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN_DAT_IS_SIGNED__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x80000000U) | ((uint32_t)(0) << 31)
#define SHUB_PORT0_ALM0_QUAN_CTRL__QUAN_DAT_IS_SIGNED__RESET_VALUE  0x00000000U
/** @} */
#define SHUB_PORT0_ALM0_QUAN_CTRL__TYPE                                uint32_t
#define SHUB_PORT0_ALM0_QUAN_CTRL__READ                             0xcfffffffU
#define SHUB_PORT0_ALM0_QUAN_CTRL__WRITE                            0xcfffffffU
#define SHUB_PORT0_ALM0_QUAN_CTRL__PRESERVED                        0xcfffffffU
#define SHUB_PORT0_ALM0_QUAN_CTRL__RESET_VALUE                      0x05500000U

#endif /* __SHUB_PORT0_ALM0_QUAN_CTRL_MACRO__ */

/** @} end of port0_alm0_quan_ctrl */

/* macros for BlueprintGlobalNameSpace::SHUB_port0_alm1_quan_ctrl */
/**
 * @defgroup at_apb_shub_regs_core_port0_alm1_quan_ctrl port0_alm1_quan_ctrl
 * @brief alarm1 quantity's definition definitions.
 * @{
 */
#ifndef __SHUB_PORT0_ALM1_QUAN_CTRL_MACRO__
#define __SHUB_PORT0_ALM1_QUAN_CTRL_MACRO__

/* macros for field quan0_pos */
/**
 * @defgroup at_apb_shub_regs_core_quan0_pos_field quan0_pos_field
 * @brief macros for field quan0_pos
 * @details starting position of the quantity 0
 * @{
 */
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN0_POS__SHIFT                           0
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN0_POS__WIDTH                           5
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN0_POS__MASK                  0x0000001fU
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN0_POS__READ(src) \
                    ((uint32_t)(src)\
                    & 0x0000001fU)
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN0_POS__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x0000001fU)
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN0_POS__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000001fU) | ((uint32_t)(src) &\
                    0x0000001fU)
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN0_POS__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x0000001fU)))
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN0_POS__RESET_VALUE           0x00000000U
/** @} */

/* macros for field quan1_pos */
/**
 * @defgroup at_apb_shub_regs_core_quan1_pos_field quan1_pos_field
 * @brief macros for field quan1_pos
 * @details starting position of the quantity 1
 * @{
 */
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN1_POS__SHIFT                           5
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN1_POS__WIDTH                           5
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN1_POS__MASK                  0x000003e0U
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN1_POS__READ(src) \
                    (((uint32_t)(src)\
                    & 0x000003e0U) >> 5)
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN1_POS__WRITE(src) \
                    (((uint32_t)(src)\
                    << 5) & 0x000003e0U)
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN1_POS__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000003e0U) | (((uint32_t)(src) <<\
                    5) & 0x000003e0U)
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN1_POS__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 5) & ~0x000003e0U)))
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN1_POS__RESET_VALUE           0x00000000U
/** @} */

/* macros for field quan2_pos */
/**
 * @defgroup at_apb_shub_regs_core_quan2_pos_field quan2_pos_field
 * @brief macros for field quan2_pos
 * @details starting position of the quantity 2
 * @{
 */
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN2_POS__SHIFT                          10
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN2_POS__WIDTH                           5
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN2_POS__MASK                  0x00007c00U
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN2_POS__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00007c00U) >> 10)
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN2_POS__WRITE(src) \
                    (((uint32_t)(src)\
                    << 10) & 0x00007c00U)
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN2_POS__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00007c00U) | (((uint32_t)(src) <<\
                    10) & 0x00007c00U)
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN2_POS__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 10) & ~0x00007c00U)))
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN2_POS__RESET_VALUE           0x00000000U
/** @} */

/* macros for field quan3_pos */
/**
 * @defgroup at_apb_shub_regs_core_quan3_pos_field quan3_pos_field
 * @brief macros for field quan3_pos
 * @details starting position of the quantity 3
 * @{
 */
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN3_POS__SHIFT                          15
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN3_POS__WIDTH                           5
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN3_POS__MASK                  0x000f8000U
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN3_POS__READ(src) \
                    (((uint32_t)(src)\
                    & 0x000f8000U) >> 15)
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN3_POS__WRITE(src) \
                    (((uint32_t)(src)\
                    << 15) & 0x000f8000U)
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN3_POS__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000f8000U) | (((uint32_t)(src) <<\
                    15) & 0x000f8000U)
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN3_POS__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 15) & ~0x000f8000U)))
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN3_POS__RESET_VALUE           0x00000000U
/** @} */

/* macros for field quan0_size */
/**
 * @defgroup at_apb_shub_regs_core_quan0_size_field quan0_size_field
 * @brief macros for field quan0_size
 * @details number of bytes making up the quantity data = programmed quan0_size + 1; must be < 2 (3 bytes max)
 * @{
 */
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN0_SIZE__SHIFT                         20
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN0_SIZE__WIDTH                          2
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN0_SIZE__MASK                 0x00300000U
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN0_SIZE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00300000U) >> 20)
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN0_SIZE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 20) & 0x00300000U)
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN0_SIZE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00300000U) | (((uint32_t)(src) <<\
                    20) & 0x00300000U)
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN0_SIZE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 20) & ~0x00300000U)))
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN0_SIZE__RESET_VALUE          0x00000001U
/** @} */

/* macros for field quan1_size */
/**
 * @defgroup at_apb_shub_regs_core_quan1_size_field quan1_size_field
 * @brief macros for field quan1_size
 * @details number of bytes making up the quantity data = programmed quan1_size + 1; must be < 2 (3 bytes max)
 * @{
 */
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN1_SIZE__SHIFT                         22
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN1_SIZE__WIDTH                          2
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN1_SIZE__MASK                 0x00c00000U
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN1_SIZE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00c00000U) >> 22)
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN1_SIZE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 22) & 0x00c00000U)
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN1_SIZE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00c00000U) | (((uint32_t)(src) <<\
                    22) & 0x00c00000U)
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN1_SIZE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 22) & ~0x00c00000U)))
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN1_SIZE__RESET_VALUE          0x00000001U
/** @} */

/* macros for field quan2_size */
/**
 * @defgroup at_apb_shub_regs_core_quan2_size_field quan2_size_field
 * @brief macros for field quan2_size
 * @details number of bytes making up the quantity data = programmed quan2_size + 1; must be < 2 (3 bytes max)
 * @{
 */
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN2_SIZE__SHIFT                         24
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN2_SIZE__WIDTH                          2
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN2_SIZE__MASK                 0x03000000U
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN2_SIZE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x03000000U) >> 24)
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN2_SIZE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0x03000000U)
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN2_SIZE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x03000000U) | (((uint32_t)(src) <<\
                    24) & 0x03000000U)
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN2_SIZE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x03000000U)))
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN2_SIZE__RESET_VALUE          0x00000001U
/** @} */

/* macros for field quan3_size */
/**
 * @defgroup at_apb_shub_regs_core_quan3_size_field quan3_size_field
 * @brief macros for field quan3_size
 * @details number of bytes making up the quantity data = programmed quan3_size + 1; must be < 2 (3 bytes max)
 * @{
 */
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN3_SIZE__SHIFT                         26
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN3_SIZE__WIDTH                          2
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN3_SIZE__MASK                 0x0c000000U
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN3_SIZE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0c000000U) >> 26)
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN3_SIZE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 26) & 0x0c000000U)
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN3_SIZE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0c000000U) | (((uint32_t)(src) <<\
                    26) & 0x0c000000U)
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN3_SIZE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 26) & ~0x0c000000U)))
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN3_SIZE__RESET_VALUE          0x00000001U
/** @} */

/* macros for field lsb_first */
/**
 * @defgroup at_apb_shub_regs_core_lsb_first_field lsb_first_field
 * @brief macros for field lsb_first
 * @details 1= least significant byte comes in first ; 0= most significant byte comes in first
 * @{
 */
#define SHUB_PORT0_ALM1_QUAN_CTRL__LSB_FIRST__SHIFT                          30
#define SHUB_PORT0_ALM1_QUAN_CTRL__LSB_FIRST__WIDTH                           1
#define SHUB_PORT0_ALM1_QUAN_CTRL__LSB_FIRST__MASK                  0x40000000U
#define SHUB_PORT0_ALM1_QUAN_CTRL__LSB_FIRST__READ(src) \
                    (((uint32_t)(src)\
                    & 0x40000000U) >> 30)
#define SHUB_PORT0_ALM1_QUAN_CTRL__LSB_FIRST__WRITE(src) \
                    (((uint32_t)(src)\
                    << 30) & 0x40000000U)
#define SHUB_PORT0_ALM1_QUAN_CTRL__LSB_FIRST__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x40000000U) | (((uint32_t)(src) <<\
                    30) & 0x40000000U)
#define SHUB_PORT0_ALM1_QUAN_CTRL__LSB_FIRST__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 30) & ~0x40000000U)))
#define SHUB_PORT0_ALM1_QUAN_CTRL__LSB_FIRST__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x40000000U) | ((uint32_t)(1) << 30)
#define SHUB_PORT0_ALM1_QUAN_CTRL__LSB_FIRST__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x40000000U) | ((uint32_t)(0) << 30)
#define SHUB_PORT0_ALM1_QUAN_CTRL__LSB_FIRST__RESET_VALUE           0x00000000U
/** @} */

/* macros for field quan_dat_is_signed */
/**
 * @defgroup at_apb_shub_regs_core_quan_dat_is_signed_field quan_dat_is_signed_field
 * @brief macros for field quan_dat_is_signed
 * @details quantity data is a signed data
 * @{
 */
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN_DAT_IS_SIGNED__SHIFT                 31
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN_DAT_IS_SIGNED__WIDTH                  1
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN_DAT_IS_SIGNED__MASK         0x80000000U
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN_DAT_IS_SIGNED__READ(src) \
                    (((uint32_t)(src)\
                    & 0x80000000U) >> 31)
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN_DAT_IS_SIGNED__WRITE(src) \
                    (((uint32_t)(src)\
                    << 31) & 0x80000000U)
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN_DAT_IS_SIGNED__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x80000000U) | (((uint32_t)(src) <<\
                    31) & 0x80000000U)
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN_DAT_IS_SIGNED__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 31) & ~0x80000000U)))
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN_DAT_IS_SIGNED__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x80000000U) | ((uint32_t)(1) << 31)
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN_DAT_IS_SIGNED__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x80000000U) | ((uint32_t)(0) << 31)
#define SHUB_PORT0_ALM1_QUAN_CTRL__QUAN_DAT_IS_SIGNED__RESET_VALUE  0x00000000U
/** @} */
#define SHUB_PORT0_ALM1_QUAN_CTRL__TYPE                                uint32_t
#define SHUB_PORT0_ALM1_QUAN_CTRL__READ                             0xcfffffffU
#define SHUB_PORT0_ALM1_QUAN_CTRL__WRITE                            0xcfffffffU
#define SHUB_PORT0_ALM1_QUAN_CTRL__PRESERVED                        0xcfffffffU
#define SHUB_PORT0_ALM1_QUAN_CTRL__RESET_VALUE                      0x05500000U

#endif /* __SHUB_PORT0_ALM1_QUAN_CTRL_MACRO__ */

/** @} end of port0_alm1_quan_ctrl */

/* macros for BlueprintGlobalNameSpace::SHUB_port0_alm0_trig_ctrl */
/**
 * @defgroup at_apb_shub_regs_core_port0_alm0_trig_ctrl port0_alm0_trig_ctrl
 * @brief alarm0 trigger function. trigger = trig_func_en( out_of_range(quan3), out_of_range(quan2),out_of_range(quan1),out_of_range(quan0)) definitions.
 * @{
 */
#ifndef __SHUB_PORT0_ALM0_TRIG_CTRL_MACRO__
#define __SHUB_PORT0_ALM0_TRIG_CTRL_MACRO__

/* macros for field trig_func_en */
/**
 * @defgroup at_apb_shub_regs_core_trig_func_en_field trig_func_en_field
 * @brief macros for field trig_func_en
 * @details trigger function.
 * @{
 */
#define SHUB_PORT0_ALM0_TRIG_CTRL__TRIG_FUNC_EN__SHIFT                        0
#define SHUB_PORT0_ALM0_TRIG_CTRL__TRIG_FUNC_EN__WIDTH                       16
#define SHUB_PORT0_ALM0_TRIG_CTRL__TRIG_FUNC_EN__MASK               0x0000ffffU
#define SHUB_PORT0_ALM0_TRIG_CTRL__TRIG_FUNC_EN__READ(src) \
                    ((uint32_t)(src)\
                    & 0x0000ffffU)
#define SHUB_PORT0_ALM0_TRIG_CTRL__TRIG_FUNC_EN__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x0000ffffU)
#define SHUB_PORT0_ALM0_TRIG_CTRL__TRIG_FUNC_EN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ffffU) | ((uint32_t)(src) &\
                    0x0000ffffU)
#define SHUB_PORT0_ALM0_TRIG_CTRL__TRIG_FUNC_EN__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x0000ffffU)))
#define SHUB_PORT0_ALM0_TRIG_CTRL__TRIG_FUNC_EN__RESET_VALUE        0x00000000U
/** @} */
#define SHUB_PORT0_ALM0_TRIG_CTRL__TYPE                                uint32_t
#define SHUB_PORT0_ALM0_TRIG_CTRL__READ                             0x0000ffffU
#define SHUB_PORT0_ALM0_TRIG_CTRL__WRITE                            0x0000ffffU
#define SHUB_PORT0_ALM0_TRIG_CTRL__PRESERVED                        0x0000ffffU
#define SHUB_PORT0_ALM0_TRIG_CTRL__RESET_VALUE                      0x00000000U

#endif /* __SHUB_PORT0_ALM0_TRIG_CTRL_MACRO__ */

/** @} end of port0_alm0_trig_ctrl */

/* macros for BlueprintGlobalNameSpace::SHUB_port0_alm1_trig_ctrl */
/**
 * @defgroup at_apb_shub_regs_core_port0_alm1_trig_ctrl port0_alm1_trig_ctrl
 * @brief alarm1 trigger function. trigger = trig_func_en( out_of_range(quan3), out_of_range(quan2),out_of_range(quan1),out_of_range(quan0)) definitions.
 * @{
 */
#ifndef __SHUB_PORT0_ALM1_TRIG_CTRL_MACRO__
#define __SHUB_PORT0_ALM1_TRIG_CTRL_MACRO__

/* macros for field trig_func_en */
/**
 * @defgroup at_apb_shub_regs_core_trig_func_en_field trig_func_en_field
 * @brief macros for field trig_func_en
 * @details trigger function.
 * @{
 */
#define SHUB_PORT0_ALM1_TRIG_CTRL__TRIG_FUNC_EN__SHIFT                        0
#define SHUB_PORT0_ALM1_TRIG_CTRL__TRIG_FUNC_EN__WIDTH                       16
#define SHUB_PORT0_ALM1_TRIG_CTRL__TRIG_FUNC_EN__MASK               0x0000ffffU
#define SHUB_PORT0_ALM1_TRIG_CTRL__TRIG_FUNC_EN__READ(src) \
                    ((uint32_t)(src)\
                    & 0x0000ffffU)
#define SHUB_PORT0_ALM1_TRIG_CTRL__TRIG_FUNC_EN__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x0000ffffU)
#define SHUB_PORT0_ALM1_TRIG_CTRL__TRIG_FUNC_EN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ffffU) | ((uint32_t)(src) &\
                    0x0000ffffU)
#define SHUB_PORT0_ALM1_TRIG_CTRL__TRIG_FUNC_EN__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x0000ffffU)))
#define SHUB_PORT0_ALM1_TRIG_CTRL__TRIG_FUNC_EN__RESET_VALUE        0x00000000U
/** @} */
#define SHUB_PORT0_ALM1_TRIG_CTRL__TYPE                                uint32_t
#define SHUB_PORT0_ALM1_TRIG_CTRL__READ                             0x0000ffffU
#define SHUB_PORT0_ALM1_TRIG_CTRL__WRITE                            0x0000ffffU
#define SHUB_PORT0_ALM1_TRIG_CTRL__PRESERVED                        0x0000ffffU
#define SHUB_PORT0_ALM1_TRIG_CTRL__RESET_VALUE                      0x00000000U

#endif /* __SHUB_PORT0_ALM1_TRIG_CTRL_MACRO__ */

/** @} end of port0_alm1_trig_ctrl */

/* macros for BlueprintGlobalNameSpace::SHUB_port0_alm0_thrhld_max_0 */
/**
 * @defgroup at_apb_shub_regs_core_port0_alm0_thrhld_max_0 port0_alm0_thrhld_max_0
 * @brief 4 bytes out of 12 used to construct reference quantities definitions.
 * @{
 */
#ifndef __SHUB_PORT0_ALM0_THRHLD_MAX_0_MACRO__
#define __SHUB_PORT0_ALM0_THRHLD_MAX_0_MACRO__

/* macros for field byte_max_00 */
/**
 * @defgroup at_apb_shub_regs_core_byte_max_00_field byte_max_00_field
 * @brief macros for field byte_max_00
 * @details 1st byte to be contructed as a ceiling reference quantity
 * @{
 */
#define SHUB_PORT0_ALM0_THRHLD_MAX_0__BYTE_MAX_00__SHIFT                      0
#define SHUB_PORT0_ALM0_THRHLD_MAX_0__BYTE_MAX_00__WIDTH                      8
#define SHUB_PORT0_ALM0_THRHLD_MAX_0__BYTE_MAX_00__MASK             0x000000ffU
#define SHUB_PORT0_ALM0_THRHLD_MAX_0__BYTE_MAX_00__READ(src) \
                    ((uint32_t)(src)\
                    & 0x000000ffU)
#define SHUB_PORT0_ALM0_THRHLD_MAX_0__BYTE_MAX_00__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x000000ffU)
#define SHUB_PORT0_ALM0_THRHLD_MAX_0__BYTE_MAX_00__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define SHUB_PORT0_ALM0_THRHLD_MAX_0__BYTE_MAX_00__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000000ffU)))
#define SHUB_PORT0_ALM0_THRHLD_MAX_0__BYTE_MAX_00__RESET_VALUE      0x000000ffU
/** @} */

/* macros for field byte_max_01 */
/**
 * @defgroup at_apb_shub_regs_core_byte_max_01_field byte_max_01_field
 * @brief macros for field byte_max_01
 * @details 2nd byte to be contructed as a ceiling reference quantity
 * @{
 */
#define SHUB_PORT0_ALM0_THRHLD_MAX_0__BYTE_MAX_01__SHIFT                      8
#define SHUB_PORT0_ALM0_THRHLD_MAX_0__BYTE_MAX_01__WIDTH                      8
#define SHUB_PORT0_ALM0_THRHLD_MAX_0__BYTE_MAX_01__MASK             0x0000ff00U
#define SHUB_PORT0_ALM0_THRHLD_MAX_0__BYTE_MAX_01__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000ff00U) >> 8)
#define SHUB_PORT0_ALM0_THRHLD_MAX_0__BYTE_MAX_01__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x0000ff00U)
#define SHUB_PORT0_ALM0_THRHLD_MAX_0__BYTE_MAX_01__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ff00U) | (((uint32_t)(src) <<\
                    8) & 0x0000ff00U)
#define SHUB_PORT0_ALM0_THRHLD_MAX_0__BYTE_MAX_01__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x0000ff00U)))
#define SHUB_PORT0_ALM0_THRHLD_MAX_0__BYTE_MAX_01__RESET_VALUE      0x000000ffU
/** @} */

/* macros for field byte_max_02 */
/**
 * @defgroup at_apb_shub_regs_core_byte_max_02_field byte_max_02_field
 * @brief macros for field byte_max_02
 * @details 3rd byte to be contructed as a ceiling reference quantity
 * @{
 */
#define SHUB_PORT0_ALM0_THRHLD_MAX_0__BYTE_MAX_02__SHIFT                     16
#define SHUB_PORT0_ALM0_THRHLD_MAX_0__BYTE_MAX_02__WIDTH                      8
#define SHUB_PORT0_ALM0_THRHLD_MAX_0__BYTE_MAX_02__MASK             0x00ff0000U
#define SHUB_PORT0_ALM0_THRHLD_MAX_0__BYTE_MAX_02__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00ff0000U) >> 16)
#define SHUB_PORT0_ALM0_THRHLD_MAX_0__BYTE_MAX_02__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00ff0000U)
#define SHUB_PORT0_ALM0_THRHLD_MAX_0__BYTE_MAX_02__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00ff0000U) | (((uint32_t)(src) <<\
                    16) & 0x00ff0000U)
#define SHUB_PORT0_ALM0_THRHLD_MAX_0__BYTE_MAX_02__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00ff0000U)))
#define SHUB_PORT0_ALM0_THRHLD_MAX_0__BYTE_MAX_02__RESET_VALUE      0x000000ffU
/** @} */

/* macros for field byte_max_03 */
/**
 * @defgroup at_apb_shub_regs_core_byte_max_03_field byte_max_03_field
 * @brief macros for field byte_max_03
 * @details 4th byte to be contructed as a ceiling reference quantity
 * @{
 */
#define SHUB_PORT0_ALM0_THRHLD_MAX_0__BYTE_MAX_03__SHIFT                     24
#define SHUB_PORT0_ALM0_THRHLD_MAX_0__BYTE_MAX_03__WIDTH                      8
#define SHUB_PORT0_ALM0_THRHLD_MAX_0__BYTE_MAX_03__MASK             0xff000000U
#define SHUB_PORT0_ALM0_THRHLD_MAX_0__BYTE_MAX_03__READ(src) \
                    (((uint32_t)(src)\
                    & 0xff000000U) >> 24)
#define SHUB_PORT0_ALM0_THRHLD_MAX_0__BYTE_MAX_03__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0xff000000U)
#define SHUB_PORT0_ALM0_THRHLD_MAX_0__BYTE_MAX_03__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xff000000U) | (((uint32_t)(src) <<\
                    24) & 0xff000000U)
#define SHUB_PORT0_ALM0_THRHLD_MAX_0__BYTE_MAX_03__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0xff000000U)))
#define SHUB_PORT0_ALM0_THRHLD_MAX_0__BYTE_MAX_03__RESET_VALUE      0x000000ffU
/** @} */
#define SHUB_PORT0_ALM0_THRHLD_MAX_0__TYPE                             uint32_t
#define SHUB_PORT0_ALM0_THRHLD_MAX_0__READ                          0xffffffffU
#define SHUB_PORT0_ALM0_THRHLD_MAX_0__WRITE                         0xffffffffU
#define SHUB_PORT0_ALM0_THRHLD_MAX_0__PRESERVED                     0xffffffffU
#define SHUB_PORT0_ALM0_THRHLD_MAX_0__RESET_VALUE                   0xffffffffU

#endif /* __SHUB_PORT0_ALM0_THRHLD_MAX_0_MACRO__ */

/** @} end of port0_alm0_thrhld_max_0 */

/* macros for BlueprintGlobalNameSpace::SHUB_port0_alm0_thrhld_max_1 */
/**
 * @defgroup at_apb_shub_regs_core_port0_alm0_thrhld_max_1 port0_alm0_thrhld_max_1
 * @brief 4 bytes out of 12 used to construct reference quantities definitions.
 * @{
 */
#ifndef __SHUB_PORT0_ALM0_THRHLD_MAX_1_MACRO__
#define __SHUB_PORT0_ALM0_THRHLD_MAX_1_MACRO__

/* macros for field byte_max_04 */
/**
 * @defgroup at_apb_shub_regs_core_byte_max_04_field byte_max_04_field
 * @brief macros for field byte_max_04
 * @details 4th byte to be contructed as a ceiling reference quantity
 * @{
 */
#define SHUB_PORT0_ALM0_THRHLD_MAX_1__BYTE_MAX_04__SHIFT                      0
#define SHUB_PORT0_ALM0_THRHLD_MAX_1__BYTE_MAX_04__WIDTH                      8
#define SHUB_PORT0_ALM0_THRHLD_MAX_1__BYTE_MAX_04__MASK             0x000000ffU
#define SHUB_PORT0_ALM0_THRHLD_MAX_1__BYTE_MAX_04__READ(src) \
                    ((uint32_t)(src)\
                    & 0x000000ffU)
#define SHUB_PORT0_ALM0_THRHLD_MAX_1__BYTE_MAX_04__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x000000ffU)
#define SHUB_PORT0_ALM0_THRHLD_MAX_1__BYTE_MAX_04__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define SHUB_PORT0_ALM0_THRHLD_MAX_1__BYTE_MAX_04__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000000ffU)))
#define SHUB_PORT0_ALM0_THRHLD_MAX_1__BYTE_MAX_04__RESET_VALUE      0x000000ffU
/** @} */

/* macros for field byte_max_05 */
/**
 * @defgroup at_apb_shub_regs_core_byte_max_05_field byte_max_05_field
 * @brief macros for field byte_max_05
 * @details 6th byte to be contructed as a ceiling reference quantity
 * @{
 */
#define SHUB_PORT0_ALM0_THRHLD_MAX_1__BYTE_MAX_05__SHIFT                      8
#define SHUB_PORT0_ALM0_THRHLD_MAX_1__BYTE_MAX_05__WIDTH                      8
#define SHUB_PORT0_ALM0_THRHLD_MAX_1__BYTE_MAX_05__MASK             0x0000ff00U
#define SHUB_PORT0_ALM0_THRHLD_MAX_1__BYTE_MAX_05__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000ff00U) >> 8)
#define SHUB_PORT0_ALM0_THRHLD_MAX_1__BYTE_MAX_05__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x0000ff00U)
#define SHUB_PORT0_ALM0_THRHLD_MAX_1__BYTE_MAX_05__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ff00U) | (((uint32_t)(src) <<\
                    8) & 0x0000ff00U)
#define SHUB_PORT0_ALM0_THRHLD_MAX_1__BYTE_MAX_05__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x0000ff00U)))
#define SHUB_PORT0_ALM0_THRHLD_MAX_1__BYTE_MAX_05__RESET_VALUE      0x000000ffU
/** @} */

/* macros for field byte_max_06 */
/**
 * @defgroup at_apb_shub_regs_core_byte_max_06_field byte_max_06_field
 * @brief macros for field byte_max_06
 * @details 7th byte to be contructed as a ceiling reference quantity
 * @{
 */
#define SHUB_PORT0_ALM0_THRHLD_MAX_1__BYTE_MAX_06__SHIFT                     16
#define SHUB_PORT0_ALM0_THRHLD_MAX_1__BYTE_MAX_06__WIDTH                      8
#define SHUB_PORT0_ALM0_THRHLD_MAX_1__BYTE_MAX_06__MASK             0x00ff0000U
#define SHUB_PORT0_ALM0_THRHLD_MAX_1__BYTE_MAX_06__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00ff0000U) >> 16)
#define SHUB_PORT0_ALM0_THRHLD_MAX_1__BYTE_MAX_06__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00ff0000U)
#define SHUB_PORT0_ALM0_THRHLD_MAX_1__BYTE_MAX_06__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00ff0000U) | (((uint32_t)(src) <<\
                    16) & 0x00ff0000U)
#define SHUB_PORT0_ALM0_THRHLD_MAX_1__BYTE_MAX_06__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00ff0000U)))
#define SHUB_PORT0_ALM0_THRHLD_MAX_1__BYTE_MAX_06__RESET_VALUE      0x000000ffU
/** @} */

/* macros for field byte_max_07 */
/**
 * @defgroup at_apb_shub_regs_core_byte_max_07_field byte_max_07_field
 * @brief macros for field byte_max_07
 * @details 8th byte to be contructed as a ceiling reference quantity
 * @{
 */
#define SHUB_PORT0_ALM0_THRHLD_MAX_1__BYTE_MAX_07__SHIFT                     24
#define SHUB_PORT0_ALM0_THRHLD_MAX_1__BYTE_MAX_07__WIDTH                      8
#define SHUB_PORT0_ALM0_THRHLD_MAX_1__BYTE_MAX_07__MASK             0xff000000U
#define SHUB_PORT0_ALM0_THRHLD_MAX_1__BYTE_MAX_07__READ(src) \
                    (((uint32_t)(src)\
                    & 0xff000000U) >> 24)
#define SHUB_PORT0_ALM0_THRHLD_MAX_1__BYTE_MAX_07__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0xff000000U)
#define SHUB_PORT0_ALM0_THRHLD_MAX_1__BYTE_MAX_07__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xff000000U) | (((uint32_t)(src) <<\
                    24) & 0xff000000U)
#define SHUB_PORT0_ALM0_THRHLD_MAX_1__BYTE_MAX_07__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0xff000000U)))
#define SHUB_PORT0_ALM0_THRHLD_MAX_1__BYTE_MAX_07__RESET_VALUE      0x000000ffU
/** @} */
#define SHUB_PORT0_ALM0_THRHLD_MAX_1__TYPE                             uint32_t
#define SHUB_PORT0_ALM0_THRHLD_MAX_1__READ                          0xffffffffU
#define SHUB_PORT0_ALM0_THRHLD_MAX_1__WRITE                         0xffffffffU
#define SHUB_PORT0_ALM0_THRHLD_MAX_1__PRESERVED                     0xffffffffU
#define SHUB_PORT0_ALM0_THRHLD_MAX_1__RESET_VALUE                   0xffffffffU

#endif /* __SHUB_PORT0_ALM0_THRHLD_MAX_1_MACRO__ */

/** @} end of port0_alm0_thrhld_max_1 */

/* macros for BlueprintGlobalNameSpace::SHUB_port0_alm0_thrhld_max_2 */
/**
 * @defgroup at_apb_shub_regs_core_port0_alm0_thrhld_max_2 port0_alm0_thrhld_max_2
 * @brief 4 bytes out of 12 used to construct reference quantities definitions.
 * @{
 */
#ifndef __SHUB_PORT0_ALM0_THRHLD_MAX_2_MACRO__
#define __SHUB_PORT0_ALM0_THRHLD_MAX_2_MACRO__

/* macros for field byte_max_08 */
/**
 * @defgroup at_apb_shub_regs_core_byte_max_08_field byte_max_08_field
 * @brief macros for field byte_max_08
 * @details 9th byte to be contructed as a ceiling reference quantity
 * @{
 */
#define SHUB_PORT0_ALM0_THRHLD_MAX_2__BYTE_MAX_08__SHIFT                      0
#define SHUB_PORT0_ALM0_THRHLD_MAX_2__BYTE_MAX_08__WIDTH                      8
#define SHUB_PORT0_ALM0_THRHLD_MAX_2__BYTE_MAX_08__MASK             0x000000ffU
#define SHUB_PORT0_ALM0_THRHLD_MAX_2__BYTE_MAX_08__READ(src) \
                    ((uint32_t)(src)\
                    & 0x000000ffU)
#define SHUB_PORT0_ALM0_THRHLD_MAX_2__BYTE_MAX_08__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x000000ffU)
#define SHUB_PORT0_ALM0_THRHLD_MAX_2__BYTE_MAX_08__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define SHUB_PORT0_ALM0_THRHLD_MAX_2__BYTE_MAX_08__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000000ffU)))
#define SHUB_PORT0_ALM0_THRHLD_MAX_2__BYTE_MAX_08__RESET_VALUE      0x000000ffU
/** @} */

/* macros for field byte_max_09 */
/**
 * @defgroup at_apb_shub_regs_core_byte_max_09_field byte_max_09_field
 * @brief macros for field byte_max_09
 * @details 10th byte to be contructed as a ceiling reference quantity
 * @{
 */
#define SHUB_PORT0_ALM0_THRHLD_MAX_2__BYTE_MAX_09__SHIFT                      8
#define SHUB_PORT0_ALM0_THRHLD_MAX_2__BYTE_MAX_09__WIDTH                      8
#define SHUB_PORT0_ALM0_THRHLD_MAX_2__BYTE_MAX_09__MASK             0x0000ff00U
#define SHUB_PORT0_ALM0_THRHLD_MAX_2__BYTE_MAX_09__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000ff00U) >> 8)
#define SHUB_PORT0_ALM0_THRHLD_MAX_2__BYTE_MAX_09__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x0000ff00U)
#define SHUB_PORT0_ALM0_THRHLD_MAX_2__BYTE_MAX_09__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ff00U) | (((uint32_t)(src) <<\
                    8) & 0x0000ff00U)
#define SHUB_PORT0_ALM0_THRHLD_MAX_2__BYTE_MAX_09__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x0000ff00U)))
#define SHUB_PORT0_ALM0_THRHLD_MAX_2__BYTE_MAX_09__RESET_VALUE      0x000000ffU
/** @} */

/* macros for field byte_max_10 */
/**
 * @defgroup at_apb_shub_regs_core_byte_max_10_field byte_max_10_field
 * @brief macros for field byte_max_10
 * @details 11th byte to be contructed as a ceiling reference quantity
 * @{
 */
#define SHUB_PORT0_ALM0_THRHLD_MAX_2__BYTE_MAX_10__SHIFT                     16
#define SHUB_PORT0_ALM0_THRHLD_MAX_2__BYTE_MAX_10__WIDTH                      8
#define SHUB_PORT0_ALM0_THRHLD_MAX_2__BYTE_MAX_10__MASK             0x00ff0000U
#define SHUB_PORT0_ALM0_THRHLD_MAX_2__BYTE_MAX_10__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00ff0000U) >> 16)
#define SHUB_PORT0_ALM0_THRHLD_MAX_2__BYTE_MAX_10__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00ff0000U)
#define SHUB_PORT0_ALM0_THRHLD_MAX_2__BYTE_MAX_10__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00ff0000U) | (((uint32_t)(src) <<\
                    16) & 0x00ff0000U)
#define SHUB_PORT0_ALM0_THRHLD_MAX_2__BYTE_MAX_10__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00ff0000U)))
#define SHUB_PORT0_ALM0_THRHLD_MAX_2__BYTE_MAX_10__RESET_VALUE      0x000000ffU
/** @} */

/* macros for field byte_max_11 */
/**
 * @defgroup at_apb_shub_regs_core_byte_max_11_field byte_max_11_field
 * @brief macros for field byte_max_11
 * @details 12th byte to be contructed as a ceiling reference quantity
 * @{
 */
#define SHUB_PORT0_ALM0_THRHLD_MAX_2__BYTE_MAX_11__SHIFT                     24
#define SHUB_PORT0_ALM0_THRHLD_MAX_2__BYTE_MAX_11__WIDTH                      8
#define SHUB_PORT0_ALM0_THRHLD_MAX_2__BYTE_MAX_11__MASK             0xff000000U
#define SHUB_PORT0_ALM0_THRHLD_MAX_2__BYTE_MAX_11__READ(src) \
                    (((uint32_t)(src)\
                    & 0xff000000U) >> 24)
#define SHUB_PORT0_ALM0_THRHLD_MAX_2__BYTE_MAX_11__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0xff000000U)
#define SHUB_PORT0_ALM0_THRHLD_MAX_2__BYTE_MAX_11__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xff000000U) | (((uint32_t)(src) <<\
                    24) & 0xff000000U)
#define SHUB_PORT0_ALM0_THRHLD_MAX_2__BYTE_MAX_11__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0xff000000U)))
#define SHUB_PORT0_ALM0_THRHLD_MAX_2__BYTE_MAX_11__RESET_VALUE      0x000000ffU
/** @} */
#define SHUB_PORT0_ALM0_THRHLD_MAX_2__TYPE                             uint32_t
#define SHUB_PORT0_ALM0_THRHLD_MAX_2__READ                          0xffffffffU
#define SHUB_PORT0_ALM0_THRHLD_MAX_2__WRITE                         0xffffffffU
#define SHUB_PORT0_ALM0_THRHLD_MAX_2__PRESERVED                     0xffffffffU
#define SHUB_PORT0_ALM0_THRHLD_MAX_2__RESET_VALUE                   0xffffffffU

#endif /* __SHUB_PORT0_ALM0_THRHLD_MAX_2_MACRO__ */

/** @} end of port0_alm0_thrhld_max_2 */

/* macros for BlueprintGlobalNameSpace::SHUB_port0_alm0_thrhld_min_0 */
/**
 * @defgroup at_apb_shub_regs_core_port0_alm0_thrhld_min_0 port0_alm0_thrhld_min_0
 * @brief 4 bytes out of 12 used to construct reference quantities definitions.
 * @{
 */
#ifndef __SHUB_PORT0_ALM0_THRHLD_MIN_0_MACRO__
#define __SHUB_PORT0_ALM0_THRHLD_MIN_0_MACRO__

/* macros for field byte_min_00 */
/**
 * @defgroup at_apb_shub_regs_core_byte_min_00_field byte_min_00_field
 * @brief macros for field byte_min_00
 * @details 1st byte to be contructed as a floor reference quantity
 * @{
 */
#define SHUB_PORT0_ALM0_THRHLD_MIN_0__BYTE_MIN_00__SHIFT                      0
#define SHUB_PORT0_ALM0_THRHLD_MIN_0__BYTE_MIN_00__WIDTH                      8
#define SHUB_PORT0_ALM0_THRHLD_MIN_0__BYTE_MIN_00__MASK             0x000000ffU
#define SHUB_PORT0_ALM0_THRHLD_MIN_0__BYTE_MIN_00__READ(src) \
                    ((uint32_t)(src)\
                    & 0x000000ffU)
#define SHUB_PORT0_ALM0_THRHLD_MIN_0__BYTE_MIN_00__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x000000ffU)
#define SHUB_PORT0_ALM0_THRHLD_MIN_0__BYTE_MIN_00__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define SHUB_PORT0_ALM0_THRHLD_MIN_0__BYTE_MIN_00__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000000ffU)))
#define SHUB_PORT0_ALM0_THRHLD_MIN_0__BYTE_MIN_00__RESET_VALUE      0x00000000U
/** @} */

/* macros for field byte_min_01 */
/**
 * @defgroup at_apb_shub_regs_core_byte_min_01_field byte_min_01_field
 * @brief macros for field byte_min_01
 * @details 2nd byte to be contructed as a floor reference quantity
 * @{
 */
#define SHUB_PORT0_ALM0_THRHLD_MIN_0__BYTE_MIN_01__SHIFT                      8
#define SHUB_PORT0_ALM0_THRHLD_MIN_0__BYTE_MIN_01__WIDTH                      8
#define SHUB_PORT0_ALM0_THRHLD_MIN_0__BYTE_MIN_01__MASK             0x0000ff00U
#define SHUB_PORT0_ALM0_THRHLD_MIN_0__BYTE_MIN_01__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000ff00U) >> 8)
#define SHUB_PORT0_ALM0_THRHLD_MIN_0__BYTE_MIN_01__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x0000ff00U)
#define SHUB_PORT0_ALM0_THRHLD_MIN_0__BYTE_MIN_01__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ff00U) | (((uint32_t)(src) <<\
                    8) & 0x0000ff00U)
#define SHUB_PORT0_ALM0_THRHLD_MIN_0__BYTE_MIN_01__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x0000ff00U)))
#define SHUB_PORT0_ALM0_THRHLD_MIN_0__BYTE_MIN_01__RESET_VALUE      0x00000000U
/** @} */

/* macros for field byte_min_02 */
/**
 * @defgroup at_apb_shub_regs_core_byte_min_02_field byte_min_02_field
 * @brief macros for field byte_min_02
 * @details 3rd byte to be contructed as a floor reference quantity
 * @{
 */
#define SHUB_PORT0_ALM0_THRHLD_MIN_0__BYTE_MIN_02__SHIFT                     16
#define SHUB_PORT0_ALM0_THRHLD_MIN_0__BYTE_MIN_02__WIDTH                      8
#define SHUB_PORT0_ALM0_THRHLD_MIN_0__BYTE_MIN_02__MASK             0x00ff0000U
#define SHUB_PORT0_ALM0_THRHLD_MIN_0__BYTE_MIN_02__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00ff0000U) >> 16)
#define SHUB_PORT0_ALM0_THRHLD_MIN_0__BYTE_MIN_02__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00ff0000U)
#define SHUB_PORT0_ALM0_THRHLD_MIN_0__BYTE_MIN_02__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00ff0000U) | (((uint32_t)(src) <<\
                    16) & 0x00ff0000U)
#define SHUB_PORT0_ALM0_THRHLD_MIN_0__BYTE_MIN_02__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00ff0000U)))
#define SHUB_PORT0_ALM0_THRHLD_MIN_0__BYTE_MIN_02__RESET_VALUE      0x00000000U
/** @} */

/* macros for field byte_min_03 */
/**
 * @defgroup at_apb_shub_regs_core_byte_min_03_field byte_min_03_field
 * @brief macros for field byte_min_03
 * @details 4th byte to be contructed as a floor reference quantity
 * @{
 */
#define SHUB_PORT0_ALM0_THRHLD_MIN_0__BYTE_MIN_03__SHIFT                     24
#define SHUB_PORT0_ALM0_THRHLD_MIN_0__BYTE_MIN_03__WIDTH                      8
#define SHUB_PORT0_ALM0_THRHLD_MIN_0__BYTE_MIN_03__MASK             0xff000000U
#define SHUB_PORT0_ALM0_THRHLD_MIN_0__BYTE_MIN_03__READ(src) \
                    (((uint32_t)(src)\
                    & 0xff000000U) >> 24)
#define SHUB_PORT0_ALM0_THRHLD_MIN_0__BYTE_MIN_03__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0xff000000U)
#define SHUB_PORT0_ALM0_THRHLD_MIN_0__BYTE_MIN_03__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xff000000U) | (((uint32_t)(src) <<\
                    24) & 0xff000000U)
#define SHUB_PORT0_ALM0_THRHLD_MIN_0__BYTE_MIN_03__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0xff000000U)))
#define SHUB_PORT0_ALM0_THRHLD_MIN_0__BYTE_MIN_03__RESET_VALUE      0x00000000U
/** @} */
#define SHUB_PORT0_ALM0_THRHLD_MIN_0__TYPE                             uint32_t
#define SHUB_PORT0_ALM0_THRHLD_MIN_0__READ                          0xffffffffU
#define SHUB_PORT0_ALM0_THRHLD_MIN_0__WRITE                         0xffffffffU
#define SHUB_PORT0_ALM0_THRHLD_MIN_0__PRESERVED                     0xffffffffU
#define SHUB_PORT0_ALM0_THRHLD_MIN_0__RESET_VALUE                   0x00000000U

#endif /* __SHUB_PORT0_ALM0_THRHLD_MIN_0_MACRO__ */

/** @} end of port0_alm0_thrhld_min_0 */

/* macros for BlueprintGlobalNameSpace::SHUB_port0_alm0_thrhld_min_1 */
/**
 * @defgroup at_apb_shub_regs_core_port0_alm0_thrhld_min_1 port0_alm0_thrhld_min_1
 * @brief threshold of sensor results definitions.
 * @{
 */
#ifndef __SHUB_PORT0_ALM0_THRHLD_MIN_1_MACRO__
#define __SHUB_PORT0_ALM0_THRHLD_MIN_1_MACRO__

/* macros for field byte_min_04 */
/**
 * @defgroup at_apb_shub_regs_core_byte_min_04_field byte_min_04_field
 * @brief macros for field byte_min_04
 * @details 4th byte to be contructed as a floor reference quantity
 * @{
 */
#define SHUB_PORT0_ALM0_THRHLD_MIN_1__BYTE_MIN_04__SHIFT                      0
#define SHUB_PORT0_ALM0_THRHLD_MIN_1__BYTE_MIN_04__WIDTH                      8
#define SHUB_PORT0_ALM0_THRHLD_MIN_1__BYTE_MIN_04__MASK             0x000000ffU
#define SHUB_PORT0_ALM0_THRHLD_MIN_1__BYTE_MIN_04__READ(src) \
                    ((uint32_t)(src)\
                    & 0x000000ffU)
#define SHUB_PORT0_ALM0_THRHLD_MIN_1__BYTE_MIN_04__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x000000ffU)
#define SHUB_PORT0_ALM0_THRHLD_MIN_1__BYTE_MIN_04__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define SHUB_PORT0_ALM0_THRHLD_MIN_1__BYTE_MIN_04__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000000ffU)))
#define SHUB_PORT0_ALM0_THRHLD_MIN_1__BYTE_MIN_04__RESET_VALUE      0x00000000U
/** @} */

/* macros for field byte_min_05 */
/**
 * @defgroup at_apb_shub_regs_core_byte_min_05_field byte_min_05_field
 * @brief macros for field byte_min_05
 * @details 6th byte to be contructed as a floor reference quantity
 * @{
 */
#define SHUB_PORT0_ALM0_THRHLD_MIN_1__BYTE_MIN_05__SHIFT                      8
#define SHUB_PORT0_ALM0_THRHLD_MIN_1__BYTE_MIN_05__WIDTH                      8
#define SHUB_PORT0_ALM0_THRHLD_MIN_1__BYTE_MIN_05__MASK             0x0000ff00U
#define SHUB_PORT0_ALM0_THRHLD_MIN_1__BYTE_MIN_05__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000ff00U) >> 8)
#define SHUB_PORT0_ALM0_THRHLD_MIN_1__BYTE_MIN_05__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x0000ff00U)
#define SHUB_PORT0_ALM0_THRHLD_MIN_1__BYTE_MIN_05__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ff00U) | (((uint32_t)(src) <<\
                    8) & 0x0000ff00U)
#define SHUB_PORT0_ALM0_THRHLD_MIN_1__BYTE_MIN_05__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x0000ff00U)))
#define SHUB_PORT0_ALM0_THRHLD_MIN_1__BYTE_MIN_05__RESET_VALUE      0x00000000U
/** @} */

/* macros for field byte_min_06 */
/**
 * @defgroup at_apb_shub_regs_core_byte_min_06_field byte_min_06_field
 * @brief macros for field byte_min_06
 * @details 7th byte to be contructed as a floor reference quantity
 * @{
 */
#define SHUB_PORT0_ALM0_THRHLD_MIN_1__BYTE_MIN_06__SHIFT                     16
#define SHUB_PORT0_ALM0_THRHLD_MIN_1__BYTE_MIN_06__WIDTH                      8
#define SHUB_PORT0_ALM0_THRHLD_MIN_1__BYTE_MIN_06__MASK             0x00ff0000U
#define SHUB_PORT0_ALM0_THRHLD_MIN_1__BYTE_MIN_06__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00ff0000U) >> 16)
#define SHUB_PORT0_ALM0_THRHLD_MIN_1__BYTE_MIN_06__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00ff0000U)
#define SHUB_PORT0_ALM0_THRHLD_MIN_1__BYTE_MIN_06__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00ff0000U) | (((uint32_t)(src) <<\
                    16) & 0x00ff0000U)
#define SHUB_PORT0_ALM0_THRHLD_MIN_1__BYTE_MIN_06__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00ff0000U)))
#define SHUB_PORT0_ALM0_THRHLD_MIN_1__BYTE_MIN_06__RESET_VALUE      0x00000000U
/** @} */

/* macros for field byte_min_07 */
/**
 * @defgroup at_apb_shub_regs_core_byte_min_07_field byte_min_07_field
 * @brief macros for field byte_min_07
 * @details 8th byte to be contructed as a floor reference quantity
 * @{
 */
#define SHUB_PORT0_ALM0_THRHLD_MIN_1__BYTE_MIN_07__SHIFT                     24
#define SHUB_PORT0_ALM0_THRHLD_MIN_1__BYTE_MIN_07__WIDTH                      8
#define SHUB_PORT0_ALM0_THRHLD_MIN_1__BYTE_MIN_07__MASK             0xff000000U
#define SHUB_PORT0_ALM0_THRHLD_MIN_1__BYTE_MIN_07__READ(src) \
                    (((uint32_t)(src)\
                    & 0xff000000U) >> 24)
#define SHUB_PORT0_ALM0_THRHLD_MIN_1__BYTE_MIN_07__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0xff000000U)
#define SHUB_PORT0_ALM0_THRHLD_MIN_1__BYTE_MIN_07__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xff000000U) | (((uint32_t)(src) <<\
                    24) & 0xff000000U)
#define SHUB_PORT0_ALM0_THRHLD_MIN_1__BYTE_MIN_07__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0xff000000U)))
#define SHUB_PORT0_ALM0_THRHLD_MIN_1__BYTE_MIN_07__RESET_VALUE      0x00000000U
/** @} */
#define SHUB_PORT0_ALM0_THRHLD_MIN_1__TYPE                             uint32_t
#define SHUB_PORT0_ALM0_THRHLD_MIN_1__READ                          0xffffffffU
#define SHUB_PORT0_ALM0_THRHLD_MIN_1__WRITE                         0xffffffffU
#define SHUB_PORT0_ALM0_THRHLD_MIN_1__PRESERVED                     0xffffffffU
#define SHUB_PORT0_ALM0_THRHLD_MIN_1__RESET_VALUE                   0x00000000U

#endif /* __SHUB_PORT0_ALM0_THRHLD_MIN_1_MACRO__ */

/** @} end of port0_alm0_thrhld_min_1 */

/* macros for BlueprintGlobalNameSpace::SHUB_port0_alm0_thrhld_min_2 */
/**
 * @defgroup at_apb_shub_regs_core_port0_alm0_thrhld_min_2 port0_alm0_thrhld_min_2
 * @brief threshold of sensor results definitions.
 * @{
 */
#ifndef __SHUB_PORT0_ALM0_THRHLD_MIN_2_MACRO__
#define __SHUB_PORT0_ALM0_THRHLD_MIN_2_MACRO__

/* macros for field byte_min_08 */
/**
 * @defgroup at_apb_shub_regs_core_byte_min_08_field byte_min_08_field
 * @brief macros for field byte_min_08
 * @details 9th byte to be contructed as a floor reference quantity
 * @{
 */
#define SHUB_PORT0_ALM0_THRHLD_MIN_2__BYTE_MIN_08__SHIFT                      0
#define SHUB_PORT0_ALM0_THRHLD_MIN_2__BYTE_MIN_08__WIDTH                      8
#define SHUB_PORT0_ALM0_THRHLD_MIN_2__BYTE_MIN_08__MASK             0x000000ffU
#define SHUB_PORT0_ALM0_THRHLD_MIN_2__BYTE_MIN_08__READ(src) \
                    ((uint32_t)(src)\
                    & 0x000000ffU)
#define SHUB_PORT0_ALM0_THRHLD_MIN_2__BYTE_MIN_08__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x000000ffU)
#define SHUB_PORT0_ALM0_THRHLD_MIN_2__BYTE_MIN_08__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define SHUB_PORT0_ALM0_THRHLD_MIN_2__BYTE_MIN_08__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000000ffU)))
#define SHUB_PORT0_ALM0_THRHLD_MIN_2__BYTE_MIN_08__RESET_VALUE      0x00000000U
/** @} */

/* macros for field byte_min_09 */
/**
 * @defgroup at_apb_shub_regs_core_byte_min_09_field byte_min_09_field
 * @brief macros for field byte_min_09
 * @details 10th byte to be contructed as a floor reference quantity
 * @{
 */
#define SHUB_PORT0_ALM0_THRHLD_MIN_2__BYTE_MIN_09__SHIFT                      8
#define SHUB_PORT0_ALM0_THRHLD_MIN_2__BYTE_MIN_09__WIDTH                      8
#define SHUB_PORT0_ALM0_THRHLD_MIN_2__BYTE_MIN_09__MASK             0x0000ff00U
#define SHUB_PORT0_ALM0_THRHLD_MIN_2__BYTE_MIN_09__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000ff00U) >> 8)
#define SHUB_PORT0_ALM0_THRHLD_MIN_2__BYTE_MIN_09__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x0000ff00U)
#define SHUB_PORT0_ALM0_THRHLD_MIN_2__BYTE_MIN_09__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ff00U) | (((uint32_t)(src) <<\
                    8) & 0x0000ff00U)
#define SHUB_PORT0_ALM0_THRHLD_MIN_2__BYTE_MIN_09__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x0000ff00U)))
#define SHUB_PORT0_ALM0_THRHLD_MIN_2__BYTE_MIN_09__RESET_VALUE      0x00000000U
/** @} */

/* macros for field byte_min_10 */
/**
 * @defgroup at_apb_shub_regs_core_byte_min_10_field byte_min_10_field
 * @brief macros for field byte_min_10
 * @details 11th byte to be contructed as a floor reference quantity
 * @{
 */
#define SHUB_PORT0_ALM0_THRHLD_MIN_2__BYTE_MIN_10__SHIFT                     16
#define SHUB_PORT0_ALM0_THRHLD_MIN_2__BYTE_MIN_10__WIDTH                      8
#define SHUB_PORT0_ALM0_THRHLD_MIN_2__BYTE_MIN_10__MASK             0x00ff0000U
#define SHUB_PORT0_ALM0_THRHLD_MIN_2__BYTE_MIN_10__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00ff0000U) >> 16)
#define SHUB_PORT0_ALM0_THRHLD_MIN_2__BYTE_MIN_10__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00ff0000U)
#define SHUB_PORT0_ALM0_THRHLD_MIN_2__BYTE_MIN_10__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00ff0000U) | (((uint32_t)(src) <<\
                    16) & 0x00ff0000U)
#define SHUB_PORT0_ALM0_THRHLD_MIN_2__BYTE_MIN_10__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00ff0000U)))
#define SHUB_PORT0_ALM0_THRHLD_MIN_2__BYTE_MIN_10__RESET_VALUE      0x00000000U
/** @} */

/* macros for field byte_min_11 */
/**
 * @defgroup at_apb_shub_regs_core_byte_min_11_field byte_min_11_field
 * @brief macros for field byte_min_11
 * @details 12th byte to be contructed as a floor reference quantity
 * @{
 */
#define SHUB_PORT0_ALM0_THRHLD_MIN_2__BYTE_MIN_11__SHIFT                     24
#define SHUB_PORT0_ALM0_THRHLD_MIN_2__BYTE_MIN_11__WIDTH                      8
#define SHUB_PORT0_ALM0_THRHLD_MIN_2__BYTE_MIN_11__MASK             0xff000000U
#define SHUB_PORT0_ALM0_THRHLD_MIN_2__BYTE_MIN_11__READ(src) \
                    (((uint32_t)(src)\
                    & 0xff000000U) >> 24)
#define SHUB_PORT0_ALM0_THRHLD_MIN_2__BYTE_MIN_11__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0xff000000U)
#define SHUB_PORT0_ALM0_THRHLD_MIN_2__BYTE_MIN_11__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xff000000U) | (((uint32_t)(src) <<\
                    24) & 0xff000000U)
#define SHUB_PORT0_ALM0_THRHLD_MIN_2__BYTE_MIN_11__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0xff000000U)))
#define SHUB_PORT0_ALM0_THRHLD_MIN_2__BYTE_MIN_11__RESET_VALUE      0x00000000U
/** @} */
#define SHUB_PORT0_ALM0_THRHLD_MIN_2__TYPE                             uint32_t
#define SHUB_PORT0_ALM0_THRHLD_MIN_2__READ                          0xffffffffU
#define SHUB_PORT0_ALM0_THRHLD_MIN_2__WRITE                         0xffffffffU
#define SHUB_PORT0_ALM0_THRHLD_MIN_2__PRESERVED                     0xffffffffU
#define SHUB_PORT0_ALM0_THRHLD_MIN_2__RESET_VALUE                   0x00000000U

#endif /* __SHUB_PORT0_ALM0_THRHLD_MIN_2_MACRO__ */

/** @} end of port0_alm0_thrhld_min_2 */

/* macros for BlueprintGlobalNameSpace::SHUB_port0_alm1_thrhld_max_0 */
/**
 * @defgroup at_apb_shub_regs_core_port0_alm1_thrhld_max_0 port0_alm1_thrhld_max_0
 * @brief threshold of sensor results definitions.
 * @{
 */
#ifndef __SHUB_PORT0_ALM1_THRHLD_MAX_0_MACRO__
#define __SHUB_PORT0_ALM1_THRHLD_MAX_0_MACRO__

/* macros for field byte_max_00 */
/**
 * @defgroup at_apb_shub_regs_core_byte_max_00_field byte_max_00_field
 * @brief macros for field byte_max_00
 * @details 1st byte to be contructed as a ceiling reference quantity
 * @{
 */
#define SHUB_PORT0_ALM1_THRHLD_MAX_0__BYTE_MAX_00__SHIFT                      0
#define SHUB_PORT0_ALM1_THRHLD_MAX_0__BYTE_MAX_00__WIDTH                      8
#define SHUB_PORT0_ALM1_THRHLD_MAX_0__BYTE_MAX_00__MASK             0x000000ffU
#define SHUB_PORT0_ALM1_THRHLD_MAX_0__BYTE_MAX_00__READ(src) \
                    ((uint32_t)(src)\
                    & 0x000000ffU)
#define SHUB_PORT0_ALM1_THRHLD_MAX_0__BYTE_MAX_00__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x000000ffU)
#define SHUB_PORT0_ALM1_THRHLD_MAX_0__BYTE_MAX_00__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define SHUB_PORT0_ALM1_THRHLD_MAX_0__BYTE_MAX_00__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000000ffU)))
#define SHUB_PORT0_ALM1_THRHLD_MAX_0__BYTE_MAX_00__RESET_VALUE      0x000000ffU
/** @} */

/* macros for field byte_max_01 */
/**
 * @defgroup at_apb_shub_regs_core_byte_max_01_field byte_max_01_field
 * @brief macros for field byte_max_01
 * @details 2nd byte to be contructed as a ceiling reference quantity
 * @{
 */
#define SHUB_PORT0_ALM1_THRHLD_MAX_0__BYTE_MAX_01__SHIFT                      8
#define SHUB_PORT0_ALM1_THRHLD_MAX_0__BYTE_MAX_01__WIDTH                      8
#define SHUB_PORT0_ALM1_THRHLD_MAX_0__BYTE_MAX_01__MASK             0x0000ff00U
#define SHUB_PORT0_ALM1_THRHLD_MAX_0__BYTE_MAX_01__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000ff00U) >> 8)
#define SHUB_PORT0_ALM1_THRHLD_MAX_0__BYTE_MAX_01__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x0000ff00U)
#define SHUB_PORT0_ALM1_THRHLD_MAX_0__BYTE_MAX_01__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ff00U) | (((uint32_t)(src) <<\
                    8) & 0x0000ff00U)
#define SHUB_PORT0_ALM1_THRHLD_MAX_0__BYTE_MAX_01__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x0000ff00U)))
#define SHUB_PORT0_ALM1_THRHLD_MAX_0__BYTE_MAX_01__RESET_VALUE      0x000000ffU
/** @} */

/* macros for field byte_max_02 */
/**
 * @defgroup at_apb_shub_regs_core_byte_max_02_field byte_max_02_field
 * @brief macros for field byte_max_02
 * @details 3rd byte to be contructed as a ceiling reference quantity
 * @{
 */
#define SHUB_PORT0_ALM1_THRHLD_MAX_0__BYTE_MAX_02__SHIFT                     16
#define SHUB_PORT0_ALM1_THRHLD_MAX_0__BYTE_MAX_02__WIDTH                      8
#define SHUB_PORT0_ALM1_THRHLD_MAX_0__BYTE_MAX_02__MASK             0x00ff0000U
#define SHUB_PORT0_ALM1_THRHLD_MAX_0__BYTE_MAX_02__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00ff0000U) >> 16)
#define SHUB_PORT0_ALM1_THRHLD_MAX_0__BYTE_MAX_02__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00ff0000U)
#define SHUB_PORT0_ALM1_THRHLD_MAX_0__BYTE_MAX_02__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00ff0000U) | (((uint32_t)(src) <<\
                    16) & 0x00ff0000U)
#define SHUB_PORT0_ALM1_THRHLD_MAX_0__BYTE_MAX_02__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00ff0000U)))
#define SHUB_PORT0_ALM1_THRHLD_MAX_0__BYTE_MAX_02__RESET_VALUE      0x000000ffU
/** @} */

/* macros for field byte_max_03 */
/**
 * @defgroup at_apb_shub_regs_core_byte_max_03_field byte_max_03_field
 * @brief macros for field byte_max_03
 * @details 4th byte to be contructed as a ceiling reference quantity
 * @{
 */
#define SHUB_PORT0_ALM1_THRHLD_MAX_0__BYTE_MAX_03__SHIFT                     24
#define SHUB_PORT0_ALM1_THRHLD_MAX_0__BYTE_MAX_03__WIDTH                      8
#define SHUB_PORT0_ALM1_THRHLD_MAX_0__BYTE_MAX_03__MASK             0xff000000U
#define SHUB_PORT0_ALM1_THRHLD_MAX_0__BYTE_MAX_03__READ(src) \
                    (((uint32_t)(src)\
                    & 0xff000000U) >> 24)
#define SHUB_PORT0_ALM1_THRHLD_MAX_0__BYTE_MAX_03__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0xff000000U)
#define SHUB_PORT0_ALM1_THRHLD_MAX_0__BYTE_MAX_03__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xff000000U) | (((uint32_t)(src) <<\
                    24) & 0xff000000U)
#define SHUB_PORT0_ALM1_THRHLD_MAX_0__BYTE_MAX_03__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0xff000000U)))
#define SHUB_PORT0_ALM1_THRHLD_MAX_0__BYTE_MAX_03__RESET_VALUE      0x000000ffU
/** @} */
#define SHUB_PORT0_ALM1_THRHLD_MAX_0__TYPE                             uint32_t
#define SHUB_PORT0_ALM1_THRHLD_MAX_0__READ                          0xffffffffU
#define SHUB_PORT0_ALM1_THRHLD_MAX_0__WRITE                         0xffffffffU
#define SHUB_PORT0_ALM1_THRHLD_MAX_0__PRESERVED                     0xffffffffU
#define SHUB_PORT0_ALM1_THRHLD_MAX_0__RESET_VALUE                   0xffffffffU

#endif /* __SHUB_PORT0_ALM1_THRHLD_MAX_0_MACRO__ */

/** @} end of port0_alm1_thrhld_max_0 */

/* macros for BlueprintGlobalNameSpace::SHUB_port0_alm1_thrhld_max_1 */
/**
 * @defgroup at_apb_shub_regs_core_port0_alm1_thrhld_max_1 port0_alm1_thrhld_max_1
 * @brief threshold of sensor results definitions.
 * @{
 */
#ifndef __SHUB_PORT0_ALM1_THRHLD_MAX_1_MACRO__
#define __SHUB_PORT0_ALM1_THRHLD_MAX_1_MACRO__

/* macros for field byte_max_04 */
/**
 * @defgroup at_apb_shub_regs_core_byte_max_04_field byte_max_04_field
 * @brief macros for field byte_max_04
 * @details 4th byte to be contructed as a ceiling reference quantity
 * @{
 */
#define SHUB_PORT0_ALM1_THRHLD_MAX_1__BYTE_MAX_04__SHIFT                      0
#define SHUB_PORT0_ALM1_THRHLD_MAX_1__BYTE_MAX_04__WIDTH                      8
#define SHUB_PORT0_ALM1_THRHLD_MAX_1__BYTE_MAX_04__MASK             0x000000ffU
#define SHUB_PORT0_ALM1_THRHLD_MAX_1__BYTE_MAX_04__READ(src) \
                    ((uint32_t)(src)\
                    & 0x000000ffU)
#define SHUB_PORT0_ALM1_THRHLD_MAX_1__BYTE_MAX_04__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x000000ffU)
#define SHUB_PORT0_ALM1_THRHLD_MAX_1__BYTE_MAX_04__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define SHUB_PORT0_ALM1_THRHLD_MAX_1__BYTE_MAX_04__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000000ffU)))
#define SHUB_PORT0_ALM1_THRHLD_MAX_1__BYTE_MAX_04__RESET_VALUE      0x000000ffU
/** @} */

/* macros for field byte_max_05 */
/**
 * @defgroup at_apb_shub_regs_core_byte_max_05_field byte_max_05_field
 * @brief macros for field byte_max_05
 * @details 6th byte to be contructed as a ceiling reference quantity
 * @{
 */
#define SHUB_PORT0_ALM1_THRHLD_MAX_1__BYTE_MAX_05__SHIFT                      8
#define SHUB_PORT0_ALM1_THRHLD_MAX_1__BYTE_MAX_05__WIDTH                      8
#define SHUB_PORT0_ALM1_THRHLD_MAX_1__BYTE_MAX_05__MASK             0x0000ff00U
#define SHUB_PORT0_ALM1_THRHLD_MAX_1__BYTE_MAX_05__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000ff00U) >> 8)
#define SHUB_PORT0_ALM1_THRHLD_MAX_1__BYTE_MAX_05__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x0000ff00U)
#define SHUB_PORT0_ALM1_THRHLD_MAX_1__BYTE_MAX_05__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ff00U) | (((uint32_t)(src) <<\
                    8) & 0x0000ff00U)
#define SHUB_PORT0_ALM1_THRHLD_MAX_1__BYTE_MAX_05__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x0000ff00U)))
#define SHUB_PORT0_ALM1_THRHLD_MAX_1__BYTE_MAX_05__RESET_VALUE      0x000000ffU
/** @} */

/* macros for field byte_max_06 */
/**
 * @defgroup at_apb_shub_regs_core_byte_max_06_field byte_max_06_field
 * @brief macros for field byte_max_06
 * @details 7th byte to be contructed as a ceiling reference quantity
 * @{
 */
#define SHUB_PORT0_ALM1_THRHLD_MAX_1__BYTE_MAX_06__SHIFT                     16
#define SHUB_PORT0_ALM1_THRHLD_MAX_1__BYTE_MAX_06__WIDTH                      8
#define SHUB_PORT0_ALM1_THRHLD_MAX_1__BYTE_MAX_06__MASK             0x00ff0000U
#define SHUB_PORT0_ALM1_THRHLD_MAX_1__BYTE_MAX_06__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00ff0000U) >> 16)
#define SHUB_PORT0_ALM1_THRHLD_MAX_1__BYTE_MAX_06__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00ff0000U)
#define SHUB_PORT0_ALM1_THRHLD_MAX_1__BYTE_MAX_06__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00ff0000U) | (((uint32_t)(src) <<\
                    16) & 0x00ff0000U)
#define SHUB_PORT0_ALM1_THRHLD_MAX_1__BYTE_MAX_06__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00ff0000U)))
#define SHUB_PORT0_ALM1_THRHLD_MAX_1__BYTE_MAX_06__RESET_VALUE      0x000000ffU
/** @} */

/* macros for field byte_max_07 */
/**
 * @defgroup at_apb_shub_regs_core_byte_max_07_field byte_max_07_field
 * @brief macros for field byte_max_07
 * @details 8th byte to be contructed as a ceiling reference quantity
 * @{
 */
#define SHUB_PORT0_ALM1_THRHLD_MAX_1__BYTE_MAX_07__SHIFT                     24
#define SHUB_PORT0_ALM1_THRHLD_MAX_1__BYTE_MAX_07__WIDTH                      8
#define SHUB_PORT0_ALM1_THRHLD_MAX_1__BYTE_MAX_07__MASK             0xff000000U
#define SHUB_PORT0_ALM1_THRHLD_MAX_1__BYTE_MAX_07__READ(src) \
                    (((uint32_t)(src)\
                    & 0xff000000U) >> 24)
#define SHUB_PORT0_ALM1_THRHLD_MAX_1__BYTE_MAX_07__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0xff000000U)
#define SHUB_PORT0_ALM1_THRHLD_MAX_1__BYTE_MAX_07__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xff000000U) | (((uint32_t)(src) <<\
                    24) & 0xff000000U)
#define SHUB_PORT0_ALM1_THRHLD_MAX_1__BYTE_MAX_07__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0xff000000U)))
#define SHUB_PORT0_ALM1_THRHLD_MAX_1__BYTE_MAX_07__RESET_VALUE      0x000000ffU
/** @} */
#define SHUB_PORT0_ALM1_THRHLD_MAX_1__TYPE                             uint32_t
#define SHUB_PORT0_ALM1_THRHLD_MAX_1__READ                          0xffffffffU
#define SHUB_PORT0_ALM1_THRHLD_MAX_1__WRITE                         0xffffffffU
#define SHUB_PORT0_ALM1_THRHLD_MAX_1__PRESERVED                     0xffffffffU
#define SHUB_PORT0_ALM1_THRHLD_MAX_1__RESET_VALUE                   0xffffffffU

#endif /* __SHUB_PORT0_ALM1_THRHLD_MAX_1_MACRO__ */

/** @} end of port0_alm1_thrhld_max_1 */

/* macros for BlueprintGlobalNameSpace::SHUB_port0_alm1_thrhld_max_2 */
/**
 * @defgroup at_apb_shub_regs_core_port0_alm1_thrhld_max_2 port0_alm1_thrhld_max_2
 * @brief threshold of sensor results definitions.
 * @{
 */
#ifndef __SHUB_PORT0_ALM1_THRHLD_MAX_2_MACRO__
#define __SHUB_PORT0_ALM1_THRHLD_MAX_2_MACRO__

/* macros for field byte_max_08 */
/**
 * @defgroup at_apb_shub_regs_core_byte_max_08_field byte_max_08_field
 * @brief macros for field byte_max_08
 * @details 9th byte to be contructed as a ceiling reference quantity
 * @{
 */
#define SHUB_PORT0_ALM1_THRHLD_MAX_2__BYTE_MAX_08__SHIFT                      0
#define SHUB_PORT0_ALM1_THRHLD_MAX_2__BYTE_MAX_08__WIDTH                      8
#define SHUB_PORT0_ALM1_THRHLD_MAX_2__BYTE_MAX_08__MASK             0x000000ffU
#define SHUB_PORT0_ALM1_THRHLD_MAX_2__BYTE_MAX_08__READ(src) \
                    ((uint32_t)(src)\
                    & 0x000000ffU)
#define SHUB_PORT0_ALM1_THRHLD_MAX_2__BYTE_MAX_08__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x000000ffU)
#define SHUB_PORT0_ALM1_THRHLD_MAX_2__BYTE_MAX_08__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define SHUB_PORT0_ALM1_THRHLD_MAX_2__BYTE_MAX_08__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000000ffU)))
#define SHUB_PORT0_ALM1_THRHLD_MAX_2__BYTE_MAX_08__RESET_VALUE      0x000000ffU
/** @} */

/* macros for field byte_max_09 */
/**
 * @defgroup at_apb_shub_regs_core_byte_max_09_field byte_max_09_field
 * @brief macros for field byte_max_09
 * @details 10th byte to be contructed as a ceiling reference quantity
 * @{
 */
#define SHUB_PORT0_ALM1_THRHLD_MAX_2__BYTE_MAX_09__SHIFT                      8
#define SHUB_PORT0_ALM1_THRHLD_MAX_2__BYTE_MAX_09__WIDTH                      8
#define SHUB_PORT0_ALM1_THRHLD_MAX_2__BYTE_MAX_09__MASK             0x0000ff00U
#define SHUB_PORT0_ALM1_THRHLD_MAX_2__BYTE_MAX_09__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000ff00U) >> 8)
#define SHUB_PORT0_ALM1_THRHLD_MAX_2__BYTE_MAX_09__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x0000ff00U)
#define SHUB_PORT0_ALM1_THRHLD_MAX_2__BYTE_MAX_09__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ff00U) | (((uint32_t)(src) <<\
                    8) & 0x0000ff00U)
#define SHUB_PORT0_ALM1_THRHLD_MAX_2__BYTE_MAX_09__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x0000ff00U)))
#define SHUB_PORT0_ALM1_THRHLD_MAX_2__BYTE_MAX_09__RESET_VALUE      0x000000ffU
/** @} */

/* macros for field byte_max_10 */
/**
 * @defgroup at_apb_shub_regs_core_byte_max_10_field byte_max_10_field
 * @brief macros for field byte_max_10
 * @details 11th byte to be contructed as a ceiling reference quantity
 * @{
 */
#define SHUB_PORT0_ALM1_THRHLD_MAX_2__BYTE_MAX_10__SHIFT                     16
#define SHUB_PORT0_ALM1_THRHLD_MAX_2__BYTE_MAX_10__WIDTH                      8
#define SHUB_PORT0_ALM1_THRHLD_MAX_2__BYTE_MAX_10__MASK             0x00ff0000U
#define SHUB_PORT0_ALM1_THRHLD_MAX_2__BYTE_MAX_10__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00ff0000U) >> 16)
#define SHUB_PORT0_ALM1_THRHLD_MAX_2__BYTE_MAX_10__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00ff0000U)
#define SHUB_PORT0_ALM1_THRHLD_MAX_2__BYTE_MAX_10__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00ff0000U) | (((uint32_t)(src) <<\
                    16) & 0x00ff0000U)
#define SHUB_PORT0_ALM1_THRHLD_MAX_2__BYTE_MAX_10__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00ff0000U)))
#define SHUB_PORT0_ALM1_THRHLD_MAX_2__BYTE_MAX_10__RESET_VALUE      0x000000ffU
/** @} */

/* macros for field byte_max_11 */
/**
 * @defgroup at_apb_shub_regs_core_byte_max_11_field byte_max_11_field
 * @brief macros for field byte_max_11
 * @details 12th byte to be contructed as a ceiling reference quantity
 * @{
 */
#define SHUB_PORT0_ALM1_THRHLD_MAX_2__BYTE_MAX_11__SHIFT                     24
#define SHUB_PORT0_ALM1_THRHLD_MAX_2__BYTE_MAX_11__WIDTH                      8
#define SHUB_PORT0_ALM1_THRHLD_MAX_2__BYTE_MAX_11__MASK             0xff000000U
#define SHUB_PORT0_ALM1_THRHLD_MAX_2__BYTE_MAX_11__READ(src) \
                    (((uint32_t)(src)\
                    & 0xff000000U) >> 24)
#define SHUB_PORT0_ALM1_THRHLD_MAX_2__BYTE_MAX_11__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0xff000000U)
#define SHUB_PORT0_ALM1_THRHLD_MAX_2__BYTE_MAX_11__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xff000000U) | (((uint32_t)(src) <<\
                    24) & 0xff000000U)
#define SHUB_PORT0_ALM1_THRHLD_MAX_2__BYTE_MAX_11__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0xff000000U)))
#define SHUB_PORT0_ALM1_THRHLD_MAX_2__BYTE_MAX_11__RESET_VALUE      0x000000ffU
/** @} */
#define SHUB_PORT0_ALM1_THRHLD_MAX_2__TYPE                             uint32_t
#define SHUB_PORT0_ALM1_THRHLD_MAX_2__READ                          0xffffffffU
#define SHUB_PORT0_ALM1_THRHLD_MAX_2__WRITE                         0xffffffffU
#define SHUB_PORT0_ALM1_THRHLD_MAX_2__PRESERVED                     0xffffffffU
#define SHUB_PORT0_ALM1_THRHLD_MAX_2__RESET_VALUE                   0xffffffffU

#endif /* __SHUB_PORT0_ALM1_THRHLD_MAX_2_MACRO__ */

/** @} end of port0_alm1_thrhld_max_2 */

/* macros for BlueprintGlobalNameSpace::SHUB_port0_alm1_thrhld_min_0 */
/**
 * @defgroup at_apb_shub_regs_core_port0_alm1_thrhld_min_0 port0_alm1_thrhld_min_0
 * @brief threshold of sensor results definitions.
 * @{
 */
#ifndef __SHUB_PORT0_ALM1_THRHLD_MIN_0_MACRO__
#define __SHUB_PORT0_ALM1_THRHLD_MIN_0_MACRO__

/* macros for field byte_min_00 */
/**
 * @defgroup at_apb_shub_regs_core_byte_min_00_field byte_min_00_field
 * @brief macros for field byte_min_00
 * @details 1st byte to be contructed as a floor reference quantity
 * @{
 */
#define SHUB_PORT0_ALM1_THRHLD_MIN_0__BYTE_MIN_00__SHIFT                      0
#define SHUB_PORT0_ALM1_THRHLD_MIN_0__BYTE_MIN_00__WIDTH                      8
#define SHUB_PORT0_ALM1_THRHLD_MIN_0__BYTE_MIN_00__MASK             0x000000ffU
#define SHUB_PORT0_ALM1_THRHLD_MIN_0__BYTE_MIN_00__READ(src) \
                    ((uint32_t)(src)\
                    & 0x000000ffU)
#define SHUB_PORT0_ALM1_THRHLD_MIN_0__BYTE_MIN_00__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x000000ffU)
#define SHUB_PORT0_ALM1_THRHLD_MIN_0__BYTE_MIN_00__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define SHUB_PORT0_ALM1_THRHLD_MIN_0__BYTE_MIN_00__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000000ffU)))
#define SHUB_PORT0_ALM1_THRHLD_MIN_0__BYTE_MIN_00__RESET_VALUE      0x00000000U
/** @} */

/* macros for field byte_min_01 */
/**
 * @defgroup at_apb_shub_regs_core_byte_min_01_field byte_min_01_field
 * @brief macros for field byte_min_01
 * @details 2nd byte to be contructed as a floor reference quantity
 * @{
 */
#define SHUB_PORT0_ALM1_THRHLD_MIN_0__BYTE_MIN_01__SHIFT                      8
#define SHUB_PORT0_ALM1_THRHLD_MIN_0__BYTE_MIN_01__WIDTH                      8
#define SHUB_PORT0_ALM1_THRHLD_MIN_0__BYTE_MIN_01__MASK             0x0000ff00U
#define SHUB_PORT0_ALM1_THRHLD_MIN_0__BYTE_MIN_01__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000ff00U) >> 8)
#define SHUB_PORT0_ALM1_THRHLD_MIN_0__BYTE_MIN_01__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x0000ff00U)
#define SHUB_PORT0_ALM1_THRHLD_MIN_0__BYTE_MIN_01__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ff00U) | (((uint32_t)(src) <<\
                    8) & 0x0000ff00U)
#define SHUB_PORT0_ALM1_THRHLD_MIN_0__BYTE_MIN_01__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x0000ff00U)))
#define SHUB_PORT0_ALM1_THRHLD_MIN_0__BYTE_MIN_01__RESET_VALUE      0x00000000U
/** @} */

/* macros for field byte_min_02 */
/**
 * @defgroup at_apb_shub_regs_core_byte_min_02_field byte_min_02_field
 * @brief macros for field byte_min_02
 * @details 3rd byte to be contructed as a floor reference quantity
 * @{
 */
#define SHUB_PORT0_ALM1_THRHLD_MIN_0__BYTE_MIN_02__SHIFT                     16
#define SHUB_PORT0_ALM1_THRHLD_MIN_0__BYTE_MIN_02__WIDTH                      8
#define SHUB_PORT0_ALM1_THRHLD_MIN_0__BYTE_MIN_02__MASK             0x00ff0000U
#define SHUB_PORT0_ALM1_THRHLD_MIN_0__BYTE_MIN_02__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00ff0000U) >> 16)
#define SHUB_PORT0_ALM1_THRHLD_MIN_0__BYTE_MIN_02__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00ff0000U)
#define SHUB_PORT0_ALM1_THRHLD_MIN_0__BYTE_MIN_02__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00ff0000U) | (((uint32_t)(src) <<\
                    16) & 0x00ff0000U)
#define SHUB_PORT0_ALM1_THRHLD_MIN_0__BYTE_MIN_02__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00ff0000U)))
#define SHUB_PORT0_ALM1_THRHLD_MIN_0__BYTE_MIN_02__RESET_VALUE      0x00000000U
/** @} */

/* macros for field byte_min_03 */
/**
 * @defgroup at_apb_shub_regs_core_byte_min_03_field byte_min_03_field
 * @brief macros for field byte_min_03
 * @details 4th byte to be contructed as a floor reference quantity
 * @{
 */
#define SHUB_PORT0_ALM1_THRHLD_MIN_0__BYTE_MIN_03__SHIFT                     24
#define SHUB_PORT0_ALM1_THRHLD_MIN_0__BYTE_MIN_03__WIDTH                      8
#define SHUB_PORT0_ALM1_THRHLD_MIN_0__BYTE_MIN_03__MASK             0xff000000U
#define SHUB_PORT0_ALM1_THRHLD_MIN_0__BYTE_MIN_03__READ(src) \
                    (((uint32_t)(src)\
                    & 0xff000000U) >> 24)
#define SHUB_PORT0_ALM1_THRHLD_MIN_0__BYTE_MIN_03__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0xff000000U)
#define SHUB_PORT0_ALM1_THRHLD_MIN_0__BYTE_MIN_03__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xff000000U) | (((uint32_t)(src) <<\
                    24) & 0xff000000U)
#define SHUB_PORT0_ALM1_THRHLD_MIN_0__BYTE_MIN_03__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0xff000000U)))
#define SHUB_PORT0_ALM1_THRHLD_MIN_0__BYTE_MIN_03__RESET_VALUE      0x00000000U
/** @} */
#define SHUB_PORT0_ALM1_THRHLD_MIN_0__TYPE                             uint32_t
#define SHUB_PORT0_ALM1_THRHLD_MIN_0__READ                          0xffffffffU
#define SHUB_PORT0_ALM1_THRHLD_MIN_0__WRITE                         0xffffffffU
#define SHUB_PORT0_ALM1_THRHLD_MIN_0__PRESERVED                     0xffffffffU
#define SHUB_PORT0_ALM1_THRHLD_MIN_0__RESET_VALUE                   0x00000000U

#endif /* __SHUB_PORT0_ALM1_THRHLD_MIN_0_MACRO__ */

/** @} end of port0_alm1_thrhld_min_0 */

/* macros for BlueprintGlobalNameSpace::SHUB_port0_alm1_thrhld_min_1 */
/**
 * @defgroup at_apb_shub_regs_core_port0_alm1_thrhld_min_1 port0_alm1_thrhld_min_1
 * @brief threshold of sensor results definitions.
 * @{
 */
#ifndef __SHUB_PORT0_ALM1_THRHLD_MIN_1_MACRO__
#define __SHUB_PORT0_ALM1_THRHLD_MIN_1_MACRO__

/* macros for field byte_min_04 */
/**
 * @defgroup at_apb_shub_regs_core_byte_min_04_field byte_min_04_field
 * @brief macros for field byte_min_04
 * @details 4th byte to be contructed as a floor reference quantity
 * @{
 */
#define SHUB_PORT0_ALM1_THRHLD_MIN_1__BYTE_MIN_04__SHIFT                      0
#define SHUB_PORT0_ALM1_THRHLD_MIN_1__BYTE_MIN_04__WIDTH                      8
#define SHUB_PORT0_ALM1_THRHLD_MIN_1__BYTE_MIN_04__MASK             0x000000ffU
#define SHUB_PORT0_ALM1_THRHLD_MIN_1__BYTE_MIN_04__READ(src) \
                    ((uint32_t)(src)\
                    & 0x000000ffU)
#define SHUB_PORT0_ALM1_THRHLD_MIN_1__BYTE_MIN_04__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x000000ffU)
#define SHUB_PORT0_ALM1_THRHLD_MIN_1__BYTE_MIN_04__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define SHUB_PORT0_ALM1_THRHLD_MIN_1__BYTE_MIN_04__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000000ffU)))
#define SHUB_PORT0_ALM1_THRHLD_MIN_1__BYTE_MIN_04__RESET_VALUE      0x00000000U
/** @} */

/* macros for field byte_min_05 */
/**
 * @defgroup at_apb_shub_regs_core_byte_min_05_field byte_min_05_field
 * @brief macros for field byte_min_05
 * @details 6th byte to be contructed as a floor reference quantity
 * @{
 */
#define SHUB_PORT0_ALM1_THRHLD_MIN_1__BYTE_MIN_05__SHIFT                      8
#define SHUB_PORT0_ALM1_THRHLD_MIN_1__BYTE_MIN_05__WIDTH                      8
#define SHUB_PORT0_ALM1_THRHLD_MIN_1__BYTE_MIN_05__MASK             0x0000ff00U
#define SHUB_PORT0_ALM1_THRHLD_MIN_1__BYTE_MIN_05__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000ff00U) >> 8)
#define SHUB_PORT0_ALM1_THRHLD_MIN_1__BYTE_MIN_05__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x0000ff00U)
#define SHUB_PORT0_ALM1_THRHLD_MIN_1__BYTE_MIN_05__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ff00U) | (((uint32_t)(src) <<\
                    8) & 0x0000ff00U)
#define SHUB_PORT0_ALM1_THRHLD_MIN_1__BYTE_MIN_05__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x0000ff00U)))
#define SHUB_PORT0_ALM1_THRHLD_MIN_1__BYTE_MIN_05__RESET_VALUE      0x00000000U
/** @} */

/* macros for field byte_min_06 */
/**
 * @defgroup at_apb_shub_regs_core_byte_min_06_field byte_min_06_field
 * @brief macros for field byte_min_06
 * @details 7th byte to be contructed as a floor reference quantity
 * @{
 */
#define SHUB_PORT0_ALM1_THRHLD_MIN_1__BYTE_MIN_06__SHIFT                     16
#define SHUB_PORT0_ALM1_THRHLD_MIN_1__BYTE_MIN_06__WIDTH                      8
#define SHUB_PORT0_ALM1_THRHLD_MIN_1__BYTE_MIN_06__MASK             0x00ff0000U
#define SHUB_PORT0_ALM1_THRHLD_MIN_1__BYTE_MIN_06__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00ff0000U) >> 16)
#define SHUB_PORT0_ALM1_THRHLD_MIN_1__BYTE_MIN_06__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00ff0000U)
#define SHUB_PORT0_ALM1_THRHLD_MIN_1__BYTE_MIN_06__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00ff0000U) | (((uint32_t)(src) <<\
                    16) & 0x00ff0000U)
#define SHUB_PORT0_ALM1_THRHLD_MIN_1__BYTE_MIN_06__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00ff0000U)))
#define SHUB_PORT0_ALM1_THRHLD_MIN_1__BYTE_MIN_06__RESET_VALUE      0x00000000U
/** @} */

/* macros for field byte_min_07 */
/**
 * @defgroup at_apb_shub_regs_core_byte_min_07_field byte_min_07_field
 * @brief macros for field byte_min_07
 * @details 8th byte to be contructed as a floor reference quantity
 * @{
 */
#define SHUB_PORT0_ALM1_THRHLD_MIN_1__BYTE_MIN_07__SHIFT                     24
#define SHUB_PORT0_ALM1_THRHLD_MIN_1__BYTE_MIN_07__WIDTH                      8
#define SHUB_PORT0_ALM1_THRHLD_MIN_1__BYTE_MIN_07__MASK             0xff000000U
#define SHUB_PORT0_ALM1_THRHLD_MIN_1__BYTE_MIN_07__READ(src) \
                    (((uint32_t)(src)\
                    & 0xff000000U) >> 24)
#define SHUB_PORT0_ALM1_THRHLD_MIN_1__BYTE_MIN_07__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0xff000000U)
#define SHUB_PORT0_ALM1_THRHLD_MIN_1__BYTE_MIN_07__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xff000000U) | (((uint32_t)(src) <<\
                    24) & 0xff000000U)
#define SHUB_PORT0_ALM1_THRHLD_MIN_1__BYTE_MIN_07__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0xff000000U)))
#define SHUB_PORT0_ALM1_THRHLD_MIN_1__BYTE_MIN_07__RESET_VALUE      0x00000000U
/** @} */
#define SHUB_PORT0_ALM1_THRHLD_MIN_1__TYPE                             uint32_t
#define SHUB_PORT0_ALM1_THRHLD_MIN_1__READ                          0xffffffffU
#define SHUB_PORT0_ALM1_THRHLD_MIN_1__WRITE                         0xffffffffU
#define SHUB_PORT0_ALM1_THRHLD_MIN_1__PRESERVED                     0xffffffffU
#define SHUB_PORT0_ALM1_THRHLD_MIN_1__RESET_VALUE                   0x00000000U

#endif /* __SHUB_PORT0_ALM1_THRHLD_MIN_1_MACRO__ */

/** @} end of port0_alm1_thrhld_min_1 */

/* macros for BlueprintGlobalNameSpace::SHUB_port0_alm1_thrhld_min_2 */
/**
 * @defgroup at_apb_shub_regs_core_port0_alm1_thrhld_min_2 port0_alm1_thrhld_min_2
 * @brief threshold of sensor results definitions.
 * @{
 */
#ifndef __SHUB_PORT0_ALM1_THRHLD_MIN_2_MACRO__
#define __SHUB_PORT0_ALM1_THRHLD_MIN_2_MACRO__

/* macros for field byte_min_08 */
/**
 * @defgroup at_apb_shub_regs_core_byte_min_08_field byte_min_08_field
 * @brief macros for field byte_min_08
 * @details 9th byte to be contructed as a floor reference quantity
 * @{
 */
#define SHUB_PORT0_ALM1_THRHLD_MIN_2__BYTE_MIN_08__SHIFT                      0
#define SHUB_PORT0_ALM1_THRHLD_MIN_2__BYTE_MIN_08__WIDTH                      8
#define SHUB_PORT0_ALM1_THRHLD_MIN_2__BYTE_MIN_08__MASK             0x000000ffU
#define SHUB_PORT0_ALM1_THRHLD_MIN_2__BYTE_MIN_08__READ(src) \
                    ((uint32_t)(src)\
                    & 0x000000ffU)
#define SHUB_PORT0_ALM1_THRHLD_MIN_2__BYTE_MIN_08__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x000000ffU)
#define SHUB_PORT0_ALM1_THRHLD_MIN_2__BYTE_MIN_08__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define SHUB_PORT0_ALM1_THRHLD_MIN_2__BYTE_MIN_08__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000000ffU)))
#define SHUB_PORT0_ALM1_THRHLD_MIN_2__BYTE_MIN_08__RESET_VALUE      0x00000000U
/** @} */

/* macros for field byte_min_09 */
/**
 * @defgroup at_apb_shub_regs_core_byte_min_09_field byte_min_09_field
 * @brief macros for field byte_min_09
 * @details 10th byte to be contructed as a floor reference quantity
 * @{
 */
#define SHUB_PORT0_ALM1_THRHLD_MIN_2__BYTE_MIN_09__SHIFT                      8
#define SHUB_PORT0_ALM1_THRHLD_MIN_2__BYTE_MIN_09__WIDTH                      8
#define SHUB_PORT0_ALM1_THRHLD_MIN_2__BYTE_MIN_09__MASK             0x0000ff00U
#define SHUB_PORT0_ALM1_THRHLD_MIN_2__BYTE_MIN_09__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000ff00U) >> 8)
#define SHUB_PORT0_ALM1_THRHLD_MIN_2__BYTE_MIN_09__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x0000ff00U)
#define SHUB_PORT0_ALM1_THRHLD_MIN_2__BYTE_MIN_09__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ff00U) | (((uint32_t)(src) <<\
                    8) & 0x0000ff00U)
#define SHUB_PORT0_ALM1_THRHLD_MIN_2__BYTE_MIN_09__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x0000ff00U)))
#define SHUB_PORT0_ALM1_THRHLD_MIN_2__BYTE_MIN_09__RESET_VALUE      0x00000000U
/** @} */

/* macros for field byte_min_10 */
/**
 * @defgroup at_apb_shub_regs_core_byte_min_10_field byte_min_10_field
 * @brief macros for field byte_min_10
 * @details 11th byte to be contructed as a floor reference quantity
 * @{
 */
#define SHUB_PORT0_ALM1_THRHLD_MIN_2__BYTE_MIN_10__SHIFT                     16
#define SHUB_PORT0_ALM1_THRHLD_MIN_2__BYTE_MIN_10__WIDTH                      8
#define SHUB_PORT0_ALM1_THRHLD_MIN_2__BYTE_MIN_10__MASK             0x00ff0000U
#define SHUB_PORT0_ALM1_THRHLD_MIN_2__BYTE_MIN_10__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00ff0000U) >> 16)
#define SHUB_PORT0_ALM1_THRHLD_MIN_2__BYTE_MIN_10__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00ff0000U)
#define SHUB_PORT0_ALM1_THRHLD_MIN_2__BYTE_MIN_10__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00ff0000U) | (((uint32_t)(src) <<\
                    16) & 0x00ff0000U)
#define SHUB_PORT0_ALM1_THRHLD_MIN_2__BYTE_MIN_10__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00ff0000U)))
#define SHUB_PORT0_ALM1_THRHLD_MIN_2__BYTE_MIN_10__RESET_VALUE      0x00000000U
/** @} */

/* macros for field byte_min_11 */
/**
 * @defgroup at_apb_shub_regs_core_byte_min_11_field byte_min_11_field
 * @brief macros for field byte_min_11
 * @details 12th byte to be contructed as a floor reference quantity
 * @{
 */
#define SHUB_PORT0_ALM1_THRHLD_MIN_2__BYTE_MIN_11__SHIFT                     24
#define SHUB_PORT0_ALM1_THRHLD_MIN_2__BYTE_MIN_11__WIDTH                      8
#define SHUB_PORT0_ALM1_THRHLD_MIN_2__BYTE_MIN_11__MASK             0xff000000U
#define SHUB_PORT0_ALM1_THRHLD_MIN_2__BYTE_MIN_11__READ(src) \
                    (((uint32_t)(src)\
                    & 0xff000000U) >> 24)
#define SHUB_PORT0_ALM1_THRHLD_MIN_2__BYTE_MIN_11__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0xff000000U)
#define SHUB_PORT0_ALM1_THRHLD_MIN_2__BYTE_MIN_11__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xff000000U) | (((uint32_t)(src) <<\
                    24) & 0xff000000U)
#define SHUB_PORT0_ALM1_THRHLD_MIN_2__BYTE_MIN_11__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0xff000000U)))
#define SHUB_PORT0_ALM1_THRHLD_MIN_2__BYTE_MIN_11__RESET_VALUE      0x00000000U
/** @} */
#define SHUB_PORT0_ALM1_THRHLD_MIN_2__TYPE                             uint32_t
#define SHUB_PORT0_ALM1_THRHLD_MIN_2__READ                          0xffffffffU
#define SHUB_PORT0_ALM1_THRHLD_MIN_2__WRITE                         0xffffffffU
#define SHUB_PORT0_ALM1_THRHLD_MIN_2__PRESERVED                     0xffffffffU
#define SHUB_PORT0_ALM1_THRHLD_MIN_2__RESET_VALUE                   0x00000000U

#endif /* __SHUB_PORT0_ALM1_THRHLD_MIN_2_MACRO__ */

/** @} end of port0_alm1_thrhld_min_2 */

/* macros for BlueprintGlobalNameSpace::SHUB_port0_status */
/**
 * @defgroup at_apb_shub_regs_core_port0_status port0_status
 * @brief trigger status due to out of range quantities definitions.
 * @{
 */
#ifndef __SHUB_PORT0_STATUS_MACRO__
#define __SHUB_PORT0_STATUS_MACRO__

/* macros for field out_of_range_stat */
/**
 * @defgroup at_apb_shub_regs_core_out_of_range_stat_field out_of_range_stat_field
 * @brief macros for field out_of_range_stat
 * @details each bit corresponds to out-of-range indicator of the sensor quantities. {quantity3,quantity2, quantity1,quantity0}
 * @{
 */
#define SHUB_PORT0_STATUS__OUT_OF_RANGE_STAT__SHIFT                           0
#define SHUB_PORT0_STATUS__OUT_OF_RANGE_STAT__WIDTH                           4
#define SHUB_PORT0_STATUS__OUT_OF_RANGE_STAT__MASK                  0x0000000fU
#define SHUB_PORT0_STATUS__OUT_OF_RANGE_STAT__READ(src) \
                    ((uint32_t)(src)\
                    & 0x0000000fU)
#define SHUB_PORT0_STATUS__OUT_OF_RANGE_STAT__RESET_VALUE           0x00000000U
/** @} */

/* macros for field triggered */
/**
 * @defgroup at_apb_shub_regs_core_triggered_field triggered_field
 * @brief macros for field triggered
 * @details triggerred by port 0.
 * @{
 */
#define SHUB_PORT0_STATUS__TRIGGERED__SHIFT                                  24
#define SHUB_PORT0_STATUS__TRIGGERED__WIDTH                                   1
#define SHUB_PORT0_STATUS__TRIGGERED__MASK                          0x01000000U
#define SHUB_PORT0_STATUS__TRIGGERED__READ(src) \
                    (((uint32_t)(src)\
                    & 0x01000000U) >> 24)
#define SHUB_PORT0_STATUS__TRIGGERED__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(1) << 24)
#define SHUB_PORT0_STATUS__TRIGGERED__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(0) << 24)
#define SHUB_PORT0_STATUS__TRIGGERED__RESET_VALUE                   0x00000000U
/** @} */
#define SHUB_PORT0_STATUS__TYPE                                        uint32_t
#define SHUB_PORT0_STATUS__READ                                     0x0100000fU
#define SHUB_PORT0_STATUS__PRESERVED                                0x00000000U
#define SHUB_PORT0_STATUS__RESET_VALUE                              0x00000000U

#endif /* __SHUB_PORT0_STATUS_MACRO__ */

/** @} end of port0_status */

/* macros for BlueprintGlobalNameSpace::SHUB_port1_setup */
/**
 * @defgroup at_apb_shub_regs_core_port1_setup port1_setup
 * @brief configuration bits for Port 1 definitions.
 * @{
 */
#ifndef __SHUB_PORT1_SETUP_MACRO__
#define __SHUB_PORT1_SETUP_MACRO__

/* macros for field port_en */
/**
 * @defgroup at_apb_shub_regs_core_port_en_field port_en_field
 * @brief macros for field port_en
 * @details port 1 enable
 * @{
 */
#define SHUB_PORT1_SETUP__PORT_EN__SHIFT                                      0
#define SHUB_PORT1_SETUP__PORT_EN__WIDTH                                      1
#define SHUB_PORT1_SETUP__PORT_EN__MASK                             0x00000001U
#define SHUB_PORT1_SETUP__PORT_EN__READ(src)    ((uint32_t)(src) & 0x00000001U)
#define SHUB_PORT1_SETUP__PORT_EN__WRITE(src)   ((uint32_t)(src) & 0x00000001U)
#define SHUB_PORT1_SETUP__PORT_EN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define SHUB_PORT1_SETUP__PORT_EN__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define SHUB_PORT1_SETUP__PORT_EN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define SHUB_PORT1_SETUP__PORT_EN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define SHUB_PORT1_SETUP__PORT_EN__RESET_VALUE                      0x00000000U
/** @} */

/* macros for field spi_n_i2c */
/**
 * @defgroup at_apb_shub_regs_core_spi_n_i2c_field spi_n_i2c_field
 * @brief macros for field spi_n_i2c
 * @details 1= use spi for port0, 0= use i2c
 * @{
 */
#define SHUB_PORT1_SETUP__SPI_N_I2C__SHIFT                                    1
#define SHUB_PORT1_SETUP__SPI_N_I2C__WIDTH                                    1
#define SHUB_PORT1_SETUP__SPI_N_I2C__MASK                           0x00000002U
#define SHUB_PORT1_SETUP__SPI_N_I2C__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define SHUB_PORT1_SETUP__SPI_N_I2C__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define SHUB_PORT1_SETUP__SPI_N_I2C__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define SHUB_PORT1_SETUP__SPI_N_I2C__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define SHUB_PORT1_SETUP__SPI_N_I2C__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define SHUB_PORT1_SETUP__SPI_N_I2C__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define SHUB_PORT1_SETUP__SPI_N_I2C__RESET_VALUE                    0x00000000U
/** @} */

/* macros for field num_sensors */
/**
 * @defgroup at_apb_shub_regs_core_num_sensors_field num_sensors_field
 * @brief macros for field num_sensors
 * @details number of sensors connected to port = num_sensors + 1
 * @{
 */
#define SHUB_PORT1_SETUP__NUM_SENSORS__SHIFT                                  4
#define SHUB_PORT1_SETUP__NUM_SENSORS__WIDTH                                  3
#define SHUB_PORT1_SETUP__NUM_SENSORS__MASK                         0x00000070U
#define SHUB_PORT1_SETUP__NUM_SENSORS__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000070U) >> 4)
#define SHUB_PORT1_SETUP__NUM_SENSORS__WRITE(src) \
                    (((uint32_t)(src)\
                    << 4) & 0x00000070U)
#define SHUB_PORT1_SETUP__NUM_SENSORS__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000070U) | (((uint32_t)(src) <<\
                    4) & 0x00000070U)
#define SHUB_PORT1_SETUP__NUM_SENSORS__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 4) & ~0x00000070U)))
#define SHUB_PORT1_SETUP__NUM_SENSORS__RESET_VALUE                  0x00000000U
/** @} */

/* macros for field trig_en */
/**
 * @defgroup at_apb_shub_regs_core_trig_en_field trig_en_field
 * @brief macros for field trig_en
 * @details 1= enable threshold comparison with measurement results.
 * @{
 */
#define SHUB_PORT1_SETUP__TRIG_EN__SHIFT                                     11
#define SHUB_PORT1_SETUP__TRIG_EN__WIDTH                                      1
#define SHUB_PORT1_SETUP__TRIG_EN__MASK                             0x00000800U
#define SHUB_PORT1_SETUP__TRIG_EN__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000800U) >> 11)
#define SHUB_PORT1_SETUP__TRIG_EN__WRITE(src) \
                    (((uint32_t)(src)\
                    << 11) & 0x00000800U)
#define SHUB_PORT1_SETUP__TRIG_EN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000800U) | (((uint32_t)(src) <<\
                    11) & 0x00000800U)
#define SHUB_PORT1_SETUP__TRIG_EN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 11) & ~0x00000800U)))
#define SHUB_PORT1_SETUP__TRIG_EN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000800U) | ((uint32_t)(1) << 11)
#define SHUB_PORT1_SETUP__TRIG_EN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000800U) | ((uint32_t)(0) << 11)
#define SHUB_PORT1_SETUP__TRIG_EN__RESET_VALUE                      0x00000000U
/** @} */
#define SHUB_PORT1_SETUP__TYPE                                         uint32_t
#define SHUB_PORT1_SETUP__READ                                      0x00000873U
#define SHUB_PORT1_SETUP__WRITE                                     0x00000873U
#define SHUB_PORT1_SETUP__PRESERVED                                 0x00000873U
#define SHUB_PORT1_SETUP__RESET_VALUE                               0x00000000U

#endif /* __SHUB_PORT1_SETUP_MACRO__ */

/** @} end of port1_setup */

/* macros for BlueprintGlobalNameSpace::SHUB_port1_sensor0_setup */
/**
 * @defgroup at_apb_shub_regs_core_port1_sensor0_setup port1_sensor0_setup
 * @brief number of bytes to read from this sensor definitions.
 * @{
 */
#ifndef __SHUB_PORT1_SENSOR0_SETUP_MACRO__
#define __SHUB_PORT1_SENSOR0_SETUP_MACRO__

/* macros for field num_bytes */
/**
 * @defgroup at_apb_shub_regs_core_num_bytes_field num_bytes_field
 * @brief macros for field num_bytes
 * @details total number of bytes in sensor data = num_bytes+1
 * @{
 */
#define SHUB_PORT1_SENSOR0_SETUP__NUM_BYTES__SHIFT                            0
#define SHUB_PORT1_SENSOR0_SETUP__NUM_BYTES__WIDTH                            5
#define SHUB_PORT1_SENSOR0_SETUP__NUM_BYTES__MASK                   0x0000001fU
#define SHUB_PORT1_SENSOR0_SETUP__NUM_BYTES__READ(src) \
                    ((uint32_t)(src)\
                    & 0x0000001fU)
#define SHUB_PORT1_SENSOR0_SETUP__NUM_BYTES__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x0000001fU)
#define SHUB_PORT1_SENSOR0_SETUP__NUM_BYTES__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000001fU) | ((uint32_t)(src) &\
                    0x0000001fU)
#define SHUB_PORT1_SENSOR0_SETUP__NUM_BYTES__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x0000001fU)))
#define SHUB_PORT1_SENSOR0_SETUP__NUM_BYTES__RESET_VALUE            0x00000001U
/** @} */
#define SHUB_PORT1_SENSOR0_SETUP__TYPE                                 uint32_t
#define SHUB_PORT1_SENSOR0_SETUP__READ                              0x0000001fU
#define SHUB_PORT1_SENSOR0_SETUP__WRITE                             0x0000001fU
#define SHUB_PORT1_SENSOR0_SETUP__PRESERVED                         0x0000001fU
#define SHUB_PORT1_SENSOR0_SETUP__RESET_VALUE                       0x00000001U

#endif /* __SHUB_PORT1_SENSOR0_SETUP_MACRO__ */

/** @} end of port1_sensor0_setup */

/* macros for BlueprintGlobalNameSpace::SHUB_port1_spi_eng0_ctrl */
/**
 * @defgroup at_apb_shub_regs_core_port1_spi_eng0_ctrl port1_spi_eng0_ctrl
 * @brief config register for spi interface definitions.
 * @{
 */
#ifndef __SHUB_PORT1_SPI_ENG0_CTRL_MACRO__
#define __SHUB_PORT1_SPI_ENG0_CTRL_MACRO__

/* macros for field sensor_opcode */
/**
 * @defgroup at_apb_shub_regs_core_sensor_opcode_field sensor_opcode_field
 * @brief macros for field sensor_opcode
 * @details opcode used to communicate with sensor in spi mode
 * @{
 */
#define SHUB_PORT1_SPI_ENG0_CTRL__SENSOR_OPCODE__SHIFT                        0
#define SHUB_PORT1_SPI_ENG0_CTRL__SENSOR_OPCODE__WIDTH                        8
#define SHUB_PORT1_SPI_ENG0_CTRL__SENSOR_OPCODE__MASK               0x000000ffU
#define SHUB_PORT1_SPI_ENG0_CTRL__SENSOR_OPCODE__READ(src) \
                    ((uint32_t)(src)\
                    & 0x000000ffU)
#define SHUB_PORT1_SPI_ENG0_CTRL__SENSOR_OPCODE__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x000000ffU)
#define SHUB_PORT1_SPI_ENG0_CTRL__SENSOR_OPCODE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define SHUB_PORT1_SPI_ENG0_CTRL__SENSOR_OPCODE__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000000ffU)))
#define SHUB_PORT1_SPI_ENG0_CTRL__SENSOR_OPCODE__RESET_VALUE        0x00000000U
/** @} */
#define SHUB_PORT1_SPI_ENG0_CTRL__TYPE                                 uint32_t
#define SHUB_PORT1_SPI_ENG0_CTRL__READ                              0x000000ffU
#define SHUB_PORT1_SPI_ENG0_CTRL__WRITE                             0x000000ffU
#define SHUB_PORT1_SPI_ENG0_CTRL__PRESERVED                         0x000000ffU
#define SHUB_PORT1_SPI_ENG0_CTRL__RESET_VALUE                       0x00000000U

#endif /* __SHUB_PORT1_SPI_ENG0_CTRL_MACRO__ */

/** @} end of port1_spi_eng0_ctrl */

/* macros for BlueprintGlobalNameSpace::SHUB_port1_i2c_idw_0 */
/**
 * @defgroup at_apb_shub_regs_core_port1_i2c_idw_0 port1_i2c_idw_0
 * @brief id(read) of sensor0 on port0 prior to pointer address write definitions.
 * @{
 */
#ifndef __SHUB_PORT1_I2C_IDW_0_MACRO__
#define __SHUB_PORT1_I2C_IDW_0_MACRO__

/* macros for field ext_data_ie_ovrd */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_ie_ovrd_field ext_data_ie_ovrd_field
 * @brief macros for field ext_data_ie_ovrd
 * @details 1 = ie is high  0 = ie is ~oe
 * @{
 */
#define SHUB_PORT1_I2C_IDW_0__EXT_DATA_IE_OVRD__SHIFT                         0
#define SHUB_PORT1_I2C_IDW_0__EXT_DATA_IE_OVRD__WIDTH                         1
#define SHUB_PORT1_I2C_IDW_0__EXT_DATA_IE_OVRD__MASK                0x00000001U
#define SHUB_PORT1_I2C_IDW_0__EXT_DATA_IE_OVRD__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT1_I2C_IDW_0__EXT_DATA_IE_OVRD__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT1_I2C_IDW_0__EXT_DATA_IE_OVRD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define SHUB_PORT1_I2C_IDW_0__EXT_DATA_IE_OVRD__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define SHUB_PORT1_I2C_IDW_0__EXT_DATA_IE_OVRD__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define SHUB_PORT1_I2C_IDW_0__EXT_DATA_IE_OVRD__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define SHUB_PORT1_I2C_IDW_0__EXT_DATA_IE_OVRD__RESET_VALUE         0x00000000U
/** @} */

/* macros for field ext_data_o */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_o_field ext_data_o_field
 * @brief macros for field ext_data_o
 * @details outbound data; can be device id, address within device, or write data; if it's device id, the LSB is the R/Wb indicator
 * @{
 */
#define SHUB_PORT1_I2C_IDW_0__EXT_DATA_O__SHIFT                               1
#define SHUB_PORT1_I2C_IDW_0__EXT_DATA_O__WIDTH                               8
#define SHUB_PORT1_I2C_IDW_0__EXT_DATA_O__MASK                      0x000001feU
#define SHUB_PORT1_I2C_IDW_0__EXT_DATA_O__READ(src) \
                    (((uint32_t)(src)\
                    & 0x000001feU) >> 1)
#define SHUB_PORT1_I2C_IDW_0__EXT_DATA_O__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x000001feU)
#define SHUB_PORT1_I2C_IDW_0__EXT_DATA_O__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000001feU) | (((uint32_t)(src) <<\
                    1) & 0x000001feU)
#define SHUB_PORT1_I2C_IDW_0__EXT_DATA_O__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x000001feU)))
#define SHUB_PORT1_I2C_IDW_0__EXT_DATA_O__RESET_VALUE               0x00000000U
/** @} */

/* macros for field ext_data_oe */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_oe_field ext_data_oe_field
 * @brief macros for field ext_data_oe
 * @details sda output enable per bit
 * @{
 */
#define SHUB_PORT1_I2C_IDW_0__EXT_DATA_OE__SHIFT                              9
#define SHUB_PORT1_I2C_IDW_0__EXT_DATA_OE__WIDTH                              8
#define SHUB_PORT1_I2C_IDW_0__EXT_DATA_OE__MASK                     0x0001fe00U
#define SHUB_PORT1_I2C_IDW_0__EXT_DATA_OE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0001fe00U) >> 9)
#define SHUB_PORT1_I2C_IDW_0__EXT_DATA_OE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 9) & 0x0001fe00U)
#define SHUB_PORT1_I2C_IDW_0__EXT_DATA_OE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0001fe00U) | (((uint32_t)(src) <<\
                    9) & 0x0001fe00U)
#define SHUB_PORT1_I2C_IDW_0__EXT_DATA_OE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 9) & ~0x0001fe00U)))
#define SHUB_PORT1_I2C_IDW_0__EXT_DATA_OE__RESET_VALUE              0x000000ffU
/** @} */

/* macros for field ext_data_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_pu_field ext_data_pu_field
 * @brief macros for field ext_data_pu
 * @details sda pin pullup enable
 * @{
 */
#define SHUB_PORT1_I2C_IDW_0__EXT_DATA_PU__SHIFT                             17
#define SHUB_PORT1_I2C_IDW_0__EXT_DATA_PU__WIDTH                              1
#define SHUB_PORT1_I2C_IDW_0__EXT_DATA_PU__MASK                     0x00020000U
#define SHUB_PORT1_I2C_IDW_0__EXT_DATA_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00020000U) >> 17)
#define SHUB_PORT1_I2C_IDW_0__EXT_DATA_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 17) & 0x00020000U)
#define SHUB_PORT1_I2C_IDW_0__EXT_DATA_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | (((uint32_t)(src) <<\
                    17) & 0x00020000U)
#define SHUB_PORT1_I2C_IDW_0__EXT_DATA_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 17) & ~0x00020000U)))
#define SHUB_PORT1_I2C_IDW_0__EXT_DATA_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(1) << 17)
#define SHUB_PORT1_I2C_IDW_0__EXT_DATA_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(0) << 17)
#define SHUB_PORT1_I2C_IDW_0__EXT_DATA_PU__RESET_VALUE              0x00000000U
/** @} */

/* macros for field ext_clk_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_clk_pu_field ext_clk_pu_field
 * @brief macros for field ext_clk_pu
 * @details sck pin pullup enable
 * @{
 */
#define SHUB_PORT1_I2C_IDW_0__EXT_CLK_PU__SHIFT                              18
#define SHUB_PORT1_I2C_IDW_0__EXT_CLK_PU__WIDTH                               1
#define SHUB_PORT1_I2C_IDW_0__EXT_CLK_PU__MASK                      0x00040000U
#define SHUB_PORT1_I2C_IDW_0__EXT_CLK_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00040000U) >> 18)
#define SHUB_PORT1_I2C_IDW_0__EXT_CLK_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 18) & 0x00040000U)
#define SHUB_PORT1_I2C_IDW_0__EXT_CLK_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | (((uint32_t)(src) <<\
                    18) & 0x00040000U)
#define SHUB_PORT1_I2C_IDW_0__EXT_CLK_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 18) & ~0x00040000U)))
#define SHUB_PORT1_I2C_IDW_0__EXT_CLK_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(1) << 18)
#define SHUB_PORT1_I2C_IDW_0__EXT_CLK_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(0) << 18)
#define SHUB_PORT1_I2C_IDW_0__EXT_CLK_PU__RESET_VALUE               0x00000000U
/** @} */

/* macros for field ext_head */
/**
 * @defgroup at_apb_shub_regs_core_ext_head_field ext_head_field
 * @brief macros for field ext_head
 * @details Before data transmission starts, what should head be?  0 = start  1 = stall
 * @{
 */
#define SHUB_PORT1_I2C_IDW_0__EXT_HEAD__SHIFT                                19
#define SHUB_PORT1_I2C_IDW_0__EXT_HEAD__WIDTH                                 2
#define SHUB_PORT1_I2C_IDW_0__EXT_HEAD__MASK                        0x00180000U
#define SHUB_PORT1_I2C_IDW_0__EXT_HEAD__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00180000U) >> 19)
#define SHUB_PORT1_I2C_IDW_0__EXT_HEAD__WRITE(src) \
                    (((uint32_t)(src)\
                    << 19) & 0x00180000U)
#define SHUB_PORT1_I2C_IDW_0__EXT_HEAD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00180000U) | (((uint32_t)(src) <<\
                    19) & 0x00180000U)
#define SHUB_PORT1_I2C_IDW_0__EXT_HEAD__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 19) & ~0x00180000U)))
#define SHUB_PORT1_I2C_IDW_0__EXT_HEAD__RESET_VALUE                 0x00000000U
/** @} */

/* macros for field ext_tail */
/**
 * @defgroup at_apb_shub_regs_core_ext_tail_field ext_tail_field
 * @brief macros for field ext_tail
 * @details At end of 8 bits plus ack/nack, what should tail be?  0 = stop  1 = stall  2 = restart
 * @{
 */
#define SHUB_PORT1_I2C_IDW_0__EXT_TAIL__SHIFT                                21
#define SHUB_PORT1_I2C_IDW_0__EXT_TAIL__WIDTH                                 2
#define SHUB_PORT1_I2C_IDW_0__EXT_TAIL__MASK                        0x00600000U
#define SHUB_PORT1_I2C_IDW_0__EXT_TAIL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00600000U) >> 21)
#define SHUB_PORT1_I2C_IDW_0__EXT_TAIL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 21) & 0x00600000U)
#define SHUB_PORT1_I2C_IDW_0__EXT_TAIL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00600000U) | (((uint32_t)(src) <<\
                    21) & 0x00600000U)
#define SHUB_PORT1_I2C_IDW_0__EXT_TAIL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 21) & ~0x00600000U)))
#define SHUB_PORT1_I2C_IDW_0__EXT_TAIL__RESET_VALUE                 0x00000000U
/** @} */

/* macros for field ext_master_drives_ack */
/**
 * @defgroup at_apb_shub_regs_core_ext_master_drives_ack_field ext_master_drives_ack_field
 * @brief macros for field ext_master_drives_ack
 * @details Specifies that master is to drive ack.
 * @{
 */
#define SHUB_PORT1_I2C_IDW_0__EXT_MASTER_DRIVES_ACK__SHIFT                   23
#define SHUB_PORT1_I2C_IDW_0__EXT_MASTER_DRIVES_ACK__WIDTH                    1
#define SHUB_PORT1_I2C_IDW_0__EXT_MASTER_DRIVES_ACK__MASK           0x00800000U
#define SHUB_PORT1_I2C_IDW_0__EXT_MASTER_DRIVES_ACK__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00800000U) >> 23)
#define SHUB_PORT1_I2C_IDW_0__EXT_MASTER_DRIVES_ACK__WRITE(src) \
                    (((uint32_t)(src)\
                    << 23) & 0x00800000U)
#define SHUB_PORT1_I2C_IDW_0__EXT_MASTER_DRIVES_ACK__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | (((uint32_t)(src) <<\
                    23) & 0x00800000U)
#define SHUB_PORT1_I2C_IDW_0__EXT_MASTER_DRIVES_ACK__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 23) & ~0x00800000U)))
#define SHUB_PORT1_I2C_IDW_0__EXT_MASTER_DRIVES_ACK__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(1) << 23)
#define SHUB_PORT1_I2C_IDW_0__EXT_MASTER_DRIVES_ACK__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(0) << 23)
#define SHUB_PORT1_I2C_IDW_0__EXT_MASTER_DRIVES_ACK__RESET_VALUE    0x00000000U
/** @} */

/* macros for field ext_ack_value_to_drive */
/**
 * @defgroup at_apb_shub_regs_core_ext_ack_value_to_drive_field ext_ack_value_to_drive_field
 * @brief macros for field ext_ack_value_to_drive
 * @details If ack is to be driven by master, what value to drive?
 * @{
 */
#define SHUB_PORT1_I2C_IDW_0__EXT_ACK_VALUE_TO_DRIVE__SHIFT                  24
#define SHUB_PORT1_I2C_IDW_0__EXT_ACK_VALUE_TO_DRIVE__WIDTH                   1
#define SHUB_PORT1_I2C_IDW_0__EXT_ACK_VALUE_TO_DRIVE__MASK          0x01000000U
#define SHUB_PORT1_I2C_IDW_0__EXT_ACK_VALUE_TO_DRIVE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x01000000U) >> 24)
#define SHUB_PORT1_I2C_IDW_0__EXT_ACK_VALUE_TO_DRIVE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0x01000000U)
#define SHUB_PORT1_I2C_IDW_0__EXT_ACK_VALUE_TO_DRIVE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | (((uint32_t)(src) <<\
                    24) & 0x01000000U)
#define SHUB_PORT1_I2C_IDW_0__EXT_ACK_VALUE_TO_DRIVE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x01000000U)))
#define SHUB_PORT1_I2C_IDW_0__EXT_ACK_VALUE_TO_DRIVE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(1) << 24)
#define SHUB_PORT1_I2C_IDW_0__EXT_ACK_VALUE_TO_DRIVE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(0) << 24)
#define SHUB_PORT1_I2C_IDW_0__EXT_ACK_VALUE_TO_DRIVE__RESET_VALUE   0x00000000U
/** @} */
#define SHUB_PORT1_I2C_IDW_0__TYPE                                     uint32_t
#define SHUB_PORT1_I2C_IDW_0__READ                                  0x01ffffffU
#define SHUB_PORT1_I2C_IDW_0__WRITE                                 0x01ffffffU
#define SHUB_PORT1_I2C_IDW_0__PRESERVED                             0x01ffffffU
#define SHUB_PORT1_I2C_IDW_0__RESET_VALUE                           0x0001fe00U

#endif /* __SHUB_PORT1_I2C_IDW_0_MACRO__ */

/** @} end of port1_i2c_idw_0 */

/* macros for BlueprintGlobalNameSpace::SHUB_port1_i2c_addr_0 */
/**
 * @defgroup at_apb_shub_regs_core_port1_i2c_addr_0 port1_i2c_addr_0
 * @brief pointer addr of sensor0 on port0 definitions.
 * @{
 */
#ifndef __SHUB_PORT1_I2C_ADDR_0_MACRO__
#define __SHUB_PORT1_I2C_ADDR_0_MACRO__

/* macros for field ext_data_ie_ovrd */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_ie_ovrd_field ext_data_ie_ovrd_field
 * @brief macros for field ext_data_ie_ovrd
 * @details 1 = ie is high  0 = ie is ~oe
 * @{
 */
#define SHUB_PORT1_I2C_ADDR_0__EXT_DATA_IE_OVRD__SHIFT                        0
#define SHUB_PORT1_I2C_ADDR_0__EXT_DATA_IE_OVRD__WIDTH                        1
#define SHUB_PORT1_I2C_ADDR_0__EXT_DATA_IE_OVRD__MASK               0x00000001U
#define SHUB_PORT1_I2C_ADDR_0__EXT_DATA_IE_OVRD__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT1_I2C_ADDR_0__EXT_DATA_IE_OVRD__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT1_I2C_ADDR_0__EXT_DATA_IE_OVRD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define SHUB_PORT1_I2C_ADDR_0__EXT_DATA_IE_OVRD__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define SHUB_PORT1_I2C_ADDR_0__EXT_DATA_IE_OVRD__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define SHUB_PORT1_I2C_ADDR_0__EXT_DATA_IE_OVRD__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define SHUB_PORT1_I2C_ADDR_0__EXT_DATA_IE_OVRD__RESET_VALUE        0x00000000U
/** @} */

/* macros for field ext_data_o */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_o_field ext_data_o_field
 * @brief macros for field ext_data_o
 * @details outbound data; can be device id, address within device, or write data; if it's device id, the LSB is the R/Wb indicator
 * @{
 */
#define SHUB_PORT1_I2C_ADDR_0__EXT_DATA_O__SHIFT                              1
#define SHUB_PORT1_I2C_ADDR_0__EXT_DATA_O__WIDTH                              8
#define SHUB_PORT1_I2C_ADDR_0__EXT_DATA_O__MASK                     0x000001feU
#define SHUB_PORT1_I2C_ADDR_0__EXT_DATA_O__READ(src) \
                    (((uint32_t)(src)\
                    & 0x000001feU) >> 1)
#define SHUB_PORT1_I2C_ADDR_0__EXT_DATA_O__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x000001feU)
#define SHUB_PORT1_I2C_ADDR_0__EXT_DATA_O__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000001feU) | (((uint32_t)(src) <<\
                    1) & 0x000001feU)
#define SHUB_PORT1_I2C_ADDR_0__EXT_DATA_O__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x000001feU)))
#define SHUB_PORT1_I2C_ADDR_0__EXT_DATA_O__RESET_VALUE              0x00000000U
/** @} */

/* macros for field ext_data_oe */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_oe_field ext_data_oe_field
 * @brief macros for field ext_data_oe
 * @details sda output enable per bit
 * @{
 */
#define SHUB_PORT1_I2C_ADDR_0__EXT_DATA_OE__SHIFT                             9
#define SHUB_PORT1_I2C_ADDR_0__EXT_DATA_OE__WIDTH                             8
#define SHUB_PORT1_I2C_ADDR_0__EXT_DATA_OE__MASK                    0x0001fe00U
#define SHUB_PORT1_I2C_ADDR_0__EXT_DATA_OE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0001fe00U) >> 9)
#define SHUB_PORT1_I2C_ADDR_0__EXT_DATA_OE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 9) & 0x0001fe00U)
#define SHUB_PORT1_I2C_ADDR_0__EXT_DATA_OE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0001fe00U) | (((uint32_t)(src) <<\
                    9) & 0x0001fe00U)
#define SHUB_PORT1_I2C_ADDR_0__EXT_DATA_OE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 9) & ~0x0001fe00U)))
#define SHUB_PORT1_I2C_ADDR_0__EXT_DATA_OE__RESET_VALUE             0x000000ffU
/** @} */

/* macros for field ext_data_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_pu_field ext_data_pu_field
 * @brief macros for field ext_data_pu
 * @details sda pin pullup enable
 * @{
 */
#define SHUB_PORT1_I2C_ADDR_0__EXT_DATA_PU__SHIFT                            17
#define SHUB_PORT1_I2C_ADDR_0__EXT_DATA_PU__WIDTH                             1
#define SHUB_PORT1_I2C_ADDR_0__EXT_DATA_PU__MASK                    0x00020000U
#define SHUB_PORT1_I2C_ADDR_0__EXT_DATA_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00020000U) >> 17)
#define SHUB_PORT1_I2C_ADDR_0__EXT_DATA_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 17) & 0x00020000U)
#define SHUB_PORT1_I2C_ADDR_0__EXT_DATA_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | (((uint32_t)(src) <<\
                    17) & 0x00020000U)
#define SHUB_PORT1_I2C_ADDR_0__EXT_DATA_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 17) & ~0x00020000U)))
#define SHUB_PORT1_I2C_ADDR_0__EXT_DATA_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(1) << 17)
#define SHUB_PORT1_I2C_ADDR_0__EXT_DATA_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(0) << 17)
#define SHUB_PORT1_I2C_ADDR_0__EXT_DATA_PU__RESET_VALUE             0x00000000U
/** @} */

/* macros for field ext_clk_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_clk_pu_field ext_clk_pu_field
 * @brief macros for field ext_clk_pu
 * @details sck pin pullup enable
 * @{
 */
#define SHUB_PORT1_I2C_ADDR_0__EXT_CLK_PU__SHIFT                             18
#define SHUB_PORT1_I2C_ADDR_0__EXT_CLK_PU__WIDTH                              1
#define SHUB_PORT1_I2C_ADDR_0__EXT_CLK_PU__MASK                     0x00040000U
#define SHUB_PORT1_I2C_ADDR_0__EXT_CLK_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00040000U) >> 18)
#define SHUB_PORT1_I2C_ADDR_0__EXT_CLK_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 18) & 0x00040000U)
#define SHUB_PORT1_I2C_ADDR_0__EXT_CLK_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | (((uint32_t)(src) <<\
                    18) & 0x00040000U)
#define SHUB_PORT1_I2C_ADDR_0__EXT_CLK_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 18) & ~0x00040000U)))
#define SHUB_PORT1_I2C_ADDR_0__EXT_CLK_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(1) << 18)
#define SHUB_PORT1_I2C_ADDR_0__EXT_CLK_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(0) << 18)
#define SHUB_PORT1_I2C_ADDR_0__EXT_CLK_PU__RESET_VALUE              0x00000000U
/** @} */

/* macros for field ext_head */
/**
 * @defgroup at_apb_shub_regs_core_ext_head_field ext_head_field
 * @brief macros for field ext_head
 * @details Before data transmission starts, what should head be?  0 = start  1 = stall
 * @{
 */
#define SHUB_PORT1_I2C_ADDR_0__EXT_HEAD__SHIFT                               19
#define SHUB_PORT1_I2C_ADDR_0__EXT_HEAD__WIDTH                                2
#define SHUB_PORT1_I2C_ADDR_0__EXT_HEAD__MASK                       0x00180000U
#define SHUB_PORT1_I2C_ADDR_0__EXT_HEAD__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00180000U) >> 19)
#define SHUB_PORT1_I2C_ADDR_0__EXT_HEAD__WRITE(src) \
                    (((uint32_t)(src)\
                    << 19) & 0x00180000U)
#define SHUB_PORT1_I2C_ADDR_0__EXT_HEAD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00180000U) | (((uint32_t)(src) <<\
                    19) & 0x00180000U)
#define SHUB_PORT1_I2C_ADDR_0__EXT_HEAD__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 19) & ~0x00180000U)))
#define SHUB_PORT1_I2C_ADDR_0__EXT_HEAD__RESET_VALUE                0x00000000U
/** @} */

/* macros for field ext_tail */
/**
 * @defgroup at_apb_shub_regs_core_ext_tail_field ext_tail_field
 * @brief macros for field ext_tail
 * @details At end of 8 bits plus ack/nack, what should tail be?  0 = stop  1 = stall  2 = restart
 * @{
 */
#define SHUB_PORT1_I2C_ADDR_0__EXT_TAIL__SHIFT                               21
#define SHUB_PORT1_I2C_ADDR_0__EXT_TAIL__WIDTH                                2
#define SHUB_PORT1_I2C_ADDR_0__EXT_TAIL__MASK                       0x00600000U
#define SHUB_PORT1_I2C_ADDR_0__EXT_TAIL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00600000U) >> 21)
#define SHUB_PORT1_I2C_ADDR_0__EXT_TAIL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 21) & 0x00600000U)
#define SHUB_PORT1_I2C_ADDR_0__EXT_TAIL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00600000U) | (((uint32_t)(src) <<\
                    21) & 0x00600000U)
#define SHUB_PORT1_I2C_ADDR_0__EXT_TAIL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 21) & ~0x00600000U)))
#define SHUB_PORT1_I2C_ADDR_0__EXT_TAIL__RESET_VALUE                0x00000000U
/** @} */

/* macros for field ext_master_drives_ack */
/**
 * @defgroup at_apb_shub_regs_core_ext_master_drives_ack_field ext_master_drives_ack_field
 * @brief macros for field ext_master_drives_ack
 * @details Specifies that master is to drive ack.
 * @{
 */
#define SHUB_PORT1_I2C_ADDR_0__EXT_MASTER_DRIVES_ACK__SHIFT                  23
#define SHUB_PORT1_I2C_ADDR_0__EXT_MASTER_DRIVES_ACK__WIDTH                   1
#define SHUB_PORT1_I2C_ADDR_0__EXT_MASTER_DRIVES_ACK__MASK          0x00800000U
#define SHUB_PORT1_I2C_ADDR_0__EXT_MASTER_DRIVES_ACK__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00800000U) >> 23)
#define SHUB_PORT1_I2C_ADDR_0__EXT_MASTER_DRIVES_ACK__WRITE(src) \
                    (((uint32_t)(src)\
                    << 23) & 0x00800000U)
#define SHUB_PORT1_I2C_ADDR_0__EXT_MASTER_DRIVES_ACK__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | (((uint32_t)(src) <<\
                    23) & 0x00800000U)
#define SHUB_PORT1_I2C_ADDR_0__EXT_MASTER_DRIVES_ACK__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 23) & ~0x00800000U)))
#define SHUB_PORT1_I2C_ADDR_0__EXT_MASTER_DRIVES_ACK__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(1) << 23)
#define SHUB_PORT1_I2C_ADDR_0__EXT_MASTER_DRIVES_ACK__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(0) << 23)
#define SHUB_PORT1_I2C_ADDR_0__EXT_MASTER_DRIVES_ACK__RESET_VALUE   0x00000000U
/** @} */

/* macros for field ext_ack_value_to_drive */
/**
 * @defgroup at_apb_shub_regs_core_ext_ack_value_to_drive_field ext_ack_value_to_drive_field
 * @brief macros for field ext_ack_value_to_drive
 * @details If ack is to be driven by master, what value to drive?
 * @{
 */
#define SHUB_PORT1_I2C_ADDR_0__EXT_ACK_VALUE_TO_DRIVE__SHIFT                 24
#define SHUB_PORT1_I2C_ADDR_0__EXT_ACK_VALUE_TO_DRIVE__WIDTH                  1
#define SHUB_PORT1_I2C_ADDR_0__EXT_ACK_VALUE_TO_DRIVE__MASK         0x01000000U
#define SHUB_PORT1_I2C_ADDR_0__EXT_ACK_VALUE_TO_DRIVE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x01000000U) >> 24)
#define SHUB_PORT1_I2C_ADDR_0__EXT_ACK_VALUE_TO_DRIVE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0x01000000U)
#define SHUB_PORT1_I2C_ADDR_0__EXT_ACK_VALUE_TO_DRIVE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | (((uint32_t)(src) <<\
                    24) & 0x01000000U)
#define SHUB_PORT1_I2C_ADDR_0__EXT_ACK_VALUE_TO_DRIVE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x01000000U)))
#define SHUB_PORT1_I2C_ADDR_0__EXT_ACK_VALUE_TO_DRIVE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(1) << 24)
#define SHUB_PORT1_I2C_ADDR_0__EXT_ACK_VALUE_TO_DRIVE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(0) << 24)
#define SHUB_PORT1_I2C_ADDR_0__EXT_ACK_VALUE_TO_DRIVE__RESET_VALUE  0x00000000U
/** @} */
#define SHUB_PORT1_I2C_ADDR_0__TYPE                                    uint32_t
#define SHUB_PORT1_I2C_ADDR_0__READ                                 0x01ffffffU
#define SHUB_PORT1_I2C_ADDR_0__WRITE                                0x01ffffffU
#define SHUB_PORT1_I2C_ADDR_0__PRESERVED                            0x01ffffffU
#define SHUB_PORT1_I2C_ADDR_0__RESET_VALUE                          0x0001fe00U

#endif /* __SHUB_PORT1_I2C_ADDR_0_MACRO__ */

/** @} end of port1_i2c_addr_0 */

/* macros for BlueprintGlobalNameSpace::SHUB_port1_i2c_idr_0 */
/**
 * @defgroup at_apb_shub_regs_core_port1_i2c_idr_0 port1_i2c_idr_0
 * @brief id(read) of sensor0 on port0 prior to data read definitions.
 * @{
 */
#ifndef __SHUB_PORT1_I2C_IDR_0_MACRO__
#define __SHUB_PORT1_I2C_IDR_0_MACRO__

/* macros for field ext_data_ie_ovrd */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_ie_ovrd_field ext_data_ie_ovrd_field
 * @brief macros for field ext_data_ie_ovrd
 * @details 1 = ie is high  0 = ie is ~oe
 * @{
 */
#define SHUB_PORT1_I2C_IDR_0__EXT_DATA_IE_OVRD__SHIFT                         0
#define SHUB_PORT1_I2C_IDR_0__EXT_DATA_IE_OVRD__WIDTH                         1
#define SHUB_PORT1_I2C_IDR_0__EXT_DATA_IE_OVRD__MASK                0x00000001U
#define SHUB_PORT1_I2C_IDR_0__EXT_DATA_IE_OVRD__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT1_I2C_IDR_0__EXT_DATA_IE_OVRD__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT1_I2C_IDR_0__EXT_DATA_IE_OVRD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define SHUB_PORT1_I2C_IDR_0__EXT_DATA_IE_OVRD__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define SHUB_PORT1_I2C_IDR_0__EXT_DATA_IE_OVRD__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define SHUB_PORT1_I2C_IDR_0__EXT_DATA_IE_OVRD__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define SHUB_PORT1_I2C_IDR_0__EXT_DATA_IE_OVRD__RESET_VALUE         0x00000000U
/** @} */

/* macros for field ext_data_o */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_o_field ext_data_o_field
 * @brief macros for field ext_data_o
 * @details outbound data; can be device id, address within device, or write data; if it's device id, the LSB is the R/Wb indicator
 * @{
 */
#define SHUB_PORT1_I2C_IDR_0__EXT_DATA_O__SHIFT                               1
#define SHUB_PORT1_I2C_IDR_0__EXT_DATA_O__WIDTH                               8
#define SHUB_PORT1_I2C_IDR_0__EXT_DATA_O__MASK                      0x000001feU
#define SHUB_PORT1_I2C_IDR_0__EXT_DATA_O__READ(src) \
                    (((uint32_t)(src)\
                    & 0x000001feU) >> 1)
#define SHUB_PORT1_I2C_IDR_0__EXT_DATA_O__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x000001feU)
#define SHUB_PORT1_I2C_IDR_0__EXT_DATA_O__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000001feU) | (((uint32_t)(src) <<\
                    1) & 0x000001feU)
#define SHUB_PORT1_I2C_IDR_0__EXT_DATA_O__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x000001feU)))
#define SHUB_PORT1_I2C_IDR_0__EXT_DATA_O__RESET_VALUE               0x00000000U
/** @} */

/* macros for field ext_data_oe */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_oe_field ext_data_oe_field
 * @brief macros for field ext_data_oe
 * @details sda output enable per bit
 * @{
 */
#define SHUB_PORT1_I2C_IDR_0__EXT_DATA_OE__SHIFT                              9
#define SHUB_PORT1_I2C_IDR_0__EXT_DATA_OE__WIDTH                              8
#define SHUB_PORT1_I2C_IDR_0__EXT_DATA_OE__MASK                     0x0001fe00U
#define SHUB_PORT1_I2C_IDR_0__EXT_DATA_OE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0001fe00U) >> 9)
#define SHUB_PORT1_I2C_IDR_0__EXT_DATA_OE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 9) & 0x0001fe00U)
#define SHUB_PORT1_I2C_IDR_0__EXT_DATA_OE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0001fe00U) | (((uint32_t)(src) <<\
                    9) & 0x0001fe00U)
#define SHUB_PORT1_I2C_IDR_0__EXT_DATA_OE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 9) & ~0x0001fe00U)))
#define SHUB_PORT1_I2C_IDR_0__EXT_DATA_OE__RESET_VALUE              0x000000ffU
/** @} */

/* macros for field ext_data_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_pu_field ext_data_pu_field
 * @brief macros for field ext_data_pu
 * @details sda pin pullup enable
 * @{
 */
#define SHUB_PORT1_I2C_IDR_0__EXT_DATA_PU__SHIFT                             17
#define SHUB_PORT1_I2C_IDR_0__EXT_DATA_PU__WIDTH                              1
#define SHUB_PORT1_I2C_IDR_0__EXT_DATA_PU__MASK                     0x00020000U
#define SHUB_PORT1_I2C_IDR_0__EXT_DATA_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00020000U) >> 17)
#define SHUB_PORT1_I2C_IDR_0__EXT_DATA_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 17) & 0x00020000U)
#define SHUB_PORT1_I2C_IDR_0__EXT_DATA_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | (((uint32_t)(src) <<\
                    17) & 0x00020000U)
#define SHUB_PORT1_I2C_IDR_0__EXT_DATA_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 17) & ~0x00020000U)))
#define SHUB_PORT1_I2C_IDR_0__EXT_DATA_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(1) << 17)
#define SHUB_PORT1_I2C_IDR_0__EXT_DATA_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(0) << 17)
#define SHUB_PORT1_I2C_IDR_0__EXT_DATA_PU__RESET_VALUE              0x00000000U
/** @} */

/* macros for field ext_clk_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_clk_pu_field ext_clk_pu_field
 * @brief macros for field ext_clk_pu
 * @details sck pin pullup enable
 * @{
 */
#define SHUB_PORT1_I2C_IDR_0__EXT_CLK_PU__SHIFT                              18
#define SHUB_PORT1_I2C_IDR_0__EXT_CLK_PU__WIDTH                               1
#define SHUB_PORT1_I2C_IDR_0__EXT_CLK_PU__MASK                      0x00040000U
#define SHUB_PORT1_I2C_IDR_0__EXT_CLK_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00040000U) >> 18)
#define SHUB_PORT1_I2C_IDR_0__EXT_CLK_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 18) & 0x00040000U)
#define SHUB_PORT1_I2C_IDR_0__EXT_CLK_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | (((uint32_t)(src) <<\
                    18) & 0x00040000U)
#define SHUB_PORT1_I2C_IDR_0__EXT_CLK_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 18) & ~0x00040000U)))
#define SHUB_PORT1_I2C_IDR_0__EXT_CLK_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(1) << 18)
#define SHUB_PORT1_I2C_IDR_0__EXT_CLK_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(0) << 18)
#define SHUB_PORT1_I2C_IDR_0__EXT_CLK_PU__RESET_VALUE               0x00000000U
/** @} */

/* macros for field ext_head */
/**
 * @defgroup at_apb_shub_regs_core_ext_head_field ext_head_field
 * @brief macros for field ext_head
 * @details Before data transmission starts, what should head be?  0 = start  1 = stall
 * @{
 */
#define SHUB_PORT1_I2C_IDR_0__EXT_HEAD__SHIFT                                19
#define SHUB_PORT1_I2C_IDR_0__EXT_HEAD__WIDTH                                 2
#define SHUB_PORT1_I2C_IDR_0__EXT_HEAD__MASK                        0x00180000U
#define SHUB_PORT1_I2C_IDR_0__EXT_HEAD__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00180000U) >> 19)
#define SHUB_PORT1_I2C_IDR_0__EXT_HEAD__WRITE(src) \
                    (((uint32_t)(src)\
                    << 19) & 0x00180000U)
#define SHUB_PORT1_I2C_IDR_0__EXT_HEAD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00180000U) | (((uint32_t)(src) <<\
                    19) & 0x00180000U)
#define SHUB_PORT1_I2C_IDR_0__EXT_HEAD__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 19) & ~0x00180000U)))
#define SHUB_PORT1_I2C_IDR_0__EXT_HEAD__RESET_VALUE                 0x00000000U
/** @} */

/* macros for field ext_tail */
/**
 * @defgroup at_apb_shub_regs_core_ext_tail_field ext_tail_field
 * @brief macros for field ext_tail
 * @details At end of 8 bits plus ack/nack, what should tail be?  0 = stop  1 = stall  2 = restart
 * @{
 */
#define SHUB_PORT1_I2C_IDR_0__EXT_TAIL__SHIFT                                21
#define SHUB_PORT1_I2C_IDR_0__EXT_TAIL__WIDTH                                 2
#define SHUB_PORT1_I2C_IDR_0__EXT_TAIL__MASK                        0x00600000U
#define SHUB_PORT1_I2C_IDR_0__EXT_TAIL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00600000U) >> 21)
#define SHUB_PORT1_I2C_IDR_0__EXT_TAIL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 21) & 0x00600000U)
#define SHUB_PORT1_I2C_IDR_0__EXT_TAIL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00600000U) | (((uint32_t)(src) <<\
                    21) & 0x00600000U)
#define SHUB_PORT1_I2C_IDR_0__EXT_TAIL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 21) & ~0x00600000U)))
#define SHUB_PORT1_I2C_IDR_0__EXT_TAIL__RESET_VALUE                 0x00000000U
/** @} */

/* macros for field ext_master_drives_ack */
/**
 * @defgroup at_apb_shub_regs_core_ext_master_drives_ack_field ext_master_drives_ack_field
 * @brief macros for field ext_master_drives_ack
 * @details Specifies that master is to drive ack.
 * @{
 */
#define SHUB_PORT1_I2C_IDR_0__EXT_MASTER_DRIVES_ACK__SHIFT                   23
#define SHUB_PORT1_I2C_IDR_0__EXT_MASTER_DRIVES_ACK__WIDTH                    1
#define SHUB_PORT1_I2C_IDR_0__EXT_MASTER_DRIVES_ACK__MASK           0x00800000U
#define SHUB_PORT1_I2C_IDR_0__EXT_MASTER_DRIVES_ACK__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00800000U) >> 23)
#define SHUB_PORT1_I2C_IDR_0__EXT_MASTER_DRIVES_ACK__WRITE(src) \
                    (((uint32_t)(src)\
                    << 23) & 0x00800000U)
#define SHUB_PORT1_I2C_IDR_0__EXT_MASTER_DRIVES_ACK__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | (((uint32_t)(src) <<\
                    23) & 0x00800000U)
#define SHUB_PORT1_I2C_IDR_0__EXT_MASTER_DRIVES_ACK__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 23) & ~0x00800000U)))
#define SHUB_PORT1_I2C_IDR_0__EXT_MASTER_DRIVES_ACK__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(1) << 23)
#define SHUB_PORT1_I2C_IDR_0__EXT_MASTER_DRIVES_ACK__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(0) << 23)
#define SHUB_PORT1_I2C_IDR_0__EXT_MASTER_DRIVES_ACK__RESET_VALUE    0x00000000U
/** @} */

/* macros for field ext_ack_value_to_drive */
/**
 * @defgroup at_apb_shub_regs_core_ext_ack_value_to_drive_field ext_ack_value_to_drive_field
 * @brief macros for field ext_ack_value_to_drive
 * @details If ack is to be driven by master, what value to drive?
 * @{
 */
#define SHUB_PORT1_I2C_IDR_0__EXT_ACK_VALUE_TO_DRIVE__SHIFT                  24
#define SHUB_PORT1_I2C_IDR_0__EXT_ACK_VALUE_TO_DRIVE__WIDTH                   1
#define SHUB_PORT1_I2C_IDR_0__EXT_ACK_VALUE_TO_DRIVE__MASK          0x01000000U
#define SHUB_PORT1_I2C_IDR_0__EXT_ACK_VALUE_TO_DRIVE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x01000000U) >> 24)
#define SHUB_PORT1_I2C_IDR_0__EXT_ACK_VALUE_TO_DRIVE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0x01000000U)
#define SHUB_PORT1_I2C_IDR_0__EXT_ACK_VALUE_TO_DRIVE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | (((uint32_t)(src) <<\
                    24) & 0x01000000U)
#define SHUB_PORT1_I2C_IDR_0__EXT_ACK_VALUE_TO_DRIVE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x01000000U)))
#define SHUB_PORT1_I2C_IDR_0__EXT_ACK_VALUE_TO_DRIVE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(1) << 24)
#define SHUB_PORT1_I2C_IDR_0__EXT_ACK_VALUE_TO_DRIVE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(0) << 24)
#define SHUB_PORT1_I2C_IDR_0__EXT_ACK_VALUE_TO_DRIVE__RESET_VALUE   0x00000000U
/** @} */
#define SHUB_PORT1_I2C_IDR_0__TYPE                                     uint32_t
#define SHUB_PORT1_I2C_IDR_0__READ                                  0x01ffffffU
#define SHUB_PORT1_I2C_IDR_0__WRITE                                 0x01ffffffU
#define SHUB_PORT1_I2C_IDR_0__PRESERVED                             0x01ffffffU
#define SHUB_PORT1_I2C_IDR_0__RESET_VALUE                           0x0001fe00U

#endif /* __SHUB_PORT1_I2C_IDR_0_MACRO__ */

/** @} end of port1_i2c_idr_0 */

/* macros for BlueprintGlobalNameSpace::SHUB_port1_i2c_dat_ctrl */
/**
 * @defgroup at_apb_shub_regs_core_port1_i2c_dat_ctrl port1_i2c_dat_ctrl
 * @brief slave(port0) data byte read (used in not the last byte) definitions.
 * @{
 */
#ifndef __SHUB_PORT1_I2C_DAT_CTRL_MACRO__
#define __SHUB_PORT1_I2C_DAT_CTRL_MACRO__

/* macros for field ext_data_ie_ovrd */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_ie_ovrd_field ext_data_ie_ovrd_field
 * @brief macros for field ext_data_ie_ovrd
 * @details 1 = ie is high  0 = ie is ~oe
 * @{
 */
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_DATA_IE_OVRD__SHIFT                      0
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_DATA_IE_OVRD__WIDTH                      1
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_DATA_IE_OVRD__MASK             0x00000001U
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_DATA_IE_OVRD__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_DATA_IE_OVRD__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_DATA_IE_OVRD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_DATA_IE_OVRD__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_DATA_IE_OVRD__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_DATA_IE_OVRD__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_DATA_IE_OVRD__RESET_VALUE      0x00000000U
/** @} */

/* macros for field ext_data_o */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_o_field ext_data_o_field
 * @brief macros for field ext_data_o
 * @details outbound data; can be device id, address within device, or write data; if it's device id, the LSB is the R/Wb indicator
 * @{
 */
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_DATA_O__SHIFT                            1
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_DATA_O__WIDTH                            8
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_DATA_O__MASK                   0x000001feU
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_DATA_O__READ(src) \
                    (((uint32_t)(src)\
                    & 0x000001feU) >> 1)
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_DATA_O__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x000001feU)
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_DATA_O__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000001feU) | (((uint32_t)(src) <<\
                    1) & 0x000001feU)
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_DATA_O__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x000001feU)))
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_DATA_O__RESET_VALUE            0x00000000U
/** @} */

/* macros for field ext_data_oe */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_oe_field ext_data_oe_field
 * @brief macros for field ext_data_oe
 * @details sda output enable per bit
 * @{
 */
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_DATA_OE__SHIFT                           9
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_DATA_OE__WIDTH                           8
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_DATA_OE__MASK                  0x0001fe00U
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_DATA_OE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0001fe00U) >> 9)
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_DATA_OE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 9) & 0x0001fe00U)
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_DATA_OE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0001fe00U) | (((uint32_t)(src) <<\
                    9) & 0x0001fe00U)
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_DATA_OE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 9) & ~0x0001fe00U)))
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_DATA_OE__RESET_VALUE           0x000000ffU
/** @} */

/* macros for field ext_data_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_pu_field ext_data_pu_field
 * @brief macros for field ext_data_pu
 * @details sda pin pullup enable
 * @{
 */
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_DATA_PU__SHIFT                          17
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_DATA_PU__WIDTH                           1
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_DATA_PU__MASK                  0x00020000U
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_DATA_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00020000U) >> 17)
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_DATA_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 17) & 0x00020000U)
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_DATA_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | (((uint32_t)(src) <<\
                    17) & 0x00020000U)
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_DATA_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 17) & ~0x00020000U)))
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_DATA_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(1) << 17)
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_DATA_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(0) << 17)
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_DATA_PU__RESET_VALUE           0x00000000U
/** @} */

/* macros for field ext_clk_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_clk_pu_field ext_clk_pu_field
 * @brief macros for field ext_clk_pu
 * @details sck pin pullup enable
 * @{
 */
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_CLK_PU__SHIFT                           18
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_CLK_PU__WIDTH                            1
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_CLK_PU__MASK                   0x00040000U
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_CLK_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00040000U) >> 18)
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_CLK_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 18) & 0x00040000U)
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_CLK_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | (((uint32_t)(src) <<\
                    18) & 0x00040000U)
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_CLK_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 18) & ~0x00040000U)))
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_CLK_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(1) << 18)
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_CLK_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(0) << 18)
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_CLK_PU__RESET_VALUE            0x00000000U
/** @} */

/* macros for field ext_head */
/**
 * @defgroup at_apb_shub_regs_core_ext_head_field ext_head_field
 * @brief macros for field ext_head
 * @details Before data transmission starts, what should head be?  0 = start  1 = stall
 * @{
 */
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_HEAD__SHIFT                             19
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_HEAD__WIDTH                              2
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_HEAD__MASK                     0x00180000U
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_HEAD__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00180000U) >> 19)
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_HEAD__WRITE(src) \
                    (((uint32_t)(src)\
                    << 19) & 0x00180000U)
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_HEAD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00180000U) | (((uint32_t)(src) <<\
                    19) & 0x00180000U)
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_HEAD__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 19) & ~0x00180000U)))
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_HEAD__RESET_VALUE              0x00000000U
/** @} */

/* macros for field ext_tail */
/**
 * @defgroup at_apb_shub_regs_core_ext_tail_field ext_tail_field
 * @brief macros for field ext_tail
 * @details At end of 8 bits plus ack/nack, what should tail be?  0 = stop  1 = stall  2 = restart
 * @{
 */
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_TAIL__SHIFT                             21
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_TAIL__WIDTH                              2
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_TAIL__MASK                     0x00600000U
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_TAIL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00600000U) >> 21)
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_TAIL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 21) & 0x00600000U)
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_TAIL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00600000U) | (((uint32_t)(src) <<\
                    21) & 0x00600000U)
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_TAIL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 21) & ~0x00600000U)))
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_TAIL__RESET_VALUE              0x00000000U
/** @} */

/* macros for field ext_master_drives_ack */
/**
 * @defgroup at_apb_shub_regs_core_ext_master_drives_ack_field ext_master_drives_ack_field
 * @brief macros for field ext_master_drives_ack
 * @details Specifies that master is to drive ack.
 * @{
 */
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_MASTER_DRIVES_ACK__SHIFT                23
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_MASTER_DRIVES_ACK__WIDTH                 1
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_MASTER_DRIVES_ACK__MASK        0x00800000U
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_MASTER_DRIVES_ACK__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00800000U) >> 23)
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_MASTER_DRIVES_ACK__WRITE(src) \
                    (((uint32_t)(src)\
                    << 23) & 0x00800000U)
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_MASTER_DRIVES_ACK__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | (((uint32_t)(src) <<\
                    23) & 0x00800000U)
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_MASTER_DRIVES_ACK__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 23) & ~0x00800000U)))
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_MASTER_DRIVES_ACK__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(1) << 23)
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_MASTER_DRIVES_ACK__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(0) << 23)
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_MASTER_DRIVES_ACK__RESET_VALUE 0x00000000U
/** @} */

/* macros for field ext_ack_value_to_drive */
/**
 * @defgroup at_apb_shub_regs_core_ext_ack_value_to_drive_field ext_ack_value_to_drive_field
 * @brief macros for field ext_ack_value_to_drive
 * @details If ack is to be driven by master, what value to drive?
 * @{
 */
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_ACK_VALUE_TO_DRIVE__SHIFT               24
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_ACK_VALUE_TO_DRIVE__WIDTH                1
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_ACK_VALUE_TO_DRIVE__MASK       0x01000000U
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_ACK_VALUE_TO_DRIVE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x01000000U) >> 24)
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_ACK_VALUE_TO_DRIVE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0x01000000U)
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_ACK_VALUE_TO_DRIVE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | (((uint32_t)(src) <<\
                    24) & 0x01000000U)
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_ACK_VALUE_TO_DRIVE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x01000000U)))
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_ACK_VALUE_TO_DRIVE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(1) << 24)
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_ACK_VALUE_TO_DRIVE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(0) << 24)
#define SHUB_PORT1_I2C_DAT_CTRL__EXT_ACK_VALUE_TO_DRIVE__RESET_VALUE \
                    0x00000000U
/** @} */
#define SHUB_PORT1_I2C_DAT_CTRL__TYPE                                  uint32_t
#define SHUB_PORT1_I2C_DAT_CTRL__READ                               0x01ffffffU
#define SHUB_PORT1_I2C_DAT_CTRL__WRITE                              0x01ffffffU
#define SHUB_PORT1_I2C_DAT_CTRL__PRESERVED                          0x01ffffffU
#define SHUB_PORT1_I2C_DAT_CTRL__RESET_VALUE                        0x0001fe00U

#endif /* __SHUB_PORT1_I2C_DAT_CTRL_MACRO__ */

/** @} end of port1_i2c_dat_ctrl */

/* macros for BlueprintGlobalNameSpace::SHUB_port1_i2c_dat_last_ctrl */
/**
 * @defgroup at_apb_shub_regs_core_port1_i2c_dat_last_ctrl port1_i2c_dat_last_ctrl
 * @brief slave(port0) data byte read (used in the last byte) definitions.
 * @{
 */
#ifndef __SHUB_PORT1_I2C_DAT_LAST_CTRL_MACRO__
#define __SHUB_PORT1_I2C_DAT_LAST_CTRL_MACRO__

/* macros for field ext_data_ie_ovrd */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_ie_ovrd_field ext_data_ie_ovrd_field
 * @brief macros for field ext_data_ie_ovrd
 * @details 1 = ie is high  0 = ie is ~oe
 * @{
 */
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_DATA_IE_OVRD__SHIFT                 0
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_DATA_IE_OVRD__WIDTH                 1
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_DATA_IE_OVRD__MASK        0x00000001U
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_DATA_IE_OVRD__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_DATA_IE_OVRD__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_DATA_IE_OVRD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_DATA_IE_OVRD__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_DATA_IE_OVRD__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_DATA_IE_OVRD__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_DATA_IE_OVRD__RESET_VALUE 0x00000000U
/** @} */

/* macros for field ext_data_o */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_o_field ext_data_o_field
 * @brief macros for field ext_data_o
 * @details outbound data; can be device id, address within device, or write data; if it's device id, the LSB is the R/Wb indicator
 * @{
 */
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_DATA_O__SHIFT                       1
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_DATA_O__WIDTH                       8
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_DATA_O__MASK              0x000001feU
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_DATA_O__READ(src) \
                    (((uint32_t)(src)\
                    & 0x000001feU) >> 1)
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_DATA_O__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x000001feU)
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_DATA_O__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000001feU) | (((uint32_t)(src) <<\
                    1) & 0x000001feU)
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_DATA_O__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x000001feU)))
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_DATA_O__RESET_VALUE       0x00000000U
/** @} */

/* macros for field ext_data_oe */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_oe_field ext_data_oe_field
 * @brief macros for field ext_data_oe
 * @details sda output enable per bit
 * @{
 */
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_DATA_OE__SHIFT                      9
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_DATA_OE__WIDTH                      8
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_DATA_OE__MASK             0x0001fe00U
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_DATA_OE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0001fe00U) >> 9)
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_DATA_OE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 9) & 0x0001fe00U)
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_DATA_OE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0001fe00U) | (((uint32_t)(src) <<\
                    9) & 0x0001fe00U)
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_DATA_OE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 9) & ~0x0001fe00U)))
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_DATA_OE__RESET_VALUE      0x000000ffU
/** @} */

/* macros for field ext_data_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_data_pu_field ext_data_pu_field
 * @brief macros for field ext_data_pu
 * @details sda pin pullup enable
 * @{
 */
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_DATA_PU__SHIFT                     17
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_DATA_PU__WIDTH                      1
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_DATA_PU__MASK             0x00020000U
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_DATA_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00020000U) >> 17)
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_DATA_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 17) & 0x00020000U)
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_DATA_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | (((uint32_t)(src) <<\
                    17) & 0x00020000U)
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_DATA_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 17) & ~0x00020000U)))
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_DATA_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(1) << 17)
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_DATA_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00020000U) | ((uint32_t)(0) << 17)
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_DATA_PU__RESET_VALUE      0x00000000U
/** @} */

/* macros for field ext_clk_pu */
/**
 * @defgroup at_apb_shub_regs_core_ext_clk_pu_field ext_clk_pu_field
 * @brief macros for field ext_clk_pu
 * @details sck pin pullup enable
 * @{
 */
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_CLK_PU__SHIFT                      18
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_CLK_PU__WIDTH                       1
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_CLK_PU__MASK              0x00040000U
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_CLK_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00040000U) >> 18)
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_CLK_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 18) & 0x00040000U)
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_CLK_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | (((uint32_t)(src) <<\
                    18) & 0x00040000U)
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_CLK_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 18) & ~0x00040000U)))
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_CLK_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(1) << 18)
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_CLK_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00040000U) | ((uint32_t)(0) << 18)
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_CLK_PU__RESET_VALUE       0x00000000U
/** @} */

/* macros for field ext_head */
/**
 * @defgroup at_apb_shub_regs_core_ext_head_field ext_head_field
 * @brief macros for field ext_head
 * @details Before data transmission starts, what should head be?  0 = start  1 = stall
 * @{
 */
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_HEAD__SHIFT                        19
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_HEAD__WIDTH                         2
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_HEAD__MASK                0x00180000U
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_HEAD__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00180000U) >> 19)
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_HEAD__WRITE(src) \
                    (((uint32_t)(src)\
                    << 19) & 0x00180000U)
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_HEAD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00180000U) | (((uint32_t)(src) <<\
                    19) & 0x00180000U)
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_HEAD__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 19) & ~0x00180000U)))
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_HEAD__RESET_VALUE         0x00000000U
/** @} */

/* macros for field ext_tail */
/**
 * @defgroup at_apb_shub_regs_core_ext_tail_field ext_tail_field
 * @brief macros for field ext_tail
 * @details At end of 8 bits plus ack/nack, what should tail be?  0 = stop  1 = stall  2 = restart
 * @{
 */
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_TAIL__SHIFT                        21
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_TAIL__WIDTH                         2
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_TAIL__MASK                0x00600000U
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_TAIL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00600000U) >> 21)
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_TAIL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 21) & 0x00600000U)
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_TAIL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00600000U) | (((uint32_t)(src) <<\
                    21) & 0x00600000U)
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_TAIL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 21) & ~0x00600000U)))
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_TAIL__RESET_VALUE         0x00000000U
/** @} */

/* macros for field ext_master_drives_ack */
/**
 * @defgroup at_apb_shub_regs_core_ext_master_drives_ack_field ext_master_drives_ack_field
 * @brief macros for field ext_master_drives_ack
 * @details Specifies that master is to drive ack.
 * @{
 */
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_MASTER_DRIVES_ACK__SHIFT           23
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_MASTER_DRIVES_ACK__WIDTH            1
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_MASTER_DRIVES_ACK__MASK   0x00800000U
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_MASTER_DRIVES_ACK__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00800000U) >> 23)
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_MASTER_DRIVES_ACK__WRITE(src) \
                    (((uint32_t)(src)\
                    << 23) & 0x00800000U)
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_MASTER_DRIVES_ACK__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | (((uint32_t)(src) <<\
                    23) & 0x00800000U)
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_MASTER_DRIVES_ACK__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 23) & ~0x00800000U)))
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_MASTER_DRIVES_ACK__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(1) << 23)
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_MASTER_DRIVES_ACK__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00800000U) | ((uint32_t)(0) << 23)
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_MASTER_DRIVES_ACK__RESET_VALUE \
                    0x00000000U
/** @} */

/* macros for field ext_ack_value_to_drive */
/**
 * @defgroup at_apb_shub_regs_core_ext_ack_value_to_drive_field ext_ack_value_to_drive_field
 * @brief macros for field ext_ack_value_to_drive
 * @details If ack is to be driven by master, what value to drive?
 * @{
 */
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_ACK_VALUE_TO_DRIVE__SHIFT          24
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_ACK_VALUE_TO_DRIVE__WIDTH           1
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_ACK_VALUE_TO_DRIVE__MASK  0x01000000U
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_ACK_VALUE_TO_DRIVE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x01000000U) >> 24)
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_ACK_VALUE_TO_DRIVE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0x01000000U)
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_ACK_VALUE_TO_DRIVE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | (((uint32_t)(src) <<\
                    24) & 0x01000000U)
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_ACK_VALUE_TO_DRIVE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x01000000U)))
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_ACK_VALUE_TO_DRIVE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(1) << 24)
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_ACK_VALUE_TO_DRIVE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(0) << 24)
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__EXT_ACK_VALUE_TO_DRIVE__RESET_VALUE \
                    0x00000000U
/** @} */
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__TYPE                             uint32_t
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__READ                          0x01ffffffU
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__WRITE                         0x01ffffffU
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__PRESERVED                     0x01ffffffU
#define SHUB_PORT1_I2C_DAT_LAST_CTRL__RESET_VALUE                   0x0001fe00U

#endif /* __SHUB_PORT1_I2C_DAT_LAST_CTRL_MACRO__ */

/** @} end of port1_i2c_dat_last_ctrl */

/* macros for BlueprintGlobalNameSpace::SHUB_port1_alm0_quan_ctrl */
/**
 * @defgroup at_apb_shub_regs_core_port1_alm0_quan_ctrl port1_alm0_quan_ctrl
 * @brief alarm0 quantity's definition definitions.
 * @{
 */
#ifndef __SHUB_PORT1_ALM0_QUAN_CTRL_MACRO__
#define __SHUB_PORT1_ALM0_QUAN_CTRL_MACRO__

/* macros for field quan0_pos */
/**
 * @defgroup at_apb_shub_regs_core_quan0_pos_field quan0_pos_field
 * @brief macros for field quan0_pos
 * @details starting position of the quantity 0
 * @{
 */
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN0_POS__SHIFT                           0
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN0_POS__WIDTH                           5
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN0_POS__MASK                  0x0000001fU
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN0_POS__READ(src) \
                    ((uint32_t)(src)\
                    & 0x0000001fU)
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN0_POS__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x0000001fU)
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN0_POS__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000001fU) | ((uint32_t)(src) &\
                    0x0000001fU)
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN0_POS__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x0000001fU)))
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN0_POS__RESET_VALUE           0x00000000U
/** @} */

/* macros for field quan1_pos */
/**
 * @defgroup at_apb_shub_regs_core_quan1_pos_field quan1_pos_field
 * @brief macros for field quan1_pos
 * @details starting position of the quantity 1
 * @{
 */
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN1_POS__SHIFT                           5
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN1_POS__WIDTH                           5
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN1_POS__MASK                  0x000003e0U
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN1_POS__READ(src) \
                    (((uint32_t)(src)\
                    & 0x000003e0U) >> 5)
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN1_POS__WRITE(src) \
                    (((uint32_t)(src)\
                    << 5) & 0x000003e0U)
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN1_POS__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000003e0U) | (((uint32_t)(src) <<\
                    5) & 0x000003e0U)
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN1_POS__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 5) & ~0x000003e0U)))
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN1_POS__RESET_VALUE           0x00000000U
/** @} */

/* macros for field quan2_pos */
/**
 * @defgroup at_apb_shub_regs_core_quan2_pos_field quan2_pos_field
 * @brief macros for field quan2_pos
 * @details starting position of the quantity 2
 * @{
 */
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN2_POS__SHIFT                          10
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN2_POS__WIDTH                           5
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN2_POS__MASK                  0x00007c00U
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN2_POS__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00007c00U) >> 10)
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN2_POS__WRITE(src) \
                    (((uint32_t)(src)\
                    << 10) & 0x00007c00U)
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN2_POS__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00007c00U) | (((uint32_t)(src) <<\
                    10) & 0x00007c00U)
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN2_POS__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 10) & ~0x00007c00U)))
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN2_POS__RESET_VALUE           0x00000000U
/** @} */

/* macros for field quan3_pos */
/**
 * @defgroup at_apb_shub_regs_core_quan3_pos_field quan3_pos_field
 * @brief macros for field quan3_pos
 * @details starting position of the quantity 3
 * @{
 */
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN3_POS__SHIFT                          15
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN3_POS__WIDTH                           5
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN3_POS__MASK                  0x000f8000U
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN3_POS__READ(src) \
                    (((uint32_t)(src)\
                    & 0x000f8000U) >> 15)
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN3_POS__WRITE(src) \
                    (((uint32_t)(src)\
                    << 15) & 0x000f8000U)
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN3_POS__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000f8000U) | (((uint32_t)(src) <<\
                    15) & 0x000f8000U)
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN3_POS__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 15) & ~0x000f8000U)))
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN3_POS__RESET_VALUE           0x00000000U
/** @} */

/* macros for field quan0_size */
/**
 * @defgroup at_apb_shub_regs_core_quan0_size_field quan0_size_field
 * @brief macros for field quan0_size
 * @details number of bytes making up the quantity data = programmed quan0_size + 1; must be < 2 (3 bytes max)
 * @{
 */
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN0_SIZE__SHIFT                         20
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN0_SIZE__WIDTH                          2
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN0_SIZE__MASK                 0x00300000U
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN0_SIZE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00300000U) >> 20)
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN0_SIZE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 20) & 0x00300000U)
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN0_SIZE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00300000U) | (((uint32_t)(src) <<\
                    20) & 0x00300000U)
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN0_SIZE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 20) & ~0x00300000U)))
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN0_SIZE__RESET_VALUE          0x00000001U
/** @} */

/* macros for field quan1_size */
/**
 * @defgroup at_apb_shub_regs_core_quan1_size_field quan1_size_field
 * @brief macros for field quan1_size
 * @details number of bytes making up the quantity data = programmed quan1_size + 1; must be < 2 (3 bytes max)
 * @{
 */
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN1_SIZE__SHIFT                         22
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN1_SIZE__WIDTH                          2
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN1_SIZE__MASK                 0x00c00000U
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN1_SIZE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00c00000U) >> 22)
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN1_SIZE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 22) & 0x00c00000U)
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN1_SIZE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00c00000U) | (((uint32_t)(src) <<\
                    22) & 0x00c00000U)
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN1_SIZE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 22) & ~0x00c00000U)))
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN1_SIZE__RESET_VALUE          0x00000001U
/** @} */

/* macros for field quan2_size */
/**
 * @defgroup at_apb_shub_regs_core_quan2_size_field quan2_size_field
 * @brief macros for field quan2_size
 * @details number of bytes making up the quantity data = programmed quan2_size + 1; must be < 2 (3 bytes max)
 * @{
 */
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN2_SIZE__SHIFT                         24
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN2_SIZE__WIDTH                          2
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN2_SIZE__MASK                 0x03000000U
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN2_SIZE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x03000000U) >> 24)
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN2_SIZE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0x03000000U)
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN2_SIZE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x03000000U) | (((uint32_t)(src) <<\
                    24) & 0x03000000U)
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN2_SIZE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x03000000U)))
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN2_SIZE__RESET_VALUE          0x00000001U
/** @} */

/* macros for field quan3_size */
/**
 * @defgroup at_apb_shub_regs_core_quan3_size_field quan3_size_field
 * @brief macros for field quan3_size
 * @details number of bytes making up the quantity data = programmed quan3_size + 1; must be < 2 (3 bytes max)
 * @{
 */
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN3_SIZE__SHIFT                         26
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN3_SIZE__WIDTH                          2
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN3_SIZE__MASK                 0x0c000000U
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN3_SIZE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0c000000U) >> 26)
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN3_SIZE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 26) & 0x0c000000U)
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN3_SIZE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0c000000U) | (((uint32_t)(src) <<\
                    26) & 0x0c000000U)
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN3_SIZE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 26) & ~0x0c000000U)))
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN3_SIZE__RESET_VALUE          0x00000001U
/** @} */

/* macros for field lsb_first */
/**
 * @defgroup at_apb_shub_regs_core_lsb_first_field lsb_first_field
 * @brief macros for field lsb_first
 * @details 1= least significant byte comes in first ; 0= most significant byte comes in first
 * @{
 */
#define SHUB_PORT1_ALM0_QUAN_CTRL__LSB_FIRST__SHIFT                          30
#define SHUB_PORT1_ALM0_QUAN_CTRL__LSB_FIRST__WIDTH                           1
#define SHUB_PORT1_ALM0_QUAN_CTRL__LSB_FIRST__MASK                  0x40000000U
#define SHUB_PORT1_ALM0_QUAN_CTRL__LSB_FIRST__READ(src) \
                    (((uint32_t)(src)\
                    & 0x40000000U) >> 30)
#define SHUB_PORT1_ALM0_QUAN_CTRL__LSB_FIRST__WRITE(src) \
                    (((uint32_t)(src)\
                    << 30) & 0x40000000U)
#define SHUB_PORT1_ALM0_QUAN_CTRL__LSB_FIRST__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x40000000U) | (((uint32_t)(src) <<\
                    30) & 0x40000000U)
#define SHUB_PORT1_ALM0_QUAN_CTRL__LSB_FIRST__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 30) & ~0x40000000U)))
#define SHUB_PORT1_ALM0_QUAN_CTRL__LSB_FIRST__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x40000000U) | ((uint32_t)(1) << 30)
#define SHUB_PORT1_ALM0_QUAN_CTRL__LSB_FIRST__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x40000000U) | ((uint32_t)(0) << 30)
#define SHUB_PORT1_ALM0_QUAN_CTRL__LSB_FIRST__RESET_VALUE           0x00000000U
/** @} */

/* macros for field quan_dat_is_signed */
/**
 * @defgroup at_apb_shub_regs_core_quan_dat_is_signed_field quan_dat_is_signed_field
 * @brief macros for field quan_dat_is_signed
 * @details quantity data is a signed data
 * @{
 */
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN_DAT_IS_SIGNED__SHIFT                 31
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN_DAT_IS_SIGNED__WIDTH                  1
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN_DAT_IS_SIGNED__MASK         0x80000000U
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN_DAT_IS_SIGNED__READ(src) \
                    (((uint32_t)(src)\
                    & 0x80000000U) >> 31)
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN_DAT_IS_SIGNED__WRITE(src) \
                    (((uint32_t)(src)\
                    << 31) & 0x80000000U)
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN_DAT_IS_SIGNED__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x80000000U) | (((uint32_t)(src) <<\
                    31) & 0x80000000U)
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN_DAT_IS_SIGNED__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 31) & ~0x80000000U)))
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN_DAT_IS_SIGNED__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x80000000U) | ((uint32_t)(1) << 31)
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN_DAT_IS_SIGNED__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x80000000U) | ((uint32_t)(0) << 31)
#define SHUB_PORT1_ALM0_QUAN_CTRL__QUAN_DAT_IS_SIGNED__RESET_VALUE  0x00000000U
/** @} */
#define SHUB_PORT1_ALM0_QUAN_CTRL__TYPE                                uint32_t
#define SHUB_PORT1_ALM0_QUAN_CTRL__READ                             0xcfffffffU
#define SHUB_PORT1_ALM0_QUAN_CTRL__WRITE                            0xcfffffffU
#define SHUB_PORT1_ALM0_QUAN_CTRL__PRESERVED                        0xcfffffffU
#define SHUB_PORT1_ALM0_QUAN_CTRL__RESET_VALUE                      0x05500000U

#endif /* __SHUB_PORT1_ALM0_QUAN_CTRL_MACRO__ */

/** @} end of port1_alm0_quan_ctrl */

/* macros for BlueprintGlobalNameSpace::SHUB_port1_alm0_trig_ctrl */
/**
 * @defgroup at_apb_shub_regs_core_port1_alm0_trig_ctrl port1_alm0_trig_ctrl
 * @brief alarm0 trigger function. trigger = trig_func_en( out_of_range(quan3), out_of_range(quan2),out_of_range(quan1),out_of_range(quan0)) definitions.
 * @{
 */
#ifndef __SHUB_PORT1_ALM0_TRIG_CTRL_MACRO__
#define __SHUB_PORT1_ALM0_TRIG_CTRL_MACRO__

/* macros for field trig_func_en */
/**
 * @defgroup at_apb_shub_regs_core_trig_func_en_field trig_func_en_field
 * @brief macros for field trig_func_en
 * @details trigger function.
 * @{
 */
#define SHUB_PORT1_ALM0_TRIG_CTRL__TRIG_FUNC_EN__SHIFT                        0
#define SHUB_PORT1_ALM0_TRIG_CTRL__TRIG_FUNC_EN__WIDTH                       16
#define SHUB_PORT1_ALM0_TRIG_CTRL__TRIG_FUNC_EN__MASK               0x0000ffffU
#define SHUB_PORT1_ALM0_TRIG_CTRL__TRIG_FUNC_EN__READ(src) \
                    ((uint32_t)(src)\
                    & 0x0000ffffU)
#define SHUB_PORT1_ALM0_TRIG_CTRL__TRIG_FUNC_EN__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x0000ffffU)
#define SHUB_PORT1_ALM0_TRIG_CTRL__TRIG_FUNC_EN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ffffU) | ((uint32_t)(src) &\
                    0x0000ffffU)
#define SHUB_PORT1_ALM0_TRIG_CTRL__TRIG_FUNC_EN__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x0000ffffU)))
#define SHUB_PORT1_ALM0_TRIG_CTRL__TRIG_FUNC_EN__RESET_VALUE        0x00000000U
/** @} */
#define SHUB_PORT1_ALM0_TRIG_CTRL__TYPE                                uint32_t
#define SHUB_PORT1_ALM0_TRIG_CTRL__READ                             0x0000ffffU
#define SHUB_PORT1_ALM0_TRIG_CTRL__WRITE                            0x0000ffffU
#define SHUB_PORT1_ALM0_TRIG_CTRL__PRESERVED                        0x0000ffffU
#define SHUB_PORT1_ALM0_TRIG_CTRL__RESET_VALUE                      0x00000000U

#endif /* __SHUB_PORT1_ALM0_TRIG_CTRL_MACRO__ */

/** @} end of port1_alm0_trig_ctrl */

/* macros for BlueprintGlobalNameSpace::SHUB_port1_alm0_thrhld_max_0 */
/**
 * @defgroup at_apb_shub_regs_core_port1_alm0_thrhld_max_0 port1_alm0_thrhld_max_0
 * @brief 4 bytes out of 12 used to construct reference quantities definitions.
 * @{
 */
#ifndef __SHUB_PORT1_ALM0_THRHLD_MAX_0_MACRO__
#define __SHUB_PORT1_ALM0_THRHLD_MAX_0_MACRO__

/* macros for field byte_max_00 */
/**
 * @defgroup at_apb_shub_regs_core_byte_max_00_field byte_max_00_field
 * @brief macros for field byte_max_00
 * @details 1st byte to be contructed as a ceiling reference quantity
 * @{
 */
#define SHUB_PORT1_ALM0_THRHLD_MAX_0__BYTE_MAX_00__SHIFT                      0
#define SHUB_PORT1_ALM0_THRHLD_MAX_0__BYTE_MAX_00__WIDTH                      8
#define SHUB_PORT1_ALM0_THRHLD_MAX_0__BYTE_MAX_00__MASK             0x000000ffU
#define SHUB_PORT1_ALM0_THRHLD_MAX_0__BYTE_MAX_00__READ(src) \
                    ((uint32_t)(src)\
                    & 0x000000ffU)
#define SHUB_PORT1_ALM0_THRHLD_MAX_0__BYTE_MAX_00__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x000000ffU)
#define SHUB_PORT1_ALM0_THRHLD_MAX_0__BYTE_MAX_00__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define SHUB_PORT1_ALM0_THRHLD_MAX_0__BYTE_MAX_00__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000000ffU)))
#define SHUB_PORT1_ALM0_THRHLD_MAX_0__BYTE_MAX_00__RESET_VALUE      0x000000ffU
/** @} */

/* macros for field byte_max_01 */
/**
 * @defgroup at_apb_shub_regs_core_byte_max_01_field byte_max_01_field
 * @brief macros for field byte_max_01
 * @details 2nd byte to be contructed as a ceiling reference quantity
 * @{
 */
#define SHUB_PORT1_ALM0_THRHLD_MAX_0__BYTE_MAX_01__SHIFT                      8
#define SHUB_PORT1_ALM0_THRHLD_MAX_0__BYTE_MAX_01__WIDTH                      8
#define SHUB_PORT1_ALM0_THRHLD_MAX_0__BYTE_MAX_01__MASK             0x0000ff00U
#define SHUB_PORT1_ALM0_THRHLD_MAX_0__BYTE_MAX_01__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000ff00U) >> 8)
#define SHUB_PORT1_ALM0_THRHLD_MAX_0__BYTE_MAX_01__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x0000ff00U)
#define SHUB_PORT1_ALM0_THRHLD_MAX_0__BYTE_MAX_01__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ff00U) | (((uint32_t)(src) <<\
                    8) & 0x0000ff00U)
#define SHUB_PORT1_ALM0_THRHLD_MAX_0__BYTE_MAX_01__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x0000ff00U)))
#define SHUB_PORT1_ALM0_THRHLD_MAX_0__BYTE_MAX_01__RESET_VALUE      0x000000ffU
/** @} */

/* macros for field byte_max_02 */
/**
 * @defgroup at_apb_shub_regs_core_byte_max_02_field byte_max_02_field
 * @brief macros for field byte_max_02
 * @details 3rd byte to be contructed as a ceiling reference quantity
 * @{
 */
#define SHUB_PORT1_ALM0_THRHLD_MAX_0__BYTE_MAX_02__SHIFT                     16
#define SHUB_PORT1_ALM0_THRHLD_MAX_0__BYTE_MAX_02__WIDTH                      8
#define SHUB_PORT1_ALM0_THRHLD_MAX_0__BYTE_MAX_02__MASK             0x00ff0000U
#define SHUB_PORT1_ALM0_THRHLD_MAX_0__BYTE_MAX_02__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00ff0000U) >> 16)
#define SHUB_PORT1_ALM0_THRHLD_MAX_0__BYTE_MAX_02__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00ff0000U)
#define SHUB_PORT1_ALM0_THRHLD_MAX_0__BYTE_MAX_02__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00ff0000U) | (((uint32_t)(src) <<\
                    16) & 0x00ff0000U)
#define SHUB_PORT1_ALM0_THRHLD_MAX_0__BYTE_MAX_02__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00ff0000U)))
#define SHUB_PORT1_ALM0_THRHLD_MAX_0__BYTE_MAX_02__RESET_VALUE      0x000000ffU
/** @} */

/* macros for field byte_max_03 */
/**
 * @defgroup at_apb_shub_regs_core_byte_max_03_field byte_max_03_field
 * @brief macros for field byte_max_03
 * @details 4th byte to be contructed as a ceiling reference quantity
 * @{
 */
#define SHUB_PORT1_ALM0_THRHLD_MAX_0__BYTE_MAX_03__SHIFT                     24
#define SHUB_PORT1_ALM0_THRHLD_MAX_0__BYTE_MAX_03__WIDTH                      8
#define SHUB_PORT1_ALM0_THRHLD_MAX_0__BYTE_MAX_03__MASK             0xff000000U
#define SHUB_PORT1_ALM0_THRHLD_MAX_0__BYTE_MAX_03__READ(src) \
                    (((uint32_t)(src)\
                    & 0xff000000U) >> 24)
#define SHUB_PORT1_ALM0_THRHLD_MAX_0__BYTE_MAX_03__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0xff000000U)
#define SHUB_PORT1_ALM0_THRHLD_MAX_0__BYTE_MAX_03__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xff000000U) | (((uint32_t)(src) <<\
                    24) & 0xff000000U)
#define SHUB_PORT1_ALM0_THRHLD_MAX_0__BYTE_MAX_03__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0xff000000U)))
#define SHUB_PORT1_ALM0_THRHLD_MAX_0__BYTE_MAX_03__RESET_VALUE      0x000000ffU
/** @} */
#define SHUB_PORT1_ALM0_THRHLD_MAX_0__TYPE                             uint32_t
#define SHUB_PORT1_ALM0_THRHLD_MAX_0__READ                          0xffffffffU
#define SHUB_PORT1_ALM0_THRHLD_MAX_0__WRITE                         0xffffffffU
#define SHUB_PORT1_ALM0_THRHLD_MAX_0__PRESERVED                     0xffffffffU
#define SHUB_PORT1_ALM0_THRHLD_MAX_0__RESET_VALUE                   0xffffffffU

#endif /* __SHUB_PORT1_ALM0_THRHLD_MAX_0_MACRO__ */

/** @} end of port1_alm0_thrhld_max_0 */

/* macros for BlueprintGlobalNameSpace::SHUB_port1_alm0_thrhld_max_1 */
/**
 * @defgroup at_apb_shub_regs_core_port1_alm0_thrhld_max_1 port1_alm0_thrhld_max_1
 * @brief 4 bytes out of 12 used to construct reference quantities definitions.
 * @{
 */
#ifndef __SHUB_PORT1_ALM0_THRHLD_MAX_1_MACRO__
#define __SHUB_PORT1_ALM0_THRHLD_MAX_1_MACRO__

/* macros for field byte_max_04 */
/**
 * @defgroup at_apb_shub_regs_core_byte_max_04_field byte_max_04_field
 * @brief macros for field byte_max_04
 * @details 4th byte to be contructed as a ceiling reference quantity
 * @{
 */
#define SHUB_PORT1_ALM0_THRHLD_MAX_1__BYTE_MAX_04__SHIFT                      0
#define SHUB_PORT1_ALM0_THRHLD_MAX_1__BYTE_MAX_04__WIDTH                      8
#define SHUB_PORT1_ALM0_THRHLD_MAX_1__BYTE_MAX_04__MASK             0x000000ffU
#define SHUB_PORT1_ALM0_THRHLD_MAX_1__BYTE_MAX_04__READ(src) \
                    ((uint32_t)(src)\
                    & 0x000000ffU)
#define SHUB_PORT1_ALM0_THRHLD_MAX_1__BYTE_MAX_04__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x000000ffU)
#define SHUB_PORT1_ALM0_THRHLD_MAX_1__BYTE_MAX_04__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define SHUB_PORT1_ALM0_THRHLD_MAX_1__BYTE_MAX_04__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000000ffU)))
#define SHUB_PORT1_ALM0_THRHLD_MAX_1__BYTE_MAX_04__RESET_VALUE      0x000000ffU
/** @} */

/* macros for field byte_max_05 */
/**
 * @defgroup at_apb_shub_regs_core_byte_max_05_field byte_max_05_field
 * @brief macros for field byte_max_05
 * @details 6th byte to be contructed as a ceiling reference quantity
 * @{
 */
#define SHUB_PORT1_ALM0_THRHLD_MAX_1__BYTE_MAX_05__SHIFT                      8
#define SHUB_PORT1_ALM0_THRHLD_MAX_1__BYTE_MAX_05__WIDTH                      8
#define SHUB_PORT1_ALM0_THRHLD_MAX_1__BYTE_MAX_05__MASK             0x0000ff00U
#define SHUB_PORT1_ALM0_THRHLD_MAX_1__BYTE_MAX_05__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000ff00U) >> 8)
#define SHUB_PORT1_ALM0_THRHLD_MAX_1__BYTE_MAX_05__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x0000ff00U)
#define SHUB_PORT1_ALM0_THRHLD_MAX_1__BYTE_MAX_05__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ff00U) | (((uint32_t)(src) <<\
                    8) & 0x0000ff00U)
#define SHUB_PORT1_ALM0_THRHLD_MAX_1__BYTE_MAX_05__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x0000ff00U)))
#define SHUB_PORT1_ALM0_THRHLD_MAX_1__BYTE_MAX_05__RESET_VALUE      0x000000ffU
/** @} */

/* macros for field byte_max_06 */
/**
 * @defgroup at_apb_shub_regs_core_byte_max_06_field byte_max_06_field
 * @brief macros for field byte_max_06
 * @details 7th byte to be contructed as a ceiling reference quantity
 * @{
 */
#define SHUB_PORT1_ALM0_THRHLD_MAX_1__BYTE_MAX_06__SHIFT                     16
#define SHUB_PORT1_ALM0_THRHLD_MAX_1__BYTE_MAX_06__WIDTH                      8
#define SHUB_PORT1_ALM0_THRHLD_MAX_1__BYTE_MAX_06__MASK             0x00ff0000U
#define SHUB_PORT1_ALM0_THRHLD_MAX_1__BYTE_MAX_06__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00ff0000U) >> 16)
#define SHUB_PORT1_ALM0_THRHLD_MAX_1__BYTE_MAX_06__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00ff0000U)
#define SHUB_PORT1_ALM0_THRHLD_MAX_1__BYTE_MAX_06__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00ff0000U) | (((uint32_t)(src) <<\
                    16) & 0x00ff0000U)
#define SHUB_PORT1_ALM0_THRHLD_MAX_1__BYTE_MAX_06__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00ff0000U)))
#define SHUB_PORT1_ALM0_THRHLD_MAX_1__BYTE_MAX_06__RESET_VALUE      0x000000ffU
/** @} */

/* macros for field byte_max_07 */
/**
 * @defgroup at_apb_shub_regs_core_byte_max_07_field byte_max_07_field
 * @brief macros for field byte_max_07
 * @details 8th byte to be contructed as a ceiling reference quantity
 * @{
 */
#define SHUB_PORT1_ALM0_THRHLD_MAX_1__BYTE_MAX_07__SHIFT                     24
#define SHUB_PORT1_ALM0_THRHLD_MAX_1__BYTE_MAX_07__WIDTH                      8
#define SHUB_PORT1_ALM0_THRHLD_MAX_1__BYTE_MAX_07__MASK             0xff000000U
#define SHUB_PORT1_ALM0_THRHLD_MAX_1__BYTE_MAX_07__READ(src) \
                    (((uint32_t)(src)\
                    & 0xff000000U) >> 24)
#define SHUB_PORT1_ALM0_THRHLD_MAX_1__BYTE_MAX_07__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0xff000000U)
#define SHUB_PORT1_ALM0_THRHLD_MAX_1__BYTE_MAX_07__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xff000000U) | (((uint32_t)(src) <<\
                    24) & 0xff000000U)
#define SHUB_PORT1_ALM0_THRHLD_MAX_1__BYTE_MAX_07__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0xff000000U)))
#define SHUB_PORT1_ALM0_THRHLD_MAX_1__BYTE_MAX_07__RESET_VALUE      0x000000ffU
/** @} */
#define SHUB_PORT1_ALM0_THRHLD_MAX_1__TYPE                             uint32_t
#define SHUB_PORT1_ALM0_THRHLD_MAX_1__READ                          0xffffffffU
#define SHUB_PORT1_ALM0_THRHLD_MAX_1__WRITE                         0xffffffffU
#define SHUB_PORT1_ALM0_THRHLD_MAX_1__PRESERVED                     0xffffffffU
#define SHUB_PORT1_ALM0_THRHLD_MAX_1__RESET_VALUE                   0xffffffffU

#endif /* __SHUB_PORT1_ALM0_THRHLD_MAX_1_MACRO__ */

/** @} end of port1_alm0_thrhld_max_1 */

/* macros for BlueprintGlobalNameSpace::SHUB_port1_alm0_thrhld_max_2 */
/**
 * @defgroup at_apb_shub_regs_core_port1_alm0_thrhld_max_2 port1_alm0_thrhld_max_2
 * @brief 4 bytes out of 12 used to construct reference quantities definitions.
 * @{
 */
#ifndef __SHUB_PORT1_ALM0_THRHLD_MAX_2_MACRO__
#define __SHUB_PORT1_ALM0_THRHLD_MAX_2_MACRO__

/* macros for field byte_max_08 */
/**
 * @defgroup at_apb_shub_regs_core_byte_max_08_field byte_max_08_field
 * @brief macros for field byte_max_08
 * @details 9th byte to be contructed as a ceiling reference quantity
 * @{
 */
#define SHUB_PORT1_ALM0_THRHLD_MAX_2__BYTE_MAX_08__SHIFT                      0
#define SHUB_PORT1_ALM0_THRHLD_MAX_2__BYTE_MAX_08__WIDTH                      8
#define SHUB_PORT1_ALM0_THRHLD_MAX_2__BYTE_MAX_08__MASK             0x000000ffU
#define SHUB_PORT1_ALM0_THRHLD_MAX_2__BYTE_MAX_08__READ(src) \
                    ((uint32_t)(src)\
                    & 0x000000ffU)
#define SHUB_PORT1_ALM0_THRHLD_MAX_2__BYTE_MAX_08__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x000000ffU)
#define SHUB_PORT1_ALM0_THRHLD_MAX_2__BYTE_MAX_08__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define SHUB_PORT1_ALM0_THRHLD_MAX_2__BYTE_MAX_08__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000000ffU)))
#define SHUB_PORT1_ALM0_THRHLD_MAX_2__BYTE_MAX_08__RESET_VALUE      0x000000ffU
/** @} */

/* macros for field byte_max_09 */
/**
 * @defgroup at_apb_shub_regs_core_byte_max_09_field byte_max_09_field
 * @brief macros for field byte_max_09
 * @details 10th byte to be contructed as a ceiling reference quantity
 * @{
 */
#define SHUB_PORT1_ALM0_THRHLD_MAX_2__BYTE_MAX_09__SHIFT                      8
#define SHUB_PORT1_ALM0_THRHLD_MAX_2__BYTE_MAX_09__WIDTH                      8
#define SHUB_PORT1_ALM0_THRHLD_MAX_2__BYTE_MAX_09__MASK             0x0000ff00U
#define SHUB_PORT1_ALM0_THRHLD_MAX_2__BYTE_MAX_09__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000ff00U) >> 8)
#define SHUB_PORT1_ALM0_THRHLD_MAX_2__BYTE_MAX_09__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x0000ff00U)
#define SHUB_PORT1_ALM0_THRHLD_MAX_2__BYTE_MAX_09__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ff00U) | (((uint32_t)(src) <<\
                    8) & 0x0000ff00U)
#define SHUB_PORT1_ALM0_THRHLD_MAX_2__BYTE_MAX_09__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x0000ff00U)))
#define SHUB_PORT1_ALM0_THRHLD_MAX_2__BYTE_MAX_09__RESET_VALUE      0x000000ffU
/** @} */

/* macros for field byte_max_10 */
/**
 * @defgroup at_apb_shub_regs_core_byte_max_10_field byte_max_10_field
 * @brief macros for field byte_max_10
 * @details 11th byte to be contructed as a ceiling reference quantity
 * @{
 */
#define SHUB_PORT1_ALM0_THRHLD_MAX_2__BYTE_MAX_10__SHIFT                     16
#define SHUB_PORT1_ALM0_THRHLD_MAX_2__BYTE_MAX_10__WIDTH                      8
#define SHUB_PORT1_ALM0_THRHLD_MAX_2__BYTE_MAX_10__MASK             0x00ff0000U
#define SHUB_PORT1_ALM0_THRHLD_MAX_2__BYTE_MAX_10__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00ff0000U) >> 16)
#define SHUB_PORT1_ALM0_THRHLD_MAX_2__BYTE_MAX_10__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00ff0000U)
#define SHUB_PORT1_ALM0_THRHLD_MAX_2__BYTE_MAX_10__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00ff0000U) | (((uint32_t)(src) <<\
                    16) & 0x00ff0000U)
#define SHUB_PORT1_ALM0_THRHLD_MAX_2__BYTE_MAX_10__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00ff0000U)))
#define SHUB_PORT1_ALM0_THRHLD_MAX_2__BYTE_MAX_10__RESET_VALUE      0x000000ffU
/** @} */

/* macros for field byte_max_11 */
/**
 * @defgroup at_apb_shub_regs_core_byte_max_11_field byte_max_11_field
 * @brief macros for field byte_max_11
 * @details 12th byte to be contructed as a ceiling reference quantity
 * @{
 */
#define SHUB_PORT1_ALM0_THRHLD_MAX_2__BYTE_MAX_11__SHIFT                     24
#define SHUB_PORT1_ALM0_THRHLD_MAX_2__BYTE_MAX_11__WIDTH                      8
#define SHUB_PORT1_ALM0_THRHLD_MAX_2__BYTE_MAX_11__MASK             0xff000000U
#define SHUB_PORT1_ALM0_THRHLD_MAX_2__BYTE_MAX_11__READ(src) \
                    (((uint32_t)(src)\
                    & 0xff000000U) >> 24)
#define SHUB_PORT1_ALM0_THRHLD_MAX_2__BYTE_MAX_11__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0xff000000U)
#define SHUB_PORT1_ALM0_THRHLD_MAX_2__BYTE_MAX_11__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xff000000U) | (((uint32_t)(src) <<\
                    24) & 0xff000000U)
#define SHUB_PORT1_ALM0_THRHLD_MAX_2__BYTE_MAX_11__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0xff000000U)))
#define SHUB_PORT1_ALM0_THRHLD_MAX_2__BYTE_MAX_11__RESET_VALUE      0x000000ffU
/** @} */
#define SHUB_PORT1_ALM0_THRHLD_MAX_2__TYPE                             uint32_t
#define SHUB_PORT1_ALM0_THRHLD_MAX_2__READ                          0xffffffffU
#define SHUB_PORT1_ALM0_THRHLD_MAX_2__WRITE                         0xffffffffU
#define SHUB_PORT1_ALM0_THRHLD_MAX_2__PRESERVED                     0xffffffffU
#define SHUB_PORT1_ALM0_THRHLD_MAX_2__RESET_VALUE                   0xffffffffU

#endif /* __SHUB_PORT1_ALM0_THRHLD_MAX_2_MACRO__ */

/** @} end of port1_alm0_thrhld_max_2 */

/* macros for BlueprintGlobalNameSpace::SHUB_port1_alm0_thrhld_min_0 */
/**
 * @defgroup at_apb_shub_regs_core_port1_alm0_thrhld_min_0 port1_alm0_thrhld_min_0
 * @brief 4 bytes out of 12 used to construct reference quantities definitions.
 * @{
 */
#ifndef __SHUB_PORT1_ALM0_THRHLD_MIN_0_MACRO__
#define __SHUB_PORT1_ALM0_THRHLD_MIN_0_MACRO__

/* macros for field byte_min_00 */
/**
 * @defgroup at_apb_shub_regs_core_byte_min_00_field byte_min_00_field
 * @brief macros for field byte_min_00
 * @details 1st byte to be contructed as a floor reference quantity
 * @{
 */
#define SHUB_PORT1_ALM0_THRHLD_MIN_0__BYTE_MIN_00__SHIFT                      0
#define SHUB_PORT1_ALM0_THRHLD_MIN_0__BYTE_MIN_00__WIDTH                      8
#define SHUB_PORT1_ALM0_THRHLD_MIN_0__BYTE_MIN_00__MASK             0x000000ffU
#define SHUB_PORT1_ALM0_THRHLD_MIN_0__BYTE_MIN_00__READ(src) \
                    ((uint32_t)(src)\
                    & 0x000000ffU)
#define SHUB_PORT1_ALM0_THRHLD_MIN_0__BYTE_MIN_00__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x000000ffU)
#define SHUB_PORT1_ALM0_THRHLD_MIN_0__BYTE_MIN_00__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define SHUB_PORT1_ALM0_THRHLD_MIN_0__BYTE_MIN_00__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000000ffU)))
#define SHUB_PORT1_ALM0_THRHLD_MIN_0__BYTE_MIN_00__RESET_VALUE      0x00000000U
/** @} */

/* macros for field byte_min_01 */
/**
 * @defgroup at_apb_shub_regs_core_byte_min_01_field byte_min_01_field
 * @brief macros for field byte_min_01
 * @details 2nd byte to be contructed as a floor reference quantity
 * @{
 */
#define SHUB_PORT1_ALM0_THRHLD_MIN_0__BYTE_MIN_01__SHIFT                      8
#define SHUB_PORT1_ALM0_THRHLD_MIN_0__BYTE_MIN_01__WIDTH                      8
#define SHUB_PORT1_ALM0_THRHLD_MIN_0__BYTE_MIN_01__MASK             0x0000ff00U
#define SHUB_PORT1_ALM0_THRHLD_MIN_0__BYTE_MIN_01__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000ff00U) >> 8)
#define SHUB_PORT1_ALM0_THRHLD_MIN_0__BYTE_MIN_01__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x0000ff00U)
#define SHUB_PORT1_ALM0_THRHLD_MIN_0__BYTE_MIN_01__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ff00U) | (((uint32_t)(src) <<\
                    8) & 0x0000ff00U)
#define SHUB_PORT1_ALM0_THRHLD_MIN_0__BYTE_MIN_01__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x0000ff00U)))
#define SHUB_PORT1_ALM0_THRHLD_MIN_0__BYTE_MIN_01__RESET_VALUE      0x00000000U
/** @} */

/* macros for field byte_min_02 */
/**
 * @defgroup at_apb_shub_regs_core_byte_min_02_field byte_min_02_field
 * @brief macros for field byte_min_02
 * @details 3rd byte to be contructed as a floor reference quantity
 * @{
 */
#define SHUB_PORT1_ALM0_THRHLD_MIN_0__BYTE_MIN_02__SHIFT                     16
#define SHUB_PORT1_ALM0_THRHLD_MIN_0__BYTE_MIN_02__WIDTH                      8
#define SHUB_PORT1_ALM0_THRHLD_MIN_0__BYTE_MIN_02__MASK             0x00ff0000U
#define SHUB_PORT1_ALM0_THRHLD_MIN_0__BYTE_MIN_02__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00ff0000U) >> 16)
#define SHUB_PORT1_ALM0_THRHLD_MIN_0__BYTE_MIN_02__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00ff0000U)
#define SHUB_PORT1_ALM0_THRHLD_MIN_0__BYTE_MIN_02__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00ff0000U) | (((uint32_t)(src) <<\
                    16) & 0x00ff0000U)
#define SHUB_PORT1_ALM0_THRHLD_MIN_0__BYTE_MIN_02__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00ff0000U)))
#define SHUB_PORT1_ALM0_THRHLD_MIN_0__BYTE_MIN_02__RESET_VALUE      0x00000000U
/** @} */

/* macros for field byte_min_03 */
/**
 * @defgroup at_apb_shub_regs_core_byte_min_03_field byte_min_03_field
 * @brief macros for field byte_min_03
 * @details 4th byte to be contructed as a floor reference quantity
 * @{
 */
#define SHUB_PORT1_ALM0_THRHLD_MIN_0__BYTE_MIN_03__SHIFT                     24
#define SHUB_PORT1_ALM0_THRHLD_MIN_0__BYTE_MIN_03__WIDTH                      8
#define SHUB_PORT1_ALM0_THRHLD_MIN_0__BYTE_MIN_03__MASK             0xff000000U
#define SHUB_PORT1_ALM0_THRHLD_MIN_0__BYTE_MIN_03__READ(src) \
                    (((uint32_t)(src)\
                    & 0xff000000U) >> 24)
#define SHUB_PORT1_ALM0_THRHLD_MIN_0__BYTE_MIN_03__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0xff000000U)
#define SHUB_PORT1_ALM0_THRHLD_MIN_0__BYTE_MIN_03__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xff000000U) | (((uint32_t)(src) <<\
                    24) & 0xff000000U)
#define SHUB_PORT1_ALM0_THRHLD_MIN_0__BYTE_MIN_03__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0xff000000U)))
#define SHUB_PORT1_ALM0_THRHLD_MIN_0__BYTE_MIN_03__RESET_VALUE      0x00000000U
/** @} */
#define SHUB_PORT1_ALM0_THRHLD_MIN_0__TYPE                             uint32_t
#define SHUB_PORT1_ALM0_THRHLD_MIN_0__READ                          0xffffffffU
#define SHUB_PORT1_ALM0_THRHLD_MIN_0__WRITE                         0xffffffffU
#define SHUB_PORT1_ALM0_THRHLD_MIN_0__PRESERVED                     0xffffffffU
#define SHUB_PORT1_ALM0_THRHLD_MIN_0__RESET_VALUE                   0x00000000U

#endif /* __SHUB_PORT1_ALM0_THRHLD_MIN_0_MACRO__ */

/** @} end of port1_alm0_thrhld_min_0 */

/* macros for BlueprintGlobalNameSpace::SHUB_port1_alm0_thrhld_min_1 */
/**
 * @defgroup at_apb_shub_regs_core_port1_alm0_thrhld_min_1 port1_alm0_thrhld_min_1
 * @brief threshold of sensor results definitions.
 * @{
 */
#ifndef __SHUB_PORT1_ALM0_THRHLD_MIN_1_MACRO__
#define __SHUB_PORT1_ALM0_THRHLD_MIN_1_MACRO__

/* macros for field byte_min_04 */
/**
 * @defgroup at_apb_shub_regs_core_byte_min_04_field byte_min_04_field
 * @brief macros for field byte_min_04
 * @details 4th byte to be contructed as a floor reference quantity
 * @{
 */
#define SHUB_PORT1_ALM0_THRHLD_MIN_1__BYTE_MIN_04__SHIFT                      0
#define SHUB_PORT1_ALM0_THRHLD_MIN_1__BYTE_MIN_04__WIDTH                      8
#define SHUB_PORT1_ALM0_THRHLD_MIN_1__BYTE_MIN_04__MASK             0x000000ffU
#define SHUB_PORT1_ALM0_THRHLD_MIN_1__BYTE_MIN_04__READ(src) \
                    ((uint32_t)(src)\
                    & 0x000000ffU)
#define SHUB_PORT1_ALM0_THRHLD_MIN_1__BYTE_MIN_04__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x000000ffU)
#define SHUB_PORT1_ALM0_THRHLD_MIN_1__BYTE_MIN_04__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define SHUB_PORT1_ALM0_THRHLD_MIN_1__BYTE_MIN_04__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000000ffU)))
#define SHUB_PORT1_ALM0_THRHLD_MIN_1__BYTE_MIN_04__RESET_VALUE      0x00000000U
/** @} */

/* macros for field byte_min_05 */
/**
 * @defgroup at_apb_shub_regs_core_byte_min_05_field byte_min_05_field
 * @brief macros for field byte_min_05
 * @details 6th byte to be contructed as a floor reference quantity
 * @{
 */
#define SHUB_PORT1_ALM0_THRHLD_MIN_1__BYTE_MIN_05__SHIFT                      8
#define SHUB_PORT1_ALM0_THRHLD_MIN_1__BYTE_MIN_05__WIDTH                      8
#define SHUB_PORT1_ALM0_THRHLD_MIN_1__BYTE_MIN_05__MASK             0x0000ff00U
#define SHUB_PORT1_ALM0_THRHLD_MIN_1__BYTE_MIN_05__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000ff00U) >> 8)
#define SHUB_PORT1_ALM0_THRHLD_MIN_1__BYTE_MIN_05__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x0000ff00U)
#define SHUB_PORT1_ALM0_THRHLD_MIN_1__BYTE_MIN_05__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ff00U) | (((uint32_t)(src) <<\
                    8) & 0x0000ff00U)
#define SHUB_PORT1_ALM0_THRHLD_MIN_1__BYTE_MIN_05__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x0000ff00U)))
#define SHUB_PORT1_ALM0_THRHLD_MIN_1__BYTE_MIN_05__RESET_VALUE      0x00000000U
/** @} */

/* macros for field byte_min_06 */
/**
 * @defgroup at_apb_shub_regs_core_byte_min_06_field byte_min_06_field
 * @brief macros for field byte_min_06
 * @details 7th byte to be contructed as a floor reference quantity
 * @{
 */
#define SHUB_PORT1_ALM0_THRHLD_MIN_1__BYTE_MIN_06__SHIFT                     16
#define SHUB_PORT1_ALM0_THRHLD_MIN_1__BYTE_MIN_06__WIDTH                      8
#define SHUB_PORT1_ALM0_THRHLD_MIN_1__BYTE_MIN_06__MASK             0x00ff0000U
#define SHUB_PORT1_ALM0_THRHLD_MIN_1__BYTE_MIN_06__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00ff0000U) >> 16)
#define SHUB_PORT1_ALM0_THRHLD_MIN_1__BYTE_MIN_06__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00ff0000U)
#define SHUB_PORT1_ALM0_THRHLD_MIN_1__BYTE_MIN_06__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00ff0000U) | (((uint32_t)(src) <<\
                    16) & 0x00ff0000U)
#define SHUB_PORT1_ALM0_THRHLD_MIN_1__BYTE_MIN_06__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00ff0000U)))
#define SHUB_PORT1_ALM0_THRHLD_MIN_1__BYTE_MIN_06__RESET_VALUE      0x00000000U
/** @} */

/* macros for field byte_min_07 */
/**
 * @defgroup at_apb_shub_regs_core_byte_min_07_field byte_min_07_field
 * @brief macros for field byte_min_07
 * @details 8th byte to be contructed as a floor reference quantity
 * @{
 */
#define SHUB_PORT1_ALM0_THRHLD_MIN_1__BYTE_MIN_07__SHIFT                     24
#define SHUB_PORT1_ALM0_THRHLD_MIN_1__BYTE_MIN_07__WIDTH                      8
#define SHUB_PORT1_ALM0_THRHLD_MIN_1__BYTE_MIN_07__MASK             0xff000000U
#define SHUB_PORT1_ALM0_THRHLD_MIN_1__BYTE_MIN_07__READ(src) \
                    (((uint32_t)(src)\
                    & 0xff000000U) >> 24)
#define SHUB_PORT1_ALM0_THRHLD_MIN_1__BYTE_MIN_07__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0xff000000U)
#define SHUB_PORT1_ALM0_THRHLD_MIN_1__BYTE_MIN_07__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xff000000U) | (((uint32_t)(src) <<\
                    24) & 0xff000000U)
#define SHUB_PORT1_ALM0_THRHLD_MIN_1__BYTE_MIN_07__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0xff000000U)))
#define SHUB_PORT1_ALM0_THRHLD_MIN_1__BYTE_MIN_07__RESET_VALUE      0x00000000U
/** @} */
#define SHUB_PORT1_ALM0_THRHLD_MIN_1__TYPE                             uint32_t
#define SHUB_PORT1_ALM0_THRHLD_MIN_1__READ                          0xffffffffU
#define SHUB_PORT1_ALM0_THRHLD_MIN_1__WRITE                         0xffffffffU
#define SHUB_PORT1_ALM0_THRHLD_MIN_1__PRESERVED                     0xffffffffU
#define SHUB_PORT1_ALM0_THRHLD_MIN_1__RESET_VALUE                   0x00000000U

#endif /* __SHUB_PORT1_ALM0_THRHLD_MIN_1_MACRO__ */

/** @} end of port1_alm0_thrhld_min_1 */

/* macros for BlueprintGlobalNameSpace::SHUB_port1_alm0_thrhld_min_2 */
/**
 * @defgroup at_apb_shub_regs_core_port1_alm0_thrhld_min_2 port1_alm0_thrhld_min_2
 * @brief threshold of sensor results definitions.
 * @{
 */
#ifndef __SHUB_PORT1_ALM0_THRHLD_MIN_2_MACRO__
#define __SHUB_PORT1_ALM0_THRHLD_MIN_2_MACRO__

/* macros for field byte_min_08 */
/**
 * @defgroup at_apb_shub_regs_core_byte_min_08_field byte_min_08_field
 * @brief macros for field byte_min_08
 * @details 9th byte to be contructed as a floor reference quantity
 * @{
 */
#define SHUB_PORT1_ALM0_THRHLD_MIN_2__BYTE_MIN_08__SHIFT                      0
#define SHUB_PORT1_ALM0_THRHLD_MIN_2__BYTE_MIN_08__WIDTH                      8
#define SHUB_PORT1_ALM0_THRHLD_MIN_2__BYTE_MIN_08__MASK             0x000000ffU
#define SHUB_PORT1_ALM0_THRHLD_MIN_2__BYTE_MIN_08__READ(src) \
                    ((uint32_t)(src)\
                    & 0x000000ffU)
#define SHUB_PORT1_ALM0_THRHLD_MIN_2__BYTE_MIN_08__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x000000ffU)
#define SHUB_PORT1_ALM0_THRHLD_MIN_2__BYTE_MIN_08__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define SHUB_PORT1_ALM0_THRHLD_MIN_2__BYTE_MIN_08__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000000ffU)))
#define SHUB_PORT1_ALM0_THRHLD_MIN_2__BYTE_MIN_08__RESET_VALUE      0x00000000U
/** @} */

/* macros for field byte_min_09 */
/**
 * @defgroup at_apb_shub_regs_core_byte_min_09_field byte_min_09_field
 * @brief macros for field byte_min_09
 * @details 10th byte to be contructed as a floor reference quantity
 * @{
 */
#define SHUB_PORT1_ALM0_THRHLD_MIN_2__BYTE_MIN_09__SHIFT                      8
#define SHUB_PORT1_ALM0_THRHLD_MIN_2__BYTE_MIN_09__WIDTH                      8
#define SHUB_PORT1_ALM0_THRHLD_MIN_2__BYTE_MIN_09__MASK             0x0000ff00U
#define SHUB_PORT1_ALM0_THRHLD_MIN_2__BYTE_MIN_09__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000ff00U) >> 8)
#define SHUB_PORT1_ALM0_THRHLD_MIN_2__BYTE_MIN_09__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x0000ff00U)
#define SHUB_PORT1_ALM0_THRHLD_MIN_2__BYTE_MIN_09__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ff00U) | (((uint32_t)(src) <<\
                    8) & 0x0000ff00U)
#define SHUB_PORT1_ALM0_THRHLD_MIN_2__BYTE_MIN_09__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x0000ff00U)))
#define SHUB_PORT1_ALM0_THRHLD_MIN_2__BYTE_MIN_09__RESET_VALUE      0x00000000U
/** @} */

/* macros for field byte_min_10 */
/**
 * @defgroup at_apb_shub_regs_core_byte_min_10_field byte_min_10_field
 * @brief macros for field byte_min_10
 * @details 11th byte to be contructed as a floor reference quantity
 * @{
 */
#define SHUB_PORT1_ALM0_THRHLD_MIN_2__BYTE_MIN_10__SHIFT                     16
#define SHUB_PORT1_ALM0_THRHLD_MIN_2__BYTE_MIN_10__WIDTH                      8
#define SHUB_PORT1_ALM0_THRHLD_MIN_2__BYTE_MIN_10__MASK             0x00ff0000U
#define SHUB_PORT1_ALM0_THRHLD_MIN_2__BYTE_MIN_10__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00ff0000U) >> 16)
#define SHUB_PORT1_ALM0_THRHLD_MIN_2__BYTE_MIN_10__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00ff0000U)
#define SHUB_PORT1_ALM0_THRHLD_MIN_2__BYTE_MIN_10__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00ff0000U) | (((uint32_t)(src) <<\
                    16) & 0x00ff0000U)
#define SHUB_PORT1_ALM0_THRHLD_MIN_2__BYTE_MIN_10__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00ff0000U)))
#define SHUB_PORT1_ALM0_THRHLD_MIN_2__BYTE_MIN_10__RESET_VALUE      0x00000000U
/** @} */

/* macros for field byte_min_11 */
/**
 * @defgroup at_apb_shub_regs_core_byte_min_11_field byte_min_11_field
 * @brief macros for field byte_min_11
 * @details 12th byte to be contructed as a floor reference quantity
 * @{
 */
#define SHUB_PORT1_ALM0_THRHLD_MIN_2__BYTE_MIN_11__SHIFT                     24
#define SHUB_PORT1_ALM0_THRHLD_MIN_2__BYTE_MIN_11__WIDTH                      8
#define SHUB_PORT1_ALM0_THRHLD_MIN_2__BYTE_MIN_11__MASK             0xff000000U
#define SHUB_PORT1_ALM0_THRHLD_MIN_2__BYTE_MIN_11__READ(src) \
                    (((uint32_t)(src)\
                    & 0xff000000U) >> 24)
#define SHUB_PORT1_ALM0_THRHLD_MIN_2__BYTE_MIN_11__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0xff000000U)
#define SHUB_PORT1_ALM0_THRHLD_MIN_2__BYTE_MIN_11__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xff000000U) | (((uint32_t)(src) <<\
                    24) & 0xff000000U)
#define SHUB_PORT1_ALM0_THRHLD_MIN_2__BYTE_MIN_11__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0xff000000U)))
#define SHUB_PORT1_ALM0_THRHLD_MIN_2__BYTE_MIN_11__RESET_VALUE      0x00000000U
/** @} */
#define SHUB_PORT1_ALM0_THRHLD_MIN_2__TYPE                             uint32_t
#define SHUB_PORT1_ALM0_THRHLD_MIN_2__READ                          0xffffffffU
#define SHUB_PORT1_ALM0_THRHLD_MIN_2__WRITE                         0xffffffffU
#define SHUB_PORT1_ALM0_THRHLD_MIN_2__PRESERVED                     0xffffffffU
#define SHUB_PORT1_ALM0_THRHLD_MIN_2__RESET_VALUE                   0x00000000U

#endif /* __SHUB_PORT1_ALM0_THRHLD_MIN_2_MACRO__ */

/** @} end of port1_alm0_thrhld_min_2 */

/* macros for BlueprintGlobalNameSpace::SHUB_port1_status */
/**
 * @defgroup at_apb_shub_regs_core_port1_status port1_status
 * @brief trigger status due to out of range quantities definitions.
 * @{
 */
#ifndef __SHUB_PORT1_STATUS_MACRO__
#define __SHUB_PORT1_STATUS_MACRO__

/* macros for field out_of_range_stat */
/**
 * @defgroup at_apb_shub_regs_core_out_of_range_stat_field out_of_range_stat_field
 * @brief macros for field out_of_range_stat
 * @details each bit corresponds to out-of-range indicator of the sensor quantities. {quantity3,quantity2, quantity1,quantity0}
 * @{
 */
#define SHUB_PORT1_STATUS__OUT_OF_RANGE_STAT__SHIFT                           0
#define SHUB_PORT1_STATUS__OUT_OF_RANGE_STAT__WIDTH                           4
#define SHUB_PORT1_STATUS__OUT_OF_RANGE_STAT__MASK                  0x0000000fU
#define SHUB_PORT1_STATUS__OUT_OF_RANGE_STAT__READ(src) \
                    ((uint32_t)(src)\
                    & 0x0000000fU)
#define SHUB_PORT1_STATUS__OUT_OF_RANGE_STAT__RESET_VALUE           0x00000000U
/** @} */

/* macros for field triggered */
/**
 * @defgroup at_apb_shub_regs_core_triggered_field triggered_field
 * @brief macros for field triggered
 * @details triggerred by port 1.
 * @{
 */
#define SHUB_PORT1_STATUS__TRIGGERED__SHIFT                                  24
#define SHUB_PORT1_STATUS__TRIGGERED__WIDTH                                   1
#define SHUB_PORT1_STATUS__TRIGGERED__MASK                          0x01000000U
#define SHUB_PORT1_STATUS__TRIGGERED__READ(src) \
                    (((uint32_t)(src)\
                    & 0x01000000U) >> 24)
#define SHUB_PORT1_STATUS__TRIGGERED__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(1) << 24)
#define SHUB_PORT1_STATUS__TRIGGERED__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(0) << 24)
#define SHUB_PORT1_STATUS__TRIGGERED__RESET_VALUE                   0x00000000U
/** @} */
#define SHUB_PORT1_STATUS__TYPE                                        uint32_t
#define SHUB_PORT1_STATUS__READ                                     0x0100000fU
#define SHUB_PORT1_STATUS__PRESERVED                                0x00000000U
#define SHUB_PORT1_STATUS__RESET_VALUE                              0x00000000U

#endif /* __SHUB_PORT1_STATUS_MACRO__ */

/** @} end of port1_status */

/* macros for BlueprintGlobalNameSpace::SHUB_flash_ctrl0 */
/**
 * @defgroup at_apb_shub_regs_core_flash_ctrl0 flash_ctrl0
 * @brief flash control opcodes definitions.
 * @{
 */
#ifndef __SHUB_FLASH_CTRL0_MACRO__
#define __SHUB_FLASH_CTRL0_MACRO__

/* macros for field opcode_wren */
/**
 * @defgroup at_apb_shub_regs_core_opcode_wren_field opcode_wren_field
 * @brief macros for field opcode_wren
 * @details write_enable opcode
 * @{
 */
#define SHUB_FLASH_CTRL0__OPCODE_WREN__SHIFT                                  0
#define SHUB_FLASH_CTRL0__OPCODE_WREN__WIDTH                                  8
#define SHUB_FLASH_CTRL0__OPCODE_WREN__MASK                         0x000000ffU
#define SHUB_FLASH_CTRL0__OPCODE_WREN__READ(src) \
                    ((uint32_t)(src)\
                    & 0x000000ffU)
#define SHUB_FLASH_CTRL0__OPCODE_WREN__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x000000ffU)
#define SHUB_FLASH_CTRL0__OPCODE_WREN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define SHUB_FLASH_CTRL0__OPCODE_WREN__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000000ffU)))
#define SHUB_FLASH_CTRL0__OPCODE_WREN__RESET_VALUE                  0x00000006U
/** @} */

/* macros for field opcode_pp */
/**
 * @defgroup at_apb_shub_regs_core_opcode_pp_field opcode_pp_field
 * @brief macros for field opcode_pp
 * @details page program opcode
 * @{
 */
#define SHUB_FLASH_CTRL0__OPCODE_PP__SHIFT                                    8
#define SHUB_FLASH_CTRL0__OPCODE_PP__WIDTH                                    8
#define SHUB_FLASH_CTRL0__OPCODE_PP__MASK                           0x0000ff00U
#define SHUB_FLASH_CTRL0__OPCODE_PP__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000ff00U) >> 8)
#define SHUB_FLASH_CTRL0__OPCODE_PP__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x0000ff00U)
#define SHUB_FLASH_CTRL0__OPCODE_PP__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ff00U) | (((uint32_t)(src) <<\
                    8) & 0x0000ff00U)
#define SHUB_FLASH_CTRL0__OPCODE_PP__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x0000ff00U)))
#define SHUB_FLASH_CTRL0__OPCODE_PP__RESET_VALUE                    0x00000002U
/** @} */

/* macros for field opcode_pd */
/**
 * @defgroup at_apb_shub_regs_core_opcode_pd_field opcode_pd_field
 * @brief macros for field opcode_pd
 * @details power down opcode
 * @{
 */
#define SHUB_FLASH_CTRL0__OPCODE_PD__SHIFT                                   16
#define SHUB_FLASH_CTRL0__OPCODE_PD__WIDTH                                    8
#define SHUB_FLASH_CTRL0__OPCODE_PD__MASK                           0x00ff0000U
#define SHUB_FLASH_CTRL0__OPCODE_PD__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00ff0000U) >> 16)
#define SHUB_FLASH_CTRL0__OPCODE_PD__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00ff0000U)
#define SHUB_FLASH_CTRL0__OPCODE_PD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00ff0000U) | (((uint32_t)(src) <<\
                    16) & 0x00ff0000U)
#define SHUB_FLASH_CTRL0__OPCODE_PD__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00ff0000U)))
#define SHUB_FLASH_CTRL0__OPCODE_PD__RESET_VALUE                    0x000000b9U
/** @} */

/* macros for field opcode_rpd */
/**
 * @defgroup at_apb_shub_regs_core_opcode_rpd_field opcode_rpd_field
 * @brief macros for field opcode_rpd
 * @details release_power_down (not needed for macronix)
 * @{
 */
#define SHUB_FLASH_CTRL0__OPCODE_RPD__SHIFT                                  24
#define SHUB_FLASH_CTRL0__OPCODE_RPD__WIDTH                                   8
#define SHUB_FLASH_CTRL0__OPCODE_RPD__MASK                          0xff000000U
#define SHUB_FLASH_CTRL0__OPCODE_RPD__READ(src) \
                    (((uint32_t)(src)\
                    & 0xff000000U) >> 24)
#define SHUB_FLASH_CTRL0__OPCODE_RPD__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0xff000000U)
#define SHUB_FLASH_CTRL0__OPCODE_RPD__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xff000000U) | (((uint32_t)(src) <<\
                    24) & 0xff000000U)
#define SHUB_FLASH_CTRL0__OPCODE_RPD__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0xff000000U)))
#define SHUB_FLASH_CTRL0__OPCODE_RPD__RESET_VALUE                   0x000000abU
/** @} */
#define SHUB_FLASH_CTRL0__TYPE                                         uint32_t
#define SHUB_FLASH_CTRL0__READ                                      0xffffffffU
#define SHUB_FLASH_CTRL0__WRITE                                     0xffffffffU
#define SHUB_FLASH_CTRL0__PRESERVED                                 0xffffffffU
#define SHUB_FLASH_CTRL0__RESET_VALUE                               0xabb90206U

#endif /* __SHUB_FLASH_CTRL0_MACRO__ */

/** @} end of flash_ctrl0 */

/* macros for BlueprintGlobalNameSpace::SHUB_flash_ctrl1 */
/**
 * @defgroup at_apb_shub_regs_core_flash_ctrl1 flash_ctrl1
 * @brief start address register definitions.
 * @{
 */
#ifndef __SHUB_FLASH_CTRL1_MACRO__
#define __SHUB_FLASH_CTRL1_MACRO__

/* macros for field wr_start_address */
/**
 * @defgroup at_apb_shub_regs_core_wr_start_address_field wr_start_address_field
 * @brief macros for field wr_start_address
 * @details The starting address in the flash reserved for sensor hub's data
 * @{
 */
#define SHUB_FLASH_CTRL1__WR_START_ADDRESS__SHIFT                             0
#define SHUB_FLASH_CTRL1__WR_START_ADDRESS__WIDTH                            24
#define SHUB_FLASH_CTRL1__WR_START_ADDRESS__MASK                    0x00ffffffU
#define SHUB_FLASH_CTRL1__WR_START_ADDRESS__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00ffffffU)
#define SHUB_FLASH_CTRL1__WR_START_ADDRESS__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00ffffffU)
#define SHUB_FLASH_CTRL1__WR_START_ADDRESS__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00ffffffU) | ((uint32_t)(src) &\
                    0x00ffffffU)
#define SHUB_FLASH_CTRL1__WR_START_ADDRESS__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00ffffffU)))
#define SHUB_FLASH_CTRL1__WR_START_ADDRESS__RESET_VALUE             0x00000000U
/** @} */
#define SHUB_FLASH_CTRL1__TYPE                                         uint32_t
#define SHUB_FLASH_CTRL1__READ                                      0x00ffffffU
#define SHUB_FLASH_CTRL1__WRITE                                     0x00ffffffU
#define SHUB_FLASH_CTRL1__PRESERVED                                 0x00ffffffU
#define SHUB_FLASH_CTRL1__RESET_VALUE                               0x00000000U

#endif /* __SHUB_FLASH_CTRL1_MACRO__ */

/** @} end of flash_ctrl1 */

/* macros for BlueprintGlobalNameSpace::SHUB_flash_ctrl2 */
/**
 * @defgroup at_apb_shub_regs_core_flash_ctrl2 flash_ctrl2
 * @brief end address register definitions.
 * @{
 */
#ifndef __SHUB_FLASH_CTRL2_MACRO__
#define __SHUB_FLASH_CTRL2_MACRO__

/* macros for field wr_max_address */
/**
 * @defgroup at_apb_shub_regs_core_wr_max_address_field wr_max_address_field
 * @brief macros for field wr_max_address
 * @details The last address in the flash reserved for sensor hub's data
 * @{
 */
#define SHUB_FLASH_CTRL2__WR_MAX_ADDRESS__SHIFT                               0
#define SHUB_FLASH_CTRL2__WR_MAX_ADDRESS__WIDTH                              24
#define SHUB_FLASH_CTRL2__WR_MAX_ADDRESS__MASK                      0x00ffffffU
#define SHUB_FLASH_CTRL2__WR_MAX_ADDRESS__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00ffffffU)
#define SHUB_FLASH_CTRL2__WR_MAX_ADDRESS__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00ffffffU)
#define SHUB_FLASH_CTRL2__WR_MAX_ADDRESS__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00ffffffU) | ((uint32_t)(src) &\
                    0x00ffffffU)
#define SHUB_FLASH_CTRL2__WR_MAX_ADDRESS__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00ffffffU)))
#define SHUB_FLASH_CTRL2__WR_MAX_ADDRESS__RESET_VALUE               0x00000000U
/** @} */
#define SHUB_FLASH_CTRL2__TYPE                                         uint32_t
#define SHUB_FLASH_CTRL2__READ                                      0x00ffffffU
#define SHUB_FLASH_CTRL2__WRITE                                     0x00ffffffU
#define SHUB_FLASH_CTRL2__PRESERVED                                 0x00ffffffU
#define SHUB_FLASH_CTRL2__RESET_VALUE                               0x00000000U

#endif /* __SHUB_FLASH_CTRL2_MACRO__ */

/** @} end of flash_ctrl2 */

/* macros for BlueprintGlobalNameSpace::SHUB_flash_ctrl3 */
/**
 * @defgroup at_apb_shub_regs_core_flash_ctrl3 flash_ctrl3
 * @brief miscellaneous control bits for flash controller definitions.
 * @{
 */
#ifndef __SHUB_FLASH_CTRL3_MACRO__
#define __SHUB_FLASH_CTRL3_MACRO__

/* macros for field power_cycle_en */
/**
 * @defgroup at_apb_shub_regs_core_power_cycle_en_field power_cycle_en_field
 * @brief macros for field power_cycle_en
 * @details 1= cycle flash into and out of deep power down mode.
 * @{
 */
#define SHUB_FLASH_CTRL3__POWER_CYCLE_EN__SHIFT                               0
#define SHUB_FLASH_CTRL3__POWER_CYCLE_EN__WIDTH                               1
#define SHUB_FLASH_CTRL3__POWER_CYCLE_EN__MASK                      0x00000001U
#define SHUB_FLASH_CTRL3__POWER_CYCLE_EN__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_FLASH_CTRL3__POWER_CYCLE_EN__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define SHUB_FLASH_CTRL3__POWER_CYCLE_EN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define SHUB_FLASH_CTRL3__POWER_CYCLE_EN__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define SHUB_FLASH_CTRL3__POWER_CYCLE_EN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define SHUB_FLASH_CTRL3__POWER_CYCLE_EN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define SHUB_FLASH_CTRL3__POWER_CYCLE_EN__RESET_VALUE               0x00000000U
/** @} */

/* macros for field is_macronix */
/**
 * @defgroup at_apb_shub_regs_core_is_macronix_field is_macronix_field
 * @brief macros for field is_macronix
 * @details 1= flash device from Macronix
 * @{
 */
#define SHUB_FLASH_CTRL3__IS_MACRONIX__SHIFT                                  1
#define SHUB_FLASH_CTRL3__IS_MACRONIX__WIDTH                                  1
#define SHUB_FLASH_CTRL3__IS_MACRONIX__MASK                         0x00000002U
#define SHUB_FLASH_CTRL3__IS_MACRONIX__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define SHUB_FLASH_CTRL3__IS_MACRONIX__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define SHUB_FLASH_CTRL3__IS_MACRONIX__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define SHUB_FLASH_CTRL3__IS_MACRONIX__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define SHUB_FLASH_CTRL3__IS_MACRONIX__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define SHUB_FLASH_CTRL3__IS_MACRONIX__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define SHUB_FLASH_CTRL3__IS_MACRONIX__RESET_VALUE                  0x00000001U
/** @} */

/* macros for field qspi_mode */
/**
 * @defgroup at_apb_shub_regs_core_qspi_mode_field qspi_mode_field
 * @brief macros for field qspi_mode
 * @details 0,1,3 = single spi mode; 2 = qspi mode
 * @{
 */
#define SHUB_FLASH_CTRL3__QSPI_MODE__SHIFT                                    2
#define SHUB_FLASH_CTRL3__QSPI_MODE__WIDTH                                    2
#define SHUB_FLASH_CTRL3__QSPI_MODE__MASK                           0x0000000cU
#define SHUB_FLASH_CTRL3__QSPI_MODE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000000cU) >> 2)
#define SHUB_FLASH_CTRL3__QSPI_MODE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 2) & 0x0000000cU)
#define SHUB_FLASH_CTRL3__QSPI_MODE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000000cU) | (((uint32_t)(src) <<\
                    2) & 0x0000000cU)
#define SHUB_FLASH_CTRL3__QSPI_MODE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 2) & ~0x0000000cU)))
#define SHUB_FLASH_CTRL3__QSPI_MODE__RESET_VALUE                    0x00000000U
/** @} */

/* macros for field clear_flash_overflow */
/**
 * @defgroup at_apb_shub_regs_core_clear_flash_overflow_field clear_flash_overflow_field
 * @brief macros for field clear_flash_overflow
 * @details write 1 to clear wr_saturated; The bit is not sefl-clearing.
 * @{
 */
#define SHUB_FLASH_CTRL3__CLEAR_FLASH_OVERFLOW__SHIFT                         4
#define SHUB_FLASH_CTRL3__CLEAR_FLASH_OVERFLOW__WIDTH                         1
#define SHUB_FLASH_CTRL3__CLEAR_FLASH_OVERFLOW__MASK                0x00000010U
#define SHUB_FLASH_CTRL3__CLEAR_FLASH_OVERFLOW__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000010U) >> 4)
#define SHUB_FLASH_CTRL3__CLEAR_FLASH_OVERFLOW__WRITE(src) \
                    (((uint32_t)(src)\
                    << 4) & 0x00000010U)
#define SHUB_FLASH_CTRL3__CLEAR_FLASH_OVERFLOW__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | (((uint32_t)(src) <<\
                    4) & 0x00000010U)
#define SHUB_FLASH_CTRL3__CLEAR_FLASH_OVERFLOW__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 4) & ~0x00000010U)))
#define SHUB_FLASH_CTRL3__CLEAR_FLASH_OVERFLOW__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(1) << 4)
#define SHUB_FLASH_CTRL3__CLEAR_FLASH_OVERFLOW__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(0) << 4)
#define SHUB_FLASH_CTRL3__CLEAR_FLASH_OVERFLOW__RESET_VALUE         0x00000000U
/** @} */

/* macros for field clear_lost_write_cnt */
/**
 * @defgroup at_apb_shub_regs_core_clear_lost_write_cnt_field clear_lost_write_cnt_field
 * @brief macros for field clear_lost_write_cnt
 * @details write 1 to clear lost_write_cnt; The bit is not self-clearing.
 * @{
 */
#define SHUB_FLASH_CTRL3__CLEAR_LOST_WRITE_CNT__SHIFT                         5
#define SHUB_FLASH_CTRL3__CLEAR_LOST_WRITE_CNT__WIDTH                         1
#define SHUB_FLASH_CTRL3__CLEAR_LOST_WRITE_CNT__MASK                0x00000020U
#define SHUB_FLASH_CTRL3__CLEAR_LOST_WRITE_CNT__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000020U) >> 5)
#define SHUB_FLASH_CTRL3__CLEAR_LOST_WRITE_CNT__WRITE(src) \
                    (((uint32_t)(src)\
                    << 5) & 0x00000020U)
#define SHUB_FLASH_CTRL3__CLEAR_LOST_WRITE_CNT__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | (((uint32_t)(src) <<\
                    5) & 0x00000020U)
#define SHUB_FLASH_CTRL3__CLEAR_LOST_WRITE_CNT__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 5) & ~0x00000020U)))
#define SHUB_FLASH_CTRL3__CLEAR_LOST_WRITE_CNT__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | ((uint32_t)(1) << 5)
#define SHUB_FLASH_CTRL3__CLEAR_LOST_WRITE_CNT__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | ((uint32_t)(0) << 5)
#define SHUB_FLASH_CTRL3__CLEAR_LOST_WRITE_CNT__RESET_VALUE         0x00000000U
/** @} */

/* macros for field serialize_pp_address */
/**
 * @defgroup at_apb_shub_regs_core_serialize_pp_address_field serialize_pp_address_field
 * @brief macros for field serialize_pp_address
 * @details 1 = address is serialized in quad mode ; 0 = address bits are shifted out 4 bits per cycle in quad mode.
 * @{
 */
#define SHUB_FLASH_CTRL3__SERIALIZE_PP_ADDRESS__SHIFT                         6
#define SHUB_FLASH_CTRL3__SERIALIZE_PP_ADDRESS__WIDTH                         1
#define SHUB_FLASH_CTRL3__SERIALIZE_PP_ADDRESS__MASK                0x00000040U
#define SHUB_FLASH_CTRL3__SERIALIZE_PP_ADDRESS__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000040U) >> 6)
#define SHUB_FLASH_CTRL3__SERIALIZE_PP_ADDRESS__WRITE(src) \
                    (((uint32_t)(src)\
                    << 6) & 0x00000040U)
#define SHUB_FLASH_CTRL3__SERIALIZE_PP_ADDRESS__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000040U) | (((uint32_t)(src) <<\
                    6) & 0x00000040U)
#define SHUB_FLASH_CTRL3__SERIALIZE_PP_ADDRESS__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 6) & ~0x00000040U)))
#define SHUB_FLASH_CTRL3__SERIALIZE_PP_ADDRESS__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000040U) | ((uint32_t)(1) << 6)
#define SHUB_FLASH_CTRL3__SERIALIZE_PP_ADDRESS__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000040U) | ((uint32_t)(0) << 6)
#define SHUB_FLASH_CTRL3__SERIALIZE_PP_ADDRESS__RESET_VALUE         0x00000000U
/** @} */

/* macros for field rpd_has_clock */
/**
 * @defgroup at_apb_shub_regs_core_rpd_has_clock_field rpd_has_clock_field
 * @brief macros for field rpd_has_clock
 * @details for Macronix flash, rpd has no clock
 * @{
 */
#define SHUB_FLASH_CTRL3__RPD_HAS_CLOCK__SHIFT                                7
#define SHUB_FLASH_CTRL3__RPD_HAS_CLOCK__WIDTH                                1
#define SHUB_FLASH_CTRL3__RPD_HAS_CLOCK__MASK                       0x00000080U
#define SHUB_FLASH_CTRL3__RPD_HAS_CLOCK__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000080U) >> 7)
#define SHUB_FLASH_CTRL3__RPD_HAS_CLOCK__WRITE(src) \
                    (((uint32_t)(src)\
                    << 7) & 0x00000080U)
#define SHUB_FLASH_CTRL3__RPD_HAS_CLOCK__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000080U) | (((uint32_t)(src) <<\
                    7) & 0x00000080U)
#define SHUB_FLASH_CTRL3__RPD_HAS_CLOCK__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 7) & ~0x00000080U)))
#define SHUB_FLASH_CTRL3__RPD_HAS_CLOCK__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000080U) | ((uint32_t)(1) << 7)
#define SHUB_FLASH_CTRL3__RPD_HAS_CLOCK__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000080U) | ((uint32_t)(0) << 7)
#define SHUB_FLASH_CTRL3__RPD_HAS_CLOCK__RESET_VALUE                0x00000001U
/** @} */
#define SHUB_FLASH_CTRL3__TYPE                                         uint32_t
#define SHUB_FLASH_CTRL3__READ                                      0x000000ffU
#define SHUB_FLASH_CTRL3__WRITE                                     0x000000ffU
#define SHUB_FLASH_CTRL3__PRESERVED                                 0x000000ffU
#define SHUB_FLASH_CTRL3__RESET_VALUE                               0x00000082U

#endif /* __SHUB_FLASH_CTRL3_MACRO__ */

/** @} end of flash_ctrl3 */

/* macros for BlueprintGlobalNameSpace::SHUB_flash_ctrl4 */
/**
 * @defgroup at_apb_shub_regs_core_flash_ctrl4 flash_ctrl4
 * @brief delay parameters for flash definitions.
 * @{
 */
#ifndef __SHUB_FLASH_CTRL4_MACRO__
#define __SHUB_FLASH_CTRL4_MACRO__

/* macros for field pp_delay */
/**
 * @defgroup at_apb_shub_regs_core_pp_delay_field pp_delay_field
 * @brief macros for field pp_delay
 * @details delay cycles (pp_delay+1) after flash write. (320 cycles of 32k clock = 10ms pp time from Macronix)
 * @{
 */
#define SHUB_FLASH_CTRL4__PP_DELAY__SHIFT                                     0
#define SHUB_FLASH_CTRL4__PP_DELAY__WIDTH                                    12
#define SHUB_FLASH_CTRL4__PP_DELAY__MASK                            0x00000fffU
#define SHUB_FLASH_CTRL4__PP_DELAY__READ(src)   ((uint32_t)(src) & 0x00000fffU)
#define SHUB_FLASH_CTRL4__PP_DELAY__WRITE(src)  ((uint32_t)(src) & 0x00000fffU)
#define SHUB_FLASH_CTRL4__PP_DELAY__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000fffU) | ((uint32_t)(src) &\
                    0x00000fffU)
#define SHUB_FLASH_CTRL4__PP_DELAY__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000fffU)))
#define SHUB_FLASH_CTRL4__PP_DELAY__RESET_VALUE                     0x00000140U
/** @} */

/* macros for field pd_delay */
/**
 * @defgroup at_apb_shub_regs_core_pd_delay_field pd_delay_field
 * @brief macros for field pd_delay
 * @details delay cycles (pd_delay+1) after flash power down / release from power down
 * @{
 */
#define SHUB_FLASH_CTRL4__PD_DELAY__SHIFT                                    20
#define SHUB_FLASH_CTRL4__PD_DELAY__WIDTH                                     8
#define SHUB_FLASH_CTRL4__PD_DELAY__MASK                            0x0ff00000U
#define SHUB_FLASH_CTRL4__PD_DELAY__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0ff00000U) >> 20)
#define SHUB_FLASH_CTRL4__PD_DELAY__WRITE(src) \
                    (((uint32_t)(src)\
                    << 20) & 0x0ff00000U)
#define SHUB_FLASH_CTRL4__PD_DELAY__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0ff00000U) | (((uint32_t)(src) <<\
                    20) & 0x0ff00000U)
#define SHUB_FLASH_CTRL4__PD_DELAY__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 20) & ~0x0ff00000U)))
#define SHUB_FLASH_CTRL4__PD_DELAY__RESET_VALUE                     0x00000002U
/** @} */
#define SHUB_FLASH_CTRL4__TYPE                                         uint32_t
#define SHUB_FLASH_CTRL4__READ                                      0x0ff00fffU
#define SHUB_FLASH_CTRL4__WRITE                                     0x0ff00fffU
#define SHUB_FLASH_CTRL4__PRESERVED                                 0x0ff00fffU
#define SHUB_FLASH_CTRL4__RESET_VALUE                               0x00200140U

#endif /* __SHUB_FLASH_CTRL4_MACRO__ */

/** @} end of flash_ctrl4 */

/* macros for BlueprintGlobalNameSpace::SHUB_flash_status0 */
/**
 * @defgroup at_apb_shub_regs_core_flash_status0 flash_status0
 * @brief saturation and next address pointer to the flash. definitions.
 * @{
 */
#ifndef __SHUB_FLASH_STATUS0_MACRO__
#define __SHUB_FLASH_STATUS0_MACRO__

/* macros for field wr_current_address */
/**
 * @defgroup at_apb_shub_regs_core_wr_current_address_field wr_current_address_field
 * @brief macros for field wr_current_address
 * @details indicates the last flash address + 1.
 * @{
 */
#define SHUB_FLASH_STATUS0__WR_CURRENT_ADDRESS__SHIFT                         0
#define SHUB_FLASH_STATUS0__WR_CURRENT_ADDRESS__WIDTH                        24
#define SHUB_FLASH_STATUS0__WR_CURRENT_ADDRESS__MASK                0x00ffffffU
#define SHUB_FLASH_STATUS0__WR_CURRENT_ADDRESS__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00ffffffU)
#define SHUB_FLASH_STATUS0__WR_CURRENT_ADDRESS__RESET_VALUE         0x00000000U
/** @} */

/* macros for field wr_saturated */
/**
 * @defgroup at_apb_shub_regs_core_wr_saturated_field wr_saturated_field
 * @brief macros for field wr_saturated
 * @details indicates whether allocated flash area is overflowed.
 * @{
 */
#define SHUB_FLASH_STATUS0__WR_SATURATED__SHIFT                              24
#define SHUB_FLASH_STATUS0__WR_SATURATED__WIDTH                               1
#define SHUB_FLASH_STATUS0__WR_SATURATED__MASK                      0x01000000U
#define SHUB_FLASH_STATUS0__WR_SATURATED__READ(src) \
                    (((uint32_t)(src)\
                    & 0x01000000U) >> 24)
#define SHUB_FLASH_STATUS0__WR_SATURATED__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(1) << 24)
#define SHUB_FLASH_STATUS0__WR_SATURATED__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(0) << 24)
#define SHUB_FLASH_STATUS0__WR_SATURATED__RESET_VALUE               0x00000000U
/** @} */
#define SHUB_FLASH_STATUS0__TYPE                                       uint32_t
#define SHUB_FLASH_STATUS0__READ                                    0x01ffffffU
#define SHUB_FLASH_STATUS0__PRESERVED                               0x00000000U
#define SHUB_FLASH_STATUS0__RESET_VALUE                             0x00000000U

#endif /* __SHUB_FLASH_STATUS0_MACRO__ */

/** @} end of flash_status0 */

/* macros for BlueprintGlobalNameSpace::SHUB_flash_status1 */
/**
 * @defgroup at_apb_shub_regs_core_flash_status1 flash_status1
 * @brief number of lost bytes definitions.
 * @{
 */
#ifndef __SHUB_FLASH_STATUS1_MACRO__
#define __SHUB_FLASH_STATUS1_MACRO__

/* macros for field lost_write_cnt */
/**
 * @defgroup at_apb_shub_regs_core_lost_write_cnt_field lost_write_cnt_field
 * @brief macros for field lost_write_cnt
 * @details indicates the number of bytes lost due to flash address saturation.
 * @{
 */
#define SHUB_FLASH_STATUS1__LOST_WRITE_CNT__SHIFT                             0
#define SHUB_FLASH_STATUS1__LOST_WRITE_CNT__WIDTH                            32
#define SHUB_FLASH_STATUS1__LOST_WRITE_CNT__MASK                    0xffffffffU
#define SHUB_FLASH_STATUS1__LOST_WRITE_CNT__READ(src) \
                    ((uint32_t)(src)\
                    & 0xffffffffU)
#define SHUB_FLASH_STATUS1__LOST_WRITE_CNT__RESET_VALUE             0x00000000U
/** @} */
#define SHUB_FLASH_STATUS1__TYPE                                       uint32_t
#define SHUB_FLASH_STATUS1__READ                                    0xffffffffU
#define SHUB_FLASH_STATUS1__PRESERVED                               0x00000000U
#define SHUB_FLASH_STATUS1__RESET_VALUE                             0x00000000U

#endif /* __SHUB_FLASH_STATUS1_MACRO__ */

/** @} end of flash_status1 */

/* macros for BlueprintGlobalNameSpace::SHUB_shub_status0 */
/**
 * @defgroup at_apb_shub_regs_core_shub_status0 shub_status0
 * @brief state of main FSM definitions.
 * @{
 */
#ifndef __SHUB_SHUB_STATUS0_MACRO__
#define __SHUB_SHUB_STATUS0_MACRO__

/* macros for field state */
/**
 * @defgroup at_apb_shub_regs_core_state_field state_field
 * @brief macros for field state
 * @details indicates the state of the sensor hub FSM. useful for testing
 * @{
 */
#define SHUB_SHUB_STATUS0__STATE__SHIFT                                       0
#define SHUB_SHUB_STATUS0__STATE__WIDTH                                       4
#define SHUB_SHUB_STATUS0__STATE__MASK                              0x0000000fU
#define SHUB_SHUB_STATUS0__STATE__READ(src)     ((uint32_t)(src) & 0x0000000fU)
#define SHUB_SHUB_STATUS0__STATE__RESET_VALUE                       0x00000000U
/** @} */
#define SHUB_SHUB_STATUS0__TYPE                                        uint32_t
#define SHUB_SHUB_STATUS0__READ                                     0x0000000fU
#define SHUB_SHUB_STATUS0__PRESERVED                                0x00000000U
#define SHUB_SHUB_STATUS0__RESET_VALUE                              0x00000000U

#endif /* __SHUB_SHUB_STATUS0_MACRO__ */

/** @} end of shub_status0 */

/* macros for BlueprintGlobalNameSpace::SHUB_id */
/**
 * @defgroup at_apb_shub_regs_core_id id
 * @brief core id definitions.
 * @{
 */
#ifndef __SHUB_ID_MACRO__
#define __SHUB_ID_MACRO__

/* macros for field id */
/**
 * @defgroup at_apb_shub_regs_core_id_field id_field
 * @brief macros for field id
 * @details SHUB in ASCII
 * @{
 */
#define SHUB_ID__ID__SHIFT                                                    0
#define SHUB_ID__ID__WIDTH                                                   32
#define SHUB_ID__ID__MASK                                           0xffffffffU
#define SHUB_ID__ID__READ(src)                  ((uint32_t)(src) & 0xffffffffU)
#define SHUB_ID__ID__RESET_VALUE                                    0x53485542U
/** @} */
#define SHUB_ID__TYPE                                                  uint32_t
#define SHUB_ID__READ                                               0xffffffffU
#define SHUB_ID__PRESERVED                                          0x00000000U
#define SHUB_ID__RESET_VALUE                                        0x53485542U

#endif /* __SHUB_ID_MACRO__ */

/** @} end of id */

/** @} end of AT_APB_SHUB_REGS_CORE */
#endif /* __REG_AT_APB_SHUB_REGS_CORE_H__ */
