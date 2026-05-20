#include "ReportManager.h"

void ReportManager::saveReport(string message) {

    ofstream file("../data/logs.txt", ios::app);

    file << message << endl;

    file.close();

    cout << "Report Saved Successfully" << endl;
}