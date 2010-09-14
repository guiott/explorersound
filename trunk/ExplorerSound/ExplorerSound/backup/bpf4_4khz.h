//*****************************************************************************
//*****************************************************************************
//  FILENAME: BPF4_4KHz.h
//  Version: 1.0, Updated on 2009/10/15 at 17:11:37
//  Generated by PSoC Designer 5.0.1127.0
//
//  DESCRIPTION: C declarations for the BPF4 User Module.
//-----------------------------------------------------------------------------
//  Copyright (c) Cypress Semiconductor 2009. All Rights Reserved.
//*****************************************************************************
//*****************************************************************************
#ifndef BPF4_4KHz_INCLUDE
#define BPF4_4KHz_INCLUDE

#include <m8c.h>

#pragma fastcall16 BPF4_4KHz_Start
#pragma fastcall16 BPF4_4KHz_SetPower
#pragma fastcall16 BPF4_4KHz_Stop
#pragma fastcall16 BPF4_4KHz_SetC1L
#pragma fastcall16 BPF4_4KHz_SetC2L
#pragma fastcall16 BPF4_4KHz_SetC3L
#pragma fastcall16 BPF4_4KHz_SetC4L
#pragma fastcall16 BPF4_4KHz_SetC1H
#pragma fastcall16 BPF4_4KHz_SetC2H
#pragma fastcall16 BPF4_4KHz_SetC3H
#pragma fastcall16 BPF4_4KHz_SetC4H

//-------------------------------------------------
// Prototypes of the BPF4_4KHz API.
//-------------------------------------------------

extern void BPF4_4KHz_Start(BYTE bPowerSetting);
extern void BPF4_4KHz_SetPower(BYTE bPowerSetting);
extern void BPF4_4KHz_Stop(void);
extern void BPF4_4KHz_SetC1L(BYTE bCapValue);
extern void BPF4_4KHz_SetC2L(BYTE bCapValue);
extern void BPF4_4KHz_SetC3L(BYTE bCapValue);
extern void BPF4_4KHz_SetC4L(BYTE bCapValue);
extern void BPF4_4KHz_SetC1H(BYTE bCapValue);
extern void BPF4_4KHz_SetC2H(BYTE bCapValue);
extern void BPF4_4KHz_SetC3H(BYTE bCapValue);
extern void BPF4_4KHz_SetC4H(BYTE bCapValue);

//-------------------------------------------------
// Defines for BPF4_4KHz API's.
//-------------------------------------------------

#define BPF4_4KHz_LOWPOWER     (0x01)
#define BPF4_4KHz_MEDPOWER     (0x02)
#define BPF4_4KHz_HIGHPOWER    (0x03)

#define BPF4_4KHz_AMD_MSK      (0x7)
#define BPF4_4KHz_AMD_VAL      (0x0)

//-------------------------------------------------
// Hardware Register Definitions
//-------------------------------------------------

#pragma ioport  BPF4_4KHz_FLINL_CR0:    0x080    //Analog SCA control register 0
BYTE            BPF4_4KHz_FLINL_CR0;
#pragma ioport  BPF4_4KHz_FLINL_CR1:    0x081    //Analog SCA control register 1
BYTE            BPF4_4KHz_FLINL_CR1;
#pragma ioport  BPF4_4KHz_FLINL_CR2:    0x082    //Analog SCA control register 2
BYTE            BPF4_4KHz_FLINL_CR2;
#pragma ioport  BPF4_4KHz_FLINL_CR3:    0x083    //Analog SCA control register 3
BYTE            BPF4_4KHz_FLINL_CR3;

#pragma ioport  BPF4_4KHz_FLINH_CR0:    0x094    //Analog SCA control register 0
BYTE            BPF4_4KHz_FLINH_CR0;
#pragma ioport  BPF4_4KHz_FLINH_CR1:    0x095    //Analog SCA control register 1
BYTE            BPF4_4KHz_FLINH_CR1;
#pragma ioport  BPF4_4KHz_FLINH_CR2:    0x096    //Analog SCA control register 2
BYTE            BPF4_4KHz_FLINH_CR2;
#pragma ioport  BPF4_4KHz_FLINH_CR3:    0x097    //Analog SCA control register 3
BYTE            BPF4_4KHz_FLINH_CR3;

#pragma ioport  BPF4_4KHz_FLFBL_CR0:    0x090    //Analog SCB control register 0
BYTE            BPF4_4KHz_FLFBL_CR0;
#pragma ioport  BPF4_4KHz_FLFBL_CR1:    0x091    //Analog SCB control register 1
BYTE            BPF4_4KHz_FLFBL_CR1;
#pragma ioport  BPF4_4KHz_FLFBL_CR2:    0x092    //Analog SCB control register 2
BYTE            BPF4_4KHz_FLFBL_CR2;
#pragma ioport  BPF4_4KHz_FLFBL_CR3:    0x093    //Analog SCB control register 3
BYTE            BPF4_4KHz_FLFBL_CR3;

#pragma ioport  BPF4_4KHz_FLFBH_CR0:    0x084    //Analog SCB control register 0
BYTE            BPF4_4KHz_FLFBH_CR0;
#pragma ioport  BPF4_4KHz_FLFBH_CR1:    0x085    //Analog SCB control register 1
BYTE            BPF4_4KHz_FLFBH_CR1;
#pragma ioport  BPF4_4KHz_FLFBH_CR2:    0x086    //Analog SCB control register 2
BYTE            BPF4_4KHz_FLFBH_CR2;
#pragma ioport  BPF4_4KHz_FLFBH_CR3:    0x087    //Analog SCB control register 3
BYTE            BPF4_4KHz_FLFBH_CR3;

//  BPF4_4KHz Cap naming convention per Gregorian and Temes, p293

#pragma ioport  BPF4_4KHz_FILT_C1L_REG: 0x080
BYTE            BPF4_4KHz_FILT_C1L_REG;
#pragma ioport  BPF4_4KHz_FILT_C2L_REG: 0x081
BYTE            BPF4_4KHz_FILT_C2L_REG;
#pragma ioport  BPF4_4KHz_FILT_C3L_REG: 0x090
BYTE            BPF4_4KHz_FILT_C3L_REG;
#pragma ioport  BPF4_4KHz_FILT_C4L_REG: 0x092
BYTE            BPF4_4KHz_FILT_C4L_REG;

#pragma ioport  BPF4_4KHz_FILT_C1H_REG: 0x094
BYTE            BPF4_4KHz_FILT_C1H_REG;
#pragma ioport  BPF4_4KHz_FILT_C2H_REG: 0x095
BYTE            BPF4_4KHz_FILT_C2H_REG;
#pragma ioport  BPF4_4KHz_FILT_C3H_REG: 0x084
BYTE            BPF4_4KHz_FILT_C3H_REG;
#pragma ioport  BPF4_4KHz_FILT_C4H_REG: 0x086
BYTE            BPF4_4KHz_FILT_C4H_REG;

#pragma ioport  BPF4_4KHz_AMD_REG:     0x163 //Analog Modulator control Register
BYTE            BPF4_4KHz_AMD_REG;

#endif
// end of file BPF4_4KHz.h
