//*****************************************************************************
//*****************************************************************************
//  FILENAME:  ADCINCVR_mes.h
//  Version: 3.1, Updated on 2009/10/15 at 17:11:37
//  Generated by PSoC Designer 5.0.1127.0
//
//  DESCRIPTION:  ADCINCVR User Module C Language interface file.
//-----------------------------------------------------------------------------
//      Copyright (c) Cypress Semiconductor 2009. All Rights Reserved.
//*****************************************************************************
//*****************************************************************************

#include <m8C.h>

//-------------------------------------------------
// Defines for ADCINCVR_mes API's.
//-------------------------------------------------

// Power Setting Constants
#define ADCINCVR_mes_OFF            0
#define ADCINCVR_mes_LOWPOWER       1
#define ADCINCVR_mes_MEDPOWER       2
#define ADCINCVR_mes_HIGHPOWER      3

// Function Fastcall Pragmas
#pragma fastcall16 ADCINCVR_mes_Start
#pragma fastcall16 ADCINCVR_mes_SetPower
#pragma fastcall16 ADCINCVR_mes_GetSamples
#pragma fastcall16 ADCINCVR_mes_StopAD
#pragma fastcall16 ADCINCVR_mes_Stop
#pragma fastcall16 ADCINCVR_mes_fIsData
#pragma fastcall16 ADCINCVR_mes_fIsDataAvailable
#pragma fastcall16 ADCINCVR_mes_iGetData
#pragma fastcall16 ADCINCVR_mes_iGetDataClearFlag
#pragma fastcall16 ADCINCVR_mes_ClearFlag
#pragma fastcall16 ADCINCVR_mes_SetResolution

//-------------------------------------------------
// Prototypes of the ADCINCVR_mes API.
//-------------------------------------------------

extern void ADCINCVR_mes_Start(BYTE bPower);
extern void ADCINCVR_mes_SetPower(BYTE bPower);
extern void ADCINCVR_mes_GetSamples(BYTE bNumSamples);
extern void ADCINCVR_mes_StopAD(void);
extern void ADCINCVR_mes_Stop(void);
extern CHAR ADCINCVR_mes_fIsData(void);
extern CHAR ADCINCVR_mes_fIsDataAvailable(void);
extern INT  ADCINCVR_mes_iGetData(void);
extern INT  ADCINCVR_mes_iGetDataClearFlag(void);
extern void ADCINCVR_mes_ClearFlag(void);

extern void ADCINCVR_mes_SetResolution(BYTE bResolution);

#define ADCINCVR_mes_bNUMBITS  0x0b

//-------------------------------------------------
// Hardware Register Definitions
//-------------------------------------------------

// Integrator Block Register Definitions
#pragma ioport  ADCINCVR_mes_bfAtoDcr0: 0x08c
BYTE            ADCINCVR_mes_bfAtoDcr0;
#pragma ioport  ADCINCVR_mes_bfAtoDcr1: 0x08d
BYTE            ADCINCVR_mes_bfAtoDcr1;
#pragma ioport  ADCINCVR_mes_bfAtoDcr2: 0x08e
BYTE            ADCINCVR_mes_bfAtoDcr2;
#pragma ioport  ADCINCVR_mes_bfAtoDcr3: 0x08f
BYTE            ADCINCVR_mes_bfAtoDcr3;

// Counter Block Register Definitions
#pragma ioport  ADCINCVR_mes_fCounterFN:    0x120
BYTE            ADCINCVR_mes_fCounterFN;
#pragma ioport  ADCINCVR_mes_fCounterSL:    0x121
BYTE            ADCINCVR_mes_fCounterSL;
#pragma ioport  ADCINCVR_mes_fCounterOS:    0x122
BYTE            ADCINCVR_mes_fCounterOS;
#pragma ioport  ADCINCVR_mes_bCount:    0x020
BYTE            ADCINCVR_mes_bCount;
#pragma ioport  ADCINCVR_mes_bPeriod:   0x021
BYTE            ADCINCVR_mes_bPeriod;
#pragma ioport  ADCINCVR_mes_bCompare:  0x022
BYTE            ADCINCVR_mes_bCompare;
#pragma ioport  ADCINCVR_mes_bCounter_CR0:  0x023
BYTE            ADCINCVR_mes_bCounter_CR0;


// PWM16 Block Register Definitions
#pragma ioport  ADCINCVR_mes_bfPWM_LSB_FN:  0x124
BYTE            ADCINCVR_mes_bfPWM_LSB_FN;
#pragma ioport  ADCINCVR_mes_bfPWM_MSB_FN:  0x128
BYTE            ADCINCVR_mes_bfPWM_MSB_FN;
#pragma ioport  ADCINCVR_mes_fPWM_LSB_CR0:  0x027
BYTE            ADCINCVR_mes_fPWM_LSB_CR0;
#pragma ioport  ADCINCVR_mes_fPWM_MSB_CR0:  0x02b
BYTE            ADCINCVR_mes_fPWM_MSB_CR0;
#pragma ioport  ADCINCVR_mes_bPWM_Count_MSB:    0x028
BYTE            ADCINCVR_mes_bPWM_Count_MSB;
#pragma ioport  ADCINCVR_mes_bPWM_Count_LSB:    0x024
BYTE            ADCINCVR_mes_bPWM_Count_LSB;
#pragma ioport  ADCINCVR_mes_bPWM_Period_MSB:   0x029
BYTE            ADCINCVR_mes_bPWM_Period_MSB;
#pragma ioport  ADCINCVR_mes_bPWM_Period_LSB:   0x025
BYTE            ADCINCVR_mes_bPWM_Period_LSB;
#pragma ioport  ADCINCVR_mes_bPWM_IntTime_MSB:  0x02a
BYTE            ADCINCVR_mes_bPWM_IntTime_MSB;
#pragma ioport  ADCINCVR_mes_bPWM_IntTime_LSB:  0x026
BYTE            ADCINCVR_mes_bPWM_IntTime_LSB;
#pragma ioport  ADCINCVR_mes_bfPWM_LSB_FN:  0x124
BYTE            ADCINCVR_mes_bfPWM_LSB_FN;
#pragma ioport  ADCINCVR_mes_bfPWM_MSB_FN:  0x128
BYTE            ADCINCVR_mes_bfPWM_MSB_FN;

// end of file ADCINCVR_mes.h
