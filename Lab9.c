/*
 * Prelab9.c
 *
 * Created: 11/5/2020 6:52:19 PM
 * Author : ryans
 */ 

#include <avr/io.h>

void Q1(){
	DDRB = DDRB | 0b00000010;
	PORTB = PORTB & 0b11111101;
	while (1){
		TCCR0A = 0x00;
		TCCR0B = 0x01;
		TCNT0 = 96;
		while((TIFR0 & (1 << TOV0)) == 0){}
		TCCR0B = 0x00;
		TIFR0 = 0x01;
		PORTB = PORTB ^= 0b00000010;
	}
}

void Q1B(){
	DDRB = DDRB | 0b00000010;
	PORTB = PORTB & 0b11111101;
	while (1){
		OCR0A = 159;
		TCCR0A = 0x02;
		TCCR0B =0x01;
		while((TIFR0&(1<<OCF0A))==0){}
		TCCR0B = 0x00;
		TIFR0=1<<OCF0A;
		PORTB^=0b00000010;
	}
}

void T1Delay (){
	TCNT1 = 65536 - 16000;
	TCCR1A = 0x00;
	TCCR1B = 0x01;
	while((TIFR1 & (1 << TOV1)) == 0){
	}
	TCCR1B = 0;
	TIFR1 = 1 << TOV1;
}

void Q2A(){
	DDRB = 0b00001100;
	
	while (1){
		if ((PINB & 0b00000001) != 0){
			PORTB = PORTB | 0b00000100;
			T1Delay();
			PORTB = PORTB | 0b00001100;
		}
		else {
			PORTB = PORTB & 0b11110011;
		}
	}
}

int main(){
	Q1();
	Q2A();
}

