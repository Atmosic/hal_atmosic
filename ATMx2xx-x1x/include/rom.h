/**
 *******************************************************************************
 *
 * @file rom.h
 *
 * @brief __NR_STATIC symbols provided by the ATMx2 ROM
 *
 * Copyright (C) Atmosic 2023
 *
 *******************************************************************************
 */

#pragma once

#if defined(CFG_ROM) || defined(CFG_USER)

/**
 * @defgroup ROM ATMx2 ROM
 * @ingroup ATMx2
 * @brief ROM __NR_STATIC symbols
 * @{
 */

#include "spi.h"

#ifdef __cplusplus
extern "C" {
#endif

// arch_main.c
extern bool uart_dtm;
void dummy_uart_read(uint8_t *bufptr, uint32_t size,
    void (*callback)(void *, uint8_t), void *dummy);
void dummy_uart_write(uint8_t *bufptr, uint32_t size,
    void (*callback)(void *, uint8_t), void *dummy);
void dummy_uart_flow_on(void);
bool dummy_uart_flow_off(void);
uint8_t dummy_uart_ioctl(uint8_t code, uint32_t value);
extern const struct rwip_eif_api dummy_uart_api;
extern uint8_t pmu_wkup_det;
extern int32_t plf_hibernate_adjust;
extern int32_t plf_retain_adjust;
extern int32_t plf_sleep_min;
void plf_wake_status(void);
void plf_schedule(void);
extern uint32_t save_INTRPT_CFG_5;
extern bool save_hpc;
bool plf_retain_all(int32_t duration, uint32_t int_set);
extern bool sleep_test;
void plf_to_deep_sleep(bool *pseq_sleep, uint32_t *int_set, bool ble_asleep,
    int32_t ble_sleep_duration);
void plf_back_from_retain_all(void);
void plf_from_deep_sleep(bool pseq_sleep, uint32_t int_set);

// debug.c
extern volatile int dbg_assert_block;

// flash.c
void do_qspi_cmd(uint8_t opcode);
void do_qspi_write(uint8_t opcode, uint8_t data);
uint8_t do_qspi_read(uint8_t opcode);
void delay_first_quad_access(void);
bool macronix_flash_init(uint8_t mem_cap);
bool giga_flash_init(uint8_t mem_cap);
bool winbond_flash_init(uint8_t mem_cap);
rep_vec_err_t macronix_deep_power_down(bool *sleep, int32_t duration,
    uint32_t int_set);
extern rep_vec__ret_bool__int32_t__uint32_t__t flash_rv_plf_hibernate;
bool micron_flash_init(uint8_t mem_cap);
void enable_hpc(void);
void disable_hpc(void);
void delay_first_flash_access(void);
__NORETURN void boot_flash_rom(uint32_t stack_pointer, uint32_t reset_vector);
__NORETURN void boot_flash_rom_unmapped(uint32_t stack_pointer,
    uint32_t reset_vector);
bool id_is_valid(uint32_t upgrade_status);
bool status_is_all_good(uint32_t upgrade_status);
bool bank_is_programmed(uint32_t upgrade_status);
void map_b1(uint8_t mem_cap);
void map_winning_seq(uint8_t seq0, uint8_t seq1, uint8_t mem_cap);
void map_active_flash_bank(uint8_t mem_cap);
bool flash_discover(void);
void flash_init_pinmux(void);

// spi_flash.c
uint32_t spi_flash_addr_to_lower(uint32_t addr);
uint8_t spi_flash_wait_for_no_wip(const spi_dev_t *spi);
void spi_flash_write_enable(const spi_dev_t *spi);
void spi_flash_vsr_write_enable(const spi_dev_t *spi);

#ifdef __cplusplus
}
#endif

/// @} ROM

#endif // CFG_ROM || CFG_USER
