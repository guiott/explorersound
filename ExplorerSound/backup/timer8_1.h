//*****************************************************************************
//*****************************************************************************
//  FILENAME: Timer8_1.h
//   Version: 2.6, Updated on 2009/10/15 at 17:11:37
//  Generated by PSoC Designer 5.0.1127.0
//
//  DESCRIPTION: Timer8 User Module C Language interface file
//-----------------------------------------------------------------------------
//  Copyright (c) Cypress Semiconductor 2009. All Rights Reserved.
//*****************************************************************************
//*****************************************************************************

#include <m8c.h>

#pragma fastcall16 Timer8_1_EnableInt                 //                 Proxy 1
#pragma fastcall16 Timer8_1_DisableInt                //                 Proxy 1
#pragma fastcall16 Timer8_1_Start                     //                 Proxy 1
#pragma fastcall16 Timer8_1_Stop                      //                 Proxy 1
#pragma fastcall16 Timer8_1_bReadTimer                // Read  DR0       Proxy 1
#pragma fastcall16 Timer8_1_bReadTimerSaveCV          // Read  DR0       Proxy 2
#pragma fastcall16 Timer8_1_WritePeriod               // Write DR1       Proxy 1
#pragma fastcall16 Timer8_1_bReadCompareValue         // Read  DR2       Proxy 1
#pragma fastcall16 Timer8_1_WriteCompareValue         // Write DR2       Proxy 1

// The following symbols are deprecated.
// They may be omitted in future releases
//
#pragma fastcall16 bTimer8_1_ReadCounter              // Read  DR0 "Obsolete"
#pragma fastcall16 bTimer8_1_CaptureCounter           // Read  DR0 "Obsolete"
#pragma fastcall16 bTimer8_1_ReadTimer                // Read  DR0 (Deprecated)
#pragma fastcall16 bTimer8_1_ReadTimerSaveCV          // Read  DR0 (Deprecated)
#pragma fastcall16 bTimer8_1_ReadCompareValue         // Read  DR2 (Deprecated)


//-------------------------------------------------
// Prototypes of the Timer8_1 API.
//-------------------------------------------------

extern void Timer8_1_EnableInt(void);
extern void Timer8_1_DisableInt(void);
extern void Timer8_1_Start(void);
extern void Timer8_1_Stop(void);
extern BYTE Timer8_1_bReadTimer(void);
extern BYTE Timer8_1_bReadTimerSaveCV(void);
extern void Timer8_1_WritePeriod(BYTE bPeriod);
extern BYTE Timer8_1_bReadCompareValue(void);
extern void Timer8_1_WriteCompareValue(BYTE bCompareValue);

// The following functions are deprecated.
// They may be omitted in future releases
//
extern BYTE bTimer8_1_ReadCompareValue(void);       // Deprecated
extern BYTE bTimer8_1_ReadTimerSaveCV(void);        // Deprecated
extern BYTE bTimer8_1_ReadCounter(void);            // Obsolete
extern BYTE bTimer8_1_ReadTimer(void);              // Deprecated
extern BYTE bTimer8_1_CaptureCounter(void);         // Obsolete


//--------------------------------------------------
// Constants for Timer8_1 API's.
//--------------------------------------------------

#define Timer8_1_CONTROL_REG_START_BIT         ( 0x01 )
#define Timer8_1_INT_REG_ADDR                  ( 0x0e1 )
#define Timer8_1_INT_MASK                      ( 0x40 )


//--------------------------------------------------
// Constants for Timer8_1 user defined values
//--------------------------------------------------

#define Timer8_1_PERIOD                        ( 0xc8 )
#define Timer8_1_COMPARE_VALUE                 ( 0x00 )


//-------------------------------------------------
// Register Addresses for Timer8_1
//-------------------------------------------------

#pragma ioport  Timer8_1_COUNTER_REG:   0x038              //DR0 Count register
BYTE            Timer8_1_COUNTER_REG;
#pragma ioport  Timer8_1_PERIOD_REG:    0x039              //DR1 Period register
BYTE            Timer8_1_PERIOD_REG;
#pragma ioport  Timer8_1_COMPARE_REG:   0x03a              //DR2 Compare register
BYTE            Timer8_1_COMPARE_REG;
#pragma ioport  Timer8_1_CONTROL_REG:   0x03b              //Control register
BYTE            Timer8_1_CONTROL_REG;
#pragma ioport  Timer8_1_FUNC_REG:  0x138                  //Function register
BYTE            Timer8_1_FUNC_REG;
#pragma ioport  Timer8_1_INPUT_REG: 0x139                  //Input register
BYTE            Timer8_1_INPUT_REG;
#pragma ioport  Timer8_1_OUTPUT_REG:    0x13a              //Output register
BYTE            Timer8_1_OUTPUT_REG;
#pragma ioport  Timer8_1_INT_REG:       0x0e1              //Interrupt Mask Register
BYTE            Timer8_1_INT_REG;


//-------------------------------------------------
// Timer8_1 Macro 'Functions'
//-------------------------------------------------

#define Timer8_1_Start_M \
   ( Timer8_1_CONTROL_REG |=  Timer8_1_CONTROL_REG_START_BIT )

#define Timer8_1_Stop_M  \
   ( Timer8_1_CONTROL_REG &= ~Timer8_1_CONTROL_REG_START_BIT )

#define Timer8_1_EnableInt_M   \
   M8C_EnableIntMask(  Timer8_1_INT_REG, Timer8_1_INT_MASK )

#define Timer8_1_DisableInt_M  \
   M8C_DisableIntMask( Timer8_1_INT_REG, Timer8_1_INT_MASK )


// end of file Timer8_1.h
