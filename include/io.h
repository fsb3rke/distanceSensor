#pragma once

#include <Arduino.h>

#ifndef IO_H_
#define IO_H_

// INPUTS
#define ECHO_PIN 6
#define INPUT_PINS_SIZE 1

// OUTPUTS
#define TRIGGER_PIN 7
#define BUZZER_PIN 5
#define LED_PIN 4
#define OUTPUT_PINS_SIZE 3

int inputPins[INPUT_PINS_SIZE] = {
  ECHO_PIN
};

int outputPins[OUTPUT_PINS_SIZE] = {
  TRIGGER_PIN,
  BUZZER_PIN,
  LED_PIN
};

void initializeIO() {
    Serial.begin(9600);
    int ip, op;
    for (ip = 0, op = 0;
         ip < INPUT_PINS_SIZE && op < OUTPUT_PINS_SIZE;
         ++op ) {
        
        if (ip >= INPUT_PINS_SIZE) pinMode(inputPins[ip], INPUT);
        pinMode(outputPins[op], OUTPUT);
    }
}

#endif // IO_H_