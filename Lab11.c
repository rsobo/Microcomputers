/*
 * Lab11.c
 *
 * Created: 11/20/2020 1:28:56 PM
 * Author : ryans
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>

int main(){

	DDRB &= 0b11110010;
	DDRB |= 0b00100000;	
	PCMSK0 = 0b00001101;
	PCICR = 0x00000001;
	sei();
	while(1);	    
}

ISR (PCINT0_vect){
	PORTB |= 0b00100000;
}
