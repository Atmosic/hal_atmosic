/*                                                                           */
/* File:       at_ahb_dma_regs_core_macro.h                                  */
/*                                                                           */
/* Arguments:  /cad/tools/cadence/blueprint_3.7.5/Linux-64bit/blueprint -eval*/
/*             $DEFINE_PROPERTY=1; -ansic at_ahb_dma_regs_core.rdl           */
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


#ifndef __REG_AT_AHB_DMA_REGS_CORE_H__
#define __REG_AT_AHB_DMA_REGS_CORE_H__

/**
 *****************************************************************************
 * @defgroup AT_AHB_DMA_REGS_CORE at_ahb_dma_regs_core
 * @ingroup AT_REG
 * @brief at_ahb_dma_regs_core definitions.
 * @{
 *****************************************************************************
 */

/* macros for BlueprintGlobalNameSpace::AT_DMA_opmode */
/**
 * @defgroup at_ahb_dma_regs_core_opmode opmode
 * @brief operation mode control register definitions.
 * @{
 */
#ifndef __AT_DMA_OPMODE_MACRO__
#define __AT_DMA_OPMODE_MACRO__

/* macros for field const_trans */
/**
 * @defgroup at_ahb_dma_regs_core_const_trans_field const_trans_field
 * @brief macros for field const_trans
 * @details 0= source of transfer comes from a location specified by src_addr; 1= source data is a constant value specified by const_wdata.
 * @{
 */
#define AT_DMA_OPMODE__CONST_TRANS__SHIFT                                     0
#define AT_DMA_OPMODE__CONST_TRANS__WIDTH                                     1
#define AT_DMA_OPMODE__CONST_TRANS__MASK                            0x00000001U
#define AT_DMA_OPMODE__CONST_TRANS__READ(src)   ((uint32_t)(src) & 0x00000001U)
#define AT_DMA_OPMODE__CONST_TRANS__WRITE(src)  ((uint32_t)(src) & 0x00000001U)
#define AT_DMA_OPMODE__CONST_TRANS__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define AT_DMA_OPMODE__CONST_TRANS__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define AT_DMA_OPMODE__CONST_TRANS__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define AT_DMA_OPMODE__CONST_TRANS__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define AT_DMA_OPMODE__CONST_TRANS__RESET_VALUE                     0x00000000U
/** @} */

/* macros for field dat_inv */
/**
 * @defgroup at_ahb_dma_regs_core_dat_inv_field dat_inv_field
 * @brief macros for field dat_inv
 * @details 0= non-inverted write ; 1= inverted write (write data are bit-wise inverted)
 * @{
 */
#define AT_DMA_OPMODE__DAT_INV__SHIFT                                         1
#define AT_DMA_OPMODE__DAT_INV__WIDTH                                         1
#define AT_DMA_OPMODE__DAT_INV__MASK                                0x00000002U
#define AT_DMA_OPMODE__DAT_INV__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define AT_DMA_OPMODE__DAT_INV__WRITE(src) \
                    (((uint32_t)(src)\
                    << 1) & 0x00000002U)
#define AT_DMA_OPMODE__DAT_INV__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define AT_DMA_OPMODE__DAT_INV__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define AT_DMA_OPMODE__DAT_INV__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define AT_DMA_OPMODE__DAT_INV__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define AT_DMA_OPMODE__DAT_INV__RESET_VALUE                         0x00000000U
/** @} */

/* macros for field go */
/**
 * @defgroup at_ahb_dma_regs_core_go_field go_field
 * @brief macros for field go
 * @details op code start when rising edge on 'go' is detected.
 * @{
 */
#define AT_DMA_OPMODE__GO__SHIFT                                             31
#define AT_DMA_OPMODE__GO__WIDTH                                              1
#define AT_DMA_OPMODE__GO__MASK                                     0x80000000U
#define AT_DMA_OPMODE__GO__READ(src)    (((uint32_t)(src) & 0x80000000U) >> 31)
#define AT_DMA_OPMODE__GO__WRITE(src)   (((uint32_t)(src) << 31) & 0x80000000U)
#define AT_DMA_OPMODE__GO__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x80000000U) | (((uint32_t)(src) <<\
                    31) & 0x80000000U)
#define AT_DMA_OPMODE__GO__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 31) & ~0x80000000U)))
#define AT_DMA_OPMODE__GO__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x80000000U) | ((uint32_t)(1) << 31)
#define AT_DMA_OPMODE__GO__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x80000000U) | ((uint32_t)(0) << 31)
#define AT_DMA_OPMODE__GO__RESET_VALUE                              0x00000000U
/** @} */
#define AT_DMA_OPMODE__TYPE                                            uint32_t
#define AT_DMA_OPMODE__READ                                         0x80000003U
#define AT_DMA_OPMODE__WRITE                                        0x80000003U
#define AT_DMA_OPMODE__PRESERVED                                    0x00000000U
#define AT_DMA_OPMODE__RESET_VALUE                                  0x00000000U

#endif /* __AT_DMA_OPMODE_MACRO__ */

/** @} end of opmode */

/* macros for BlueprintGlobalNameSpace::AT_DMA_const_wdata */
/**
 * @defgroup at_ahb_dma_regs_core_const_wdata const_wdata
 * @brief constant value register definitions.
 * @{
 */
#ifndef __AT_DMA_CONST_WDATA_MACRO__
#define __AT_DMA_CONST_WDATA_MACRO__

/* macros for field const_wdata */
/**
 * @defgroup at_ahb_dma_regs_core_const_wdata_field const_wdata_field
 * @brief macros for field const_wdata
 * @details constant value to be written to target when the operation is in const_trans mode.
 * @{
 */
#define AT_DMA_CONST_WDATA__CONST_WDATA__SHIFT                                0
#define AT_DMA_CONST_WDATA__CONST_WDATA__WIDTH                               32
#define AT_DMA_CONST_WDATA__CONST_WDATA__MASK                       0xffffffffU
#define AT_DMA_CONST_WDATA__CONST_WDATA__READ(src) \
                    ((uint32_t)(src)\
                    & 0xffffffffU)
#define AT_DMA_CONST_WDATA__CONST_WDATA__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0xffffffffU)
#define AT_DMA_CONST_WDATA__CONST_WDATA__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffffffffU) | ((uint32_t)(src) &\
                    0xffffffffU)
#define AT_DMA_CONST_WDATA__CONST_WDATA__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0xffffffffU)))
#define AT_DMA_CONST_WDATA__CONST_WDATA__RESET_VALUE                0x00000000U
/** @} */
#define AT_DMA_CONST_WDATA__TYPE                                       uint32_t
#define AT_DMA_CONST_WDATA__READ                                    0xffffffffU
#define AT_DMA_CONST_WDATA__WRITE                                   0xffffffffU
#define AT_DMA_CONST_WDATA__PRESERVED                               0x00000000U
#define AT_DMA_CONST_WDATA__RESET_VALUE                             0x00000000U

#endif /* __AT_DMA_CONST_WDATA_MACRO__ */

/** @} end of const_wdata */

/* macros for BlueprintGlobalNameSpace::AT_DMA_src_addr */
/**
 * @defgroup at_ahb_dma_regs_core_src_addr src_addr
 * @brief source address register definitions.
 * @{
 */
#ifndef __AT_DMA_SRC_ADDR_MACRO__
#define __AT_DMA_SRC_ADDR_MACRO__

/* macros for field src_addr */
/**
 * @defgroup at_ahb_dma_regs_core_src_addr_field src_addr_field
 * @brief macros for field src_addr
 * @details source address
 * @{
 */
#define AT_DMA_SRC_ADDR__SRC_ADDR__SHIFT                                      0
#define AT_DMA_SRC_ADDR__SRC_ADDR__WIDTH                                     32
#define AT_DMA_SRC_ADDR__SRC_ADDR__MASK                             0xffffffffU
#define AT_DMA_SRC_ADDR__SRC_ADDR__READ(src)    ((uint32_t)(src) & 0xffffffffU)
#define AT_DMA_SRC_ADDR__SRC_ADDR__WRITE(src)   ((uint32_t)(src) & 0xffffffffU)
#define AT_DMA_SRC_ADDR__SRC_ADDR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffffffffU) | ((uint32_t)(src) &\
                    0xffffffffU)
#define AT_DMA_SRC_ADDR__SRC_ADDR__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0xffffffffU)))
#define AT_DMA_SRC_ADDR__SRC_ADDR__RESET_VALUE                      0x00000000U
/** @} */
#define AT_DMA_SRC_ADDR__TYPE                                          uint32_t
#define AT_DMA_SRC_ADDR__READ                                       0xffffffffU
#define AT_DMA_SRC_ADDR__WRITE                                      0xffffffffU
#define AT_DMA_SRC_ADDR__PRESERVED                                  0x00000000U
#define AT_DMA_SRC_ADDR__RESET_VALUE                                0x00000000U

#endif /* __AT_DMA_SRC_ADDR_MACRO__ */

/** @} end of src_addr */

/* macros for BlueprintGlobalNameSpace::AT_DMA_tar_addr */
/**
 * @defgroup at_ahb_dma_regs_core_tar_addr tar_addr
 * @brief target address register definitions.
 * @{
 */
#ifndef __AT_DMA_TAR_ADDR_MACRO__
#define __AT_DMA_TAR_ADDR_MACRO__

/* macros for field tar_addr */
/**
 * @defgroup at_ahb_dma_regs_core_tar_addr_field tar_addr_field
 * @brief macros for field tar_addr
 * @details target address
 * @{
 */
#define AT_DMA_TAR_ADDR__TAR_ADDR__SHIFT                                      0
#define AT_DMA_TAR_ADDR__TAR_ADDR__WIDTH                                     32
#define AT_DMA_TAR_ADDR__TAR_ADDR__MASK                             0xffffffffU
#define AT_DMA_TAR_ADDR__TAR_ADDR__READ(src)    ((uint32_t)(src) & 0xffffffffU)
#define AT_DMA_TAR_ADDR__TAR_ADDR__WRITE(src)   ((uint32_t)(src) & 0xffffffffU)
#define AT_DMA_TAR_ADDR__TAR_ADDR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffffffffU) | ((uint32_t)(src) &\
                    0xffffffffU)
#define AT_DMA_TAR_ADDR__TAR_ADDR__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0xffffffffU)))
#define AT_DMA_TAR_ADDR__TAR_ADDR__RESET_VALUE                      0x00000000U
/** @} */
#define AT_DMA_TAR_ADDR__TYPE                                          uint32_t
#define AT_DMA_TAR_ADDR__READ                                       0xffffffffU
#define AT_DMA_TAR_ADDR__WRITE                                      0xffffffffU
#define AT_DMA_TAR_ADDR__PRESERVED                                  0x00000000U
#define AT_DMA_TAR_ADDR__RESET_VALUE                                0x00000000U

#endif /* __AT_DMA_TAR_ADDR_MACRO__ */

/** @} end of tar_addr */

/* macros for BlueprintGlobalNameSpace::AT_DMA_size */
/**
 * @defgroup at_ahb_dma_regs_core_size size
 * @brief size of payload definitions.
 * @{
 */
#ifndef __AT_DMA_SIZE_MACRO__
#define __AT_DMA_SIZE_MACRO__

/* macros for field size */
/**
 * @defgroup at_ahb_dma_regs_core_size_field size_field
 * @brief macros for field size
 * @details payload size in bytes.
 * @{
 */
#define AT_DMA_SIZE__SIZE__SHIFT                                              0
#define AT_DMA_SIZE__SIZE__WIDTH                                             16
#define AT_DMA_SIZE__SIZE__MASK                                     0x0000ffffU
#define AT_DMA_SIZE__SIZE__READ(src)            ((uint32_t)(src) & 0x0000ffffU)
#define AT_DMA_SIZE__SIZE__WRITE(src)           ((uint32_t)(src) & 0x0000ffffU)
#define AT_DMA_SIZE__SIZE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ffffU) | ((uint32_t)(src) &\
                    0x0000ffffU)
#define AT_DMA_SIZE__SIZE__VERIFY(src)    (!(((uint32_t)(src) & ~0x0000ffffU)))
#define AT_DMA_SIZE__SIZE__RESET_VALUE                              0x00000000U
/** @} */
#define AT_DMA_SIZE__TYPE                                              uint32_t
#define AT_DMA_SIZE__READ                                           0x0000ffffU
#define AT_DMA_SIZE__WRITE                                          0x0000ffffU
#define AT_DMA_SIZE__PRESERVED                                      0x00000000U
#define AT_DMA_SIZE__RESET_VALUE                                    0x00000000U

#endif /* __AT_DMA_SIZE_MACRO__ */

/** @} end of size */

/* macros for BlueprintGlobalNameSpace::AT_DMA_interrupt_status */
/**
 * @defgroup at_ahb_dma_regs_core_interrupt_status interrupt_status
 * @brief interrupt status register definitions.
 * @{
 */
#ifndef __AT_DMA_INTERRUPT_STATUS_MACRO__
#define __AT_DMA_INTERRUPT_STATUS_MACRO__

/* macros for field dma_done */
/**
 * @defgroup at_ahb_dma_regs_core_dma_done_field dma_done_field
 * @brief macros for field dma_done
 * @details interrupt status normal
 * @{
 */
#define AT_DMA_INTERRUPT_STATUS__DMA_DONE__SHIFT                              0
#define AT_DMA_INTERRUPT_STATUS__DMA_DONE__WIDTH                              1
#define AT_DMA_INTERRUPT_STATUS__DMA_DONE__MASK                     0x00000001U
#define AT_DMA_INTERRUPT_STATUS__DMA_DONE__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define AT_DMA_INTERRUPT_STATUS__DMA_DONE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define AT_DMA_INTERRUPT_STATUS__DMA_DONE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define AT_DMA_INTERRUPT_STATUS__DMA_DONE__RESET_VALUE              0x00000000U
/** @} */

/* macros for field dma_err */
/**
 * @defgroup at_ahb_dma_regs_core_dma_err_field dma_err_field
 * @brief macros for field dma_err
 * @details interrupt status error
 * @{
 */
#define AT_DMA_INTERRUPT_STATUS__DMA_ERR__SHIFT                               1
#define AT_DMA_INTERRUPT_STATUS__DMA_ERR__WIDTH                               1
#define AT_DMA_INTERRUPT_STATUS__DMA_ERR__MASK                      0x00000002U
#define AT_DMA_INTERRUPT_STATUS__DMA_ERR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define AT_DMA_INTERRUPT_STATUS__DMA_ERR__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define AT_DMA_INTERRUPT_STATUS__DMA_ERR__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define AT_DMA_INTERRUPT_STATUS__DMA_ERR__RESET_VALUE               0x00000000U
/** @} */
#define AT_DMA_INTERRUPT_STATUS__TYPE                                  uint32_t
#define AT_DMA_INTERRUPT_STATUS__READ                               0x00000003U
#define AT_DMA_INTERRUPT_STATUS__PRESERVED                          0x00000000U
#define AT_DMA_INTERRUPT_STATUS__RESET_VALUE                        0x00000000U

#endif /* __AT_DMA_INTERRUPT_STATUS_MACRO__ */

/** @} end of interrupt_status */

/* macros for BlueprintGlobalNameSpace::AT_DMA_interrupt_mask */
/**
 * @defgroup at_ahb_dma_regs_core_interrupt_mask interrupt_mask
 * @brief interrupt mask definitions.
 * @{
 */
#ifndef __AT_DMA_INTERRUPT_MASK_MACRO__
#define __AT_DMA_INTERRUPT_MASK_MACRO__

/* macros for field intrpt_mask */
/**
 * @defgroup at_ahb_dma_regs_core_intrpt_mask_field intrpt_mask_field
 * @brief macros for field intrpt_mask
 * @details if nth bit set, the nth interrupt is enabled
 * @{
 */
#define AT_DMA_INTERRUPT_MASK__INTRPT_MASK__SHIFT                             0
#define AT_DMA_INTERRUPT_MASK__INTRPT_MASK__WIDTH                             2
#define AT_DMA_INTERRUPT_MASK__INTRPT_MASK__MASK                    0x00000003U
#define AT_DMA_INTERRUPT_MASK__INTRPT_MASK__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000003U)
#define AT_DMA_INTERRUPT_MASK__INTRPT_MASK__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000003U)
#define AT_DMA_INTERRUPT_MASK__INTRPT_MASK__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000003U) | ((uint32_t)(src) &\
                    0x00000003U)
#define AT_DMA_INTERRUPT_MASK__INTRPT_MASK__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000003U)))
#define AT_DMA_INTERRUPT_MASK__INTRPT_MASK__RESET_VALUE             0x00000001U
/** @} */
#define AT_DMA_INTERRUPT_MASK__TYPE                                    uint32_t
#define AT_DMA_INTERRUPT_MASK__READ                                 0x00000003U
#define AT_DMA_INTERRUPT_MASK__WRITE                                0x00000003U
#define AT_DMA_INTERRUPT_MASK__PRESERVED                            0x00000000U
#define AT_DMA_INTERRUPT_MASK__RESET_VALUE                          0x00000001U

#endif /* __AT_DMA_INTERRUPT_MASK_MACRO__ */

/** @} end of interrupt_mask */

/* macros for BlueprintGlobalNameSpace::AT_DMA_set_interrupt */
/**
 * @defgroup at_ahb_dma_regs_core_set_interrupt set_interrupt
 * @brief interrupt set force definitions.
 * @{
 */
#ifndef __AT_DMA_SET_INTERRUPT_MACRO__
#define __AT_DMA_SET_INTERRUPT_MACRO__

/* macros for field intrpt_set */
/**
 * @defgroup at_ahb_dma_regs_core_intrpt_set_field intrpt_set_field
 * @brief macros for field intrpt_set
 * @details if nth bit set, the nth interrupt is set; not self reseting
 * @{
 */
#define AT_DMA_SET_INTERRUPT__INTRPT_SET__SHIFT                               0
#define AT_DMA_SET_INTERRUPT__INTRPT_SET__WIDTH                               2
#define AT_DMA_SET_INTERRUPT__INTRPT_SET__MASK                      0x00000003U
#define AT_DMA_SET_INTERRUPT__INTRPT_SET__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000003U)
#define AT_DMA_SET_INTERRUPT__INTRPT_SET__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000003U)
#define AT_DMA_SET_INTERRUPT__INTRPT_SET__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000003U) | ((uint32_t)(src) &\
                    0x00000003U)
#define AT_DMA_SET_INTERRUPT__INTRPT_SET__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000003U)))
#define AT_DMA_SET_INTERRUPT__INTRPT_SET__RESET_VALUE               0x00000000U
/** @} */
#define AT_DMA_SET_INTERRUPT__TYPE                                     uint32_t
#define AT_DMA_SET_INTERRUPT__READ                                  0x00000003U
#define AT_DMA_SET_INTERRUPT__WRITE                                 0x00000003U
#define AT_DMA_SET_INTERRUPT__PRESERVED                             0x00000000U
#define AT_DMA_SET_INTERRUPT__RESET_VALUE                           0x00000000U

#endif /* __AT_DMA_SET_INTERRUPT_MACRO__ */

/** @} end of set_interrupt */

/* macros for BlueprintGlobalNameSpace::AT_DMA_reset_interrupt */
/**
 * @defgroup at_ahb_dma_regs_core_reset_interrupt reset_interrupt
 * @brief interrupt reset force definitions.
 * @{
 */
#ifndef __AT_DMA_RESET_INTERRUPT_MACRO__
#define __AT_DMA_RESET_INTERRUPT_MACRO__

/* macros for field intrpt_reset */
/**
 * @defgroup at_ahb_dma_regs_core_intrpt_reset_field intrpt_reset_field
 * @brief macros for field intrpt_reset
 * @details if nth bit set, the nth interrupt is reset; not self reseting
 * @{
 */
#define AT_DMA_RESET_INTERRUPT__INTRPT_RESET__SHIFT                           0
#define AT_DMA_RESET_INTERRUPT__INTRPT_RESET__WIDTH                           2
#define AT_DMA_RESET_INTERRUPT__INTRPT_RESET__MASK                  0x00000003U
#define AT_DMA_RESET_INTERRUPT__INTRPT_RESET__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000003U)
#define AT_DMA_RESET_INTERRUPT__INTRPT_RESET__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000003U)
#define AT_DMA_RESET_INTERRUPT__INTRPT_RESET__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000003U) | ((uint32_t)(src) &\
                    0x00000003U)
#define AT_DMA_RESET_INTERRUPT__INTRPT_RESET__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000003U)))
#define AT_DMA_RESET_INTERRUPT__INTRPT_RESET__RESET_VALUE           0x00000000U
/** @} */
#define AT_DMA_RESET_INTERRUPT__TYPE                                   uint32_t
#define AT_DMA_RESET_INTERRUPT__READ                                0x00000003U
#define AT_DMA_RESET_INTERRUPT__WRITE                               0x00000003U
#define AT_DMA_RESET_INTERRUPT__PRESERVED                           0x00000000U
#define AT_DMA_RESET_INTERRUPT__RESET_VALUE                         0x00000000U

#endif /* __AT_DMA_RESET_INTERRUPT_MACRO__ */

/** @} end of reset_interrupt */

/* macros for BlueprintGlobalNameSpace::AT_DMA_err_stat */
/**
 * @defgroup at_ahb_dma_regs_core_err_stat err_stat
 * @brief The status is cleared when the err interrupt is cleared definitions.
 * @{
 */
#ifndef __AT_DMA_ERR_STAT_MACRO__
#define __AT_DMA_ERR_STAT_MACRO__

/* macros for field size_0 */
/**
 * @defgroup at_ahb_dma_regs_core_size_0_field size_0_field
 * @brief macros for field size_0
 * @details 0= size is not 0 when go is launched, 1= size is 0 when go is launched.
 * @{
 */
#define AT_DMA_ERR_STAT__SIZE_0__SHIFT                                        0
#define AT_DMA_ERR_STAT__SIZE_0__WIDTH                                        1
#define AT_DMA_ERR_STAT__SIZE_0__MASK                               0x00000001U
#define AT_DMA_ERR_STAT__SIZE_0__READ(src)      ((uint32_t)(src) & 0x00000001U)
#define AT_DMA_ERR_STAT__SIZE_0__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define AT_DMA_ERR_STAT__SIZE_0__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define AT_DMA_ERR_STAT__SIZE_0__RESET_VALUE                        0x00000000U
/** @} */

/* macros for field addr_ovlp */
/**
 * @defgroup at_ahb_dma_regs_core_addr_ovlp_field addr_ovlp_field
 * @brief macros for field addr_ovlp
 * @details 0= no overlap between src and tar addr range, 1= there is an overlap
 * @{
 */
#define AT_DMA_ERR_STAT__ADDR_OVLP__SHIFT                                     1
#define AT_DMA_ERR_STAT__ADDR_OVLP__WIDTH                                     1
#define AT_DMA_ERR_STAT__ADDR_OVLP__MASK                            0x00000002U
#define AT_DMA_ERR_STAT__ADDR_OVLP__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define AT_DMA_ERR_STAT__ADDR_OVLP__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define AT_DMA_ERR_STAT__ADDR_OVLP__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define AT_DMA_ERR_STAT__ADDR_OVLP__RESET_VALUE                     0x00000000U
/** @} */

/* macros for field bus_err */
/**
 * @defgroup at_ahb_dma_regs_core_bus_err_field bus_err_field
 * @brief macros for field bus_err
 * @details 0= no bus error, 1= a bus error occur during the transfer or at the launch of 'go'.
 * @{
 */
#define AT_DMA_ERR_STAT__BUS_ERR__SHIFT                                       2
#define AT_DMA_ERR_STAT__BUS_ERR__WIDTH                                       1
#define AT_DMA_ERR_STAT__BUS_ERR__MASK                              0x00000004U
#define AT_DMA_ERR_STAT__BUS_ERR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000004U) >> 2)
#define AT_DMA_ERR_STAT__BUS_ERR__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(1) << 2)
#define AT_DMA_ERR_STAT__BUS_ERR__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(0) << 2)
#define AT_DMA_ERR_STAT__BUS_ERR__RESET_VALUE                       0x00000000U
/** @} */
#define AT_DMA_ERR_STAT__TYPE                                          uint32_t
#define AT_DMA_ERR_STAT__READ                                       0x00000007U
#define AT_DMA_ERR_STAT__PRESERVED                                  0x00000000U
#define AT_DMA_ERR_STAT__RESET_VALUE                                0x00000000U

#endif /* __AT_DMA_ERR_STAT_MACRO__ */

/** @} end of err_stat */

/* macros for BlueprintGlobalNameSpace::AT_DMA_id */
/**
 * @defgroup at_ahb_dma_regs_core_id id
 * @brief core id definitions.
 * @{
 */
#ifndef __AT_DMA_ID_MACRO__
#define __AT_DMA_ID_MACRO__

/* macros for field id */
/**
 * @defgroup at_ahb_dma_regs_core_id_field id_field
 * @brief macros for field id
 * @details 'DMA '
 * @{
 */
#define AT_DMA_ID__ID__SHIFT                                                  0
#define AT_DMA_ID__ID__WIDTH                                                 32
#define AT_DMA_ID__ID__MASK                                         0xffffffffU
#define AT_DMA_ID__ID__READ(src)                ((uint32_t)(src) & 0xffffffffU)
#define AT_DMA_ID__ID__RESET_VALUE                                  0x444d4120U
/** @} */
#define AT_DMA_ID__TYPE                                                uint32_t
#define AT_DMA_ID__READ                                             0xffffffffU
#define AT_DMA_ID__PRESERVED                                        0x00000000U
#define AT_DMA_ID__RESET_VALUE                                      0x444d4120U

#endif /* __AT_DMA_ID_MACRO__ */

/** @} end of id */

/** @} end of AT_AHB_DMA_REGS_CORE */
#endif /* __REG_AT_AHB_DMA_REGS_CORE_H__ */
