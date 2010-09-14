//*****************************************************************************
//*****************************************************************************
//  FILENAME: LED_2.h
//   Version: 1.2, Updated on 2009/10/9 at 10:6:29                                          
//  Generated by PSoC Designer 5.0.1127.0
//
//  DESCRIPTION: LED_2 User Module C Language interface file
//-----------------------------------------------------------------------------
//  Copyright (c) Cypress Semiconductor 2009. All Rights Reserved.
//*****************************************************************************
//*****************************************************************************

#include <m8c.h>


/* Create pragmas to support proper argument and return value passing */
#pragma fastcall16  LED_2_Stop
#pragma fastcall16  LED_2_Start
#pragma fastcall16  LED_2_On
#pragma fastcall16  LED_2_Off
#pragma fastcall16  LED_2_Switch
#pragma fastcall16  LED_2_Invert
#pragma fastcall16  LED_2_GetState


//-------------------------------------------------
// Constants for LED_2 API's.
//-------------------------------------------------
//
#define  LED_2_ON   1
#define  LED_2_OFF  0

//-------------------------------------------------
// Prototypes of the LED_2 API.
//-------------------------------------------------
extern void  LED_2_Start(void);                                     
extern void  LED_2_Stop(void);                                      
extern void  LED_2_On(void);                                      
extern void  LED_2_Off(void);                                      
extern void  LED_2_Switch(BYTE bSwitch);
extern void  LED_2_Invert(void);                                         
extern BYTE  LED_2_GetState(void);                                         

//-------------------------------------------------
// Define global variables.                 
//-------------------------------------------------




