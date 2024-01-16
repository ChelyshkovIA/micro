#include <asf.h>
#include <util/delay.h>

int voltage_config = 0b1;
int on = 0b1;
int off = 0b0;

void blink(int amount) {
	for (int i = 0; i < amount; i++) {
		_delay_ms(500);
		PORTC = on;
		_delay_ms(500);
		PORTC = off;
	}
}

int main (void)
{
	DDRC = voltage_config;
	blink(5);
}
