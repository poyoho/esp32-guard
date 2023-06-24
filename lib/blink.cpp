#include <Arduino.h>

class Blinker {
uint8_t pin;

public:
    Blinker(uint8_t pin) {
        this->pin = pin;
    }

    void setup() {
        pinMode(pin, OUTPUT);
    }
    
    void blink(uint32_t delay_ms) {
        digitalWrite(pin, HIGH);
        delay(delay_ms);
        digitalWrite(pin, LOW);
        delay(delay_ms);
    };
};

