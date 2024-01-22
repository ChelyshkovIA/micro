#include <asf.h>
#include <util/delay.h>

void fade_all() {
	PORTD = 0b0;
}

void mark_green() {
	PORTD = 0b1;
}

void mark_blue() {
	PORTD = 0b10;
}

void blink(int amount) {
	for (int i = 0; i < amount; i++) {
		_delay_ms(500);
		fade_all();
		_delay_ms(500);
		mark_blue();
		_delay_ms(500);
		mark_green();
	}
}

int main (void)
{
	DDRD = 0b00000011;

	blink(5);
}
