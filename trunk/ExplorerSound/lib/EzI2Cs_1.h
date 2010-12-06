//*****************************************************************************
//*****************************************************************************
//  FILENAME: EzI2Cs_1.h
//   Version: 1.2, Updated on 2009/10/15 at 17:11:37
//  Generated by PSoC Designer 5.0.1127.0
//
//  DESCRIPTION: EzI2Cs_1 User Module C Language interface file
//-----------------------------------------------------------------------------
//  Copyright (c) Cypress Semiconductor 2009. All Rights Reserved.
//*****************************************************************************
//*****************************************************************************

#include <m8c.h>

#define EzI2Cs_1_SLAVE_ADDR              0x50
#define EzI2Cs_1_DYNAMIC_ADDR            0
#define EzI2Cs_1_ROM_ENABLE              0
#define EzI2Cs_1_AUTO_ADDR_CHECK          0                          //CY8C28X45 may have this 0 or 1 while all other have 0
#define EzI2Cs_1_ADDR_REG_PRESENT         0                          //CY8C28X45 have 1 always while all other have 0

/* Create pragmas to support proper argument and return value passing */
#pragma fastcall16  EzI2Cs_1_Start
#pragma fastcall16  EzI2Cs_1_DisableInt
#pragma fastcall16  EzI2Cs_1_EnableInt
#pragma fastcall16  EzI2Cs_1_ResumeInt
#pragma fastcall16  EzI2Cs_1_Stop
#pragma fastcall16  EzI2Cs_1_SetRamBuffer
#pragma fastcall16  EzI2Cs_1_GetAddr
#pragma fastcall16  EzI2Cs_1_GetActivity

#if (EzI2Cs_1_DYNAMIC_ADDR | EzI2Cs_1_AUTO_ADDR_CHECK)
#pragma fastcall16  EzI2Cs_1_SetAddr
#endif

#if ( EzI2Cs_1_ROM_ENABLE )
#pragma fastcall16  EzI2Cs_1_SetRomBuffer
#endif

//-------------------------------------------------
// Constants for EzI2Cs_1_bBusy_Flag
//-------------------------------------------------
//
//
#define EzI2Cs_1_I2C_FREE                0x00    // No transaction at the current moment
#define EzI2Cs_1_I2C_BUSY_RAM_READ       0x01    // RAM read transaction in progress
#define EzI2Cs_1_I2C_BUSY_RAM_WRITE      0x02    // RAM write transaction in progress
#define EzI2Cs_1_I2C_BUSY_ROM_READ       0x04    // RAM read transaction in progress
#define EzI2Cs_1_I2C_BUSY_ROM_WRITE      0x08    // RAM write transaction in progress

//-------------------------------------------------
// Constants for EzI2Cs_1 API's.
//-------------------------------------------------
//
//
#define EzI2Cs_1_ACTIVITY_MASK   0xB0
#define EzI2Cs_1_ANY_ACTIVITY    0x80
#define EzI2Cs_1_READ_ACTIVITY   0x20
#define EzI2Cs_1_WRITE_ACTIVITY  0x10

//-------------------------------------------------
// Prototypes of the EzI2Cs_1 API.
//-------------------------------------------------
extern void  EzI2Cs_1_Start(void);                                         // Proxy Class 1, if Static Address
                                                                                   // Proxy Class 4, if Dynamic Address
extern void  EzI2Cs_1_DisableInt(void);                                    // Proxy Class 1
extern void  EzI2Cs_1_EnableInt(void);                                     // Proxy Class 1
extern void  EzI2Cs_1_ResumeInt(void);                                     // Proxy Class 1
extern void  EzI2Cs_1_Stop(void);                                          // Proxy Class 1
extern void  EzI2Cs_1_SetRamBuffer(BYTE bSize, BYTE bRWBoundary, BYTE * pAddr); // Proxy Class 4 
extern BYTE  EzI2Cs_1_GetAddr(void);                                       // Proxy Class 4
extern BYTE  EzI2Cs_1_GetActivity(void);                                   // Proxy Class 4

#if (EzI2Cs_1_DYNAMIC_ADDR | EzI2Cs_1_AUTO_ADDR_CHECK)
extern void  EzI2Cs_1_SetAddr(BYTE bAddr);                                 // Proxy Class 4
#endif

#if ( EzI2Cs_1_ROM_ENABLE )
extern void  EzI2Cs_1_SetRomBuffer(BYTE bSize, const BYTE * pAddr);        // Proxy Class 4
#endif

//-------------------------------------------------
// Define global variables.                 
//-------------------------------------------------
#if ( EzI2Cs_1_DYNAMIC_ADDR )
#if ( EzI2Cs_1_AUTO_ADDR_CHECK^1 )
extern   BYTE   EzI2Cs_1_bAddr;                                            // Proxy Class 1
#endif
#endif

extern   BYTE   EzI2Cs_1_bBusy_Flag;
