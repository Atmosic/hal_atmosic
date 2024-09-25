/*                                                                           */
/* File:       at_apb_wrpr_regs_core_macro.h                                 */
/*                                                                           */
/* Arguments:  /cad/tools/cadence/blueprint_3.7.5/Linux-64bit/blueprint -eval*/
/*             $DEFINE_PROPERTY=1; -ansic at_apb_wrpr_regs_core.rdl          */
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


#ifndef __REG_AT_APB_WRPR_REGS_CORE_H__
#define __REG_AT_APB_WRPR_REGS_CORE_H__

/**
 *****************************************************************************
 * @defgroup AT_APB_WRPR_REGS_CORE at_apb_wrpr_regs_core
 * @ingroup AT_REG
 * @brief at_apb_wrpr_regs_core definitions.
 * @{
 *****************************************************************************
 */

/* macros for BlueprintGlobalNameSpace::WRPR_apb0_ctrl */
/**
 * @defgroup at_apb_wrpr_regs_core_apb0_ctrl apb0_ctrl
 * @brief Contains register fields associated with apb0_ctrl. definitions.
 * @{
 */
#ifndef __WRPR_APB0_CTRL_MACRO__
#define __WRPR_APB0_CTRL_MACRO__

/* macros for field clk_enable */
/**
 * @defgroup at_apb_wrpr_regs_core_clk_enable_field clk_enable_field
 * @brief macros for field clk_enable
 * @details enable clock to peripheral in APB slot 0  1 = clock enabled  0 = clock not enabled
 * @{
 */
#define WRPR_APB0_CTRL__CLK_ENABLE__SHIFT                                     0
#define WRPR_APB0_CTRL__CLK_ENABLE__WIDTH                                     1
#define WRPR_APB0_CTRL__CLK_ENABLE__MASK                            0x00000001U
#define WRPR_APB0_CTRL__CLK_ENABLE__READ(src)   ((uint32_t)(src) & 0x00000001U)
#define WRPR_APB0_CTRL__CLK_ENABLE__WRITE(src)  ((uint32_t)(src) & 0x00000001U)
#define WRPR_APB0_CTRL__CLK_ENABLE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define WRPR_APB0_CTRL__CLK_ENABLE__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define WRPR_APB0_CTRL__CLK_ENABLE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define WRPR_APB0_CTRL__CLK_ENABLE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define WRPR_APB0_CTRL__CLK_ENABLE__RESET_VALUE                     0x00000000U
/** @} */

/* macros for field sreset */
/**
 * @defgroup at_apb_wrpr_regs_core_sreset_field sreset_field
 * @brief macros for field sreset
 * @details reset peripheral in APB slot 0  1 = reset  0 = not reset
 * @{
 */
#define WRPR_APB0_CTRL__SRESET__SHIFT                                         1
#define WRPR_APB0_CTRL__SRESET__WIDTH                                         1
#define WRPR_APB0_CTRL__SRESET__MASK                                0x00000002U
#define WRPR_APB0_CTRL__SRESET__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define WRPR_APB0_CTRL__SRESET__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define WRPR_APB0_CTRL__SRESET__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define WRPR_APB0_CTRL__SRESET__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define WRPR_APB0_CTRL__SRESET__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define WRPR_APB0_CTRL__SRESET__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define WRPR_APB0_CTRL__SRESET__RESET_VALUE                         0x00000001U
/** @} */
#define WRPR_APB0_CTRL__TYPE                                           uint32_t
#define WRPR_APB0_CTRL__READ                                        0x00000003U
#define WRPR_APB0_CTRL__WRITE                                       0x00000003U
#define WRPR_APB0_CTRL__PRESERVED                                   0x00000000U
#define WRPR_APB0_CTRL__RESET_VALUE                                 0x00000002U

#endif /* __WRPR_APB0_CTRL_MACRO__ */

/** @} end of apb0_ctrl */

/* macros for BlueprintGlobalNameSpace::WRPR_apb1_ctrl */
/**
 * @defgroup at_apb_wrpr_regs_core_apb1_ctrl apb1_ctrl
 * @brief Contains register fields associated with apb1_ctrl. definitions.
 * @{
 */
#ifndef __WRPR_APB1_CTRL_MACRO__
#define __WRPR_APB1_CTRL_MACRO__

/* macros for field clk_enable */
/**
 * @defgroup at_apb_wrpr_regs_core_clk_enable_field clk_enable_field
 * @brief macros for field clk_enable
 * @details enable clock to peripheral in APB slot 1  1 = clock enabled  0 = clock not enabled
 * @{
 */
#define WRPR_APB1_CTRL__CLK_ENABLE__SHIFT                                     0
#define WRPR_APB1_CTRL__CLK_ENABLE__WIDTH                                     1
#define WRPR_APB1_CTRL__CLK_ENABLE__MASK                            0x00000001U
#define WRPR_APB1_CTRL__CLK_ENABLE__READ(src)   ((uint32_t)(src) & 0x00000001U)
#define WRPR_APB1_CTRL__CLK_ENABLE__WRITE(src)  ((uint32_t)(src) & 0x00000001U)
#define WRPR_APB1_CTRL__CLK_ENABLE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define WRPR_APB1_CTRL__CLK_ENABLE__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define WRPR_APB1_CTRL__CLK_ENABLE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define WRPR_APB1_CTRL__CLK_ENABLE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define WRPR_APB1_CTRL__CLK_ENABLE__RESET_VALUE                     0x00000000U
/** @} */

/* macros for field sreset */
/**
 * @defgroup at_apb_wrpr_regs_core_sreset_field sreset_field
 * @brief macros for field sreset
 * @details reset peripheral in APB slot 1  1 = reset  0 = not reset
 * @{
 */
#define WRPR_APB1_CTRL__SRESET__SHIFT                                         1
#define WRPR_APB1_CTRL__SRESET__WIDTH                                         1
#define WRPR_APB1_CTRL__SRESET__MASK                                0x00000002U
#define WRPR_APB1_CTRL__SRESET__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define WRPR_APB1_CTRL__SRESET__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define WRPR_APB1_CTRL__SRESET__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define WRPR_APB1_CTRL__SRESET__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define WRPR_APB1_CTRL__SRESET__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define WRPR_APB1_CTRL__SRESET__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define WRPR_APB1_CTRL__SRESET__RESET_VALUE                         0x00000001U
/** @} */
#define WRPR_APB1_CTRL__TYPE                                           uint32_t
#define WRPR_APB1_CTRL__READ                                        0x00000003U
#define WRPR_APB1_CTRL__WRITE                                       0x00000003U
#define WRPR_APB1_CTRL__PRESERVED                                   0x00000000U
#define WRPR_APB1_CTRL__RESET_VALUE                                 0x00000002U

#endif /* __WRPR_APB1_CTRL_MACRO__ */

/** @} end of apb1_ctrl */

/* macros for BlueprintGlobalNameSpace::WRPR_apb2_ctrl */
/**
 * @defgroup at_apb_wrpr_regs_core_apb2_ctrl apb2_ctrl
 * @brief Contains register fields associated with apb2_ctrl. definitions.
 * @{
 */
#ifndef __WRPR_APB2_CTRL_MACRO__
#define __WRPR_APB2_CTRL_MACRO__

/* macros for field clk_enable */
/**
 * @defgroup at_apb_wrpr_regs_core_clk_enable_field clk_enable_field
 * @brief macros for field clk_enable
 * @details enable clock to peripheral in APB slot 2  1 = clock enabled  0 = clock not enabled
 * @{
 */
#define WRPR_APB2_CTRL__CLK_ENABLE__SHIFT                                     0
#define WRPR_APB2_CTRL__CLK_ENABLE__WIDTH                                     1
#define WRPR_APB2_CTRL__CLK_ENABLE__MASK                            0x00000001U
#define WRPR_APB2_CTRL__CLK_ENABLE__READ(src)   ((uint32_t)(src) & 0x00000001U)
#define WRPR_APB2_CTRL__CLK_ENABLE__WRITE(src)  ((uint32_t)(src) & 0x00000001U)
#define WRPR_APB2_CTRL__CLK_ENABLE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define WRPR_APB2_CTRL__CLK_ENABLE__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define WRPR_APB2_CTRL__CLK_ENABLE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define WRPR_APB2_CTRL__CLK_ENABLE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define WRPR_APB2_CTRL__CLK_ENABLE__RESET_VALUE                     0x00000000U
/** @} */

/* macros for field sreset */
/**
 * @defgroup at_apb_wrpr_regs_core_sreset_field sreset_field
 * @brief macros for field sreset
 * @details reset peripheral in APB slot 2  1 = reset  0 = not reset
 * @{
 */
#define WRPR_APB2_CTRL__SRESET__SHIFT                                         1
#define WRPR_APB2_CTRL__SRESET__WIDTH                                         1
#define WRPR_APB2_CTRL__SRESET__MASK                                0x00000002U
#define WRPR_APB2_CTRL__SRESET__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define WRPR_APB2_CTRL__SRESET__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define WRPR_APB2_CTRL__SRESET__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define WRPR_APB2_CTRL__SRESET__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define WRPR_APB2_CTRL__SRESET__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define WRPR_APB2_CTRL__SRESET__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define WRPR_APB2_CTRL__SRESET__RESET_VALUE                         0x00000001U
/** @} */
#define WRPR_APB2_CTRL__TYPE                                           uint32_t
#define WRPR_APB2_CTRL__READ                                        0x00000003U
#define WRPR_APB2_CTRL__WRITE                                       0x00000003U
#define WRPR_APB2_CTRL__PRESERVED                                   0x00000000U
#define WRPR_APB2_CTRL__RESET_VALUE                                 0x00000002U

#endif /* __WRPR_APB2_CTRL_MACRO__ */

/** @} end of apb2_ctrl */

/* macros for BlueprintGlobalNameSpace::WRPR_apb3_ctrl */
/**
 * @defgroup at_apb_wrpr_regs_core_apb3_ctrl apb3_ctrl
 * @brief Contains register fields associated with apb3_ctrl. definitions.
 * @{
 */
#ifndef __WRPR_APB3_CTRL_MACRO__
#define __WRPR_APB3_CTRL_MACRO__

/* macros for field clk_enable */
/**
 * @defgroup at_apb_wrpr_regs_core_clk_enable_field clk_enable_field
 * @brief macros for field clk_enable
 * @details enable clock to peripheral in APB slot 3  1 = clock enabled  0 = clock not enabled
 * @{
 */
#define WRPR_APB3_CTRL__CLK_ENABLE__SHIFT                                     0
#define WRPR_APB3_CTRL__CLK_ENABLE__WIDTH                                     1
#define WRPR_APB3_CTRL__CLK_ENABLE__MASK                            0x00000001U
#define WRPR_APB3_CTRL__CLK_ENABLE__READ(src)   ((uint32_t)(src) & 0x00000001U)
#define WRPR_APB3_CTRL__CLK_ENABLE__WRITE(src)  ((uint32_t)(src) & 0x00000001U)
#define WRPR_APB3_CTRL__CLK_ENABLE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define WRPR_APB3_CTRL__CLK_ENABLE__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define WRPR_APB3_CTRL__CLK_ENABLE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define WRPR_APB3_CTRL__CLK_ENABLE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define WRPR_APB3_CTRL__CLK_ENABLE__RESET_VALUE                     0x00000000U
/** @} */

/* macros for field sreset */
/**
 * @defgroup at_apb_wrpr_regs_core_sreset_field sreset_field
 * @brief macros for field sreset
 * @details reset peripheral in APB slot 3  1 = reset  0 = not reset
 * @{
 */
#define WRPR_APB3_CTRL__SRESET__SHIFT                                         1
#define WRPR_APB3_CTRL__SRESET__WIDTH                                         1
#define WRPR_APB3_CTRL__SRESET__MASK                                0x00000002U
#define WRPR_APB3_CTRL__SRESET__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define WRPR_APB3_CTRL__SRESET__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define WRPR_APB3_CTRL__SRESET__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define WRPR_APB3_CTRL__SRESET__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define WRPR_APB3_CTRL__SRESET__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define WRPR_APB3_CTRL__SRESET__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define WRPR_APB3_CTRL__SRESET__RESET_VALUE                         0x00000001U
/** @} */
#define WRPR_APB3_CTRL__TYPE                                           uint32_t
#define WRPR_APB3_CTRL__READ                                        0x00000003U
#define WRPR_APB3_CTRL__WRITE                                       0x00000003U
#define WRPR_APB3_CTRL__PRESERVED                                   0x00000000U
#define WRPR_APB3_CTRL__RESET_VALUE                                 0x00000002U

#endif /* __WRPR_APB3_CTRL_MACRO__ */

/** @} end of apb3_ctrl */

/* macros for BlueprintGlobalNameSpace::WRPR_apb4_ctrl */
/**
 * @defgroup at_apb_wrpr_regs_core_apb4_ctrl apb4_ctrl
 * @brief Contains register fields associated with apb4_ctrl. definitions.
 * @{
 */
#ifndef __WRPR_APB4_CTRL_MACRO__
#define __WRPR_APB4_CTRL_MACRO__

/* macros for field clk_enable */
/**
 * @defgroup at_apb_wrpr_regs_core_clk_enable_field clk_enable_field
 * @brief macros for field clk_enable
 * @details enable clock to peripheral in APB slot 4  1 = clock enabled  0 = clock not enabled
 * @{
 */
#define WRPR_APB4_CTRL__CLK_ENABLE__SHIFT                                     0
#define WRPR_APB4_CTRL__CLK_ENABLE__WIDTH                                     1
#define WRPR_APB4_CTRL__CLK_ENABLE__MASK                            0x00000001U
#define WRPR_APB4_CTRL__CLK_ENABLE__READ(src)   ((uint32_t)(src) & 0x00000001U)
#define WRPR_APB4_CTRL__CLK_ENABLE__WRITE(src)  ((uint32_t)(src) & 0x00000001U)
#define WRPR_APB4_CTRL__CLK_ENABLE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define WRPR_APB4_CTRL__CLK_ENABLE__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define WRPR_APB4_CTRL__CLK_ENABLE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define WRPR_APB4_CTRL__CLK_ENABLE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define WRPR_APB4_CTRL__CLK_ENABLE__RESET_VALUE                     0x00000000U
/** @} */

/* macros for field sreset */
/**
 * @defgroup at_apb_wrpr_regs_core_sreset_field sreset_field
 * @brief macros for field sreset
 * @details reset peripheral in APB slot 4  1 = reset  0 = not reset
 * @{
 */
#define WRPR_APB4_CTRL__SRESET__SHIFT                                         1
#define WRPR_APB4_CTRL__SRESET__WIDTH                                         1
#define WRPR_APB4_CTRL__SRESET__MASK                                0x00000002U
#define WRPR_APB4_CTRL__SRESET__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define WRPR_APB4_CTRL__SRESET__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define WRPR_APB4_CTRL__SRESET__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define WRPR_APB4_CTRL__SRESET__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define WRPR_APB4_CTRL__SRESET__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define WRPR_APB4_CTRL__SRESET__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define WRPR_APB4_CTRL__SRESET__RESET_VALUE                         0x00000001U
/** @} */
#define WRPR_APB4_CTRL__TYPE                                           uint32_t
#define WRPR_APB4_CTRL__READ                                        0x00000003U
#define WRPR_APB4_CTRL__WRITE                                       0x00000003U
#define WRPR_APB4_CTRL__PRESERVED                                   0x00000000U
#define WRPR_APB4_CTRL__RESET_VALUE                                 0x00000002U

#endif /* __WRPR_APB4_CTRL_MACRO__ */

/** @} end of apb4_ctrl */

/* macros for BlueprintGlobalNameSpace::WRPR_apb5_ctrl */
/**
 * @defgroup at_apb_wrpr_regs_core_apb5_ctrl apb5_ctrl
 * @brief Contains register fields associated with apb5_ctrl. definitions.
 * @{
 */
#ifndef __WRPR_APB5_CTRL_MACRO__
#define __WRPR_APB5_CTRL_MACRO__

/* macros for field clk_enable */
/**
 * @defgroup at_apb_wrpr_regs_core_clk_enable_field clk_enable_field
 * @brief macros for field clk_enable
 * @details enable clock to peripheral in APB slot 5  1 = clock enabled  0 = clock not enabled
 * @{
 */
#define WRPR_APB5_CTRL__CLK_ENABLE__SHIFT                                     0
#define WRPR_APB5_CTRL__CLK_ENABLE__WIDTH                                     1
#define WRPR_APB5_CTRL__CLK_ENABLE__MASK                            0x00000001U
#define WRPR_APB5_CTRL__CLK_ENABLE__READ(src)   ((uint32_t)(src) & 0x00000001U)
#define WRPR_APB5_CTRL__CLK_ENABLE__WRITE(src)  ((uint32_t)(src) & 0x00000001U)
#define WRPR_APB5_CTRL__CLK_ENABLE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define WRPR_APB5_CTRL__CLK_ENABLE__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define WRPR_APB5_CTRL__CLK_ENABLE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define WRPR_APB5_CTRL__CLK_ENABLE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define WRPR_APB5_CTRL__CLK_ENABLE__RESET_VALUE                     0x00000000U
/** @} */

/* macros for field sreset */
/**
 * @defgroup at_apb_wrpr_regs_core_sreset_field sreset_field
 * @brief macros for field sreset
 * @details reset peripheral in APB slot 5  1 = reset  0 = not reset
 * @{
 */
#define WRPR_APB5_CTRL__SRESET__SHIFT                                         1
#define WRPR_APB5_CTRL__SRESET__WIDTH                                         1
#define WRPR_APB5_CTRL__SRESET__MASK                                0x00000002U
#define WRPR_APB5_CTRL__SRESET__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define WRPR_APB5_CTRL__SRESET__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define WRPR_APB5_CTRL__SRESET__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define WRPR_APB5_CTRL__SRESET__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define WRPR_APB5_CTRL__SRESET__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define WRPR_APB5_CTRL__SRESET__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define WRPR_APB5_CTRL__SRESET__RESET_VALUE                         0x00000001U
/** @} */
#define WRPR_APB5_CTRL__TYPE                                           uint32_t
#define WRPR_APB5_CTRL__READ                                        0x00000003U
#define WRPR_APB5_CTRL__WRITE                                       0x00000003U
#define WRPR_APB5_CTRL__PRESERVED                                   0x00000000U
#define WRPR_APB5_CTRL__RESET_VALUE                                 0x00000002U

#endif /* __WRPR_APB5_CTRL_MACRO__ */

/** @} end of apb5_ctrl */

/* macros for BlueprintGlobalNameSpace::WRPR_apb6_ctrl */
/**
 * @defgroup at_apb_wrpr_regs_core_apb6_ctrl apb6_ctrl
 * @brief Contains register fields associated with apb6_ctrl. definitions.
 * @{
 */
#ifndef __WRPR_APB6_CTRL_MACRO__
#define __WRPR_APB6_CTRL_MACRO__

/* macros for field clk_enable */
/**
 * @defgroup at_apb_wrpr_regs_core_clk_enable_field clk_enable_field
 * @brief macros for field clk_enable
 * @details enable clock to peripheral in APB slot 6  1 = clock enabled  0 = clock not enabled
 * @{
 */
#define WRPR_APB6_CTRL__CLK_ENABLE__SHIFT                                     0
#define WRPR_APB6_CTRL__CLK_ENABLE__WIDTH                                     1
#define WRPR_APB6_CTRL__CLK_ENABLE__MASK                            0x00000001U
#define WRPR_APB6_CTRL__CLK_ENABLE__READ(src)   ((uint32_t)(src) & 0x00000001U)
#define WRPR_APB6_CTRL__CLK_ENABLE__WRITE(src)  ((uint32_t)(src) & 0x00000001U)
#define WRPR_APB6_CTRL__CLK_ENABLE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define WRPR_APB6_CTRL__CLK_ENABLE__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define WRPR_APB6_CTRL__CLK_ENABLE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define WRPR_APB6_CTRL__CLK_ENABLE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define WRPR_APB6_CTRL__CLK_ENABLE__RESET_VALUE                     0x00000000U
/** @} */

/* macros for field sreset */
/**
 * @defgroup at_apb_wrpr_regs_core_sreset_field sreset_field
 * @brief macros for field sreset
 * @details reset peripheral in APB slot 6  1 = reset  0 = not reset
 * @{
 */
#define WRPR_APB6_CTRL__SRESET__SHIFT                                         1
#define WRPR_APB6_CTRL__SRESET__WIDTH                                         1
#define WRPR_APB6_CTRL__SRESET__MASK                                0x00000002U
#define WRPR_APB6_CTRL__SRESET__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define WRPR_APB6_CTRL__SRESET__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define WRPR_APB6_CTRL__SRESET__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define WRPR_APB6_CTRL__SRESET__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define WRPR_APB6_CTRL__SRESET__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define WRPR_APB6_CTRL__SRESET__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define WRPR_APB6_CTRL__SRESET__RESET_VALUE                         0x00000001U
/** @} */
#define WRPR_APB6_CTRL__TYPE                                           uint32_t
#define WRPR_APB6_CTRL__READ                                        0x00000003U
#define WRPR_APB6_CTRL__WRITE                                       0x00000003U
#define WRPR_APB6_CTRL__PRESERVED                                   0x00000000U
#define WRPR_APB6_CTRL__RESET_VALUE                                 0x00000002U

#endif /* __WRPR_APB6_CTRL_MACRO__ */

/** @} end of apb6_ctrl */

/* macros for BlueprintGlobalNameSpace::WRPR_apb7_ctrl */
/**
 * @defgroup at_apb_wrpr_regs_core_apb7_ctrl apb7_ctrl
 * @brief Contains register fields associated with apb7_ctrl. definitions.
 * @{
 */
#ifndef __WRPR_APB7_CTRL_MACRO__
#define __WRPR_APB7_CTRL_MACRO__

/* macros for field clk_enable */
/**
 * @defgroup at_apb_wrpr_regs_core_clk_enable_field clk_enable_field
 * @brief macros for field clk_enable
 * @details enable clock to peripheral in APB slot 7  1 = clock enabled  0 = clock not enabled
 * @{
 */
#define WRPR_APB7_CTRL__CLK_ENABLE__SHIFT                                     0
#define WRPR_APB7_CTRL__CLK_ENABLE__WIDTH                                     1
#define WRPR_APB7_CTRL__CLK_ENABLE__MASK                            0x00000001U
#define WRPR_APB7_CTRL__CLK_ENABLE__READ(src)   ((uint32_t)(src) & 0x00000001U)
#define WRPR_APB7_CTRL__CLK_ENABLE__WRITE(src)  ((uint32_t)(src) & 0x00000001U)
#define WRPR_APB7_CTRL__CLK_ENABLE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define WRPR_APB7_CTRL__CLK_ENABLE__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define WRPR_APB7_CTRL__CLK_ENABLE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define WRPR_APB7_CTRL__CLK_ENABLE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define WRPR_APB7_CTRL__CLK_ENABLE__RESET_VALUE                     0x00000000U
/** @} */

/* macros for field sreset */
/**
 * @defgroup at_apb_wrpr_regs_core_sreset_field sreset_field
 * @brief macros for field sreset
 * @details reset peripheral in APB slot 7  1 = reset  0 = not reset
 * @{
 */
#define WRPR_APB7_CTRL__SRESET__SHIFT                                         1
#define WRPR_APB7_CTRL__SRESET__WIDTH                                         1
#define WRPR_APB7_CTRL__SRESET__MASK                                0x00000002U
#define WRPR_APB7_CTRL__SRESET__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define WRPR_APB7_CTRL__SRESET__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define WRPR_APB7_CTRL__SRESET__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define WRPR_APB7_CTRL__SRESET__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define WRPR_APB7_CTRL__SRESET__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define WRPR_APB7_CTRL__SRESET__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define WRPR_APB7_CTRL__SRESET__RESET_VALUE                         0x00000001U
/** @} */
#define WRPR_APB7_CTRL__TYPE                                           uint32_t
#define WRPR_APB7_CTRL__READ                                        0x00000003U
#define WRPR_APB7_CTRL__WRITE                                       0x00000003U
#define WRPR_APB7_CTRL__PRESERVED                                   0x00000000U
#define WRPR_APB7_CTRL__RESET_VALUE                                 0x00000002U

#endif /* __WRPR_APB7_CTRL_MACRO__ */

/** @} end of apb7_ctrl */

/* macros for BlueprintGlobalNameSpace::WRPR_apb8_ctrl */
/**
 * @defgroup at_apb_wrpr_regs_core_apb8_ctrl apb8_ctrl
 * @brief Contains register fields associated with apb8_ctrl. definitions.
 * @{
 */
#ifndef __WRPR_APB8_CTRL_MACRO__
#define __WRPR_APB8_CTRL_MACRO__

/* macros for field clk_enable */
/**
 * @defgroup at_apb_wrpr_regs_core_clk_enable_field clk_enable_field
 * @brief macros for field clk_enable
 * @details enable clock to peripheral in APB slot 8  1 = clock enabled  0 = clock not enabled
 * @{
 */
#define WRPR_APB8_CTRL__CLK_ENABLE__SHIFT                                     0
#define WRPR_APB8_CTRL__CLK_ENABLE__WIDTH                                     1
#define WRPR_APB8_CTRL__CLK_ENABLE__MASK                            0x00000001U
#define WRPR_APB8_CTRL__CLK_ENABLE__READ(src)   ((uint32_t)(src) & 0x00000001U)
#define WRPR_APB8_CTRL__CLK_ENABLE__WRITE(src)  ((uint32_t)(src) & 0x00000001U)
#define WRPR_APB8_CTRL__CLK_ENABLE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define WRPR_APB8_CTRL__CLK_ENABLE__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define WRPR_APB8_CTRL__CLK_ENABLE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define WRPR_APB8_CTRL__CLK_ENABLE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define WRPR_APB8_CTRL__CLK_ENABLE__RESET_VALUE                     0x00000000U
/** @} */

/* macros for field sreset */
/**
 * @defgroup at_apb_wrpr_regs_core_sreset_field sreset_field
 * @brief macros for field sreset
 * @details reset peripheral in APB slot 8  1 = reset  0 = not reset
 * @{
 */
#define WRPR_APB8_CTRL__SRESET__SHIFT                                         1
#define WRPR_APB8_CTRL__SRESET__WIDTH                                         1
#define WRPR_APB8_CTRL__SRESET__MASK                                0x00000002U
#define WRPR_APB8_CTRL__SRESET__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define WRPR_APB8_CTRL__SRESET__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define WRPR_APB8_CTRL__SRESET__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define WRPR_APB8_CTRL__SRESET__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define WRPR_APB8_CTRL__SRESET__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define WRPR_APB8_CTRL__SRESET__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define WRPR_APB8_CTRL__SRESET__RESET_VALUE                         0x00000001U
/** @} */
#define WRPR_APB8_CTRL__TYPE                                           uint32_t
#define WRPR_APB8_CTRL__READ                                        0x00000003U
#define WRPR_APB8_CTRL__WRITE                                       0x00000003U
#define WRPR_APB8_CTRL__PRESERVED                                   0x00000000U
#define WRPR_APB8_CTRL__RESET_VALUE                                 0x00000002U

#endif /* __WRPR_APB8_CTRL_MACRO__ */

/** @} end of apb8_ctrl */

/* macros for BlueprintGlobalNameSpace::WRPR_apb9_ctrl */
/**
 * @defgroup at_apb_wrpr_regs_core_apb9_ctrl apb9_ctrl
 * @brief Contains register fields associated with apb9_ctrl. definitions.
 * @{
 */
#ifndef __WRPR_APB9_CTRL_MACRO__
#define __WRPR_APB9_CTRL_MACRO__

/* macros for field clk_enable */
/**
 * @defgroup at_apb_wrpr_regs_core_clk_enable_field clk_enable_field
 * @brief macros for field clk_enable
 * @details enable clock to peripheral in APB slot 9  1 = clock enabled  0 = clock not enabled
 * @{
 */
#define WRPR_APB9_CTRL__CLK_ENABLE__SHIFT                                     0
#define WRPR_APB9_CTRL__CLK_ENABLE__WIDTH                                     1
#define WRPR_APB9_CTRL__CLK_ENABLE__MASK                            0x00000001U
#define WRPR_APB9_CTRL__CLK_ENABLE__READ(src)   ((uint32_t)(src) & 0x00000001U)
#define WRPR_APB9_CTRL__CLK_ENABLE__WRITE(src)  ((uint32_t)(src) & 0x00000001U)
#define WRPR_APB9_CTRL__CLK_ENABLE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define WRPR_APB9_CTRL__CLK_ENABLE__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define WRPR_APB9_CTRL__CLK_ENABLE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define WRPR_APB9_CTRL__CLK_ENABLE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define WRPR_APB9_CTRL__CLK_ENABLE__RESET_VALUE                     0x00000000U
/** @} */

/* macros for field sreset */
/**
 * @defgroup at_apb_wrpr_regs_core_sreset_field sreset_field
 * @brief macros for field sreset
 * @details reset peripheral in APB slot 9  1 = reset  0 = not reset
 * @{
 */
#define WRPR_APB9_CTRL__SRESET__SHIFT                                         1
#define WRPR_APB9_CTRL__SRESET__WIDTH                                         1
#define WRPR_APB9_CTRL__SRESET__MASK                                0x00000002U
#define WRPR_APB9_CTRL__SRESET__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define WRPR_APB9_CTRL__SRESET__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define WRPR_APB9_CTRL__SRESET__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define WRPR_APB9_CTRL__SRESET__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define WRPR_APB9_CTRL__SRESET__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define WRPR_APB9_CTRL__SRESET__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define WRPR_APB9_CTRL__SRESET__RESET_VALUE                         0x00000001U
/** @} */
#define WRPR_APB9_CTRL__TYPE                                           uint32_t
#define WRPR_APB9_CTRL__READ                                        0x00000003U
#define WRPR_APB9_CTRL__WRITE                                       0x00000003U
#define WRPR_APB9_CTRL__PRESERVED                                   0x00000000U
#define WRPR_APB9_CTRL__RESET_VALUE                                 0x00000002U

#endif /* __WRPR_APB9_CTRL_MACRO__ */

/** @} end of apb9_ctrl */

/* macros for BlueprintGlobalNameSpace::WRPR_apb10_ctrl */
/**
 * @defgroup at_apb_wrpr_regs_core_apb10_ctrl apb10_ctrl
 * @brief Contains register fields associated with apb10_ctrl. definitions.
 * @{
 */
#ifndef __WRPR_APB10_CTRL_MACRO__
#define __WRPR_APB10_CTRL_MACRO__

/* macros for field clk_enable */
/**
 * @defgroup at_apb_wrpr_regs_core_clk_enable_field clk_enable_field
 * @brief macros for field clk_enable
 * @details enable clock to peripheral in APB slot 10  1 = clock enabled  0 = clock not enabled
 * @{
 */
#define WRPR_APB10_CTRL__CLK_ENABLE__SHIFT                                    0
#define WRPR_APB10_CTRL__CLK_ENABLE__WIDTH                                    1
#define WRPR_APB10_CTRL__CLK_ENABLE__MASK                           0x00000001U
#define WRPR_APB10_CTRL__CLK_ENABLE__READ(src)  ((uint32_t)(src) & 0x00000001U)
#define WRPR_APB10_CTRL__CLK_ENABLE__WRITE(src) ((uint32_t)(src) & 0x00000001U)
#define WRPR_APB10_CTRL__CLK_ENABLE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define WRPR_APB10_CTRL__CLK_ENABLE__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define WRPR_APB10_CTRL__CLK_ENABLE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define WRPR_APB10_CTRL__CLK_ENABLE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define WRPR_APB10_CTRL__CLK_ENABLE__RESET_VALUE                    0x00000000U
/** @} */

/* macros for field sreset */
/**
 * @defgroup at_apb_wrpr_regs_core_sreset_field sreset_field
 * @brief macros for field sreset
 * @details reset peripheral in APB slot 10  1 = reset  0 = not reset
 * @{
 */
#define WRPR_APB10_CTRL__SRESET__SHIFT                                        1
#define WRPR_APB10_CTRL__SRESET__WIDTH                                        1
#define WRPR_APB10_CTRL__SRESET__MASK                               0x00000002U
#define WRPR_APB10_CTRL__SRESET__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define WRPR_APB10_CTRL__SRESET__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define WRPR_APB10_CTRL__SRESET__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define WRPR_APB10_CTRL__SRESET__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define WRPR_APB10_CTRL__SRESET__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define WRPR_APB10_CTRL__SRESET__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define WRPR_APB10_CTRL__SRESET__RESET_VALUE                        0x00000001U
/** @} */
#define WRPR_APB10_CTRL__TYPE                                          uint32_t
#define WRPR_APB10_CTRL__READ                                       0x00000003U
#define WRPR_APB10_CTRL__WRITE                                      0x00000003U
#define WRPR_APB10_CTRL__PRESERVED                                  0x00000000U
#define WRPR_APB10_CTRL__RESET_VALUE                                0x00000002U

#endif /* __WRPR_APB10_CTRL_MACRO__ */

/** @} end of apb10_ctrl */

/* macros for BlueprintGlobalNameSpace::WRPR_apb11_ctrl */
/**
 * @defgroup at_apb_wrpr_regs_core_apb11_ctrl apb11_ctrl
 * @brief Contains register fields associated with apb11_ctrl. definitions.
 * @{
 */
#ifndef __WRPR_APB11_CTRL_MACRO__
#define __WRPR_APB11_CTRL_MACRO__

/* macros for field clk_enable */
/**
 * @defgroup at_apb_wrpr_regs_core_clk_enable_field clk_enable_field
 * @brief macros for field clk_enable
 * @details enable clock to peripheral in APB slot 11  1 = clock enabled  0 = clock not enabled
 * @{
 */
#define WRPR_APB11_CTRL__CLK_ENABLE__SHIFT                                    0
#define WRPR_APB11_CTRL__CLK_ENABLE__WIDTH                                    1
#define WRPR_APB11_CTRL__CLK_ENABLE__MASK                           0x00000001U
#define WRPR_APB11_CTRL__CLK_ENABLE__READ(src)  ((uint32_t)(src) & 0x00000001U)
#define WRPR_APB11_CTRL__CLK_ENABLE__WRITE(src) ((uint32_t)(src) & 0x00000001U)
#define WRPR_APB11_CTRL__CLK_ENABLE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define WRPR_APB11_CTRL__CLK_ENABLE__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define WRPR_APB11_CTRL__CLK_ENABLE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define WRPR_APB11_CTRL__CLK_ENABLE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define WRPR_APB11_CTRL__CLK_ENABLE__RESET_VALUE                    0x00000000U
/** @} */

/* macros for field sreset */
/**
 * @defgroup at_apb_wrpr_regs_core_sreset_field sreset_field
 * @brief macros for field sreset
 * @details reset peripheral in APB slot 11  1 = reset  0 = not reset
 * @{
 */
#define WRPR_APB11_CTRL__SRESET__SHIFT                                        1
#define WRPR_APB11_CTRL__SRESET__WIDTH                                        1
#define WRPR_APB11_CTRL__SRESET__MASK                               0x00000002U
#define WRPR_APB11_CTRL__SRESET__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define WRPR_APB11_CTRL__SRESET__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define WRPR_APB11_CTRL__SRESET__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define WRPR_APB11_CTRL__SRESET__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define WRPR_APB11_CTRL__SRESET__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define WRPR_APB11_CTRL__SRESET__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define WRPR_APB11_CTRL__SRESET__RESET_VALUE                        0x00000001U
/** @} */
#define WRPR_APB11_CTRL__TYPE                                          uint32_t
#define WRPR_APB11_CTRL__READ                                       0x00000003U
#define WRPR_APB11_CTRL__WRITE                                      0x00000003U
#define WRPR_APB11_CTRL__PRESERVED                                  0x00000000U
#define WRPR_APB11_CTRL__RESET_VALUE                                0x00000002U

#endif /* __WRPR_APB11_CTRL_MACRO__ */

/** @} end of apb11_ctrl */

/* macros for BlueprintGlobalNameSpace::WRPR_apb12_ctrl */
/**
 * @defgroup at_apb_wrpr_regs_core_apb12_ctrl apb12_ctrl
 * @brief Contains register fields associated with apb12_ctrl. definitions.
 * @{
 */
#ifndef __WRPR_APB12_CTRL_MACRO__
#define __WRPR_APB12_CTRL_MACRO__

/* macros for field clk_enable */
/**
 * @defgroup at_apb_wrpr_regs_core_clk_enable_field clk_enable_field
 * @brief macros for field clk_enable
 * @details enable clock to peripheral in APB slot 12  1 = clock enabled  0 = clock not enabled
 * @{
 */
#define WRPR_APB12_CTRL__CLK_ENABLE__SHIFT                                    0
#define WRPR_APB12_CTRL__CLK_ENABLE__WIDTH                                    1
#define WRPR_APB12_CTRL__CLK_ENABLE__MASK                           0x00000001U
#define WRPR_APB12_CTRL__CLK_ENABLE__READ(src)  ((uint32_t)(src) & 0x00000001U)
#define WRPR_APB12_CTRL__CLK_ENABLE__WRITE(src) ((uint32_t)(src) & 0x00000001U)
#define WRPR_APB12_CTRL__CLK_ENABLE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define WRPR_APB12_CTRL__CLK_ENABLE__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define WRPR_APB12_CTRL__CLK_ENABLE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define WRPR_APB12_CTRL__CLK_ENABLE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define WRPR_APB12_CTRL__CLK_ENABLE__RESET_VALUE                    0x00000000U
/** @} */

/* macros for field sreset */
/**
 * @defgroup at_apb_wrpr_regs_core_sreset_field sreset_field
 * @brief macros for field sreset
 * @details reset peripheral in APB slot 12  1 = reset  0 = not reset
 * @{
 */
#define WRPR_APB12_CTRL__SRESET__SHIFT                                        1
#define WRPR_APB12_CTRL__SRESET__WIDTH                                        1
#define WRPR_APB12_CTRL__SRESET__MASK                               0x00000002U
#define WRPR_APB12_CTRL__SRESET__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define WRPR_APB12_CTRL__SRESET__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define WRPR_APB12_CTRL__SRESET__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define WRPR_APB12_CTRL__SRESET__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define WRPR_APB12_CTRL__SRESET__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define WRPR_APB12_CTRL__SRESET__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define WRPR_APB12_CTRL__SRESET__RESET_VALUE                        0x00000001U
/** @} */
#define WRPR_APB12_CTRL__TYPE                                          uint32_t
#define WRPR_APB12_CTRL__READ                                       0x00000003U
#define WRPR_APB12_CTRL__WRITE                                      0x00000003U
#define WRPR_APB12_CTRL__PRESERVED                                  0x00000000U
#define WRPR_APB12_CTRL__RESET_VALUE                                0x00000002U

#endif /* __WRPR_APB12_CTRL_MACRO__ */

/** @} end of apb12_ctrl */

/* macros for BlueprintGlobalNameSpace::WRPR_apb13_ctrl */
/**
 * @defgroup at_apb_wrpr_regs_core_apb13_ctrl apb13_ctrl
 * @brief Contains register fields associated with apb13_ctrl. definitions.
 * @{
 */
#ifndef __WRPR_APB13_CTRL_MACRO__
#define __WRPR_APB13_CTRL_MACRO__

/* macros for field clk_enable */
/**
 * @defgroup at_apb_wrpr_regs_core_clk_enable_field clk_enable_field
 * @brief macros for field clk_enable
 * @details enable clock to peripheral in APB slot 13  1 = clock enabled  0 = clock not enabled
 * @{
 */
#define WRPR_APB13_CTRL__CLK_ENABLE__SHIFT                                    0
#define WRPR_APB13_CTRL__CLK_ENABLE__WIDTH                                    1
#define WRPR_APB13_CTRL__CLK_ENABLE__MASK                           0x00000001U
#define WRPR_APB13_CTRL__CLK_ENABLE__READ(src)  ((uint32_t)(src) & 0x00000001U)
#define WRPR_APB13_CTRL__CLK_ENABLE__WRITE(src) ((uint32_t)(src) & 0x00000001U)
#define WRPR_APB13_CTRL__CLK_ENABLE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define WRPR_APB13_CTRL__CLK_ENABLE__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define WRPR_APB13_CTRL__CLK_ENABLE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define WRPR_APB13_CTRL__CLK_ENABLE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define WRPR_APB13_CTRL__CLK_ENABLE__RESET_VALUE                    0x00000000U
/** @} */

/* macros for field sreset */
/**
 * @defgroup at_apb_wrpr_regs_core_sreset_field sreset_field
 * @brief macros for field sreset
 * @details reset peripheral in APB slot 13  1 = reset  0 = not reset
 * @{
 */
#define WRPR_APB13_CTRL__SRESET__SHIFT                                        1
#define WRPR_APB13_CTRL__SRESET__WIDTH                                        1
#define WRPR_APB13_CTRL__SRESET__MASK                               0x00000002U
#define WRPR_APB13_CTRL__SRESET__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define WRPR_APB13_CTRL__SRESET__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define WRPR_APB13_CTRL__SRESET__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define WRPR_APB13_CTRL__SRESET__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define WRPR_APB13_CTRL__SRESET__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define WRPR_APB13_CTRL__SRESET__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define WRPR_APB13_CTRL__SRESET__RESET_VALUE                        0x00000001U
/** @} */
#define WRPR_APB13_CTRL__TYPE                                          uint32_t
#define WRPR_APB13_CTRL__READ                                       0x00000003U
#define WRPR_APB13_CTRL__WRITE                                      0x00000003U
#define WRPR_APB13_CTRL__PRESERVED                                  0x00000000U
#define WRPR_APB13_CTRL__RESET_VALUE                                0x00000002U

#endif /* __WRPR_APB13_CTRL_MACRO__ */

/** @} end of apb13_ctrl */

/* macros for BlueprintGlobalNameSpace::WRPR_apb14_ctrl */
/**
 * @defgroup at_apb_wrpr_regs_core_apb14_ctrl apb14_ctrl
 * @brief Contains register fields associated with apb14_ctrl. definitions.
 * @{
 */
#ifndef __WRPR_APB14_CTRL_MACRO__
#define __WRPR_APB14_CTRL_MACRO__

/* macros for field clk_enable */
/**
 * @defgroup at_apb_wrpr_regs_core_clk_enable_field clk_enable_field
 * @brief macros for field clk_enable
 * @details enable clock to peripheral in APB slot 14  1 = clock enabled  0 = clock not enabled
 * @{
 */
#define WRPR_APB14_CTRL__CLK_ENABLE__SHIFT                                    0
#define WRPR_APB14_CTRL__CLK_ENABLE__WIDTH                                    1
#define WRPR_APB14_CTRL__CLK_ENABLE__MASK                           0x00000001U
#define WRPR_APB14_CTRL__CLK_ENABLE__READ(src)  ((uint32_t)(src) & 0x00000001U)
#define WRPR_APB14_CTRL__CLK_ENABLE__WRITE(src) ((uint32_t)(src) & 0x00000001U)
#define WRPR_APB14_CTRL__CLK_ENABLE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define WRPR_APB14_CTRL__CLK_ENABLE__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define WRPR_APB14_CTRL__CLK_ENABLE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define WRPR_APB14_CTRL__CLK_ENABLE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define WRPR_APB14_CTRL__CLK_ENABLE__RESET_VALUE                    0x00000000U
/** @} */

/* macros for field sreset */
/**
 * @defgroup at_apb_wrpr_regs_core_sreset_field sreset_field
 * @brief macros for field sreset
 * @details reset peripheral in APB slot 14  1 = reset  0 = not reset
 * @{
 */
#define WRPR_APB14_CTRL__SRESET__SHIFT                                        1
#define WRPR_APB14_CTRL__SRESET__WIDTH                                        1
#define WRPR_APB14_CTRL__SRESET__MASK                               0x00000002U
#define WRPR_APB14_CTRL__SRESET__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define WRPR_APB14_CTRL__SRESET__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define WRPR_APB14_CTRL__SRESET__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define WRPR_APB14_CTRL__SRESET__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define WRPR_APB14_CTRL__SRESET__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define WRPR_APB14_CTRL__SRESET__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define WRPR_APB14_CTRL__SRESET__RESET_VALUE                        0x00000001U
/** @} */
#define WRPR_APB14_CTRL__TYPE                                          uint32_t
#define WRPR_APB14_CTRL__READ                                       0x00000003U
#define WRPR_APB14_CTRL__WRITE                                      0x00000003U
#define WRPR_APB14_CTRL__PRESERVED                                  0x00000000U
#define WRPR_APB14_CTRL__RESET_VALUE                                0x00000002U

#endif /* __WRPR_APB14_CTRL_MACRO__ */

/** @} end of apb14_ctrl */

/* macros for BlueprintGlobalNameSpace::WRPR_apb15_ctrl */
/**
 * @defgroup at_apb_wrpr_regs_core_apb15_ctrl apb15_ctrl
 * @brief Contains register fields associated with apb15_ctrl. definitions.
 * @{
 */
#ifndef __WRPR_APB15_CTRL_MACRO__
#define __WRPR_APB15_CTRL_MACRO__

/* macros for field clk_enable */
/**
 * @defgroup at_apb_wrpr_regs_core_clk_enable_field clk_enable_field
 * @brief macros for field clk_enable
 * @details enable clock to peripheral in APB slot 15  1 = clock enabled  0 = clock not enabled
 * @{
 */
#define WRPR_APB15_CTRL__CLK_ENABLE__SHIFT                                    0
#define WRPR_APB15_CTRL__CLK_ENABLE__WIDTH                                    1
#define WRPR_APB15_CTRL__CLK_ENABLE__MASK                           0x00000001U
#define WRPR_APB15_CTRL__CLK_ENABLE__READ(src)  ((uint32_t)(src) & 0x00000001U)
#define WRPR_APB15_CTRL__CLK_ENABLE__WRITE(src) ((uint32_t)(src) & 0x00000001U)
#define WRPR_APB15_CTRL__CLK_ENABLE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define WRPR_APB15_CTRL__CLK_ENABLE__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define WRPR_APB15_CTRL__CLK_ENABLE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define WRPR_APB15_CTRL__CLK_ENABLE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define WRPR_APB15_CTRL__CLK_ENABLE__RESET_VALUE                    0x00000000U
/** @} */

/* macros for field sreset */
/**
 * @defgroup at_apb_wrpr_regs_core_sreset_field sreset_field
 * @brief macros for field sreset
 * @details reset peripheral in APB slot 15  1 = reset  0 = not reset
 * @{
 */
#define WRPR_APB15_CTRL__SRESET__SHIFT                                        1
#define WRPR_APB15_CTRL__SRESET__WIDTH                                        1
#define WRPR_APB15_CTRL__SRESET__MASK                               0x00000002U
#define WRPR_APB15_CTRL__SRESET__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define WRPR_APB15_CTRL__SRESET__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define WRPR_APB15_CTRL__SRESET__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define WRPR_APB15_CTRL__SRESET__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define WRPR_APB15_CTRL__SRESET__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define WRPR_APB15_CTRL__SRESET__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define WRPR_APB15_CTRL__SRESET__RESET_VALUE                        0x00000001U
/** @} */
#define WRPR_APB15_CTRL__TYPE                                          uint32_t
#define WRPR_APB15_CTRL__READ                                       0x00000003U
#define WRPR_APB15_CTRL__WRITE                                      0x00000003U
#define WRPR_APB15_CTRL__PRESERVED                                  0x00000000U
#define WRPR_APB15_CTRL__RESET_VALUE                                0x00000002U

#endif /* __WRPR_APB15_CTRL_MACRO__ */

/** @} end of apb15_ctrl */

/* macros for BlueprintGlobalNameSpace::WRPR_clk_hpc_pin_out_ctrl */
/**
 * @defgroup at_apb_wrpr_regs_core_clk_hpc_pin_out_ctrl clk_hpc_pin_out_ctrl
 * @brief Contains register fields associated with clk_hpc_pin_out_ctrl. definitions.
 * @{
 */
#ifndef __WRPR_CLK_HPC_PIN_OUT_CTRL_MACRO__
#define __WRPR_CLK_HPC_PIN_OUT_CTRL_MACRO__

/* macros for field clk_hpc_sel */
/**
 * @defgroup at_apb_wrpr_regs_core_clk_hpc_sel_field clk_hpc_sel_field
 * @brief macros for field clk_hpc_sel
 * @details divide ratio for clk_hpc going out for external observation
 * @{
 */
#define WRPR_CLK_HPC_PIN_OUT_CTRL__CLK_HPC_SEL__SHIFT                         0
#define WRPR_CLK_HPC_PIN_OUT_CTRL__CLK_HPC_SEL__WIDTH                         2
#define WRPR_CLK_HPC_PIN_OUT_CTRL__CLK_HPC_SEL__MASK                0x00000003U
#define WRPR_CLK_HPC_PIN_OUT_CTRL__CLK_HPC_SEL__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000003U)
#define WRPR_CLK_HPC_PIN_OUT_CTRL__CLK_HPC_SEL__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000003U)
#define WRPR_CLK_HPC_PIN_OUT_CTRL__CLK_HPC_SEL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000003U) | ((uint32_t)(src) &\
                    0x00000003U)
#define WRPR_CLK_HPC_PIN_OUT_CTRL__CLK_HPC_SEL__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000003U)))
#define WRPR_CLK_HPC_PIN_OUT_CTRL__CLK_HPC_SEL__RESET_VALUE         0x00000000U
/** @} */
#define WRPR_CLK_HPC_PIN_OUT_CTRL__TYPE                                uint32_t
#define WRPR_CLK_HPC_PIN_OUT_CTRL__READ                             0x00000003U
#define WRPR_CLK_HPC_PIN_OUT_CTRL__WRITE                            0x00000003U
#define WRPR_CLK_HPC_PIN_OUT_CTRL__PRESERVED                        0x00000000U
#define WRPR_CLK_HPC_PIN_OUT_CTRL__RESET_VALUE                      0x00000000U

#endif /* __WRPR_CLK_HPC_PIN_OUT_CTRL_MACRO__ */

/** @} end of clk_hpc_pin_out_ctrl */

/* macros for BlueprintGlobalNameSpace::WRPR_clk_hmc_pin_out_ctrl */
/**
 * @defgroup at_apb_wrpr_regs_core_clk_hmc_pin_out_ctrl clk_hmc_pin_out_ctrl
 * @brief Contains register fields associated with clk_hmc_pin_out_ctrl. definitions.
 * @{
 */
#ifndef __WRPR_CLK_HMC_PIN_OUT_CTRL_MACRO__
#define __WRPR_CLK_HMC_PIN_OUT_CTRL_MACRO__

/* macros for field clk_mpc_sel */
/**
 * @defgroup at_apb_wrpr_regs_core_clk_mpc_sel_field clk_mpc_sel_field
 * @brief macros for field clk_mpc_sel
 * @details divide ratio for clk_mpc going out for external observation
 * @{
 */
#define WRPR_CLK_HMC_PIN_OUT_CTRL__CLK_MPC_SEL__SHIFT                         0
#define WRPR_CLK_HMC_PIN_OUT_CTRL__CLK_MPC_SEL__WIDTH                         2
#define WRPR_CLK_HMC_PIN_OUT_CTRL__CLK_MPC_SEL__MASK                0x00000003U
#define WRPR_CLK_HMC_PIN_OUT_CTRL__CLK_MPC_SEL__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000003U)
#define WRPR_CLK_HMC_PIN_OUT_CTRL__CLK_MPC_SEL__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000003U)
#define WRPR_CLK_HMC_PIN_OUT_CTRL__CLK_MPC_SEL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000003U) | ((uint32_t)(src) &\
                    0x00000003U)
#define WRPR_CLK_HMC_PIN_OUT_CTRL__CLK_MPC_SEL__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000003U)))
#define WRPR_CLK_HMC_PIN_OUT_CTRL__CLK_MPC_SEL__RESET_VALUE         0x00000000U
/** @} */
#define WRPR_CLK_HMC_PIN_OUT_CTRL__TYPE                                uint32_t
#define WRPR_CLK_HMC_PIN_OUT_CTRL__READ                             0x00000003U
#define WRPR_CLK_HMC_PIN_OUT_CTRL__WRITE                            0x00000003U
#define WRPR_CLK_HMC_PIN_OUT_CTRL__PRESERVED                        0x00000000U
#define WRPR_CLK_HMC_PIN_OUT_CTRL__RESET_VALUE                      0x00000000U

#endif /* __WRPR_CLK_HMC_PIN_OUT_CTRL_MACRO__ */

/** @} end of clk_hmc_pin_out_ctrl */

/* macros for BlueprintGlobalNameSpace::WRPR_clk_lmc_pin_out_ctrl */
/**
 * @defgroup at_apb_wrpr_regs_core_clk_lmc_pin_out_ctrl clk_lmc_pin_out_ctrl
 * @brief Contains register fields associated with clk_lmc_pin_out_ctrl. definitions.
 * @{
 */
#ifndef __WRPR_CLK_LMC_PIN_OUT_CTRL_MACRO__
#define __WRPR_CLK_LMC_PIN_OUT_CTRL_MACRO__

/* macros for field clk_lpc_sel */
/**
 * @defgroup at_apb_wrpr_regs_core_clk_lpc_sel_field clk_lpc_sel_field
 * @brief macros for field clk_lpc_sel
 * @details enable for clk_lpc going out for external observation
 * @{
 */
#define WRPR_CLK_LMC_PIN_OUT_CTRL__CLK_LPC_SEL__SHIFT                         0
#define WRPR_CLK_LMC_PIN_OUT_CTRL__CLK_LPC_SEL__WIDTH                         1
#define WRPR_CLK_LMC_PIN_OUT_CTRL__CLK_LPC_SEL__MASK                0x00000001U
#define WRPR_CLK_LMC_PIN_OUT_CTRL__CLK_LPC_SEL__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define WRPR_CLK_LMC_PIN_OUT_CTRL__CLK_LPC_SEL__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define WRPR_CLK_LMC_PIN_OUT_CTRL__CLK_LPC_SEL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define WRPR_CLK_LMC_PIN_OUT_CTRL__CLK_LPC_SEL__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define WRPR_CLK_LMC_PIN_OUT_CTRL__CLK_LPC_SEL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define WRPR_CLK_LMC_PIN_OUT_CTRL__CLK_LPC_SEL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define WRPR_CLK_LMC_PIN_OUT_CTRL__CLK_LPC_SEL__RESET_VALUE         0x00000000U
/** @} */
#define WRPR_CLK_LMC_PIN_OUT_CTRL__TYPE                                uint32_t
#define WRPR_CLK_LMC_PIN_OUT_CTRL__READ                             0x00000001U
#define WRPR_CLK_LMC_PIN_OUT_CTRL__WRITE                            0x00000001U
#define WRPR_CLK_LMC_PIN_OUT_CTRL__PRESERVED                        0x00000000U
#define WRPR_CLK_LMC_PIN_OUT_CTRL__RESET_VALUE                      0x00000000U

#endif /* __WRPR_CLK_LMC_PIN_OUT_CTRL_MACRO__ */

/** @} end of clk_lmc_pin_out_ctrl */

/* macros for BlueprintGlobalNameSpace::WRPR_dbg_ctrl */
/**
 * @defgroup at_apb_wrpr_regs_core_dbg_ctrl dbg_ctrl
 * @brief Contains register fields associated with dbg_ctrl. definitions.
 * @{
 */
#ifndef __WRPR_DBG_CTRL_MACRO__
#define __WRPR_DBG_CTRL_MACRO__

/* macros for field ble_dbg_sel */
/**
 * @defgroup at_apb_wrpr_regs_core_ble_dbg_sel_field ble_dbg_sel_field
 * @brief macros for field ble_dbg_sel
 * @details select which bus goes off-chip
 * @{
 */
#define WRPR_DBG_CTRL__BLE_DBG_SEL__SHIFT                                     0
#define WRPR_DBG_CTRL__BLE_DBG_SEL__WIDTH                                     4
#define WRPR_DBG_CTRL__BLE_DBG_SEL__MASK                            0x0000000fU
#define WRPR_DBG_CTRL__BLE_DBG_SEL__READ(src)   ((uint32_t)(src) & 0x0000000fU)
#define WRPR_DBG_CTRL__BLE_DBG_SEL__WRITE(src)  ((uint32_t)(src) & 0x0000000fU)
#define WRPR_DBG_CTRL__BLE_DBG_SEL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000000fU) | ((uint32_t)(src) &\
                    0x0000000fU)
#define WRPR_DBG_CTRL__BLE_DBG_SEL__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x0000000fU)))
#define WRPR_DBG_CTRL__BLE_DBG_SEL__RESET_VALUE                     0x00000005U
/** @} */

/* macros for field em_block_wdata */
/**
 * @defgroup at_apb_wrpr_regs_core_em_block_wdata_field em_block_wdata_field
 * @brief macros for field em_block_wdata
 * @details not intended to be used; helps with cpf isolation issues
 * @{
 */
#define WRPR_DBG_CTRL__EM_BLOCK_WDATA__SHIFT                                  4
#define WRPR_DBG_CTRL__EM_BLOCK_WDATA__WIDTH                                  1
#define WRPR_DBG_CTRL__EM_BLOCK_WDATA__MASK                         0x00000010U
#define WRPR_DBG_CTRL__EM_BLOCK_WDATA__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000010U) >> 4)
#define WRPR_DBG_CTRL__EM_BLOCK_WDATA__WRITE(src) \
                    (((uint32_t)(src)\
                    << 4) & 0x00000010U)
#define WRPR_DBG_CTRL__EM_BLOCK_WDATA__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | (((uint32_t)(src) <<\
                    4) & 0x00000010U)
#define WRPR_DBG_CTRL__EM_BLOCK_WDATA__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 4) & ~0x00000010U)))
#define WRPR_DBG_CTRL__EM_BLOCK_WDATA__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(1) << 4)
#define WRPR_DBG_CTRL__EM_BLOCK_WDATA__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(0) << 4)
#define WRPR_DBG_CTRL__EM_BLOCK_WDATA__RESET_VALUE                  0x00000000U
/** @} */

/* macros for field em_block_addr */
/**
 * @defgroup at_apb_wrpr_regs_core_em_block_addr_field em_block_addr_field
 * @brief macros for field em_block_addr
 * @details not intended to be used; helps with cpf isolation issues
 * @{
 */
#define WRPR_DBG_CTRL__EM_BLOCK_ADDR__SHIFT                                   5
#define WRPR_DBG_CTRL__EM_BLOCK_ADDR__WIDTH                                   1
#define WRPR_DBG_CTRL__EM_BLOCK_ADDR__MASK                          0x00000020U
#define WRPR_DBG_CTRL__EM_BLOCK_ADDR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000020U) >> 5)
#define WRPR_DBG_CTRL__EM_BLOCK_ADDR__WRITE(src) \
                    (((uint32_t)(src)\
                    << 5) & 0x00000020U)
#define WRPR_DBG_CTRL__EM_BLOCK_ADDR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | (((uint32_t)(src) <<\
                    5) & 0x00000020U)
#define WRPR_DBG_CTRL__EM_BLOCK_ADDR__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 5) & ~0x00000020U)))
#define WRPR_DBG_CTRL__EM_BLOCK_ADDR__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | ((uint32_t)(1) << 5)
#define WRPR_DBG_CTRL__EM_BLOCK_ADDR__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000020U) | ((uint32_t)(0) << 5)
#define WRPR_DBG_CTRL__EM_BLOCK_ADDR__RESET_VALUE                   0x00000000U
/** @} */
#define WRPR_DBG_CTRL__TYPE                                            uint32_t
#define WRPR_DBG_CTRL__READ                                         0x0000003fU
#define WRPR_DBG_CTRL__WRITE                                        0x0000003fU
#define WRPR_DBG_CTRL__PRESERVED                                    0x00000000U
#define WRPR_DBG_CTRL__RESET_VALUE                                  0x00000005U

#endif /* __WRPR_DBG_CTRL_MACRO__ */

/** @} end of dbg_ctrl */

/* macros for BlueprintGlobalNameSpace::WRPR_pin_selection_A */
/**
 * @defgroup at_apb_wrpr_regs_core_pin_selection_A pin_selection_A
 * @brief Contains register fields associated with pin_selection_A. definitions.
 * @{
 */
#ifndef __WRPR_PIN_SELECTION_A_MACRO__
#define __WRPR_PIN_SELECTION_A_MACRO__

/* macros for field p5_sel */
/**
 * @defgroup at_apb_wrpr_regs_core_p5_sel_field p5_sel_field
 * @brief macros for field p5_sel
 * @details pin selection setting for P5  P5_GPIO_5_ 0  P5_KSI_14_ 1  P5_UART1_TX 2  P5_PWM_0_ 3  P5_KSO_14_ 7  P5_KSO_13_ 8  P5_KSO_11_ 9  P5_BLE_IN_PROCESS 10  P5_QSPI_CS 11
 * @{
 */
#define WRPR_PIN_SELECTION_A__P5_SEL__SHIFT                                   2
#define WRPR_PIN_SELECTION_A__P5_SEL__WIDTH                                   5
#define WRPR_PIN_SELECTION_A__P5_SEL__MASK                          0x0000007cU
#define WRPR_PIN_SELECTION_A__P5_SEL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000007cU) >> 2)
#define WRPR_PIN_SELECTION_A__P5_SEL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 2) & 0x0000007cU)
#define WRPR_PIN_SELECTION_A__P5_SEL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000007cU) | (((uint32_t)(src) <<\
                    2) & 0x0000007cU)
#define WRPR_PIN_SELECTION_A__P5_SEL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 2) & ~0x0000007cU)))
#define WRPR_PIN_SELECTION_A__P5_SEL__RESET_VALUE                   0x00000000U
/** @} */

/* macros for field p4_sel */
/**
 * @defgroup at_apb_wrpr_regs_core_p4_sel_field p4_sel_field
 * @brief macros for field p4_sel
 * @details pin selection setting for P4  P4_GPIO_4_ 0  P4_KSI_15_ 1  P4_UART1_RX 2  P4_I2C0_SDA 3  P4_KSO_15_ 5  P4_KSO_12_ 6  P4_KSO_10_ 7  P4_SHUB0_SDA 8  P4_QSPI_D_0_ 10
 * @{
 */
#define WRPR_PIN_SELECTION_A__P4_SEL__SHIFT                                   7
#define WRPR_PIN_SELECTION_A__P4_SEL__WIDTH                                   5
#define WRPR_PIN_SELECTION_A__P4_SEL__MASK                          0x00000f80U
#define WRPR_PIN_SELECTION_A__P4_SEL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000f80U) >> 7)
#define WRPR_PIN_SELECTION_A__P4_SEL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 7) & 0x00000f80U)
#define WRPR_PIN_SELECTION_A__P4_SEL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000f80U) | (((uint32_t)(src) <<\
                    7) & 0x00000f80U)
#define WRPR_PIN_SELECTION_A__P4_SEL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 7) & ~0x00000f80U)))
#define WRPR_PIN_SELECTION_A__P4_SEL__RESET_VALUE                   0x00000000U
/** @} */

/* macros for field p3_sel */
/**
 * @defgroup at_apb_wrpr_regs_core_p3_sel_field p3_sel_field
 * @brief macros for field p3_sel
 * @details pin selection setting for P3  P3_GPIO_3_ 0  P3_KSI_16_ 1  P3_QDY_0_ 2  P3_UART1_RTS 3  P3_I2C0_SCK 4  P3_I2C0_SCL 4  P3_KSO_16_ 6  P3_KSO_11_ 7  P3_KSO_9_ 8  P3_SHUB0_SCK 9  P3_SHUB0_SCL 9
 * @{
 */
#define WRPR_PIN_SELECTION_A__P3_SEL__SHIFT                                  12
#define WRPR_PIN_SELECTION_A__P3_SEL__WIDTH                                   5
#define WRPR_PIN_SELECTION_A__P3_SEL__MASK                          0x0001f000U
#define WRPR_PIN_SELECTION_A__P3_SEL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0001f000U) >> 12)
#define WRPR_PIN_SELECTION_A__P3_SEL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 12) & 0x0001f000U)
#define WRPR_PIN_SELECTION_A__P3_SEL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0001f000U) | (((uint32_t)(src) <<\
                    12) & 0x0001f000U)
#define WRPR_PIN_SELECTION_A__P3_SEL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 12) & ~0x0001f000U)))
#define WRPR_PIN_SELECTION_A__P3_SEL__RESET_VALUE                   0x00000000U
/** @} */

/* macros for field p2_sel */
/**
 * @defgroup at_apb_wrpr_regs_core_p2_sel_field p2_sel_field
 * @brief macros for field p2_sel
 * @details pin selection setting for P2  P2_GPIO_2_ 0  P2_KSI_17_ 1  P2_QDY_1_ 2  P2_KSO_17_ 3  P2_KSO_10_ 4  P2_KSO_8_ 5  P2_SHUB1_MOSI 6  P2_SPI1_MOSI 8
 * @{
 */
#define WRPR_PIN_SELECTION_A__P2_SEL__SHIFT                                  17
#define WRPR_PIN_SELECTION_A__P2_SEL__WIDTH                                   5
#define WRPR_PIN_SELECTION_A__P2_SEL__MASK                          0x003e0000U
#define WRPR_PIN_SELECTION_A__P2_SEL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x003e0000U) >> 17)
#define WRPR_PIN_SELECTION_A__P2_SEL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 17) & 0x003e0000U)
#define WRPR_PIN_SELECTION_A__P2_SEL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x003e0000U) | (((uint32_t)(src) <<\
                    17) & 0x003e0000U)
#define WRPR_PIN_SELECTION_A__P2_SEL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 17) & ~0x003e0000U)))
#define WRPR_PIN_SELECTION_A__P2_SEL__RESET_VALUE                   0x00000000U
/** @} */

/* macros for field p1_sel */
/**
 * @defgroup at_apb_wrpr_regs_core_p1_sel_field p1_sel_field
 * @brief macros for field p1_sel
 * @details pin selection setting for P1  P1_GPIO_1_ 0  P1_KSI_18_ 1  P1_QDZ_0_ 2  P1_KSO_18_ 3  P1_KSO_9_ 4  P1_SHUB1_CS 5  P1_SHUB1_CSN 5  P1_SPI1_CS 7  P1_SPI1_CSN 7
 * @{
 */
#define WRPR_PIN_SELECTION_A__P1_SEL__SHIFT                                  22
#define WRPR_PIN_SELECTION_A__P1_SEL__WIDTH                                   5
#define WRPR_PIN_SELECTION_A__P1_SEL__MASK                          0x07c00000U
#define WRPR_PIN_SELECTION_A__P1_SEL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x07c00000U) >> 22)
#define WRPR_PIN_SELECTION_A__P1_SEL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 22) & 0x07c00000U)
#define WRPR_PIN_SELECTION_A__P1_SEL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x07c00000U) | (((uint32_t)(src) <<\
                    22) & 0x07c00000U)
#define WRPR_PIN_SELECTION_A__P1_SEL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 22) & ~0x07c00000U)))
#define WRPR_PIN_SELECTION_A__P1_SEL__RESET_VALUE                   0x00000000U
/** @} */

/* macros for field p0_sel */
/**
 * @defgroup at_apb_wrpr_regs_core_p0_sel_field p0_sel_field
 * @brief macros for field p0_sel
 * @details pin selection setting for P0  P0_GPIO_0_ 0  P0_KSI_19_ 1  P0_QDZ_1_ 2  P0_KSO_19_ 3  P0_KSO_8_ 4  P0_SHUB1_CLK 5  P0_SHUB1_SCLK 5  P0_XPAON 6  P0_SPI1_CLK 7  P0_SPI1_SCLK 7
 * @{
 */
#define WRPR_PIN_SELECTION_A__P0_SEL__SHIFT                                  27
#define WRPR_PIN_SELECTION_A__P0_SEL__WIDTH                                   5
#define WRPR_PIN_SELECTION_A__P0_SEL__MASK                          0xf8000000U
#define WRPR_PIN_SELECTION_A__P0_SEL__READ(src) \
                    (((uint32_t)(src)\
                    & 0xf8000000U) >> 27)
#define WRPR_PIN_SELECTION_A__P0_SEL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 27) & 0xf8000000U)
#define WRPR_PIN_SELECTION_A__P0_SEL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xf8000000U) | (((uint32_t)(src) <<\
                    27) & 0xf8000000U)
#define WRPR_PIN_SELECTION_A__P0_SEL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 27) & ~0xf8000000U)))
#define WRPR_PIN_SELECTION_A__P0_SEL__RESET_VALUE                   0x00000000U
/** @} */
#define WRPR_PIN_SELECTION_A__TYPE                                     uint32_t
#define WRPR_PIN_SELECTION_A__READ                                  0xfffffffcU
#define WRPR_PIN_SELECTION_A__WRITE                                 0xfffffffcU
#define WRPR_PIN_SELECTION_A__PRESERVED                             0x00000000U
#define WRPR_PIN_SELECTION_A__RESET_VALUE                           0x00000000U

#endif /* __WRPR_PIN_SELECTION_A_MACRO__ */

/** @} end of pin_selection_A */

/* macros for BlueprintGlobalNameSpace::WRPR_pin_selection_B */
/**
 * @defgroup at_apb_wrpr_regs_core_pin_selection_B pin_selection_B
 * @brief Contains register fields associated with pin_selection_B. definitions.
 * @{
 */
#ifndef __WRPR_PIN_SELECTION_B_MACRO__
#define __WRPR_PIN_SELECTION_B_MACRO__

/* macros for field p11_sel */
/**
 * @defgroup at_apb_wrpr_regs_core_p11_sel_field p11_sel_field
 * @brief macros for field p11_sel
 * @details pin selection setting for P11  P11_GPIO_11_ 0  P11_KSI_8_ 1  P11_SPI0_CS 2  P11_SPI0_CSN 2  P11_PWM_2_ 3  P11_UART0_TX 7  P11_KSO_8_ 8  P11_SPI0_MOSI 9  P11_I2C1_SCK 10  P11_I2C1_SCL 10  P11_KSO_19_ 13  P11_KSO_17_ 14  P11_UART0_CTS 15  P11_SHUB0_MOSI 16  P11_SHUB1_SCK 17  P11_SHUB1_SCL 17  P11_SHUB0_CS 18  P11_SHUB0_CSN 18  P11_XPAON 19
 * @{
 */
#define WRPR_PIN_SELECTION_B__P11_SEL__SHIFT                                  2
#define WRPR_PIN_SELECTION_B__P11_SEL__WIDTH                                  5
#define WRPR_PIN_SELECTION_B__P11_SEL__MASK                         0x0000007cU
#define WRPR_PIN_SELECTION_B__P11_SEL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000007cU) >> 2)
#define WRPR_PIN_SELECTION_B__P11_SEL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 2) & 0x0000007cU)
#define WRPR_PIN_SELECTION_B__P11_SEL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000007cU) | (((uint32_t)(src) <<\
                    2) & 0x0000007cU)
#define WRPR_PIN_SELECTION_B__P11_SEL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 2) & ~0x0000007cU)))
#define WRPR_PIN_SELECTION_B__P11_SEL__RESET_VALUE                  0x00000000U
/** @} */

/* macros for field p10_sel */
/**
 * @defgroup at_apb_wrpr_regs_core_p10_sel_field p10_sel_field
 * @brief macros for field p10_sel
 * @details pin selection setting for P10  P10_GPIO_10_ 0  P10_KSI_9_ 1  P10_SPI0_CLK 2  P10_SPI0_SCLK 2  P10_PWM_1_ 3  P10_UART0_RX 7  P10_KSO_9_ 8  P10_SPI0_CS 9  P10_SPI0_CSN 9  P10_I2C0_SDA 10  P10_WURX_DET_1_ 12  P10_KSO_18_ 14  P10_KSO_16_ 15  P10_SHUB0_CS 16  P10_SHUB0_CSN 16  P10_SHUB0_SDA 17  P10_SHUB0_CLK 18  P10_SHUB0_SCLK 18  P10_PDM_IN 20  P10_XPAON 21
 * @{
 */
#define WRPR_PIN_SELECTION_B__P10_SEL__SHIFT                                  7
#define WRPR_PIN_SELECTION_B__P10_SEL__WIDTH                                  5
#define WRPR_PIN_SELECTION_B__P10_SEL__MASK                         0x00000f80U
#define WRPR_PIN_SELECTION_B__P10_SEL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000f80U) >> 7)
#define WRPR_PIN_SELECTION_B__P10_SEL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 7) & 0x00000f80U)
#define WRPR_PIN_SELECTION_B__P10_SEL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000f80U) | (((uint32_t)(src) <<\
                    7) & 0x00000f80U)
#define WRPR_PIN_SELECTION_B__P10_SEL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 7) & ~0x00000f80U)))
#define WRPR_PIN_SELECTION_B__P10_SEL__RESET_VALUE                  0x00000000U
/** @} */

/* macros for field p9_sel */
/**
 * @defgroup at_apb_wrpr_regs_core_p9_sel_field p9_sel_field
 * @brief macros for field p9_sel
 * @details pin selection setting for P9  P9_GPIO_9_ 0  P9_KSI_10_ 1  P9_PWM_2_ 2  P9_SPI1_MISO 3  P9_KSO_10_ 7  P9_SPI0_CLK 8  P9_SPI0_SCLK 8  P9_I2C0_SCK 9  P9_I2C0_SCL 9  P9_WURX_DET_0_ 11  P9_KSO_17_ 13  P9_KSO_15_ 14  P9_SHUB0_CLK 15  P9_SHUB0_SCLK 15  P9_SHUB0_SCK 16  P9_SHUB0_SCL 16  P9_SHUB1_MISO 17  P9_WLAN_RX 18  P9_PDM_CLK 19
 * @{
 */
#define WRPR_PIN_SELECTION_B__P9_SEL__SHIFT                                  12
#define WRPR_PIN_SELECTION_B__P9_SEL__WIDTH                                   5
#define WRPR_PIN_SELECTION_B__P9_SEL__MASK                          0x0001f000U
#define WRPR_PIN_SELECTION_B__P9_SEL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0001f000U) >> 12)
#define WRPR_PIN_SELECTION_B__P9_SEL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 12) & 0x0001f000U)
#define WRPR_PIN_SELECTION_B__P9_SEL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0001f000U) | (((uint32_t)(src) <<\
                    12) & 0x0001f000U)
#define WRPR_PIN_SELECTION_B__P9_SEL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 12) & ~0x0001f000U)))
#define WRPR_PIN_SELECTION_B__P9_SEL__RESET_VALUE                   0x00000000U
/** @} */

/* macros for field p8_sel */
/**
 * @defgroup at_apb_wrpr_regs_core_p8_sel_field p8_sel_field
 * @brief macros for field p8_sel
 * @details pin selection setting for P8  P8_GPIO_8_ 0  P8_KSI_11_ 1  P8_PWM_1_ 2  P8_SPI1_MOSI 3  P8_KSO_11_ 8  P8_KSO_16_ 10  P8_KSO_14_ 11  P8_SHUB1_MOSI 12
 * @{
 */
#define WRPR_PIN_SELECTION_B__P8_SEL__SHIFT                                  17
#define WRPR_PIN_SELECTION_B__P8_SEL__WIDTH                                   5
#define WRPR_PIN_SELECTION_B__P8_SEL__MASK                          0x003e0000U
#define WRPR_PIN_SELECTION_B__P8_SEL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x003e0000U) >> 17)
#define WRPR_PIN_SELECTION_B__P8_SEL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 17) & 0x003e0000U)
#define WRPR_PIN_SELECTION_B__P8_SEL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x003e0000U) | (((uint32_t)(src) <<\
                    17) & 0x003e0000U)
#define WRPR_PIN_SELECTION_B__P8_SEL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 17) & ~0x003e0000U)))
#define WRPR_PIN_SELECTION_B__P8_SEL__RESET_VALUE                   0x00000000U
/** @} */

/* macros for field p7_sel */
/**
 * @defgroup at_apb_wrpr_regs_core_p7_sel_field p7_sel_field
 * @brief macros for field p7_sel
 * @details pin selection setting for P7  P7_GPIO_7_ 0  P7_KSI_12_ 1  P7_PWM_0_ 2  P7_SPI1_CS 3  P7_SPI1_CSN 3  P7_KSO_12_ 8  P7_KSO_15_ 9  P7_KSO_13_ 10  P7_SHUB1_CS 11  P7_SHUB1_CSN 11  P7_QSPI_D_2_ 13
 * @{
 */
#define WRPR_PIN_SELECTION_B__P7_SEL__SHIFT                                  22
#define WRPR_PIN_SELECTION_B__P7_SEL__WIDTH                                   5
#define WRPR_PIN_SELECTION_B__P7_SEL__MASK                          0x07c00000U
#define WRPR_PIN_SELECTION_B__P7_SEL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x07c00000U) >> 22)
#define WRPR_PIN_SELECTION_B__P7_SEL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 22) & 0x07c00000U)
#define WRPR_PIN_SELECTION_B__P7_SEL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x07c00000U) | (((uint32_t)(src) <<\
                    22) & 0x07c00000U)
#define WRPR_PIN_SELECTION_B__P7_SEL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 22) & ~0x07c00000U)))
#define WRPR_PIN_SELECTION_B__P7_SEL__RESET_VALUE                   0x00000000U
/** @} */

/* macros for field p6_sel */
/**
 * @defgroup at_apb_wrpr_regs_core_p6_sel_field p6_sel_field
 * @brief macros for field p6_sel
 * @details pin selection setting for P6  P6_GPIO_6_ 0  P6_KSI_13_ 1  P6_UART1_CTS 2  P6_SPI1_CLK 3  P6_SPI1_SCLK 3  P6_KSO_13_ 8  P6_KSO_14_ 9  P6_KSO_12_ 10  P6_SHUB1_CLK 11  P6_SHUB1_SCLK 11  P6_BLE_TX 12  P6_QSPI_D_1_ 13
 * @{
 */
#define WRPR_PIN_SELECTION_B__P6_SEL__SHIFT                                  27
#define WRPR_PIN_SELECTION_B__P6_SEL__WIDTH                                   5
#define WRPR_PIN_SELECTION_B__P6_SEL__MASK                          0xf8000000U
#define WRPR_PIN_SELECTION_B__P6_SEL__READ(src) \
                    (((uint32_t)(src)\
                    & 0xf8000000U) >> 27)
#define WRPR_PIN_SELECTION_B__P6_SEL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 27) & 0xf8000000U)
#define WRPR_PIN_SELECTION_B__P6_SEL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xf8000000U) | (((uint32_t)(src) <<\
                    27) & 0xf8000000U)
#define WRPR_PIN_SELECTION_B__P6_SEL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 27) & ~0xf8000000U)))
#define WRPR_PIN_SELECTION_B__P6_SEL__RESET_VALUE                   0x00000000U
/** @} */
#define WRPR_PIN_SELECTION_B__TYPE                                     uint32_t
#define WRPR_PIN_SELECTION_B__READ                                  0xfffffffcU
#define WRPR_PIN_SELECTION_B__WRITE                                 0xfffffffcU
#define WRPR_PIN_SELECTION_B__PRESERVED                             0x00000000U
#define WRPR_PIN_SELECTION_B__RESET_VALUE                           0x00000000U

#endif /* __WRPR_PIN_SELECTION_B_MACRO__ */

/** @} end of pin_selection_B */

/* macros for BlueprintGlobalNameSpace::WRPR_pin_selection_C */
/**
 * @defgroup at_apb_wrpr_regs_core_pin_selection_C pin_selection_C
 * @brief Contains register fields associated with pin_selection_C. definitions.
 * @{
 */
#ifndef __WRPR_PIN_SELECTION_C_MACRO__
#define __WRPR_PIN_SELECTION_C_MACRO__

/* macros for field p17_sel */
/**
 * @defgroup at_apb_wrpr_regs_core_p17_sel_field p17_sel_field
 * @brief macros for field p17_sel
 * @details pin selection setting for P17  P17_QSPI_D_1_ 0  P17_QSPI_CLK 1  P17_QSPI_D_0_ 2
 * @{
 */
#define WRPR_PIN_SELECTION_C__P17_SEL__SHIFT                                  2
#define WRPR_PIN_SELECTION_C__P17_SEL__WIDTH                                  5
#define WRPR_PIN_SELECTION_C__P17_SEL__MASK                         0x0000007cU
#define WRPR_PIN_SELECTION_C__P17_SEL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000007cU) >> 2)
#define WRPR_PIN_SELECTION_C__P17_SEL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 2) & 0x0000007cU)
#define WRPR_PIN_SELECTION_C__P17_SEL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000007cU) | (((uint32_t)(src) <<\
                    2) & 0x0000007cU)
#define WRPR_PIN_SELECTION_C__P17_SEL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 2) & ~0x0000007cU)))
#define WRPR_PIN_SELECTION_C__P17_SEL__RESET_VALUE                  0x00000000U
/** @} */

/* macros for field p16_sel */
/**
 * @defgroup at_apb_wrpr_regs_core_p16_sel_field p16_sel_field
 * @brief macros for field p16_sel
 * @details pin selection setting for P16  P16_QSPI_D_0_ 0
 * @{
 */
#define WRPR_PIN_SELECTION_C__P16_SEL__SHIFT                                  7
#define WRPR_PIN_SELECTION_C__P16_SEL__WIDTH                                  5
#define WRPR_PIN_SELECTION_C__P16_SEL__MASK                         0x00000f80U
#define WRPR_PIN_SELECTION_C__P16_SEL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000f80U) >> 7)
#define WRPR_PIN_SELECTION_C__P16_SEL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 7) & 0x00000f80U)
#define WRPR_PIN_SELECTION_C__P16_SEL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000f80U) | (((uint32_t)(src) <<\
                    7) & 0x00000f80U)
#define WRPR_PIN_SELECTION_C__P16_SEL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 7) & ~0x00000f80U)))
#define WRPR_PIN_SELECTION_C__P16_SEL__RESET_VALUE                  0x00000000U
/** @} */

/* macros for field p15_sel */
/**
 * @defgroup at_apb_wrpr_regs_core_p15_sel_field p15_sel_field
 * @brief macros for field p15_sel
 * @details pin selection setting for P15  P15_QSPI_CS 0
 * @{
 */
#define WRPR_PIN_SELECTION_C__P15_SEL__SHIFT                                 12
#define WRPR_PIN_SELECTION_C__P15_SEL__WIDTH                                  5
#define WRPR_PIN_SELECTION_C__P15_SEL__MASK                         0x0001f000U
#define WRPR_PIN_SELECTION_C__P15_SEL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0001f000U) >> 12)
#define WRPR_PIN_SELECTION_C__P15_SEL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 12) & 0x0001f000U)
#define WRPR_PIN_SELECTION_C__P15_SEL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0001f000U) | (((uint32_t)(src) <<\
                    12) & 0x0001f000U)
#define WRPR_PIN_SELECTION_C__P15_SEL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 12) & ~0x0001f000U)))
#define WRPR_PIN_SELECTION_C__P15_SEL__RESET_VALUE                  0x00000000U
/** @} */

/* macros for field p14_sel */
/**
 * @defgroup at_apb_wrpr_regs_core_p14_sel_field p14_sel_field
 * @brief macros for field p14_sel
 * @details pin selection setting for P14  P14_QSPI_CLK 0  P14_QSPI_D_3_ 1
 * @{
 */
#define WRPR_PIN_SELECTION_C__P14_SEL__SHIFT                                 17
#define WRPR_PIN_SELECTION_C__P14_SEL__WIDTH                                  5
#define WRPR_PIN_SELECTION_C__P14_SEL__MASK                         0x003e0000U
#define WRPR_PIN_SELECTION_C__P14_SEL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x003e0000U) >> 17)
#define WRPR_PIN_SELECTION_C__P14_SEL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 17) & 0x003e0000U)
#define WRPR_PIN_SELECTION_C__P14_SEL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x003e0000U) | (((uint32_t)(src) <<\
                    17) & 0x003e0000U)
#define WRPR_PIN_SELECTION_C__P14_SEL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 17) & ~0x003e0000U)))
#define WRPR_PIN_SELECTION_C__P14_SEL__RESET_VALUE                  0x00000000U
/** @} */

/* macros for field p13_sel */
/**
 * @defgroup at_apb_wrpr_regs_core_p13_sel_field p13_sel_field
 * @brief macros for field p13_sel
 * @details pin selection setting for P13  P13_GPIO_13_ 0  P13_KSI_6_ 1  P13_QDZ_0_ 2  P13_SPI0_MISO 3  P13_I2C1_SDA 4  P13_KSO_19_ 9  P13_UART0_RTS 10  P13_SHUB0_MISO 11  P13_SHUB1_SDA 12
 * @{
 */
#define WRPR_PIN_SELECTION_C__P13_SEL__SHIFT                                 22
#define WRPR_PIN_SELECTION_C__P13_SEL__WIDTH                                  5
#define WRPR_PIN_SELECTION_C__P13_SEL__MASK                         0x07c00000U
#define WRPR_PIN_SELECTION_C__P13_SEL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x07c00000U) >> 22)
#define WRPR_PIN_SELECTION_C__P13_SEL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 22) & 0x07c00000U)
#define WRPR_PIN_SELECTION_C__P13_SEL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x07c00000U) | (((uint32_t)(src) <<\
                    22) & 0x07c00000U)
#define WRPR_PIN_SELECTION_C__P13_SEL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 22) & ~0x07c00000U)))
#define WRPR_PIN_SELECTION_C__P13_SEL__RESET_VALUE                  0x00000000U
/** @} */

/* macros for field p12_sel */
/**
 * @defgroup at_apb_wrpr_regs_core_p12_sel_field p12_sel_field
 * @brief macros for field p12_sel
 * @details pin selection setting for P12  P12_GPIO_12_ 0  P12_KSI_7_ 1  P12_QDZ_1_ 2  P12_SPI0_MOSI 3  P12_I2C1_SCK 4  P12_I2C1_SCL 4  P12_KSO_18_ 9  P12_UART0_CTS 10  P12_SHUB0_MOSI 11  P12_SHUB1_SCK 12  P12_SHUB1_SCL 12
 * @{
 */
#define WRPR_PIN_SELECTION_C__P12_SEL__SHIFT                                 27
#define WRPR_PIN_SELECTION_C__P12_SEL__WIDTH                                  5
#define WRPR_PIN_SELECTION_C__P12_SEL__MASK                         0xf8000000U
#define WRPR_PIN_SELECTION_C__P12_SEL__READ(src) \
                    (((uint32_t)(src)\
                    & 0xf8000000U) >> 27)
#define WRPR_PIN_SELECTION_C__P12_SEL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 27) & 0xf8000000U)
#define WRPR_PIN_SELECTION_C__P12_SEL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xf8000000U) | (((uint32_t)(src) <<\
                    27) & 0xf8000000U)
#define WRPR_PIN_SELECTION_C__P12_SEL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 27) & ~0xf8000000U)))
#define WRPR_PIN_SELECTION_C__P12_SEL__RESET_VALUE                  0x00000000U
/** @} */
#define WRPR_PIN_SELECTION_C__TYPE                                     uint32_t
#define WRPR_PIN_SELECTION_C__READ                                  0xfffffffcU
#define WRPR_PIN_SELECTION_C__WRITE                                 0xfffffffcU
#define WRPR_PIN_SELECTION_C__PRESERVED                             0x00000000U
#define WRPR_PIN_SELECTION_C__RESET_VALUE                           0x00000000U

#endif /* __WRPR_PIN_SELECTION_C_MACRO__ */

/** @} end of pin_selection_C */

/* macros for BlueprintGlobalNameSpace::WRPR_pin_selection_D */
/**
 * @defgroup at_apb_wrpr_regs_core_pin_selection_D pin_selection_D
 * @brief Contains register fields associated with pin_selection_D. definitions.
 * @{
 */
#ifndef __WRPR_PIN_SELECTION_D_MACRO__
#define __WRPR_PIN_SELECTION_D_MACRO__

/* macros for field p23_sel */
/**
 * @defgroup at_apb_wrpr_regs_core_p23_sel_field p23_sel_field
 * @brief macros for field p23_sel
 * @details pin selection setting for P23  P23_GPIO_19_ 0  P23_KSI_0_ 1  P23_PWM_6_ 2  P23_SPI0_MISO 3  P23_BLE_DBG_3_ 6  P23_UART0_TX 9  P23_QSPI_D_2_ 10  P23_SHUB0_MISO 13  P23_BLE_IN_PROCESS 14
 * @{
 */
#define WRPR_PIN_SELECTION_D__P23_SEL__SHIFT                                  2
#define WRPR_PIN_SELECTION_D__P23_SEL__WIDTH                                  5
#define WRPR_PIN_SELECTION_D__P23_SEL__MASK                         0x0000007cU
#define WRPR_PIN_SELECTION_D__P23_SEL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000007cU) >> 2)
#define WRPR_PIN_SELECTION_D__P23_SEL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 2) & 0x0000007cU)
#define WRPR_PIN_SELECTION_D__P23_SEL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000007cU) | (((uint32_t)(src) <<\
                    2) & 0x0000007cU)
#define WRPR_PIN_SELECTION_D__P23_SEL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 2) & ~0x0000007cU)))
#define WRPR_PIN_SELECTION_D__P23_SEL__RESET_VALUE                  0x00000000U
/** @} */

/* macros for field p22_sel */
/**
 * @defgroup at_apb_wrpr_regs_core_p22_sel_field p22_sel_field
 * @brief macros for field p22_sel
 * @details pin selection setting for P22  P22_GPIO_18_ 0  P22_KSI_1_ 1  P22_PWM_5_ 2  P22_SPI0_MOSI 3  P22_BLE_DBG_2_ 6  P22_UART0_RX 9  P22_QSPI_D_1_ 10  P22_SHUB0_MOSI 13
 * @{
 */
#define WRPR_PIN_SELECTION_D__P22_SEL__SHIFT                                  7
#define WRPR_PIN_SELECTION_D__P22_SEL__WIDTH                                  5
#define WRPR_PIN_SELECTION_D__P22_SEL__MASK                         0x00000f80U
#define WRPR_PIN_SELECTION_D__P22_SEL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000f80U) >> 7)
#define WRPR_PIN_SELECTION_D__P22_SEL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 7) & 0x00000f80U)
#define WRPR_PIN_SELECTION_D__P22_SEL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000f80U) | (((uint32_t)(src) <<\
                    7) & 0x00000f80U)
#define WRPR_PIN_SELECTION_D__P22_SEL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 7) & ~0x00000f80U)))
#define WRPR_PIN_SELECTION_D__P22_SEL__RESET_VALUE                  0x00000000U
/** @} */

/* macros for field p21_sel */
/**
 * @defgroup at_apb_wrpr_regs_core_p21_sel_field p21_sel_field
 * @brief macros for field p21_sel
 * @details pin selection setting for P21  P21_GPIO_17_ 0  P21_KSI_2_ 1  P21_PWM_4_ 2  P21_SPI0_CS 3  P21_SPI0_CSN 3  P21_BLE_DBG_1_ 6  P21_UART0_CTS 10  P21_SHUB0_CS 11  P21_SHUB0_CSN 11
 * @{
 */
#define WRPR_PIN_SELECTION_D__P21_SEL__SHIFT                                 12
#define WRPR_PIN_SELECTION_D__P21_SEL__WIDTH                                  5
#define WRPR_PIN_SELECTION_D__P21_SEL__MASK                         0x0001f000U
#define WRPR_PIN_SELECTION_D__P21_SEL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0001f000U) >> 12)
#define WRPR_PIN_SELECTION_D__P21_SEL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 12) & 0x0001f000U)
#define WRPR_PIN_SELECTION_D__P21_SEL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0001f000U) | (((uint32_t)(src) <<\
                    12) & 0x0001f000U)
#define WRPR_PIN_SELECTION_D__P21_SEL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 12) & ~0x0001f000U)))
#define WRPR_PIN_SELECTION_D__P21_SEL__RESET_VALUE                  0x00000000U
/** @} */

/* macros for field p20_sel */
/**
 * @defgroup at_apb_wrpr_regs_core_p20_sel_field p20_sel_field
 * @brief macros for field p20_sel
 * @details pin selection setting for P20  P20_GPIO_16_ 0  P20_KSI_3_ 1  P20_PWM_3_ 2  P20_SPI0_CLK 3  P20_SPI0_SCLK 3  P20_BLE_DBG_0_ 6  P20_QSPI_D_0_ 9  P20_SHUB0_CLK 12  P20_SHUB0_SCLK 12
 * @{
 */
#define WRPR_PIN_SELECTION_D__P20_SEL__SHIFT                                 17
#define WRPR_PIN_SELECTION_D__P20_SEL__WIDTH                                  5
#define WRPR_PIN_SELECTION_D__P20_SEL__MASK                         0x003e0000U
#define WRPR_PIN_SELECTION_D__P20_SEL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x003e0000U) >> 17)
#define WRPR_PIN_SELECTION_D__P20_SEL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 17) & 0x003e0000U)
#define WRPR_PIN_SELECTION_D__P20_SEL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x003e0000U) | (((uint32_t)(src) <<\
                    17) & 0x003e0000U)
#define WRPR_PIN_SELECTION_D__P20_SEL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 17) & ~0x003e0000U)))
#define WRPR_PIN_SELECTION_D__P20_SEL__RESET_VALUE                  0x00000000U
/** @} */

/* macros for field p19_sel */
/**
 * @defgroup at_apb_wrpr_regs_core_p19_sel_field p19_sel_field
 * @brief macros for field p19_sel
 * @details pin selection setting for P19  P19_QSPI_D_3_ 0  P19_KSI_4_ 1  P19_GPIO_15_ 3  P19_QSPI_CS 4  P19_QSPI_CLK 6
 * @{
 */
#define WRPR_PIN_SELECTION_D__P19_SEL__SHIFT                                 22
#define WRPR_PIN_SELECTION_D__P19_SEL__WIDTH                                  5
#define WRPR_PIN_SELECTION_D__P19_SEL__MASK                         0x07c00000U
#define WRPR_PIN_SELECTION_D__P19_SEL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x07c00000U) >> 22)
#define WRPR_PIN_SELECTION_D__P19_SEL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 22) & 0x07c00000U)
#define WRPR_PIN_SELECTION_D__P19_SEL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x07c00000U) | (((uint32_t)(src) <<\
                    22) & 0x07c00000U)
#define WRPR_PIN_SELECTION_D__P19_SEL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 22) & ~0x07c00000U)))
#define WRPR_PIN_SELECTION_D__P19_SEL__RESET_VALUE                  0x00000000U
/** @} */

/* macros for field p18_sel */
/**
 * @defgroup at_apb_wrpr_regs_core_p18_sel_field p18_sel_field
 * @brief macros for field p18_sel
 * @details pin selection setting for P18  P18_QSPI_D_2_ 0  P18_KSI_5_ 1  P18_GPIO_14_ 3
 * @{
 */
#define WRPR_PIN_SELECTION_D__P18_SEL__SHIFT                                 27
#define WRPR_PIN_SELECTION_D__P18_SEL__WIDTH                                  5
#define WRPR_PIN_SELECTION_D__P18_SEL__MASK                         0xf8000000U
#define WRPR_PIN_SELECTION_D__P18_SEL__READ(src) \
                    (((uint32_t)(src)\
                    & 0xf8000000U) >> 27)
#define WRPR_PIN_SELECTION_D__P18_SEL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 27) & 0xf8000000U)
#define WRPR_PIN_SELECTION_D__P18_SEL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xf8000000U) | (((uint32_t)(src) <<\
                    27) & 0xf8000000U)
#define WRPR_PIN_SELECTION_D__P18_SEL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 27) & ~0xf8000000U)))
#define WRPR_PIN_SELECTION_D__P18_SEL__RESET_VALUE                  0x00000000U
/** @} */
#define WRPR_PIN_SELECTION_D__TYPE                                     uint32_t
#define WRPR_PIN_SELECTION_D__READ                                  0xfffffffcU
#define WRPR_PIN_SELECTION_D__WRITE                                 0xfffffffcU
#define WRPR_PIN_SELECTION_D__PRESERVED                             0x00000000U
#define WRPR_PIN_SELECTION_D__RESET_VALUE                           0x00000000U

#endif /* __WRPR_PIN_SELECTION_D_MACRO__ */

/** @} end of pin_selection_D */

/* macros for BlueprintGlobalNameSpace::WRPR_pin_selection_E */
/**
 * @defgroup at_apb_wrpr_regs_core_pin_selection_E pin_selection_E
 * @brief Contains register fields associated with pin_selection_E. definitions.
 * @{
 */
#ifndef __WRPR_PIN_SELECTION_E_MACRO__
#define __WRPR_PIN_SELECTION_E_MACRO__

/* macros for field p29_sel */
/**
 * @defgroup at_apb_wrpr_regs_core_p29_sel_field p29_sel_field
 * @brief macros for field p29_sel
 * @details pin selection setting for P29  P29_GPIO_25_ 0  P29_KSO_2_ 1  P29_I2C0_SCK 2  P29_I2C0_SCL 2  P29_UART1_RTS 3  P29_SHUB0_SCK 6  P29_SHUB0_SCL 6
 * @{
 */
#define WRPR_PIN_SELECTION_E__P29_SEL__SHIFT                                  2
#define WRPR_PIN_SELECTION_E__P29_SEL__WIDTH                                  5
#define WRPR_PIN_SELECTION_E__P29_SEL__MASK                         0x0000007cU
#define WRPR_PIN_SELECTION_E__P29_SEL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0000007cU) >> 2)
#define WRPR_PIN_SELECTION_E__P29_SEL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 2) & 0x0000007cU)
#define WRPR_PIN_SELECTION_E__P29_SEL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000007cU) | (((uint32_t)(src) <<\
                    2) & 0x0000007cU)
#define WRPR_PIN_SELECTION_E__P29_SEL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 2) & ~0x0000007cU)))
#define WRPR_PIN_SELECTION_E__P29_SEL__RESET_VALUE                  0x00000000U
/** @} */

/* macros for field p28_sel */
/**
 * @defgroup at_apb_wrpr_regs_core_p28_sel_field p28_sel_field
 * @brief macros for field p28_sel
 * @details pin selection setting for P28  P28_GPIO_24_ 0  P28_KSO_3_ 1  P28_PWM_7_ 2
 * @{
 */
#define WRPR_PIN_SELECTION_E__P28_SEL__SHIFT                                  7
#define WRPR_PIN_SELECTION_E__P28_SEL__WIDTH                                  5
#define WRPR_PIN_SELECTION_E__P28_SEL__MASK                         0x00000f80U
#define WRPR_PIN_SELECTION_E__P28_SEL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000f80U) >> 7)
#define WRPR_PIN_SELECTION_E__P28_SEL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 7) & 0x00000f80U)
#define WRPR_PIN_SELECTION_E__P28_SEL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000f80U) | (((uint32_t)(src) <<\
                    7) & 0x00000f80U)
#define WRPR_PIN_SELECTION_E__P28_SEL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 7) & ~0x00000f80U)))
#define WRPR_PIN_SELECTION_E__P28_SEL__RESET_VALUE                  0x00000000U
/** @} */

/* macros for field p27_sel */
/**
 * @defgroup at_apb_wrpr_regs_core_p27_sel_field p27_sel_field
 * @brief macros for field p27_sel
 * @details pin selection setting for P27  P27_GPIO_23_ 0  P27_KSO_4_ 1  P27_QDX_0_ 2  P27_SPI1_MISO 3  P27_PWM_6_ 4  P27_BLE_DBG_7_ 7  P27_MDM_OUT_7_ 8  P27_SHUB1_MISO 11  P27_WLAN_RX 12
 * @{
 */
#define WRPR_PIN_SELECTION_E__P27_SEL__SHIFT                                 12
#define WRPR_PIN_SELECTION_E__P27_SEL__WIDTH                                  5
#define WRPR_PIN_SELECTION_E__P27_SEL__MASK                         0x0001f000U
#define WRPR_PIN_SELECTION_E__P27_SEL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0001f000U) >> 12)
#define WRPR_PIN_SELECTION_E__P27_SEL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 12) & 0x0001f000U)
#define WRPR_PIN_SELECTION_E__P27_SEL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0001f000U) | (((uint32_t)(src) <<\
                    12) & 0x0001f000U)
#define WRPR_PIN_SELECTION_E__P27_SEL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 12) & ~0x0001f000U)))
#define WRPR_PIN_SELECTION_E__P27_SEL__RESET_VALUE                  0x00000000U
/** @} */

/* macros for field p26_sel */
/**
 * @defgroup at_apb_wrpr_regs_core_p26_sel_field p26_sel_field
 * @brief macros for field p26_sel
 * @details pin selection setting for P26  P26_GPIO_22_ 0  P26_KSO_5_ 1  P26_QDX_1_ 2  P26_SPI1_MOSI 3  P26_PWM_5_ 4  P26_BLE_DBG_6_ 7  P26_SHUB1_MOSI 11
 * @{
 */
#define WRPR_PIN_SELECTION_E__P26_SEL__SHIFT                                 17
#define WRPR_PIN_SELECTION_E__P26_SEL__WIDTH                                  5
#define WRPR_PIN_SELECTION_E__P26_SEL__MASK                         0x003e0000U
#define WRPR_PIN_SELECTION_E__P26_SEL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x003e0000U) >> 17)
#define WRPR_PIN_SELECTION_E__P26_SEL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 17) & 0x003e0000U)
#define WRPR_PIN_SELECTION_E__P26_SEL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x003e0000U) | (((uint32_t)(src) <<\
                    17) & 0x003e0000U)
#define WRPR_PIN_SELECTION_E__P26_SEL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 17) & ~0x003e0000U)))
#define WRPR_PIN_SELECTION_E__P26_SEL__RESET_VALUE                  0x00000000U
/** @} */

/* macros for field p25_sel */
/**
 * @defgroup at_apb_wrpr_regs_core_p25_sel_field p25_sel_field
 * @brief macros for field p25_sel
 * @details pin selection setting for P25  P25_GPIO_21_ 0  P25_KSO_6_ 1  P25_QDY_0_ 2  P25_SPI1_CS 3  P25_SPI1_CSN 3  P25_PWM_4_ 4  P25_BLE_DBG_5_ 7  P25_UART0_RX 10  P25_SHUB1_CS 12  P25_SHUB1_CSN 12  P25_PDM_IN 14  P25_XPAON 16
 * @{
 */
#define WRPR_PIN_SELECTION_E__P25_SEL__SHIFT                                 22
#define WRPR_PIN_SELECTION_E__P25_SEL__WIDTH                                  5
#define WRPR_PIN_SELECTION_E__P25_SEL__MASK                         0x07c00000U
#define WRPR_PIN_SELECTION_E__P25_SEL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x07c00000U) >> 22)
#define WRPR_PIN_SELECTION_E__P25_SEL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 22) & 0x07c00000U)
#define WRPR_PIN_SELECTION_E__P25_SEL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x07c00000U) | (((uint32_t)(src) <<\
                    22) & 0x07c00000U)
#define WRPR_PIN_SELECTION_E__P25_SEL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 22) & ~0x07c00000U)))
#define WRPR_PIN_SELECTION_E__P25_SEL__RESET_VALUE                  0x00000000U
/** @} */

/* macros for field p24_sel */
/**
 * @defgroup at_apb_wrpr_regs_core_p24_sel_field p24_sel_field
 * @brief macros for field p24_sel
 * @details pin selection setting for P24  P24_GPIO_20_ 0  P24_KSO_7_ 1  P24_QDY_1_ 2  P24_SPI1_CLK 3  P24_SPI1_SCLK 3  P24_PWM_3_ 4  P24_BLE_DBG_4_ 7  P24_MDM_OUT_4_ 8  P24_QSPI_D_3_ 10  P24_UART0_RTS 13  P24_SHUB1_CLK 14  P24_SHUB1_SCLK 14  P24_BLE_TX 15  P24_PDM_CLK 16
 * @{
 */
#define WRPR_PIN_SELECTION_E__P24_SEL__SHIFT                                 27
#define WRPR_PIN_SELECTION_E__P24_SEL__WIDTH                                  5
#define WRPR_PIN_SELECTION_E__P24_SEL__MASK                         0xf8000000U
#define WRPR_PIN_SELECTION_E__P24_SEL__READ(src) \
                    (((uint32_t)(src)\
                    & 0xf8000000U) >> 27)
#define WRPR_PIN_SELECTION_E__P24_SEL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 27) & 0xf8000000U)
#define WRPR_PIN_SELECTION_E__P24_SEL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xf8000000U) | (((uint32_t)(src) <<\
                    27) & 0xf8000000U)
#define WRPR_PIN_SELECTION_E__P24_SEL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 27) & ~0xf8000000U)))
#define WRPR_PIN_SELECTION_E__P24_SEL__RESET_VALUE                  0x00000000U
/** @} */
#define WRPR_PIN_SELECTION_E__TYPE                                     uint32_t
#define WRPR_PIN_SELECTION_E__READ                                  0xfffffffcU
#define WRPR_PIN_SELECTION_E__WRITE                                 0xfffffffcU
#define WRPR_PIN_SELECTION_E__PRESERVED                             0x00000000U
#define WRPR_PIN_SELECTION_E__RESET_VALUE                           0x00000000U

#endif /* __WRPR_PIN_SELECTION_E_MACRO__ */

/** @} end of pin_selection_E */

/* macros for BlueprintGlobalNameSpace::WRPR_pin_selection_F */
/**
 * @defgroup at_apb_wrpr_regs_core_pin_selection_F pin_selection_F
 * @brief Contains register fields associated with pin_selection_F. definitions.
 * @{
 */
#ifndef __WRPR_PIN_SELECTION_F_MACRO__
#define __WRPR_PIN_SELECTION_F_MACRO__

/* macros for field p33_sel */
/**
 * @defgroup at_apb_wrpr_regs_core_p33_sel_field p33_sel_field
 * @brief macros for field p33_sel
 * @details pin selection setting for P33  P33_GPIO_29_ 0  P33_UART1_TX 1  P33_QDX_0_ 2  P33_SHUB1_MISO 7  P33_SPI1_MISO 9
 * @{
 */
#define WRPR_PIN_SELECTION_F__P33_SEL__SHIFT                                 12
#define WRPR_PIN_SELECTION_F__P33_SEL__WIDTH                                  5
#define WRPR_PIN_SELECTION_F__P33_SEL__MASK                         0x0001f000U
#define WRPR_PIN_SELECTION_F__P33_SEL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x0001f000U) >> 12)
#define WRPR_PIN_SELECTION_F__P33_SEL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 12) & 0x0001f000U)
#define WRPR_PIN_SELECTION_F__P33_SEL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0001f000U) | (((uint32_t)(src) <<\
                    12) & 0x0001f000U)
#define WRPR_PIN_SELECTION_F__P33_SEL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 12) & ~0x0001f000U)))
#define WRPR_PIN_SELECTION_F__P33_SEL__RESET_VALUE                  0x00000000U
/** @} */

/* macros for field p32_sel */
/**
 * @defgroup at_apb_wrpr_regs_core_p32_sel_field p32_sel_field
 * @brief macros for field p32_sel
 * @details pin selection setting for P32  P32_GPIO_28_ 0  P32_UART1_RX 1  P32_QDX_1_ 2  P32_KSI_17_ 3  P32_I2C1_SDA 4  P32_UART1_CTS 5  P32_KSO_17_ 7  P32_SHUB1_SDA 8
 * @{
 */
#define WRPR_PIN_SELECTION_F__P32_SEL__SHIFT                                 17
#define WRPR_PIN_SELECTION_F__P32_SEL__WIDTH                                  5
#define WRPR_PIN_SELECTION_F__P32_SEL__MASK                         0x003e0000U
#define WRPR_PIN_SELECTION_F__P32_SEL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x003e0000U) >> 17)
#define WRPR_PIN_SELECTION_F__P32_SEL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 17) & 0x003e0000U)
#define WRPR_PIN_SELECTION_F__P32_SEL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x003e0000U) | (((uint32_t)(src) <<\
                    17) & 0x003e0000U)
#define WRPR_PIN_SELECTION_F__P32_SEL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 17) & ~0x003e0000U)))
#define WRPR_PIN_SELECTION_F__P32_SEL__RESET_VALUE                  0x00000000U
/** @} */

/* macros for field p31_sel */
/**
 * @defgroup at_apb_wrpr_regs_core_p31_sel_field p31_sel_field
 * @brief macros for field p31_sel
 * @details pin selection setting for P31  P31_GPIO_27_ 0  P31_KSO_0_ 1  P31_I2C1_SCK 2  P31_I2C1_SCL 2  P31_UART1_RX 3  P31_SHUB1_SCK 6  P31_SHUB1_SCL 6
 * @{
 */
#define WRPR_PIN_SELECTION_F__P31_SEL__SHIFT                                 22
#define WRPR_PIN_SELECTION_F__P31_SEL__WIDTH                                  5
#define WRPR_PIN_SELECTION_F__P31_SEL__MASK                         0x07c00000U
#define WRPR_PIN_SELECTION_F__P31_SEL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x07c00000U) >> 22)
#define WRPR_PIN_SELECTION_F__P31_SEL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 22) & 0x07c00000U)
#define WRPR_PIN_SELECTION_F__P31_SEL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x07c00000U) | (((uint32_t)(src) <<\
                    22) & 0x07c00000U)
#define WRPR_PIN_SELECTION_F__P31_SEL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 22) & ~0x07c00000U)))
#define WRPR_PIN_SELECTION_F__P31_SEL__RESET_VALUE                  0x00000000U
/** @} */

/* macros for field p30_sel */
/**
 * @defgroup at_apb_wrpr_regs_core_p30_sel_field p30_sel_field
 * @brief macros for field p30_sel
 * @details pin selection setting for P30  P30_GPIO_26_ 0  P30_KSO_1_ 1  P30_I2C0_SDA 2  P30_UART1_TX 3  P30_UART0_TX 6  P30_SHUB0_SDA 8
 * @{
 */
#define WRPR_PIN_SELECTION_F__P30_SEL__SHIFT                                 27
#define WRPR_PIN_SELECTION_F__P30_SEL__WIDTH                                  5
#define WRPR_PIN_SELECTION_F__P30_SEL__MASK                         0xf8000000U
#define WRPR_PIN_SELECTION_F__P30_SEL__READ(src) \
                    (((uint32_t)(src)\
                    & 0xf8000000U) >> 27)
#define WRPR_PIN_SELECTION_F__P30_SEL__WRITE(src) \
                    (((uint32_t)(src)\
                    << 27) & 0xf8000000U)
#define WRPR_PIN_SELECTION_F__P30_SEL__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xf8000000U) | (((uint32_t)(src) <<\
                    27) & 0xf8000000U)
#define WRPR_PIN_SELECTION_F__P30_SEL__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 27) & ~0xf8000000U)))
#define WRPR_PIN_SELECTION_F__P30_SEL__RESET_VALUE                  0x00000000U
/** @} */
#define WRPR_PIN_SELECTION_F__TYPE                                     uint32_t
#define WRPR_PIN_SELECTION_F__READ                                  0xfffff000U
#define WRPR_PIN_SELECTION_F__WRITE                                 0xfffff000U
#define WRPR_PIN_SELECTION_F__PRESERVED                             0x00000000U
#define WRPR_PIN_SELECTION_F__RESET_VALUE                           0x00000000U

#endif /* __WRPR_PIN_SELECTION_F_MACRO__ */

/** @} end of pin_selection_F */

/* macros for BlueprintGlobalNameSpace::WRPR_pin_pu_A */
/**
 * @defgroup at_apb_wrpr_regs_core_pin_pu_A pin_pu_A
 * @brief Contains register fields associated with pin_pu_A. definitions.
 * @{
 */
#ifndef __WRPR_PIN_PU_A_MACRO__
#define __WRPR_PIN_PU_A_MACRO__

/* macros for field p7_pu */
/**
 * @defgroup at_apb_wrpr_regs_core_p7_pu_field p7_pu_field
 * @brief macros for field p7_pu
 * @details pull-up enable for P7  0 = pull-up resistor not enabled  1 = pull-up resistor enabled
 * @{
 */
#define WRPR_PIN_PU_A__P7_PU__SHIFT                                           0
#define WRPR_PIN_PU_A__P7_PU__WIDTH                                           1
#define WRPR_PIN_PU_A__P7_PU__MASK                                  0x00000001U
#define WRPR_PIN_PU_A__P7_PU__READ(src)         ((uint32_t)(src) & 0x00000001U)
#define WRPR_PIN_PU_A__P7_PU__WRITE(src)        ((uint32_t)(src) & 0x00000001U)
#define WRPR_PIN_PU_A__P7_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define WRPR_PIN_PU_A__P7_PU__VERIFY(src) (!(((uint32_t)(src) & ~0x00000001U)))
#define WRPR_PIN_PU_A__P7_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define WRPR_PIN_PU_A__P7_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define WRPR_PIN_PU_A__P7_PU__RESET_VALUE                           0x00000000U
/** @} */

/* macros for field p6_pu */
/**
 * @defgroup at_apb_wrpr_regs_core_p6_pu_field p6_pu_field
 * @brief macros for field p6_pu
 * @details pull-up enable for P6  0 = pull-up resistor not enabled  1 = pull-up resistor enabled
 * @{
 */
#define WRPR_PIN_PU_A__P6_PU__SHIFT                                           4
#define WRPR_PIN_PU_A__P6_PU__WIDTH                                           1
#define WRPR_PIN_PU_A__P6_PU__MASK                                  0x00000010U
#define WRPR_PIN_PU_A__P6_PU__READ(src)  (((uint32_t)(src) & 0x00000010U) >> 4)
#define WRPR_PIN_PU_A__P6_PU__WRITE(src) (((uint32_t)(src) << 4) & 0x00000010U)
#define WRPR_PIN_PU_A__P6_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | (((uint32_t)(src) <<\
                    4) & 0x00000010U)
#define WRPR_PIN_PU_A__P6_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 4) & ~0x00000010U)))
#define WRPR_PIN_PU_A__P6_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(1) << 4)
#define WRPR_PIN_PU_A__P6_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(0) << 4)
#define WRPR_PIN_PU_A__P6_PU__RESET_VALUE                           0x00000000U
/** @} */

/* macros for field p5_pu */
/**
 * @defgroup at_apb_wrpr_regs_core_p5_pu_field p5_pu_field
 * @brief macros for field p5_pu
 * @details pull-up enable for P5  0 = pull-up resistor not enabled  1 = pull-up resistor enabled
 * @{
 */
#define WRPR_PIN_PU_A__P5_PU__SHIFT                                           8
#define WRPR_PIN_PU_A__P5_PU__WIDTH                                           1
#define WRPR_PIN_PU_A__P5_PU__MASK                                  0x00000100U
#define WRPR_PIN_PU_A__P5_PU__READ(src)  (((uint32_t)(src) & 0x00000100U) >> 8)
#define WRPR_PIN_PU_A__P5_PU__WRITE(src) (((uint32_t)(src) << 8) & 0x00000100U)
#define WRPR_PIN_PU_A__P5_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000100U) | (((uint32_t)(src) <<\
                    8) & 0x00000100U)
#define WRPR_PIN_PU_A__P5_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x00000100U)))
#define WRPR_PIN_PU_A__P5_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000100U) | ((uint32_t)(1) << 8)
#define WRPR_PIN_PU_A__P5_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000100U) | ((uint32_t)(0) << 8)
#define WRPR_PIN_PU_A__P5_PU__RESET_VALUE                           0x00000000U
/** @} */

/* macros for field p4_pu */
/**
 * @defgroup at_apb_wrpr_regs_core_p4_pu_field p4_pu_field
 * @brief macros for field p4_pu
 * @details pull-up enable for P4  0 = pull-up resistor not enabled  1 = pull-up resistor enabled
 * @{
 */
#define WRPR_PIN_PU_A__P4_PU__SHIFT                                          12
#define WRPR_PIN_PU_A__P4_PU__WIDTH                                           1
#define WRPR_PIN_PU_A__P4_PU__MASK                                  0x00001000U
#define WRPR_PIN_PU_A__P4_PU__READ(src) (((uint32_t)(src) & 0x00001000U) >> 12)
#define WRPR_PIN_PU_A__P4_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 12) & 0x00001000U)
#define WRPR_PIN_PU_A__P4_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00001000U) | (((uint32_t)(src) <<\
                    12) & 0x00001000U)
#define WRPR_PIN_PU_A__P4_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 12) & ~0x00001000U)))
#define WRPR_PIN_PU_A__P4_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00001000U) | ((uint32_t)(1) << 12)
#define WRPR_PIN_PU_A__P4_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00001000U) | ((uint32_t)(0) << 12)
#define WRPR_PIN_PU_A__P4_PU__RESET_VALUE                           0x00000000U
/** @} */

/* macros for field p3_pu */
/**
 * @defgroup at_apb_wrpr_regs_core_p3_pu_field p3_pu_field
 * @brief macros for field p3_pu
 * @details pull-up enable for P3  0 = pull-up resistor not enabled  1 = pull-up resistor enabled
 * @{
 */
#define WRPR_PIN_PU_A__P3_PU__SHIFT                                          16
#define WRPR_PIN_PU_A__P3_PU__WIDTH                                           1
#define WRPR_PIN_PU_A__P3_PU__MASK                                  0x00010000U
#define WRPR_PIN_PU_A__P3_PU__READ(src) (((uint32_t)(src) & 0x00010000U) >> 16)
#define WRPR_PIN_PU_A__P3_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00010000U)
#define WRPR_PIN_PU_A__P3_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00010000U) | (((uint32_t)(src) <<\
                    16) & 0x00010000U)
#define WRPR_PIN_PU_A__P3_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00010000U)))
#define WRPR_PIN_PU_A__P3_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00010000U) | ((uint32_t)(1) << 16)
#define WRPR_PIN_PU_A__P3_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00010000U) | ((uint32_t)(0) << 16)
#define WRPR_PIN_PU_A__P3_PU__RESET_VALUE                           0x00000000U
/** @} */

/* macros for field p2_pu */
/**
 * @defgroup at_apb_wrpr_regs_core_p2_pu_field p2_pu_field
 * @brief macros for field p2_pu
 * @details pull-up enable for P2  0 = pull-up resistor not enabled  1 = pull-up resistor enabled
 * @{
 */
#define WRPR_PIN_PU_A__P2_PU__SHIFT                                          20
#define WRPR_PIN_PU_A__P2_PU__WIDTH                                           1
#define WRPR_PIN_PU_A__P2_PU__MASK                                  0x00100000U
#define WRPR_PIN_PU_A__P2_PU__READ(src) (((uint32_t)(src) & 0x00100000U) >> 20)
#define WRPR_PIN_PU_A__P2_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 20) & 0x00100000U)
#define WRPR_PIN_PU_A__P2_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00100000U) | (((uint32_t)(src) <<\
                    20) & 0x00100000U)
#define WRPR_PIN_PU_A__P2_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 20) & ~0x00100000U)))
#define WRPR_PIN_PU_A__P2_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00100000U) | ((uint32_t)(1) << 20)
#define WRPR_PIN_PU_A__P2_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00100000U) | ((uint32_t)(0) << 20)
#define WRPR_PIN_PU_A__P2_PU__RESET_VALUE                           0x00000000U
/** @} */

/* macros for field p1_pu */
/**
 * @defgroup at_apb_wrpr_regs_core_p1_pu_field p1_pu_field
 * @brief macros for field p1_pu
 * @details pull-up enable for P1  0 = pull-up resistor not enabled  1 = pull-up resistor enabled
 * @{
 */
#define WRPR_PIN_PU_A__P1_PU__SHIFT                                          24
#define WRPR_PIN_PU_A__P1_PU__WIDTH                                           1
#define WRPR_PIN_PU_A__P1_PU__MASK                                  0x01000000U
#define WRPR_PIN_PU_A__P1_PU__READ(src) (((uint32_t)(src) & 0x01000000U) >> 24)
#define WRPR_PIN_PU_A__P1_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0x01000000U)
#define WRPR_PIN_PU_A__P1_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | (((uint32_t)(src) <<\
                    24) & 0x01000000U)
#define WRPR_PIN_PU_A__P1_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x01000000U)))
#define WRPR_PIN_PU_A__P1_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(1) << 24)
#define WRPR_PIN_PU_A__P1_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(0) << 24)
#define WRPR_PIN_PU_A__P1_PU__RESET_VALUE                           0x00000000U
/** @} */

/* macros for field p0_pu */
/**
 * @defgroup at_apb_wrpr_regs_core_p0_pu_field p0_pu_field
 * @brief macros for field p0_pu
 * @details pull-up enable for P0  0 = pull-up resistor not enabled  1 = pull-up resistor enabled
 * @{
 */
#define WRPR_PIN_PU_A__P0_PU__SHIFT                                          28
#define WRPR_PIN_PU_A__P0_PU__WIDTH                                           1
#define WRPR_PIN_PU_A__P0_PU__MASK                                  0x10000000U
#define WRPR_PIN_PU_A__P0_PU__READ(src) (((uint32_t)(src) & 0x10000000U) >> 28)
#define WRPR_PIN_PU_A__P0_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 28) & 0x10000000U)
#define WRPR_PIN_PU_A__P0_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x10000000U) | (((uint32_t)(src) <<\
                    28) & 0x10000000U)
#define WRPR_PIN_PU_A__P0_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 28) & ~0x10000000U)))
#define WRPR_PIN_PU_A__P0_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x10000000U) | ((uint32_t)(1) << 28)
#define WRPR_PIN_PU_A__P0_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x10000000U) | ((uint32_t)(0) << 28)
#define WRPR_PIN_PU_A__P0_PU__RESET_VALUE                           0x00000000U
/** @} */
#define WRPR_PIN_PU_A__TYPE                                            uint32_t
#define WRPR_PIN_PU_A__READ                                         0x11111111U
#define WRPR_PIN_PU_A__WRITE                                        0x11111111U
#define WRPR_PIN_PU_A__PRESERVED                                    0x00000000U
#define WRPR_PIN_PU_A__RESET_VALUE                                  0x00000000U

#endif /* __WRPR_PIN_PU_A_MACRO__ */

/** @} end of pin_pu_A */

/* macros for BlueprintGlobalNameSpace::WRPR_pin_pu_B */
/**
 * @defgroup at_apb_wrpr_regs_core_pin_pu_B pin_pu_B
 * @brief Contains register fields associated with pin_pu_B. definitions.
 * @{
 */
#ifndef __WRPR_PIN_PU_B_MACRO__
#define __WRPR_PIN_PU_B_MACRO__

/* macros for field p15_pu */
/**
 * @defgroup at_apb_wrpr_regs_core_p15_pu_field p15_pu_field
 * @brief macros for field p15_pu
 * @details pull-up enable for P15  0 = pull-up resistor not enabled  1 = pull-up resistor enabled
 * @{
 */
#define WRPR_PIN_PU_B__P15_PU__SHIFT                                          0
#define WRPR_PIN_PU_B__P15_PU__WIDTH                                          1
#define WRPR_PIN_PU_B__P15_PU__MASK                                 0x00000001U
#define WRPR_PIN_PU_B__P15_PU__READ(src)        ((uint32_t)(src) & 0x00000001U)
#define WRPR_PIN_PU_B__P15_PU__WRITE(src)       ((uint32_t)(src) & 0x00000001U)
#define WRPR_PIN_PU_B__P15_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define WRPR_PIN_PU_B__P15_PU__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define WRPR_PIN_PU_B__P15_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define WRPR_PIN_PU_B__P15_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define WRPR_PIN_PU_B__P15_PU__RESET_VALUE                          0x00000000U
/** @} */

/* macros for field p14_pu */
/**
 * @defgroup at_apb_wrpr_regs_core_p14_pu_field p14_pu_field
 * @brief macros for field p14_pu
 * @details pull-up enable for P14  0 = pull-up resistor not enabled  1 = pull-up resistor enabled
 * @{
 */
#define WRPR_PIN_PU_B__P14_PU__SHIFT                                          4
#define WRPR_PIN_PU_B__P14_PU__WIDTH                                          1
#define WRPR_PIN_PU_B__P14_PU__MASK                                 0x00000010U
#define WRPR_PIN_PU_B__P14_PU__READ(src) (((uint32_t)(src) & 0x00000010U) >> 4)
#define WRPR_PIN_PU_B__P14_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 4) & 0x00000010U)
#define WRPR_PIN_PU_B__P14_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | (((uint32_t)(src) <<\
                    4) & 0x00000010U)
#define WRPR_PIN_PU_B__P14_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 4) & ~0x00000010U)))
#define WRPR_PIN_PU_B__P14_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(1) << 4)
#define WRPR_PIN_PU_B__P14_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(0) << 4)
#define WRPR_PIN_PU_B__P14_PU__RESET_VALUE                          0x00000000U
/** @} */

/* macros for field p13_pu */
/**
 * @defgroup at_apb_wrpr_regs_core_p13_pu_field p13_pu_field
 * @brief macros for field p13_pu
 * @details pull-up enable for P13  0 = pull-up resistor not enabled  1 = pull-up resistor enabled
 * @{
 */
#define WRPR_PIN_PU_B__P13_PU__SHIFT                                          8
#define WRPR_PIN_PU_B__P13_PU__WIDTH                                          1
#define WRPR_PIN_PU_B__P13_PU__MASK                                 0x00000100U
#define WRPR_PIN_PU_B__P13_PU__READ(src) (((uint32_t)(src) & 0x00000100U) >> 8)
#define WRPR_PIN_PU_B__P13_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x00000100U)
#define WRPR_PIN_PU_B__P13_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000100U) | (((uint32_t)(src) <<\
                    8) & 0x00000100U)
#define WRPR_PIN_PU_B__P13_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x00000100U)))
#define WRPR_PIN_PU_B__P13_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000100U) | ((uint32_t)(1) << 8)
#define WRPR_PIN_PU_B__P13_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000100U) | ((uint32_t)(0) << 8)
#define WRPR_PIN_PU_B__P13_PU__RESET_VALUE                          0x00000000U
/** @} */

/* macros for field p12_pu */
/**
 * @defgroup at_apb_wrpr_regs_core_p12_pu_field p12_pu_field
 * @brief macros for field p12_pu
 * @details pull-up enable for P12  0 = pull-up resistor not enabled  1 = pull-up resistor enabled
 * @{
 */
#define WRPR_PIN_PU_B__P12_PU__SHIFT                                         12
#define WRPR_PIN_PU_B__P12_PU__WIDTH                                          1
#define WRPR_PIN_PU_B__P12_PU__MASK                                 0x00001000U
#define WRPR_PIN_PU_B__P12_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00001000U) >> 12)
#define WRPR_PIN_PU_B__P12_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 12) & 0x00001000U)
#define WRPR_PIN_PU_B__P12_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00001000U) | (((uint32_t)(src) <<\
                    12) & 0x00001000U)
#define WRPR_PIN_PU_B__P12_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 12) & ~0x00001000U)))
#define WRPR_PIN_PU_B__P12_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00001000U) | ((uint32_t)(1) << 12)
#define WRPR_PIN_PU_B__P12_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00001000U) | ((uint32_t)(0) << 12)
#define WRPR_PIN_PU_B__P12_PU__RESET_VALUE                          0x00000000U
/** @} */

/* macros for field p11_pu */
/**
 * @defgroup at_apb_wrpr_regs_core_p11_pu_field p11_pu_field
 * @brief macros for field p11_pu
 * @details pull-up enable for P11  0 = pull-up resistor not enabled  1 = pull-up resistor enabled
 * @{
 */
#define WRPR_PIN_PU_B__P11_PU__SHIFT                                         16
#define WRPR_PIN_PU_B__P11_PU__WIDTH                                          1
#define WRPR_PIN_PU_B__P11_PU__MASK                                 0x00010000U
#define WRPR_PIN_PU_B__P11_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00010000U) >> 16)
#define WRPR_PIN_PU_B__P11_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00010000U)
#define WRPR_PIN_PU_B__P11_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00010000U) | (((uint32_t)(src) <<\
                    16) & 0x00010000U)
#define WRPR_PIN_PU_B__P11_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00010000U)))
#define WRPR_PIN_PU_B__P11_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00010000U) | ((uint32_t)(1) << 16)
#define WRPR_PIN_PU_B__P11_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00010000U) | ((uint32_t)(0) << 16)
#define WRPR_PIN_PU_B__P11_PU__RESET_VALUE                          0x00000000U
/** @} */

/* macros for field p10_pu */
/**
 * @defgroup at_apb_wrpr_regs_core_p10_pu_field p10_pu_field
 * @brief macros for field p10_pu
 * @details pull-up enable for P10  0 = pull-up resistor not enabled  1 = pull-up resistor enabled
 * @{
 */
#define WRPR_PIN_PU_B__P10_PU__SHIFT                                         20
#define WRPR_PIN_PU_B__P10_PU__WIDTH                                          1
#define WRPR_PIN_PU_B__P10_PU__MASK                                 0x00100000U
#define WRPR_PIN_PU_B__P10_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00100000U) >> 20)
#define WRPR_PIN_PU_B__P10_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 20) & 0x00100000U)
#define WRPR_PIN_PU_B__P10_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00100000U) | (((uint32_t)(src) <<\
                    20) & 0x00100000U)
#define WRPR_PIN_PU_B__P10_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 20) & ~0x00100000U)))
#define WRPR_PIN_PU_B__P10_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00100000U) | ((uint32_t)(1) << 20)
#define WRPR_PIN_PU_B__P10_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00100000U) | ((uint32_t)(0) << 20)
#define WRPR_PIN_PU_B__P10_PU__RESET_VALUE                          0x00000000U
/** @} */

/* macros for field p9_pu */
/**
 * @defgroup at_apb_wrpr_regs_core_p9_pu_field p9_pu_field
 * @brief macros for field p9_pu
 * @details pull-up enable for P9  0 = pull-up resistor not enabled  1 = pull-up resistor enabled
 * @{
 */
#define WRPR_PIN_PU_B__P9_PU__SHIFT                                          24
#define WRPR_PIN_PU_B__P9_PU__WIDTH                                           1
#define WRPR_PIN_PU_B__P9_PU__MASK                                  0x01000000U
#define WRPR_PIN_PU_B__P9_PU__READ(src) (((uint32_t)(src) & 0x01000000U) >> 24)
#define WRPR_PIN_PU_B__P9_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0x01000000U)
#define WRPR_PIN_PU_B__P9_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | (((uint32_t)(src) <<\
                    24) & 0x01000000U)
#define WRPR_PIN_PU_B__P9_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x01000000U)))
#define WRPR_PIN_PU_B__P9_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(1) << 24)
#define WRPR_PIN_PU_B__P9_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(0) << 24)
#define WRPR_PIN_PU_B__P9_PU__RESET_VALUE                           0x00000000U
/** @} */

/* macros for field p8_pu */
/**
 * @defgroup at_apb_wrpr_regs_core_p8_pu_field p8_pu_field
 * @brief macros for field p8_pu
 * @details pull-up enable for P8  0 = pull-up resistor not enabled  1 = pull-up resistor enabled
 * @{
 */
#define WRPR_PIN_PU_B__P8_PU__SHIFT                                          28
#define WRPR_PIN_PU_B__P8_PU__WIDTH                                           1
#define WRPR_PIN_PU_B__P8_PU__MASK                                  0x10000000U
#define WRPR_PIN_PU_B__P8_PU__READ(src) (((uint32_t)(src) & 0x10000000U) >> 28)
#define WRPR_PIN_PU_B__P8_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 28) & 0x10000000U)
#define WRPR_PIN_PU_B__P8_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x10000000U) | (((uint32_t)(src) <<\
                    28) & 0x10000000U)
#define WRPR_PIN_PU_B__P8_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 28) & ~0x10000000U)))
#define WRPR_PIN_PU_B__P8_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x10000000U) | ((uint32_t)(1) << 28)
#define WRPR_PIN_PU_B__P8_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x10000000U) | ((uint32_t)(0) << 28)
#define WRPR_PIN_PU_B__P8_PU__RESET_VALUE                           0x00000000U
/** @} */
#define WRPR_PIN_PU_B__TYPE                                            uint32_t
#define WRPR_PIN_PU_B__READ                                         0x11111111U
#define WRPR_PIN_PU_B__WRITE                                        0x11111111U
#define WRPR_PIN_PU_B__PRESERVED                                    0x00000000U
#define WRPR_PIN_PU_B__RESET_VALUE                                  0x00000000U

#endif /* __WRPR_PIN_PU_B_MACRO__ */

/** @} end of pin_pu_B */

/* macros for BlueprintGlobalNameSpace::WRPR_pin_pu_C */
/**
 * @defgroup at_apb_wrpr_regs_core_pin_pu_C pin_pu_C
 * @brief Contains register fields associated with pin_pu_C. definitions.
 * @{
 */
#ifndef __WRPR_PIN_PU_C_MACRO__
#define __WRPR_PIN_PU_C_MACRO__

/* macros for field p23_pu */
/**
 * @defgroup at_apb_wrpr_regs_core_p23_pu_field p23_pu_field
 * @brief macros for field p23_pu
 * @details pull-up enable for P23  0 = pull-up resistor not enabled  1 = pull-up resistor enabled
 * @{
 */
#define WRPR_PIN_PU_C__P23_PU__SHIFT                                          0
#define WRPR_PIN_PU_C__P23_PU__WIDTH                                          1
#define WRPR_PIN_PU_C__P23_PU__MASK                                 0x00000001U
#define WRPR_PIN_PU_C__P23_PU__READ(src)        ((uint32_t)(src) & 0x00000001U)
#define WRPR_PIN_PU_C__P23_PU__WRITE(src)       ((uint32_t)(src) & 0x00000001U)
#define WRPR_PIN_PU_C__P23_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define WRPR_PIN_PU_C__P23_PU__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define WRPR_PIN_PU_C__P23_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define WRPR_PIN_PU_C__P23_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define WRPR_PIN_PU_C__P23_PU__RESET_VALUE                          0x00000000U
/** @} */

/* macros for field p22_pu */
/**
 * @defgroup at_apb_wrpr_regs_core_p22_pu_field p22_pu_field
 * @brief macros for field p22_pu
 * @details pull-up enable for P22  0 = pull-up resistor not enabled  1 = pull-up resistor enabled
 * @{
 */
#define WRPR_PIN_PU_C__P22_PU__SHIFT                                          4
#define WRPR_PIN_PU_C__P22_PU__WIDTH                                          1
#define WRPR_PIN_PU_C__P22_PU__MASK                                 0x00000010U
#define WRPR_PIN_PU_C__P22_PU__READ(src) (((uint32_t)(src) & 0x00000010U) >> 4)
#define WRPR_PIN_PU_C__P22_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 4) & 0x00000010U)
#define WRPR_PIN_PU_C__P22_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | (((uint32_t)(src) <<\
                    4) & 0x00000010U)
#define WRPR_PIN_PU_C__P22_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 4) & ~0x00000010U)))
#define WRPR_PIN_PU_C__P22_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(1) << 4)
#define WRPR_PIN_PU_C__P22_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(0) << 4)
#define WRPR_PIN_PU_C__P22_PU__RESET_VALUE                          0x00000000U
/** @} */

/* macros for field p21_pu */
/**
 * @defgroup at_apb_wrpr_regs_core_p21_pu_field p21_pu_field
 * @brief macros for field p21_pu
 * @details pull-up enable for P21  0 = pull-up resistor not enabled  1 = pull-up resistor enabled
 * @{
 */
#define WRPR_PIN_PU_C__P21_PU__SHIFT                                          8
#define WRPR_PIN_PU_C__P21_PU__WIDTH                                          1
#define WRPR_PIN_PU_C__P21_PU__MASK                                 0x00000100U
#define WRPR_PIN_PU_C__P21_PU__READ(src) (((uint32_t)(src) & 0x00000100U) >> 8)
#define WRPR_PIN_PU_C__P21_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x00000100U)
#define WRPR_PIN_PU_C__P21_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000100U) | (((uint32_t)(src) <<\
                    8) & 0x00000100U)
#define WRPR_PIN_PU_C__P21_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x00000100U)))
#define WRPR_PIN_PU_C__P21_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000100U) | ((uint32_t)(1) << 8)
#define WRPR_PIN_PU_C__P21_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000100U) | ((uint32_t)(0) << 8)
#define WRPR_PIN_PU_C__P21_PU__RESET_VALUE                          0x00000000U
/** @} */

/* macros for field p20_pu */
/**
 * @defgroup at_apb_wrpr_regs_core_p20_pu_field p20_pu_field
 * @brief macros for field p20_pu
 * @details pull-up enable for P20  0 = pull-up resistor not enabled  1 = pull-up resistor enabled
 * @{
 */
#define WRPR_PIN_PU_C__P20_PU__SHIFT                                         12
#define WRPR_PIN_PU_C__P20_PU__WIDTH                                          1
#define WRPR_PIN_PU_C__P20_PU__MASK                                 0x00001000U
#define WRPR_PIN_PU_C__P20_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00001000U) >> 12)
#define WRPR_PIN_PU_C__P20_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 12) & 0x00001000U)
#define WRPR_PIN_PU_C__P20_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00001000U) | (((uint32_t)(src) <<\
                    12) & 0x00001000U)
#define WRPR_PIN_PU_C__P20_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 12) & ~0x00001000U)))
#define WRPR_PIN_PU_C__P20_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00001000U) | ((uint32_t)(1) << 12)
#define WRPR_PIN_PU_C__P20_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00001000U) | ((uint32_t)(0) << 12)
#define WRPR_PIN_PU_C__P20_PU__RESET_VALUE                          0x00000000U
/** @} */

/* macros for field p19_pu */
/**
 * @defgroup at_apb_wrpr_regs_core_p19_pu_field p19_pu_field
 * @brief macros for field p19_pu
 * @details pull-up enable for P19  0 = pull-up resistor not enabled  1 = pull-up resistor enabled
 * @{
 */
#define WRPR_PIN_PU_C__P19_PU__SHIFT                                         16
#define WRPR_PIN_PU_C__P19_PU__WIDTH                                          1
#define WRPR_PIN_PU_C__P19_PU__MASK                                 0x00010000U
#define WRPR_PIN_PU_C__P19_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00010000U) >> 16)
#define WRPR_PIN_PU_C__P19_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00010000U)
#define WRPR_PIN_PU_C__P19_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00010000U) | (((uint32_t)(src) <<\
                    16) & 0x00010000U)
#define WRPR_PIN_PU_C__P19_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00010000U)))
#define WRPR_PIN_PU_C__P19_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00010000U) | ((uint32_t)(1) << 16)
#define WRPR_PIN_PU_C__P19_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00010000U) | ((uint32_t)(0) << 16)
#define WRPR_PIN_PU_C__P19_PU__RESET_VALUE                          0x00000000U
/** @} */

/* macros for field p18_pu */
/**
 * @defgroup at_apb_wrpr_regs_core_p18_pu_field p18_pu_field
 * @brief macros for field p18_pu
 * @details pull-up enable for P18  0 = pull-up resistor not enabled  1 = pull-up resistor enabled
 * @{
 */
#define WRPR_PIN_PU_C__P18_PU__SHIFT                                         20
#define WRPR_PIN_PU_C__P18_PU__WIDTH                                          1
#define WRPR_PIN_PU_C__P18_PU__MASK                                 0x00100000U
#define WRPR_PIN_PU_C__P18_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00100000U) >> 20)
#define WRPR_PIN_PU_C__P18_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 20) & 0x00100000U)
#define WRPR_PIN_PU_C__P18_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00100000U) | (((uint32_t)(src) <<\
                    20) & 0x00100000U)
#define WRPR_PIN_PU_C__P18_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 20) & ~0x00100000U)))
#define WRPR_PIN_PU_C__P18_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00100000U) | ((uint32_t)(1) << 20)
#define WRPR_PIN_PU_C__P18_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00100000U) | ((uint32_t)(0) << 20)
#define WRPR_PIN_PU_C__P18_PU__RESET_VALUE                          0x00000000U
/** @} */

/* macros for field p17_pu */
/**
 * @defgroup at_apb_wrpr_regs_core_p17_pu_field p17_pu_field
 * @brief macros for field p17_pu
 * @details pull-up enable for P17  0 = pull-up resistor not enabled  1 = pull-up resistor enabled
 * @{
 */
#define WRPR_PIN_PU_C__P17_PU__SHIFT                                         24
#define WRPR_PIN_PU_C__P17_PU__WIDTH                                          1
#define WRPR_PIN_PU_C__P17_PU__MASK                                 0x01000000U
#define WRPR_PIN_PU_C__P17_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x01000000U) >> 24)
#define WRPR_PIN_PU_C__P17_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0x01000000U)
#define WRPR_PIN_PU_C__P17_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | (((uint32_t)(src) <<\
                    24) & 0x01000000U)
#define WRPR_PIN_PU_C__P17_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x01000000U)))
#define WRPR_PIN_PU_C__P17_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(1) << 24)
#define WRPR_PIN_PU_C__P17_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(0) << 24)
#define WRPR_PIN_PU_C__P17_PU__RESET_VALUE                          0x00000000U
/** @} */

/* macros for field p16_pu */
/**
 * @defgroup at_apb_wrpr_regs_core_p16_pu_field p16_pu_field
 * @brief macros for field p16_pu
 * @details pull-up enable for P16  0 = pull-up resistor not enabled  1 = pull-up resistor enabled
 * @{
 */
#define WRPR_PIN_PU_C__P16_PU__SHIFT                                         28
#define WRPR_PIN_PU_C__P16_PU__WIDTH                                          1
#define WRPR_PIN_PU_C__P16_PU__MASK                                 0x10000000U
#define WRPR_PIN_PU_C__P16_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x10000000U) >> 28)
#define WRPR_PIN_PU_C__P16_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 28) & 0x10000000U)
#define WRPR_PIN_PU_C__P16_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x10000000U) | (((uint32_t)(src) <<\
                    28) & 0x10000000U)
#define WRPR_PIN_PU_C__P16_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 28) & ~0x10000000U)))
#define WRPR_PIN_PU_C__P16_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x10000000U) | ((uint32_t)(1) << 28)
#define WRPR_PIN_PU_C__P16_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x10000000U) | ((uint32_t)(0) << 28)
#define WRPR_PIN_PU_C__P16_PU__RESET_VALUE                          0x00000000U
/** @} */
#define WRPR_PIN_PU_C__TYPE                                            uint32_t
#define WRPR_PIN_PU_C__READ                                         0x11111111U
#define WRPR_PIN_PU_C__WRITE                                        0x11111111U
#define WRPR_PIN_PU_C__PRESERVED                                    0x00000000U
#define WRPR_PIN_PU_C__RESET_VALUE                                  0x00000000U

#endif /* __WRPR_PIN_PU_C_MACRO__ */

/** @} end of pin_pu_C */

/* macros for BlueprintGlobalNameSpace::WRPR_pin_pu_D */
/**
 * @defgroup at_apb_wrpr_regs_core_pin_pu_D pin_pu_D
 * @brief Contains register fields associated with pin_pu_D. definitions.
 * @{
 */
#ifndef __WRPR_PIN_PU_D_MACRO__
#define __WRPR_PIN_PU_D_MACRO__

/* macros for field p31_pu */
/**
 * @defgroup at_apb_wrpr_regs_core_p31_pu_field p31_pu_field
 * @brief macros for field p31_pu
 * @details pull-up enable for P31  0 = pull-up resistor not enabled  1 = pull-up resistor enabled
 * @{
 */
#define WRPR_PIN_PU_D__P31_PU__SHIFT                                          0
#define WRPR_PIN_PU_D__P31_PU__WIDTH                                          1
#define WRPR_PIN_PU_D__P31_PU__MASK                                 0x00000001U
#define WRPR_PIN_PU_D__P31_PU__READ(src)        ((uint32_t)(src) & 0x00000001U)
#define WRPR_PIN_PU_D__P31_PU__WRITE(src)       ((uint32_t)(src) & 0x00000001U)
#define WRPR_PIN_PU_D__P31_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define WRPR_PIN_PU_D__P31_PU__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define WRPR_PIN_PU_D__P31_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define WRPR_PIN_PU_D__P31_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define WRPR_PIN_PU_D__P31_PU__RESET_VALUE                          0x00000000U
/** @} */

/* macros for field p30_pu */
/**
 * @defgroup at_apb_wrpr_regs_core_p30_pu_field p30_pu_field
 * @brief macros for field p30_pu
 * @details pull-up enable for P30  0 = pull-up resistor not enabled  1 = pull-up resistor enabled
 * @{
 */
#define WRPR_PIN_PU_D__P30_PU__SHIFT                                          4
#define WRPR_PIN_PU_D__P30_PU__WIDTH                                          1
#define WRPR_PIN_PU_D__P30_PU__MASK                                 0x00000010U
#define WRPR_PIN_PU_D__P30_PU__READ(src) (((uint32_t)(src) & 0x00000010U) >> 4)
#define WRPR_PIN_PU_D__P30_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 4) & 0x00000010U)
#define WRPR_PIN_PU_D__P30_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | (((uint32_t)(src) <<\
                    4) & 0x00000010U)
#define WRPR_PIN_PU_D__P30_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 4) & ~0x00000010U)))
#define WRPR_PIN_PU_D__P30_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(1) << 4)
#define WRPR_PIN_PU_D__P30_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(0) << 4)
#define WRPR_PIN_PU_D__P30_PU__RESET_VALUE                          0x00000000U
/** @} */

/* macros for field p29_pu */
/**
 * @defgroup at_apb_wrpr_regs_core_p29_pu_field p29_pu_field
 * @brief macros for field p29_pu
 * @details pull-up enable for P29  0 = pull-up resistor not enabled  1 = pull-up resistor enabled
 * @{
 */
#define WRPR_PIN_PU_D__P29_PU__SHIFT                                          8
#define WRPR_PIN_PU_D__P29_PU__WIDTH                                          1
#define WRPR_PIN_PU_D__P29_PU__MASK                                 0x00000100U
#define WRPR_PIN_PU_D__P29_PU__READ(src) (((uint32_t)(src) & 0x00000100U) >> 8)
#define WRPR_PIN_PU_D__P29_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 8) & 0x00000100U)
#define WRPR_PIN_PU_D__P29_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000100U) | (((uint32_t)(src) <<\
                    8) & 0x00000100U)
#define WRPR_PIN_PU_D__P29_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 8) & ~0x00000100U)))
#define WRPR_PIN_PU_D__P29_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000100U) | ((uint32_t)(1) << 8)
#define WRPR_PIN_PU_D__P29_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000100U) | ((uint32_t)(0) << 8)
#define WRPR_PIN_PU_D__P29_PU__RESET_VALUE                          0x00000000U
/** @} */

/* macros for field p28_pu */
/**
 * @defgroup at_apb_wrpr_regs_core_p28_pu_field p28_pu_field
 * @brief macros for field p28_pu
 * @details pull-up enable for P28  0 = pull-up resistor not enabled  1 = pull-up resistor enabled
 * @{
 */
#define WRPR_PIN_PU_D__P28_PU__SHIFT                                         12
#define WRPR_PIN_PU_D__P28_PU__WIDTH                                          1
#define WRPR_PIN_PU_D__P28_PU__MASK                                 0x00001000U
#define WRPR_PIN_PU_D__P28_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00001000U) >> 12)
#define WRPR_PIN_PU_D__P28_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 12) & 0x00001000U)
#define WRPR_PIN_PU_D__P28_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00001000U) | (((uint32_t)(src) <<\
                    12) & 0x00001000U)
#define WRPR_PIN_PU_D__P28_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 12) & ~0x00001000U)))
#define WRPR_PIN_PU_D__P28_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00001000U) | ((uint32_t)(1) << 12)
#define WRPR_PIN_PU_D__P28_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00001000U) | ((uint32_t)(0) << 12)
#define WRPR_PIN_PU_D__P28_PU__RESET_VALUE                          0x00000000U
/** @} */

/* macros for field p27_pu */
/**
 * @defgroup at_apb_wrpr_regs_core_p27_pu_field p27_pu_field
 * @brief macros for field p27_pu
 * @details pull-up enable for P27  0 = pull-up resistor not enabled  1 = pull-up resistor enabled
 * @{
 */
#define WRPR_PIN_PU_D__P27_PU__SHIFT                                         16
#define WRPR_PIN_PU_D__P27_PU__WIDTH                                          1
#define WRPR_PIN_PU_D__P27_PU__MASK                                 0x00010000U
#define WRPR_PIN_PU_D__P27_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00010000U) >> 16)
#define WRPR_PIN_PU_D__P27_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 16) & 0x00010000U)
#define WRPR_PIN_PU_D__P27_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00010000U) | (((uint32_t)(src) <<\
                    16) & 0x00010000U)
#define WRPR_PIN_PU_D__P27_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 16) & ~0x00010000U)))
#define WRPR_PIN_PU_D__P27_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00010000U) | ((uint32_t)(1) << 16)
#define WRPR_PIN_PU_D__P27_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00010000U) | ((uint32_t)(0) << 16)
#define WRPR_PIN_PU_D__P27_PU__RESET_VALUE                          0x00000000U
/** @} */

/* macros for field p26_pu */
/**
 * @defgroup at_apb_wrpr_regs_core_p26_pu_field p26_pu_field
 * @brief macros for field p26_pu
 * @details pull-up enable for P26  0 = pull-up resistor not enabled  1 = pull-up resistor enabled
 * @{
 */
#define WRPR_PIN_PU_D__P26_PU__SHIFT                                         20
#define WRPR_PIN_PU_D__P26_PU__WIDTH                                          1
#define WRPR_PIN_PU_D__P26_PU__MASK                                 0x00100000U
#define WRPR_PIN_PU_D__P26_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00100000U) >> 20)
#define WRPR_PIN_PU_D__P26_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 20) & 0x00100000U)
#define WRPR_PIN_PU_D__P26_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00100000U) | (((uint32_t)(src) <<\
                    20) & 0x00100000U)
#define WRPR_PIN_PU_D__P26_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 20) & ~0x00100000U)))
#define WRPR_PIN_PU_D__P26_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00100000U) | ((uint32_t)(1) << 20)
#define WRPR_PIN_PU_D__P26_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00100000U) | ((uint32_t)(0) << 20)
#define WRPR_PIN_PU_D__P26_PU__RESET_VALUE                          0x00000000U
/** @} */

/* macros for field p25_pu */
/**
 * @defgroup at_apb_wrpr_regs_core_p25_pu_field p25_pu_field
 * @brief macros for field p25_pu
 * @details pull-up enable for P25  0 = pull-up resistor not enabled  1 = pull-up resistor enabled
 * @{
 */
#define WRPR_PIN_PU_D__P25_PU__SHIFT                                         24
#define WRPR_PIN_PU_D__P25_PU__WIDTH                                          1
#define WRPR_PIN_PU_D__P25_PU__MASK                                 0x01000000U
#define WRPR_PIN_PU_D__P25_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x01000000U) >> 24)
#define WRPR_PIN_PU_D__P25_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0x01000000U)
#define WRPR_PIN_PU_D__P25_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | (((uint32_t)(src) <<\
                    24) & 0x01000000U)
#define WRPR_PIN_PU_D__P25_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x01000000U)))
#define WRPR_PIN_PU_D__P25_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(1) << 24)
#define WRPR_PIN_PU_D__P25_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(0) << 24)
#define WRPR_PIN_PU_D__P25_PU__RESET_VALUE                          0x00000000U
/** @} */

/* macros for field p24_pu */
/**
 * @defgroup at_apb_wrpr_regs_core_p24_pu_field p24_pu_field
 * @brief macros for field p24_pu
 * @details pull-up enable for P24  0 = pull-up resistor not enabled  1 = pull-up resistor enabled
 * @{
 */
#define WRPR_PIN_PU_D__P24_PU__SHIFT                                         28
#define WRPR_PIN_PU_D__P24_PU__WIDTH                                          1
#define WRPR_PIN_PU_D__P24_PU__MASK                                 0x10000000U
#define WRPR_PIN_PU_D__P24_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x10000000U) >> 28)
#define WRPR_PIN_PU_D__P24_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 28) & 0x10000000U)
#define WRPR_PIN_PU_D__P24_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x10000000U) | (((uint32_t)(src) <<\
                    28) & 0x10000000U)
#define WRPR_PIN_PU_D__P24_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 28) & ~0x10000000U)))
#define WRPR_PIN_PU_D__P24_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x10000000U) | ((uint32_t)(1) << 28)
#define WRPR_PIN_PU_D__P24_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x10000000U) | ((uint32_t)(0) << 28)
#define WRPR_PIN_PU_D__P24_PU__RESET_VALUE                          0x00000000U
/** @} */
#define WRPR_PIN_PU_D__TYPE                                            uint32_t
#define WRPR_PIN_PU_D__READ                                         0x11111111U
#define WRPR_PIN_PU_D__WRITE                                        0x11111111U
#define WRPR_PIN_PU_D__PRESERVED                                    0x00000000U
#define WRPR_PIN_PU_D__RESET_VALUE                                  0x00000000U

#endif /* __WRPR_PIN_PU_D_MACRO__ */

/** @} end of pin_pu_D */

/* macros for BlueprintGlobalNameSpace::WRPR_pin_pu_E */
/**
 * @defgroup at_apb_wrpr_regs_core_pin_pu_E pin_pu_E
 * @brief Contains register fields associated with pin_pu_E. definitions.
 * @{
 */
#ifndef __WRPR_PIN_PU_E_MACRO__
#define __WRPR_PIN_PU_E_MACRO__

/* macros for field p33_pu */
/**
 * @defgroup at_apb_wrpr_regs_core_p33_pu_field p33_pu_field
 * @brief macros for field p33_pu
 * @details pull-up enable for P33  0 = pull-up resistor not enabled  1 = pull-up resistor enabled
 * @{
 */
#define WRPR_PIN_PU_E__P33_PU__SHIFT                                         24
#define WRPR_PIN_PU_E__P33_PU__WIDTH                                          1
#define WRPR_PIN_PU_E__P33_PU__MASK                                 0x01000000U
#define WRPR_PIN_PU_E__P33_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x01000000U) >> 24)
#define WRPR_PIN_PU_E__P33_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 24) & 0x01000000U)
#define WRPR_PIN_PU_E__P33_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | (((uint32_t)(src) <<\
                    24) & 0x01000000U)
#define WRPR_PIN_PU_E__P33_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 24) & ~0x01000000U)))
#define WRPR_PIN_PU_E__P33_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(1) << 24)
#define WRPR_PIN_PU_E__P33_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(0) << 24)
#define WRPR_PIN_PU_E__P33_PU__RESET_VALUE                          0x00000000U
/** @} */

/* macros for field p32_pu */
/**
 * @defgroup at_apb_wrpr_regs_core_p32_pu_field p32_pu_field
 * @brief macros for field p32_pu
 * @details pull-up enable for P32  0 = pull-up resistor not enabled  1 = pull-up resistor enabled
 * @{
 */
#define WRPR_PIN_PU_E__P32_PU__SHIFT                                         28
#define WRPR_PIN_PU_E__P32_PU__WIDTH                                          1
#define WRPR_PIN_PU_E__P32_PU__MASK                                 0x10000000U
#define WRPR_PIN_PU_E__P32_PU__READ(src) \
                    (((uint32_t)(src)\
                    & 0x10000000U) >> 28)
#define WRPR_PIN_PU_E__P32_PU__WRITE(src) \
                    (((uint32_t)(src)\
                    << 28) & 0x10000000U)
#define WRPR_PIN_PU_E__P32_PU__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x10000000U) | (((uint32_t)(src) <<\
                    28) & 0x10000000U)
#define WRPR_PIN_PU_E__P32_PU__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 28) & ~0x10000000U)))
#define WRPR_PIN_PU_E__P32_PU__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x10000000U) | ((uint32_t)(1) << 28)
#define WRPR_PIN_PU_E__P32_PU__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x10000000U) | ((uint32_t)(0) << 28)
#define WRPR_PIN_PU_E__P32_PU__RESET_VALUE                          0x00000000U
/** @} */
#define WRPR_PIN_PU_E__TYPE                                            uint32_t
#define WRPR_PIN_PU_E__READ                                         0x11000000U
#define WRPR_PIN_PU_E__WRITE                                        0x11000000U
#define WRPR_PIN_PU_E__PRESERVED                                    0x00000000U
#define WRPR_PIN_PU_E__RESET_VALUE                                  0x00000000U

#endif /* __WRPR_PIN_PU_E_MACRO__ */

/** @} end of pin_pu_E */

/* macros for BlueprintGlobalNameSpace::WRPR_intrpt_cfg_0 */
/**
 * @defgroup at_apb_wrpr_regs_core_intrpt_cfg_0 intrpt_cfg_0
 * @brief Contains register fields associated with intrpt_cfg_0. definitions.
 * @{
 */
#ifndef __WRPR_INTRPT_CFG_0_MACRO__
#define __WRPR_INTRPT_CFG_0_MACRO__

/* macros for field intrpt0_mask */
/**
 * @defgroup at_apb_wrpr_regs_core_intrpt0_mask_field intrpt0_mask_field
 * @brief macros for field intrpt0_mask
 * @details interrupt mask for interrupt[0] going into Cortex-M0
 * @{
 */
#define WRPR_INTRPT_CFG_0__INTRPT0_MASK__SHIFT                                0
#define WRPR_INTRPT_CFG_0__INTRPT0_MASK__WIDTH                               32
#define WRPR_INTRPT_CFG_0__INTRPT0_MASK__MASK                       0xffffffffU
#define WRPR_INTRPT_CFG_0__INTRPT0_MASK__READ(src) \
                    ((uint32_t)(src)\
                    & 0xffffffffU)
#define WRPR_INTRPT_CFG_0__INTRPT0_MASK__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0xffffffffU)
#define WRPR_INTRPT_CFG_0__INTRPT0_MASK__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffffffffU) | ((uint32_t)(src) &\
                    0xffffffffU)
#define WRPR_INTRPT_CFG_0__INTRPT0_MASK__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0xffffffffU)))
#define WRPR_INTRPT_CFG_0__INTRPT0_MASK__RESET_VALUE                0x00000001U
/** @} */
#define WRPR_INTRPT_CFG_0__TYPE                                        uint32_t
#define WRPR_INTRPT_CFG_0__READ                                     0xffffffffU
#define WRPR_INTRPT_CFG_0__WRITE                                    0xffffffffU
#define WRPR_INTRPT_CFG_0__PRESERVED                                0x00000000U
#define WRPR_INTRPT_CFG_0__RESET_VALUE                              0x00000001U

#endif /* __WRPR_INTRPT_CFG_0_MACRO__ */

/** @} end of intrpt_cfg_0 */

/* macros for BlueprintGlobalNameSpace::WRPR_intrpt_cfg_1 */
/**
 * @defgroup at_apb_wrpr_regs_core_intrpt_cfg_1 intrpt_cfg_1
 * @brief Contains register fields associated with intrpt_cfg_1. definitions.
 * @{
 */
#ifndef __WRPR_INTRPT_CFG_1_MACRO__
#define __WRPR_INTRPT_CFG_1_MACRO__

/* macros for field intrpt1_mask */
/**
 * @defgroup at_apb_wrpr_regs_core_intrpt1_mask_field intrpt1_mask_field
 * @brief macros for field intrpt1_mask
 * @details interrupt mask for interrupt[1] going into Cortex-M0
 * @{
 */
#define WRPR_INTRPT_CFG_1__INTRPT1_MASK__SHIFT                                0
#define WRPR_INTRPT_CFG_1__INTRPT1_MASK__WIDTH                               32
#define WRPR_INTRPT_CFG_1__INTRPT1_MASK__MASK                       0xffffffffU
#define WRPR_INTRPT_CFG_1__INTRPT1_MASK__READ(src) \
                    ((uint32_t)(src)\
                    & 0xffffffffU)
#define WRPR_INTRPT_CFG_1__INTRPT1_MASK__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0xffffffffU)
#define WRPR_INTRPT_CFG_1__INTRPT1_MASK__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffffffffU) | ((uint32_t)(src) &\
                    0xffffffffU)
#define WRPR_INTRPT_CFG_1__INTRPT1_MASK__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0xffffffffU)))
#define WRPR_INTRPT_CFG_1__INTRPT1_MASK__RESET_VALUE                0x00000002U
/** @} */
#define WRPR_INTRPT_CFG_1__TYPE                                        uint32_t
#define WRPR_INTRPT_CFG_1__READ                                     0xffffffffU
#define WRPR_INTRPT_CFG_1__WRITE                                    0xffffffffU
#define WRPR_INTRPT_CFG_1__PRESERVED                                0x00000000U
#define WRPR_INTRPT_CFG_1__RESET_VALUE                              0x00000002U

#endif /* __WRPR_INTRPT_CFG_1_MACRO__ */

/** @} end of intrpt_cfg_1 */

/* macros for BlueprintGlobalNameSpace::WRPR_intrpt_cfg_2 */
/**
 * @defgroup at_apb_wrpr_regs_core_intrpt_cfg_2 intrpt_cfg_2
 * @brief Contains register fields associated with intrpt_cfg_2. definitions.
 * @{
 */
#ifndef __WRPR_INTRPT_CFG_2_MACRO__
#define __WRPR_INTRPT_CFG_2_MACRO__

/* macros for field intrpt2_mask */
/**
 * @defgroup at_apb_wrpr_regs_core_intrpt2_mask_field intrpt2_mask_field
 * @brief macros for field intrpt2_mask
 * @details interrupt mask for interrupt[2] going into Cortex-M0
 * @{
 */
#define WRPR_INTRPT_CFG_2__INTRPT2_MASK__SHIFT                                0
#define WRPR_INTRPT_CFG_2__INTRPT2_MASK__WIDTH                               32
#define WRPR_INTRPT_CFG_2__INTRPT2_MASK__MASK                       0xffffffffU
#define WRPR_INTRPT_CFG_2__INTRPT2_MASK__READ(src) \
                    ((uint32_t)(src)\
                    & 0xffffffffU)
#define WRPR_INTRPT_CFG_2__INTRPT2_MASK__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0xffffffffU)
#define WRPR_INTRPT_CFG_2__INTRPT2_MASK__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffffffffU) | ((uint32_t)(src) &\
                    0xffffffffU)
#define WRPR_INTRPT_CFG_2__INTRPT2_MASK__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0xffffffffU)))
#define WRPR_INTRPT_CFG_2__INTRPT2_MASK__RESET_VALUE                0x00000004U
/** @} */
#define WRPR_INTRPT_CFG_2__TYPE                                        uint32_t
#define WRPR_INTRPT_CFG_2__READ                                     0xffffffffU
#define WRPR_INTRPT_CFG_2__WRITE                                    0xffffffffU
#define WRPR_INTRPT_CFG_2__PRESERVED                                0x00000000U
#define WRPR_INTRPT_CFG_2__RESET_VALUE                              0x00000004U

#endif /* __WRPR_INTRPT_CFG_2_MACRO__ */

/** @} end of intrpt_cfg_2 */

/* macros for BlueprintGlobalNameSpace::WRPR_intrpt_cfg_3 */
/**
 * @defgroup at_apb_wrpr_regs_core_intrpt_cfg_3 intrpt_cfg_3
 * @brief Contains register fields associated with intrpt_cfg_3. definitions.
 * @{
 */
#ifndef __WRPR_INTRPT_CFG_3_MACRO__
#define __WRPR_INTRPT_CFG_3_MACRO__

/* macros for field intrpt3_mask */
/**
 * @defgroup at_apb_wrpr_regs_core_intrpt3_mask_field intrpt3_mask_field
 * @brief macros for field intrpt3_mask
 * @details interrupt mask for interrupt[3] going into Cortex-M0
 * @{
 */
#define WRPR_INTRPT_CFG_3__INTRPT3_MASK__SHIFT                                0
#define WRPR_INTRPT_CFG_3__INTRPT3_MASK__WIDTH                               32
#define WRPR_INTRPT_CFG_3__INTRPT3_MASK__MASK                       0xffffffffU
#define WRPR_INTRPT_CFG_3__INTRPT3_MASK__READ(src) \
                    ((uint32_t)(src)\
                    & 0xffffffffU)
#define WRPR_INTRPT_CFG_3__INTRPT3_MASK__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0xffffffffU)
#define WRPR_INTRPT_CFG_3__INTRPT3_MASK__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffffffffU) | ((uint32_t)(src) &\
                    0xffffffffU)
#define WRPR_INTRPT_CFG_3__INTRPT3_MASK__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0xffffffffU)))
#define WRPR_INTRPT_CFG_3__INTRPT3_MASK__RESET_VALUE                0x00000008U
/** @} */
#define WRPR_INTRPT_CFG_3__TYPE                                        uint32_t
#define WRPR_INTRPT_CFG_3__READ                                     0xffffffffU
#define WRPR_INTRPT_CFG_3__WRITE                                    0xffffffffU
#define WRPR_INTRPT_CFG_3__PRESERVED                                0x00000000U
#define WRPR_INTRPT_CFG_3__RESET_VALUE                              0x00000008U

#endif /* __WRPR_INTRPT_CFG_3_MACRO__ */

/** @} end of intrpt_cfg_3 */

/* macros for BlueprintGlobalNameSpace::WRPR_intrpt_cfg_4 */
/**
 * @defgroup at_apb_wrpr_regs_core_intrpt_cfg_4 intrpt_cfg_4
 * @brief Contains register fields associated with intrpt_cfg_4. definitions.
 * @{
 */
#ifndef __WRPR_INTRPT_CFG_4_MACRO__
#define __WRPR_INTRPT_CFG_4_MACRO__

/* macros for field intrpt4_mask */
/**
 * @defgroup at_apb_wrpr_regs_core_intrpt4_mask_field intrpt4_mask_field
 * @brief macros for field intrpt4_mask
 * @details interrupt mask for interrupt[4] going into Cortex-M0
 * @{
 */
#define WRPR_INTRPT_CFG_4__INTRPT4_MASK__SHIFT                                0
#define WRPR_INTRPT_CFG_4__INTRPT4_MASK__WIDTH                               32
#define WRPR_INTRPT_CFG_4__INTRPT4_MASK__MASK                       0xffffffffU
#define WRPR_INTRPT_CFG_4__INTRPT4_MASK__READ(src) \
                    ((uint32_t)(src)\
                    & 0xffffffffU)
#define WRPR_INTRPT_CFG_4__INTRPT4_MASK__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0xffffffffU)
#define WRPR_INTRPT_CFG_4__INTRPT4_MASK__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffffffffU) | ((uint32_t)(src) &\
                    0xffffffffU)
#define WRPR_INTRPT_CFG_4__INTRPT4_MASK__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0xffffffffU)))
#define WRPR_INTRPT_CFG_4__INTRPT4_MASK__RESET_VALUE                0x00002000U
/** @} */
#define WRPR_INTRPT_CFG_4__TYPE                                        uint32_t
#define WRPR_INTRPT_CFG_4__READ                                     0xffffffffU
#define WRPR_INTRPT_CFG_4__WRITE                                    0xffffffffU
#define WRPR_INTRPT_CFG_4__PRESERVED                                0x00000000U
#define WRPR_INTRPT_CFG_4__RESET_VALUE                              0x00002000U

#endif /* __WRPR_INTRPT_CFG_4_MACRO__ */

/** @} end of intrpt_cfg_4 */

/* macros for BlueprintGlobalNameSpace::WRPR_intrpt_cfg_5 */
/**
 * @defgroup at_apb_wrpr_regs_core_intrpt_cfg_5 intrpt_cfg_5
 * @brief Contains register fields associated with intrpt_cfg_5. definitions.
 * @{
 */
#ifndef __WRPR_INTRPT_CFG_5_MACRO__
#define __WRPR_INTRPT_CFG_5_MACRO__

/* macros for field intrpt5_mask */
/**
 * @defgroup at_apb_wrpr_regs_core_intrpt5_mask_field intrpt5_mask_field
 * @brief macros for field intrpt5_mask
 * @details interrupt mask for interrupt[5] going into Cortex-M0
 * @{
 */
#define WRPR_INTRPT_CFG_5__INTRPT5_MASK__SHIFT                                0
#define WRPR_INTRPT_CFG_5__INTRPT5_MASK__WIDTH                               32
#define WRPR_INTRPT_CFG_5__INTRPT5_MASK__MASK                       0xffffffffU
#define WRPR_INTRPT_CFG_5__INTRPT5_MASK__READ(src) \
                    ((uint32_t)(src)\
                    & 0xffffffffU)
#define WRPR_INTRPT_CFG_5__INTRPT5_MASK__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0xffffffffU)
#define WRPR_INTRPT_CFG_5__INTRPT5_MASK__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffffffffU) | ((uint32_t)(src) &\
                    0xffffffffU)
#define WRPR_INTRPT_CFG_5__INTRPT5_MASK__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0xffffffffU)))
#define WRPR_INTRPT_CFG_5__INTRPT5_MASK__RESET_VALUE                0x00000000U
/** @} */
#define WRPR_INTRPT_CFG_5__TYPE                                        uint32_t
#define WRPR_INTRPT_CFG_5__READ                                     0xffffffffU
#define WRPR_INTRPT_CFG_5__WRITE                                    0xffffffffU
#define WRPR_INTRPT_CFG_5__PRESERVED                                0x00000000U
#define WRPR_INTRPT_CFG_5__RESET_VALUE                              0x00000000U

#endif /* __WRPR_INTRPT_CFG_5_MACRO__ */

/** @} end of intrpt_cfg_5 */

/* macros for BlueprintGlobalNameSpace::WRPR_intrpt_cfg_6 */
/**
 * @defgroup at_apb_wrpr_regs_core_intrpt_cfg_6 intrpt_cfg_6
 * @brief Contains register fields associated with intrpt_cfg_6. definitions.
 * @{
 */
#ifndef __WRPR_INTRPT_CFG_6_MACRO__
#define __WRPR_INTRPT_CFG_6_MACRO__

/* macros for field intrpt6_mask */
/**
 * @defgroup at_apb_wrpr_regs_core_intrpt6_mask_field intrpt6_mask_field
 * @brief macros for field intrpt6_mask
 * @details interrupt mask for interrupt[6] going into Cortex-M0
 * @{
 */
#define WRPR_INTRPT_CFG_6__INTRPT6_MASK__SHIFT                                0
#define WRPR_INTRPT_CFG_6__INTRPT6_MASK__WIDTH                               32
#define WRPR_INTRPT_CFG_6__INTRPT6_MASK__MASK                       0xffffffffU
#define WRPR_INTRPT_CFG_6__INTRPT6_MASK__READ(src) \
                    ((uint32_t)(src)\
                    & 0xffffffffU)
#define WRPR_INTRPT_CFG_6__INTRPT6_MASK__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0xffffffffU)
#define WRPR_INTRPT_CFG_6__INTRPT6_MASK__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffffffffU) | ((uint32_t)(src) &\
                    0xffffffffU)
#define WRPR_INTRPT_CFG_6__INTRPT6_MASK__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0xffffffffU)))
#define WRPR_INTRPT_CFG_6__INTRPT6_MASK__RESET_VALUE                0x01ff0000U
/** @} */
#define WRPR_INTRPT_CFG_6__TYPE                                        uint32_t
#define WRPR_INTRPT_CFG_6__READ                                     0xffffffffU
#define WRPR_INTRPT_CFG_6__WRITE                                    0xffffffffU
#define WRPR_INTRPT_CFG_6__PRESERVED                                0x00000000U
#define WRPR_INTRPT_CFG_6__RESET_VALUE                              0x01ff0000U

#endif /* __WRPR_INTRPT_CFG_6_MACRO__ */

/** @} end of intrpt_cfg_6 */

/* macros for BlueprintGlobalNameSpace::WRPR_intrpt_cfg_7 */
/**
 * @defgroup at_apb_wrpr_regs_core_intrpt_cfg_7 intrpt_cfg_7
 * @brief Contains register fields associated with intrpt_cfg_7. definitions.
 * @{
 */
#ifndef __WRPR_INTRPT_CFG_7_MACRO__
#define __WRPR_INTRPT_CFG_7_MACRO__

/* macros for field intrpt7_mask */
/**
 * @defgroup at_apb_wrpr_regs_core_intrpt7_mask_field intrpt7_mask_field
 * @brief macros for field intrpt7_mask
 * @details interrupt mask for interrupt[7] going into Cortex-M0
 * @{
 */
#define WRPR_INTRPT_CFG_7__INTRPT7_MASK__SHIFT                                0
#define WRPR_INTRPT_CFG_7__INTRPT7_MASK__WIDTH                               32
#define WRPR_INTRPT_CFG_7__INTRPT7_MASK__MASK                       0xffffffffU
#define WRPR_INTRPT_CFG_7__INTRPT7_MASK__READ(src) \
                    ((uint32_t)(src)\
                    & 0xffffffffU)
#define WRPR_INTRPT_CFG_7__INTRPT7_MASK__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0xffffffffU)
#define WRPR_INTRPT_CFG_7__INTRPT7_MASK__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffffffffU) | ((uint32_t)(src) &\
                    0xffffffffU)
#define WRPR_INTRPT_CFG_7__INTRPT7_MASK__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0xffffffffU)))
#define WRPR_INTRPT_CFG_7__INTRPT7_MASK__RESET_VALUE                0x02000010U
/** @} */
#define WRPR_INTRPT_CFG_7__TYPE                                        uint32_t
#define WRPR_INTRPT_CFG_7__READ                                     0xffffffffU
#define WRPR_INTRPT_CFG_7__WRITE                                    0xffffffffU
#define WRPR_INTRPT_CFG_7__PRESERVED                                0x00000000U
#define WRPR_INTRPT_CFG_7__RESET_VALUE                              0x02000010U

#endif /* __WRPR_INTRPT_CFG_7_MACRO__ */

/** @} end of intrpt_cfg_7 */

/* macros for BlueprintGlobalNameSpace::WRPR_intrpt_cfg_8 */
/**
 * @defgroup at_apb_wrpr_regs_core_intrpt_cfg_8 intrpt_cfg_8
 * @brief Contains register fields associated with intrpt_cfg_8. definitions.
 * @{
 */
#ifndef __WRPR_INTRPT_CFG_8_MACRO__
#define __WRPR_INTRPT_CFG_8_MACRO__

/* macros for field intrpt8_mask */
/**
 * @defgroup at_apb_wrpr_regs_core_intrpt8_mask_field intrpt8_mask_field
 * @brief macros for field intrpt8_mask
 * @details interrupt mask for interrupt[8] going into Cortex-M0
 * @{
 */
#define WRPR_INTRPT_CFG_8__INTRPT8_MASK__SHIFT                                0
#define WRPR_INTRPT_CFG_8__INTRPT8_MASK__WIDTH                               32
#define WRPR_INTRPT_CFG_8__INTRPT8_MASK__MASK                       0xffffffffU
#define WRPR_INTRPT_CFG_8__INTRPT8_MASK__READ(src) \
                    ((uint32_t)(src)\
                    & 0xffffffffU)
#define WRPR_INTRPT_CFG_8__INTRPT8_MASK__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0xffffffffU)
#define WRPR_INTRPT_CFG_8__INTRPT8_MASK__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffffffffU) | ((uint32_t)(src) &\
                    0xffffffffU)
#define WRPR_INTRPT_CFG_8__INTRPT8_MASK__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0xffffffffU)))
#define WRPR_INTRPT_CFG_8__INTRPT8_MASK__RESET_VALUE                0x00000020U
/** @} */
#define WRPR_INTRPT_CFG_8__TYPE                                        uint32_t
#define WRPR_INTRPT_CFG_8__READ                                     0xffffffffU
#define WRPR_INTRPT_CFG_8__WRITE                                    0xffffffffU
#define WRPR_INTRPT_CFG_8__PRESERVED                                0x00000000U
#define WRPR_INTRPT_CFG_8__RESET_VALUE                              0x00000020U

#endif /* __WRPR_INTRPT_CFG_8_MACRO__ */

/** @} end of intrpt_cfg_8 */

/* macros for BlueprintGlobalNameSpace::WRPR_intrpt_cfg_9 */
/**
 * @defgroup at_apb_wrpr_regs_core_intrpt_cfg_9 intrpt_cfg_9
 * @brief Contains register fields associated with intrpt_cfg_9. definitions.
 * @{
 */
#ifndef __WRPR_INTRPT_CFG_9_MACRO__
#define __WRPR_INTRPT_CFG_9_MACRO__

/* macros for field intrpt9_mask */
/**
 * @defgroup at_apb_wrpr_regs_core_intrpt9_mask_field intrpt9_mask_field
 * @brief macros for field intrpt9_mask
 * @details interrupt mask for interrupt[9] going into Cortex-M0
 * @{
 */
#define WRPR_INTRPT_CFG_9__INTRPT9_MASK__SHIFT                                0
#define WRPR_INTRPT_CFG_9__INTRPT9_MASK__WIDTH                               32
#define WRPR_INTRPT_CFG_9__INTRPT9_MASK__MASK                       0xffffffffU
#define WRPR_INTRPT_CFG_9__INTRPT9_MASK__READ(src) \
                    ((uint32_t)(src)\
                    & 0xffffffffU)
#define WRPR_INTRPT_CFG_9__INTRPT9_MASK__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0xffffffffU)
#define WRPR_INTRPT_CFG_9__INTRPT9_MASK__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffffffffU) | ((uint32_t)(src) &\
                    0xffffffffU)
#define WRPR_INTRPT_CFG_9__INTRPT9_MASK__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0xffffffffU)))
#define WRPR_INTRPT_CFG_9__INTRPT9_MASK__RESET_VALUE                0x00000040U
/** @} */
#define WRPR_INTRPT_CFG_9__TYPE                                        uint32_t
#define WRPR_INTRPT_CFG_9__READ                                     0xffffffffU
#define WRPR_INTRPT_CFG_9__WRITE                                    0xffffffffU
#define WRPR_INTRPT_CFG_9__PRESERVED                                0x00000000U
#define WRPR_INTRPT_CFG_9__RESET_VALUE                              0x00000040U

#endif /* __WRPR_INTRPT_CFG_9_MACRO__ */

/** @} end of intrpt_cfg_9 */

/* macros for BlueprintGlobalNameSpace::WRPR_intrpt_cfg_10 */
/**
 * @defgroup at_apb_wrpr_regs_core_intrpt_cfg_10 intrpt_cfg_10
 * @brief Contains register fields associated with intrpt_cfg_10. definitions.
 * @{
 */
#ifndef __WRPR_INTRPT_CFG_10_MACRO__
#define __WRPR_INTRPT_CFG_10_MACRO__

/* macros for field intrpt10_mask */
/**
 * @defgroup at_apb_wrpr_regs_core_intrpt10_mask_field intrpt10_mask_field
 * @brief macros for field intrpt10_mask
 * @details interrupt mask for interrupt[10] going into Cortex-M0
 * @{
 */
#define WRPR_INTRPT_CFG_10__INTRPT10_MASK__SHIFT                              0
#define WRPR_INTRPT_CFG_10__INTRPT10_MASK__WIDTH                             32
#define WRPR_INTRPT_CFG_10__INTRPT10_MASK__MASK                     0xffffffffU
#define WRPR_INTRPT_CFG_10__INTRPT10_MASK__READ(src) \
                    ((uint32_t)(src)\
                    & 0xffffffffU)
#define WRPR_INTRPT_CFG_10__INTRPT10_MASK__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0xffffffffU)
#define WRPR_INTRPT_CFG_10__INTRPT10_MASK__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffffffffU) | ((uint32_t)(src) &\
                    0xffffffffU)
#define WRPR_INTRPT_CFG_10__INTRPT10_MASK__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0xffffffffU)))
#define WRPR_INTRPT_CFG_10__INTRPT10_MASK__RESET_VALUE              0x00000080U
/** @} */
#define WRPR_INTRPT_CFG_10__TYPE                                       uint32_t
#define WRPR_INTRPT_CFG_10__READ                                    0xffffffffU
#define WRPR_INTRPT_CFG_10__WRITE                                   0xffffffffU
#define WRPR_INTRPT_CFG_10__PRESERVED                               0x00000000U
#define WRPR_INTRPT_CFG_10__RESET_VALUE                             0x00000080U

#endif /* __WRPR_INTRPT_CFG_10_MACRO__ */

/** @} end of intrpt_cfg_10 */

/* macros for BlueprintGlobalNameSpace::WRPR_intrpt_cfg_11 */
/**
 * @defgroup at_apb_wrpr_regs_core_intrpt_cfg_11 intrpt_cfg_11
 * @brief Contains register fields associated with intrpt_cfg_11. definitions.
 * @{
 */
#ifndef __WRPR_INTRPT_CFG_11_MACRO__
#define __WRPR_INTRPT_CFG_11_MACRO__

/* macros for field intrpt11_mask */
/**
 * @defgroup at_apb_wrpr_regs_core_intrpt11_mask_field intrpt11_mask_field
 * @brief macros for field intrpt11_mask
 * @details interrupt mask for interrupt[11] going into Cortex-M0
 * @{
 */
#define WRPR_INTRPT_CFG_11__INTRPT11_MASK__SHIFT                              0
#define WRPR_INTRPT_CFG_11__INTRPT11_MASK__WIDTH                             32
#define WRPR_INTRPT_CFG_11__INTRPT11_MASK__MASK                     0xffffffffU
#define WRPR_INTRPT_CFG_11__INTRPT11_MASK__READ(src) \
                    ((uint32_t)(src)\
                    & 0xffffffffU)
#define WRPR_INTRPT_CFG_11__INTRPT11_MASK__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0xffffffffU)
#define WRPR_INTRPT_CFG_11__INTRPT11_MASK__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffffffffU) | ((uint32_t)(src) &\
                    0xffffffffU)
#define WRPR_INTRPT_CFG_11__INTRPT11_MASK__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0xffffffffU)))
#define WRPR_INTRPT_CFG_11__INTRPT11_MASK__RESET_VALUE              0x00000100U
/** @} */
#define WRPR_INTRPT_CFG_11__TYPE                                       uint32_t
#define WRPR_INTRPT_CFG_11__READ                                    0xffffffffU
#define WRPR_INTRPT_CFG_11__WRITE                                   0xffffffffU
#define WRPR_INTRPT_CFG_11__PRESERVED                               0x00000000U
#define WRPR_INTRPT_CFG_11__RESET_VALUE                             0x00000100U

#endif /* __WRPR_INTRPT_CFG_11_MACRO__ */

/** @} end of intrpt_cfg_11 */

/* macros for BlueprintGlobalNameSpace::WRPR_intrpt_cfg_12 */
/**
 * @defgroup at_apb_wrpr_regs_core_intrpt_cfg_12 intrpt_cfg_12
 * @brief Contains register fields associated with intrpt_cfg_12. definitions.
 * @{
 */
#ifndef __WRPR_INTRPT_CFG_12_MACRO__
#define __WRPR_INTRPT_CFG_12_MACRO__

/* macros for field intrpt12_mask */
/**
 * @defgroup at_apb_wrpr_regs_core_intrpt12_mask_field intrpt12_mask_field
 * @brief macros for field intrpt12_mask
 * @details interrupt mask for interrupt[12] going into Cortex-M0
 * @{
 */
#define WRPR_INTRPT_CFG_12__INTRPT12_MASK__SHIFT                              0
#define WRPR_INTRPT_CFG_12__INTRPT12_MASK__WIDTH                             32
#define WRPR_INTRPT_CFG_12__INTRPT12_MASK__MASK                     0xffffffffU
#define WRPR_INTRPT_CFG_12__INTRPT12_MASK__READ(src) \
                    ((uint32_t)(src)\
                    & 0xffffffffU)
#define WRPR_INTRPT_CFG_12__INTRPT12_MASK__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0xffffffffU)
#define WRPR_INTRPT_CFG_12__INTRPT12_MASK__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffffffffU) | ((uint32_t)(src) &\
                    0xffffffffU)
#define WRPR_INTRPT_CFG_12__INTRPT12_MASK__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0xffffffffU)))
#define WRPR_INTRPT_CFG_12__INTRPT12_MASK__RESET_VALUE              0x00000200U
/** @} */
#define WRPR_INTRPT_CFG_12__TYPE                                       uint32_t
#define WRPR_INTRPT_CFG_12__READ                                    0xffffffffU
#define WRPR_INTRPT_CFG_12__WRITE                                   0xffffffffU
#define WRPR_INTRPT_CFG_12__PRESERVED                               0x00000000U
#define WRPR_INTRPT_CFG_12__RESET_VALUE                             0x00000200U

#endif /* __WRPR_INTRPT_CFG_12_MACRO__ */

/** @} end of intrpt_cfg_12 */

/* macros for BlueprintGlobalNameSpace::WRPR_intrpt_cfg_13 */
/**
 * @defgroup at_apb_wrpr_regs_core_intrpt_cfg_13 intrpt_cfg_13
 * @brief Contains register fields associated with intrpt_cfg_13. definitions.
 * @{
 */
#ifndef __WRPR_INTRPT_CFG_13_MACRO__
#define __WRPR_INTRPT_CFG_13_MACRO__

/* macros for field intrpt13_mask */
/**
 * @defgroup at_apb_wrpr_regs_core_intrpt13_mask_field intrpt13_mask_field
 * @brief macros for field intrpt13_mask
 * @details interrupt mask for interrupt[13] going into Cortex-M0
 * @{
 */
#define WRPR_INTRPT_CFG_13__INTRPT13_MASK__SHIFT                              0
#define WRPR_INTRPT_CFG_13__INTRPT13_MASK__WIDTH                             32
#define WRPR_INTRPT_CFG_13__INTRPT13_MASK__MASK                     0xffffffffU
#define WRPR_INTRPT_CFG_13__INTRPT13_MASK__READ(src) \
                    ((uint32_t)(src)\
                    & 0xffffffffU)
#define WRPR_INTRPT_CFG_13__INTRPT13_MASK__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0xffffffffU)
#define WRPR_INTRPT_CFG_13__INTRPT13_MASK__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffffffffU) | ((uint32_t)(src) &\
                    0xffffffffU)
#define WRPR_INTRPT_CFG_13__INTRPT13_MASK__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0xffffffffU)))
#define WRPR_INTRPT_CFG_13__INTRPT13_MASK__RESET_VALUE              0x00000400U
/** @} */
#define WRPR_INTRPT_CFG_13__TYPE                                       uint32_t
#define WRPR_INTRPT_CFG_13__READ                                    0xffffffffU
#define WRPR_INTRPT_CFG_13__WRITE                                   0xffffffffU
#define WRPR_INTRPT_CFG_13__PRESERVED                               0x00000000U
#define WRPR_INTRPT_CFG_13__RESET_VALUE                             0x00000400U

#endif /* __WRPR_INTRPT_CFG_13_MACRO__ */

/** @} end of intrpt_cfg_13 */

/* macros for BlueprintGlobalNameSpace::WRPR_intrpt_cfg_14 */
/**
 * @defgroup at_apb_wrpr_regs_core_intrpt_cfg_14 intrpt_cfg_14
 * @brief Contains register fields associated with intrpt_cfg_14. definitions.
 * @{
 */
#ifndef __WRPR_INTRPT_CFG_14_MACRO__
#define __WRPR_INTRPT_CFG_14_MACRO__

/* macros for field intrpt14_mask */
/**
 * @defgroup at_apb_wrpr_regs_core_intrpt14_mask_field intrpt14_mask_field
 * @brief macros for field intrpt14_mask
 * @details interrupt mask for interrupt[14] going into Cortex-M0
 * @{
 */
#define WRPR_INTRPT_CFG_14__INTRPT14_MASK__SHIFT                              0
#define WRPR_INTRPT_CFG_14__INTRPT14_MASK__WIDTH                             32
#define WRPR_INTRPT_CFG_14__INTRPT14_MASK__MASK                     0xffffffffU
#define WRPR_INTRPT_CFG_14__INTRPT14_MASK__READ(src) \
                    ((uint32_t)(src)\
                    & 0xffffffffU)
#define WRPR_INTRPT_CFG_14__INTRPT14_MASK__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0xffffffffU)
#define WRPR_INTRPT_CFG_14__INTRPT14_MASK__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffffffffU) | ((uint32_t)(src) &\
                    0xffffffffU)
#define WRPR_INTRPT_CFG_14__INTRPT14_MASK__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0xffffffffU)))
#define WRPR_INTRPT_CFG_14__INTRPT14_MASK__RESET_VALUE              0x00000800U
/** @} */
#define WRPR_INTRPT_CFG_14__TYPE                                       uint32_t
#define WRPR_INTRPT_CFG_14__READ                                    0xffffffffU
#define WRPR_INTRPT_CFG_14__WRITE                                   0xffffffffU
#define WRPR_INTRPT_CFG_14__PRESERVED                               0x00000000U
#define WRPR_INTRPT_CFG_14__RESET_VALUE                             0x00000800U

#endif /* __WRPR_INTRPT_CFG_14_MACRO__ */

/** @} end of intrpt_cfg_14 */

/* macros for BlueprintGlobalNameSpace::WRPR_intrpt_cfg_15 */
/**
 * @defgroup at_apb_wrpr_regs_core_intrpt_cfg_15 intrpt_cfg_15
 * @brief Contains register fields associated with intrpt_cfg_15. definitions.
 * @{
 */
#ifndef __WRPR_INTRPT_CFG_15_MACRO__
#define __WRPR_INTRPT_CFG_15_MACRO__

/* macros for field intrpt15_mask */
/**
 * @defgroup at_apb_wrpr_regs_core_intrpt15_mask_field intrpt15_mask_field
 * @brief macros for field intrpt15_mask
 * @details interrupt mask for interrupt[15] going into Cortex-M0
 * @{
 */
#define WRPR_INTRPT_CFG_15__INTRPT15_MASK__SHIFT                              0
#define WRPR_INTRPT_CFG_15__INTRPT15_MASK__WIDTH                             32
#define WRPR_INTRPT_CFG_15__INTRPT15_MASK__MASK                     0xffffffffU
#define WRPR_INTRPT_CFG_15__INTRPT15_MASK__READ(src) \
                    ((uint32_t)(src)\
                    & 0xffffffffU)
#define WRPR_INTRPT_CFG_15__INTRPT15_MASK__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0xffffffffU)
#define WRPR_INTRPT_CFG_15__INTRPT15_MASK__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffffffffU) | ((uint32_t)(src) &\
                    0xffffffffU)
#define WRPR_INTRPT_CFG_15__INTRPT15_MASK__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0xffffffffU)))
#define WRPR_INTRPT_CFG_15__INTRPT15_MASK__RESET_VALUE              0x3c001000U
/** @} */
#define WRPR_INTRPT_CFG_15__TYPE                                       uint32_t
#define WRPR_INTRPT_CFG_15__READ                                    0xffffffffU
#define WRPR_INTRPT_CFG_15__WRITE                                   0xffffffffU
#define WRPR_INTRPT_CFG_15__PRESERVED                               0x00000000U
#define WRPR_INTRPT_CFG_15__RESET_VALUE                             0x3c001000U

#endif /* __WRPR_INTRPT_CFG_15_MACRO__ */

/** @} end of intrpt_cfg_15 */

/* macros for BlueprintGlobalNameSpace::WRPR_remap */
/**
 * @defgroup at_apb_wrpr_regs_core_remap remap
 * @brief Contains register fields associated with remap. definitions.
 * @{
 */
#ifndef __WRPR_REMAP_MACRO__
#define __WRPR_REMAP_MACRO__

/* macros for field qspi_drop */
/**
 * @defgroup at_apb_wrpr_regs_core_qspi_drop_field qspi_drop_field
 * @brief macros for field qspi_drop
 * @details Drops the at_ahb_qspi address start from 0x10000000 to 0x0. No change in range.
 * @{
 */
#define WRPR_REMAP__QSPI_DROP__SHIFT                                          0
#define WRPR_REMAP__QSPI_DROP__WIDTH                                          1
#define WRPR_REMAP__QSPI_DROP__MASK                                 0x00000001U
#define WRPR_REMAP__QSPI_DROP__READ(src)        ((uint32_t)(src) & 0x00000001U)
#define WRPR_REMAP__QSPI_DROP__WRITE(src)       ((uint32_t)(src) & 0x00000001U)
#define WRPR_REMAP__QSPI_DROP__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define WRPR_REMAP__QSPI_DROP__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define WRPR_REMAP__QSPI_DROP__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define WRPR_REMAP__QSPI_DROP__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define WRPR_REMAP__QSPI_DROP__RESET_VALUE                          0x00000000U
/** @} */
#define WRPR_REMAP__TYPE                                               uint32_t
#define WRPR_REMAP__READ                                            0x00000001U
#define WRPR_REMAP__WRITE                                           0x00000001U
#define WRPR_REMAP__PRESERVED                                       0x00000000U
#define WRPR_REMAP__RESET_VALUE                                     0x00000000U

#endif /* __WRPR_REMAP_MACRO__ */

/** @} end of remap */

/* macros for BlueprintGlobalNameSpace::WRPR_ahb_interposers */
/**
 * @defgroup at_apb_wrpr_regs_core_ahb_interposers ahb_interposers
 * @brief Contains register fields associated with ahb_interposers. definitions.
 * @{
 */
#ifndef __WRPR_AHB_INTERPOSERS_MACRO__
#define __WRPR_AHB_INTERPOSERS_MACRO__

/* macros for field qspi_intp_enable */
/**
 * @defgroup at_apb_wrpr_regs_core_qspi_intp_enable_field qspi_intp_enable_field
 * @brief macros for field qspi_intp_enable
 * @details If set, interposers are inserted between backplane and peripherals. If peripherals do not respond within allocated time, the interposer returns error on bus. Prevents the software from hanging on bad bus transactions such as read or write to invalid address.
 * @{
 */
#define WRPR_AHB_INTERPOSERS__QSPI_INTP_ENABLE__SHIFT                         0
#define WRPR_AHB_INTERPOSERS__QSPI_INTP_ENABLE__WIDTH                         1
#define WRPR_AHB_INTERPOSERS__QSPI_INTP_ENABLE__MASK                0x00000001U
#define WRPR_AHB_INTERPOSERS__QSPI_INTP_ENABLE__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define WRPR_AHB_INTERPOSERS__QSPI_INTP_ENABLE__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define WRPR_AHB_INTERPOSERS__QSPI_INTP_ENABLE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define WRPR_AHB_INTERPOSERS__QSPI_INTP_ENABLE__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define WRPR_AHB_INTERPOSERS__QSPI_INTP_ENABLE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define WRPR_AHB_INTERPOSERS__QSPI_INTP_ENABLE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define WRPR_AHB_INTERPOSERS__QSPI_INTP_ENABLE__RESET_VALUE         0x00000001U
/** @} */

/* macros for field qspi_intp_low_ceiling */
/**
 * @defgroup at_apb_wrpr_regs_core_qspi_intp_low_ceiling_field qspi_intp_low_ceiling_field
 * @brief macros for field qspi_intp_low_ceiling
 * @details If set, lowers the interposer timeout. Useful for testing interposer functionality in simulation.
 * @{
 */
#define WRPR_AHB_INTERPOSERS__QSPI_INTP_LOW_CEILING__SHIFT                    1
#define WRPR_AHB_INTERPOSERS__QSPI_INTP_LOW_CEILING__WIDTH                    1
#define WRPR_AHB_INTERPOSERS__QSPI_INTP_LOW_CEILING__MASK           0x00000002U
#define WRPR_AHB_INTERPOSERS__QSPI_INTP_LOW_CEILING__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define WRPR_AHB_INTERPOSERS__QSPI_INTP_LOW_CEILING__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define WRPR_AHB_INTERPOSERS__QSPI_INTP_LOW_CEILING__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define WRPR_AHB_INTERPOSERS__QSPI_INTP_LOW_CEILING__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define WRPR_AHB_INTERPOSERS__QSPI_INTP_LOW_CEILING__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define WRPR_AHB_INTERPOSERS__QSPI_INTP_LOW_CEILING__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define WRPR_AHB_INTERPOSERS__QSPI_INTP_LOW_CEILING__RESET_VALUE    0x00000000U
/** @} */
#define WRPR_AHB_INTERPOSERS__TYPE                                     uint32_t
#define WRPR_AHB_INTERPOSERS__READ                                  0x00000003U
#define WRPR_AHB_INTERPOSERS__WRITE                                 0x00000003U
#define WRPR_AHB_INTERPOSERS__PRESERVED                             0x00000000U
#define WRPR_AHB_INTERPOSERS__RESET_VALUE                           0x00000001U

#endif /* __WRPR_AHB_INTERPOSERS_MACRO__ */

/** @} end of ahb_interposers */

/* macros for BlueprintGlobalNameSpace::WRPR_scratchpad_A */
/**
 * @defgroup at_apb_wrpr_regs_core_scratchpad_A scratchpad_A
 * @brief Contains register fields associated with scratchpad_A. definitions.
 * @{
 */
#ifndef __WRPR_SCRATCHPAD_A_MACRO__
#define __WRPR_SCRATCHPAD_A_MACRO__

/* macros for field misc */
/**
 * @defgroup at_apb_wrpr_regs_core_misc_field misc_field
 * @brief macros for field misc
 * @details mostly likely will be used to inject random seed in sim
 * @{
 */
#define WRPR_SCRATCHPAD_A__MISC__SHIFT                                        0
#define WRPR_SCRATCHPAD_A__MISC__WIDTH                                       32
#define WRPR_SCRATCHPAD_A__MISC__MASK                               0xffffffffU
#define WRPR_SCRATCHPAD_A__MISC__READ(src)      ((uint32_t)(src) & 0xffffffffU)
#define WRPR_SCRATCHPAD_A__MISC__WRITE(src)     ((uint32_t)(src) & 0xffffffffU)
#define WRPR_SCRATCHPAD_A__MISC__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffffffffU) | ((uint32_t)(src) &\
                    0xffffffffU)
#define WRPR_SCRATCHPAD_A__MISC__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0xffffffffU)))
#define WRPR_SCRATCHPAD_A__MISC__RESET_VALUE                        0x00000000U
/** @} */
#define WRPR_SCRATCHPAD_A__TYPE                                        uint32_t
#define WRPR_SCRATCHPAD_A__READ                                     0xffffffffU
#define WRPR_SCRATCHPAD_A__WRITE                                    0xffffffffU
#define WRPR_SCRATCHPAD_A__PRESERVED                                0x00000000U
#define WRPR_SCRATCHPAD_A__RESET_VALUE                              0x00000000U

#endif /* __WRPR_SCRATCHPAD_A_MACRO__ */

/** @} end of scratchpad_A */

/* macros for BlueprintGlobalNameSpace::WRPR_scratchpad_B */
/**
 * @defgroup at_apb_wrpr_regs_core_scratchpad_B scratchpad_B
 * @brief Contains register fields associated with scratchpad_B. definitions.
 * @{
 */
#ifndef __WRPR_SCRATCHPAD_B_MACRO__
#define __WRPR_SCRATCHPAD_B_MACRO__

/* macros for field misc */
/**
 * @defgroup at_apb_wrpr_regs_core_misc_field misc_field
 * @brief macros for field misc
 * @details mostly likely will be used to inject random seed in sim
 * @{
 */
#define WRPR_SCRATCHPAD_B__MISC__SHIFT                                        0
#define WRPR_SCRATCHPAD_B__MISC__WIDTH                                       32
#define WRPR_SCRATCHPAD_B__MISC__MASK                               0xffffffffU
#define WRPR_SCRATCHPAD_B__MISC__READ(src)      ((uint32_t)(src) & 0xffffffffU)
#define WRPR_SCRATCHPAD_B__MISC__WRITE(src)     ((uint32_t)(src) & 0xffffffffU)
#define WRPR_SCRATCHPAD_B__MISC__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffffffffU) | ((uint32_t)(src) &\
                    0xffffffffU)
#define WRPR_SCRATCHPAD_B__MISC__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0xffffffffU)))
#define WRPR_SCRATCHPAD_B__MISC__RESET_VALUE                        0x00000000U
/** @} */
#define WRPR_SCRATCHPAD_B__TYPE                                        uint32_t
#define WRPR_SCRATCHPAD_B__READ                                     0xffffffffU
#define WRPR_SCRATCHPAD_B__WRITE                                    0xffffffffU
#define WRPR_SCRATCHPAD_B__PRESERVED                                0x00000000U
#define WRPR_SCRATCHPAD_B__RESET_VALUE                              0x00000000U

#endif /* __WRPR_SCRATCHPAD_B_MACRO__ */

/** @} end of scratchpad_B */

/* macros for BlueprintGlobalNameSpace::WRPR_scratchpad_C */
/**
 * @defgroup at_apb_wrpr_regs_core_scratchpad_C scratchpad_C
 * @brief Contains register fields associated with scratchpad_C. definitions.
 * @{
 */
#ifndef __WRPR_SCRATCHPAD_C_MACRO__
#define __WRPR_SCRATCHPAD_C_MACRO__

/* macros for field misc */
/**
 * @defgroup at_apb_wrpr_regs_core_misc_field misc_field
 * @brief macros for field misc
 * @details mostly likely will be used to inject random seed in sim
 * @{
 */
#define WRPR_SCRATCHPAD_C__MISC__SHIFT                                        0
#define WRPR_SCRATCHPAD_C__MISC__WIDTH                                       32
#define WRPR_SCRATCHPAD_C__MISC__MASK                               0xffffffffU
#define WRPR_SCRATCHPAD_C__MISC__READ(src)      ((uint32_t)(src) & 0xffffffffU)
#define WRPR_SCRATCHPAD_C__MISC__WRITE(src)     ((uint32_t)(src) & 0xffffffffU)
#define WRPR_SCRATCHPAD_C__MISC__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffffffffU) | ((uint32_t)(src) &\
                    0xffffffffU)
#define WRPR_SCRATCHPAD_C__MISC__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0xffffffffU)))
#define WRPR_SCRATCHPAD_C__MISC__RESET_VALUE                        0x00000000U
/** @} */
#define WRPR_SCRATCHPAD_C__TYPE                                        uint32_t
#define WRPR_SCRATCHPAD_C__READ                                     0xffffffffU
#define WRPR_SCRATCHPAD_C__WRITE                                    0xffffffffU
#define WRPR_SCRATCHPAD_C__PRESERVED                                0x00000000U
#define WRPR_SCRATCHPAD_C__RESET_VALUE                              0x00000000U

#endif /* __WRPR_SCRATCHPAD_C_MACRO__ */

/** @} end of scratchpad_C */

/* macros for BlueprintGlobalNameSpace::WRPR_scratchpad_D */
/**
 * @defgroup at_apb_wrpr_regs_core_scratchpad_D scratchpad_D
 * @brief Contains register fields associated with scratchpad_D. definitions.
 * @{
 */
#ifndef __WRPR_SCRATCHPAD_D_MACRO__
#define __WRPR_SCRATCHPAD_D_MACRO__

/* macros for field misc */
/**
 * @defgroup at_apb_wrpr_regs_core_misc_field misc_field
 * @brief macros for field misc
 * @details mostly likely will be used to inject random seed in sim
 * @{
 */
#define WRPR_SCRATCHPAD_D__MISC__SHIFT                                        0
#define WRPR_SCRATCHPAD_D__MISC__WIDTH                                       32
#define WRPR_SCRATCHPAD_D__MISC__MASK                               0xffffffffU
#define WRPR_SCRATCHPAD_D__MISC__READ(src)      ((uint32_t)(src) & 0xffffffffU)
#define WRPR_SCRATCHPAD_D__MISC__WRITE(src)     ((uint32_t)(src) & 0xffffffffU)
#define WRPR_SCRATCHPAD_D__MISC__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffffffffU) | ((uint32_t)(src) &\
                    0xffffffffU)
#define WRPR_SCRATCHPAD_D__MISC__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0xffffffffU)))
#define WRPR_SCRATCHPAD_D__MISC__RESET_VALUE                        0x00000000U
/** @} */
#define WRPR_SCRATCHPAD_D__TYPE                                        uint32_t
#define WRPR_SCRATCHPAD_D__READ                                     0xffffffffU
#define WRPR_SCRATCHPAD_D__WRITE                                    0xffffffffU
#define WRPR_SCRATCHPAD_D__PRESERVED                                0x00000000U
#define WRPR_SCRATCHPAD_D__RESET_VALUE                              0x00000000U

#endif /* __WRPR_SCRATCHPAD_D_MACRO__ */

/** @} end of scratchpad_D */

/* macros for BlueprintGlobalNameSpace::WRPR_chipid1 */
/**
 * @defgroup at_apb_wrpr_regs_core_chipid1 chipid1
 * @brief Contains register fields associated with chipid1. definitions.
 * @{
 */
#ifndef __WRPR_CHIPID1_MACRO__
#define __WRPR_CHIPID1_MACRO__

/* macros for field char3 */
/**
 * @defgroup at_apb_wrpr_regs_core_char3_field char3_field
 * @brief macros for field char3
 * @details n
 * @{
 */
#define WRPR_CHIPID1__CHAR3__SHIFT                                            0
#define WRPR_CHIPID1__CHAR3__WIDTH                                            8
#define WRPR_CHIPID1__CHAR3__MASK                                   0x000000ffU
#define WRPR_CHIPID1__CHAR3__READ(src)          ((uint32_t)(src) & 0x000000ffU)
#define WRPR_CHIPID1__CHAR3__RESET_VALUE                            0x0000006eU
/** @} */

/* macros for field char2 */
/**
 * @defgroup at_apb_wrpr_regs_core_char2_field char2_field
 * @brief macros for field char2
 * @details d
 * @{
 */
#define WRPR_CHIPID1__CHAR2__SHIFT                                            8
#define WRPR_CHIPID1__CHAR2__WIDTH                                            8
#define WRPR_CHIPID1__CHAR2__MASK                                   0x0000ff00U
#define WRPR_CHIPID1__CHAR2__READ(src)   (((uint32_t)(src) & 0x0000ff00U) >> 8)
#define WRPR_CHIPID1__CHAR2__RESET_VALUE                            0x00000064U
/** @} */

/* macros for field char1 */
/**
 * @defgroup at_apb_wrpr_regs_core_char1_field char1_field
 * @brief macros for field char1
 * @details y
 * @{
 */
#define WRPR_CHIPID1__CHAR1__SHIFT                                           16
#define WRPR_CHIPID1__CHAR1__WIDTH                                            8
#define WRPR_CHIPID1__CHAR1__MASK                                   0x00ff0000U
#define WRPR_CHIPID1__CHAR1__READ(src)  (((uint32_t)(src) & 0x00ff0000U) >> 16)
#define WRPR_CHIPID1__CHAR1__RESET_VALUE                            0x00000079U
/** @} */

/* macros for field char0 */
/**
 * @defgroup at_apb_wrpr_regs_core_char0_field char0_field
 * @brief macros for field char0
 * @details S
 * @{
 */
#define WRPR_CHIPID1__CHAR0__SHIFT                                           24
#define WRPR_CHIPID1__CHAR0__WIDTH                                            8
#define WRPR_CHIPID1__CHAR0__MASK                                   0xff000000U
#define WRPR_CHIPID1__CHAR0__READ(src)  (((uint32_t)(src) & 0xff000000U) >> 24)
#define WRPR_CHIPID1__CHAR0__RESET_VALUE                            0x00000053U
/** @} */
#define WRPR_CHIPID1__TYPE                                             uint32_t
#define WRPR_CHIPID1__READ                                          0xffffffffU
#define WRPR_CHIPID1__PRESERVED                                     0x00000000U
#define WRPR_CHIPID1__RESET_VALUE                                   0x5379646eU

#endif /* __WRPR_CHIPID1_MACRO__ */

/** @} end of chipid1 */

/* macros for BlueprintGlobalNameSpace::WRPR_chipid2 */
/**
 * @defgroup at_apb_wrpr_regs_core_chipid2 chipid2
 * @brief Contains register fields associated with chipid2. definitions.
 * @{
 */
#ifndef __WRPR_CHIPID2_MACRO__
#define __WRPR_CHIPID2_MACRO__

/* macros for field char7 */
/**
 * @defgroup at_apb_wrpr_regs_core_char7_field char7_field
 * @brief macros for field char7
 * @details nul
 * @{
 */
#define WRPR_CHIPID2__CHAR7__SHIFT                                            0
#define WRPR_CHIPID2__CHAR7__WIDTH                                            8
#define WRPR_CHIPID2__CHAR7__MASK                                   0x000000ffU
#define WRPR_CHIPID2__CHAR7__READ(src)          ((uint32_t)(src) & 0x000000ffU)
#define WRPR_CHIPID2__CHAR7__RESET_VALUE                            0x00000000U
/** @} */

/* macros for field char6 */
/**
 * @defgroup at_apb_wrpr_regs_core_char6_field char6_field
 * @brief macros for field char6
 * @details nul
 * @{
 */
#define WRPR_CHIPID2__CHAR6__SHIFT                                            8
#define WRPR_CHIPID2__CHAR6__WIDTH                                            8
#define WRPR_CHIPID2__CHAR6__MASK                                   0x0000ff00U
#define WRPR_CHIPID2__CHAR6__READ(src)   (((uint32_t)(src) & 0x0000ff00U) >> 8)
#define WRPR_CHIPID2__CHAR6__RESET_VALUE                            0x00000000U
/** @} */

/* macros for field char5 */
/**
 * @defgroup at_apb_wrpr_regs_core_char5_field char5_field
 * @brief macros for field char5
 * @details y
 * @{
 */
#define WRPR_CHIPID2__CHAR5__SHIFT                                           16
#define WRPR_CHIPID2__CHAR5__WIDTH                                            8
#define WRPR_CHIPID2__CHAR5__MASK                                   0x00ff0000U
#define WRPR_CHIPID2__CHAR5__READ(src)  (((uint32_t)(src) & 0x00ff0000U) >> 16)
#define WRPR_CHIPID2__CHAR5__RESET_VALUE                            0x00000079U
/** @} */

/* macros for field char4 */
/**
 * @defgroup at_apb_wrpr_regs_core_char4_field char4_field
 * @brief macros for field char4
 * @details e
 * @{
 */
#define WRPR_CHIPID2__CHAR4__SHIFT                                           24
#define WRPR_CHIPID2__CHAR4__WIDTH                                            8
#define WRPR_CHIPID2__CHAR4__MASK                                   0xff000000U
#define WRPR_CHIPID2__CHAR4__READ(src)  (((uint32_t)(src) & 0xff000000U) >> 24)
#define WRPR_CHIPID2__CHAR4__RESET_VALUE                            0x00000065U
/** @} */
#define WRPR_CHIPID2__TYPE                                             uint32_t
#define WRPR_CHIPID2__READ                                          0xffffffffU
#define WRPR_CHIPID2__PRESERVED                                     0x00000000U
#define WRPR_CHIPID2__RESET_VALUE                                   0x65790000U

#endif /* __WRPR_CHIPID2_MACRO__ */

/** @} end of chipid2 */

/* macros for BlueprintGlobalNameSpace::WRPR_chiprev */
/**
 * @defgroup at_apb_wrpr_regs_core_chiprev chiprev
 * @brief Contains register fields associated with chiprev. definitions.
 * @{
 */
#ifndef __WRPR_CHIPREV_MACRO__
#define __WRPR_CHIPREV_MACRO__

/* macros for field minor */
/**
 * @defgroup at_apb_wrpr_regs_core_minor_field minor_field
 * @brief macros for field minor
 * @details Minor revision number.
 * @{
 */
#define WRPR_CHIPREV__MINOR__SHIFT                                            0
#define WRPR_CHIPREV__MINOR__WIDTH                                            8
#define WRPR_CHIPREV__MINOR__MASK                                   0x000000ffU
#define WRPR_CHIPREV__MINOR__READ(src)          ((uint32_t)(src) & 0x000000ffU)
#define WRPR_CHIPREV__MINOR__RESET_VALUE                            0x00000002U
/** @} */

/* macros for field major */
/**
 * @defgroup at_apb_wrpr_regs_core_major_field major_field
 * @brief macros for field major
 * @details Major revision number.
 * @{
 */
#define WRPR_CHIPREV__MAJOR__SHIFT                                            8
#define WRPR_CHIPREV__MAJOR__WIDTH                                            8
#define WRPR_CHIPREV__MAJOR__MASK                                   0x0000ff00U
#define WRPR_CHIPREV__MAJOR__READ(src)   (((uint32_t)(src) & 0x0000ff00U) >> 8)
#define WRPR_CHIPREV__MAJOR__RESET_VALUE                            0x00000002U
/** @} */

/* macros for field running_off_32khz_xtal */
/**
 * @defgroup at_apb_wrpr_regs_core_running_off_32khz_xtal_field running_off_32khz_xtal_field
 * @brief macros for field running_off_32khz_xtal
 * @details Is clk_lpc running off crystal?  0 = oscillator based  1 = crystal based
 * @{
 */
#define WRPR_CHIPREV__RUNNING_OFF_32KHZ_XTAL__SHIFT                          16
#define WRPR_CHIPREV__RUNNING_OFF_32KHZ_XTAL__WIDTH                           1
#define WRPR_CHIPREV__RUNNING_OFF_32KHZ_XTAL__MASK                  0x00010000U
#define WRPR_CHIPREV__RUNNING_OFF_32KHZ_XTAL__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00010000U) >> 16)
#define WRPR_CHIPREV__RUNNING_OFF_32KHZ_XTAL__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00010000U) | ((uint32_t)(1) << 16)
#define WRPR_CHIPREV__RUNNING_OFF_32KHZ_XTAL__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00010000U) | ((uint32_t)(0) << 16)
#define WRPR_CHIPREV__RUNNING_OFF_32KHZ_XTAL__RESET_VALUE           0x00000000U
/** @} */
#define WRPR_CHIPREV__TYPE                                             uint32_t
#define WRPR_CHIPREV__READ                                          0x0001ffffU
#define WRPR_CHIPREV__PRESERVED                                     0x00000000U
#define WRPR_CHIPREV__RESET_VALUE                                   0x00000202U

#endif /* __WRPR_CHIPREV_MACRO__ */

/** @} end of chiprev */

/* macros for BlueprintGlobalNameSpace::WRPR_core_id */
/**
 * @defgroup at_apb_wrpr_regs_core_core_id core_id
 * @brief Contains register fields associated with core_id. definitions.
 * @{
 */
#ifndef __WRPR_CORE_ID_MACRO__
#define __WRPR_CORE_ID_MACRO__

/* macros for field id */
/**
 * @defgroup at_apb_wrpr_regs_core_id_field id_field
 * @brief macros for field id
 * @details WRPR in ASCII
 * @{
 */
#define WRPR_CORE_ID__ID__SHIFT                                               0
#define WRPR_CORE_ID__ID__WIDTH                                              32
#define WRPR_CORE_ID__ID__MASK                                      0xffffffffU
#define WRPR_CORE_ID__ID__READ(src)             ((uint32_t)(src) & 0xffffffffU)
#define WRPR_CORE_ID__ID__RESET_VALUE                               0x57525052U
/** @} */
#define WRPR_CORE_ID__TYPE                                             uint32_t
#define WRPR_CORE_ID__READ                                          0xffffffffU
#define WRPR_CORE_ID__PRESERVED                                     0x00000000U
#define WRPR_CORE_ID__RESET_VALUE                                   0x57525052U

#endif /* __WRPR_CORE_ID_MACRO__ */

/** @} end of core_id */

/** @} end of AT_APB_WRPR_REGS_CORE */
#endif /* __REG_AT_APB_WRPR_REGS_CORE_H__ */
