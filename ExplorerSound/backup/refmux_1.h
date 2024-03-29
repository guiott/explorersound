//*****************************************************************************
//*****************************************************************************
//  FILENAME:  RefMux_1.h
//  Version: 1.3, Updated on 2009/10/15 at 17:11:37
//  Generated by PSoC Designer 5.0.1127.0
//
//  DESCRIPTION:
//  DESCRIPTION: RefMux User Module C Language interface file.
//-----------------------------------------------------------------------------
//      Copyright (c) Cypress Semiconductor 2009. All Rights Reserved.
//*****************************************************************************
//*****************************************************************************
#include <m8c.h>

//-------------------------------------------------
// Constants for RefMux_1 API's.
//-------------------------------------------------
#define RefMux_1_MUXOFF                0x00
#define RefMux_1_PMUXOUT               0x10
#define RefMux_1_AGND                  0x14
#define RefMux_1_REFLO                 0x18
#define RefMux_1_REFHI                 0x1C

#define RefMux_1_OFF                   0
#define RefMux_1_LOWPOWER              1
#define RefMux_1_MEDPOWER              2
#define RefMux_1_HIGHPOWER             3


#pragma fastcall16 RefMux_1_Start
#pragma fastcall16 RefMux_1_SetPower
#pragma fastcall16 RefMux_1_Stop
#pragma fastcall16 RefMux_1_RefSelect

//-------------------------------------------------
// Prototypes of the RefMux_1 API.
//-------------------------------------------------
extern void RefMux_1_Start(BYTE bPower);
extern void RefMux_1_SetPower(BYTE bPower);
extern void RefMux_1_Stop( void );
extern void RefMux_1_RefSelect(BYTE bRef);


//-------------------------------------------------
// Register Addresses for RefMux_1
//-------------------------------------------------

#pragma ioport  RefMux_1_REFMUX_CR0:    0x07d
BYTE            RefMux_1_REFMUX_CR0;
#pragma ioport  RefMux_1_REFMUX_CR1:    0x07e
BYTE            RefMux_1_REFMUX_CR1;
#pragma ioport  RefMux_1_REFMUX_CR2:    0x07f
BYTE            RefMux_1_REFMUX_CR2;
#pragma ioport  RefMux_1_REFMUX_CR3:    0x07c
BYTE            RefMux_1_REFMUX_CR3;

// end of file RefMux_1.
