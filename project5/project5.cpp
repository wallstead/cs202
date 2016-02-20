#include <iostream>
#include <fstream>
#include "String.h"

using namespace std;

int main() {
    char *word = new char[20];

    cout << "Enter a string: ";
    cin >> word;

    String test;
    test.initialize(word);
    cout << "word length: " << test.length() << endl;
    test.print();
    
    ifstream fin;
    fin.open("strings");
    if (fin.good()) {
        cout << "Opened file." << endl;
    } else {
        cout << "Could not open file." << endl;
    }
}
