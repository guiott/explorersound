int PotValue;		// ADC value read from potentiometer
int MesValue[3];	// ADC values read from three input
unsigned int i;
unsigned int Tmr1;
BOOL TmrFlag = 0;
BYTE str[7];		// for TX procedures

// Automatic Gain Control 
// first parameter: register value
// secod parameter: gain factor
BYTE GF[8][2]= {0x00, 0, 
				0xF8, 1, 
				0x78, 2, 
				0x38, 4, 
				0x18, 8, 
				0x08, 16, 
				0x1C, 24, 
				0x0C, 48};
			
// current index of Gain Factor (GF) for each input
// first index: input channel
// second index: 0 = PGA Pre, 1 = PGA Out
BYTE GainIndx[3][2]=   {3, 3, 
						3, 3, 
						3, 3};