/* ////////////////////////////////////////////////////////////////////////////
** Project:      ExplorerSound
** Author:    Guido Ottaviani-->guido@guiott.com<--
** Description: 
** version 0.3   15-09-2010
**
** Detailed descriptions are on file "Notes.txt" 
**
-------------------------------------------------------------------------------
Copyright 2010 Guido Ottaviani
guido@guiott.com

	ExplorerSound is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    ExplorerSound is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with ExplorerSound.  If not, see <http://www.gnu.org/licenses/>.
-------------------------------------------------------------------------------      
/////////////////////////////////////////////////////////////////////////////*/

#include <m8c.h>        // part specific constants and macros
#include <stdlib.h>
#include "PSoCAPI.h"    // PSoC API definitions for all User Modules
#include "prototypes.h"
#include "definitions.h"
#include "delay.h"

#pragma interrupt_handler HB_Tmr_ISR_C // int handler for program clock

void main(void)
{
	BYTE PortNum[3];
	BYTE PortIndx = 0;
	
	BlocksInit();
	
	M8C_EnableGInt ;               // Turn on interrupts 
	
 	LED_2_On();
	PortNum[0] = AMUX4_mic_PORT0_1;
	PortNum[1] = AMUX4_mic_PORT0_3;
	PortNum[2] = AMUX4_mic_PORT0_7;
	
	LedTest();
	
	// Main loop=============================================================
	while (1)
	{
		if(ADCINCVR_pot_fIsDataAvailable() != 0)// Wait for data to be ready
        {   
			// Get Data, Clear data ready flag, in the range 0-1800
			PotValue = ADCINCVR_pot_iGetDataClearFlag()+900;
			
			// ??????????????? DEBUG ??????????????
			if (PotValue < 200)	GainIndx[1][0] = 0;
			if (PotValue >= 200 && PotValue < 400)	GainIndx[1][0] = 1;
			if (PotValue >= 400 && PotValue < 600)	GainIndx[1][0] = 2;
			if (PotValue >= 600 && PotValue < 800)	GainIndx[1][0] = 3;
			if (PotValue >= 800 && PotValue < 1000)	GainIndx[1][0] = 4;
			if (PotValue >= 1000 && PotValue < 1200)	GainIndx[1][0] = 5;
			if (PotValue >= 1200 && PotValue < 1400)	GainIndx[1][0] = 6;
			if (PotValue >= 1400)	GainIndx[1][0] = 7;
			
			PGA_pre_SetGain(GF[GainIndx[1][0]][0]);
			// ??????????????????DEBUG ????????????????
		}
        
		if(ADCINCVR_mes_fIsDataAvailable() != 0)// Wait for data to be ready
        {   
			// Get Data, Clear data ready flag
			MesValue[PortIndx] = ADCINCVR_mes_iGetDataClearFlag(); 
														  
			PortIndx++; // next mux port
			if (PortIndx <3)
			{
			//	AMUX4_mic_InputSelect(PortIndx); ????????????????????????????????????
				ADCINCVR_mes_GetSamples(1); // Start ADC to read once more
			}
		}
		
		if (TmrFlag) // every 10ms
		{
			TmrFlag = 0;
			PortIndx= 0;
				
		//	AMUX4_mic_InputSelect(PortIndx); ???????????????????????????????????????????
			ADCINCVR_mes_GetSamples(1);    // Start ADC to read 1 sample
			ADCINCVR_pot_GetSamples(1);    // Start ADC to read 1 sample 
			
			DigitalOut();
		}
		
		if (Tmr1) // every 100ms
		{
			Tmr1 = 0;
			UartTxValues();
		}
	}// ========================================================== Main loop 
}

// Functions ***************************************************************
void DigitalOut(void)
{// Controls the outputs according to pot setting point
	DIGITAL_OUT_Off();
	if (MesValue[0]>PotValue)
	{
		DIGITAL_OUT_On();
		LED_1_On();
	}
	else
	{
		LED_1_Off();
	}
		
	if (MesValue[1]>PotValue)
	{
		DIGITAL_OUT_On();
		LED_2_On();
	}
	else
	{
		LED_2_Off();
	}
	
	if (MesValue[2]>PotValue)
	{
		DIGITAL_OUT_On();
		LED_3_On();
	}
	else
	{
		LED_3_Off();
	}
}

void UartTxValues(void)
{/* Transmit via UART the analog values read from various inputs.
	Usefull for debugging purposes, it could be converted in a
	command string using the same protocol used for dsNav if
	needed to output sound level values via serial comm
*/
	TX8_CPutString("\n\rPot Value = ");
	itoa(str, PotValue,10);
	TX8_PutString(str);
	TX8_CPutString("    Mes Value: 1 = ");
	itoa(str, MesValue[0],10);
	TX8_PutString(str);
	TX8_CPutString("  -  2 = ");
	itoa(str, MesValue[1],10);
	TX8_PutString(str);
	TX8_CPutString("  -  3 = ");
	itoa(str, MesValue[2],10);
	TX8_PutString(str);
	TX8_CPutString("  Gain = ");
	itoa(str, GF[GainIndx[1][0]][1], 10);
	TX8_PutString(str);	
}
	
void BlocksInit(void)
{// Analog and digital blocks inizialization
	ADCINCVR_pot_Start(ADCINCVR_pot_HIGHPOWER);	
	ADCINCVR_mes_Start(ADCINCVR_mes_HIGHPOWER);
	AMUX4_mic_Start();
	BPF4_4KHz_Start(BPF4_4KHz_HIGHPOWER);
	I2CHW_Start();
	PGA_out_Start(PGA_out_HIGHPOWER);
	PGA_pre_Start(PGA_pre_HIGHPOWER); 
	RefMux_1_Start(RefMux_1_HIGHPOWER);
    SCBLOCK_inbuff_Start(SCBLOCK_inbuff_HIGHPOWER);
	LED_1_Start();
	LED_2_Start();
	LED_3_Start();
	DIGITAL_OUT_Start();  
	
	TX8_EnableInt();
	TX8_Start(TX8_PARITY_NONE);
	
	AMUX4_mic_InputSelect(AMUX4_mic_PORT0_1);
	PGA_pre_SetGain(PGA_pre_G48_0);
	
    HB_Tmr_EnableInt();  
	HB_Tmr_Start();  	
}
	
void HB_Tmr_ISR_C(void)
{// Base clock for all of the timings in the program
	TmrFlag = 1;
	Tmr1++;
}

void DelayMs(int Ms)
{
	int i;
	for (i=0; i<Ms; i++)
	{
		Delay50uTimes(20);
	}
}

void LedTest(void)
{
	int i;
	LED_1_Off();
	LED_2_Off();
	LED_3_Off();
	
	for (i=0; i<3; i++)
	{
		LED_1_On();
		DelayMs(500);
		LED_1_Off();
		LED_2_On();
		DelayMs(500);
		LED_2_Off();
		LED_3_On();
		DelayMs(500);
		LED_3_Off();
	}
}