;
; Prelab2.asm
;
; Created: 9/18/2020 10:00:59 AM
; Author : ryans
;


; Replace with your application code
start:
;Q1
        LDI R16, $92
	LDI R17, $23
	LDI R18, $66
	LDI R19, $87
	LDI R20, $F5
	ADD R16, R17
	ADD R18, R19
	ADD R16, R18
	ADD R16, R20

;Q2
	LDI R16, 0b11111111
	LDI R17, 0b00000000
	STS 0x24, R16
	STS 0x24, R17
