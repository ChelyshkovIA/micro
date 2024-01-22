#include <asf.h>
#include <util/delay.h>

int main (void)
{
	DDRB = 0b00000000;
	DDRD = 0b11111111;
	
	PORTB = 0b11111111;
	
	while (true) {
		if (PINB == 0b11111110) {
			PORTD = 0b11111111;
			continue;
		} else {
			PORTD = 0b00000000;
		}
		
		if (PINB == 0b11111101) {
			PORTD = 0b00000001;
			_delay_ms(100);
			PORTD = 0b00000011;
			_delay_ms(100);
			PORTD = 0b00000111;
			_delay_ms(100);
			PORTD = 0b00001111;
			_delay_ms(100);
			PORTD = 0b00011111;
			_delay_ms(100);
			PORTD = 0b00111111;
			_delay_ms(100);
			PORTD = 0b01111111;
			_delay_ms(100);
			PORTD = 0b11111111;
			_delay_ms(100);
			PORTD = 0b00000000;
			_delay_ms(100);
		}
	}
}
