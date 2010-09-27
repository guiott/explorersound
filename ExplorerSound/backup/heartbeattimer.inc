;;*****************************************************************************
;;*****************************************************************************
;;  FILENAME: HeartBeatTimer.inc
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
; Constants for HeartBeatTimer API's.
;--------------------------------------------------

HeartBeatTimer_CONTROL_REG_START_BIT:      equ 0x01    ; Control register start bit
HeartBeatTimer_INT_REG:                    equ 0x0df
HeartBeatTimer_INT_MASK:                   equ 0x02


;--------------------------------------------------
; Constants for HeartBeatTimer user defined values
;--------------------------------------------------

HeartBeatTimer_PERIOD:                     equ 0xc7f
HeartBeatTimer_COMPARE_VALUE:              equ 0x0


;--------------------------------------------------
; Register Address Constants for HeartBeatTimer
;--------------------------------------------------

HeartBeatTimer_COUNTER_LSB_REG:        equ 0x40   ; DR0 Counter register
HeartBeatTimer_COUNTER_MSB_REG:        equ 0x44
HeartBeatTimer_PERIOD_LSB_REG:         equ 0x41   ; DR1 Period register
HeartBeatTimer_PERIOD_MSB_REG:         equ 0x45
HeartBeatTimer_COMPARE_LSB_REG:        equ 0x42   ; DR2 CompareValue register
HeartBeatTimer_COMPARE_MSB_REG:        equ 0x46
HeartBeatTimer_CONTROL_LSB_REG:        equ 0x43   ; Control register
HeartBeatTimer_CONTROL_MSB_REG:        equ 0x47
HeartBeatTimer_FUNC_LSB_REG:           equ 0x40   ; Function register
HeartBeatTimer_FUNC_MSB_REG:           equ 0x44
HeartBeatTimer_INPUT_LSB_REG:          equ 0x41   ; Input register
HeartBeatTimer_INPUT_MSB_REG:          equ 0x45
HeartBeatTimer_OUTPUT_LSB_REG:         equ 0x42   ; Output register
HeartBeatTimer_OUTPUT_MSB_REG:         equ 0x46


;--------------------------------------------------
; HeartBeatTimer Macro 'Functions'
;--------------------------------------------------

   macro HeartBeatTimer_Start_M
   or    reg[HeartBeatTimer_CONTROL_LSB_REG],  HeartBeatTimer_CONTROL_REG_START_BIT
   endm

   macro HeartBeatTimer_Stop_M
   and   reg[HeartBeatTimer_CONTROL_LSB_REG], ~HeartBeatTimer_CONTROL_REG_START_BIT
   endm

   macro HeartBeatTimer_EnableInt_M
   M8C_EnableIntMask HeartBeatTimer_INT_REG, HeartBeatTimer_INT_MASK
   endm

   macro HeartBeatTimer_DisableInt_M
   M8C_DisableIntMask HeartBeatTimer_INT_REG, HeartBeatTimer_INT_MASK
   endm


; end of file HeartBeatTimer.inc