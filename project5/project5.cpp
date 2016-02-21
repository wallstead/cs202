#include <iostream>
#include <fstream>
#include "String.h"

using namespace std;

int main() {
    ifstream fin;
    fin.open("strings");

    if (fin.is_open()) {
        /* Single Instances Test Driver */
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

        /* Array Test Driver */
        String strings[10];
        String *stringPtr = strings;

        for (int i = 0; i < 10; i++) {
            char *temp = new char[20];
            fin >> temp;
            (*stringPtr).initialize(temp);
            delete []temp;
            temp = NULL;
            stringPtr++;
        }
        stringPtr = strings;

        cout << "Buffers of strings in array:" << endl;
        for (int i = 0; i < 10; i++) {
            cout << "\tstring " << i+1 << ": ";
            (*stringPtr).print();
            stringPtr++;
        }
        stringPtr = strings;

        cout << "Lengths of strings in array:" << endl;
        for (int i = 0; i < 10; i++) {
            cout << "\tstring " << i+1 << ": " << (*stringPtr).length() << endl;
            stringPtr++;
        }
        stringPtr = strings;

        cout << "Comparing string 7 to string 6: " << endl;
        stringPtr += 5;
        String *str6 = stringPtr;
        stringPtr++;
        String *str7 = stringPtr;
        cout << "\t" << (*str6).compare(*str7) << endl;
        (*str6).print();
        (*str7).print();
        stringPtr = strings;

        cout << "Comparing string 1 to string 3: " << endl;
        String *str1 = stringPtr;
        stringPtr+=2;
        String *str3 = stringPtr;
        cout << "\t" << (*str3).compare(*str1) << endl;
        (*str1).print();
        (*str3).print();
        stringPtr = strings;

        cout << "Concatenating string 10 to string 9: " << endl;
        stringPtr += 8;
        String *str9 = stringPtr;
        stringPtr++;
        String *str10 = stringPtr;
        (*str9).concat(*str10);
        cout << "\tstring 9: ";
        (*str9).print();
        cout << "\tstring 10: ";
        (*str10).print();
        stringPtr = strings;

        cout << "Concatenating string 3 to string 7: " << endl;
        (*str7).concat(*str3);
        cout << "\tstring 3: ";
        (*str3).print();
        cout << "\tstring 7: ";
        (*str7).print();

        cout << "Copying string 8 to string 5: " << endl;
        stringPtr += 4;
        String *str5 = stringPtr;
        stringPtr += 3;
        String *str8 = stringPtr;
        (*str5).copy(*str8);
        cout << "\tstring 5: ";
        (*str5).print();
        cout << "\tstring 8: ";
        (*str8).print();
        stringPtr = strings;

        cout << "Buffers of strings in array after manipulations:" << endl;
        for (int i = 0; i < 10; i++) {
            cout << "\tstring " << i+1 << ": ";
            (*stringPtr).print();
            stringPtr++;
        }
        stringPtr = strings;


    } else {
        cout << "Could not open file." << endl;
    }
}
