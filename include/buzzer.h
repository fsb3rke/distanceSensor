#pragma once

#ifndef BUZZER_H_
#define BUZZER_H_

#include <Arduino.h>


struct buzzer_data {
    int frequency;
    int delayTime;
    int pin;
};

namespace buzzer {
    int playInFrequency(const buzzer_data& buzzerData);
}


#endif // BUZZER_H_
