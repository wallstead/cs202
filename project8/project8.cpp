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

    if (test.push(a)) {
        cout << "pushed in: " << a << endl;
    } else {
        cout << "failed to push in: " << a << endl;
    }

    if (test.push(b)) {
        cout << "pushed in: " << b << endl;
    } else {
        cout << "failed to push in: " << b << endl;
    }

    if (test.push(c)) {
        cout << "pushed in: " << c << endl;
    } else {
        cout << "failed to push in: " << c << endl;
    }

    if (test.push(d)) {
        cout << "pushed in: " << d << endl;
    } else {
        cout << "failed to push in: " << d << endl;
    }

    char ctest;

    if (test.pop(ctest)) {
        cout << "popped out: " << ctest << endl;
    } else {
        cout << "failed to pop out" << endl;
    }

    if (test.pop(ctest)) {
        cout << "popped out: " << ctest << endl;
    } else {
        cout << "failed to pop out" << endl;
    }

    if (test.pop(ctest)) {
        cout << "popped out: " << ctest << endl;
    } else {
        cout << "failed to pop out" << endl;
    }

    if (test.pop(ctest)) {
        cout << "popped out: " << ctest << endl;
    } else {
        cout << "failed to pop out" << endl;
    }

    if (test.push(c)) {
        cout << "pushed in: " << c << endl;
    } else {
        cout << "failed to push in: " << c << endl;
    }

    if (test.push(d)) {
        cout << "pushed in: " << d << endl;
    } else {
        cout << "failed to push in: " << d << endl;
    }
    if (test.pop(ctest)) {
        cout << "popped out: " << ctest << endl;
    } else {
        cout << "failed to pop out" << endl;
    }

    if (test.clear()) {
        cout << "cleared" << endl;
    } else {
        cout << "not cleared" << endl;
    }

    if (test.pop(ctest)) {
        cout << "popped out: " << ctest << endl;
    } else {
        cout << "failed to pop out" << endl;
    }
    if (test.push(d)) {
        cout << "pushed in: " << d << endl;
    } else {
        cout << "failed to push in: " << d << endl;
    }
    if (test.push(d)) {
        cout << "pushed in: " << d << endl;
    } else {
        cout << "failed to push in: " << d << endl;
    }
    if (test.pop(ctest)) {
        cout << "popped out: " << ctest << endl;
    } else {
        cout << "failed to pop out" << endl;
    }

    Stack test2 = test;
    if (test2 == test) {
        cout << "same " << endl;
    } else {
        cout << "diff " << endl;
    }

    test2.pop(ctest);

    if (test2 == test) {
        cout << "same " << endl;
    } else {
        cout << "diff " << endl;
    }



    return 0;
}
