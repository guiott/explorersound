;;*****************************************************************************
;;*****************************************************************************
;;  FILENAME: I2CHWINT.asm
;;   Version: 1.6, Updated on 2009/10/15 at 17:11:37
;;  Generated by PSoC Designer 5.0.1127.0
;;
;;  DESCRIPTION: I2CHW (Slave) Interrupt Service Routine.
;;  This is the interrupt seveice routine for the Slave I2C function.
;;-----------------------------------------------------------------------------
;;  Copyright (c) Cypress Semiconductor 2009. All Rights Reserved.
;;*****************************************************************************
;;*****************************************************************************
include "m8c.inc"
include "memory.inc"
include "I2CHWSlave.inc"
include "I2CHWCommon.inc"


;-----------------------------------------------
;  Global Symbols
;-----------------------------------------------
export     I2CHW_RsrcStatus                                          ; upper (7x) bits write status, lower 3 bits read status
export    _I2CHW_RsrcStatus                                          ; upper (7x) bits write status, lower 3 bits read status
export     I2CHW_Read_Count
export    _I2CHW_Read_Count
export     I2CHW_Write_Count
export    _I2CHW_Write_Count
export    pI2CHW_Read_BufLO
export   _pI2CHW_Read_BufLO
export    pI2CHW_Write_BufLO
export   _pI2CHW_Write_BufLO
export   _I2CHW_bStatus
export    I2CHW_bStatus

;-----------------------------------------------
; WARNING: The variables below are deprecated
; and have been replaced with Read_BufLO
; and Write_BufLO
;-----------------------------------------------
export    pI2CHW_Read_Buf
export   _pI2CHW_Read_Buf
export    pI2CHW_Write_Buf
export   _pI2CHW_Write_Buf
;-----------------------------------------------
; END WARNING
;-----------------------------------------------

area InterruptRAM(RAM, REL, CON)	 

;-----------------------------------------------
; Variable Allocation
;-----------------------------------------------

 _I2CHW_bStatus:
  I2CHW_bStatus:                             blk 1
  I2CHW_RsrcStatus:
 _I2CHW_RsrcStatus:                          blk     1
  I2CHW_Write_Count:
 _I2CHW_Write_Count:                         blk    1
IF SYSTEM_LARGE_MEMORY_MODEL
export    pI2CHW_Write_BufHI
export   _pI2CHW_Write_BufHI

 pI2CHW_Write_BufHI:
_pI2CHW_Write_BufHI:                         blk     1
ENDIF
;-----------------------------------------------
; WARNING: The variable below is deprecated
; and has been replaced Write_BufLO
;-----------------------------------------------
 pI2CHW_Write_Buf:
_pI2CHW_Write_Buf:
;-----------------------------------------------
; END WARNING
;-----------------------------------------------
 pI2CHW_Write_BufLO:
_pI2CHW_Write_BufLO:                         blk      1

IF I2CHW_READ_FLASH
export    pI2CHW_Read_BufHI
export   _pI2CHW_Read_BufHI

 pI2CHW_Read_BufHI:
_pI2CHW_Read_BufHI:                          blk     1
ELSE
IF SYSTEM_LARGE_MEMORY_MODEL
export    pI2CHW_Read_BufHI
export   _pI2CHW_Read_BufHI

 pI2CHW_Read_BufHI:
_pI2CHW_Read_BufHI:                          blk     1
ENDIF
ENDIF

;-----------------------------------------------
; WARNING: The variable below is deprecated
; and has been replaced Read_BufLO
;-----------------------------------------------
 pI2CHW_Read_Buf:
_pI2CHW_Read_Buf:
;-----------------------------------------------
; END WARNING
;-----------------------------------------------
 pI2CHW_Read_BufLO:
_pI2CHW_Read_BufLO:                          blk       1

IF I2CHW_READ_FLASH
export    I2CHW_Read_CountHI
export   _I2CHW_Read_CountHI

 I2CHW_Read_CountHI:
_I2CHW_Read_CountHI:                         blk    1
ENDIF

 I2CHW_Read_Count:
_I2CHW_Read_Count:                           blk      1


IF I2CHW_POLLED_PROCESS

I2CHW_Poll_Status:                             blk      1  ;internal variable used for polled operation
;bit 0 - Write transaction started begin looking for the STOP state to terminate the transaction
I2C_WRITE_STARTED:       equ     0x01
;bit 1 - Undefined
;bit 2 - Undefined
;bit 3 - Undefined
;bit 4 - Undefined
;bit 5 - Undefined
;bit 6 - Undefined
;bit 7 - Undefined

ENDIF


;@PSoC_UserCode_INIT@ (Do not change this line.)
;---------------------------------------------------
; Insert your custom declarations below this banner
;---------------------------------------------------

;------------------------
; Includes
;------------------------

	
;------------------------
;  Constant Definitions
;------------------------


;------------------------
; Variable Allocation
;------------------------


;---------------------------------------------------
; Insert your custom declarations above this banner
;---------------------------------------------------
;@PSoC_UserCode_END@ (Do not change this line.)




AREA UserModules (ROM, REL)

export _I2CHW_ISR
export _I2CHW_Poll
export  I2CHW_Poll

;;****************************************************
;; I2C_ISR  main entry point from vector 60h
;;
;;****************************************************

IF I2CHW_POLLED_PROCESS

_I2CHW_ISR:
    reti ; stub out the ISR if this is going to be a polled function

 
 
 I2CHW_Poll:
_I2CHW_Poll:
;    cases are:
;    1. Stop state after a Master write to this slave
;    2. possible Stop condition COMBINED with a new transaction is not a problem since the Stop will only flag that the 
;       previous write has been completed. (so just call the I2CA_Process routine for this case and let the process routine take
;       care of it.
    ;case 1
    RAM_SETPAGE_CUR	( >I2CHW_Poll_Status )

    tst [I2CHW_Poll_Status], I2C_WRITE_STARTED
    jz  NOT_I2C_Write
    tst reg[ I2CHW_SCR], I2C_STOP_ST
    jz  NOT_I2C_Write
    ;make sure the pushes and pops 'line up' or die horribly
    push A
    push X
IF SYSTEM_LARGE_MEMORY_MODEL
    REG_PRESERVE IDX_PP
ENDIF
    jmp STOPTRAP
    
NOT_I2C_Write:    
    tst reg[ I2CHW_SCR], I2C_BYTE_COMPL
    jnz  I2CHW_Process   ;if no other critical eventa are in evidence, process an I2C byte if it's done
    ret

 I2CHW_Process:
_I2CHW_Process:  ;don't need to export user will call I2CA_POLL which will call the I2CA_Process routine if necessary



ELSE
;; STUB for polling function when it's un-defined
 I2CHW_Poll:
_I2CHW_Poll:
    ret


;;*****************************************************************************************
;;                 I2C_MASTER  main entry point from vector 60h
;;*****************************************************************************************

_I2CHW_ISR:
ENDIF
    push A
    push X

IF SYSTEM_LARGE_MEMORY_MODEL
    REG_PRESERVE IDX_PP
ENDIF

Process_REENTRY:

;******************************************************************************************
;Before doing anything else check for the presence of a STOP_ST in combination with the
;STOP Interrupt Enable (STOPIE).  If this is what happened set appropriate bits, 
;clear and reset the main I2CHW interrupt to assure that we haven't missed a BYTE_COMPLETE
;interrupt and exit the interrupt.  If a BYTE_COMPLETE interrupt is concurrent with the STOP 
;interrupt the next entry to this interrupt will be immediate and the STOPIE bit will now be 
;cleared.  This removes the possibility of trying to process two different events within one 
;interrupt.
;          
;******************************************************************************************
; Check the Stop Bit in SCR only if the Stop Interrupt is enabled.    
    IF(I2CHW_USED_I2C_BLOCK)
    M8C_SetBank1
    tst reg[I2CHW_CFG],I2C_STOPIE
    M8C_SetBank0
    ELSE
    tst reg[I2CHW_CFG],I2C_STOPIE
    ENDIF
    jz  ByteComplProcess
    tst reg[I2CHW_SCR],I2C_STOP_ST                         ; Test if the Interrupt is due to Stop Condition
;conditions that must be met here are Slave-enabled, STOP int enabled (STOPIE), and STOP_ST (status bit set)
    jnz STOPTRAP                                       ; If yes process Stop Trap

ByteComplProcess:
;*********END TEST OF STOP STATUS**********************************************************       

;       file stored in Slave directory of user module
;program flow would likely be to first determine what 'mode' the device is in.  I.e. is Master and Slave mode enabled?
; control of program flow must take more into account when all more modes are enabled.
;
;* Slave only
    ;very first thing to test is the I2C_ADDRIN bit.  If set then we are getting an address after a START
    tst reg[I2CHW_SCR], I2C_ADDRIN
    jnz I2C_EvaluateADDRIN

    ; if slave didn't recieve an address, then this must be data for it to deal with
    tst reg[I2CHW_SCR], I2C_TX  ;if set we are transmitting => this is at end of byte to eval the ACK
    jnz I2C_EvaluateACKIN
    ; if slave NOT transmitting and NOT an address then data is being recieved
    ; ack it and process it.

    ;UNLESS the stop bit turns out to have been set...
    tst reg[I2CHW_SCR], I2C_STOP_ST
    jnz STOPTRAP
    ; if slave NOT transmitting and NOT an address and Master is NOT terminating the then data is being recieved
    ; ack it and process it.

;;code snipped from old SW I2C below
;
; MASTER WRITE to SLAVE
;
;@PSoC_UserCode_BODY1@ (Do not change this line.)
;---------------------------------------------------
; Insert your custom code below this banner
;---------------------------------------------------
; By modifying the section from here down to the next comment block
; a user could process data for a custom I2C WRITE application
; NOTE: I2C handshakes (ACK/NAK may be effected by any introduced bugs)
;********************************************************
   tst   [I2CHW_bStatus], fI2C_NAKnextWr
   jnz   WrStoreData
   ;
   ;process write data here
   ;
   dec   [I2CHW_Write_Count]
   jc    I2CHW_WriteOverflow                                         ; carry set if value became -1
   ;jz    WrStoreData
   cmp   [I2CHW_Write_Count], 00                                     ;set nak flag, dec count, and store data
   jz    WrNakNextByte
   jmp   WrNotBufEnd
WrNakNextByte:                                                       ;set the nakflag in I2CHW_bStatus
   or    [I2CHW_bStatus], fI2C_NAKnextWr
   jmp   WrStoreData
WrNotBufEnd:
   and   [I2CHW_bStatus], ~fI2C_NAKnextWr                            ;clear the nak flag in case it was set from a previous operation
WrStoreData:
   ;This is the ONLY place this bit is set  This bit should never be cleared by the isr ONLY by the API ClrWrStatus()
   or    [I2CHW_RsrcStatus], I2CHW_WR_NOERR                          ;set current status
IF SYSTEM_LARGE_MEMORY_MODEL
   mov   A, [pI2CHW_Write_BufHI]
ENDIF
   RAM_SETPAGE_IDX A
   mov   X, [pI2CHW_Write_BufLO]
   mov   A, reg[I2CHW_DR]
   RAM_CHANGE_PAGE_MODE FLAG_PGMODE_10b
   mov   [X], A
   RAM_CHANGE_PAGE_MODE FLAG_PGMODE_00b
   inc   [pI2CHW_Write_BufLO]

   tst   [I2CHW_bStatus], fI2C_NAKnextWr
   jnz   NAK_this_one


;---------------------------------------------------
; End user I2C WRITE Customization
; Insert your custom code above this banner
;---------------------------------------------------
;@PSoC_UserCode_END@ (Do not change this line.)
;;code snipped form SW I2C to maintain api compatibility above

;
;;  CONTROL MACRO- writes to the SCR register and accounts for clock speed adjustments if necessary
;
    SetI2CHW_SCR  (I2C_ACKOUT )


IF SYSTEM_LARGE_MEMORY_MODEL
    REG_RESTORE IDX_PP
ENDIF
    pop X
    pop A
    RAM_RESTORE_NATIVE_PAGING      		;has no effect if this is an ISR
    I2CHW_SERVICE_RETURN


;
;ram-write-overflow label here, just rewrite the last location in the buffer
;    and set the overflow flag
;
I2CHW_WriteOverflow:
   or    [I2CHW_RsrcStatus], I2CHW_WR_OVERFLOW                       ; flag the overflow
   and   [I2CHW_RsrcStatus], ~I2CHW_WR_NOERR
   inc   [I2CHW_Write_Count]                                         ; put it back to zero
   ;If data is to be Nak'ed
NAK_this_one:
   and   [I2CHW_bStatus], ~fI2C_NAKnextWr                            ;clear the nak flag in case it was set from a previous operation

;
;;  CONTROL MACRO- writes to the SCR register and accounts for clock speed adjustments if necessary
;
    SetI2CHW_SCR ( 0 )


IF SYSTEM_LARGE_MEMORY_MODEL
    REG_RESTORE IDX_PP
ENDIF
    pop X
    pop A
    RAM_RESTORE_NATIVE_PAGING      		;has no effect if this is an ISR
    I2CHW_SERVICE_RETURN                                                              ;return and wait for the next interrupt (on data)


;********************************************************
; Treat the case where the Slave will be continuing to
; receive data after receiving the address
;********************************************************
I2C_AckAddr_RXdata:
IF I2CHW_POLLED_PROCESS
    or [I2CHW_Poll_Status], I2C_WRITE_STARTED
ELSE
    BitSetI2CHW_CFG ( I2C_STOPIE )
ENDIF

;
;;  CONTROL MACRO- writes to the SCR register and accounts for clock speed adjustments if necessary
;
    SetI2CHW_SCR ( I2C_ACKOUT )


IF SYSTEM_LARGE_MEMORY_MODEL
    REG_RESTORE IDX_PP
ENDIF
    pop X
    pop A
    RAM_RESTORE_NATIVE_PAGING      		;has no effect if this is an ISR
    I2CHW_SERVICE_RETURN

;********************************************************
; Look to see if the address is us or someone else
; use the carry flag to idendify a READ or WRITE address
;********************************************************
I2C_EvaluateADDRIN:
    mov A, [I2CHW_RsrcStatus]
    and A, (I2CHW_WR_NOERR | I2CHW_WR_OVERFLOW)
    jz  NewADDRNotSet                                                                                             ;set new addr only if previous data appears to be in buffer
    or  [I2CHW_RsrcStatus], I2CHW_WR_COMPLETE                        ;Same bit as I2CHW_ISR_NEW_ADDR

IF I2CHW_POLLED_PROCESS						                                ;if a new addr was received it's OK to terminate stop detection
    and [I2CHW_Poll_Status], ~I2C_WRITE_STARTED              ;used to determine the end of a Master write to a slave.
ELSE			
    BitClrI2CHW_CFG I2C_STOPIE
ENDIF
                                                                                                                                          ;SET WR_COMPL bit if it appears there was write taking place just previous
NewADDRNotSet:                                                       ;may use as a way to tag the end of a master write to slave
;@PSoC_UserCode_BODY4@ (Do not change this line.)
;---------------------------------------------------
; Insert your custom code below this banner
;---------------------------------------------------
; By replacing the section from here down to the next block
; a user could process I2C addresses differently
;********************************************************
                                                                                                                                          ;to this new address by looking at the status bits
    ;inc [rec_cnt]
    mov A, reg[I2CHW_DR]
    and F, 0xF9                                                      ;clear Carry (C) AND Zero (Z) in Flag reg
    rrc A                                                            ;carry now holds bit 0 (r/~w) from addr byte
IF (I2CHW_AUTO_ADDR_CHECK^1)   ;; for CY8C28X45 chip: skip address comparison and NACK sending stage-hardware will do this for us  if AutoAddressCompare feature is enabled.
                                          ;; The code in this pre-compiler directive will be executed for all chips except CY8C28X45.
    xor A,  I2CHW_SLAVE_ADDR                                         ;for an equate
    jnz I2C_Terminate
ENDIF
    or [I2CHW_RsrcStatus], I2CHW_ISR_ACTIVE

;********************************************************
; User could modify this section to allow the I2C routine
; to respond to multiple addresses, ram addresses, i/o pin
; based addresses, etc.
;********************************************************
;---------------------------------------------------
; End user I2C ADDR Compare Customization
; Insert your custom code above this banner
;---------------------------------------------------
;@PSoC_UserCode_END@ (Do not change this line.)

I2CHW_send_ack:                                                      ;slave send adress ack


    ;OK so the addreses were the same was it a read (c=1) or a write (c=0)
    jnc I2C_AckAddr_RXdata ;(Master Write/Slave Receive) for this case we receive data and ack it

;********************************************************
;Master Read (Master Read/Slave Transmit) Ack the address too.
;for this case the master has just sent us OUR read address which must be Ack'ed and will
;subsequently be reading from us (which the master will Ack.  So for the first bit we must
; set the I2C_TX AND the ACK bits in the I2C_SCR (first byte only)
; THEN we'll just be reading the ACK from the master as it reads our data
;********************************************************

    and [I2CHW_RsrcStatus], ~I2CHW_RD_COMPLETE                       ;Master will NAK us at the end of transaction

    mov A, (I2C_ACKOUT | I2C_TX)
    push A


;
;MASTER is READING FROM SLAVE (ram or flash buffer)
;
;;code snipped from old SW I2C below

I2C_ObtainReadData:

;********************************************************
; here we need to get the next data to output (master-read)
; also set the status byte for use on exit
;********************************************************
IF I2CHW_READ_FLASH
;@PSoC_UserCode_BODY2@ (Do not change this line.)
;---------------------------------------------------
; Insert your custom code below this banner
; User flash read customization could take place within
; this area
;---------------------------------------------------
    tst  [I2CHW_RsrcStatus],I2CHW_READFLASH
    jz   ReadRamData

    ;
    ;get the data
    ;
    mov  X, [pI2CHW_Read_BufLO]
    mov  A, [pI2CHW_Read_BufHI]
    romx
    mov  reg[I2CHW_DR],A
    dec  [I2CHW_Read_Count]                                          ;calc addr lsb
    jnc  NoDecHighCount
    dec  [I2CHW_Read_CountHI]
    jc   FlashRdOverflow

NoDecHighCount:

    inc  [pI2CHW_Read_BufLO]                                         ;set the next flash address to read
    jnc  NoIncHiAddr
    inc  [pI2CHW_Read_BufHI]
NoIncHiAddr:
   jmp   I2CNormalRead

FlashRdOverflow:
    ;deal with the over flow cond by resending last data byte (dec the low order addr byte)

   or    [I2CHW_RsrcStatus], I2CHW_RD_OVERFLOW
   and   [I2CHW_RsrcStatus], ~I2CHW_RD_NOERR
   ;set count back to 0
   mov   [I2CHW_Read_CountHI], 0                                     ;functionally the same as incrementing ffff and less instructions
   mov   [I2CHW_Read_Count], 0
   jmp   I2CNormalRead
;---------------------------------------------------
; Insert your custom code above this banner
; END User flash read customization
;---------------------------------------------------
;@PSoC_UserCode_END@ (Do not change this line.)
ENDIF
;@PSoC_UserCode_BODY3@ (Do not change this line.)
;---------------------------------------------------
; Insert your custom code below this banner
;---------------------------------------------------
; By replacing the section from here down to the next block
; a user could process data for a custom I2C READ application
;********************************************************
ReadRamData:
   ;read the current data byte
IF SYSTEM_LARGE_MEMORY_MODEL
   mov   A, [pI2CHW_Read_BufHI]
ENDIF
   RAM_SETPAGE_IDX A
   mov   X, [pI2CHW_Read_BufLO]
   RAM_CHANGE_PAGE_MODE FLAG_PGMODE_10b
   mov   A, [X]
   RAM_CHANGE_PAGE_MODE FLAG_PGMODE_00b
   mov   reg[I2CHW_DR], A
   dec   [I2CHW_Read_Count]
   jc    I2CHW_readOverflow
   inc   [pI2CHW_Read_BufLO]
   jmp   I2CNormalRead
;
;ram read overflow detected here, just resend the last location in the buffer
;
I2CHW_readOverflow:
   or    [I2CHW_RsrcStatus], I2CHW_RD_OVERFLOW
   and   [I2CHW_RsrcStatus], ~I2CHW_RD_NOERR
   inc   [I2CHW_Read_Count]                                          ; set back to zero

;********************************************************
; End user I2C READ customization section
;********************************************************
; Insert your custom code above this banner
;---------------------------------------------------
;@PSoC_UserCode_END@ (Do not change this line.)

;;code snipped form SW I2C to maintain api compatibility above
I2CNormalRead:

        ;load the bits to set in the I2C_ISR from the stack, The proper bit pattern was previously determined
        ;and place there based on whether or not the previous transmission was our I2C address.
        pop A

;
;;  CONTROL MACRO- writes to the SCR register and accounts for clock speed adjustments if necessary
;
    SetI2CHW_SCR A     ;set read bit as (bit0) and Addr bit (bit7)in the I2C_SCR


IF SYSTEM_LARGE_MEMORY_MODEL
    REG_RESTORE IDX_PP
ENDIF
    pop X
    pop A
    RAM_RESTORE_NATIVE_PAGING      		;has no effect if this is an ISR
    I2CHW_SERVICE_RETURN ;return and wait for the next interrupt (on data)



I2C_EvaluateACKIN:

    tst reg[I2CHW_SCR], I2C_LST_BIT
    jnz I2C_LastByteToMstr  ;NAK recd on TX so this is the end set mode to interrup only on ADDR IN
    ; got here we were ACK'ed so send another byte
    mov A, ( I2C_TX )
        ;load the bits to set in the I2C_ISR from the stack, The proper bit pattern was previously determined
        ;and place there based on whether or not the previous transmission was our I2C address.
        push A
        jmp I2C_ObtainReadData


I2C_LastByteToMstr:
    or  [I2CHW_RsrcStatus], I2CHW_RD_NOERR                           ;Master NAK'ed us at the end of transaction
    or  [I2CHW_RsrcStatus], I2CHW_RD_COMPLETE
    and [I2CHW_RsrcStatus], ~I2CHW_ISR_ACTIVE

I2C_Terminate:
    and [I2CHW_RsrcStatus], ~I2CHW_ISR_ACTIVE

;
;;  CONTROL MACRO- writes to the SCR register and accounts for clock speed adjustments if necessary
;
    SetI2CHW_SCR 0     ;the default mode to wait for an address


IF SYSTEM_LARGE_MEMORY_MODEL
    REG_RESTORE IDX_PP
ENDIF
    pop X
    pop A
    RAM_RESTORE_NATIVE_PAGING      		;has no effect if this is an ISR
    I2CHW_SERVICE_RETURN

STOPTRAP:
    ;I2C stop detected
;@PSoC_UserCode_BODY6@ (Do not change this line.)
;---------------------------------------------------
; Insert your custom code below this banner
; by modifying the block of code here a user could address key operational considerations
; at the point that a termination of a write command is detected.
; stop interrupt is automatically enabled on write so that the end of the write can be determined.
; stop interrupt is not enabled when a read transaction occurs
;---------------------------------------------------
;
; set a flag to indicate END OF TRANSMISSION
;
    or  [I2CHW_RsrcStatus], I2CHW_WR_COMPLETE                        ;only SET by ISR USER must clear.
    and [I2CHW_RsrcStatus], ~I2CHW_ISR_ACTIVE

IF I2CHW_POLLED_PROCESS
    and [I2CHW_Poll_Status], ~I2C_WRITE_STARTED
    jmp ExitISR
ELSE
    BitClrI2CHW_CFG I2C_STOPIE
    tst reg[I2CHW_SCR], I2C_BYTE_COMPL
;;if BYTE_COMPL is set, there's an excellent chance to lose an ISR.  Because of the way they are
;; latched into the INT_MSK.  Therefore clear the applicable bit (STOPIE) and jump directly to the 
;; top of this routing since the bus is currently stalled.  Just in case the ISR is properly latched,
;; clear the mask bit since it's is serviced manually.
    jz ExitISR
    and  reg[INT_CLR3], ~0x01                                ;clear the I2C interrupt
ENDIF

	jmp Process_REENTRY

ExitISR:

IF SYSTEM_LARGE_MEMORY_MODEL
    REG_RESTORE IDX_PP
ENDIF
    pop X
    pop A
    RAM_RESTORE_NATIVE_PAGING      		;has no effect if this is an ISR
    I2CHW_SERVICE_RETURN

;---------------------------------------------------
; End user boot loader entry Customization
; Insert your custom code above this banner
;---------------------------------------------------
;@PSoC_UserCode_END@ (Do not change this line.)

; end of file I2CHWINT.asm
