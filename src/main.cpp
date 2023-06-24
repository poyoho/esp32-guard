#include <Arduino.h>
#include <SPI.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "../lib/GPIO.h"
#include "../lib/blink.h"


Blinker blinker(GPIO_LIGHT);

void setup() {
  blinker.setup();
}

void loop() {
  blinker.blink(1000);
}
