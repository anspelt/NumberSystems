#include <vector>
#include <iostream>

using namespace std;

vector<string> OutputtingNumbersFromFile();

void FromDecimal(int number, int notation);

int ToDecimal(string number, int notation, bool returnResult);

int main() {
    vector<string> numbersFromFile;
    numbersFromFile = OutputtingNumbersFromFile();

    if (numbersFromFile[0] == "10")
        FromDecimal(stoi(numbersFromFile[1]), stoi(numbersFromFile[2]));
    else if (numbersFromFile[2] == "10")
        ToDecimal(numbersFromFile[1], stoi(numbersFromFile[0]), false);
    else {
        int intermediateResult = ToDecimal(numbersFromFile[1], stoi(numbersFromFile[0]), true);
        FromDecimal(intermediateResult, stoi(numbersFromFile[2]));
    }
}