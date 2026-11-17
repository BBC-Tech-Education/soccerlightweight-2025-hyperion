#include <Arduino.h>
#include "config.h"

void setup() {
  Serial.begin(115200);
  pinMode(PIN_STATUS_LED, OUTPUT);
  Serial.println("Robot starting...");
}

void loop() {
  // Blink the status LED so you can see the code is running.
  digitalWrite(PIN_STATUS_LED, HIGH);
  delay(250);
  digitalWrite(PIN_STATUS_LED, LOW);
  delay(250);
}
