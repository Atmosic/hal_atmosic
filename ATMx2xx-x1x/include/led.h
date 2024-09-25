/**
 ****************************************************************************************
 *
 * @file led.h
 *
 * @brief Declaration of the LED API.
 *
 * Copyright (C) RivieraWaves 2009-2015
 * Copyright (C) Atmosic 2017-2022
 *
 *
 ****************************************************************************************
 */

#ifndef _LED_H_
#define _LED_H_


/*
 * INCLUDE FILES
 ****************************************************************************************
 */
#include <stdint.h>           // standard integer functions

/**
 ****************************************************************************************
 * @defgroup LED LED
 * @ingroup DRIVERS
 *
 * @brief LED driver
 *
 * @{
 *
 ****************************************************************************************
 */

#ifdef __cplusplus
extern "C" {
#endif

/*
 * FUNCTION DECLARATIONS
 ****************************************************************************************
 */
/**
 ****************************************************************************************
 * @brief Initialize and configure LEDs.
 * This function configures the LEDs according to the system needs.
 ****************************************************************************************
 */
void led_init(uint8_t force_enable);

/**
 ****************************************************************************************
 * @brief Turn ON a led.
 ****************************************************************************************
 */
void led_set(uint8_t led_number);

/**
 ****************************************************************************************
 * @brief Turn OFF a led.
 ****************************************************************************************
 */
void led_reset(uint8_t led_number);

/**
 ****************************************************************************************
 * @brief Toggle a led.
 ****************************************************************************************
 */
void led_toggle(uint8_t led_number);

#ifdef __cplusplus
}
#endif

/// @} LED

#endif // _LED_H_
