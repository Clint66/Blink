/*
* Blink.cpp
*
* Created: 26/10/2018 6:20:45 PM
* Author : clint
*/

# define F_CPU 8000000UL

#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>


#define PIN PB0
#define DELAY 1000

int main(void)
{

	DDRB = (1<<PIN);
	PORTB |= (1<<PIN);

	while (1)
	{
		_delay_ms(DELAY);	

		PORTB ^= (1<<PIN);

	}
}

