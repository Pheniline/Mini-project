#include <iostream>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <chrono>

using namespace std;

class Transformer {
private:
    float voltage;
    float current;
    float temperature;

public:

    Transformer() {
        voltage = 230;
        current = 10;
        temperature = 35;
    }

    void generateReadings() {

        voltage = 210 + rand() % 50;
        current = 5 + rand() % 20;
        temperature = 30 + rand() % 70;
    }

    void displayStatus() {

        cout << "\n===== GRIDGUARD LIVE MONITOR =====\n";

        cout << "Voltage: " << voltage << " V" << endl;
        cout << "Current: " << current << " A" << endl;
        cout << "Temperature: " << temperature << " C" << endl;

        checkFaults();
    }

    void checkFaults() {

        if(voltage > 240) {
            cout << "ALERT: OVERVOLTAGE DETECTED\n";
        }

        if(current > 15) {
            cout << "ALERT: OVERCURRENT DETECTED\n";
        }

        if(temperature > 80) {
            cout << "ALERT: TRANSFORMER OVERHEATING\n";
        }

        if(current > 18 && voltage < 215) {
            cout << "ALERT: POSSIBLE ILLEGAL CONNECTION DETECTED\n";
        }
    }
};

int main() {

    srand(time(0));

    Transformer transformer;

    while(true) {

        transformer.generateReadings();

        transformer.displayStatus();

        this_thread::sleep_for(chrono::seconds(2));

        cout << "\n---------------------------------\n";
    }

    return 0;
}