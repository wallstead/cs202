#include <iostream>
#include "stack.h"
// #include "stackN.h"

using namespace std;

int main() {

    Stack test = Stack(3);
    char a = 'a';
    char b = 'b';
    char c = 'c';
    char d = 'd';
    char e = 'e';

    cout << test << endl;

    if (test.push(a)) {
        cout << "pushed in: " << a << endl;
    } else {
        cout << "failed to push in: " << a << endl;
    }

    cout << test << endl;

    char ctest;

    if (test.pop(ctest)) {
        cout << "popped out: " << ctest << endl;
    } else {
        cout << "failed to pop out" << endl;
    }

    cout << test << endl;

    if (test.push(b)) {
        cout << "pushed in: " << b << endl;
    } else {
        cout << "failed to push in: " << b << endl;
    }

    cout << test << endl;

    if (test.push(c)) {
        cout << "pushed in: " << c << endl;
    } else {
        cout << "failed to push in: " << c << endl;
    }

    cout << test << endl;

    if (test.push(d)) {
        cout << "pushed in: " << d << endl;
    } else {
        cout << "failed to push in: " << d << endl;
    }

    cout << test << endl;

    if (test.push(a)) {
        cout << "pushed in: " << a << endl;
    } else {
        cout << "failed to push in: " << a << endl;
    }

    cout << test << endl;









    return 0;
}
