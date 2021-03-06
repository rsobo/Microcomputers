/*
 * PostLab8.c
 *
 * Created: 10/30/2020 1:14:02 PM
 * Author : ryans
 */ 

#include <avr/io.h>
#define F_CPU 16000000UL
#include <util/delay.h>

void Q1(){
	DDRB = 0xFF;
	while(1){
		PORTB = PORTB | 0b00100010;
		_delay_ms(1000);
		PORTB = PORTB & 0b00000000;
		_delay_ms(1000);
	}
}

void Q2(){
	
	DDRB = 0xFF;
	DDRD = 0x00;
	while(1){
		if(PIND & 0b00001000){
			PORTB = PORTB | 0b00100000;
			_delay_ms(1000);
			PORTB = PORTB & 0b00000000;
			_delay_ms(1000);
		} else{
			PORTB = 0b00000000;
		}
	}
}

void Q3(){
	DDRD = 0xFF;
	int num = 0b11110000;
	int count = 0;
	while(num != 0){
		if(num & 0b00000001){
			count++;
		}
		num = num >> 1;
	}
	PORTD = getDisplay(count);
}

int getDisplay(int input){
	switch(input){
		case 0:
			return 0b00111111;
		case 1:
			return 0b00000110;
		case 2:
			return 0b01011011;
		case 3:
			return 0b01001111;
		case 4:
			return 0b01100110;
		case 5:
			return 0b01101101;
		case 6:
			return 0b01111101;
		case 7:
			return 0b00000111;
		case 8:
			return 0b01111111;
		case 9:
			return 0b01100111;
		default:
			return 0;
	}
}

int main(){
    
	Q1();
	Q2();
	Q3();
	return 0;
}

