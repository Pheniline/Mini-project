#ifndef GRIDZONE_H
#define GRIDZONE_H

#include <iostream>
using namespace std;

class GridZone {
private:
    string zoneName;
    float voltage;
    float current;

public:
    GridZone(string name, float v, float c);

    void displayStatus();
    void checkFault();
};
#endif