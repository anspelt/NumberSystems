#include <iostream>
#include <string>
#include <map>

using namespace std;

void EnteringNumberIntoFile(string outputNumber);

void FromDecimal(int number, int notation) {
    map<int, string> hex = {
            {10, "A"},
            {11, "B"},
            {12, "C"},
            {13, "D"},
            {14, "E"},
            {15, "F"}
    };
    map<int, string>::iterator it;


    string stringResult;
    string bufferString;

    while (number) {
        bufferString = to_string(number % notation);
        it = hex.find(stoi(bufferString));
        if (it != hex.end())
            stringResult += it->second;
        else
            stringResult += bufferString;
        number /= notation;
    }
    reverse(stringResult.begin(), stringResult.end());
    EnteringNumberIntoFile(stringResult);
}
