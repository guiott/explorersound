Project:      output/ExplorerSound
Build Number: 0
Date:         Mon Nov  1 22:52:28 2010
Compiler:     ICCM8C
Version:      7.02.004

  ROM 19% full. 5906 out of 32768 bytes used (does not include absolute areas).
  RAM 5% full. 83 bytes used (does not include stack usage).

Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                             lit   01A0   0285 =    645. bytes (rel,con,rom)

       Addr  Global Symbol
      -----  --------------------------------
       020A  LoadConfigTBL_explorersound_Bank0
       02DF  LoadConfigTBL_explorersound_Bank1
       033A  LoadConfigTBL_explorersound_Ordered
       0425  __lit_end

Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                        func_lit   0425   0002 =      2. bytes (rel,con,rom)

       Addr  Global Symbol
      -----  --------------------------------
       0425  __func_lit_start
       0427  __func_lit_end

Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                     psoc_config   0427   0065 =    101. bytes (rel,con,rom)

       Addr  Global Symbol
      -----  --------------------------------
       0427  _LoadConfigInit
       0427  LoadConfigInit
       0431  _LoadConfig_explorersound
       0431  LoadConfig_explorersound
       048C  __psoc_config_end

Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                     UserModules   048C   07AE =   1966. bytes (rel,con,rom)

       Addr  Global Symbol
      -----  --------------------------------
       048C  _TX8_EnableInt
       048C  TX8_EnableInt
       0490  TX8_DisableInt
       0490  _TX8_DisableInt
       0494  _TX8_SetTxIntMode
       0494  TX8_SetTxIntMode
       04A6  _TX8_Start
       04A6  TX8_Start
       04AB  _TX8_Stop
       04AB  TX8_Stop
       04AF  _TX8_SendData
       04AF  TX8_SendData
       04B2  TX8_bReadTxStatus
       04B2  bTX8_ReadTxStatus
       04B2  _bTX8_ReadTxStatus
       04B2  _TX8_bReadTxStatus
       04C5  TX8_PutSHexByte
       04C5  _TX8_PutSHexByte
       04D8  TX8_PutSHexInt
       04D8  _TX8_PutSHexInt
       04DF  TX8_PutChar
       04DF  _TX8_PutChar
       04E7  _TX8_PutString
       04E7  TX8_PutString
       04F9  TX8_Write
       04F9  _TX8_Write
       0521  _TX8_CWrite
       0521  TX8_CWrite
       0549  TX8_CPutString
       0549  _TX8_CPutString
       055B  _TX8_PutCRLF
       055B  TX8_PutCRLF
       0564  SCBLOCK_inbuff_Start
       0564  _SCBLOCK_inbuff_SetPower
       0564  SCBLOCK_inbuff_SetPower
       0564  _SCBLOCK_inbuff_Start
       0578  _SCBLOCK_inbuff_Stop
       0578  SCBLOCK_inbuff_Stop
       057C  _RefMux_1_SetPower
       057C  _RefMux_1_Start
       057C  RefMux_1_Start
       057C  RefMux_1_SetPower
       058E  RefMux_1_Stop
       058E  _RefMux_1_Stop
       0592  _RefMux_1_RefSelect
       0592  RefMux_1_RefSelect
       05A4  PGA_pre_SetPower
       05A4  _PGA_pre_SetPower
       05A4  PGA_pre_Start
       05A4  _PGA_pre_Start
       05B6  _PGA_pre_SetGain
       05B6  PGA_pre_SetGain
       05E0  PGA_pre_Stop
       05E0  _PGA_pre_Stop
       05E4  PGA_out_Start
       05E4  _PGA_out_Start
       05E4  PGA_out_SetPower
       05E4  _PGA_out_SetPower
       05F6  PGA_out_SetGain
       05F6  _PGA_out_SetGain
       0620  _PGA_out_Stop
       0620  PGA_out_Stop
       0624  _LED_3_On
       0624  LED_3_On
       0628  _LED_3_Start
       0628  LED_3_Stop
       0628  LED_3_Off
       0628  _LED_3_Off
       0628  _LED_3_Stop
       0628  LED_3_Start
       062A  LED_3_Switch
       062A  _LED_3_Switch
       0642  _LED_3_Invert
       0642  LED_3_Invert
       0651  _LED_3_GetState
       0651  LED_3_GetState
       0661  _LED_2_On
       0661  LED_2_On
       0665  _LED_2_Stop
       0665  _LED_2_Start
       0665  LED_2_Off
       0665  LED_2_Start
       0665  _LED_2_Off
       0665  LED_2_Stop
       0667  LED_2_Switch
       0667  _LED_2_Switch
       067F  _LED_2_Invert
       067F  LED_2_Invert
       068E  LED_2_GetState
       068E  _LED_2_GetState
       069E  _LED_1_On
       069E  LED_1_On
       06A2  LED_1_Start
       06A2  _LED_1_Stop
       06A2  LED_1_Stop
       06A2  _LED_1_Off
       06A2  LED_1_Off
       06A2  _LED_1_Start
       06A4  _LED_1_Switch
       06A4  LED_1_Switch
       06BC  _LED_1_Invert
       06BC  LED_1_Invert
       06CB  LED_1_GetState
       06CB  _LED_1_GetState
       06DB  I2CHW_Start
       06DB  _I2CHW_Start
       06DC  I2CHW_ResumeInt
       06DC  _I2CHW_ResumeInt
       06DF  _I2CHW_EnableInt
       06DF  I2CHW_EnableInt
       06EB  _I2CHW_ClearInt
       06EB  I2CHW_ClearInt
       06F4  I2CHW_EnableMstr
       06F4  _I2CHW_EnableMstr
       0704  I2CHW_EnableSlave
       0704  _I2CHW_EnableSlave
       0708  _I2CHW_Stop
       0708  I2CHW_DisableInt
       0708  _I2CHW_DisableInt
       0708  I2CHW_Stop
       070C  _I2CHW_DisableSlave
       070C  I2CHW_DisableSlave
       0710  _I2CHW_DisableMstr
       0710  I2CHW_DisableMstr
       0714  I2CHW_Poll
       0714  _I2CHW_Poll
       0715  _I2CHW_ISR
       082B  _HB_Tmr_ISR
       082F  HB_Tmr_EnableInt
       082F  _HB_Tmr_EnableInt
       0833  _HB_Tmr_DisableInt
       0833  HB_Tmr_DisableInt
       0837  _HB_Tmr_Start
       0837  HB_Tmr_Start
       083B  HB_Tmr_Stop
       083B  _HB_Tmr_Stop
       083F  HB_Tmr_WritePeriod
       083F  _HB_Tmr_WritePeriod
       0845  HB_Tmr_WriteCompareValue
       0845  _HB_Tmr_WriteCompareValue
       084B  _wHB_Tmr_ReadCompareValue
       084B  _HB_Tmr_wReadCompareValue
       084B  wHB_Tmr_ReadCompareValue
       084B  HB_Tmr_wReadCompareValue
       0851  _HB_Tmr_wReadTimerSaveCV
       0851  _wHB_Tmr_ReadTimerSaveCV
       0851  HB_Tmr_wReadTimerSaveCV
       0851  wHB_Tmr_ReadTimerSaveCV
       0851  _wHB_Tmr_ReadCounter
       0851  wHB_Tmr_ReadCounter
       0887  _HB_Tmr_wReadTimer
       0887  _wHB_Tmr_ReadTimer
       0887  HB_Tmr_wReadTimer
       0887  wHB_Tmr_ReadTimer
       0887  _wHB_Tmr_CaptureCounter
       0887  wHB_Tmr_CaptureCounter
       088F  DIGITAL_OUT_On
       088F  _DIGITAL_OUT_On
       0893  _DIGITAL_OUT_Off
       0893  _DIGITAL_OUT_Start
       0893  DIGITAL_OUT_Off
       0893  DIGITAL_OUT_Stop
       0893  _DIGITAL_OUT_Stop
       0893  DIGITAL_OUT_Start
       0895  _DIGITAL_OUT_Switch
       0895  DIGITAL_OUT_Switch
       08AD  _DIGITAL_OUT_Invert
       08AD  DIGITAL_OUT_Invert
       08BC  DIGITAL_OUT_GetState
       08BC  _DIGITAL_OUT_GetState
       08CC  BPF4_4KHz_Start
       08CC  _BPF4_4KHz_SetPower
       08CC  BPF4_4KHz_SetPower
       08CC  _BPF4_4KHz_Start
       08F6  BPF4_4KHz_Stop
       08F6  _BPF4_4KHz_Stop
       0903  _BPF4_4KHz_SetC1L
       0903  BPF4_4KHz_SetC1L
       0915  BPF4_4KHz_SetC2L
       0915  _BPF4_4KHz_SetC2L
       0927  BPF4_4KHz_SetC3L
       0927  _BPF4_4KHz_SetC3L
       0939  BPF4_4KHz_SetC4L
       0939  _BPF4_4KHz_SetC4L
       094B  _BPF4_4KHz_SetC1H
       094B  BPF4_4KHz_SetC1H
       095D  _BPF4_4KHz_SetC2H
       095D  BPF4_4KHz_SetC2H
       096F  _BPF4_4KHz_SetC3H
       096F  BPF4_4KHz_SetC3H
       0981  _BPF4_4KHz_SetC4H
       0981  BPF4_4KHz_SetC4H
       0993  AMUX4_mic_InputSelect
       0993  _AMUX4_mic_InputSelect
       09AE  AMUX4_mic_Start
       09AE  _AMUX4_mic_Start
       09AF  AMUX4_mic_Stop
       09AF  _AMUX4_mic_Stop
       09BE  _ADCINCVR_pot_CNT_ISR
       09C1  _ADCINCVR_pot_PWM16_ISR
       0A37  ADCINCVR_pot_SetPower
       0A37  _ADCINCVR_pot_SetPower
       0A37  ADCINCVR_pot_Start
       0A37  _ADCINCVR_pot_Start
       0A57  _ADCINCVR_pot_Stop
       0A57  ADCINCVR_pot_Stop
       0A5B  _ADCINCVR_pot_GetSamples
       0A5B  ADCINCVR_pot_GetSamples
       0A8B  ADCINCVR_pot_StopAD
       0A8B  _ADCINCVR_pot_StopAD
       0AA0  _ADCINCVR_pot_fIsDataAvailable
       0AA0  ADCINCVR_pot_fIsDataAvailable
       0AA0  ADCINCVR_pot_fIsData
       0AA0  _ADCINCVR_pot_fIsData
       0AA8  _ADCINCVR_pot_iGetDataClearFlag
       0AA8  ADCINCVR_pot_iGetDataClearFlag
       0AB3  _ADCINCVR_pot_iGetData
       0AB3  ADCINCVR_pot_iGetData
       0ABB  _ADCINCVR_pot_ClearFlag
       0ABB  ADCINCVR_pot_ClearFlag
       0AC2  _ADCINCVR_pot_SetResolution
       0AC2  ADCINCVR_pot_SetResolution
       0B03  _ADCINCVR_mes_CNT_ISR
       0B06  _ADCINCVR_mes_PWM16_ISR
       0B7C  _ADCINCVR_mes_Start
       0B7C  ADCINCVR_mes_Start
       0B7C  ADCINCVR_mes_SetPower
       0B7C  _ADCINCVR_mes_SetPower
       0B9C  _ADCINCVR_mes_Stop
       0B9C  ADCINCVR_mes_Stop
       0BA0  ADCINCVR_mes_GetSamples
       0BA0  _ADCINCVR_mes_GetSamples
       0BD0  ADCINCVR_mes_StopAD
       0BD0  _ADCINCVR_mes_StopAD
       0BE5  ADCINCVR_mes_fIsData
       0BE5  _ADCINCVR_mes_fIsData
       0BE5  _ADCINCVR_mes_fIsDataAvailable
       0BE5  ADCINCVR_mes_fIsDataAvailable
       0BED  ADCINCVR_mes_iGetDataClearFlag
       0BED  _ADCINCVR_mes_iGetDataClearFlag
       0BF8  _ADCINCVR_mes_iGetData
       0BF8  ADCINCVR_mes_iGetData
       0C00  _ADCINCVR_mes_ClearFlag
       0C00  ADCINCVR_mes_ClearFlag
       0C07  _ADCINCVR_mes_SetResolution
       0C07  ADCINCVR_mes_SetResolution
       0C3A  __UserModules_end

Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                            text   0C3A   0C78 =   3192. bytes (rel,con,rom)

       Addr  Global Symbol
      -----  --------------------------------
       0C3A  _Delay50uTimes
       0C3A  __text_start
       0C3A  Delay50uTimes
       0C40  Delay50u_Table
       0C48  _Delay50u
       0C48  Delay50u
       0C5C  _main
       0E6F  _AGC
       1192  _DigitalOut
       1228  _UartTxValues
       1503  _BlocksInit
       15A2  _HB_Tmr_ISR_C
       15D2  _DelayMs
       1603  _LedTest
       1665  __divmodu_16X16_16
       1670  __i_div16_block_util
       16A9  __mul16
       16D9  _itoa
       18B2  __text_end
       18D6  __xidata_end

Area                               Start  End    Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                             TOP   0068   0140 =    320. bytes (abs,ovr,rom)

       Addr  Global Symbol
      -----  --------------------------------
       0068  __Start
       013D  bGetPowerSetting
       013D  _bGetPowerSetting

Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                    InterruptRAM   0000   0013 =     19. bytes (rel,con,ram)

       Addr  Global Symbol
      -----  --------------------------------
       0000  _Port_2_Data_SHADE
       0000  Port_2_Data_SHADE
       0000  NO_SHADOW
       0000  _NO_SHADOW
       0001  _I2CHW_bStatus
       0001  I2CHW_bStatus
       0002  _I2CHW_RsrcStatus
       0002  I2CHW_RsrcStatus
       0003  I2CHW_Write_Count
       0003  _I2CHW_Write_Count
       0004  pI2CHW_Write_BufHI
       0004  _pI2CHW_Write_BufHI
       0005  _pI2CHW_Write_BufLO
       0005  pI2CHW_Write_BufLO
       0005  _pI2CHW_Write_Buf
       0005  pI2CHW_Write_Buf
       0006  _pI2CHW_Read_BufHI
       0006  pI2CHW_Read_BufHI
       0007  _pI2CHW_Read_BufLO
       0007  pI2CHW_Read_BufLO
       0007  pI2CHW_Read_Buf
       0007  _pI2CHW_Read_Buf
       0008  I2CHW_Read_Count
       0008  _I2CHW_Read_Count
       0009  ADCINCVR_pot_cCounterU
       000A  _ADCINCVR_pot_iResult
       000A  ADCINCVR_pot_iResult
       000C  ADCINCVR_pot_bfStatus
       000C  _ADCINCVR_pot_bfStatus
       000D  ADCINCVR_pot_bSampC
       000E  ADCINCVR_mes_cCounterU
       000F  ADCINCVR_mes_iResult
       000F  _ADCINCVR_mes_iResult
       0011  _ADCINCVR_mes_bfStatus
       0011  ADCINCVR_mes_bfStatus
       0012  ADCINCVR_mes_bSampC

Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
               virtual_registers   002F   0009 =      9. bytes (rel,con,ram)

       Addr  Global Symbol
      -----  --------------------------------
       002F  __rZ
       0030  __rY
       0031  __rX
       0032  __r5
       0033  __r4
       0034  __r3
       0035  __r2
       0036  __r1
       0037  __r0

Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                            data   0000   0037 =     55. bytes (rel,con,ram)

       Addr  Global Symbol
      -----  --------------------------------
       0000  __data_start
       0013  _MesValue
       0025  _GF
       0038  _str
       003F  _GainIndx
       0045  _Time10ms
       0049  _Tmr1
       004B  _Tmr2
       004D  _PotValue
       004F  _i
       0051  _PortIndx
       0052  _TmrFlag

Files Linked      [ module(s) ]

./obj/boot.o	[ boot.asm ]
./obj/delay.o	[ delay.asm ]
./obj/main.o	[ main.c ]
<library>	[ tx8.asm, scblock_inbuff.asm, refmux_1.asm, psocconfigtbl.asm, psocconfig.asm, pga_pre.asm, pga_out.asm ]
[ led_3.asm, led_2.asm, led_1.asm, i2chwrsrcinits.asm, i2chwint.asm, hb_tmrint.asm, hb_tmr.asm ]
[ digital_out.asm, bpf4_4khz.asm, amux4_mic.asm, adcincvr_potint.asm, adcincvr_pot.asm, adcincvr_mesint.asm ]
[ adcincvr_mes.asm, rZ.asm, rY.asm, rX.asm, r5.asm, r4.asm, r3.asm, r2.asm, r1.asm, r0.asm, divmodu_16x16_16_util.asm ]
[ i_div16_block_util.asm, mul16_util.asm, itoa.s ]

Area Definitions

-blit:0x1a0.0x7fff
-bdata:0.0x6ff
-BInterruptRAM:0	allocated at: 0
-Bvirtual_registers	allocated at: 0x2f
-Bexplorersound_RAM	allocated at: 0

