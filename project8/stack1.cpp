// // array - stay
// #include "stack.h"
// #include <iostream> // remove after testing
//
// Stack::Stack(int size) {
//     max = size;
//     top = -1;
//     data = new char[size];
// }
//
// bool Stack::push(char letter) {
//     if (full() == false) {
//         top;
//         data[top] = letter;
//         actual++;
//         cout << "top: " << top << endl;
//         cout << "actual: " << actual << endl;
//         cout << "pushed in: " << data[top] << endl; // remove after testing
//         return true;
//     } else { // too full
//         return false;
//     }
// }
//
// bool Stack::pop(char &topLetter) {
//     if (empty() == false) {
//         actual--;
//         topLetter = data[top];
//         top--;
//         cout << "top: " << top << endl;
//         cout << "actual: " << actual << endl;
//         return true;
//     } else { // nothing to pop
//         return false;
//     }
// }
//
// bool Stack::empty() const {
//     return top < 0;
// }
//
// bool Stack::full() const {
//     return top == max-1;
// }
//
//
// Stack::~Stack() {
//
// }
