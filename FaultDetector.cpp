#include "FaultDetector.h"

void FaultDetector::detectVoltage(float voltage) {

    if(voltage > 240) {
        cout << "ALERT: OVERVOLTAGE" << endl;
    }

    else if(voltage < 200) {
        cout << "ALERT: UNDERVOLTAGE" << endl;
    }

    else {
        cout << "Voltage Stable" << endl;
    }
}

void FaultDetector::detectCurrent(float current) {

    if(current > 15) {
        cout << "ALERT: OVERCURRENT" << endl;
    }

    else {
        cout << "Current Stable" << endl;
    }
}