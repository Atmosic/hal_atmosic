/*                                                                           */
/* File:       at_apb1_wrpr_regs_core_macro.h                                */
/*                                                                           */
/* Arguments:  /cad/tools/cadence/blueprint_3.7.5/Linux-64bit/blueprint -eval*/
/*             $DEFINE_PROPERTY=1; -ansic at_apb1_wrpr_regs_core.rdl         */
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


#ifndef __REG_AT_APB1_WRPR_REGS_CORE_H__
#define __REG_AT_APB1_WRPR_REGS_CORE_H__

/**
 *****************************************************************************
 * @defgroup AT_APB1_WRPR_REGS_CORE at_apb1_wrpr_regs_core
 * @ingroup AT_REG
 * @brief at_apb1_wrpr_regs_core definitions.
 * @{
 *****************************************************************************
 */

/* macros for BlueprintGlobalNameSpace::WRPR1_apb0_ctrl */
/**
 * @defgroup at_apb1_wrpr_regs_core_apb0_ctrl apb0_ctrl
 * @brief Contains register fields associated with apb0_ctrl. definitions.
 * @{
 */
#ifndef __WRPR1_APB0_CTRL_MACRO__
#define __WRPR1_APB0_CTRL_MACRO__

/* macros for field clk_enable */
/**
 * @defgroup at_apb1_wrpr_regs_core_clk_enable_field clk_enable_field
 * @brief macros for field clk_enable
 * @details enable clock to peripheral in APB slot 0  1 = clock enabled  0 = clock not enabled
 * @{
 */
#define WRPR1_APB0_CTRL__CLK_ENABLE__SHIFT                                    0
#define WRPR1_APB0_CTRL__CLK_ENABLE__WIDTH                                    1
#define WRPR1_APB0_CTRL__CLK_ENABLE__MASK                           0x00000001U
#define WRPR1_APB0_CTRL__CLK_ENABLE__READ(src)  ((uint32_t)(src) & 0x00000001U)
#define WRPR1_APB0_CTRL__CLK_ENABLE__WRITE(src) ((uint32_t)(src) & 0x00000001U)
#define WRPR1_APB0_CTRL__CLK_ENABLE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define WRPR1_APB0_CTRL__CLK_ENABLE__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define WRPR1_APB0_CTRL__CLK_ENABLE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define WRPR1_APB0_CTRL__CLK_ENABLE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define WRPR1_APB0_CTRL__CLK_ENABLE__RESET_VALUE                    0x00000000U
/** @} */

/* macros for field sreset */
/**
 * @defgroup at_apb1_wrpr_regs_core_sreset_field sreset_field
 * @brief macros for field sreset
 * @details reset peripheral in APB slot 0  1 = reset  0 = not reset
 * @{
 */
#define WRPR1_APB0_CTRL__SRESET__SHIFT                                        1
#define WRPR1_APB0_CTRL__SRESET__WIDTH                                        1
#define WRPR1_APB0_CTRL__SRESET__MASK                               0x00000002U
#define WRPR1_APB0_CTRL__SRESET__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define WRPR1_APB0_CTRL__SRESET__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define WRPR1_APB0_CTRL__SRESET__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define WRPR1_APB0_CTRL__SRESET__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define WRPR1_APB0_CTRL__SRESET__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define WRPR1_APB0_CTRL__SRESET__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define WRPR1_APB0_CTRL__SRESET__RESET_VALUE                        0x00000001U
/** @} */
#define WRPR1_APB0_CTRL__TYPE                                          uint32_t
#define WRPR1_APB0_CTRL__READ                                       0x00000003U
#define WRPR1_APB0_CTRL__WRITE                                      0x00000003U
#define WRPR1_APB0_CTRL__PRESERVED                                  0x00000000U
#define WRPR1_APB0_CTRL__RESET_VALUE                                0x00000002U

#endif /* __WRPR1_APB0_CTRL_MACRO__ */

/** @} end of apb0_ctrl */

/* macros for BlueprintGlobalNameSpace::WRPR1_apb1_ctrl */
/**
 * @defgroup at_apb1_wrpr_regs_core_apb1_ctrl apb1_ctrl
 * @brief Contains register fields associated with apb1_ctrl. definitions.
 * @{
 */
#ifndef __WRPR1_APB1_CTRL_MACRO__
#define __WRPR1_APB1_CTRL_MACRO__

/* macros for field clk_enable */
/**
 * @defgroup at_apb1_wrpr_regs_core_clk_enable_field clk_enable_field
 * @brief macros for field clk_enable
 * @details enable clock to peripheral in APB slot 1  1 = clock enabled  0 = clock not enabled
 * @{
 */
#define WRPR1_APB1_CTRL__CLK_ENABLE__SHIFT                                    0
#define WRPR1_APB1_CTRL__CLK_ENABLE__WIDTH                                    1
#define WRPR1_APB1_CTRL__CLK_ENABLE__MASK                           0x00000001U
#define WRPR1_APB1_CTRL__CLK_ENABLE__READ(src)  ((uint32_t)(src) & 0x00000001U)
#define WRPR1_APB1_CTRL__CLK_ENABLE__WRITE(src) ((uint32_t)(src) & 0x00000001U)
#define WRPR1_APB1_CTRL__CLK_ENABLE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define WRPR1_APB1_CTRL__CLK_ENABLE__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define WRPR1_APB1_CTRL__CLK_ENABLE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define WRPR1_APB1_CTRL__CLK_ENABLE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define WRPR1_APB1_CTRL__CLK_ENABLE__RESET_VALUE                    0x00000000U
/** @} */

/* macros for field sreset */
/**
 * @defgroup at_apb1_wrpr_regs_core_sreset_field sreset_field
 * @brief macros for field sreset
 * @details reset peripheral in APB slot 1  1 = reset  0 = not reset
 * @{
 */
#define WRPR1_APB1_CTRL__SRESET__SHIFT                                        1
#define WRPR1_APB1_CTRL__SRESET__WIDTH                                        1
#define WRPR1_APB1_CTRL__SRESET__MASK                               0x00000002U
#define WRPR1_APB1_CTRL__SRESET__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define WRPR1_APB1_CTRL__SRESET__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define WRPR1_APB1_CTRL__SRESET__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define WRPR1_APB1_CTRL__SRESET__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define WRPR1_APB1_CTRL__SRESET__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define WRPR1_APB1_CTRL__SRESET__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define WRPR1_APB1_CTRL__SRESET__RESET_VALUE                        0x00000001U
/** @} */
#define WRPR1_APB1_CTRL__TYPE                                          uint32_t
#define WRPR1_APB1_CTRL__READ                                       0x00000003U
#define WRPR1_APB1_CTRL__WRITE                                      0x00000003U
#define WRPR1_APB1_CTRL__PRESERVED                                  0x00000000U
#define WRPR1_APB1_CTRL__RESET_VALUE                                0x00000002U

#endif /* __WRPR1_APB1_CTRL_MACRO__ */

/** @} end of apb1_ctrl */

/* macros for BlueprintGlobalNameSpace::WRPR1_apb2_ctrl */
/**
 * @defgroup at_apb1_wrpr_regs_core_apb2_ctrl apb2_ctrl
 * @brief Contains register fields associated with apb2_ctrl. definitions.
 * @{
 */
#ifndef __WRPR1_APB2_CTRL_MACRO__
#define __WRPR1_APB2_CTRL_MACRO__

/* macros for field clk_enable */
/**
 * @defgroup at_apb1_wrpr_regs_core_clk_enable_field clk_enable_field
 * @brief macros for field clk_enable
 * @details enable clock to peripheral in APB slot 2  1 = clock enabled  0 = clock not enabled
 * @{
 */
#define WRPR1_APB2_CTRL__CLK_ENABLE__SHIFT                                    0
#define WRPR1_APB2_CTRL__CLK_ENABLE__WIDTH                                    1
#define WRPR1_APB2_CTRL__CLK_ENABLE__MASK                           0x00000001U
#define WRPR1_APB2_CTRL__CLK_ENABLE__READ(src)  ((uint32_t)(src) & 0x00000001U)
#define WRPR1_APB2_CTRL__CLK_ENABLE__WRITE(src) ((uint32_t)(src) & 0x00000001U)
#define WRPR1_APB2_CTRL__CLK_ENABLE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define WRPR1_APB2_CTRL__CLK_ENABLE__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define WRPR1_APB2_CTRL__CLK_ENABLE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define WRPR1_APB2_CTRL__CLK_ENABLE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define WRPR1_APB2_CTRL__CLK_ENABLE__RESET_VALUE                    0x00000000U
/** @} */

/* macros for field sreset */
/**
 * @defgroup at_apb1_wrpr_regs_core_sreset_field sreset_field
 * @brief macros for field sreset
 * @details reset peripheral in APB slot 2  1 = reset  0 = not reset
 * @{
 */
#define WRPR1_APB2_CTRL__SRESET__SHIFT                                        1
#define WRPR1_APB2_CTRL__SRESET__WIDTH                                        1
#define WRPR1_APB2_CTRL__SRESET__MASK                               0x00000002U
#define WRPR1_APB2_CTRL__SRESET__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define WRPR1_APB2_CTRL__SRESET__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define WRPR1_APB2_CTRL__SRESET__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define WRPR1_APB2_CTRL__SRESET__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define WRPR1_APB2_CTRL__SRESET__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define WRPR1_APB2_CTRL__SRESET__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define WRPR1_APB2_CTRL__SRESET__RESET_VALUE                        0x00000001U
/** @} */
#define WRPR1_APB2_CTRL__TYPE                                          uint32_t
#define WRPR1_APB2_CTRL__READ                                       0x00000003U
#define WRPR1_APB2_CTRL__WRITE                                      0x00000003U
#define WRPR1_APB2_CTRL__PRESERVED                                  0x00000000U
#define WRPR1_APB2_CTRL__RESET_VALUE                                0x00000002U

#endif /* __WRPR1_APB2_CTRL_MACRO__ */

/** @} end of apb2_ctrl */

/* macros for BlueprintGlobalNameSpace::WRPR1_apb3_ctrl */
/**
 * @defgroup at_apb1_wrpr_regs_core_apb3_ctrl apb3_ctrl
 * @brief Contains register fields associated with apb3_ctrl. definitions.
 * @{
 */
#ifndef __WRPR1_APB3_CTRL_MACRO__
#define __WRPR1_APB3_CTRL_MACRO__

/* macros for field clk_enable */
/**
 * @defgroup at_apb1_wrpr_regs_core_clk_enable_field clk_enable_field
 * @brief macros for field clk_enable
 * @details enable clock to peripheral in APB slot 3  1 = clock enabled  0 = clock not enabled
 * @{
 */
#define WRPR1_APB3_CTRL__CLK_ENABLE__SHIFT                                    0
#define WRPR1_APB3_CTRL__CLK_ENABLE__WIDTH                                    1
#define WRPR1_APB3_CTRL__CLK_ENABLE__MASK                           0x00000001U
#define WRPR1_APB3_CTRL__CLK_ENABLE__READ(src)  ((uint32_t)(src) & 0x00000001U)
#define WRPR1_APB3_CTRL__CLK_ENABLE__WRITE(src) ((uint32_t)(src) & 0x00000001U)
#define WRPR1_APB3_CTRL__CLK_ENABLE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define WRPR1_APB3_CTRL__CLK_ENABLE__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define WRPR1_APB3_CTRL__CLK_ENABLE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define WRPR1_APB3_CTRL__CLK_ENABLE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define WRPR1_APB3_CTRL__CLK_ENABLE__RESET_VALUE                    0x00000000U
/** @} */

/* macros for field sreset */
/**
 * @defgroup at_apb1_wrpr_regs_core_sreset_field sreset_field
 * @brief macros for field sreset
 * @details reset peripheral in APB slot 3  1 = reset  0 = not reset
 * @{
 */
#define WRPR1_APB3_CTRL__SRESET__SHIFT                                        1
#define WRPR1_APB3_CTRL__SRESET__WIDTH                                        1
#define WRPR1_APB3_CTRL__SRESET__MASK                               0x00000002U
#define WRPR1_APB3_CTRL__SRESET__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define WRPR1_APB3_CTRL__SRESET__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define WRPR1_APB3_CTRL__SRESET__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define WRPR1_APB3_CTRL__SRESET__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define WRPR1_APB3_CTRL__SRESET__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define WRPR1_APB3_CTRL__SRESET__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define WRPR1_APB3_CTRL__SRESET__RESET_VALUE                        0x00000001U
/** @} */
#define WRPR1_APB3_CTRL__TYPE                                          uint32_t
#define WRPR1_APB3_CTRL__READ                                       0x00000003U
#define WRPR1_APB3_CTRL__WRITE                                      0x00000003U
#define WRPR1_APB3_CTRL__PRESERVED                                  0x00000000U
#define WRPR1_APB3_CTRL__RESET_VALUE                                0x00000002U

#endif /* __WRPR1_APB3_CTRL_MACRO__ */

/** @} end of apb3_ctrl */

/* macros for BlueprintGlobalNameSpace::WRPR1_apb4_ctrl */
/**
 * @defgroup at_apb1_wrpr_regs_core_apb4_ctrl apb4_ctrl
 * @brief Contains register fields associated with apb4_ctrl. definitions.
 * @{
 */
#ifndef __WRPR1_APB4_CTRL_MACRO__
#define __WRPR1_APB4_CTRL_MACRO__

/* macros for field clk_enable */
/**
 * @defgroup at_apb1_wrpr_regs_core_clk_enable_field clk_enable_field
 * @brief macros for field clk_enable
 * @details enable clock to peripheral in APB slot 4  1 = clock enabled  0 = clock not enabled
 * @{
 */
#define WRPR1_APB4_CTRL__CLK_ENABLE__SHIFT                                    0
#define WRPR1_APB4_CTRL__CLK_ENABLE__WIDTH                                    1
#define WRPR1_APB4_CTRL__CLK_ENABLE__MASK                           0x00000001U
#define WRPR1_APB4_CTRL__CLK_ENABLE__READ(src)  ((uint32_t)(src) & 0x00000001U)
#define WRPR1_APB4_CTRL__CLK_ENABLE__WRITE(src) ((uint32_t)(src) & 0x00000001U)
#define WRPR1_APB4_CTRL__CLK_ENABLE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define WRPR1_APB4_CTRL__CLK_ENABLE__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define WRPR1_APB4_CTRL__CLK_ENABLE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define WRPR1_APB4_CTRL__CLK_ENABLE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define WRPR1_APB4_CTRL__CLK_ENABLE__RESET_VALUE                    0x00000000U
/** @} */

/* macros for field sreset */
/**
 * @defgroup at_apb1_wrpr_regs_core_sreset_field sreset_field
 * @brief macros for field sreset
 * @details reset peripheral in APB slot 4  1 = reset  0 = not reset
 * @{
 */
#define WRPR1_APB4_CTRL__SRESET__SHIFT                                        1
#define WRPR1_APB4_CTRL__SRESET__WIDTH                                        1
#define WRPR1_APB4_CTRL__SRESET__MASK                               0x00000002U
#define WRPR1_APB4_CTRL__SRESET__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define WRPR1_APB4_CTRL__SRESET__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define WRPR1_APB4_CTRL__SRESET__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define WRPR1_APB4_CTRL__SRESET__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define WRPR1_APB4_CTRL__SRESET__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define WRPR1_APB4_CTRL__SRESET__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define WRPR1_APB4_CTRL__SRESET__RESET_VALUE                        0x00000001U
/** @} */
#define WRPR1_APB4_CTRL__TYPE                                          uint32_t
#define WRPR1_APB4_CTRL__READ                                       0x00000003U
#define WRPR1_APB4_CTRL__WRITE                                      0x00000003U
#define WRPR1_APB4_CTRL__PRESERVED                                  0x00000000U
#define WRPR1_APB4_CTRL__RESET_VALUE                                0x00000002U

#endif /* __WRPR1_APB4_CTRL_MACRO__ */

/** @} end of apb4_ctrl */

/* macros for BlueprintGlobalNameSpace::WRPR1_apb5_ctrl */
/**
 * @defgroup at_apb1_wrpr_regs_core_apb5_ctrl apb5_ctrl
 * @brief Contains register fields associated with apb5_ctrl. definitions.
 * @{
 */
#ifndef __WRPR1_APB5_CTRL_MACRO__
#define __WRPR1_APB5_CTRL_MACRO__

/* macros for field clk_enable */
/**
 * @defgroup at_apb1_wrpr_regs_core_clk_enable_field clk_enable_field
 * @brief macros for field clk_enable
 * @details enable clock to peripheral in APB slot 5  1 = clock enabled  0 = clock not enabled
 * @{
 */
#define WRPR1_APB5_CTRL__CLK_ENABLE__SHIFT                                    0
#define WRPR1_APB5_CTRL__CLK_ENABLE__WIDTH                                    1
#define WRPR1_APB5_CTRL__CLK_ENABLE__MASK                           0x00000001U
#define WRPR1_APB5_CTRL__CLK_ENABLE__READ(src)  ((uint32_t)(src) & 0x00000001U)
#define WRPR1_APB5_CTRL__CLK_ENABLE__WRITE(src) ((uint32_t)(src) & 0x00000001U)
#define WRPR1_APB5_CTRL__CLK_ENABLE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define WRPR1_APB5_CTRL__CLK_ENABLE__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define WRPR1_APB5_CTRL__CLK_ENABLE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define WRPR1_APB5_CTRL__CLK_ENABLE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define WRPR1_APB5_CTRL__CLK_ENABLE__RESET_VALUE                    0x00000000U
/** @} */

/* macros for field sreset */
/**
 * @defgroup at_apb1_wrpr_regs_core_sreset_field sreset_field
 * @brief macros for field sreset
 * @details reset peripheral in APB slot 5  1 = reset  0 = not reset
 * @{
 */
#define WRPR1_APB5_CTRL__SRESET__SHIFT                                        1
#define WRPR1_APB5_CTRL__SRESET__WIDTH                                        1
#define WRPR1_APB5_CTRL__SRESET__MASK                               0x00000002U
#define WRPR1_APB5_CTRL__SRESET__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define WRPR1_APB5_CTRL__SRESET__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define WRPR1_APB5_CTRL__SRESET__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define WRPR1_APB5_CTRL__SRESET__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define WRPR1_APB5_CTRL__SRESET__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define WRPR1_APB5_CTRL__SRESET__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define WRPR1_APB5_CTRL__SRESET__RESET_VALUE                        0x00000001U
/** @} */
#define WRPR1_APB5_CTRL__TYPE                                          uint32_t
#define WRPR1_APB5_CTRL__READ                                       0x00000003U
#define WRPR1_APB5_CTRL__WRITE                                      0x00000003U
#define WRPR1_APB5_CTRL__PRESERVED                                  0x00000000U
#define WRPR1_APB5_CTRL__RESET_VALUE                                0x00000002U

#endif /* __WRPR1_APB5_CTRL_MACRO__ */

/** @} end of apb5_ctrl */

/* macros for BlueprintGlobalNameSpace::WRPR1_apb6_ctrl */
/**
 * @defgroup at_apb1_wrpr_regs_core_apb6_ctrl apb6_ctrl
 * @brief Contains register fields associated with apb6_ctrl. definitions.
 * @{
 */
#ifndef __WRPR1_APB6_CTRL_MACRO__
#define __WRPR1_APB6_CTRL_MACRO__

/* macros for field clk_enable */
/**
 * @defgroup at_apb1_wrpr_regs_core_clk_enable_field clk_enable_field
 * @brief macros for field clk_enable
 * @details enable clock to peripheral in APB slot 6  1 = clock enabled  0 = clock not enabled
 * @{
 */
#define WRPR1_APB6_CTRL__CLK_ENABLE__SHIFT                                    0
#define WRPR1_APB6_CTRL__CLK_ENABLE__WIDTH                                    1
#define WRPR1_APB6_CTRL__CLK_ENABLE__MASK                           0x00000001U
#define WRPR1_APB6_CTRL__CLK_ENABLE__READ(src)  ((uint32_t)(src) & 0x00000001U)
#define WRPR1_APB6_CTRL__CLK_ENABLE__WRITE(src) ((uint32_t)(src) & 0x00000001U)
#define WRPR1_APB6_CTRL__CLK_ENABLE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define WRPR1_APB6_CTRL__CLK_ENABLE__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define WRPR1_APB6_CTRL__CLK_ENABLE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define WRPR1_APB6_CTRL__CLK_ENABLE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define WRPR1_APB6_CTRL__CLK_ENABLE__RESET_VALUE                    0x00000000U
/** @} */

/* macros for field sreset */
/**
 * @defgroup at_apb1_wrpr_regs_core_sreset_field sreset_field
 * @brief macros for field sreset
 * @details reset peripheral in APB slot 6  1 = reset  0 = not reset
 * @{
 */
#define WRPR1_APB6_CTRL__SRESET__SHIFT                                        1
#define WRPR1_APB6_CTRL__SRESET__WIDTH                                        1
#define WRPR1_APB6_CTRL__SRESET__MASK                               0x00000002U
#define WRPR1_APB6_CTRL__SRESET__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define WRPR1_APB6_CTRL__SRESET__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define WRPR1_APB6_CTRL__SRESET__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define WRPR1_APB6_CTRL__SRESET__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define WRPR1_APB6_CTRL__SRESET__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define WRPR1_APB6_CTRL__SRESET__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define WRPR1_APB6_CTRL__SRESET__RESET_VALUE                        0x00000001U
/** @} */
#define WRPR1_APB6_CTRL__TYPE                                          uint32_t
#define WRPR1_APB6_CTRL__READ                                       0x00000003U
#define WRPR1_APB6_CTRL__WRITE                                      0x00000003U
#define WRPR1_APB6_CTRL__PRESERVED                                  0x00000000U
#define WRPR1_APB6_CTRL__RESET_VALUE                                0x00000002U

#endif /* __WRPR1_APB6_CTRL_MACRO__ */

/** @} end of apb6_ctrl */

/* macros for BlueprintGlobalNameSpace::WRPR1_apb7_ctrl */
/**
 * @defgroup at_apb1_wrpr_regs_core_apb7_ctrl apb7_ctrl
 * @brief Contains register fields associated with apb7_ctrl. definitions.
 * @{
 */
#ifndef __WRPR1_APB7_CTRL_MACRO__
#define __WRPR1_APB7_CTRL_MACRO__

/* macros for field clk_enable */
/**
 * @defgroup at_apb1_wrpr_regs_core_clk_enable_field clk_enable_field
 * @brief macros for field clk_enable
 * @details enable clock to peripheral in APB slot 7  1 = clock enabled  0 = clock not enabled
 * @{
 */
#define WRPR1_APB7_CTRL__CLK_ENABLE__SHIFT                                    0
#define WRPR1_APB7_CTRL__CLK_ENABLE__WIDTH                                    1
#define WRPR1_APB7_CTRL__CLK_ENABLE__MASK                           0x00000001U
#define WRPR1_APB7_CTRL__CLK_ENABLE__READ(src)  ((uint32_t)(src) & 0x00000001U)
#define WRPR1_APB7_CTRL__CLK_ENABLE__WRITE(src) ((uint32_t)(src) & 0x00000001U)
#define WRPR1_APB7_CTRL__CLK_ENABLE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define WRPR1_APB7_CTRL__CLK_ENABLE__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define WRPR1_APB7_CTRL__CLK_ENABLE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define WRPR1_APB7_CTRL__CLK_ENABLE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define WRPR1_APB7_CTRL__CLK_ENABLE__RESET_VALUE                    0x00000000U
/** @} */

/* macros for field sreset */
/**
 * @defgroup at_apb1_wrpr_regs_core_sreset_field sreset_field
 * @brief macros for field sreset
 * @details reset peripheral in APB slot 7  1 = reset  0 = not reset
 * @{
 */
#define WRPR1_APB7_CTRL__SRESET__SHIFT                                        1
#define WRPR1_APB7_CTRL__SRESET__WIDTH                                        1
#define WRPR1_APB7_CTRL__SRESET__MASK                               0x00000002U
#define WRPR1_APB7_CTRL__SRESET__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define WRPR1_APB7_CTRL__SRESET__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define WRPR1_APB7_CTRL__SRESET__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define WRPR1_APB7_CTRL__SRESET__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define WRPR1_APB7_CTRL__SRESET__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define WRPR1_APB7_CTRL__SRESET__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define WRPR1_APB7_CTRL__SRESET__RESET_VALUE                        0x00000001U
/** @} */
#define WRPR1_APB7_CTRL__TYPE                                          uint32_t
#define WRPR1_APB7_CTRL__READ                                       0x00000003U
#define WRPR1_APB7_CTRL__WRITE                                      0x00000003U
#define WRPR1_APB7_CTRL__PRESERVED                                  0x00000000U
#define WRPR1_APB7_CTRL__RESET_VALUE                                0x00000002U

#endif /* __WRPR1_APB7_CTRL_MACRO__ */

/** @} end of apb7_ctrl */

/* macros for BlueprintGlobalNameSpace::WRPR1_apb8_ctrl */
/**
 * @defgroup at_apb1_wrpr_regs_core_apb8_ctrl apb8_ctrl
 * @brief Contains register fields associated with apb8_ctrl. definitions.
 * @{
 */
#ifndef __WRPR1_APB8_CTRL_MACRO__
#define __WRPR1_APB8_CTRL_MACRO__

/* macros for field clk_enable */
/**
 * @defgroup at_apb1_wrpr_regs_core_clk_enable_field clk_enable_field
 * @brief macros for field clk_enable
 * @details enable clock to peripheral in APB slot 8  1 = clock enabled  0 = clock not enabled
 * @{
 */
#define WRPR1_APB8_CTRL__CLK_ENABLE__SHIFT                                    0
#define WRPR1_APB8_CTRL__CLK_ENABLE__WIDTH                                    1
#define WRPR1_APB8_CTRL__CLK_ENABLE__MASK                           0x00000001U
#define WRPR1_APB8_CTRL__CLK_ENABLE__READ(src)  ((uint32_t)(src) & 0x00000001U)
#define WRPR1_APB8_CTRL__CLK_ENABLE__WRITE(src) ((uint32_t)(src) & 0x00000001U)
#define WRPR1_APB8_CTRL__CLK_ENABLE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define WRPR1_APB8_CTRL__CLK_ENABLE__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define WRPR1_APB8_CTRL__CLK_ENABLE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define WRPR1_APB8_CTRL__CLK_ENABLE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define WRPR1_APB8_CTRL__CLK_ENABLE__RESET_VALUE                    0x00000000U
/** @} */

/* macros for field sreset */
/**
 * @defgroup at_apb1_wrpr_regs_core_sreset_field sreset_field
 * @brief macros for field sreset
 * @details reset peripheral in APB slot 8  1 = reset  0 = not reset
 * @{
 */
#define WRPR1_APB8_CTRL__SRESET__SHIFT                                        1
#define WRPR1_APB8_CTRL__SRESET__WIDTH                                        1
#define WRPR1_APB8_CTRL__SRESET__MASK                               0x00000002U
#define WRPR1_APB8_CTRL__SRESET__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define WRPR1_APB8_CTRL__SRESET__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define WRPR1_APB8_CTRL__SRESET__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define WRPR1_APB8_CTRL__SRESET__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define WRPR1_APB8_CTRL__SRESET__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define WRPR1_APB8_CTRL__SRESET__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define WRPR1_APB8_CTRL__SRESET__RESET_VALUE                        0x00000001U
/** @} */
#define WRPR1_APB8_CTRL__TYPE                                          uint32_t
#define WRPR1_APB8_CTRL__READ                                       0x00000003U
#define WRPR1_APB8_CTRL__WRITE                                      0x00000003U
#define WRPR1_APB8_CTRL__PRESERVED                                  0x00000000U
#define WRPR1_APB8_CTRL__RESET_VALUE                                0x00000002U

#endif /* __WRPR1_APB8_CTRL_MACRO__ */

/** @} end of apb8_ctrl */

/* macros for BlueprintGlobalNameSpace::WRPR1_apb9_ctrl */
/**
 * @defgroup at_apb1_wrpr_regs_core_apb9_ctrl apb9_ctrl
 * @brief Contains register fields associated with apb9_ctrl. definitions.
 * @{
 */
#ifndef __WRPR1_APB9_CTRL_MACRO__
#define __WRPR1_APB9_CTRL_MACRO__

/* macros for field clk_enable */
/**
 * @defgroup at_apb1_wrpr_regs_core_clk_enable_field clk_enable_field
 * @brief macros for field clk_enable
 * @details enable clock to peripheral in APB slot 9  1 = clock enabled  0 = clock not enabled
 * @{
 */
#define WRPR1_APB9_CTRL__CLK_ENABLE__SHIFT                                    0
#define WRPR1_APB9_CTRL__CLK_ENABLE__WIDTH                                    1
#define WRPR1_APB9_CTRL__CLK_ENABLE__MASK                           0x00000001U
#define WRPR1_APB9_CTRL__CLK_ENABLE__READ(src)  ((uint32_t)(src) & 0x00000001U)
#define WRPR1_APB9_CTRL__CLK_ENABLE__WRITE(src) ((uint32_t)(src) & 0x00000001U)
#define WRPR1_APB9_CTRL__CLK_ENABLE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define WRPR1_APB9_CTRL__CLK_ENABLE__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define WRPR1_APB9_CTRL__CLK_ENABLE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define WRPR1_APB9_CTRL__CLK_ENABLE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define WRPR1_APB9_CTRL__CLK_ENABLE__RESET_VALUE                    0x00000000U
/** @} */

/* macros for field sreset */
/**
 * @defgroup at_apb1_wrpr_regs_core_sreset_field sreset_field
 * @brief macros for field sreset
 * @details reset peripheral in APB slot 9  1 = reset  0 = not reset
 * @{
 */
#define WRPR1_APB9_CTRL__SRESET__SHIFT                                        1
#define WRPR1_APB9_CTRL__SRESET__WIDTH                                        1
#define WRPR1_APB9_CTRL__SRESET__MASK                               0x00000002U
#define WRPR1_APB9_CTRL__SRESET__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define WRPR1_APB9_CTRL__SRESET__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define WRPR1_APB9_CTRL__SRESET__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define WRPR1_APB9_CTRL__SRESET__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define WRPR1_APB9_CTRL__SRESET__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define WRPR1_APB9_CTRL__SRESET__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define WRPR1_APB9_CTRL__SRESET__RESET_VALUE                        0x00000001U
/** @} */
#define WRPR1_APB9_CTRL__TYPE                                          uint32_t
#define WRPR1_APB9_CTRL__READ                                       0x00000003U
#define WRPR1_APB9_CTRL__WRITE                                      0x00000003U
#define WRPR1_APB9_CTRL__PRESERVED                                  0x00000000U
#define WRPR1_APB9_CTRL__RESET_VALUE                                0x00000002U

#endif /* __WRPR1_APB9_CTRL_MACRO__ */

/** @} end of apb9_ctrl */

/* macros for BlueprintGlobalNameSpace::WRPR1_apb10_ctrl */
/**
 * @defgroup at_apb1_wrpr_regs_core_apb10_ctrl apb10_ctrl
 * @brief Contains register fields associated with apb10_ctrl. definitions.
 * @{
 */
#ifndef __WRPR1_APB10_CTRL_MACRO__
#define __WRPR1_APB10_CTRL_MACRO__

/* macros for field clk_enable */
/**
 * @defgroup at_apb1_wrpr_regs_core_clk_enable_field clk_enable_field
 * @brief macros for field clk_enable
 * @details enable clock to peripheral in APB slot 10  1 = clock enabled  0 = clock not enabled
 * @{
 */
#define WRPR1_APB10_CTRL__CLK_ENABLE__SHIFT                                   0
#define WRPR1_APB10_CTRL__CLK_ENABLE__WIDTH                                   1
#define WRPR1_APB10_CTRL__CLK_ENABLE__MASK                          0x00000001U
#define WRPR1_APB10_CTRL__CLK_ENABLE__READ(src) ((uint32_t)(src) & 0x00000001U)
#define WRPR1_APB10_CTRL__CLK_ENABLE__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define WRPR1_APB10_CTRL__CLK_ENABLE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define WRPR1_APB10_CTRL__CLK_ENABLE__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define WRPR1_APB10_CTRL__CLK_ENABLE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define WRPR1_APB10_CTRL__CLK_ENABLE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define WRPR1_APB10_CTRL__CLK_ENABLE__RESET_VALUE                   0x00000000U
/** @} */

/* macros for field sreset */
/**
 * @defgroup at_apb1_wrpr_regs_core_sreset_field sreset_field
 * @brief macros for field sreset
 * @details reset peripheral in APB slot 10  1 = reset  0 = not reset
 * @{
 */
#define WRPR1_APB10_CTRL__SRESET__SHIFT                                       1
#define WRPR1_APB10_CTRL__SRESET__WIDTH                                       1
#define WRPR1_APB10_CTRL__SRESET__MASK                              0x00000002U
#define WRPR1_APB10_CTRL__SRESET__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define WRPR1_APB10_CTRL__SRESET__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define WRPR1_APB10_CTRL__SRESET__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define WRPR1_APB10_CTRL__SRESET__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define WRPR1_APB10_CTRL__SRESET__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define WRPR1_APB10_CTRL__SRESET__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define WRPR1_APB10_CTRL__SRESET__RESET_VALUE                       0x00000001U
/** @} */
#define WRPR1_APB10_CTRL__TYPE                                         uint32_t
#define WRPR1_APB10_CTRL__READ                                      0x00000003U
#define WRPR1_APB10_CTRL__WRITE                                     0x00000003U
#define WRPR1_APB10_CTRL__PRESERVED                                 0x00000000U
#define WRPR1_APB10_CTRL__RESET_VALUE                               0x00000002U

#endif /* __WRPR1_APB10_CTRL_MACRO__ */

/** @} end of apb10_ctrl */

/* macros for BlueprintGlobalNameSpace::WRPR1_apb11_ctrl */
/**
 * @defgroup at_apb1_wrpr_regs_core_apb11_ctrl apb11_ctrl
 * @brief Contains register fields associated with apb11_ctrl. definitions.
 * @{
 */
#ifndef __WRPR1_APB11_CTRL_MACRO__
#define __WRPR1_APB11_CTRL_MACRO__

/* macros for field clk_enable */
/**
 * @defgroup at_apb1_wrpr_regs_core_clk_enable_field clk_enable_field
 * @brief macros for field clk_enable
 * @details enable clock to peripheral in APB slot 11  1 = clock enabled  0 = clock not enabled
 * @{
 */
#define WRPR1_APB11_CTRL__CLK_ENABLE__SHIFT                                   0
#define WRPR1_APB11_CTRL__CLK_ENABLE__WIDTH                                   1
#define WRPR1_APB11_CTRL__CLK_ENABLE__MASK                          0x00000001U
#define WRPR1_APB11_CTRL__CLK_ENABLE__READ(src) ((uint32_t)(src) & 0x00000001U)
#define WRPR1_APB11_CTRL__CLK_ENABLE__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define WRPR1_APB11_CTRL__CLK_ENABLE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define WRPR1_APB11_CTRL__CLK_ENABLE__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define WRPR1_APB11_CTRL__CLK_ENABLE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define WRPR1_APB11_CTRL__CLK_ENABLE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define WRPR1_APB11_CTRL__CLK_ENABLE__RESET_VALUE                   0x00000000U
/** @} */

/* macros for field sreset */
/**
 * @defgroup at_apb1_wrpr_regs_core_sreset_field sreset_field
 * @brief macros for field sreset
 * @details reset peripheral in APB slot 11  1 = reset  0 = not reset
 * @{
 */
#define WRPR1_APB11_CTRL__SRESET__SHIFT                                       1
#define WRPR1_APB11_CTRL__SRESET__WIDTH                                       1
#define WRPR1_APB11_CTRL__SRESET__MASK                              0x00000002U
#define WRPR1_APB11_CTRL__SRESET__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define WRPR1_APB11_CTRL__SRESET__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define WRPR1_APB11_CTRL__SRESET__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define WRPR1_APB11_CTRL__SRESET__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define WRPR1_APB11_CTRL__SRESET__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define WRPR1_APB11_CTRL__SRESET__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define WRPR1_APB11_CTRL__SRESET__RESET_VALUE                       0x00000001U
/** @} */
#define WRPR1_APB11_CTRL__TYPE                                         uint32_t
#define WRPR1_APB11_CTRL__READ                                      0x00000003U
#define WRPR1_APB11_CTRL__WRITE                                     0x00000003U
#define WRPR1_APB11_CTRL__PRESERVED                                 0x00000000U
#define WRPR1_APB11_CTRL__RESET_VALUE                               0x00000002U

#endif /* __WRPR1_APB11_CTRL_MACRO__ */

/** @} end of apb11_ctrl */

/* macros for BlueprintGlobalNameSpace::WRPR1_apb12_ctrl */
/**
 * @defgroup at_apb1_wrpr_regs_core_apb12_ctrl apb12_ctrl
 * @brief Contains register fields associated with apb12_ctrl. definitions.
 * @{
 */
#ifndef __WRPR1_APB12_CTRL_MACRO__
#define __WRPR1_APB12_CTRL_MACRO__

/* macros for field clk_enable */
/**
 * @defgroup at_apb1_wrpr_regs_core_clk_enable_field clk_enable_field
 * @brief macros for field clk_enable
 * @details enable clock to peripheral in APB slot 12  1 = clock enabled  0 = clock not enabled
 * @{
 */
#define WRPR1_APB12_CTRL__CLK_ENABLE__SHIFT                                   0
#define WRPR1_APB12_CTRL__CLK_ENABLE__WIDTH                                   1
#define WRPR1_APB12_CTRL__CLK_ENABLE__MASK                          0x00000001U
#define WRPR1_APB12_CTRL__CLK_ENABLE__READ(src) ((uint32_t)(src) & 0x00000001U)
#define WRPR1_APB12_CTRL__CLK_ENABLE__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define WRPR1_APB12_CTRL__CLK_ENABLE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define WRPR1_APB12_CTRL__CLK_ENABLE__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define WRPR1_APB12_CTRL__CLK_ENABLE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define WRPR1_APB12_CTRL__CLK_ENABLE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define WRPR1_APB12_CTRL__CLK_ENABLE__RESET_VALUE                   0x00000000U
/** @} */

/* macros for field sreset */
/**
 * @defgroup at_apb1_wrpr_regs_core_sreset_field sreset_field
 * @brief macros for field sreset
 * @details reset peripheral in APB slot 12  1 = reset  0 = not reset
 * @{
 */
#define WRPR1_APB12_CTRL__SRESET__SHIFT                                       1
#define WRPR1_APB12_CTRL__SRESET__WIDTH                                       1
#define WRPR1_APB12_CTRL__SRESET__MASK                              0x00000002U
#define WRPR1_APB12_CTRL__SRESET__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define WRPR1_APB12_CTRL__SRESET__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define WRPR1_APB12_CTRL__SRESET__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define WRPR1_APB12_CTRL__SRESET__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define WRPR1_APB12_CTRL__SRESET__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define WRPR1_APB12_CTRL__SRESET__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define WRPR1_APB12_CTRL__SRESET__RESET_VALUE                       0x00000001U
/** @} */
#define WRPR1_APB12_CTRL__TYPE                                         uint32_t
#define WRPR1_APB12_CTRL__READ                                      0x00000003U
#define WRPR1_APB12_CTRL__WRITE                                     0x00000003U
#define WRPR1_APB12_CTRL__PRESERVED                                 0x00000000U
#define WRPR1_APB12_CTRL__RESET_VALUE                               0x00000002U

#endif /* __WRPR1_APB12_CTRL_MACRO__ */

/** @} end of apb12_ctrl */

/* macros for BlueprintGlobalNameSpace::WRPR1_apb13_ctrl */
/**
 * @defgroup at_apb1_wrpr_regs_core_apb13_ctrl apb13_ctrl
 * @brief Contains register fields associated with apb13_ctrl. definitions.
 * @{
 */
#ifndef __WRPR1_APB13_CTRL_MACRO__
#define __WRPR1_APB13_CTRL_MACRO__

/* macros for field clk_enable */
/**
 * @defgroup at_apb1_wrpr_regs_core_clk_enable_field clk_enable_field
 * @brief macros for field clk_enable
 * @details enable clock to peripheral in APB slot 13  1 = clock enabled  0 = clock not enabled
 * @{
 */
#define WRPR1_APB13_CTRL__CLK_ENABLE__SHIFT                                   0
#define WRPR1_APB13_CTRL__CLK_ENABLE__WIDTH                                   1
#define WRPR1_APB13_CTRL__CLK_ENABLE__MASK                          0x00000001U
#define WRPR1_APB13_CTRL__CLK_ENABLE__READ(src) ((uint32_t)(src) & 0x00000001U)
#define WRPR1_APB13_CTRL__CLK_ENABLE__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define WRPR1_APB13_CTRL__CLK_ENABLE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define WRPR1_APB13_CTRL__CLK_ENABLE__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define WRPR1_APB13_CTRL__CLK_ENABLE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define WRPR1_APB13_CTRL__CLK_ENABLE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define WRPR1_APB13_CTRL__CLK_ENABLE__RESET_VALUE                   0x00000000U
/** @} */

/* macros for field sreset */
/**
 * @defgroup at_apb1_wrpr_regs_core_sreset_field sreset_field
 * @brief macros for field sreset
 * @details reset peripheral in APB slot 13  1 = reset  0 = not reset
 * @{
 */
#define WRPR1_APB13_CTRL__SRESET__SHIFT                                       1
#define WRPR1_APB13_CTRL__SRESET__WIDTH                                       1
#define WRPR1_APB13_CTRL__SRESET__MASK                              0x00000002U
#define WRPR1_APB13_CTRL__SRESET__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define WRPR1_APB13_CTRL__SRESET__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define WRPR1_APB13_CTRL__SRESET__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define WRPR1_APB13_CTRL__SRESET__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define WRPR1_APB13_CTRL__SRESET__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define WRPR1_APB13_CTRL__SRESET__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define WRPR1_APB13_CTRL__SRESET__RESET_VALUE                       0x00000001U
/** @} */
#define WRPR1_APB13_CTRL__TYPE                                         uint32_t
#define WRPR1_APB13_CTRL__READ                                      0x00000003U
#define WRPR1_APB13_CTRL__WRITE                                     0x00000003U
#define WRPR1_APB13_CTRL__PRESERVED                                 0x00000000U
#define WRPR1_APB13_CTRL__RESET_VALUE                               0x00000002U

#endif /* __WRPR1_APB13_CTRL_MACRO__ */

/** @} end of apb13_ctrl */

/* macros for BlueprintGlobalNameSpace::WRPR1_apb14_ctrl */
/**
 * @defgroup at_apb1_wrpr_regs_core_apb14_ctrl apb14_ctrl
 * @brief Contains register fields associated with apb14_ctrl. definitions.
 * @{
 */
#ifndef __WRPR1_APB14_CTRL_MACRO__
#define __WRPR1_APB14_CTRL_MACRO__

/* macros for field clk_enable */
/**
 * @defgroup at_apb1_wrpr_regs_core_clk_enable_field clk_enable_field
 * @brief macros for field clk_enable
 * @details enable clock to peripheral in APB slot 14  1 = clock enabled  0 = clock not enabled
 * @{
 */
#define WRPR1_APB14_CTRL__CLK_ENABLE__SHIFT                                   0
#define WRPR1_APB14_CTRL__CLK_ENABLE__WIDTH                                   1
#define WRPR1_APB14_CTRL__CLK_ENABLE__MASK                          0x00000001U
#define WRPR1_APB14_CTRL__CLK_ENABLE__READ(src) ((uint32_t)(src) & 0x00000001U)
#define WRPR1_APB14_CTRL__CLK_ENABLE__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define WRPR1_APB14_CTRL__CLK_ENABLE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define WRPR1_APB14_CTRL__CLK_ENABLE__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define WRPR1_APB14_CTRL__CLK_ENABLE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define WRPR1_APB14_CTRL__CLK_ENABLE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define WRPR1_APB14_CTRL__CLK_ENABLE__RESET_VALUE                   0x00000000U
/** @} */

/* macros for field sreset */
/**
 * @defgroup at_apb1_wrpr_regs_core_sreset_field sreset_field
 * @brief macros for field sreset
 * @details reset peripheral in APB slot 14  1 = reset  0 = not reset
 * @{
 */
#define WRPR1_APB14_CTRL__SRESET__SHIFT                                       1
#define WRPR1_APB14_CTRL__SRESET__WIDTH                                       1
#define WRPR1_APB14_CTRL__SRESET__MASK                              0x00000002U
#define WRPR1_APB14_CTRL__SRESET__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define WRPR1_APB14_CTRL__SRESET__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define WRPR1_APB14_CTRL__SRESET__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define WRPR1_APB14_CTRL__SRESET__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define WRPR1_APB14_CTRL__SRESET__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define WRPR1_APB14_CTRL__SRESET__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define WRPR1_APB14_CTRL__SRESET__RESET_VALUE                       0x00000001U
/** @} */
#define WRPR1_APB14_CTRL__TYPE                                         uint32_t
#define WRPR1_APB14_CTRL__READ                                      0x00000003U
#define WRPR1_APB14_CTRL__WRITE                                     0x00000003U
#define WRPR1_APB14_CTRL__PRESERVED                                 0x00000000U
#define WRPR1_APB14_CTRL__RESET_VALUE                               0x00000002U

#endif /* __WRPR1_APB14_CTRL_MACRO__ */

/** @} end of apb14_ctrl */

/* macros for BlueprintGlobalNameSpace::WRPR1_apb15_ctrl */
/**
 * @defgroup at_apb1_wrpr_regs_core_apb15_ctrl apb15_ctrl
 * @brief Contains register fields associated with apb15_ctrl. definitions.
 * @{
 */
#ifndef __WRPR1_APB15_CTRL_MACRO__
#define __WRPR1_APB15_CTRL_MACRO__

/* macros for field clk_enable */
/**
 * @defgroup at_apb1_wrpr_regs_core_clk_enable_field clk_enable_field
 * @brief macros for field clk_enable
 * @details enable clock to peripheral in APB slot 15  1 = clock enabled  0 = clock not enabled
 * @{
 */
#define WRPR1_APB15_CTRL__CLK_ENABLE__SHIFT                                   0
#define WRPR1_APB15_CTRL__CLK_ENABLE__WIDTH                                   1
#define WRPR1_APB15_CTRL__CLK_ENABLE__MASK                          0x00000001U
#define WRPR1_APB15_CTRL__CLK_ENABLE__READ(src) ((uint32_t)(src) & 0x00000001U)
#define WRPR1_APB15_CTRL__CLK_ENABLE__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define WRPR1_APB15_CTRL__CLK_ENABLE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define WRPR1_APB15_CTRL__CLK_ENABLE__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define WRPR1_APB15_CTRL__CLK_ENABLE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define WRPR1_APB15_CTRL__CLK_ENABLE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define WRPR1_APB15_CTRL__CLK_ENABLE__RESET_VALUE                   0x00000000U
/** @} */

/* macros for field sreset */
/**
 * @defgroup at_apb1_wrpr_regs_core_sreset_field sreset_field
 * @brief macros for field sreset
 * @details reset peripheral in APB slot 15  1 = reset  0 = not reset
 * @{
 */
#define WRPR1_APB15_CTRL__SRESET__SHIFT                                       1
#define WRPR1_APB15_CTRL__SRESET__WIDTH                                       1
#define WRPR1_APB15_CTRL__SRESET__MASK                              0x00000002U
#define WRPR1_APB15_CTRL__SRESET__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define WRPR1_APB15_CTRL__SRESET__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define WRPR1_APB15_CTRL__SRESET__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define WRPR1_APB15_CTRL__SRESET__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define WRPR1_APB15_CTRL__SRESET__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define WRPR1_APB15_CTRL__SRESET__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define WRPR1_APB15_CTRL__SRESET__RESET_VALUE                       0x00000001U
/** @} */
#define WRPR1_APB15_CTRL__TYPE                                         uint32_t
#define WRPR1_APB15_CTRL__READ                                      0x00000003U
#define WRPR1_APB15_CTRL__WRITE                                     0x00000003U
#define WRPR1_APB15_CTRL__PRESERVED                                 0x00000000U
#define WRPR1_APB15_CTRL__RESET_VALUE                               0x00000002U

#endif /* __WRPR1_APB15_CTRL_MACRO__ */

/** @} end of apb15_ctrl */

/* macros for BlueprintGlobalNameSpace::WRPR1_core_id */
/**
 * @defgroup at_apb1_wrpr_regs_core_core_id core_id
 * @brief Contains register fields associated with core_id. definitions.
 * @{
 */
#ifndef __WRPR1_CORE_ID_MACRO__
#define __WRPR1_CORE_ID_MACRO__

/* macros for field id */
/**
 * @defgroup at_apb1_wrpr_regs_core_id_field id_field
 * @brief macros for field id
 * @details 'WRPR' in ASCII
 * @{
 */
#define WRPR1_CORE_ID__ID__SHIFT                                              0
#define WRPR1_CORE_ID__ID__WIDTH                                             32
#define WRPR1_CORE_ID__ID__MASK                                     0xffffffffU
#define WRPR1_CORE_ID__ID__READ(src)            ((uint32_t)(src) & 0xffffffffU)
#define WRPR1_CORE_ID__ID__RESET_VALUE                              0x57525052U
/** @} */
#define WRPR1_CORE_ID__TYPE                                            uint32_t
#define WRPR1_CORE_ID__READ                                         0xffffffffU
#define WRPR1_CORE_ID__PRESERVED                                    0x00000000U
#define WRPR1_CORE_ID__RESET_VALUE                                  0x57525052U

#endif /* __WRPR1_CORE_ID_MACRO__ */

/** @} end of core_id */

/** @} end of AT_APB1_WRPR_REGS_CORE */
#endif /* __REG_AT_APB1_WRPR_REGS_CORE_H__ */
