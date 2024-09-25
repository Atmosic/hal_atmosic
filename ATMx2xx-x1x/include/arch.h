/**
 *******************************************************************************
 *
 * @file arch.h
 *
 * @brief This file contains the definitions of the macros and functions that are
 * architecture dependent.  The implementation of those is implemented in the
 * appropriate architecture directory.
 *
 * Copyright (C) RivieraWaves 2009-2015
 * Copyright (C) Atmosic 2017-2024
 *
 *******************************************************************************
 */

#pragma once

/**
 ****************************************************************************************
 * @defgroup ATM2x ATM2x
 * @brief ATM2x Platform
 *
 * This module contains platform components.
 *
 *
 * @{
 ****************************************************************************************
 */

/**
 ****************************************************************************************
 * @defgroup DRIVERS Drivers
 * @ingroup ATM2x
 * @brief ATM2x Platform Drivers
 *
 * This module contains the necessary drivers to run the platform with the
 * RW BT SW protocol stack.
 *
 * This has the declaration of the platform architecture API.
 *
 *
 * @{
 ****************************************************************************************
 */

/*
 * INCLUDE FILES
 ****************************************************************************************
 */
#include <stdbool.h>
#include <stdint.h>        // standard integer definition
#if defined(CFG_DBG)
#include <stdio.h>
#endif
#include <string.h>
#include "compiler.h"      // inline functions

#include "rep_vec.h"

#ifdef __cplusplus
extern "C" {
#endif

/*
 * CPU WORD SIZE
 ****************************************************************************************
 */
/// ARM is a 32-bit CPU
#define CPU_WORD_SIZE   4

/*
 * CPU Endianness
 ****************************************************************************************
 */
/// ARM is little endian
#define CPU_LE          1

// 16MHz system clock
#define SYS_CLK         16000000
#define SYS_CLK_IN_KHZ (SYS_CLK/1000)

/*
 * Constructor ordering
 */
#define CONSTRUCTOR_WATCHDOG	101	// Very first constructor
#define CONSTRUCTOR_USER_DEBUG	102	// Provide DEBUG_TRACE
#define CONSTRUCTOR_NVM		103	// Provide nvm_EFUSE_AUTOREAD
#define CONSTRUCTOR_LED		104	// Before drivers configure pinmux
#define CONSTRUCTOR_DTOP_BYPASS	105	// After NVM; can change sysclk
#define CONSTRUCTOR_PINMUX	106	// After NVM; check BOARD
#define CONSTRUCTOR_MAIN	198	// Main constructor
#define CONSTRUCTOR_USER_INIT	199	// Last numbered constructor
// Followed by unnumbered constructors

/*
 * DEBUG configuration
 ****************************************************************************************
 */
#if defined(CFG_DBG)
#define PLF_DEBUG          1
#else //CFG_DBG
#define PLF_DEBUG          0
#endif //CFG_DBG

/*
 * LCD
 ****************************************************************************************
 */

/// LCD screen
#if defined(CFG_DISPLAY)
#define PLF_LCD            1
#else // CFG_DISPLAY
#define PLF_LCD            0
#endif // CFG_DISPLAY

/*
 * Display
 ****************************************************************************************
 */

/// Display controller enable/disable
#if defined(CFG_DISPLAY)
#define PLF_DISPLAY          1
#else // CFG_DISPLAY
#define PLF_DISPLAY          0
#endif // CFG_DISPLAY

/*
 * NVDS
 ****************************************************************************************
 */

/// NVDS
#ifdef CFG_NVDS
#define PLF_NVDS             1
#else // CFG_NVDS
#define PLF_NVDS             0
#endif // CFG_NVDS

/*
 * PS2
 ****************************************************************************************
 */

/// PS2
#if defined(CFG_PS2) && defined(CFG_APP_HID)
#define PLF_PS2             1
#else // CFG_PS2
#define PLF_PS2             0
#endif // CFG_PS2

/*
 * KEYBOARD
 ****************************************************************************************
 */

/// KEYBOARD
#if defined(CFG_KBD)
#if defined(CFG_REMOTE)
#define PLF_REMOTE	    1

#if defined(CFG_PDM)
#define PLF_PDM             1

#else // CFG_PDM

#define PLF_PDM             0

#endif // CFG_PDM

#else // CFG_REMOTE

#define PLF_REMOTE	    0
#define PLF_PDM		    0

#endif // CFG_REMOTE

#if defined(CFG_HID_PASSKEY)
#define BLE_HID_PASSKEY        1
#else
#define BLE_HID_PASSKEY        0
#endif // CFG_HID_PASSKEY
#else // CFG_KBD
#define PLF_REMOTE           0
#define PLF_PDM              0
#define BLE_HID_PASSKEY      0
#endif // CFG_KBD

/*
 * Joystick
 ****************************************************************************************
 */

/// Display controller enable/disable
#if defined(CFG_DISPLAY)
#define PLF_JOYSTICK         1
#else // CFG_DISPLAY
#define PLF_JOYSTICK         0
#endif // CFG_DISPLAY

/*
 * Sensors
 ****************************************************************************************
 */

/// ICM Sensor
#ifdef CFG_ICM_SENSOR
#define PLF_ICM_SENSOR       1
#else
#define PLF_ICM_SENSOR       0
#endif

/// TMP1075 Temperature Sensor
#ifdef CFG_TMP1075_SENSOR
#define PLF_TMP1075_SENSOR   1
#else
#define PLF_TMP1075_SENSOR   0
#endif

/*
 * UART test application library
 ****************************************************************************************
 */
#ifdef CFG_UART_TEST
#define PLF_UART_TEST       1
#else
#define PLF_UART_TEST       0
#endif

/*
 * DEFINES
 ****************************************************************************************
 */

/// Possible errors detected by FW
#define    RESET_NO_ERROR         0x00000000
#define    RESET_MEM_ALLOC_FAIL   0xF2F2F2F2
#define    RESET_WATCHDOG         0xDEDEDEDE

/// Reset platform and stay in ROM
#define    RESET_TO_ROM           0xA5A5A5A5
/// Reset platform and reload FW
#define    RESET_AND_LOAD_FW      0xC3C3C3C3

/// Exchange memory size limit
#define    EM_SIZE_LIMIT          0x8000

/// Power saving modes
#define SLEEP_ENABLE_NONE		0
#define SLEEP_ENABLE_DEEP		1
#define SLEEP_ENABLE_RETAIN		2
#define SLEEP_ENABLE_RETAIN_DROP	3
#define SLEEP_ENABLE_HIBERNATE		4
#define SLEEP_ENABLE_SOC_OFF		5
#define SLEEP_ENABLE_TEST_MASK		0x80


/*
 * EXPORTED FUNCTION DECLARATION
 ****************************************************************************************
 */

/**
 * @brief Boot type/temperature
 * @returns true when digital domain was reset before boot
 */
bool boot_was_cold(void);

/**
 * @brief Package info
 * @returns true when bonded to 5x5 package
 */
bool sydney_package_is_5x5(void);

/**
 * @brief Package info
 * @returns true when stacked flash is present inside package
 */
bool sydney_package_has_stacked_flash(void);

/**
 ****************************************************************************************
 * @brief Compute size of SW stack used.
 *
 * This function is compute the maximum size stack used by SW.
 *
 * @return Size of stack used (in bytes)
 ****************************************************************************************
 */
uint16_t get_stack_usage(void);

/**
 ****************************************************************************************
 * @brief Re-boot FW.
 *
 * This function is used to re-boot the FW when error has been detected, it is the end of
 * the current FW execution.
 * After waiting transfers on UART to be finished, and storing the information that
 * FW has re-booted by itself in a non-loaded area, the FW restart by branching at FW
 * entry point.
 *
 * Note: when calling this function, the code after it will not be executed.
 *
 * @param[in] error      Error detected by FW
 ****************************************************************************************
 */
__NORETURN void platform_reset(uint32_t error);

#if !defined(CFG_ROM)
/**
 * @brief User application main function
 * @returns nothing - ignored
 */
int user_main(void);
#endif

/**
 * @brief Debug trace log with timestamp
 * @param[in] format Printf-style formatter
 * @param     ...    Arguments for formatter
 * @returns Number of characters logged
 */
__PRINTF(1, 2) int debug_trace(const char *format, ...);

#if PLF_DEBUG
/**
 ****************************************************************************************
 * @brief Print the assertion error reason and loop forever.
 *
 * @param condition C string containing the condition.
 * @param file C string containing file where the assertion is located.
 * @param line Line number in the file where the assertion is located.
 ****************************************************************************************
 */
void assert_err(const char *condition, const char * file, int line);

/**
 ****************************************************************************************
 * @brief Print the assertion error reason and loop forever.
 * The parameter value that is causing the assertion will also be disclosed.
 *
 * @param param0 parameter value 0.
 * @param param1 parameter value 1.
 * @param file C string containing file where the assertion is located.
 * @param line Line number in the file where the assertion is located.
 ****************************************************************************************
 */
void assert_param(int param0, int param1, const char * file, int line);

/**
 ****************************************************************************************
 * @brief Print the assertion warning reason.
 *
 * @param param0 parameter value 0.
 * @param param1 parameter value 1.
 * @param file C string containing file where the assertion is located.
 * @param line Line number in the file where the assertion is located.
 ****************************************************************************************
 */
void assert_warn(int param0, int param1, const char * file, int line);

#ifdef RTT_DBG
__PRINTF(1, 2) int debug_trace_rtt(const char *format, ...);
#define DEBUG_TRACE_SEL debug_trace_rtt
#elif defined(UART0_DBG)
__PRINTF(1, 2) int debug_trace_uart0(const char *format, ...);
#define DEBUG_TRACE_SEL debug_trace_uart0
#else
#define DEBUG_TRACE_SEL debug_trace
#endif

#ifdef UART0_DBG
void assert_err_uart0(const char *condition, const char *file, int line);
void assert_param_uart0(int param0, int param1, const char *file, int line);
void assert_warn_uart0(int param0, int param1, const char * file, int line);
#define ASSERT_ERR_SEL assert_err_uart0
#define ASSERT_PARAM_SEL assert_param_uart0
#define ASSERT_WARN_SEL assert_warn_uart0
#else
#define ASSERT_ERR_SEL assert_err
#define ASSERT_PARAM_SEL assert_param
#define ASSERT_WARN_SEL assert_warn
#endif

/*
 * ASSERTION CHECK
 ****************************************************************************************
 */
/// Assertions showing a critical error that could require a full system reset
#define ASSERT_ERR(cond)                              \
    do {                                              \
        if (!(cond)) {                                \
            ASSERT_ERR_SEL(#cond, __MODULE__, __LINE__);  \
        }                                             \
    } while(0)

/// Assertions showing a critical error that could require a full system reset
#define ASSERT_INFO(cond, param0, param1)             \
    do {                                              \
        if (!(cond)) {                                \
            ASSERT_PARAM_SEL((int)param0, (int)param1, __MODULE__, __LINE__);  \
        }                                             \
    } while(0)

/// Assertions showing a non-critical problem that has to be fixed by the SW
#define ASSERT_WARN(cond, param0, param1)             \
    do {                                              \
        if (!(cond)) {                                \
            ASSERT_WARN_SEL((int)param0, (int)param1, __MODULE__, __LINE__); \
        }                                             \
    } while(0)

/// Debug trace log with timestamp
#define DEBUG_TRACE(fmt, ...) do { \
    DEBUG_TRACE_SEL(fmt, ##__VA_ARGS__); \
} while(0)
#define DEBUG_TRACE_COND(cond, fmt, ...) do { \
    if (cond) { \
	DEBUG_TRACE_SEL(fmt, ##__VA_ARGS__); \
    } \
} while(0)

#else
/// Assertions showing a critical error that could require a full system reset
#define ASSERT_ERR(cond)                              \
    do {                                              \
        if (!(cond)) {                                \
            __BKPT(0);                                \
        }                                             \
    } while(0)

/// Assertions showing a critical error that could require a full system reset
#define ASSERT_INFO(cond, param0, param1)             \
    do {                                              \
        if (!(cond)) {                                \
            __BKPT(1);                                \
        }                                             \
    } while(0)

/// Assertions showing a non-critical problem that has to be fixed by the SW
#define ASSERT_WARN(cond, param0, param1)

/// Debug trace log with timestamp
#define DEBUG_TRACE(fmt, ...) do { \
    if (0) { \
	debug_trace(fmt, ##__VA_ARGS__); \
    } \
} while(0)
#define DEBUG_TRACE_COND(cond, fmt, ...) do { \
    if (0) { \
	debug_trace(fmt, ##__VA_ARGS__); \
    } \
} while(0)

#endif //PLF_DEBUG

#ifdef __cplusplus
}
#endif

// required to define GLOBAL_INT_** macros as inline assembly. This file is included after
// definition of ASSERT macros as they are used inside ll.h
#include "ll.h"     // ll definitions
/// @} DRIVERS
/// @} ATM2x
