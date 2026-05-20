#include "GridZone.h"

GridZone::GridZone(string name, float v, float c) {
    zoneName = name;
    voltage = v;
    current = c;
}

void GridZone::displayStatus() {
    cout << "Zone: " << zoneName << endl;
    cout << "Voltage: " << voltage << "V" << endl;
    cout << "Current: " << current << "A" << endl;
}

void GridZone::checkFault() {
      if(voltage > 240) {
        cout << "WARNING: OVERVOLTAGE DETECTED" << endl;
    }

    if(current > 15) {
        cout << "WARNING: OVERCURRENT DETECTED" << endl;
    }
}