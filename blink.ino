#include <Arduino.h>

void setup() {
	pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
	int wait = 250;
	digitalWrite(LED_BUILTIN, HIGH);
	delay(wait);
	digitalWrite(LED_BUILTIN, LOW);
	delay(wait);
}
