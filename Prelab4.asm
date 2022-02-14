;
; Prelab4.asm
;
; Created: 10/1/2020 9:53:46 PM
; Author : ryans
;

	RJMP Q2
Q1:
    LDI R16, low(RAMEND)
	OUT SPL, R16
	LDI R16, high (RAMEND)
	OUT SPH, R16
	LDI R20, 1
	LDI R21, 2
	LDI R22, 3
	LDI R23, 4
	LDI R24, 5
	PUSH R20
	PUSH R21
	PUSH R22
	PUSH R23
	PUSH R24
	POP R31
	POP R30
end:RJMP end

Q2:
	LDI R16, low (0x200)
	OUT SPL, R16
	LDI R16, high (0x200)
	OUT SPH, R16
	LDI R25, 1
	LDI R26, 2
	LDI R27, 3
	LDI R28, 4
	LDI R29, 5
	LDI R30, 6
	STS 0x200, R25
	STS 0x1FF, R26
	STS 0x1FE, R27
	STS 0x1FD, R28
	STS 0x1FC, R29
	STS 0x1FB, R30
	POP R20
	POP R21
	POP R22
	POP R23
	POP R24
end2: RJMP end2

Q3:
	LDI R16, low (RAMEND)
	OUT SPL, R16
	LDI R16, high (RAMEND)
	OUT SPH, R16
	LDI R20, 0x55
	LDI R21, 0xAA
loopy: OUT PORTB, R20
	CALL delay
	OUT PORTB, R21
	CALL delay
delay: LDI R22, 0xFF

boop: NOP
	NOP
	DEC R22
	BRNE boop
	
	RET