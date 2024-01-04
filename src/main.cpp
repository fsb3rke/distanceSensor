/*
  Author : fsb3rke (Berke)
  Date : 4.01.2023 19:16
*/

#include <Arduino.h>
#include <io.h>
#include <hcsr04.h>
#include <buzzer.h>


hcsr04_data _hcsr04_data;
buzzer_data _buzzer_data;

void setup() {
  initializeIO();
  
  // hcsr04
  _hcsr04_data.rangeMax = 50;
  _hcsr04_data.rangeMin = 0;
  _hcsr04_data.trigPin = TRIGGER_PIN;
  _hcsr04_data.echoPin = ECHO_PIN;

  // buzzer
  _buzzer_data.frequency = 440; // DO (c)
  _buzzer_data.pin = BUZZER_PIN;
}

void loop() {
  int distance = hcsrc04::calculateDistance(_hcsr04_data);
  _buzzer_data.delayTime = distance * 10;
  buzzer::playInFrequency(_buzzer_data);
  Serial.println("\nDISTANCE : " + String(distance) + "\nBUZZER DELAY TIME : " + String(_buzzer_data.delayTime) + "\n");
}