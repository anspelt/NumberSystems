#include <fstream>
#include <vector>
#include <iostream>

using namespace std;

vector<string> OutputtingNumbersFromFile() {
    vector<string> numbersFromFile;
    string bufferString;
    ifstream readingNumbers("translate.txt");

    if (readingNumbers.is_open()) {
        for (readingNumbers >> bufferString; !readingNumbers.eof(); readingNumbers >> bufferString) {
            if (bufferString[0] == '/')
                continue;
            numbersFromFile.push_back(bufferString);
        }
    }
    readingNumbers.close();

    return numbersFromFile;
}
