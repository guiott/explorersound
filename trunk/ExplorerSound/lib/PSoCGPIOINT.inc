; Generated by PSoC Designer 5.0.1127.0
;
; AGND address and mask equates
AGND_Data_ADDR:	equ	0h
AGND_DriveMode_0_ADDR:	equ	100h
AGND_DriveMode_1_ADDR:	equ	101h
AGND_DriveMode_2_ADDR:	equ	3h
AGND_GlobalSelect_ADDR:	equ	2h
AGND_IntCtrl_0_ADDR:	equ	102h
AGND_IntCtrl_1_ADDR:	equ	103h
AGND_IntEn_ADDR:	equ	1h
AGND_MASK:	equ	4h
; AnalogOutBuf_0 address and mask equates
AnalogOutBuf_0_Data_ADDR:	equ	0h
AnalogOutBuf_0_DriveMode_0_ADDR:	equ	100h
AnalogOutBuf_0_DriveMode_1_ADDR:	equ	101h
AnalogOutBuf_0_DriveMode_2_ADDR:	equ	3h
AnalogOutBuf_0_GlobalSelect_ADDR:	equ	2h
AnalogOutBuf_0_IntCtrl_0_ADDR:	equ	102h
AnalogOutBuf_0_IntCtrl_1_ADDR:	equ	103h
AnalogOutBuf_0_IntEn_ADDR:	equ	1h
AnalogOutBuf_0_MASK:	equ	8h
; AnalogOutBuf_2 address and mask equates
AnalogOutBuf_2_Data_ADDR:	equ	0h
AnalogOutBuf_2_DriveMode_0_ADDR:	equ	100h
AnalogOutBuf_2_DriveMode_1_ADDR:	equ	101h
AnalogOutBuf_2_DriveMode_2_ADDR:	equ	3h
AnalogOutBuf_2_GlobalSelect_ADDR:	equ	2h
AnalogOutBuf_2_IntCtrl_0_ADDR:	equ	102h
AnalogOutBuf_2_IntCtrl_1_ADDR:	equ	103h
AnalogOutBuf_2_IntEn_ADDR:	equ	1h
AnalogOutBuf_2_MASK:	equ	10h
; Connect_BPF4_FinalStage_PGA address and mask equates
Connect_BPF4_FinalStage_PGA_Data_ADDR:	equ	0h
Connect_BPF4_FinalStage_PGA_DriveMode_0_ADDR:	equ	100h
Connect_BPF4_FinalStage_PGA_DriveMode_1_ADDR:	equ	101h
Connect_BPF4_FinalStage_PGA_DriveMode_2_ADDR:	equ	3h
Connect_BPF4_FinalStage_PGA_GlobalSelect_ADDR:	equ	2h
Connect_BPF4_FinalStage_PGA_IntCtrl_0_ADDR:	equ	102h
Connect_BPF4_FinalStage_PGA_IntCtrl_1_ADDR:	equ	103h
Connect_BPF4_FinalStage_PGA_IntEn_ADDR:	equ	1h
Connect_BPF4_FinalStage_PGA_MASK:	equ	20h
; AnalogColumn_InputMUX_3 address and mask equates
AnalogColumn_InputMUX_3_Data_ADDR:	equ	0h
AnalogColumn_InputMUX_3_DriveMode_0_ADDR:	equ	100h
AnalogColumn_InputMUX_3_DriveMode_1_ADDR:	equ	101h
AnalogColumn_InputMUX_3_DriveMode_2_ADDR:	equ	3h
AnalogColumn_InputMUX_3_GlobalSelect_ADDR:	equ	2h
AnalogColumn_InputMUX_3_IntCtrl_0_ADDR:	equ	102h
AnalogColumn_InputMUX_3_IntCtrl_1_ADDR:	equ	103h
AnalogColumn_InputMUX_3_IntEn_ADDR:	equ	1h
AnalogColumn_InputMUX_3_MASK:	equ	40h
; I2CHWSDA address and mask equates
I2CHWSDA_Data_ADDR:	equ	4h
I2CHWSDA_DriveMode_0_ADDR:	equ	104h
I2CHWSDA_DriveMode_1_ADDR:	equ	105h
I2CHWSDA_DriveMode_2_ADDR:	equ	7h
I2CHWSDA_GlobalSelect_ADDR:	equ	6h
I2CHWSDA_IntCtrl_0_ADDR:	equ	106h
I2CHWSDA_IntCtrl_1_ADDR:	equ	107h
I2CHWSDA_IntEn_ADDR:	equ	5h
I2CHWSDA_MASK:	equ	20h
; I2CHWSCL address and mask equates
I2CHWSCL_Data_ADDR:	equ	4h
I2CHWSCL_DriveMode_0_ADDR:	equ	104h
I2CHWSCL_DriveMode_1_ADDR:	equ	105h
I2CHWSCL_DriveMode_2_ADDR:	equ	7h
I2CHWSCL_GlobalSelect_ADDR:	equ	6h
I2CHWSCL_IntCtrl_0_ADDR:	equ	106h
I2CHWSCL_IntCtrl_1_ADDR:	equ	107h
I2CHWSCL_IntEn_ADDR:	equ	5h
I2CHWSCL_MASK:	equ	80h
; DIGITAL_OUTPin address and mask equates
DIGITAL_OUTPin_Data_ADDR:	equ	8h
DIGITAL_OUTPin_DriveMode_0_ADDR:	equ	108h
DIGITAL_OUTPin_DriveMode_1_ADDR:	equ	109h
DIGITAL_OUTPin_DriveMode_2_ADDR:	equ	bh
DIGITAL_OUTPin_GlobalSelect_ADDR:	equ	ah
DIGITAL_OUTPin_IntCtrl_0_ADDR:	equ	10ah
DIGITAL_OUTPin_IntCtrl_1_ADDR:	equ	10bh
DIGITAL_OUTPin_IntEn_ADDR:	equ	9h
DIGITAL_OUTPin_MASK:	equ	10h
; DIGITAL_OUTPin_Data access macros
;   GetDIGITAL_OUTPin_Data macro, return in a
macro GetDIGITAL_OUTPin_Data
	mov		a,[Port_2_Data_SHADE]
	and		a, 10h
endm
;   SetDIGITAL_OUTPin_Data macro
macro SetDIGITAL_OUTPin_Data
	or		[Port_2_Data_SHADE], 10h
	mov		a, [Port_2_Data_SHADE]
	mov		reg[DIGITAL_OUTPin_Data_ADDR], a
endm
;   ClearDIGITAL_OUTPin_Data macro
macro ClearDIGITAL_OUTPin_Data
	and		[Port_2_Data_SHADE], ~10h
	mov		a, [Port_2_Data_SHADE]
	mov		reg[DIGITAL_OUTPin_Data_ADDR], a
endm

; LED_3Pin address and mask equates
LED_3Pin_Data_ADDR:	equ	8h
LED_3Pin_DriveMode_0_ADDR:	equ	108h
LED_3Pin_DriveMode_1_ADDR:	equ	109h
LED_3Pin_DriveMode_2_ADDR:	equ	bh
LED_3Pin_GlobalSelect_ADDR:	equ	ah
LED_3Pin_IntCtrl_0_ADDR:	equ	10ah
LED_3Pin_IntCtrl_1_ADDR:	equ	10bh
LED_3Pin_IntEn_ADDR:	equ	9h
LED_3Pin_MASK:	equ	20h
; LED_3Pin_Data access macros
;   GetLED_3Pin_Data macro, return in a
macro GetLED_3Pin_Data
	mov		a,[Port_2_Data_SHADE]
	and		a, 20h
endm
;   SetLED_3Pin_Data macro
macro SetLED_3Pin_Data
	or		[Port_2_Data_SHADE], 20h
	mov		a, [Port_2_Data_SHADE]
	mov		reg[LED_3Pin_Data_ADDR], a
endm
;   ClearLED_3Pin_Data macro
macro ClearLED_3Pin_Data
	and		[Port_2_Data_SHADE], ~20h
	mov		a, [Port_2_Data_SHADE]
	mov		reg[LED_3Pin_Data_ADDR], a
endm

; LED_2Pin address and mask equates
LED_2Pin_Data_ADDR:	equ	8h
LED_2Pin_DriveMode_0_ADDR:	equ	108h
LED_2Pin_DriveMode_1_ADDR:	equ	109h
LED_2Pin_DriveMode_2_ADDR:	equ	bh
LED_2Pin_GlobalSelect_ADDR:	equ	ah
LED_2Pin_IntCtrl_0_ADDR:	equ	10ah
LED_2Pin_IntCtrl_1_ADDR:	equ	10bh
LED_2Pin_IntEn_ADDR:	equ	9h
LED_2Pin_MASK:	equ	40h
; LED_2Pin_Data access macros
;   GetLED_2Pin_Data macro, return in a
macro GetLED_2Pin_Data
	mov		a,[Port_2_Data_SHADE]
	and		a, 40h
endm
;   SetLED_2Pin_Data macro
macro SetLED_2Pin_Data
	or		[Port_2_Data_SHADE], 40h
	mov		a, [Port_2_Data_SHADE]
	mov		reg[LED_2Pin_Data_ADDR], a
endm
;   ClearLED_2Pin_Data macro
macro ClearLED_2Pin_Data
	and		[Port_2_Data_SHADE], ~40h
	mov		a, [Port_2_Data_SHADE]
	mov		reg[LED_2Pin_Data_ADDR], a
endm

; LED_1Pin address and mask equates
LED_1Pin_Data_ADDR:	equ	8h
LED_1Pin_DriveMode_0_ADDR:	equ	108h
LED_1Pin_DriveMode_1_ADDR:	equ	109h
LED_1Pin_DriveMode_2_ADDR:	equ	bh
LED_1Pin_GlobalSelect_ADDR:	equ	ah
LED_1Pin_IntCtrl_0_ADDR:	equ	10ah
LED_1Pin_IntCtrl_1_ADDR:	equ	10bh
LED_1Pin_IntEn_ADDR:	equ	9h
LED_1Pin_MASK:	equ	80h
; LED_1Pin_Data access macros
;   GetLED_1Pin_Data macro, return in a
macro GetLED_1Pin_Data
	mov		a,[Port_2_Data_SHADE]
	and		a, 80h
endm
;   SetLED_1Pin_Data macro
macro SetLED_1Pin_Data
	or		[Port_2_Data_SHADE], 80h
	mov		a, [Port_2_Data_SHADE]
	mov		reg[LED_1Pin_Data_ADDR], a
endm
;   ClearLED_1Pin_Data macro
macro ClearLED_1Pin_Data
	and		[Port_2_Data_SHADE], ~80h
	mov		a, [Port_2_Data_SHADE]
	mov		reg[LED_1Pin_Data_ADDR], a
endm
