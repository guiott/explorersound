BYTE PortIndx = 0;
int PotValue;		// ADC value read from potentiometer
int MesValue[3][3];	// Signal levels at input (indx 0), pre (indx 1) and OUT (indx 2)

unsigned int i;
unsigned int Tmr1=0;
unsigned int Tmr2=0;
long Time10ms=0;
BOOL TmrFlag = 0;
BYTE str[7];		// for TX procedures

// [5] Automatic Gain Control, limited in 1 to 16 range
// first parameter: register value
// second parameter: gain factor
BYTE GF[5][2]= {0xF8, 1, 
				0x78, 2, 
				0x38, 4, 
				0x18, 8, 
				0x08, 16};
			
// current index of Gain Factor (GF) for each input
// first index: input channel
// second index: 0 = PGA Pre, 1 = PGA Out
BYTE GainIndx[3][2]=   {2, 2, 
						2, 2, 
						2, 2};
						
#define V_MAX 650	// Upper threshold for AGC
#define V_MIN 100	// Lower threshold for AGC
#define I_MAX 4		// Upper limit for GainIndx 
#define I_MIN 0		// Lower limit fo GainIndx