#include <Arduino.h>
#include <hcsr04.h>


int hcsrc04::calculateDistance(const hcsr04_data &hcData) {
    long duration, distance;

    digitalWrite(hcData.trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(hcData.trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(hcData.trigPin, LOW);

    duration = pulseIn(hcData.echoPin, HIGH);
    distance = duration / 58.2;
    delay(50);

    if (distance >= hcData.rangeMax || distance <= hcData.rangeMin) return 0;
    
    return distance;
}