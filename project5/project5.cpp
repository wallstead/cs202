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
    test.print();

    char *word2 = new char[20];

    cout << "Enter a string 2: ";
    cin >> word2;

    String test2;
    test2.initialize(word2);


    cout << test.compare(test2) << endl;

    // ifstream fin;
    // fin.open("strings");
    // if (fin.good()) {
    //     cout << "Opened file." << endl;
    // } else {
    //     cout << "Could not open file." << endl;
    // }
}
