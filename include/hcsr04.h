#pragma once

#ifndef HCSR_04_H_
#define HCSR_04_H_

struct hcsr04_data
{
    int rangeMax;
    int rangeMin;
    int trigPin;
    int echoPin;
};

namespace hcsrc04 {
    int calculateDistance(const hcsr04_data& hcData);
}


#endif // HCSR_04_H_