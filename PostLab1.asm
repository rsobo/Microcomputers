;
; PostLab1.asm
;
; Created: 9/11/2020 1:18:28 PM
; Author : ryans
;


;Q1
	LDI R20, 0x99
	LDS R0, 0x14
	LDS R12, 0x14
	LDS R31, 0x14

;Q2
	LDI R20, 6
	LDI R21, 3
	LDI R22, 6
	LDI R23, 1
	ADD R20, R21
	ADD R22, R23
	ADD R20, R22
	MOV R16, R20
