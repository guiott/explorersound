;;*****************************************************************************
;;*****************************************************************************
;;  FILENAME: HB_Tmr.inc
;;   Version: 2.6, Updated on 2009/10/15 at 17:11:37
;;  Generated by PSoC Designer 5.0.1127.0
;;
;;  DESCRIPTION: Assembler declarations for the Timer16 user module interface
;;-----------------------------------------------------------------------------
;;  Copyright (c) Cypress Semiconductor 2009. All Rights Reserved.
;;*****************************************************************************
;;*****************************************************************************

include "m8c.inc"


;--------------------------------------------------
; Constants for HB_Tmr API's.
;--------------------------------------------------

HB_Tmr_CONTROL_REG_START_BIT:              equ 0x01    ; Control register start bit
HB_Tmr_INT_REG:                            equ 0x0df
HB_Tmr_INT_MASK:                           equ 0x02


;--------------------------------------------------
; Constants for HB_Tmr user defined values
;--------------------------------------------------

HB_Tmr_PERIOD:                             equ 0xc7f
HB_Tmr_COMPARE_VALUE:                      equ 0x0


;--------------------------------------------------
; Register Address Constants for HB_Tmr
;--------------------------------------------------

HB_Tmr_COUNTER_LSB_REG:                equ 0x40   ; DR0 Counter register
HB_Tmr_COUNTER_MSB_REG:                equ 0x44
HB_Tmr_PERIOD_LSB_REG:                 equ 0x41   ; DR1 Period register
HB_Tmr_PERIOD_MSB_REG:                 equ 0x45
HB_Tmr_COMPARE_LSB_REG:                equ 0x42   ; DR2 CompareValue register
HB_Tmr_COMPARE_MSB_REG:                equ 0x46
HB_Tmr_CONTROL_LSB_REG:                equ 0x43   ; Control register
HB_Tmr_CONTROL_MSB_REG:                equ 0x47
HB_Tmr_FUNC_LSB_REG:                   equ 0x40   ; Function register
HB_Tmr_FUNC_MSB_REG:                   equ 0x44
HB_Tmr_INPUT_LSB_REG:                  equ 0x41   ; Input register
HB_Tmr_INPUT_MSB_REG:                  equ 0x45
HB_Tmr_OUTPUT_LSB_REG:                 equ 0x42   ; Output register
HB_Tmr_OUTPUT_MSB_REG:                 equ 0x46


;--------------------------------------------------
; HB_Tmr Macro 'Functions'
;--------------------------------------------------

   macro HB_Tmr_Start_M
   or    reg[HB_Tmr_CONTROL_LSB_REG],  HB_Tmr_CONTROL_REG_START_BIT
   endm

   macro HB_Tmr_Stop_M
   and   reg[HB_Tmr_CONTROL_LSB_REG], ~HB_Tmr_CONTROL_REG_START_BIT
   endm

   macro HB_Tmr_EnableInt_M
   M8C_EnableIntMask HB_Tmr_INT_REG, HB_Tmr_INT_MASK
   endm

   macro HB_Tmr_DisableInt_M
   M8C_DisableIntMask HB_Tmr_INT_REG, HB_Tmr_INT_MASK
   endm


; end of file HB_Tmr.inc