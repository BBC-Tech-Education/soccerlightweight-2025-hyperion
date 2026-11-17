#pragma once

#include <stdint.h>

// ---------------------------------------------------------------------------
// Pin assignments and robot settings
// Keep every pin number here, in one place, so wiring changes are easy.
// ---------------------------------------------------------------------------

// Status LED (pin 13 is the Teensy's built-in LED)
constexpr uint8_t PIN_STATUS_LED = 13;

// Example: motor driver pins (change to match your wiring)
// constexpr uint8_t PIN_MOTOR_FL_PWM = 2;
// constexpr uint8_t PIN_MOTOR_FL_DIR = 3;
