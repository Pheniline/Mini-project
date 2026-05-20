#ifndef FAULTDETECTOR_H
#define FAULTDETECTOR_H

#include <iostream>
using namespace std;

class FaultDetector {
public:
    void detectVoltage(float voltage);
    void detectCurrent(float current);
};

#endif