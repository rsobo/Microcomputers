/*
 * Lab10.c
 *
 * Created: 11/13/2020 1:33:04 PM
 * Author : ryans
 */ 

#include <avr/io.h>
#define F_CPU 16000000UL
#include <avr/interrupt.h>
#include <util/delay.h>

int main(){
   DDRD = 0xFF;
   TCNT0 = 0x00;
   TCCR0A=0x00;
   TCCR0B=0x01;
   TIMSK0=(1<<TOIE0);
   sei();
   int a = 0;
   while(1){
		PORTD = 0xFF;
		while((TIFR0 & (1<<TOV0)) == 0){}
   }
}

ISR(TIMER0_OVF_vect){
	a++;
	switch a{
		case 0:
			PORTD=0xFC;
			break;
		case 1:
			PORTD=0x60;
			break;
		case 2:
			PORTD=0xDA;
			break;
		case 3:
			PORTD = 0xF2;
			break;
		case 4:
			PORTD = 0x66;
			break;
		case 5:
			PORTD = 0xB6;
			break;
		case 6:
			PORTD = 0xBE;
			break;
		case 7:
			PORTD = 0xE0;
			break;
		case 8:
			PORTD = 0xFE;
			break;
		case 9:
			PORTD = 0xF6;
			break;
	}
}

