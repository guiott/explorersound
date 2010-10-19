Project:      output/ExplorerSound
Build Number: 0
<<<<<<< .mine
Date:         Tue Oct 19 23:23:35 2010
=======
Date:         Tue Oct 19 02:35:22 2010
>>>>>>> .r41
Compiler:     ICCM8C
Version:      7.02.004

  ROM 20% full. 6411 out of 32768 bytes used (does not include absolute areas).
  RAM 7% full. 108 bytes used (does not include stack usage).

Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                             lit   01A0   02C4 =    708. bytes (rel,con,rom)

       Addr  Global Symbol
      -----  --------------------------------
       0249  LoadConfigTBL_explorersound_Bank0
       031E  LoadConfigTBL_explorersound_Bank1
       0379  LoadConfigTBL_explorersound_Ordered
       0464  __lit_end

Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                        func_lit   0464   0002 =      2. bytes (rel,con,rom)

       Addr  Global Symbol
      -----  --------------------------------
       0464  __func_lit_start
       0466  __func_lit_end

Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                     psoc_config   0466   0065 =    101. bytes (rel,con,rom)

       Addr  Global Symbol
      -----  --------------------------------
       0466  _LoadConfigInit
       0466  LoadConfigInit
       0470  _LoadConfig_explorersound
       0470  LoadConfig_explorersound
       04CB  __psoc_config_end

Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                     UserModules   04CB   07AE =   1966. bytes (rel,con,rom)

       Addr  Global Symbol
      -----  --------------------------------
       04CB  _TX8_EnableInt
       04CB  TX8_EnableInt
       04CF  TX8_DisableInt
       04CF  _TX8_DisableInt
       04D3  _TX8_SetTxIntMode
       04D3  TX8_SetTxIntMode
       04E5  _TX8_Start
       04E5  TX8_Start
       04EA  _TX8_Stop
       04EA  TX8_Stop
       04EE  _TX8_SendData
       04EE  TX8_SendData
       04F1  TX8_bReadTxStatus
       04F1  bTX8_ReadTxStatus
       04F1  _bTX8_ReadTxStatus
       04F1  _TX8_bReadTxStatus
       0504  TX8_PutSHexByte
       0504  _TX8_PutSHexByte
       0517  TX8_PutSHexInt
       0517  _TX8_PutSHexInt
       051E  TX8_PutChar
       051E  _TX8_PutChar
       0526  _TX8_PutString
       0526  TX8_PutString
       0538  TX8_Write
       0538  _TX8_Write
       0560  _TX8_CWrite
       0560  TX8_CWrite
       0588  TX8_CPutString
       0588  _TX8_CPutString
       059A  _TX8_PutCRLF
       059A  TX8_PutCRLF
       05A3  SCBLOCK_inbuff_Start
       05A3  _SCBLOCK_inbuff_SetPower
       05A3  SCBLOCK_inbuff_SetPower
       05A3  _SCBLOCK_inbuff_Start
       05B7  _SCBLOCK_inbuff_Stop
       05B7  SCBLOCK_inbuff_Stop
       05BB  _RefMux_1_SetPower
       05BB  _RefMux_1_Start
       05BB  RefMux_1_Start
       05BB  RefMux_1_SetPower
       05CD  RefMux_1_Stop
       05CD  _RefMux_1_Stop
       05D1  _RefMux_1_RefSelect
       05D1  RefMux_1_RefSelect
       05E3  PGA_pre_SetPower
       05E3  _PGA_pre_SetPower
       05E3  PGA_pre_Start
       05E3  _PGA_pre_Start
       05F5  _PGA_pre_SetGain
       05F5  PGA_pre_SetGain
       061F  PGA_pre_Stop
       061F  _PGA_pre_Stop
       0623  PGA_out_Start
       0623  _PGA_out_Start
       0623  PGA_out_SetPower
       0623  _PGA_out_SetPower
       0635  PGA_out_SetGain
       0635  _PGA_out_SetGain
       065F  _PGA_out_Stop
       065F  PGA_out_Stop
       0663  _LED_3_On
       0663  LED_3_On
       0667  _LED_3_Start
       0667  LED_3_Stop
       0667  LED_3_Off
       0667  _LED_3_Off
       0667  _LED_3_Stop
       0667  LED_3_Start
       0669  LED_3_Switch
       0669  _LED_3_Switch
       0681  _LED_3_Invert
       0681  LED_3_Invert
       0690  _LED_3_GetState
       0690  LED_3_GetState
       06A0  _LED_2_On
       06A0  LED_2_On
       06A4  _LED_2_Stop
       06A4  _LED_2_Start
       06A4  LED_2_Off
       06A4  LED_2_Start
       06A4  _LED_2_Off
       06A4  LED_2_Stop
       06A6  LED_2_Switch
       06A6  _LED_2_Switch
       06BE  _LED_2_Invert
       06BE  LED_2_Invert
       06CD  LED_2_GetState
       06CD  _LED_2_GetState
       06DD  _LED_1_On
       06DD  LED_1_On
       06E1  LED_1_Start
       06E1  _LED_1_Stop
       06E1  LED_1_Stop
       06E1  _LED_1_Off
       06E1  LED_1_Off
       06E1  _LED_1_Start
       06E3  _LED_1_Switch
       06E3  LED_1_Switch
       06FB  _LED_1_Invert
       06FB  LED_1_Invert
       070A  LED_1_GetState
       070A  _LED_1_GetState
       071A  I2CHW_Start
       071A  _I2CHW_Start
       071B  I2CHW_ResumeInt
       071B  _I2CHW_ResumeInt
       071E  _I2CHW_EnableInt
       071E  I2CHW_EnableInt
       072A  _I2CHW_ClearInt
       072A  I2CHW_ClearInt
       0733  I2CHW_EnableMstr
       0733  _I2CHW_EnableMstr
       0743  I2CHW_EnableSlave
       0743  _I2CHW_EnableSlave
       0747  _I2CHW_Stop
       0747  I2CHW_DisableInt
       0747  _I2CHW_DisableInt
       0747  I2CHW_Stop
       074B  _I2CHW_DisableSlave
       074B  I2CHW_DisableSlave
       074F  _I2CHW_DisableMstr
       074F  I2CHW_DisableMstr
       0753  I2CHW_Poll
       0753  _I2CHW_Poll
       0754  _I2CHW_ISR
       086A  _HB_Tmr_ISR
       086E  HB_Tmr_EnableInt
       086E  _HB_Tmr_EnableInt
       0872  _HB_Tmr_DisableInt
       0872  HB_Tmr_DisableInt
       0876  _HB_Tmr_Start
       0876  HB_Tmr_Start
       087A  HB_Tmr_Stop
       087A  _HB_Tmr_Stop
       087E  HB_Tmr_WritePeriod
       087E  _HB_Tmr_WritePeriod
       0884  HB_Tmr_WriteCompareValue
       0884  _HB_Tmr_WriteCompareValue
       088A  _wHB_Tmr_ReadCompareValue
       088A  _HB_Tmr_wReadCompareValue
       088A  wHB_Tmr_ReadCompareValue
       088A  HB_Tmr_wReadCompareValue
       0890  _HB_Tmr_wReadTimerSaveCV
       0890  _wHB_Tmr_ReadTimerSaveCV
       0890  HB_Tmr_wReadTimerSaveCV
       0890  wHB_Tmr_ReadTimerSaveCV
       0890  _wHB_Tmr_ReadCounter
       0890  wHB_Tmr_ReadCounter
       08C6  _HB_Tmr_wReadTimer
       08C6  _wHB_Tmr_ReadTimer
       08C6  HB_Tmr_wReadTimer
       08C6  wHB_Tmr_ReadTimer
       08C6  _wHB_Tmr_CaptureCounter
       08C6  wHB_Tmr_CaptureCounter
       08CE  DIGITAL_OUT_On
       08CE  _DIGITAL_OUT_On
       08D2  _DIGITAL_OUT_Off
       08D2  _DIGITAL_OUT_Start
       08D2  DIGITAL_OUT_Off
       08D2  DIGITAL_OUT_Stop
       08D2  _DIGITAL_OUT_Stop
       08D2  DIGITAL_OUT_Start
       08D4  _DIGITAL_OUT_Switch
       08D4  DIGITAL_OUT_Switch
       08EC  _DIGITAL_OUT_Invert
       08EC  DIGITAL_OUT_Invert
       08FB  DIGITAL_OUT_GetState
       08FB  _DIGITAL_OUT_GetState
       090B  BPF4_4KHz_Start
       090B  _BPF4_4KHz_SetPower
       090B  BPF4_4KHz_SetPower
       090B  _BPF4_4KHz_Start
       0935  BPF4_4KHz_Stop
       0935  _BPF4_4KHz_Stop
       0942  _BPF4_4KHz_SetC1L
       0942  BPF4_4KHz_SetC1L
       0954  BPF4_4KHz_SetC2L
       0954  _BPF4_4KHz_SetC2L
       0966  BPF4_4KHz_SetC3L
       0966  _BPF4_4KHz_SetC3L
       0978  BPF4_4KHz_SetC4L
       0978  _BPF4_4KHz_SetC4L
       098A  _BPF4_4KHz_SetC1H
       098A  BPF4_4KHz_SetC1H
       099C  _BPF4_4KHz_SetC2H
       099C  BPF4_4KHz_SetC2H
       09AE  _BPF4_4KHz_SetC3H
       09AE  BPF4_4KHz_SetC3H
       09C0  _BPF4_4KHz_SetC4H
       09C0  BPF4_4KHz_SetC4H
       09D2  AMUX4_mic_InputSelect
       09D2  _AMUX4_mic_InputSelect
       09ED  AMUX4_mic_Start
       09ED  _AMUX4_mic_Start
       09EE  AMUX4_mic_Stop
       09EE  _AMUX4_mic_Stop
       09FD  _ADCINCVR_pot_CNT_ISR
       0A00  _ADCINCVR_pot_PWM16_ISR
       0A76  ADCINCVR_pot_SetPower
       0A76  _ADCINCVR_pot_SetPower
       0A76  ADCINCVR_pot_Start
       0A76  _ADCINCVR_pot_Start
       0A96  _ADCINCVR_pot_Stop
       0A96  ADCINCVR_pot_Stop
       0A9A  _ADCINCVR_pot_GetSamples
       0A9A  ADCINCVR_pot_GetSamples
       0ACA  ADCINCVR_pot_StopAD
       0ACA  _ADCINCVR_pot_StopAD
       0ADF  _ADCINCVR_pot_fIsDataAvailable
       0ADF  ADCINCVR_pot_fIsDataAvailable
       0ADF  ADCINCVR_pot_fIsData
       0ADF  _ADCINCVR_pot_fIsData
       0AE7  _ADCINCVR_pot_iGetDataClearFlag
       0AE7  ADCINCVR_pot_iGetDataClearFlag
       0AF2  _ADCINCVR_pot_iGetData
       0AF2  ADCINCVR_pot_iGetData
       0AFA  _ADCINCVR_pot_ClearFlag
       0AFA  ADCINCVR_pot_ClearFlag
       0B01  _ADCINCVR_pot_SetResolution
       0B01  ADCINCVR_pot_SetResolution
       0B42  _ADCINCVR_mes_CNT_ISR
       0B45  _ADCINCVR_mes_PWM16_ISR
       0BBB  _ADCINCVR_mes_Start
       0BBB  ADCINCVR_mes_Start
       0BBB  ADCINCVR_mes_SetPower
       0BBB  _ADCINCVR_mes_SetPower
       0BDB  _ADCINCVR_mes_Stop
       0BDB  ADCINCVR_mes_Stop
       0BDF  ADCINCVR_mes_GetSamples
       0BDF  _ADCINCVR_mes_GetSamples
       0C0F  ADCINCVR_mes_StopAD
       0C0F  _ADCINCVR_mes_StopAD
       0C24  ADCINCVR_mes_fIsData
       0C24  _ADCINCVR_mes_fIsData
       0C24  _ADCINCVR_mes_fIsDataAvailable
       0C24  ADCINCVR_mes_fIsDataAvailable
       0C2C  ADCINCVR_mes_iGetDataClearFlag
       0C2C  _ADCINCVR_mes_iGetDataClearFlag
       0C37  _ADCINCVR_mes_iGetData
       0C37  ADCINCVR_mes_iGetData
       0C3F  _ADCINCVR_mes_ClearFlag
       0C3F  ADCINCVR_mes_ClearFlag
       0C46  _ADCINCVR_mes_SetResolution
       0C46  ADCINCVR_mes_SetResolution
       0C79  __UserModules_end

Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                            text   0C79   0E32 =   3634. bytes (rel,con,rom)

       Addr  Global Symbol
      -----  --------------------------------
       0C79  _Delay50uTimes
       0C79  Delay50uTimes
       0C79  __text_start
       0C7F  Delay50u_Table
       0C87  _Delay50u
       0C87  Delay50u
       0C9B  _main
       10D5  _AGC
       134C  _DigitalOut
       13E2  _UartTxValues
       168B  _BlocksInit
       172A  _HB_Tmr_ISR_C
       1743  _DelayMs
       1774  _LedTest
       17D6  __divmod_32X32_32
       1813  __divmodu_16X16_16
       181E  __i_div16_block_util
       1857  __i_div32_block_util
       18BA  __i_div32_not_util
       18D2  _itoa
       1AAB  __text_end
       1AD3  __xidata_end

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
               virtual_registers   002B   000F =     15. bytes (rel,con,ram)

       Addr  Global Symbol
      -----  --------------------------------
       002B  __rZ
       002C  __rY
       002D  __rX
       002E  __r11
       002F  __r10
       0030  __r9
       0031  __r8
       0032  __r7
       0033  __r6
       0034  __r5
       0035  __r4
       0036  __r3
       0037  __r2
       0038  __r1
       0039  __r0

Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                            data   0000   004A =     74. bytes (rel,con,ram)

       Addr  Global Symbol
      -----  --------------------------------
       0000  __data_start
       0013  _MesValueSum
       003A  _MesValue
       0046  _GF
       0050  _str
       0057  _MesValueM
       005D  _GainIndx
       0063  _PotValue
       0065  _Tmr1
       0067  _i
       0069  _MesValueOut
       006B  _TmrFlag

Files Linked      [ module(s) ]

./obj/boot.o	[ boot.asm ]
./obj/delay.o	[ delay.asm ]
./obj/main.o	[ main.c ]
<library>	[ tx8.asm, scblock_inbuff.asm, refmux_1.asm, psocconfigtbl.asm, psocconfig.asm, pga_pre.asm, pga_out.asm ]
[ led_3.asm, led_2.asm, led_1.asm, i2chwrsrcinits.asm, i2chwint.asm, hb_tmrint.asm, hb_tmr.asm ]
[ digital_out.asm, bpf4_4khz.asm, amux4_mic.asm, adcincvr_potint.asm, adcincvr_pot.asm, adcincvr_mesint.asm ]
[ adcincvr_mes.asm, rZ.asm, rY.asm, rX.asm, r11.asm, r10.asm, r9.asm, r8.asm, r7.asm, r6.asm, r5.asm, r4.asm ]
[ r3.asm, r2.asm, r1.asm, r0.asm, divmod_32x32_32_util.asm, divmodu_16x16_16_util.asm, i_div16_block_util.asm ]
[ i_div32_block_util.asm, i_div32_not_util.asm, itoa.s ]

Area Definitions

-blit:0x1a0.0x7fff
-bdata:0.0x6ff
-BInterruptRAM:0	allocated at: 0
-Bvirtual_registers	allocated at: 0x2b
-Bexplorersound_RAM	allocated at: 0

