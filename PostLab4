;
; PostLab4.asm
;
; Created: 10/2/2020 1:31:50 PM
; Author : ryans
;

	RJMP Q2
Q1:
	LDI R20, 4
	LDI R21, 8
	LDI R16, 3
boop:CALL func1
	DEC R16
	BRNE boop
end1:RJMP end1

func1:
	ADD R21, R20
	RET

Q2:
	LDI R16, low(RAMEND)
	OUT SPL, R16
	LDI R16, high(RAMEND)
	OUT SPH, R16
	LDI R16, 0
	LDI R29, 0xFF
zoop:
	CALL func2
	DEC R29
	BRNE zoop
end2:RJMP end2

func2:
	OUT PORTB, R16
	INC R16
	CALL delay
	RET

delay:
	LDI R30, 5
woop:
	NOP
	DEC R30
	BRNE woop
	RET

Q3:
