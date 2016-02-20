#include <iostream>
#include "String.h"

using namespace std;

void String::initialize(char *str) {
    char *strHome = str;

    /* Get Length */
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    str = strHome;
    wordLength = length;

    /* Create String */
    buffer = new char[wordLength+1];
    char *bufferHome = buffer;
    while (*str != '\0') {
        *buffer = *str;
        buffer++;
        str++;
    }
    *buffer = '\0';
    buffer = bufferHome;
}

int String::length() {
    return wordLength;
}

void String::print() {
    cout << buffer << endl;
}
