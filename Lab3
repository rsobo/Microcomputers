;
; PostLab3.asm
;
; Created: 9/25/2020 1:27:36 PM
; Author : ryans
;

	RJMP Q3
Q1:
	LDI R16, 20
	LDI R18, 18
loop:CP R16, R18
	BRGE lbl1
	LDI R24, 2
	RJMP loop
lbl1:LDI R24, 1
	RJMP loop

Q2:
	LDI R20, 12
	LDI R16, 12
	CP R20, R16
	BRLT lbl2
	BREQ lbl21
	LDI R24, 5
	RJMP end
lbl2:LDI R24, 3
	RJMP end
lbl21: LDI R24, 2
end: RJMP end

Q3:
	LDI R16, 0
	LDI R17, 1
	LDI R20, 8
lbl3:ADD R16, R17
	STS 0x25, R16
	DEC R20
	ADD R17, R16
	STS 0x25, R17
	DEC R20
	BRNE lbl3
end3: RJMP end3
