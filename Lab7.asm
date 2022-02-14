;
; Postlab7.asm
;
; Created: 10/23/2020 1:06:56 PM
; Author : ryans
;
RJMP QUIZ
Q1:
	LDI R20, 0
	LDI R30, 0
	OUT DDRD, R20
	LDI R20, 0xFF
	OUT DDRB, R20
	IN R21, PIND
	MUL R21, R21
	ADD R0, R21
	ADC R1, R30
	LDI R19, 39
	ADD R0, R19
	ADC R1, R30
	OUT PORTB, R21
	RJMP END
Q2:
	LDI R20, 0x00
	OUT DDRB, R20
	LDI R29, 0x2C
	OUT PORTB, R29
	LDI R22, 8
	LDI R23, 0x01
	IN R19, PINB
doop:
	LSL R23
	LSR R19
	BRLO zoop
	DEC R22
	BRNE doop
zoop:
	LSR R23
	LDI R20, 0xFF
	OUT DDRD, R20
	OUT PORTD, R23
	RJMP END

Q3:
	LDI R19, 5
	LDI XL, 0x00
	LDI XH, 0x01
	LDI YL, 0x50
	LDI YH, 0x01
loop:
	LD R18, X+
	ST Y+, R18
	DEC R19
	BRNE loop
	RJMP END

QUIZ:
	LDI R20, 0x00
	LDI R21, 0xAA
	LDI R22, 0xFF
	OR R20, R21
	EOR R20, R22 

END: RJMP END