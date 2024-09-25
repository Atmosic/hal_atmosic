/**
 ****************************************************************************************
 *
 * @file flash.h
 *
 * @brief Flash driver interface
 *
 * Copyright (C) Atmosic 2017-2022
 *
 *
 ****************************************************************************************
 */

#ifndef __FLASH_H__
#define __FLASH_H__

#include <stdint.h>               // standard integer functions
#include <stdbool.h>

/**
 * @defgroup FLASH Flash
 * @ingroup DRIVERS
 * @brief Driver for flash memory
 * @{
 */

#ifdef __cplusplus
extern "C" {
#endif

/*
 * DEFINES
 ****************************************************************************************
 */

///Flash type code used to select the correct erasing and programming algorithm
#define FLASH_TYPE_UNKNOWN             0
#define FLASH_TYPE_INTEL_28F320C3      1
#define FLASH_TYPE_INTEL_28F800C3      2
#define FLASH_TYPE_NUMONYX_M25P128     3
#define FLASH_TYPE_MICRON              4
#define FLASH_TYPE_MACRONIX            5
#define FLASH_TYPE_WINBOND             6
#define FLASH_TYPE_GIGA                7
#define FLASH_TYPE_FUDAN               8
#define FLASH_TYPE_PUYA                9
#define FLASH_TYPE_GIANTEC            10

/// SPI flash manufacturer IDs
#define FLASH_MAN_ID_MICRON		0x20
#define FLASH_MAN_ID_PUYA		0x85
#define FLASH_MAN_ID_MACRONIX		0xc2
#define FLASH_MAN_ID_GIANTEC            0xc4
#define FLASH_MAN_ID_GIGA		0xc8
#define FLASH_MAN_ID_FUDAN		0xa1
#define FLASH_MAN_ID_WINBOND		0xef

/// Constants for software upgrade process
#define FLASH_STACK_POINTER_WOFF	0
#define FLASH_RESET_VECTOR_WOFF		1
#define FLASH_UPGRADE_STATUS_WOFF	4

#define FLASH_UPGRADE_STATUS_ERASED_MASK	0x01
#define FLASH_UPGRADE_STATUS_nPROGRAMMED_MASK	0x02
#define FLASH_UPGRADE_STATUS_nBOOTED_MASK	0x04
#define FLASH_UPGRADE_STATUS_nBAD_MASK		0x08
#define FLASH_UPGRADE_STATUS_STATE_MASK		0x0f
#define FLASH_UPGRADE_STATUS_SEQ_MASK		0xf0
#define FLASH_UPGRADE_STATUS_MASK		0xff

#define FLASH_UPGRADE_STATUS_ID_MASK		0xffffff00
#define FLASH_UPGRADE_STATUS_ID_ROM		0x4d4f5200
#define FLASH_UPGRADE_STATUS_ID_USR		0x52535500

#define FLASH_PERSIST_FIRST_BOOT_MAGIC		0xf157b007

/// SPI flash ID from device discovery
extern uint32_t ext_flash_id;
#if !defined(CFG_ROM) && !defined(CFG_USER)
/// Base of flashrom image
extern uint32_t ext_flash_base;

extern void (*flash_hibernate)(void);
#endif // CFG_ROM
#if defined(CFG_ROM) || defined(CFG_USER)
/// Indicates when user sysram bank is in use and powered on
extern bool user_code_active;
#endif // CFG_ROM || CFG_USER

/*
 * FUNCTION DECLARATIONS
 ****************************************************************************************
 */

/**
 ****************************************************************************************
 * @brief   Identify the flash device.
 *
 * This function is used to read the flash device ID.
 *
 * Note: This function is synchronous in nature and the callback parameter is
 * not used
 *
 * @param[out]   id          Pointer to id location
 * @param[in]    callback    Callback for end of identification
 * @return       status      0 if operation can start successfully
 ****************************************************************************************
 */
uint8_t flash_identify(uint8_t* id, void (*callback)(void));
/// Vector used by flash_identify()
extern uint8_t (*flash_identify_fnp)(uint8_t* id, void (*callback)(void));

/**
 ****************************************************************************************
 * @brief   Erase a flash section.
 *
 * This function is used to erase a part of the flash memory.
 *
 * Note: This function is synchronous in nature and the callback parameter is
 * not used
 *
 * @param[in]    flash_type  Flash type
 * @param[in]    offset      Starting offset from the beginning of the flash device
 * @param[in]    size        Size of the portion of flash to erase
 * @param[in]    callback    Callback for end of erase
 * @return       status      0 if operation can start successfully
 ****************************************************************************************
 */
uint8_t flash_erase(uint8_t flash_type, uint32_t offset, uint32_t size, void (*callback)(void));
/// Vector used by flash_erase()
extern uint8_t (*flash_erase_fnp)(uint8_t flash_type, uint32_t offset, uint32_t size, void (*callback)(void));

/**
 ****************************************************************************************
 * @brief   Write a flash section.
 *
 * This function is used to write a part of the flash memory.
 *
 * Note: This function is synchronous in nature and the callback parameter is
 * not used
 *
 * @param[in]    flash_type  Flash type
 * @param[in]    offset      Starting offset from the beginning of the flash device
 * @param[in]    length      Size of the portion of flash to write
 * @param[in]    buffer      Pointer on data to write
 * @param[in]    callback    Callback for end of write
 * @return       status      0 if operation can start successfully
 ****************************************************************************************
 */
uint8_t flash_write(uint8_t flash_type, uint32_t offset, uint32_t length, const uint8_t *buffer, void (*callback)(void));
/// Vector used by flash_write()
extern uint8_t (*flash_write_fnp)(uint8_t flash_type, uint32_t offset, uint32_t length, const uint8_t *buffer, void (*callback)(void));

/**
 ****************************************************************************************
 * @brief   Read a flash section.
 *
 * This function is used to read a part of the flash memory.
 *
 * Note: This function is synchronous in nature and the callback parameter is
 * not used
 *
 * @param[in]    flash_type  Flash type
 * @param[in]    offset      Starting offset from the beginning of the flash device
 * @param[in]    length      Size of the portion of flash to read
 * @param[out]   buffer      Pointer on data to read
 * @param[in]    callback    Callback for end of read
 * @return       status      0 if operation can start successfully
 ****************************************************************************************
 */
uint8_t flash_read(uint8_t flash_type, uint32_t offset, uint32_t length, uint8_t *buffer, void (*callback)(void));
/// Vector used by flash_read()
extern uint8_t (*flash_read_fnp)(uint8_t flash_type, uint32_t offset, uint32_t length, uint8_t *buffer, void (*callback)(void));

/**
 * @brief Compare flash sections.
 * @note Note: This function is synchronous in nature and the callback
 * parameter is not used
 * @param[in]    flash_type  Flash type
 * @param[out]   diff        Comparison result (buffer vs. flash)
 * @param[in]    offset      Starting offset from the beginning of the flash device
 * @param[in]    length      Size of the portion of flash to compare
 * @param[in]    buffer      Pointer to data to compare
 * @param[in]    callback    Callback for end of compare
 * @return       status      0 on success (see CO_ERROR_*)
 */
uint8_t flash_cmp(uint8_t flash_type, int *diff, uint32_t offset, uint32_t length, const uint8_t *buffer, void (*callback)(void));
/// Vector used by flash_cmp()
extern uint8_t (*flash_cmp_fnp)(uint8_t flash_type, int *diff, uint32_t offset, uint32_t length, const uint8_t *buffer, void (*callback)(void));


/**
 * @brief Initialize flash driver.
 *
 * Configure QSPI interface, discover and configure connected flash device,
 * and dispatch to code stored on flash.
 */
void external_flash_init(void);

/**
 * @brief Wake up flash device from power down mode.
 *
 * A previous low power system state may have placed the flash device in a
 * power down mode.  Make the device ready to be accessed.
 */
void external_flash_wakeup(void);

#if !defined(CFG_ROM) && !defined(CFG_USER)
/**
 * @brief Initialize flash driver by flash manufacturer ID
 *
 * @param[in] man_id Manufacturer ID
 * @param[in] mem_cap Memory capacity
 * @return true if success
 */
bool external_flash_init_by_id(uint8_t man_id, uint8_t mem_cap);

/**
 * @brief Configure pinumx for QSPI signals
 */
void external_flash_init_pinmux(void);
#endif

#ifdef __cplusplus
}
#endif

/// @} FLASH

#endif // __FLASH_H__
