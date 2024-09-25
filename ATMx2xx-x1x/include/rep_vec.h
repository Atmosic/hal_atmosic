/**
 *******************************************************************************
 *
 * @file rep_vec.h
 *
 * @brief Replacement vectors for strategic ROM code paths
 *
 * Copyright (C) Atmosic 2017-2021
 *
 *******************************************************************************
 */

#pragma once

/**
 * @defgroup REP_VEC Replacement vectors
 * @ingroup ATM2x
 * @brief Replacement vectors for strategic ROM code paths
 * @{
 */

#define REP_VEC

#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/// Generic add helper macro
#define RV_ADD(__t, __v, __f) do { \
    static rep_vec ## __t ## t user_ ## __v = { __f, NULL }; \
    rep_vec ## __t ## add(&__v, &user_ ## __v); \
} while(0)

/// Generic add_last helper macro
#define RV_ADD_LAST(__t, __v, __f) do { \
    static rep_vec ## __t ## t user_ ## __v = { __f, NULL }; \
    rep_vec ## __t ## add_last(&__v, &user_ ## __v); \
} while(0)

/// Return codes
typedef enum rep_vec_err_e {
    /// Stop traversal of list and return from invoke
    RV_DONE = 0,
    /// Continue to execute next handler in list
    RV_NEXT
} rep_vec_err_t;


/// void fn(void)
typedef rep_vec_err_t (*rep_vec_fn_t)(void);

/// void fn(void)
typedef struct rep_vec_s {
    rep_vec_fn_t fn;
    struct rep_vec_s *next;
} rep_vec_t;

/**
 * @brief Add handler to head of list
 * @param head      Pointer to pointer to head of list
 * @param new_entry New handler to add
 */
void rep_vec_add(rep_vec_t **head, rep_vec_t *new_entry);

/**
 * @brief Traverse list and invoke handlers
 * @param rv     Pointer to head of list
 * @param def_fn Default handler to invoke after end of list
 */
void rep_vec_invoke(rep_vec_t *rv, void (*def_fn)(void));

/**
 * @brief Add handler to tail of list
 * @param head      Pointer to pointer to head of list
 * @param new_entry New handler to add
 */
void rep_vec_add_last(rep_vec_t **head, rep_vec_t *new_entry);

/**
 * @brief Platform schedule
 *
 * After all active events have been processed by the main event loop,
 * this vector is invoked before interrupts are disabled and power saving
 * modes are handled.
 */
extern rep_vec_t *rv_plf_schedule;
#define RV_PLF_SCHEDULE_ADD(__f) RV_ADD(_, rv_plf_schedule, __f)
#define RV_PLF_SCHEDULE_ADD_LAST(__f) RV_ADD_LAST(_, rv_plf_schedule, __f)

/**
 * @brief Platform reset
 *
 * When a system reset is requested by the ROM software, this vector will be
 * invoked after interrupts are globally disabled but before asserting the
 * hardware reset.  It is the absolute last opportunity for drivers to take
 * action before all system state is lost.
 */
extern rep_vec_t *rv_plf_reset;
#define RV_PLF_RESET_ADD(__f) RV_ADD(_, rv_plf_reset, __f)
#define RV_PLF_RESET_ADD_LAST(__f) RV_ADD_LAST(_, rv_plf_reset, __f)

/**
 * @brief Application init
 *
 * At the end of BLE device initialization, this vector will be invoked to
 * initialize the BLE application layer.  It provides the final opportunity
 * for customization before the main event loop is entered.
 */
extern rep_vec_t *rv_appm_init;
#define RV_APPM_INIT_ADD(__f) RV_ADD(_, rv_appm_init, __f)
#define RV_APPM_INIT_ADD_LAST(__f) RV_ADD_LAST(_, rv_appm_init, __f)

/**
 * @brief Application set advertisement data
 *
 * This vector can be used to customize the GAPM_SET_ADV_DATA_CMD performed
 * by the ROM's built-in beacon application.  It is particularly useful for
 * tiny OTP user applications to place sensor data into the advertisement.
 */
extern rep_vec_t *rv_appm_set_adv_data;
#define RV_APPM_SET_ADV_DATA_ADD(__f) \
    RV_ADD(_, rv_appm_set_adv_data, __f)
#define RV_APPM_SET_ADV_DATA_ADD_LAST(__f) \
    RV_ADD_LAST(_, rv_appm_set_adv_data, __f)

/**
 * @brief Platform back from retain_all power save mode
 *
 * These vectors permit customization of the ROM's power saving logic.
 */
extern rep_vec_t *rv_plf_back_from_retain_all;
#define RV_PLF_BACK_FROM_RETAIN_ALL_ADD(__f) \
    RV_ADD(_, rv_plf_back_from_retain_all, __f)
#define RV_PLF_BACK_FROM_RETAIN_ALL_ADD_LAST(__f) \
    RV_ADD_LAST(_, rv_plf_back_from_retain_all, __f)


/// const struct prf_task_cbs *fn(uint16_t)
struct prf_task_cbs;

/// const struct prf_task_cbs *fn(uint16_t)
typedef rep_vec_err_t (*rep_vec_fn__ret_const_struct_prf_task_cbs_p__uint16_t__t)(const struct prf_task_cbs **, uint16_t);

/// const struct prf_task_cbs *fn(uint16_t)
typedef struct rep_vec__ret_const_struct_prf_task_cbs_p__uint16_t__s {
    rep_vec_fn__ret_const_struct_prf_task_cbs_p__uint16_t__t fn;
    struct rep_vec__ret_const_struct_prf_task_cbs_p__uint16_t__s *next;
} rep_vec__ret_const_struct_prf_task_cbs_p__uint16_t__t;

/**
 * @brief Add handler to head of list
 * @param head      Pointer to pointer to head of list
 * @param new_entry New handler to add
 */
void
rep_vec__ret_const_struct_prf_task_cbs_p__uint16_t__add(
    rep_vec__ret_const_struct_prf_task_cbs_p__uint16_t__t **head,
    rep_vec__ret_const_struct_prf_task_cbs_p__uint16_t__t *new_entry);

/**
 * @brief Traverse list and invoke handlers
 * @param rv     Pointer to head of list
 * @param def_fn Default handler to invoke after end of list
 * @param task_id First parameter
 * @return Return value from handlers
 */
const struct prf_task_cbs *
rep_vec__ret_const_struct_prf_task_cbs_p__uint16_t__invoke(
    rep_vec__ret_const_struct_prf_task_cbs_p__uint16_t__t *rv,
    const struct prf_task_cbs *(*def_fn)(uint16_t),
    uint16_t task_id);

/**
 * @brief Add handler to tail of list
 * @param head      Pointer to pointer to head of list
 * @param new_entry New handler to add
 */
void
rep_vec__ret_const_struct_prf_task_cbs_p__uint16_t__add_last(
    rep_vec__ret_const_struct_prf_task_cbs_p__uint16_t__t **head,
    rep_vec__ret_const_struct_prf_task_cbs_p__uint16_t__t *new_entry);

/**
 * @brief Retrieve profile interface
 *
 * This vector supports the addition and replacement of BLE profiles.
 */
extern rep_vec__ret_const_struct_prf_task_cbs_p__uint16_t__t *rv_prf_itf_get;
#define RV_PRF_ITF_GET_ADD(__f) \
    RV_ADD(__ret_const_struct_prf_task_cbs_p__uint16_t__, rv_prf_itf_get, __f)
#define RV_PRF_ITF_GET_ADD_LAST(__f) \
    RV_ADD_LAST(__ret_const_struct_prf_task_cbs_p__uint16_t__, rv_prf_itf_get, __f)


/// bool fn(void)
typedef rep_vec_err_t (*rep_vec_fn__ret_bool__t)(bool *);

/// bool fn(void)
typedef struct rep_vec__ret_bool__s {
    rep_vec_fn__ret_bool__t fn;
    struct rep_vec__ret_bool__s *next;
} rep_vec__ret_bool__t;

/**
 * @brief Add handler to head of list
 * @param head      Pointer to pointer to head of list
 * @param new_entry New handler to add
 */
void
rep_vec__ret_bool__add(rep_vec__ret_bool__t **head,
    rep_vec__ret_bool__t *new_entry);

/**
 * @brief Traverse list and invoke handlers
 * @param rv     Pointer to head of list
 * @param def_fn Default handler to invoke after end of list
 * @return Return value from handlers
 */
bool
rep_vec__ret_bool__invoke(rep_vec__ret_bool__t *rv, bool (*def_fn)(void));

/**
 * @brief Add handler to tail of list
 * @param head      Pointer to pointer to head of list
 * @param new_entry New handler to add
 */
void
rep_vec__ret_bool__add_last(rep_vec__ret_bool__t **head,
    rep_vec__ret_bool__t *new_entry);

/**
 * @brief Prevent BLE from entering deep sleep
 *
 * This vector can be used to prevent the BLE module from entering sleep.
 * It will also prevent the rest of the system from entering any power
 * saving mode.
 */
extern rep_vec__ret_bool__t *rv_prevent_ble_sleep;
#define RV_PREVENT_BLE_SLEEP_ADD(__f) \
    RV_ADD(__ret_bool__, rv_prevent_ble_sleep, __f)
#define RV_PREVENT_BLE_SLEEP_ADD_LAST(__f) \
    RV_ADD_LAST(__ret_bool__, rv_prevent_ble_sleep, __f)


/* uint32_t fn(void) */
typedef rep_vec_err_t (*rep_vec_fn__ret_uint32_t__t)(uint32_t *);

typedef struct rep_vec__ret_uint32_t__s {
    rep_vec_fn__ret_uint32_t__t fn;
    struct rep_vec__ret_uint32_t__s *next;
} rep_vec__ret_uint32_t__t;

/**
 * @brief Add handler to head of list
 * @param head      Pointer to pointer to head of list
 * @param new_entry New handler to add
 */
void
rep_vec__ret_uint32_t__add(rep_vec__ret_uint32_t__t **head,
    rep_vec__ret_uint32_t__t *new_entry);

/**
 * @brief Traverse list and invoke handlers
 * @param rv     Pointer to head of list
 * @param def_fn Default handler to invoke after end of list
 * @return Return value from handlers
 */
uint32_t
rep_vec__ret_uint32_t__invoke(rep_vec__ret_uint32_t__t *rv,
    uint32_t (*def_fn)(void));

/**
 * @brief Secure random word
 *
 * This vector is invoked when the ROM BLE stack requires good random data
 * for various security purposes.  Applications can improve the security
 * of the system by providing truly random data through this mechanism.
 */
extern rep_vec__ret_uint32_t__t *rv_secure_rand_word;
#define RV_SECURE_RAND_WORD_ADD(__f) \
    RV_ADD(__ret_uint32_t__, rv_secure_rand_word, __f)
#define RV_SECURE_RAND_WORD_ADD_LAST(__f) \
    RV_ADD_LAST(__ret_uint32_t__, rv_secure_rand_word, __f)


/// bool fn(int32_t *, int32_t)
typedef rep_vec_err_t (*rep_vec_fn__ret_bool__int32_t_p__int32_t__t)(bool *, int32_t *, int32_t);

/// bool fn(int32_t *, int32_t)
typedef struct rep_vec__ret_bool__int32_t_p__int32_t__s {
    rep_vec_fn__ret_bool__int32_t_p__int32_t__t fn;
    struct rep_vec__ret_bool__int32_t_p__int32_t__s *next;
} rep_vec__ret_bool__int32_t_p__int32_t__t;

/**
 * @brief Add handler to head of list
 * @param head      Pointer to pointer to head of list
 * @param new_entry New handler to add
 */
void
rep_vec__ret_bool__int32_t_p__int32_t__add(
    rep_vec__ret_bool__int32_t_p__int32_t__t **head,
    rep_vec__ret_bool__int32_t_p__int32_t__t *new_entry);

/**
 * @brief Traverse list and invoke handlers
 * @param rv     Pointer to head of list
 * @param def_fn Default handler to invoke after end of list
 * @param pseq_dur First parameter
 * @param ble_dur  Second parameter
 * @return Return value from handlers
 */
bool
rep_vec__ret_bool__int32_t_p__int32_t__invoke(
    rep_vec__ret_bool__int32_t_p__int32_t__t *rv,
    bool (*def_fn)(int32_t *, int32_t), int32_t *pseq_dur, int32_t ble_dur);

/**
 * @brief Add handler to tail of list
 * @param head      Pointer to pointer to head of list
 * @param new_entry New handler to add
 */
void
rep_vec__ret_bool__int32_t_p__int32_t__add_last(
    rep_vec__ret_bool__int32_t_p__int32_t__t **head,
    rep_vec__ret_bool__int32_t_p__int32_t__t *new_entry);

/**
 * @brief Platform prevent retention power save mode
 *
 * After the BLE module has gone to sleep, this vector can be used to
 * prevent the system from entering the retention power saving mode.
 */
extern rep_vec__ret_bool__int32_t_p__int32_t__t *rv_plf_prevent_retention;
#define RV_PLF_PREVENT_RETENTION_ADD(__f) \
    RV_ADD(__ret_bool__int32_t_p__int32_t__, rv_plf_prevent_retention, __f)
#define RV_PLF_PREVENT_RETENTION_ADD_LAST(__f) \
    RV_ADD_LAST(__ret_bool__int32_t_p__int32_t__, rv_plf_prevent_retention, __f)

/**
 * @brief Platform prevent hibernation power save mode
 *
 * After the BLE module has gone to sleep, this vector can be used to
 * prevent the system from entering the hibernation power saving mode.
 */
extern rep_vec__ret_bool__int32_t_p__int32_t__t *rv_plf_prevent_hibernation;
#define RV_PLF_PREVENT_HIBERNATION_ADD(__f) \
    RV_ADD(__ret_bool__int32_t_p__int32_t__, rv_plf_prevent_hibernation, __f)
#define RV_PLF_PREVENT_HIBERNATION_ADD_LAST(__f) \
    RV_ADD_LAST(__ret_bool__int32_t_p__int32_t__, rv_plf_prevent_hibernation, __f)


/// void fn(uint32_t)
typedef rep_vec_err_t (*rep_vec_fn__uint32_t__t)(uint32_t);

/// void fn(uint32_t)
typedef struct rep_vec__uint32_t__s {
    rep_vec_fn__uint32_t__t fn;
    struct rep_vec__uint32_t__s *next;
} rep_vec__uint32_t__t;

/**
 * @brief Add handler to head of list
 * @param head      Pointer to pointer to head of list
 * @param new_entry New handler to add
 */
void
rep_vec__uint32_t__add(rep_vec__uint32_t__t **head,
    rep_vec__uint32_t__t *new_entry);

/**
 * @brief Traverse list and invoke handlers
 * @param rv     Pointer to head of list
 * @param def_fn Default handler to invoke after end of list
 * @param wakeup_status First parameter
 */
void
rep_vec__uint32_t__invoke(rep_vec__uint32_t__t *rv, void (*def_fn)(uint32_t),
    uint32_t wakeup_status);

/**
 * @brief Add handler to tail of list
 * @param head      Pointer to pointer to head of list
 * @param new_entry New handler to add
 */
void
rep_vec__uint32_t__add_last(rep_vec__uint32_t__t **head,
    rep_vec__uint32_t__t *new_entry);

/**
 * @brief Platform woke up from power saving mode
 *
 * After the system wakes up from a power saving mode, this vector is invoked
 * from a ke_event handler with the wake-up reason from the PSEQ STATUS
 * register.  Applications can decode this reason and take specific action.
 */
extern rep_vec__uint32_t__t *rv_plf_awoken;
#define RV_PLF_AWOKEN_ADD(__f) \
    RV_ADD(__uint32_t__, rv_plf_awoken, __f)
#define RV_PLF_AWOKEN_ADD_LAST(__f) \
    RV_ADD_LAST(__uint32_t__, rv_plf_awoken, __f)


/// bool fn(int32_t, uint32_t)
typedef rep_vec_err_t (*rep_vec_fn__ret_bool__int32_t__uint32_t__t)(bool *, int32_t, uint32_t);

/// bool fn(int32_t, uint32_t)
typedef struct rep_vec__ret_bool__int32_t__uint32_t__s {
    rep_vec_fn__ret_bool__int32_t__uint32_t__t fn;
    struct rep_vec__ret_bool__int32_t__uint32_t__s *next;
} rep_vec__ret_bool__int32_t__uint32_t__t;

/**
 * @brief Add handler to head of list
 * @param head      Pointer to pointer to head of list
 * @param new_entry New handler to add
 */
void
rep_vec__ret_bool__int32_t__uint32_t__add(
    rep_vec__ret_bool__int32_t__uint32_t__t **head,
    rep_vec__ret_bool__int32_t__uint32_t__t *new_entry);

/**
 * @brief Traverse list and invoke handlers
 * @param rv     Pointer to head of list
 * @param def_fn Default handler to invoke after end of list
 * @param duration First parameter
 * @param int_set  Second parameter
 * @return Return value from handlers
 */
bool
rep_vec__ret_bool__int32_t__uint32_t__invoke(
    rep_vec__ret_bool__int32_t__uint32_t__t *rv,
    bool (*def_fn)(int32_t, uint32_t), int32_t duration, uint32_t int_set);

/**
 * @brief Add handler to tail of list
 * @param head      Pointer to pointer to head of list
 * @param new_entry New handler to add
 */
void
rep_vec__ret_bool__int32_t__uint32_t__add_last(
    rep_vec__ret_bool__int32_t__uint32_t__t **head,
    rep_vec__ret_bool__int32_t__uint32_t__t *new_entry);

/**
 * @brief Platform enter hibernate power save mode
 *
 * These vectors permit customization of the ROM's power saving logic.
 */
extern rep_vec__ret_bool__int32_t__uint32_t__t *rv_plf_hibernate;
#define RV_PLF_HIBERNATE_ADD(__f) \
    RV_ADD(__ret_bool__int32_t__uint32_t__, rv_plf_hibernate, __f)
#define RV_PLF_HIBERNATE_ADD_LAST(__f) \
    RV_ADD_LAST(__ret_bool__int32_t__uint32_t__, rv_plf_hibernate, __f)

/**
 * @brief Platform enter retain_all power save mode
 *
 * These vectors permit customization of the ROM's power saving logic.
 */
extern rep_vec__ret_bool__int32_t__uint32_t__t *rv_plf_retain_all;
#define RV_PLF_RETAIN_ALL_ADD(__f) \
    RV_ADD(__ret_bool__int32_t__uint32_t__, rv_plf_retain_all, __f)
#define RV_PLF_RETAIN_ALL_ADD_LAST(__f) \
    RV_ADD_LAST(__ret_bool__int32_t__uint32_t__, rv_plf_retain_all, __f)


/// void fn(bool *, uint32_t *, bool, int32_t)
typedef rep_vec_err_t (*rep_vec_fn__bool_p__uint32_t_p__bool__int32_t__t)(bool *, uint32_t *, bool, int32_t);

/// void fn(bool *, uint32_t *, bool, int32_t)
typedef struct rep_vec__bool_p__uint32_t_p__bool__int32_t__s {
    rep_vec_fn__bool_p__uint32_t_p__bool__int32_t__t fn;
    struct rep_vec__bool_p__uint32_t_p__bool__int32_t__s *next;
} rep_vec__bool_p__uint32_t_p__bool__int32_t__t;

/**
 * @brief Add handler to head of list
 * @param head      Pointer to pointer to head of list
 * @param new_entry New handler to add
 */
void
rep_vec__bool_p__uint32_t_p__bool__int32_t__add(
    rep_vec__bool_p__uint32_t_p__bool__int32_t__t **head,
    rep_vec__bool_p__uint32_t_p__bool__int32_t__t *new_entry);

/**
 * @brief Traverse list and invoke handlers
 * @param rv     Pointer to head of list
 * @param def_fn Default handler to invoke after end of list
 * @param pseq_sleep         First parameter
 * @param int_set            Second parameter
 * @param ble_asleep         Third parameter
 * @param ble_sleep_duration Fourth parameter
 */
void
rep_vec__bool_p__uint32_t_p__bool__int32_t__invoke(
    rep_vec__bool_p__uint32_t_p__bool__int32_t__t *rv,
    void (*def_fn)(bool *, uint32_t *, bool, int32_t), bool *pseq_sleep,
    uint32_t *int_set, bool ble_asleep, int32_t ble_sleep_duration);

/**
 * @brief Add handler to tail of list
 * @param head      Pointer to pointer to head of list
 * @param new_entry New handler to add
 */
void
rep_vec__bool_p__uint32_t_p__bool__int32_t__add_last(
    rep_vec__bool_p__uint32_t_p__bool__int32_t__t **head,
    rep_vec__bool_p__uint32_t_p__bool__int32_t__t *new_entry);

/**
 * @brief Platform considering power save mode
 *
 * These vectors permit customization of the ROM's power saving logic.
 */
extern rep_vec__bool_p__uint32_t_p__bool__int32_t__t *rv_plf_to_deep_sleep;
#define RV_PLF_TO_DEEP_SLEEP_ADD(__f) \
    RV_ADD(__bool_p__uint32_t_p__bool__int32_t__, rv_plf_to_deep_sleep, __f)
#define RV_PLF_TO_DEEP_SLEEP_ADD_LAST(__f) \
    RV_ADD_LAST(__bool_p__uint32_t_p__bool__int32_t__, rv_plf_to_deep_sleep, __f)


/// void fn(bool, uint32_t)
typedef rep_vec_err_t (*rep_vec_fn__bool__uint32_t__t)(bool, uint32_t);

/// void fn(bool, uint32_t)
typedef struct rep_vec__bool__uint32_t__s {
    rep_vec_fn__bool__uint32_t__t fn;
    struct rep_vec__bool__uint32_t__s *next;
} rep_vec__bool__uint32_t__t;

/**
 * @brief Add handler to head of list
 * @param head      Pointer to pointer to head of list
 * @param new_entry New handler to add
 */
void
rep_vec__bool__uint32_t__add(rep_vec__bool__uint32_t__t **head,
    rep_vec__bool__uint32_t__t *new_entry);

/**
 * @brief Traverse list and invoke handlers
 * @param rv     Pointer to head of list
 * @param def_fn Default handler to invoke after end of list
 * @param pseq_sleep First parameter
 * @param int_set    Second parameter
 */
void
rep_vec__bool__uint32_t__invoke(rep_vec__bool__uint32_t__t *rv,
    void (*def_fn)(bool, uint32_t), bool pseq_sleep, uint32_t int_set);

/**
 * @brief Add handler to tail of list
 * @param head      Pointer to pointer to head of list
 * @param new_entry New handler to add
 */
void
rep_vec__bool__uint32_t__add_last(rep_vec__bool__uint32_t__t **head,
    rep_vec__bool__uint32_t__t *new_entry);

/**
 * @brief Platform back from power save mode
 *
 * These vectors permit customization of the ROM's power saving logic.
 */
extern rep_vec__bool__uint32_t__t *rv_plf_from_deep_sleep;
#define RV_PLF_FROM_DEEP_SLEEP_ADD(__f) \
    RV_ADD(__bool__uint32_t__, rv_plf_from_deep_sleep, __f)
#define RV_PLF_FROM_DEEP_SLEEP_ADD_LAST(__f) \
    RV_ADD_LAST(__bool__uint32_t__, rv_plf_from_deep_sleep, __f)

/// void fn(uint8_t, uint32_t, bool)
typedef rep_vec_err_t (*rep_vec_fn__uint8_t__uint32_t__bool__t)(uint8_t,
    uint32_t, bool);

/// void fn(uint8_t, uint32_t, bool)
typedef struct rep_vec__uint8_t__uint32_t__bool__s {
    rep_vec_fn__uint8_t__uint32_t__bool__t fn;
    struct rep_vec__uint8_t__uint32_t__bool__s *next;
} rep_vec__uint8_t__uint32_t__bool__t;

/**
 * @brief Add handler to head of list
 * @param head      Pointer to pointer to head of list
 * @param new_entry New handler to add
 */
void
rep_vec__uint8_t__uint32_t__bool__add(
    rep_vec__uint8_t__uint32_t__bool__t **head,
    rep_vec__uint8_t__uint32_t__bool__t *new_entry);

/**
 * @brief Traverse list and invoke handlers
 * @param rv     Pointer to head of list
 * @param def_fn Default handler to invoke after end of list
 * @param link_id    First parameter
 * @param clock      Second parameter
 * @param sync       Third parameter
 */
void
rep_vec__uint8_t__uint32_t__bool__invoke(
    rep_vec__uint8_t__uint32_t__bool__t *rv, void (*def_fn)(uint8_t, uint32_t,
    bool), uint8_t link_id, uint32_t clock, bool sync);

/**
 * @brief Add handler to tail of list
 * @param head      Pointer to pointer to head of list
 * @param new_entry New handler to add
 */
void
rep_vec__uint8_t_uint32_t__bool__add_last(
    rep_vec__uint8_t__uint32_t__bool__t **head,
    rep_vec__uint8_t__uint32_t__bool__t *new_entry);

/**
 * @brief Schedule next anchor point
 *
 * These vectors permit customization of the scheduling for the next anchor
 * point.
 */
extern rep_vec__uint8_t__uint32_t__bool__t *rv_lld_con_sched;
#define RV_LLD_CON_SCHED_ADD(__f) \
    RV_ADD(__uint8_t__uint32_t__bool__, rv_lld_con_sched, __f)
#define RV_LLD_CON_SCHED_ADD_LAST(__f) \
    RV_ADD_LAST(__uint8_t__uint32_t__bool__, rv_lld_con_sched, __f)

/// void fn(uint8_t)
typedef rep_vec_err_t (*rep_vec_fn__uint8_t__t)(uint8_t);

/// void fn(uint8_t)
typedef struct rep_vec__uint8_t__s { rep_vec_fn__uint8_t__t fn;
    struct rep_vec__uint8_t__s *next;
} rep_vec__uint8_t__t;

/**
 * @brief Add handler to head of list
 * @param head      Pointer to pointer to head of list
 * @param new_entry New handler to add
 */
void
rep_vec__uint8_t__add(rep_vec__uint8_t__t **head,
    rep_vec__uint8_t__t *new_entry);

/**
 * @brief Traverse list and invoke handlers
 * @param rv     Pointer to head of list
 * @param def_fn Default handler to invoke after end of list
 * @param link_id    First parameter
 */
void
rep_vec__uint8_t__invoke(rep_vec__uint8_t__t *rv, void (*def_fn)(uint8_t),
    uint8_t link_id);

/**
 * @brief Add handler to tail of list
 * @param head      Pointer to pointer to head of list
 * @param new_entry New handler to add
 */
void
rep_vec__uint8_t__add_last(rep_vec__uint8_t__t **head,
    rep_vec__uint8_t__t *new_entry);

/**
 * @brief Check the transmission during activity
 *
 * These vectors permit customization of over-the-air packet transmission.
 */
extern rep_vec__uint8_t__t *rv_lld_con_tx;
#define RV_LLD_CON_TX_ADD(__f) RV_ADD(__uint8_t__, rv_lld_con_tx, __f)
#define RV_LLD_CON_TX_ADD_LAST(__f) RV_ADD_LAST(__uint8_t__, rv_lld_con_tx, __f)

/// void fn(uint8_t, uint32_t)
typedef rep_vec_err_t (*rep_vec_fn__uint8_t__uint32_t__t)(uint8_t, uint32_t);

/// void fn(uint8_t, uint32_t)
typedef struct rep_vec__uint8_t__uint32_t__s {
    rep_vec_fn__uint8_t__uint32_t__t fn;
    struct rep_vec__uint8_t__uint32_t__s *next;
} rep_vec__uint8_t__uint32_t__t;

/**
 * @brief Add handler to head of list
 * @param head      Pointer to pointer to head of list
 * @param new_entry New handler to add
 */
void
rep_vec__uint8_t__uint32_t__add(rep_vec__uint8_t__uint32_t__t **head,
    rep_vec__uint8_t__uint32_t__t *new_entry);

/**
 * @brief Traverse list and invoke handlers
 * @param rv     Pointer to head of list
 * @param def_fn Default handler to invoke after end of list
 * @param link_id    First parameter
 * @param timestamp  Second parameter
 */
void
rep_vec__uint8_t__uint32_t__invoke(rep_vec__uint8_t__uint32_t__t *rv,
    void (*def_fn)(uint8_t, uint32_t), uint8_t link_id, uint32_t timestamp);

/**
 * @brief Add handler to tail of list
 * @param head      Pointer to pointer to head of list
 * @param new_entry New handler to add
 */
void
rep_vec__uint8_t_uint32_t__add_last(rep_vec__uint8_t__uint32_t__t **head,
    rep_vec__uint8_t__uint32_t__t *new_entry);

/**
 * @brief Check the reception during activity
 *
 * These vectors permit customization of over-the-air packet reception.
 */
extern rep_vec__uint8_t__uint32_t__t *rv_lld_con_rx;
#define RV_LLD_CON_RX_ADD(__f) \
    RV_ADD(__uint8_t__uint32_t__, rv_lld_con_rx, __f)
#define RV_LLD_CON_RX_ADD_LAST(__f) \
    RV_ADD_LAST(__uint8_t__uint32_t__, rv_lld_con_rx, __f)

#ifdef __cplusplus
}
#endif

/// @} REP_VEC
