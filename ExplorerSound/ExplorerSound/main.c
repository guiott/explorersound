//----------------------------------------------------------------------------
// C main line
//----------------------------------------------------------------------------

#include <m8c.h>        // part specific constants and macros
#include "PSoCAPI.h"    // PSoC API definitions for all User Modules


void main(void)
{
    //****************** Blocks Init
	ADCINCVR_pot_Start(ADCINCVR_pot_HIGHPOWER);
	ADCINCVR_mes_Start(ADCINCVR_mes_HIGHPOWER);
	AMUX4_mic_Start();
	BPF4_4KHz_Start(BPF4_4KHz_HIGHPOWER);
	I2CHW_Start();
	PGA_out_Start(PGA_out_HIGHPOWER);
	PGA_pre_Start(PGA_pre_HIGHPOWER); 
	PGA_pre_SetGain(PGA_pre_G1_00);
	RefMux_1_Start(RefMux_1_HIGHPOWER);
    SCBLOCK_inbuff_Start(SCBLOCK_inbuff_HIGHPOWER);	
	AMUX4_mic_InputSelect(AMUX4_mic_PORT0_1);
	while (1)
	{
	
	}
}
