#include <asf.h>
#include <util/delay.h>

int ports[10] = {
	0b00111111, // 0
	0b00000110, // 1
	0b01011011, // 2
	0b01001111, // 3
	0b01100110, // 4
	0b01101101, // 5
	0b01111101, // 6
	0b00000111, // 7
	0b01111111, // 8
	0b01101111  // 9
};

void mark_digit(int port) {
	PORTD = port;
}

int main (void)
{
	DDRB  = 0b00000000;
	DDRD  = 0b11111111;
	PORTB = 0b11111111;
	PORTD = 0b00000000;

	int counter = 0;
	
	while (true) {
		if (PINB == 0b11111110) {
			while (PINB == 0b11111110) continue;
			
			mark_digit(ports[counter]);
			
			if (counter == 9) {
				counter = -1;
			}
			
			counter++;
		}		
	}
}
