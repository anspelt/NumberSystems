#include <fstream>
#include <vector>
#include <iostream>

using namespace std;

void EnteringNumberIntoFile(string outputNumber) {
    ofstream numberEntry("translate.txt", ofstream::app);

    numberEntry << outputNumber;

    numberEntry.close();
}