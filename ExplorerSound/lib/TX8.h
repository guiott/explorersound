//*****************************************************************************
//*****************************************************************************
//  FILENAME: TX8.h
//   Version: 3.3, Updated on 2009/10/23 at 10:13:12
//  Generated by PSoC Designer 5.0.1127.0
//
//  DESCRIPTION: TX8 User Module C Language interface file.
//-----------------------------------------------------------------------------
//      Copyright (c) Cypress Semiconductor 2009. All Rights Reserved.
//*****************************************************************************
//*****************************************************************************

#include <m8c.h>

/* Create pragmas to support proper argument and return value passing */
#pragma fastcall16  TX8_SetTxIntMode
#pragma fastcall16  TX8_EnableInt
#pragma fastcall16  TX8_DisableInt
#pragma fastcall16  TX8_Start
#pragma fastcall16  TX8_Stop
#pragma fastcall16  TX8_SendData
#pragma fastcall16  TX8_bReadTxStatus

// High level TX functions
#pragma fastcall16  TX8_PutSHexByte
#pragma fastcall16  TX8_PutSHexInt
#pragma fastcall16  TX8_CPutString
#pragma fastcall16  TX8_PutString
#pragma fastcall16  TX8_PutChar
#pragma fastcall16  TX8_Write
#pragma fastcall16  TX8_CWrite
#pragma fastcall16  TX8_PutCRLF

//-------------------------------------------------
// Prototypes of the TX8 API.
//-------------------------------------------------
extern void  TX8_SetTxIntMode(BYTE bTxIntMode);
extern void  TX8_EnableInt(void);
extern void  TX8_DisableInt(void);
extern void  TX8_Start(BYTE bParity);
extern void  TX8_Stop(void);
extern void  TX8_SendData(BYTE bTxData);
extern BYTE  TX8_bReadTxStatus(void);

// High level TX functions
extern void   TX8_CPutString(const char * szRomString);
extern void   TX8_PutString(char * szRamString);
extern void   TX8_PutChar(CHAR cData);
extern void   TX8_Write(char * szRamString, BYTE bCount);
extern void   TX8_CWrite(const char * szRomString, INT iCount);
extern void   TX8_PutSHexByte(BYTE bValue);
extern void   TX8_PutSHexInt(INT iValue);
extern void   TX8_PutCRLF(void);

// Old style function name, Do Not Use.
// Will be removfr in a future release
#pragma fastcall16 bTX8_ReadTxStatus
extern BYTE bTX8_ReadTxStatus(void);

//------------------------------------
//  Transmitter Parity masks
//------------------------------------
#define  TX8_PARITY_NONE         0x00
#define  TX8_PARITY_EVEN         0x02
#define  TX8_PARITY_ODD          0x06

//------------------------------------
//  Transmitter Status Register masks
//------------------------------------
#define  TX8_TX_COMPLETE         0x20
#define  TX8_TX_BUFFER_EMPTY     0x10

#define TX8_INT_MODE_TX_REG_EMPTY 0x00
#define TX8_INT_MODE_TX_COMPLETE  0x01

//------------------------------------
// Transmitter Interrupt masks
//------------------------------------
#define TX8_INT_REG_ADDR                       ( 0x0e1 )
#define TX8_bINT_MASK                          ( 0x80 )

// Old style defines, do not use.  These
// will be removed in a future release.
#define  TX8_PARITY_NONE         0x00
#define  TX8_PARITY_EVEN         0x02
#define  TX8_PARITY_ODD          0x06
#define  TX8_TX_COMPLETE         0x20
#define  TX8_TX_BUFFER_EMPTY     0x10



//-------------------------------------------------
// Register Addresses for TX8
//-------------------------------------------------
#pragma ioport  TX8_CONTROL_REG:    0x03f                  // Control register
BYTE            TX8_CONTROL_REG;
#pragma ioport  TX8_TX_SHIFT_REG:   0x03c                  // TX Shift Register register
BYTE            TX8_TX_SHIFT_REG;
#pragma ioport  TX8_TX_BUFFER_REG:  0x03d                  // TX Buffer Register
BYTE            TX8_TX_BUFFER_REG;
#pragma ioport  TX8_FUNC_REG:   0x13c                      // Function register
BYTE            TX8_FUNC_REG;
#pragma ioport  TX8_INPUT_REG:  0x13d                      // Input register
BYTE            TX8_INPUT_REG;
#pragma ioport  TX8_OUTPUT_REG: 0x13e                      // Output register
BYTE            TX8_OUTPUT_REG;

// end of file TX8.h
