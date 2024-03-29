//*****************************************************************************
//*****************************************************************************
//  FILENAME: HeartBeatTimer16.h
//   Version: 2.6, Updated on 2009/10/15 at 17:11:37
//  Generated by PSoC Designer 5.0.1127.0
//
//  DESCRIPTION: Timer16 User Module C Language interface file
//-----------------------------------------------------------------------------
//  Copyright (c) Cypress Semiconductor 2009. All Rights Reserved.
//*****************************************************************************
//*****************************************************************************

#include <m8c.h>

#pragma fastcall16 HeartBeatTimer16_EnableInt
#pragma fastcall16 HeartBeatTimer16_DisableInt
#pragma fastcall16 HeartBeatTimer16_Start
#pragma fastcall16 HeartBeatTimer16_Stop
#pragma fastcall16 HeartBeatTimer16_wReadTimer                // Read  DR0
#pragma fastcall16 HeartBeatTimer16_wReadTimerSaveCV          // Read  DR0      
#pragma fastcall16 HeartBeatTimer16_WritePeriod               // Write DR1
#pragma fastcall16 HeartBeatTimer16_wReadCompareValue         // Read  DR2
#pragma fastcall16 HeartBeatTimer16_WriteCompareValue         // Write DR2

// The following symbols are deprecated.
// They may be omitted in future releases
//
#pragma fastcall16 wHeartBeatTimer16_ReadCounter              // Read  DR0 "Obsolete"
#pragma fastcall16 wHeartBeatTimer16_CaptureCounter           // Read  DR0 "Obsolete"
#pragma fastcall16 wHeartBeatTimer16_ReadTimer                // Read  DR0 (Deprecated)
#pragma fastcall16 wHeartBeatTimer16_ReadTimerSaveCV          // Read  DR0 (Deprecated)
#pragma fastcall16 wHeartBeatTimer16_ReadCompareValue         // Read  DR2 (Deprecated)


//-------------------------------------------------
// Prototypes of the HeartBeatTimer16 API.
//-------------------------------------------------

extern void HeartBeatTimer16_EnableInt(void);                           // Proxy 1
extern void HeartBeatTimer16_DisableInt(void);                          // Proxy 1
extern void HeartBeatTimer16_Start(void);                               // Proxy 1
extern void HeartBeatTimer16_Stop(void);                                // Proxy 1
extern WORD HeartBeatTimer16_wReadTimer(void);                          // Proxy 1
extern WORD HeartBeatTimer16_wReadTimerSaveCV(void);                    // Proxy 2
extern void HeartBeatTimer16_WritePeriod(WORD wPeriod);                 // Proxy 1
extern WORD HeartBeatTimer16_wReadCompareValue(void);                   // Proxy 1
extern void HeartBeatTimer16_WriteCompareValue(WORD wCompareValue);     // Proxy 1

// The following functions are deprecated.
// They may be omitted in future releases
//
extern WORD wHeartBeatTimer16_ReadCompareValue(void);       // Deprecated
extern WORD wHeartBeatTimer16_ReadTimerSaveCV(void);        // Deprecated
extern WORD wHeartBeatTimer16_ReadCounter(void);            // Obsolete
extern WORD wHeartBeatTimer16_ReadTimer(void);              // Deprecated
extern WORD wHeartBeatTimer16_CaptureCounter(void);         // Obsolete


//--------------------------------------------------
// Constants for HeartBeatTimer16 API's.
//--------------------------------------------------

#define HeartBeatTimer16_CONTROL_REG_START_BIT ( 0x01 )
#define HeartBeatTimer16_INT_REG_ADDR          ( 0x0df )
#define HeartBeatTimer16_INT_MASK              ( 0x02 )


//--------------------------------------------------
// Constants for HeartBeatTimer16 user defined values
//--------------------------------------------------

#define HeartBeatTimer16_PERIOD                ( 0xc7f )
#define HeartBeatTimer16_COMPARE_VALUE         ( 0x0 )


//-------------------------------------------------
// Register Addresses for HeartBeatTimer16
//-------------------------------------------------

#pragma ioport  HeartBeatTimer16_COUNTER_LSB_REG:   0x040    //Count register LSB
BYTE            HeartBeatTimer16_COUNTER_LSB_REG;
#pragma ioport  HeartBeatTimer16_COUNTER_MSB_REG:   0x044    //Count register MSB
BYTE            HeartBeatTimer16_COUNTER_MSB_REG;
#pragma ioport  HeartBeatTimer16_PERIOD_LSB_REG:    0x041     //Period register LSB
BYTE            HeartBeatTimer16_PERIOD_LSB_REG;
#pragma ioport  HeartBeatTimer16_PERIOD_MSB_REG:    0x045     //Period register MSB
BYTE            HeartBeatTimer16_PERIOD_MSB_REG;
#pragma ioport  HeartBeatTimer16_COMPARE_LSB_REG:   0x042    //Compare register LSB
BYTE            HeartBeatTimer16_COMPARE_LSB_REG;
#pragma ioport  HeartBeatTimer16_COMPARE_MSB_REG:   0x046    //Compare register MSB
BYTE            HeartBeatTimer16_COMPARE_MSB_REG;
#pragma ioport  HeartBeatTimer16_CONTROL_LSB_REG:   0x043    //Control register LSB
BYTE            HeartBeatTimer16_CONTROL_LSB_REG;
#pragma ioport  HeartBeatTimer16_CONTROL_MSB_REG:   0x047    //Control register MSB
BYTE            HeartBeatTimer16_CONTROL_MSB_REG;
#pragma ioport  HeartBeatTimer16_FUNC_LSB_REG:  0x140      //Function register LSB
BYTE            HeartBeatTimer16_FUNC_LSB_REG;
#pragma ioport  HeartBeatTimer16_FUNC_MSB_REG:  0x144      //Function register MSB
BYTE            HeartBeatTimer16_FUNC_MSB_REG;
#pragma ioport  HeartBeatTimer16_INPUT_LSB_REG: 0x141      //Input register LSB
BYTE            HeartBeatTimer16_INPUT_LSB_REG;
#pragma ioport  HeartBeatTimer16_INPUT_MSB_REG: 0x145      //Input register MSB
BYTE            HeartBeatTimer16_INPUT_MSB_REG;
#pragma ioport  HeartBeatTimer16_OUTPUT_LSB_REG:    0x142     //Output register LSB
BYTE            HeartBeatTimer16_OUTPUT_LSB_REG;
#pragma ioport  HeartBeatTimer16_OUTPUT_MSB_REG:    0x146     //Output register MSB
BYTE            HeartBeatTimer16_OUTPUT_MSB_REG;
#pragma ioport  HeartBeatTimer16_INT_REG:       0x0df      //Interrupt Mask Register
BYTE            HeartBeatTimer16_INT_REG;


//-------------------------------------------------
// HeartBeatTimer16 Macro 'Functions'
//-------------------------------------------------

#define HeartBeatTimer16_Start_M \
   ( HeartBeatTimer16_CONTROL_LSB_REG |=  HeartBeatTimer16_CONTROL_REG_START_BIT )

#define HeartBeatTimer16_Stop_M  \
   ( HeartBeatTimer16_CONTROL_LSB_REG &= ~HeartBeatTimer16_CONTROL_REG_START_BIT )

#define HeartBeatTimer16_EnableInt_M   \
   M8C_EnableIntMask(  HeartBeatTimer16_INT_REG, HeartBeatTimer16_INT_MASK )

#define HeartBeatTimer16_DisableInt_M  \
   M8C_DisableIntMask( HeartBeatTimer16_INT_REG, HeartBeatTimer16_INT_MASK )


// end of file HeartBeatTimer16.h


