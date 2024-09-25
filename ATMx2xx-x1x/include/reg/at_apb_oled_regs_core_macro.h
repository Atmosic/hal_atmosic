/*                                                                           */
/* File:       at_apb_oled_regs_core_macro.h                                 */
/*                                                                           */
/* Arguments:  /cad/tools/cadence/blueprint_3.7.5/Linux-64bit/blueprint -eval*/
/*             $DEFINE_PROPERTY=1; -ansic at_apb_oled_regs_core.rdl          */
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


#ifndef __REG_AT_APB_OLED_REGS_CORE_H__
#define __REG_AT_APB_OLED_REGS_CORE_H__

/**
 *****************************************************************************
 * @defgroup AT_APB_OLED_REGS_CORE at_apb_oled_regs_core
 * @ingroup AT_REG
 * @brief at_apb_oled_regs_core definitions.
 * @{
 *****************************************************************************
 */

/* macros for BlueprintGlobalNameSpace::OLED_control */
/**
 * @defgroup at_apb_oled_regs_core_control control
 * @brief control definitions.
 * @{
 */
#ifndef __OLED_CONTROL_MACRO__
#define __OLED_CONTROL_MACRO__

/* macros for field turn_on_oled_screen */
/**
 * @defgroup at_apb_oled_regs_core_turn_on_oled_screen_field turn_on_oled_screen_field
 * @brief macros for field turn_on_oled_screen
 * @details Turn on the OLED screen. Go through proper power up sequence.
 * @{
 */
#define OLED_CONTROL__TURN_ON_OLED_SCREEN__SHIFT                              0
#define OLED_CONTROL__TURN_ON_OLED_SCREEN__WIDTH                              1
#define OLED_CONTROL__TURN_ON_OLED_SCREEN__MASK                     0x00000001U
#define OLED_CONTROL__TURN_ON_OLED_SCREEN__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define OLED_CONTROL__TURN_ON_OLED_SCREEN__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define OLED_CONTROL__TURN_ON_OLED_SCREEN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define OLED_CONTROL__TURN_ON_OLED_SCREEN__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define OLED_CONTROL__TURN_ON_OLED_SCREEN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define OLED_CONTROL__TURN_ON_OLED_SCREEN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define OLED_CONTROL__TURN_ON_OLED_SCREEN__RESET_VALUE              0x00000000U
/** @} */

/* macros for field do_fast_pwrup */
/**
 * @defgroup at_apb_oled_regs_core_do_fast_pwrup_field do_fast_pwrup_field
 * @brief macros for field do_fast_pwrup
 * @details Do a fast power up of the screen. Only use in simulation to make init time faster.
 * @{
 */
#define OLED_CONTROL__DO_FAST_PWRUP__SHIFT                                    1
#define OLED_CONTROL__DO_FAST_PWRUP__WIDTH                                    1
#define OLED_CONTROL__DO_FAST_PWRUP__MASK                           0x00000002U
#define OLED_CONTROL__DO_FAST_PWRUP__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define OLED_CONTROL__DO_FAST_PWRUP__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define OLED_CONTROL__DO_FAST_PWRUP__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define OLED_CONTROL__DO_FAST_PWRUP__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define OLED_CONTROL__DO_FAST_PWRUP__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define OLED_CONTROL__DO_FAST_PWRUP__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define OLED_CONTROL__DO_FAST_PWRUP__RESET_VALUE                    0x00000000U
/** @} */

/* macros for field update_screen */
/**
 * @defgroup at_apb_oled_regs_core_update_screen_field update_screen_field
 * @brief macros for field update_screen
 * @details Update screen. Do is any of the /char/ registers have been changed.
 * @{
 */
#define OLED_CONTROL__UPDATE_SCREEN__SHIFT                                    2
#define OLED_CONTROL__UPDATE_SCREEN__WIDTH                                    1
#define OLED_CONTROL__UPDATE_SCREEN__MASK                           0x00000004U
#define OLED_CONTROL__UPDATE_SCREEN__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000004U) >> 2)
#define OLED_CONTROL__UPDATE_SCREEN__WRITE(src) \
                    (((uint32_t)(src)\
                    << 2) & 0x00000004U)
#define OLED_CONTROL__UPDATE_SCREEN__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | (((uint32_t)(src) <<\
                    2) & 0x00000004U)
#define OLED_CONTROL__UPDATE_SCREEN__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 2) & ~0x00000004U)))
#define OLED_CONTROL__UPDATE_SCREEN__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(1) << 2)
#define OLED_CONTROL__UPDATE_SCREEN__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(0) << 2)
#define OLED_CONTROL__UPDATE_SCREEN__RESET_VALUE                    0x00000000U
/** @} */
#define OLED_CONTROL__TYPE                                             uint32_t
#define OLED_CONTROL__READ                                          0x00000007U
#define OLED_CONTROL__WRITE                                         0x00000007U
#define OLED_CONTROL__PRESERVED                                     0x00000000U
#define OLED_CONTROL__RESET_VALUE                                   0x00000000U

#endif /* __OLED_CONTROL_MACRO__ */

/** @} end of control */

/* macros for BlueprintGlobalNameSpace::OLED_chars_0a */
/**
 * @defgroup at_apb_oled_regs_core_chars_0a chars_0a
 * @brief character ROM pointers definitions.
 * @{
 */
#ifndef __OLED_CHARS_0A_MACRO__
#define __OLED_CHARS_0A_MACRO__

/* macros for field char_0_3 */
/**
 * @defgroup at_apb_oled_regs_core_char_0_3_field char_0_3_field
 * @brief macros for field char_0_3
 * @details Specifies which character to go in position (0, 3). Index into ROM.
 * @{
 */
#define OLED_CHARS_0A__CHAR_0_3__SHIFT                                        0
#define OLED_CHARS_0A__CHAR_0_3__WIDTH                                        8
#define OLED_CHARS_0A__CHAR_0_3__MASK                               0x000000ffU
#define OLED_CHARS_0A__CHAR_0_3__READ(src)      ((uint32_t)(src) & 0x000000ffU)
#define OLED_CHARS_0A__CHAR_0_3__WRITE(src)     ((uint32_t)(src) & 0x000000ffU)
#define OLED_CHARS_0A__CHAR_0_3__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define OLED_CHARS_0A__CHAR_0_3__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000000ffU)))
#define OLED_CHARS_0A__CHAR_0_3__RESET_VALUE                        0x00000000U
/** @} */

/* macros for field char_0_2 */
/**
 * @defgroup at_apb_oled_regs_core_char_0_2_field char_0_2_field
 * @brief macros for field char_0_2
 * @details Specifies which character to go in position (0, 2). Index into ROM.
 * @{
 */
#define OLED_CHARS_0A__CHAR_0_2__SHIFT                                        8
#define OLED_CHARS_0A__CHAR_0_2__WIDTH                                        8
#define OLED_CHARS_0A__CHAR_0_2__MASK                               0x0000ff00U
#define OLED_CHARS_0A__CHAR_0_2__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000ff00U) >> 8)
#define OLED_CHARS_0A__CHAR_0_2__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x0000ff00U)
#define OLED_CHARS_0A__CHAR_0_2__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ff00U) | (((uint32_t)(src) <<\
                    8) & 0x0000ff00U)
#define OLED_CHARS_0A__CHAR_0_2__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x0000ff00U)))
#define OLED_CHARS_0A__CHAR_0_2__RESET_VALUE                        0x00000000U
/** @} */

/* macros for field char_0_1 */
/**
 * @defgroup at_apb_oled_regs_core_char_0_1_field char_0_1_field
 * @brief macros for field char_0_1
 * @details Specifies which character to go in position (0, 1). Index into ROM.
 * @{
 */
#define OLED_CHARS_0A__CHAR_0_1__SHIFT                                       16
#define OLED_CHARS_0A__CHAR_0_1__WIDTH                                        8
#define OLED_CHARS_0A__CHAR_0_1__MASK                               0x00ff0000U
#define OLED_CHARS_0A__CHAR_0_1__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00ff0000U) >> 16)
#define OLED_CHARS_0A__CHAR_0_1__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00ff0000U)
#define OLED_CHARS_0A__CHAR_0_1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00ff0000U) | (((uint32_t)(src) <<\
                    16) & 0x00ff0000U)
#define OLED_CHARS_0A__CHAR_0_1__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00ff0000U)))
#define OLED_CHARS_0A__CHAR_0_1__RESET_VALUE                        0x00000000U
/** @} */

/* macros for field char_0_0 */
/**
 * @defgroup at_apb_oled_regs_core_char_0_0_field char_0_0_field
 * @brief macros for field char_0_0
 * @details Specifies which character to go in position (0, 0). Index into ROM.
 * @{
 */
#define OLED_CHARS_0A__CHAR_0_0__SHIFT                                       24
#define OLED_CHARS_0A__CHAR_0_0__WIDTH                                        8
#define OLED_CHARS_0A__CHAR_0_0__MASK                               0xff000000U
#define OLED_CHARS_0A__CHAR_0_0__READ(src) \
                    (((uint32_t)(src)\
                    & 0xff000000U) >> 24)
#define OLED_CHARS_0A__CHAR_0_0__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0xff000000U)
#define OLED_CHARS_0A__CHAR_0_0__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xff000000U) | (((uint32_t)(src) <<\
                    24) & 0xff000000U)
#define OLED_CHARS_0A__CHAR_0_0__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0xff000000U)))
#define OLED_CHARS_0A__CHAR_0_0__RESET_VALUE                        0x00000000U
/** @} */
#define OLED_CHARS_0A__TYPE                                            uint32_t
#define OLED_CHARS_0A__READ                                         0xffffffffU
#define OLED_CHARS_0A__WRITE                                        0xffffffffU
#define OLED_CHARS_0A__PRESERVED                                    0x00000000U
#define OLED_CHARS_0A__RESET_VALUE                                  0x00000000U

#endif /* __OLED_CHARS_0A_MACRO__ */

/** @} end of chars_0a */

/* macros for BlueprintGlobalNameSpace::OLED_chars_0b */
/**
 * @defgroup at_apb_oled_regs_core_chars_0b chars_0b
 * @brief character ROM pointers definitions.
 * @{
 */
#ifndef __OLED_CHARS_0B_MACRO__
#define __OLED_CHARS_0B_MACRO__

/* macros for field char_0_7 */
/**
 * @defgroup at_apb_oled_regs_core_char_0_7_field char_0_7_field
 * @brief macros for field char_0_7
 * @details Specifies which character to go in position (0, 7). Index into ROM.
 * @{
 */
#define OLED_CHARS_0B__CHAR_0_7__SHIFT                                        0
#define OLED_CHARS_0B__CHAR_0_7__WIDTH                                        8
#define OLED_CHARS_0B__CHAR_0_7__MASK                               0x000000ffU
#define OLED_CHARS_0B__CHAR_0_7__READ(src)      ((uint32_t)(src) & 0x000000ffU)
#define OLED_CHARS_0B__CHAR_0_7__WRITE(src)     ((uint32_t)(src) & 0x000000ffU)
#define OLED_CHARS_0B__CHAR_0_7__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define OLED_CHARS_0B__CHAR_0_7__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000000ffU)))
#define OLED_CHARS_0B__CHAR_0_7__RESET_VALUE                        0x00000000U
/** @} */

/* macros for field char_0_6 */
/**
 * @defgroup at_apb_oled_regs_core_char_0_6_field char_0_6_field
 * @brief macros for field char_0_6
 * @details Specifies which character to go in position (0, 6). Index into ROM.
 * @{
 */
#define OLED_CHARS_0B__CHAR_0_6__SHIFT                                        8
#define OLED_CHARS_0B__CHAR_0_6__WIDTH                                        8
#define OLED_CHARS_0B__CHAR_0_6__MASK                               0x0000ff00U
#define OLED_CHARS_0B__CHAR_0_6__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000ff00U) >> 8)
#define OLED_CHARS_0B__CHAR_0_6__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x0000ff00U)
#define OLED_CHARS_0B__CHAR_0_6__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ff00U) | (((uint32_t)(src) <<\
                    8) & 0x0000ff00U)
#define OLED_CHARS_0B__CHAR_0_6__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x0000ff00U)))
#define OLED_CHARS_0B__CHAR_0_6__RESET_VALUE                        0x00000000U
/** @} */

/* macros for field char_0_5 */
/**
 * @defgroup at_apb_oled_regs_core_char_0_5_field char_0_5_field
 * @brief macros for field char_0_5
 * @details Specifies which character to go in position (0, 5). Index into ROM.
 * @{
 */
#define OLED_CHARS_0B__CHAR_0_5__SHIFT                                       16
#define OLED_CHARS_0B__CHAR_0_5__WIDTH                                        8
#define OLED_CHARS_0B__CHAR_0_5__MASK                               0x00ff0000U
#define OLED_CHARS_0B__CHAR_0_5__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00ff0000U) >> 16)
#define OLED_CHARS_0B__CHAR_0_5__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00ff0000U)
#define OLED_CHARS_0B__CHAR_0_5__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00ff0000U) | (((uint32_t)(src) <<\
                    16) & 0x00ff0000U)
#define OLED_CHARS_0B__CHAR_0_5__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00ff0000U)))
#define OLED_CHARS_0B__CHAR_0_5__RESET_VALUE                        0x00000000U
/** @} */

/* macros for field char_0_4 */
/**
 * @defgroup at_apb_oled_regs_core_char_0_4_field char_0_4_field
 * @brief macros for field char_0_4
 * @details Specifies which character to go in position (0, 4). Index into ROM.
 * @{
 */
#define OLED_CHARS_0B__CHAR_0_4__SHIFT                                       24
#define OLED_CHARS_0B__CHAR_0_4__WIDTH                                        8
#define OLED_CHARS_0B__CHAR_0_4__MASK                               0xff000000U
#define OLED_CHARS_0B__CHAR_0_4__READ(src) \
                    (((uint32_t)(src)\
                    & 0xff000000U) >> 24)
#define OLED_CHARS_0B__CHAR_0_4__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0xff000000U)
#define OLED_CHARS_0B__CHAR_0_4__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xff000000U) | (((uint32_t)(src) <<\
                    24) & 0xff000000U)
#define OLED_CHARS_0B__CHAR_0_4__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0xff000000U)))
#define OLED_CHARS_0B__CHAR_0_4__RESET_VALUE                        0x00000000U
/** @} */
#define OLED_CHARS_0B__TYPE                                            uint32_t
#define OLED_CHARS_0B__READ                                         0xffffffffU
#define OLED_CHARS_0B__WRITE                                        0xffffffffU
#define OLED_CHARS_0B__PRESERVED                                    0x00000000U
#define OLED_CHARS_0B__RESET_VALUE                                  0x00000000U

#endif /* __OLED_CHARS_0B_MACRO__ */

/** @} end of chars_0b */

/* macros for BlueprintGlobalNameSpace::OLED_chars_0c */
/**
 * @defgroup at_apb_oled_regs_core_chars_0c chars_0c
 * @brief character ROM pointers definitions.
 * @{
 */
#ifndef __OLED_CHARS_0C_MACRO__
#define __OLED_CHARS_0C_MACRO__

/* macros for field char_0_11 */
/**
 * @defgroup at_apb_oled_regs_core_char_0_11_field char_0_11_field
 * @brief macros for field char_0_11
 * @details Specifies which character to go in position (0, 11). Index into ROM.
 * @{
 */
#define OLED_CHARS_0C__CHAR_0_11__SHIFT                                       0
#define OLED_CHARS_0C__CHAR_0_11__WIDTH                                       8
#define OLED_CHARS_0C__CHAR_0_11__MASK                              0x000000ffU
#define OLED_CHARS_0C__CHAR_0_11__READ(src)     ((uint32_t)(src) & 0x000000ffU)
#define OLED_CHARS_0C__CHAR_0_11__WRITE(src)    ((uint32_t)(src) & 0x000000ffU)
#define OLED_CHARS_0C__CHAR_0_11__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define OLED_CHARS_0C__CHAR_0_11__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000000ffU)))
#define OLED_CHARS_0C__CHAR_0_11__RESET_VALUE                       0x00000000U
/** @} */

/* macros for field char_0_10 */
/**
 * @defgroup at_apb_oled_regs_core_char_0_10_field char_0_10_field
 * @brief macros for field char_0_10
 * @details Specifies which character to go in position (0, 10). Index into ROM.
 * @{
 */
#define OLED_CHARS_0C__CHAR_0_10__SHIFT                                       8
#define OLED_CHARS_0C__CHAR_0_10__WIDTH                                       8
#define OLED_CHARS_0C__CHAR_0_10__MASK                              0x0000ff00U
#define OLED_CHARS_0C__CHAR_0_10__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000ff00U) >> 8)
#define OLED_CHARS_0C__CHAR_0_10__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x0000ff00U)
#define OLED_CHARS_0C__CHAR_0_10__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ff00U) | (((uint32_t)(src) <<\
                    8) & 0x0000ff00U)
#define OLED_CHARS_0C__CHAR_0_10__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x0000ff00U)))
#define OLED_CHARS_0C__CHAR_0_10__RESET_VALUE                       0x00000000U
/** @} */

/* macros for field char_0_9 */
/**
 * @defgroup at_apb_oled_regs_core_char_0_9_field char_0_9_field
 * @brief macros for field char_0_9
 * @details Specifies which character to go in position (0, 9). Index into ROM.
 * @{
 */
#define OLED_CHARS_0C__CHAR_0_9__SHIFT                                       16
#define OLED_CHARS_0C__CHAR_0_9__WIDTH                                        8
#define OLED_CHARS_0C__CHAR_0_9__MASK                               0x00ff0000U
#define OLED_CHARS_0C__CHAR_0_9__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00ff0000U) >> 16)
#define OLED_CHARS_0C__CHAR_0_9__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00ff0000U)
#define OLED_CHARS_0C__CHAR_0_9__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00ff0000U) | (((uint32_t)(src) <<\
                    16) & 0x00ff0000U)
#define OLED_CHARS_0C__CHAR_0_9__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00ff0000U)))
#define OLED_CHARS_0C__CHAR_0_9__RESET_VALUE                        0x00000000U
/** @} */

/* macros for field char_0_8 */
/**
 * @defgroup at_apb_oled_regs_core_char_0_8_field char_0_8_field
 * @brief macros for field char_0_8
 * @details Specifies which character to go in position (0, 8). Index into ROM.
 * @{
 */
#define OLED_CHARS_0C__CHAR_0_8__SHIFT                                       24
#define OLED_CHARS_0C__CHAR_0_8__WIDTH                                        8
#define OLED_CHARS_0C__CHAR_0_8__MASK                               0xff000000U
#define OLED_CHARS_0C__CHAR_0_8__READ(src) \
                    (((uint32_t)(src)\
                    & 0xff000000U) >> 24)
#define OLED_CHARS_0C__CHAR_0_8__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0xff000000U)
#define OLED_CHARS_0C__CHAR_0_8__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xff000000U) | (((uint32_t)(src) <<\
                    24) & 0xff000000U)
#define OLED_CHARS_0C__CHAR_0_8__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0xff000000U)))
#define OLED_CHARS_0C__CHAR_0_8__RESET_VALUE                        0x00000000U
/** @} */
#define OLED_CHARS_0C__TYPE                                            uint32_t
#define OLED_CHARS_0C__READ                                         0xffffffffU
#define OLED_CHARS_0C__WRITE                                        0xffffffffU
#define OLED_CHARS_0C__PRESERVED                                    0x00000000U
#define OLED_CHARS_0C__RESET_VALUE                                  0x00000000U

#endif /* __OLED_CHARS_0C_MACRO__ */

/** @} end of chars_0c */

/* macros for BlueprintGlobalNameSpace::OLED_chars_0d */
/**
 * @defgroup at_apb_oled_regs_core_chars_0d chars_0d
 * @brief character ROM pointers definitions.
 * @{
 */
#ifndef __OLED_CHARS_0D_MACRO__
#define __OLED_CHARS_0D_MACRO__

/* macros for field char_0_15 */
/**
 * @defgroup at_apb_oled_regs_core_char_0_15_field char_0_15_field
 * @brief macros for field char_0_15
 * @details Specifies which character to go in position (0, 15). Index into ROM.
 * @{
 */
#define OLED_CHARS_0D__CHAR_0_15__SHIFT                                       0
#define OLED_CHARS_0D__CHAR_0_15__WIDTH                                       8
#define OLED_CHARS_0D__CHAR_0_15__MASK                              0x000000ffU
#define OLED_CHARS_0D__CHAR_0_15__READ(src)     ((uint32_t)(src) & 0x000000ffU)
#define OLED_CHARS_0D__CHAR_0_15__WRITE(src)    ((uint32_t)(src) & 0x000000ffU)
#define OLED_CHARS_0D__CHAR_0_15__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define OLED_CHARS_0D__CHAR_0_15__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000000ffU)))
#define OLED_CHARS_0D__CHAR_0_15__RESET_VALUE                       0x00000000U
/** @} */

/* macros for field char_0_14 */
/**
 * @defgroup at_apb_oled_regs_core_char_0_14_field char_0_14_field
 * @brief macros for field char_0_14
 * @details Specifies which character to go in position (0, 14). Index into ROM.
 * @{
 */
#define OLED_CHARS_0D__CHAR_0_14__SHIFT                                       8
#define OLED_CHARS_0D__CHAR_0_14__WIDTH                                       8
#define OLED_CHARS_0D__CHAR_0_14__MASK                              0x0000ff00U
#define OLED_CHARS_0D__CHAR_0_14__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000ff00U) >> 8)
#define OLED_CHARS_0D__CHAR_0_14__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x0000ff00U)
#define OLED_CHARS_0D__CHAR_0_14__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ff00U) | (((uint32_t)(src) <<\
                    8) & 0x0000ff00U)
#define OLED_CHARS_0D__CHAR_0_14__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x0000ff00U)))
#define OLED_CHARS_0D__CHAR_0_14__RESET_VALUE                       0x00000000U
/** @} */

/* macros for field char_0_13 */
/**
 * @defgroup at_apb_oled_regs_core_char_0_13_field char_0_13_field
 * @brief macros for field char_0_13
 * @details Specifies which character to go in position (0, 13). Index into ROM.
 * @{
 */
#define OLED_CHARS_0D__CHAR_0_13__SHIFT                                      16
#define OLED_CHARS_0D__CHAR_0_13__WIDTH                                       8
#define OLED_CHARS_0D__CHAR_0_13__MASK                              0x00ff0000U
#define OLED_CHARS_0D__CHAR_0_13__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00ff0000U) >> 16)
#define OLED_CHARS_0D__CHAR_0_13__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00ff0000U)
#define OLED_CHARS_0D__CHAR_0_13__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00ff0000U) | (((uint32_t)(src) <<\
                    16) & 0x00ff0000U)
#define OLED_CHARS_0D__CHAR_0_13__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00ff0000U)))
#define OLED_CHARS_0D__CHAR_0_13__RESET_VALUE                       0x00000000U
/** @} */

/* macros for field char_0_12 */
/**
 * @defgroup at_apb_oled_regs_core_char_0_12_field char_0_12_field
 * @brief macros for field char_0_12
 * @details Specifies which character to go in position (0, 12). Index into ROM.
 * @{
 */
#define OLED_CHARS_0D__CHAR_0_12__SHIFT                                      24
#define OLED_CHARS_0D__CHAR_0_12__WIDTH                                       8
#define OLED_CHARS_0D__CHAR_0_12__MASK                              0xff000000U
#define OLED_CHARS_0D__CHAR_0_12__READ(src) \
                    (((uint32_t)(src)\
                    & 0xff000000U) >> 24)
#define OLED_CHARS_0D__CHAR_0_12__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0xff000000U)
#define OLED_CHARS_0D__CHAR_0_12__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xff000000U) | (((uint32_t)(src) <<\
                    24) & 0xff000000U)
#define OLED_CHARS_0D__CHAR_0_12__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0xff000000U)))
#define OLED_CHARS_0D__CHAR_0_12__RESET_VALUE                       0x00000000U
/** @} */
#define OLED_CHARS_0D__TYPE                                            uint32_t
#define OLED_CHARS_0D__READ                                         0xffffffffU
#define OLED_CHARS_0D__WRITE                                        0xffffffffU
#define OLED_CHARS_0D__PRESERVED                                    0x00000000U
#define OLED_CHARS_0D__RESET_VALUE                                  0x00000000U

#endif /* __OLED_CHARS_0D_MACRO__ */

/** @} end of chars_0d */

/* macros for BlueprintGlobalNameSpace::OLED_chars_1a */
/**
 * @defgroup at_apb_oled_regs_core_chars_1a chars_1a
 * @brief character ROM pointers definitions.
 * @{
 */
#ifndef __OLED_CHARS_1A_MACRO__
#define __OLED_CHARS_1A_MACRO__

/* macros for field char_1_3 */
/**
 * @defgroup at_apb_oled_regs_core_char_1_3_field char_1_3_field
 * @brief macros for field char_1_3
 * @details Specifies which character to go in position (1, 3). Index into ROM.
 * @{
 */
#define OLED_CHARS_1A__CHAR_1_3__SHIFT                                        0
#define OLED_CHARS_1A__CHAR_1_3__WIDTH                                        8
#define OLED_CHARS_1A__CHAR_1_3__MASK                               0x000000ffU
#define OLED_CHARS_1A__CHAR_1_3__READ(src)      ((uint32_t)(src) & 0x000000ffU)
#define OLED_CHARS_1A__CHAR_1_3__WRITE(src)     ((uint32_t)(src) & 0x000000ffU)
#define OLED_CHARS_1A__CHAR_1_3__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define OLED_CHARS_1A__CHAR_1_3__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000000ffU)))
#define OLED_CHARS_1A__CHAR_1_3__RESET_VALUE                        0x00000000U
/** @} */

/* macros for field char_1_2 */
/**
 * @defgroup at_apb_oled_regs_core_char_1_2_field char_1_2_field
 * @brief macros for field char_1_2
 * @details Specifies which character to go in position (1, 2). Index into ROM.
 * @{
 */
#define OLED_CHARS_1A__CHAR_1_2__SHIFT                                        8
#define OLED_CHARS_1A__CHAR_1_2__WIDTH                                        8
#define OLED_CHARS_1A__CHAR_1_2__MASK                               0x0000ff00U
#define OLED_CHARS_1A__CHAR_1_2__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000ff00U) >> 8)
#define OLED_CHARS_1A__CHAR_1_2__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x0000ff00U)
#define OLED_CHARS_1A__CHAR_1_2__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ff00U) | (((uint32_t)(src) <<\
                    8) & 0x0000ff00U)
#define OLED_CHARS_1A__CHAR_1_2__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x0000ff00U)))
#define OLED_CHARS_1A__CHAR_1_2__RESET_VALUE                        0x00000000U
/** @} */

/* macros for field char_1_1 */
/**
 * @defgroup at_apb_oled_regs_core_char_1_1_field char_1_1_field
 * @brief macros for field char_1_1
 * @details Specifies which character to go in position (1, 1). Index into ROM.
 * @{
 */
#define OLED_CHARS_1A__CHAR_1_1__SHIFT                                       16
#define OLED_CHARS_1A__CHAR_1_1__WIDTH                                        8
#define OLED_CHARS_1A__CHAR_1_1__MASK                               0x00ff0000U
#define OLED_CHARS_1A__CHAR_1_1__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00ff0000U) >> 16)
#define OLED_CHARS_1A__CHAR_1_1__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00ff0000U)
#define OLED_CHARS_1A__CHAR_1_1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00ff0000U) | (((uint32_t)(src) <<\
                    16) & 0x00ff0000U)
#define OLED_CHARS_1A__CHAR_1_1__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00ff0000U)))
#define OLED_CHARS_1A__CHAR_1_1__RESET_VALUE                        0x00000000U
/** @} */

/* macros for field char_1_0 */
/**
 * @defgroup at_apb_oled_regs_core_char_1_0_field char_1_0_field
 * @brief macros for field char_1_0
 * @details Specifies which character to go in position (1, 0). Index into ROM.
 * @{
 */
#define OLED_CHARS_1A__CHAR_1_0__SHIFT                                       24
#define OLED_CHARS_1A__CHAR_1_0__WIDTH                                        8
#define OLED_CHARS_1A__CHAR_1_0__MASK                               0xff000000U
#define OLED_CHARS_1A__CHAR_1_0__READ(src) \
                    (((uint32_t)(src)\
                    & 0xff000000U) >> 24)
#define OLED_CHARS_1A__CHAR_1_0__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0xff000000U)
#define OLED_CHARS_1A__CHAR_1_0__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xff000000U) | (((uint32_t)(src) <<\
                    24) & 0xff000000U)
#define OLED_CHARS_1A__CHAR_1_0__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0xff000000U)))
#define OLED_CHARS_1A__CHAR_1_0__RESET_VALUE                        0x00000000U
/** @} */
#define OLED_CHARS_1A__TYPE                                            uint32_t
#define OLED_CHARS_1A__READ                                         0xffffffffU
#define OLED_CHARS_1A__WRITE                                        0xffffffffU
#define OLED_CHARS_1A__PRESERVED                                    0x00000000U
#define OLED_CHARS_1A__RESET_VALUE                                  0x00000000U

#endif /* __OLED_CHARS_1A_MACRO__ */

/** @} end of chars_1a */

/* macros for BlueprintGlobalNameSpace::OLED_chars_1b */
/**
 * @defgroup at_apb_oled_regs_core_chars_1b chars_1b
 * @brief character ROM pointers definitions.
 * @{
 */
#ifndef __OLED_CHARS_1B_MACRO__
#define __OLED_CHARS_1B_MACRO__

/* macros for field char_1_7 */
/**
 * @defgroup at_apb_oled_regs_core_char_1_7_field char_1_7_field
 * @brief macros for field char_1_7
 * @details Specifies which character to go in position (1, 7). Index into ROM.
 * @{
 */
#define OLED_CHARS_1B__CHAR_1_7__SHIFT                                        0
#define OLED_CHARS_1B__CHAR_1_7__WIDTH                                        8
#define OLED_CHARS_1B__CHAR_1_7__MASK                               0x000000ffU
#define OLED_CHARS_1B__CHAR_1_7__READ(src)      ((uint32_t)(src) & 0x000000ffU)
#define OLED_CHARS_1B__CHAR_1_7__WRITE(src)     ((uint32_t)(src) & 0x000000ffU)
#define OLED_CHARS_1B__CHAR_1_7__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define OLED_CHARS_1B__CHAR_1_7__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000000ffU)))
#define OLED_CHARS_1B__CHAR_1_7__RESET_VALUE                        0x00000000U
/** @} */

/* macros for field char_1_6 */
/**
 * @defgroup at_apb_oled_regs_core_char_1_6_field char_1_6_field
 * @brief macros for field char_1_6
 * @details Specifies which character to go in position (1, 6). Index into ROM.
 * @{
 */
#define OLED_CHARS_1B__CHAR_1_6__SHIFT                                        8
#define OLED_CHARS_1B__CHAR_1_6__WIDTH                                        8
#define OLED_CHARS_1B__CHAR_1_6__MASK                               0x0000ff00U
#define OLED_CHARS_1B__CHAR_1_6__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000ff00U) >> 8)
#define OLED_CHARS_1B__CHAR_1_6__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x0000ff00U)
#define OLED_CHARS_1B__CHAR_1_6__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ff00U) | (((uint32_t)(src) <<\
                    8) & 0x0000ff00U)
#define OLED_CHARS_1B__CHAR_1_6__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x0000ff00U)))
#define OLED_CHARS_1B__CHAR_1_6__RESET_VALUE                        0x00000000U
/** @} */

/* macros for field char_1_5 */
/**
 * @defgroup at_apb_oled_regs_core_char_1_5_field char_1_5_field
 * @brief macros for field char_1_5
 * @details Specifies which character to go in position (1, 5). Index into ROM.
 * @{
 */
#define OLED_CHARS_1B__CHAR_1_5__SHIFT                                       16
#define OLED_CHARS_1B__CHAR_1_5__WIDTH                                        8
#define OLED_CHARS_1B__CHAR_1_5__MASK                               0x00ff0000U
#define OLED_CHARS_1B__CHAR_1_5__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00ff0000U) >> 16)
#define OLED_CHARS_1B__CHAR_1_5__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00ff0000U)
#define OLED_CHARS_1B__CHAR_1_5__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00ff0000U) | (((uint32_t)(src) <<\
                    16) & 0x00ff0000U)
#define OLED_CHARS_1B__CHAR_1_5__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00ff0000U)))
#define OLED_CHARS_1B__CHAR_1_5__RESET_VALUE                        0x00000000U
/** @} */

/* macros for field char_1_4 */
/**
 * @defgroup at_apb_oled_regs_core_char_1_4_field char_1_4_field
 * @brief macros for field char_1_4
 * @details Specifies which character to go in position (1, 4). Index into ROM.
 * @{
 */
#define OLED_CHARS_1B__CHAR_1_4__SHIFT                                       24
#define OLED_CHARS_1B__CHAR_1_4__WIDTH                                        8
#define OLED_CHARS_1B__CHAR_1_4__MASK                               0xff000000U
#define OLED_CHARS_1B__CHAR_1_4__READ(src) \
                    (((uint32_t)(src)\
                    & 0xff000000U) >> 24)
#define OLED_CHARS_1B__CHAR_1_4__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0xff000000U)
#define OLED_CHARS_1B__CHAR_1_4__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xff000000U) | (((uint32_t)(src) <<\
                    24) & 0xff000000U)
#define OLED_CHARS_1B__CHAR_1_4__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0xff000000U)))
#define OLED_CHARS_1B__CHAR_1_4__RESET_VALUE                        0x00000000U
/** @} */
#define OLED_CHARS_1B__TYPE                                            uint32_t
#define OLED_CHARS_1B__READ                                         0xffffffffU
#define OLED_CHARS_1B__WRITE                                        0xffffffffU
#define OLED_CHARS_1B__PRESERVED                                    0x00000000U
#define OLED_CHARS_1B__RESET_VALUE                                  0x00000000U

#endif /* __OLED_CHARS_1B_MACRO__ */

/** @} end of chars_1b */

/* macros for BlueprintGlobalNameSpace::OLED_chars_1c */
/**
 * @defgroup at_apb_oled_regs_core_chars_1c chars_1c
 * @brief character ROM pointers definitions.
 * @{
 */
#ifndef __OLED_CHARS_1C_MACRO__
#define __OLED_CHARS_1C_MACRO__

/* macros for field char_1_11 */
/**
 * @defgroup at_apb_oled_regs_core_char_1_11_field char_1_11_field
 * @brief macros for field char_1_11
 * @details Specifies which character to go in position (1, 11). Index into ROM.
 * @{
 */
#define OLED_CHARS_1C__CHAR_1_11__SHIFT                                       0
#define OLED_CHARS_1C__CHAR_1_11__WIDTH                                       8
#define OLED_CHARS_1C__CHAR_1_11__MASK                              0x000000ffU
#define OLED_CHARS_1C__CHAR_1_11__READ(src)     ((uint32_t)(src) & 0x000000ffU)
#define OLED_CHARS_1C__CHAR_1_11__WRITE(src)    ((uint32_t)(src) & 0x000000ffU)
#define OLED_CHARS_1C__CHAR_1_11__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define OLED_CHARS_1C__CHAR_1_11__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000000ffU)))
#define OLED_CHARS_1C__CHAR_1_11__RESET_VALUE                       0x00000000U
/** @} */

/* macros for field char_1_10 */
/**
 * @defgroup at_apb_oled_regs_core_char_1_10_field char_1_10_field
 * @brief macros for field char_1_10
 * @details Specifies which character to go in position (1, 10). Index into ROM.
 * @{
 */
#define OLED_CHARS_1C__CHAR_1_10__SHIFT                                       8
#define OLED_CHARS_1C__CHAR_1_10__WIDTH                                       8
#define OLED_CHARS_1C__CHAR_1_10__MASK                              0x0000ff00U
#define OLED_CHARS_1C__CHAR_1_10__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000ff00U) >> 8)
#define OLED_CHARS_1C__CHAR_1_10__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x0000ff00U)
#define OLED_CHARS_1C__CHAR_1_10__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ff00U) | (((uint32_t)(src) <<\
                    8) & 0x0000ff00U)
#define OLED_CHARS_1C__CHAR_1_10__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x0000ff00U)))
#define OLED_CHARS_1C__CHAR_1_10__RESET_VALUE                       0x00000000U
/** @} */

/* macros for field char_1_9 */
/**
 * @defgroup at_apb_oled_regs_core_char_1_9_field char_1_9_field
 * @brief macros for field char_1_9
 * @details Specifies which character to go in position (1, 9). Index into ROM.
 * @{
 */
#define OLED_CHARS_1C__CHAR_1_9__SHIFT                                       16
#define OLED_CHARS_1C__CHAR_1_9__WIDTH                                        8
#define OLED_CHARS_1C__CHAR_1_9__MASK                               0x00ff0000U
#define OLED_CHARS_1C__CHAR_1_9__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00ff0000U) >> 16)
#define OLED_CHARS_1C__CHAR_1_9__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00ff0000U)
#define OLED_CHARS_1C__CHAR_1_9__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00ff0000U) | (((uint32_t)(src) <<\
                    16) & 0x00ff0000U)
#define OLED_CHARS_1C__CHAR_1_9__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00ff0000U)))
#define OLED_CHARS_1C__CHAR_1_9__RESET_VALUE                        0x00000000U
/** @} */

/* macros for field char_1_8 */
/**
 * @defgroup at_apb_oled_regs_core_char_1_8_field char_1_8_field
 * @brief macros for field char_1_8
 * @details Specifies which character to go in position (1, 8). Index into ROM.
 * @{
 */
#define OLED_CHARS_1C__CHAR_1_8__SHIFT                                       24
#define OLED_CHARS_1C__CHAR_1_8__WIDTH                                        8
#define OLED_CHARS_1C__CHAR_1_8__MASK                               0xff000000U
#define OLED_CHARS_1C__CHAR_1_8__READ(src) \
                    (((uint32_t)(src)\
                    & 0xff000000U) >> 24)
#define OLED_CHARS_1C__CHAR_1_8__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0xff000000U)
#define OLED_CHARS_1C__CHAR_1_8__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xff000000U) | (((uint32_t)(src) <<\
                    24) & 0xff000000U)
#define OLED_CHARS_1C__CHAR_1_8__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0xff000000U)))
#define OLED_CHARS_1C__CHAR_1_8__RESET_VALUE                        0x00000000U
/** @} */
#define OLED_CHARS_1C__TYPE                                            uint32_t
#define OLED_CHARS_1C__READ                                         0xffffffffU
#define OLED_CHARS_1C__WRITE                                        0xffffffffU
#define OLED_CHARS_1C__PRESERVED                                    0x00000000U
#define OLED_CHARS_1C__RESET_VALUE                                  0x00000000U

#endif /* __OLED_CHARS_1C_MACRO__ */

/** @} end of chars_1c */

/* macros for BlueprintGlobalNameSpace::OLED_chars_1d */
/**
 * @defgroup at_apb_oled_regs_core_chars_1d chars_1d
 * @brief character ROM pointers definitions.
 * @{
 */
#ifndef __OLED_CHARS_1D_MACRO__
#define __OLED_CHARS_1D_MACRO__

/* macros for field char_1_15 */
/**
 * @defgroup at_apb_oled_regs_core_char_1_15_field char_1_15_field
 * @brief macros for field char_1_15
 * @details Specifies which character to go in position (1, 15). Index into ROM.
 * @{
 */
#define OLED_CHARS_1D__CHAR_1_15__SHIFT                                       0
#define OLED_CHARS_1D__CHAR_1_15__WIDTH                                       8
#define OLED_CHARS_1D__CHAR_1_15__MASK                              0x000000ffU
#define OLED_CHARS_1D__CHAR_1_15__READ(src)     ((uint32_t)(src) & 0x000000ffU)
#define OLED_CHARS_1D__CHAR_1_15__WRITE(src)    ((uint32_t)(src) & 0x000000ffU)
#define OLED_CHARS_1D__CHAR_1_15__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define OLED_CHARS_1D__CHAR_1_15__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000000ffU)))
#define OLED_CHARS_1D__CHAR_1_15__RESET_VALUE                       0x00000000U
/** @} */

/* macros for field char_1_14 */
/**
 * @defgroup at_apb_oled_regs_core_char_1_14_field char_1_14_field
 * @brief macros for field char_1_14
 * @details Specifies which character to go in position (1, 14). Index into ROM.
 * @{
 */
#define OLED_CHARS_1D__CHAR_1_14__SHIFT                                       8
#define OLED_CHARS_1D__CHAR_1_14__WIDTH                                       8
#define OLED_CHARS_1D__CHAR_1_14__MASK                              0x0000ff00U
#define OLED_CHARS_1D__CHAR_1_14__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000ff00U) >> 8)
#define OLED_CHARS_1D__CHAR_1_14__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x0000ff00U)
#define OLED_CHARS_1D__CHAR_1_14__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ff00U) | (((uint32_t)(src) <<\
                    8) & 0x0000ff00U)
#define OLED_CHARS_1D__CHAR_1_14__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x0000ff00U)))
#define OLED_CHARS_1D__CHAR_1_14__RESET_VALUE                       0x00000000U
/** @} */

/* macros for field char_1_13 */
/**
 * @defgroup at_apb_oled_regs_core_char_1_13_field char_1_13_field
 * @brief macros for field char_1_13
 * @details Specifies which character to go in position (1, 13). Index into ROM.
 * @{
 */
#define OLED_CHARS_1D__CHAR_1_13__SHIFT                                      16
#define OLED_CHARS_1D__CHAR_1_13__WIDTH                                       8
#define OLED_CHARS_1D__CHAR_1_13__MASK                              0x00ff0000U
#define OLED_CHARS_1D__CHAR_1_13__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00ff0000U) >> 16)
#define OLED_CHARS_1D__CHAR_1_13__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00ff0000U)
#define OLED_CHARS_1D__CHAR_1_13__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00ff0000U) | (((uint32_t)(src) <<\
                    16) & 0x00ff0000U)
#define OLED_CHARS_1D__CHAR_1_13__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00ff0000U)))
#define OLED_CHARS_1D__CHAR_1_13__RESET_VALUE                       0x00000000U
/** @} */

/* macros for field char_1_12 */
/**
 * @defgroup at_apb_oled_regs_core_char_1_12_field char_1_12_field
 * @brief macros for field char_1_12
 * @details Specifies which character to go in position (1, 12). Index into ROM.
 * @{
 */
#define OLED_CHARS_1D__CHAR_1_12__SHIFT                                      24
#define OLED_CHARS_1D__CHAR_1_12__WIDTH                                       8
#define OLED_CHARS_1D__CHAR_1_12__MASK                              0xff000000U
#define OLED_CHARS_1D__CHAR_1_12__READ(src) \
                    (((uint32_t)(src)\
                    & 0xff000000U) >> 24)
#define OLED_CHARS_1D__CHAR_1_12__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0xff000000U)
#define OLED_CHARS_1D__CHAR_1_12__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xff000000U) | (((uint32_t)(src) <<\
                    24) & 0xff000000U)
#define OLED_CHARS_1D__CHAR_1_12__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0xff000000U)))
#define OLED_CHARS_1D__CHAR_1_12__RESET_VALUE                       0x00000000U
/** @} */
#define OLED_CHARS_1D__TYPE                                            uint32_t
#define OLED_CHARS_1D__READ                                         0xffffffffU
#define OLED_CHARS_1D__WRITE                                        0xffffffffU
#define OLED_CHARS_1D__PRESERVED                                    0x00000000U
#define OLED_CHARS_1D__RESET_VALUE                                  0x00000000U

#endif /* __OLED_CHARS_1D_MACRO__ */

/** @} end of chars_1d */

/* macros for BlueprintGlobalNameSpace::OLED_chars_2a */
/**
 * @defgroup at_apb_oled_regs_core_chars_2a chars_2a
 * @brief character ROM pointers definitions.
 * @{
 */
#ifndef __OLED_CHARS_2A_MACRO__
#define __OLED_CHARS_2A_MACRO__

/* macros for field char_2_3 */
/**
 * @defgroup at_apb_oled_regs_core_char_2_3_field char_2_3_field
 * @brief macros for field char_2_3
 * @details Specifies which character to go in position (2, 3). Index into ROM.
 * @{
 */
#define OLED_CHARS_2A__CHAR_2_3__SHIFT                                        0
#define OLED_CHARS_2A__CHAR_2_3__WIDTH                                        8
#define OLED_CHARS_2A__CHAR_2_3__MASK                               0x000000ffU
#define OLED_CHARS_2A__CHAR_2_3__READ(src)      ((uint32_t)(src) & 0x000000ffU)
#define OLED_CHARS_2A__CHAR_2_3__WRITE(src)     ((uint32_t)(src) & 0x000000ffU)
#define OLED_CHARS_2A__CHAR_2_3__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define OLED_CHARS_2A__CHAR_2_3__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000000ffU)))
#define OLED_CHARS_2A__CHAR_2_3__RESET_VALUE                        0x00000000U
/** @} */

/* macros for field char_2_2 */
/**
 * @defgroup at_apb_oled_regs_core_char_2_2_field char_2_2_field
 * @brief macros for field char_2_2
 * @details Specifies which character to go in position (2, 2). Index into ROM.
 * @{
 */
#define OLED_CHARS_2A__CHAR_2_2__SHIFT                                        8
#define OLED_CHARS_2A__CHAR_2_2__WIDTH                                        8
#define OLED_CHARS_2A__CHAR_2_2__MASK                               0x0000ff00U
#define OLED_CHARS_2A__CHAR_2_2__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000ff00U) >> 8)
#define OLED_CHARS_2A__CHAR_2_2__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x0000ff00U)
#define OLED_CHARS_2A__CHAR_2_2__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ff00U) | (((uint32_t)(src) <<\
                    8) & 0x0000ff00U)
#define OLED_CHARS_2A__CHAR_2_2__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x0000ff00U)))
#define OLED_CHARS_2A__CHAR_2_2__RESET_VALUE                        0x00000000U
/** @} */

/* macros for field char_2_1 */
/**
 * @defgroup at_apb_oled_regs_core_char_2_1_field char_2_1_field
 * @brief macros for field char_2_1
 * @details Specifies which character to go in position (2, 1). Index into ROM.
 * @{
 */
#define OLED_CHARS_2A__CHAR_2_1__SHIFT                                       16
#define OLED_CHARS_2A__CHAR_2_1__WIDTH                                        8
#define OLED_CHARS_2A__CHAR_2_1__MASK                               0x00ff0000U
#define OLED_CHARS_2A__CHAR_2_1__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00ff0000U) >> 16)
#define OLED_CHARS_2A__CHAR_2_1__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00ff0000U)
#define OLED_CHARS_2A__CHAR_2_1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00ff0000U) | (((uint32_t)(src) <<\
                    16) & 0x00ff0000U)
#define OLED_CHARS_2A__CHAR_2_1__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00ff0000U)))
#define OLED_CHARS_2A__CHAR_2_1__RESET_VALUE                        0x00000000U
/** @} */

/* macros for field char_2_0 */
/**
 * @defgroup at_apb_oled_regs_core_char_2_0_field char_2_0_field
 * @brief macros for field char_2_0
 * @details Specifies which character to go in position (2, 0). Index into ROM.
 * @{
 */
#define OLED_CHARS_2A__CHAR_2_0__SHIFT                                       24
#define OLED_CHARS_2A__CHAR_2_0__WIDTH                                        8
#define OLED_CHARS_2A__CHAR_2_0__MASK                               0xff000000U
#define OLED_CHARS_2A__CHAR_2_0__READ(src) \
                    (((uint32_t)(src)\
                    & 0xff000000U) >> 24)
#define OLED_CHARS_2A__CHAR_2_0__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0xff000000U)
#define OLED_CHARS_2A__CHAR_2_0__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xff000000U) | (((uint32_t)(src) <<\
                    24) & 0xff000000U)
#define OLED_CHARS_2A__CHAR_2_0__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0xff000000U)))
#define OLED_CHARS_2A__CHAR_2_0__RESET_VALUE                        0x00000000U
/** @} */
#define OLED_CHARS_2A__TYPE                                            uint32_t
#define OLED_CHARS_2A__READ                                         0xffffffffU
#define OLED_CHARS_2A__WRITE                                        0xffffffffU
#define OLED_CHARS_2A__PRESERVED                                    0x00000000U
#define OLED_CHARS_2A__RESET_VALUE                                  0x00000000U

#endif /* __OLED_CHARS_2A_MACRO__ */

/** @} end of chars_2a */

/* macros for BlueprintGlobalNameSpace::OLED_chars_2b */
/**
 * @defgroup at_apb_oled_regs_core_chars_2b chars_2b
 * @brief character ROM pointers definitions.
 * @{
 */
#ifndef __OLED_CHARS_2B_MACRO__
#define __OLED_CHARS_2B_MACRO__

/* macros for field char_2_7 */
/**
 * @defgroup at_apb_oled_regs_core_char_2_7_field char_2_7_field
 * @brief macros for field char_2_7
 * @details Specifies which character to go in position (2, 7). Index into ROM.
 * @{
 */
#define OLED_CHARS_2B__CHAR_2_7__SHIFT                                        0
#define OLED_CHARS_2B__CHAR_2_7__WIDTH                                        8
#define OLED_CHARS_2B__CHAR_2_7__MASK                               0x000000ffU
#define OLED_CHARS_2B__CHAR_2_7__READ(src)      ((uint32_t)(src) & 0x000000ffU)
#define OLED_CHARS_2B__CHAR_2_7__WRITE(src)     ((uint32_t)(src) & 0x000000ffU)
#define OLED_CHARS_2B__CHAR_2_7__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define OLED_CHARS_2B__CHAR_2_7__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000000ffU)))
#define OLED_CHARS_2B__CHAR_2_7__RESET_VALUE                        0x00000000U
/** @} */

/* macros for field char_2_6 */
/**
 * @defgroup at_apb_oled_regs_core_char_2_6_field char_2_6_field
 * @brief macros for field char_2_6
 * @details Specifies which character to go in position (2, 6). Index into ROM.
 * @{
 */
#define OLED_CHARS_2B__CHAR_2_6__SHIFT                                        8
#define OLED_CHARS_2B__CHAR_2_6__WIDTH                                        8
#define OLED_CHARS_2B__CHAR_2_6__MASK                               0x0000ff00U
#define OLED_CHARS_2B__CHAR_2_6__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000ff00U) >> 8)
#define OLED_CHARS_2B__CHAR_2_6__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x0000ff00U)
#define OLED_CHARS_2B__CHAR_2_6__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ff00U) | (((uint32_t)(src) <<\
                    8) & 0x0000ff00U)
#define OLED_CHARS_2B__CHAR_2_6__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x0000ff00U)))
#define OLED_CHARS_2B__CHAR_2_6__RESET_VALUE                        0x00000000U
/** @} */

/* macros for field char_2_5 */
/**
 * @defgroup at_apb_oled_regs_core_char_2_5_field char_2_5_field
 * @brief macros for field char_2_5
 * @details Specifies which character to go in position (2, 5). Index into ROM.
 * @{
 */
#define OLED_CHARS_2B__CHAR_2_5__SHIFT                                       16
#define OLED_CHARS_2B__CHAR_2_5__WIDTH                                        8
#define OLED_CHARS_2B__CHAR_2_5__MASK                               0x00ff0000U
#define OLED_CHARS_2B__CHAR_2_5__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00ff0000U) >> 16)
#define OLED_CHARS_2B__CHAR_2_5__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00ff0000U)
#define OLED_CHARS_2B__CHAR_2_5__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00ff0000U) | (((uint32_t)(src) <<\
                    16) & 0x00ff0000U)
#define OLED_CHARS_2B__CHAR_2_5__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00ff0000U)))
#define OLED_CHARS_2B__CHAR_2_5__RESET_VALUE                        0x00000000U
/** @} */

/* macros for field char_2_4 */
/**
 * @defgroup at_apb_oled_regs_core_char_2_4_field char_2_4_field
 * @brief macros for field char_2_4
 * @details Specifies which character to go in position (2, 4). Index into ROM.
 * @{
 */
#define OLED_CHARS_2B__CHAR_2_4__SHIFT                                       24
#define OLED_CHARS_2B__CHAR_2_4__WIDTH                                        8
#define OLED_CHARS_2B__CHAR_2_4__MASK                               0xff000000U
#define OLED_CHARS_2B__CHAR_2_4__READ(src) \
                    (((uint32_t)(src)\
                    & 0xff000000U) >> 24)
#define OLED_CHARS_2B__CHAR_2_4__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0xff000000U)
#define OLED_CHARS_2B__CHAR_2_4__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xff000000U) | (((uint32_t)(src) <<\
                    24) & 0xff000000U)
#define OLED_CHARS_2B__CHAR_2_4__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0xff000000U)))
#define OLED_CHARS_2B__CHAR_2_4__RESET_VALUE                        0x00000000U
/** @} */
#define OLED_CHARS_2B__TYPE                                            uint32_t
#define OLED_CHARS_2B__READ                                         0xffffffffU
#define OLED_CHARS_2B__WRITE                                        0xffffffffU
#define OLED_CHARS_2B__PRESERVED                                    0x00000000U
#define OLED_CHARS_2B__RESET_VALUE                                  0x00000000U

#endif /* __OLED_CHARS_2B_MACRO__ */

/** @} end of chars_2b */

/* macros for BlueprintGlobalNameSpace::OLED_chars_2c */
/**
 * @defgroup at_apb_oled_regs_core_chars_2c chars_2c
 * @brief character ROM pointers definitions.
 * @{
 */
#ifndef __OLED_CHARS_2C_MACRO__
#define __OLED_CHARS_2C_MACRO__

/* macros for field char_2_11 */
/**
 * @defgroup at_apb_oled_regs_core_char_2_11_field char_2_11_field
 * @brief macros for field char_2_11
 * @details Specifies which character to go in position (2, 11). Index into ROM.
 * @{
 */
#define OLED_CHARS_2C__CHAR_2_11__SHIFT                                       0
#define OLED_CHARS_2C__CHAR_2_11__WIDTH                                       8
#define OLED_CHARS_2C__CHAR_2_11__MASK                              0x000000ffU
#define OLED_CHARS_2C__CHAR_2_11__READ(src)     ((uint32_t)(src) & 0x000000ffU)
#define OLED_CHARS_2C__CHAR_2_11__WRITE(src)    ((uint32_t)(src) & 0x000000ffU)
#define OLED_CHARS_2C__CHAR_2_11__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define OLED_CHARS_2C__CHAR_2_11__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000000ffU)))
#define OLED_CHARS_2C__CHAR_2_11__RESET_VALUE                       0x00000000U
/** @} */

/* macros for field char_2_10 */
/**
 * @defgroup at_apb_oled_regs_core_char_2_10_field char_2_10_field
 * @brief macros for field char_2_10
 * @details Specifies which character to go in position (2, 10). Index into ROM.
 * @{
 */
#define OLED_CHARS_2C__CHAR_2_10__SHIFT                                       8
#define OLED_CHARS_2C__CHAR_2_10__WIDTH                                       8
#define OLED_CHARS_2C__CHAR_2_10__MASK                              0x0000ff00U
#define OLED_CHARS_2C__CHAR_2_10__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000ff00U) >> 8)
#define OLED_CHARS_2C__CHAR_2_10__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x0000ff00U)
#define OLED_CHARS_2C__CHAR_2_10__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ff00U) | (((uint32_t)(src) <<\
                    8) & 0x0000ff00U)
#define OLED_CHARS_2C__CHAR_2_10__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x0000ff00U)))
#define OLED_CHARS_2C__CHAR_2_10__RESET_VALUE                       0x00000000U
/** @} */

/* macros for field char_2_9 */
/**
 * @defgroup at_apb_oled_regs_core_char_2_9_field char_2_9_field
 * @brief macros for field char_2_9
 * @details Specifies which character to go in position (2, 9). Index into ROM.
 * @{
 */
#define OLED_CHARS_2C__CHAR_2_9__SHIFT                                       16
#define OLED_CHARS_2C__CHAR_2_9__WIDTH                                        8
#define OLED_CHARS_2C__CHAR_2_9__MASK                               0x00ff0000U
#define OLED_CHARS_2C__CHAR_2_9__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00ff0000U) >> 16)
#define OLED_CHARS_2C__CHAR_2_9__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00ff0000U)
#define OLED_CHARS_2C__CHAR_2_9__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00ff0000U) | (((uint32_t)(src) <<\
                    16) & 0x00ff0000U)
#define OLED_CHARS_2C__CHAR_2_9__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00ff0000U)))
#define OLED_CHARS_2C__CHAR_2_9__RESET_VALUE                        0x00000000U
/** @} */

/* macros for field char_2_8 */
/**
 * @defgroup at_apb_oled_regs_core_char_2_8_field char_2_8_field
 * @brief macros for field char_2_8
 * @details Specifies which character to go in position (2, 8). Index into ROM.
 * @{
 */
#define OLED_CHARS_2C__CHAR_2_8__SHIFT                                       24
#define OLED_CHARS_2C__CHAR_2_8__WIDTH                                        8
#define OLED_CHARS_2C__CHAR_2_8__MASK                               0xff000000U
#define OLED_CHARS_2C__CHAR_2_8__READ(src) \
                    (((uint32_t)(src)\
                    & 0xff000000U) >> 24)
#define OLED_CHARS_2C__CHAR_2_8__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0xff000000U)
#define OLED_CHARS_2C__CHAR_2_8__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xff000000U) | (((uint32_t)(src) <<\
                    24) & 0xff000000U)
#define OLED_CHARS_2C__CHAR_2_8__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0xff000000U)))
#define OLED_CHARS_2C__CHAR_2_8__RESET_VALUE                        0x00000000U
/** @} */
#define OLED_CHARS_2C__TYPE                                            uint32_t
#define OLED_CHARS_2C__READ                                         0xffffffffU
#define OLED_CHARS_2C__WRITE                                        0xffffffffU
#define OLED_CHARS_2C__PRESERVED                                    0x00000000U
#define OLED_CHARS_2C__RESET_VALUE                                  0x00000000U

#endif /* __OLED_CHARS_2C_MACRO__ */

/** @} end of chars_2c */

/* macros for BlueprintGlobalNameSpace::OLED_chars_2d */
/**
 * @defgroup at_apb_oled_regs_core_chars_2d chars_2d
 * @brief character ROM pointers definitions.
 * @{
 */
#ifndef __OLED_CHARS_2D_MACRO__
#define __OLED_CHARS_2D_MACRO__

/* macros for field char_2_15 */
/**
 * @defgroup at_apb_oled_regs_core_char_2_15_field char_2_15_field
 * @brief macros for field char_2_15
 * @details Specifies which character to go in position (2, 15). Index into ROM.
 * @{
 */
#define OLED_CHARS_2D__CHAR_2_15__SHIFT                                       0
#define OLED_CHARS_2D__CHAR_2_15__WIDTH                                       8
#define OLED_CHARS_2D__CHAR_2_15__MASK                              0x000000ffU
#define OLED_CHARS_2D__CHAR_2_15__READ(src)     ((uint32_t)(src) & 0x000000ffU)
#define OLED_CHARS_2D__CHAR_2_15__WRITE(src)    ((uint32_t)(src) & 0x000000ffU)
#define OLED_CHARS_2D__CHAR_2_15__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define OLED_CHARS_2D__CHAR_2_15__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000000ffU)))
#define OLED_CHARS_2D__CHAR_2_15__RESET_VALUE                       0x00000000U
/** @} */

/* macros for field char_2_14 */
/**
 * @defgroup at_apb_oled_regs_core_char_2_14_field char_2_14_field
 * @brief macros for field char_2_14
 * @details Specifies which character to go in position (2, 14). Index into ROM.
 * @{
 */
#define OLED_CHARS_2D__CHAR_2_14__SHIFT                                       8
#define OLED_CHARS_2D__CHAR_2_14__WIDTH                                       8
#define OLED_CHARS_2D__CHAR_2_14__MASK                              0x0000ff00U
#define OLED_CHARS_2D__CHAR_2_14__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000ff00U) >> 8)
#define OLED_CHARS_2D__CHAR_2_14__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x0000ff00U)
#define OLED_CHARS_2D__CHAR_2_14__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ff00U) | (((uint32_t)(src) <<\
                    8) & 0x0000ff00U)
#define OLED_CHARS_2D__CHAR_2_14__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x0000ff00U)))
#define OLED_CHARS_2D__CHAR_2_14__RESET_VALUE                       0x00000000U
/** @} */

/* macros for field char_2_13 */
/**
 * @defgroup at_apb_oled_regs_core_char_2_13_field char_2_13_field
 * @brief macros for field char_2_13
 * @details Specifies which character to go in position (2, 13). Index into ROM.
 * @{
 */
#define OLED_CHARS_2D__CHAR_2_13__SHIFT                                      16
#define OLED_CHARS_2D__CHAR_2_13__WIDTH                                       8
#define OLED_CHARS_2D__CHAR_2_13__MASK                              0x00ff0000U
#define OLED_CHARS_2D__CHAR_2_13__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00ff0000U) >> 16)
#define OLED_CHARS_2D__CHAR_2_13__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00ff0000U)
#define OLED_CHARS_2D__CHAR_2_13__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00ff0000U) | (((uint32_t)(src) <<\
                    16) & 0x00ff0000U)
#define OLED_CHARS_2D__CHAR_2_13__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00ff0000U)))
#define OLED_CHARS_2D__CHAR_2_13__RESET_VALUE                       0x00000000U
/** @} */

/* macros for field char_2_12 */
/**
 * @defgroup at_apb_oled_regs_core_char_2_12_field char_2_12_field
 * @brief macros for field char_2_12
 * @details Specifies which character to go in position (2, 12). Index into ROM.
 * @{
 */
#define OLED_CHARS_2D__CHAR_2_12__SHIFT                                      24
#define OLED_CHARS_2D__CHAR_2_12__WIDTH                                       8
#define OLED_CHARS_2D__CHAR_2_12__MASK                              0xff000000U
#define OLED_CHARS_2D__CHAR_2_12__READ(src) \
                    (((uint32_t)(src)\
                    & 0xff000000U) >> 24)
#define OLED_CHARS_2D__CHAR_2_12__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0xff000000U)
#define OLED_CHARS_2D__CHAR_2_12__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xff000000U) | (((uint32_t)(src) <<\
                    24) & 0xff000000U)
#define OLED_CHARS_2D__CHAR_2_12__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0xff000000U)))
#define OLED_CHARS_2D__CHAR_2_12__RESET_VALUE                       0x00000000U
/** @} */
#define OLED_CHARS_2D__TYPE                                            uint32_t
#define OLED_CHARS_2D__READ                                         0xffffffffU
#define OLED_CHARS_2D__WRITE                                        0xffffffffU
#define OLED_CHARS_2D__PRESERVED                                    0x00000000U
#define OLED_CHARS_2D__RESET_VALUE                                  0x00000000U

#endif /* __OLED_CHARS_2D_MACRO__ */

/** @} end of chars_2d */

/* macros for BlueprintGlobalNameSpace::OLED_chars_3a */
/**
 * @defgroup at_apb_oled_regs_core_chars_3a chars_3a
 * @brief character ROM pointers definitions.
 * @{
 */
#ifndef __OLED_CHARS_3A_MACRO__
#define __OLED_CHARS_3A_MACRO__

/* macros for field char_3_3 */
/**
 * @defgroup at_apb_oled_regs_core_char_3_3_field char_3_3_field
 * @brief macros for field char_3_3
 * @details Specifies which character to go in position (3, 3). Index into ROM.
 * @{
 */
#define OLED_CHARS_3A__CHAR_3_3__SHIFT                                        0
#define OLED_CHARS_3A__CHAR_3_3__WIDTH                                        8
#define OLED_CHARS_3A__CHAR_3_3__MASK                               0x000000ffU
#define OLED_CHARS_3A__CHAR_3_3__READ(src)      ((uint32_t)(src) & 0x000000ffU)
#define OLED_CHARS_3A__CHAR_3_3__WRITE(src)     ((uint32_t)(src) & 0x000000ffU)
#define OLED_CHARS_3A__CHAR_3_3__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define OLED_CHARS_3A__CHAR_3_3__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000000ffU)))
#define OLED_CHARS_3A__CHAR_3_3__RESET_VALUE                        0x00000000U
/** @} */

/* macros for field char_3_2 */
/**
 * @defgroup at_apb_oled_regs_core_char_3_2_field char_3_2_field
 * @brief macros for field char_3_2
 * @details Specifies which character to go in position (3, 2). Index into ROM.
 * @{
 */
#define OLED_CHARS_3A__CHAR_3_2__SHIFT                                        8
#define OLED_CHARS_3A__CHAR_3_2__WIDTH                                        8
#define OLED_CHARS_3A__CHAR_3_2__MASK                               0x0000ff00U
#define OLED_CHARS_3A__CHAR_3_2__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000ff00U) >> 8)
#define OLED_CHARS_3A__CHAR_3_2__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x0000ff00U)
#define OLED_CHARS_3A__CHAR_3_2__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ff00U) | (((uint32_t)(src) <<\
                    8) & 0x0000ff00U)
#define OLED_CHARS_3A__CHAR_3_2__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x0000ff00U)))
#define OLED_CHARS_3A__CHAR_3_2__RESET_VALUE                        0x00000000U
/** @} */

/* macros for field char_3_1 */
/**
 * @defgroup at_apb_oled_regs_core_char_3_1_field char_3_1_field
 * @brief macros for field char_3_1
 * @details Specifies which character to go in position (3, 1). Index into ROM.
 * @{
 */
#define OLED_CHARS_3A__CHAR_3_1__SHIFT                                       16
#define OLED_CHARS_3A__CHAR_3_1__WIDTH                                        8
#define OLED_CHARS_3A__CHAR_3_1__MASK                               0x00ff0000U
#define OLED_CHARS_3A__CHAR_3_1__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00ff0000U) >> 16)
#define OLED_CHARS_3A__CHAR_3_1__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00ff0000U)
#define OLED_CHARS_3A__CHAR_3_1__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00ff0000U) | (((uint32_t)(src) <<\
                    16) & 0x00ff0000U)
#define OLED_CHARS_3A__CHAR_3_1__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00ff0000U)))
#define OLED_CHARS_3A__CHAR_3_1__RESET_VALUE                        0x00000000U
/** @} */

/* macros for field char_3_0 */
/**
 * @defgroup at_apb_oled_regs_core_char_3_0_field char_3_0_field
 * @brief macros for field char_3_0
 * @details Specifies which character to go in position (3, 0). Index into ROM.
 * @{
 */
#define OLED_CHARS_3A__CHAR_3_0__SHIFT                                       24
#define OLED_CHARS_3A__CHAR_3_0__WIDTH                                        8
#define OLED_CHARS_3A__CHAR_3_0__MASK                               0xff000000U
#define OLED_CHARS_3A__CHAR_3_0__READ(src) \
                    (((uint32_t)(src)\
                    & 0xff000000U) >> 24)
#define OLED_CHARS_3A__CHAR_3_0__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0xff000000U)
#define OLED_CHARS_3A__CHAR_3_0__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xff000000U) | (((uint32_t)(src) <<\
                    24) & 0xff000000U)
#define OLED_CHARS_3A__CHAR_3_0__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0xff000000U)))
#define OLED_CHARS_3A__CHAR_3_0__RESET_VALUE                        0x00000000U
/** @} */
#define OLED_CHARS_3A__TYPE                                            uint32_t
#define OLED_CHARS_3A__READ                                         0xffffffffU
#define OLED_CHARS_3A__WRITE                                        0xffffffffU
#define OLED_CHARS_3A__PRESERVED                                    0x00000000U
#define OLED_CHARS_3A__RESET_VALUE                                  0x00000000U

#endif /* __OLED_CHARS_3A_MACRO__ */

/** @} end of chars_3a */

/* macros for BlueprintGlobalNameSpace::OLED_chars_3b */
/**
 * @defgroup at_apb_oled_regs_core_chars_3b chars_3b
 * @brief character ROM pointers definitions.
 * @{
 */
#ifndef __OLED_CHARS_3B_MACRO__
#define __OLED_CHARS_3B_MACRO__

/* macros for field char_3_7 */
/**
 * @defgroup at_apb_oled_regs_core_char_3_7_field char_3_7_field
 * @brief macros for field char_3_7
 * @details Specifies which character to go in position (3, 7). Index into ROM.
 * @{
 */
#define OLED_CHARS_3B__CHAR_3_7__SHIFT                                        0
#define OLED_CHARS_3B__CHAR_3_7__WIDTH                                        8
#define OLED_CHARS_3B__CHAR_3_7__MASK                               0x000000ffU
#define OLED_CHARS_3B__CHAR_3_7__READ(src)      ((uint32_t)(src) & 0x000000ffU)
#define OLED_CHARS_3B__CHAR_3_7__WRITE(src)     ((uint32_t)(src) & 0x000000ffU)
#define OLED_CHARS_3B__CHAR_3_7__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define OLED_CHARS_3B__CHAR_3_7__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000000ffU)))
#define OLED_CHARS_3B__CHAR_3_7__RESET_VALUE                        0x00000000U
/** @} */

/* macros for field char_3_6 */
/**
 * @defgroup at_apb_oled_regs_core_char_3_6_field char_3_6_field
 * @brief macros for field char_3_6
 * @details Specifies which character to go in position (3, 6). Index into ROM.
 * @{
 */
#define OLED_CHARS_3B__CHAR_3_6__SHIFT                                        8
#define OLED_CHARS_3B__CHAR_3_6__WIDTH                                        8
#define OLED_CHARS_3B__CHAR_3_6__MASK                               0x0000ff00U
#define OLED_CHARS_3B__CHAR_3_6__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000ff00U) >> 8)
#define OLED_CHARS_3B__CHAR_3_6__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x0000ff00U)
#define OLED_CHARS_3B__CHAR_3_6__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ff00U) | (((uint32_t)(src) <<\
                    8) & 0x0000ff00U)
#define OLED_CHARS_3B__CHAR_3_6__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x0000ff00U)))
#define OLED_CHARS_3B__CHAR_3_6__RESET_VALUE                        0x00000000U
/** @} */

/* macros for field char_3_5 */
/**
 * @defgroup at_apb_oled_regs_core_char_3_5_field char_3_5_field
 * @brief macros for field char_3_5
 * @details Specifies which character to go in position (3, 5). Index into ROM.
 * @{
 */
#define OLED_CHARS_3B__CHAR_3_5__SHIFT                                       16
#define OLED_CHARS_3B__CHAR_3_5__WIDTH                                        8
#define OLED_CHARS_3B__CHAR_3_5__MASK                               0x00ff0000U
#define OLED_CHARS_3B__CHAR_3_5__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00ff0000U) >> 16)
#define OLED_CHARS_3B__CHAR_3_5__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00ff0000U)
#define OLED_CHARS_3B__CHAR_3_5__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00ff0000U) | (((uint32_t)(src) <<\
                    16) & 0x00ff0000U)
#define OLED_CHARS_3B__CHAR_3_5__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00ff0000U)))
#define OLED_CHARS_3B__CHAR_3_5__RESET_VALUE                        0x00000000U
/** @} */

/* macros for field char_3_4 */
/**
 * @defgroup at_apb_oled_regs_core_char_3_4_field char_3_4_field
 * @brief macros for field char_3_4
 * @details Specifies which character to go in position (3, 4). Index into ROM.
 * @{
 */
#define OLED_CHARS_3B__CHAR_3_4__SHIFT                                       24
#define OLED_CHARS_3B__CHAR_3_4__WIDTH                                        8
#define OLED_CHARS_3B__CHAR_3_4__MASK                               0xff000000U
#define OLED_CHARS_3B__CHAR_3_4__READ(src) \
                    (((uint32_t)(src)\
                    & 0xff000000U) >> 24)
#define OLED_CHARS_3B__CHAR_3_4__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0xff000000U)
#define OLED_CHARS_3B__CHAR_3_4__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xff000000U) | (((uint32_t)(src) <<\
                    24) & 0xff000000U)
#define OLED_CHARS_3B__CHAR_3_4__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0xff000000U)))
#define OLED_CHARS_3B__CHAR_3_4__RESET_VALUE                        0x00000000U
/** @} */
#define OLED_CHARS_3B__TYPE                                            uint32_t
#define OLED_CHARS_3B__READ                                         0xffffffffU
#define OLED_CHARS_3B__WRITE                                        0xffffffffU
#define OLED_CHARS_3B__PRESERVED                                    0x00000000U
#define OLED_CHARS_3B__RESET_VALUE                                  0x00000000U

#endif /* __OLED_CHARS_3B_MACRO__ */

/** @} end of chars_3b */

/* macros for BlueprintGlobalNameSpace::OLED_chars_3c */
/**
 * @defgroup at_apb_oled_regs_core_chars_3c chars_3c
 * @brief character ROM pointers definitions.
 * @{
 */
#ifndef __OLED_CHARS_3C_MACRO__
#define __OLED_CHARS_3C_MACRO__

/* macros for field char_3_11 */
/**
 * @defgroup at_apb_oled_regs_core_char_3_11_field char_3_11_field
 * @brief macros for field char_3_11
 * @details Specifies which character to go in position (3, 11). Index into ROM.
 * @{
 */
#define OLED_CHARS_3C__CHAR_3_11__SHIFT                                       0
#define OLED_CHARS_3C__CHAR_3_11__WIDTH                                       8
#define OLED_CHARS_3C__CHAR_3_11__MASK                              0x000000ffU
#define OLED_CHARS_3C__CHAR_3_11__READ(src)     ((uint32_t)(src) & 0x000000ffU)
#define OLED_CHARS_3C__CHAR_3_11__WRITE(src)    ((uint32_t)(src) & 0x000000ffU)
#define OLED_CHARS_3C__CHAR_3_11__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define OLED_CHARS_3C__CHAR_3_11__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000000ffU)))
#define OLED_CHARS_3C__CHAR_3_11__RESET_VALUE                       0x00000000U
/** @} */

/* macros for field char_3_10 */
/**
 * @defgroup at_apb_oled_regs_core_char_3_10_field char_3_10_field
 * @brief macros for field char_3_10
 * @details Specifies which character to go in position (3, 10). Index into ROM.
 * @{
 */
#define OLED_CHARS_3C__CHAR_3_10__SHIFT                                       8
#define OLED_CHARS_3C__CHAR_3_10__WIDTH                                       8
#define OLED_CHARS_3C__CHAR_3_10__MASK                              0x0000ff00U
#define OLED_CHARS_3C__CHAR_3_10__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000ff00U) >> 8)
#define OLED_CHARS_3C__CHAR_3_10__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x0000ff00U)
#define OLED_CHARS_3C__CHAR_3_10__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ff00U) | (((uint32_t)(src) <<\
                    8) & 0x0000ff00U)
#define OLED_CHARS_3C__CHAR_3_10__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x0000ff00U)))
#define OLED_CHARS_3C__CHAR_3_10__RESET_VALUE                       0x00000000U
/** @} */

/* macros for field char_3_9 */
/**
 * @defgroup at_apb_oled_regs_core_char_3_9_field char_3_9_field
 * @brief macros for field char_3_9
 * @details Specifies which character to go in position (3, 9). Index into ROM.
 * @{
 */
#define OLED_CHARS_3C__CHAR_3_9__SHIFT                                       16
#define OLED_CHARS_3C__CHAR_3_9__WIDTH                                        8
#define OLED_CHARS_3C__CHAR_3_9__MASK                               0x00ff0000U
#define OLED_CHARS_3C__CHAR_3_9__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00ff0000U) >> 16)
#define OLED_CHARS_3C__CHAR_3_9__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00ff0000U)
#define OLED_CHARS_3C__CHAR_3_9__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00ff0000U) | (((uint32_t)(src) <<\
                    16) & 0x00ff0000U)
#define OLED_CHARS_3C__CHAR_3_9__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00ff0000U)))
#define OLED_CHARS_3C__CHAR_3_9__RESET_VALUE                        0x00000000U
/** @} */

/* macros for field char_3_8 */
/**
 * @defgroup at_apb_oled_regs_core_char_3_8_field char_3_8_field
 * @brief macros for field char_3_8
 * @details Specifies which character to go in position (3, 8). Index into ROM.
 * @{
 */
#define OLED_CHARS_3C__CHAR_3_8__SHIFT                                       24
#define OLED_CHARS_3C__CHAR_3_8__WIDTH                                        8
#define OLED_CHARS_3C__CHAR_3_8__MASK                               0xff000000U
#define OLED_CHARS_3C__CHAR_3_8__READ(src) \
                    (((uint32_t)(src)\
                    & 0xff000000U) >> 24)
#define OLED_CHARS_3C__CHAR_3_8__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0xff000000U)
#define OLED_CHARS_3C__CHAR_3_8__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xff000000U) | (((uint32_t)(src) <<\
                    24) & 0xff000000U)
#define OLED_CHARS_3C__CHAR_3_8__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0xff000000U)))
#define OLED_CHARS_3C__CHAR_3_8__RESET_VALUE                        0x00000000U
/** @} */
#define OLED_CHARS_3C__TYPE                                            uint32_t
#define OLED_CHARS_3C__READ                                         0xffffffffU
#define OLED_CHARS_3C__WRITE                                        0xffffffffU
#define OLED_CHARS_3C__PRESERVED                                    0x00000000U
#define OLED_CHARS_3C__RESET_VALUE                                  0x00000000U

#endif /* __OLED_CHARS_3C_MACRO__ */

/** @} end of chars_3c */

/* macros for BlueprintGlobalNameSpace::OLED_chars_3d */
/**
 * @defgroup at_apb_oled_regs_core_chars_3d chars_3d
 * @brief character ROM pointers definitions.
 * @{
 */
#ifndef __OLED_CHARS_3D_MACRO__
#define __OLED_CHARS_3D_MACRO__

/* macros for field char_3_15 */
/**
 * @defgroup at_apb_oled_regs_core_char_3_15_field char_3_15_field
 * @brief macros for field char_3_15
 * @details Specifies which character to go in position (3, 15). Index into ROM.
 * @{
 */
#define OLED_CHARS_3D__CHAR_3_15__SHIFT                                       0
#define OLED_CHARS_3D__CHAR_3_15__WIDTH                                       8
#define OLED_CHARS_3D__CHAR_3_15__MASK                              0x000000ffU
#define OLED_CHARS_3D__CHAR_3_15__READ(src)     ((uint32_t)(src) & 0x000000ffU)
#define OLED_CHARS_3D__CHAR_3_15__WRITE(src)    ((uint32_t)(src) & 0x000000ffU)
#define OLED_CHARS_3D__CHAR_3_15__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000000ffU) | ((uint32_t)(src) &\
                    0x000000ffU)
#define OLED_CHARS_3D__CHAR_3_15__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000000ffU)))
#define OLED_CHARS_3D__CHAR_3_15__RESET_VALUE                       0x00000000U
/** @} */

/* macros for field char_3_14 */
/**
 * @defgroup at_apb_oled_regs_core_char_3_14_field char_3_14_field
 * @brief macros for field char_3_14
 * @details Specifies which character to go in position (3, 14). Index into ROM.
 * @{
 */
#define OLED_CHARS_3D__CHAR_3_14__SHIFT                                       8
#define OLED_CHARS_3D__CHAR_3_14__WIDTH                                       8
#define OLED_CHARS_3D__CHAR_3_14__MASK                              0x0000ff00U
#define OLED_CHARS_3D__CHAR_3_14__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000ff00U) >> 8)
#define OLED_CHARS_3D__CHAR_3_14__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x0000ff00U)
#define OLED_CHARS_3D__CHAR_3_14__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ff00U) | (((uint32_t)(src) <<\
                    8) & 0x0000ff00U)
#define OLED_CHARS_3D__CHAR_3_14__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x0000ff00U)))
#define OLED_CHARS_3D__CHAR_3_14__RESET_VALUE                       0x00000000U
/** @} */

/* macros for field char_3_13 */
/**
 * @defgroup at_apb_oled_regs_core_char_3_13_field char_3_13_field
 * @brief macros for field char_3_13
 * @details Specifies which character to go in position (3, 13). Index into ROM.
 * @{
 */
#define OLED_CHARS_3D__CHAR_3_13__SHIFT                                      16
#define OLED_CHARS_3D__CHAR_3_13__WIDTH                                       8
#define OLED_CHARS_3D__CHAR_3_13__MASK                              0x00ff0000U
#define OLED_CHARS_3D__CHAR_3_13__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00ff0000U) >> 16)
#define OLED_CHARS_3D__CHAR_3_13__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00ff0000U)
#define OLED_CHARS_3D__CHAR_3_13__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00ff0000U) | (((uint32_t)(src) <<\
                    16) & 0x00ff0000U)
#define OLED_CHARS_3D__CHAR_3_13__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00ff0000U)))
#define OLED_CHARS_3D__CHAR_3_13__RESET_VALUE                       0x00000000U
/** @} */

/* macros for field char_3_12 */
/**
 * @defgroup at_apb_oled_regs_core_char_3_12_field char_3_12_field
 * @brief macros for field char_3_12
 * @details Specifies which character to go in position (3, 12). Index into ROM.
 * @{
 */
#define OLED_CHARS_3D__CHAR_3_12__SHIFT                                      24
#define OLED_CHARS_3D__CHAR_3_12__WIDTH                                       8
#define OLED_CHARS_3D__CHAR_3_12__MASK                              0xff000000U
#define OLED_CHARS_3D__CHAR_3_12__READ(src) \
                    (((uint32_t)(src)\
                    & 0xff000000U) >> 24)
#define OLED_CHARS_3D__CHAR_3_12__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0xff000000U)
#define OLED_CHARS_3D__CHAR_3_12__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xff000000U) | (((uint32_t)(src) <<\
                    24) & 0xff000000U)
#define OLED_CHARS_3D__CHAR_3_12__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0xff000000U)))
#define OLED_CHARS_3D__CHAR_3_12__RESET_VALUE                       0x00000000U
/** @} */
#define OLED_CHARS_3D__TYPE                                            uint32_t
#define OLED_CHARS_3D__READ                                         0xffffffffU
#define OLED_CHARS_3D__WRITE                                        0xffffffffU
#define OLED_CHARS_3D__PRESERVED                                    0x00000000U
#define OLED_CHARS_3D__RESET_VALUE                                  0x00000000U

#endif /* __OLED_CHARS_3D_MACRO__ */

/** @} end of chars_3d */

/* macros for BlueprintGlobalNameSpace::OLED_status */
/**
 * @defgroup at_apb_oled_regs_core_status status
 * @brief status information definitions.
 * @{
 */
#ifndef __OLED_STATUS_MACRO__
#define __OLED_STATUS_MACRO__

/* macros for field screen_is_up */
/**
 * @defgroup at_apb_oled_regs_core_screen_is_up_field screen_is_up_field
 * @brief macros for field screen_is_up
 * @details Screen is on. Power up sequencing is done.
 * @{
 */
#define OLED_STATUS__SCREEN_IS_UP__SHIFT                                      0
#define OLED_STATUS__SCREEN_IS_UP__WIDTH                                      1
#define OLED_STATUS__SCREEN_IS_UP__MASK                             0x00000001U
#define OLED_STATUS__SCREEN_IS_UP__READ(src)    ((uint32_t)(src) & 0x00000001U)
#define OLED_STATUS__SCREEN_IS_UP__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define OLED_STATUS__SCREEN_IS_UP__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define OLED_STATUS__SCREEN_IS_UP__RESET_VALUE                      0x00000000U
/** @} */

/* macros for field screen_update_in_progress */
/**
 * @defgroup at_apb_oled_regs_core_screen_update_in_progress_field screen_update_in_progress_field
 * @brief macros for field screen_update_in_progress
 * @details Screen update is in progress.
 * @{
 */
#define OLED_STATUS__SCREEN_UPDATE_IN_PROGRESS__SHIFT                         1
#define OLED_STATUS__SCREEN_UPDATE_IN_PROGRESS__WIDTH                         1
#define OLED_STATUS__SCREEN_UPDATE_IN_PROGRESS__MASK                0x00000002U
#define OLED_STATUS__SCREEN_UPDATE_IN_PROGRESS__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define OLED_STATUS__SCREEN_UPDATE_IN_PROGRESS__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define OLED_STATUS__SCREEN_UPDATE_IN_PROGRESS__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define OLED_STATUS__SCREEN_UPDATE_IN_PROGRESS__RESET_VALUE         0x00000000U
/** @} */
#define OLED_STATUS__TYPE                                              uint32_t
#define OLED_STATUS__READ                                           0x00000003U
#define OLED_STATUS__PRESERVED                                      0x00000000U
#define OLED_STATUS__RESET_VALUE                                    0x00000000U

#endif /* __OLED_STATUS_MACRO__ */

/** @} end of status */

/* macros for BlueprintGlobalNameSpace::OLED_core_id */
/**
 * @defgroup at_apb_oled_regs_core_core_id core_id
 * @brief core ID definitions.
 * @{
 */
#ifndef __OLED_CORE_ID_MACRO__
#define __OLED_CORE_ID_MACRO__

/* macros for field id */
/**
 * @defgroup at_apb_oled_regs_core_id_field id_field
 * @brief macros for field id
 * @details 'OLED' in hex
 * @{
 */
#define OLED_CORE_ID__ID__SHIFT                                               0
#define OLED_CORE_ID__ID__WIDTH                                              32
#define OLED_CORE_ID__ID__MASK                                      0xffffffffU
#define OLED_CORE_ID__ID__READ(src)             ((uint32_t)(src) & 0xffffffffU)
#define OLED_CORE_ID__ID__RESET_VALUE                               0x4f4c4544U
/** @} */
#define OLED_CORE_ID__TYPE                                             uint32_t
#define OLED_CORE_ID__READ                                          0xffffffffU
#define OLED_CORE_ID__PRESERVED                                     0x00000000U
#define OLED_CORE_ID__RESET_VALUE                                   0x4f4c4544U

#endif /* __OLED_CORE_ID_MACRO__ */

/** @} end of core_id */

/** @} end of AT_APB_OLED_REGS_CORE */
#endif /* __REG_AT_APB_OLED_REGS_CORE_H__ */
