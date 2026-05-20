#include <iostream>
#include "GridZone.h"
#include "User.h"
#include "FaultDetector.h"
#include "ReportManager.h"

using namespace std;

int main() {

    User admin("admin", "1234");

    string username;
    string password;

    cout << "===== GRIDGUARD LOGIN =====" << endl;

    cout << "Username: ";
    cin >> username;

    cout << "Password: ";
    cin >> password;
     if(admin.login(username, password)) {

        cout << "LOGIN SUCCESSFUL" << endl;

        GridZone zone1("Zone A", 230, 12);
        GridZone zone2("Zone B", 260, 18);

        FaultDetector detector;
        ReportManager report;

        cout << endl;

        zone1.displayStatus();
        zone1.checkFault();

        cout << endl;

        zone2.displayStatus();
        zone2.checkFault();

        cout << endl;

        detector.detectVoltage(260);
        detector.detectCurrent(18);
         report.saveReport("Zone B overload detected");
    }

    else {
        cout << "INVALID LOGIN" << endl;
    }

    return 0;
}