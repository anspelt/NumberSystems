#include <iostream>
#include <string>
#include <map>
#include <cmath>

using namespace std;

void EnteringNumberIntoFile(string outputNumber);

int ToDecimal(string stringNumber, int notation, bool returnResult) {
    map<char, int> hex = {
            {'A', 10},
            {'B', 11},
            {'C', 12},
            {'D', 13},
            {'E', 14},
            {'F', 15}
    };
    map<char, int>::iterator it;

    unsigned int degree = stringNumber.size() - 1;
    int bufferInt;
    int result = 0;
    int number;

    for (unsigned int i = 0; i < stringNumber.size(); ++i) {
        bufferInt = pow(notation, degree);
        it = hex.find(stringNumber[i]);
        if (it != hex.end())
            number = it->second;
        else
            number = stringNumber[i] - '0';
        result += number * bufferInt;
        degree--;
    }
    if (returnResult)
        return result;
    EnteringNumberIntoFile(to_string(result));
    return 0;
}