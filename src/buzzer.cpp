#include <buzzer.h>

int buzzer::playInFrequency(const buzzer_data& buzzerData) {
    tone(buzzerData.pin, buzzerData.frequency);
    delay(buzzerData.delayTime);
    noTone(buzzerData.pin);
    delay(buzzerData.delayTime);

    return 0;
}