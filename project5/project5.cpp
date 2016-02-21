#include <iostream>
#include <fstream>
#include "String.h"

using namespace std;

int main() {
    ifstream fin;
    fin.open("strings");

    if (fin.is_open()) {
        // cout << "Opened file." << endl;

        String single1, single2;

        char *temp1 = new char[20];
        char *temp2 = new char[20];
        fin >> temp1 >> temp2;

        single1.initialize(temp1);
        single2.initialize(temp2);
        delete []temp1;
        temp1 = NULL;
        delete []temp2;
        temp2 = NULL;

        cout << "Buffer of both strings: " << endl;
        cout << "\tstring 1: ";
        single1.print();
        cout << "\tstring 2: ";
        single2.print();

        cout << "Length of both strings: " << endl;
        cout << "\tstring 1: " << single1.length() << endl;
        cout << "\tstring 2: " << single2.length() << endl;

        cout << "Comparing string 2 to string 1: " << endl;
        cout << "\t" <<single1.compare(single2) << endl;

        cout << "Comparing string 1 to string 2: " << endl;
        cout << "\t" <<single2.compare(single1) << endl;

        cout << "Concatenating string 1 to string 2: " << endl;
        single2.concat(single1);
        cout << "\tstring 1: ";
        single1.print();
        cout << "\tstring 2: ";
        single2.print();

        cout << "Concatenating string 2 to string 1: " << endl;
        single1.concat(single2);
        cout << "\tstring 1: ";
        single1.print();
        cout << "\tstring 2: ";
        single2.print();

        cout << "Copying string 2 to string 1: " << endl;
        single1.copy(single2);
        cout << "\tstring 1: ";
        single1.print();
        cout << "\tstring 2: ";
        single2.print();

        cout << "Deallocating memory for both strings." << endl;
        single1.deallocate();
        single2.deallocate();


    } else {
        cout << "Could not open file." << endl;
    }
}
