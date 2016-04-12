#include <iostream>
#include "queue.h"

using namespace std;

int main() {
    Queue test;
    int removed;
    test.dequeue(removed);
    cout << test << endl;
    test.enqueue(1);
    cout << test << endl;
    test.enqueue(2);
    cout << test << endl;
    test.enqueue(3);
    cout << test << endl;
    test.enqueue(4);
    cout << test << endl;
    test.dequeue(removed);
    cout << test << endl;
    test.enqueue(5);
    cout << test << endl;
    test.enqueue(6);
    cout << test << endl;
    test.enqueue(7);
    cout << test << endl;
    test.enqueue(99);
    cout << test << endl;
    test.enqueue(8);
    cout << test << endl;
    test.enqueue(9);
    cout << test << endl;
    test.enqueue(10);
    cout << test << endl;
    test.enqueue(11);
    cout << test << endl;
    test.enqueue(12);
    cout << test << endl;



    test.dequeue(removed);
    cout << test << endl;
    test.dequeue(removed);
    cout << test << endl;
    test.dequeue(removed);
    cout << test << endl;
    test.dequeue(removed);
    cout << test << endl;
    test.dequeue(removed);
    cout << test << endl;
    test.dequeue(removed);
    cout << test << endl;
    test.dequeue(removed);
    cout << test << endl;
    test.enqueue(19);
    cout << test << endl;



    Queue test2 = test;
    cout << test2 << endl;
    if (test == test2) {
        cout << "same" << endl;
    }
    test2.enqueue(20);
    cout << test2 << endl;

    if (test == test2) {
        cout << "same" << endl;
    } else {
        cout << "diff" << endl;
    }


    return 0;
}
