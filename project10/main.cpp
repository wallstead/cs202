#include <iostream>
#include "listarray.cpp"

using namespace std;

int main() {
    ListArray<int> list;
    cout << list << endl;
    list.insertAfter(1);
    cout << list << endl;
    list.insertAfter(2);
    cout << list << endl;
    list.insertAfter(3);
    cout << list << endl;
    list.insertAfter(4);
    cout << list << endl;
    return 0;
}
