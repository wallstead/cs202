#include <iostream>
#include <fstream>

using namespace std;

struct Pieces {
    char *word;
    int jump;
};

void readFile(Pieces *&pieceptr, int *&keyptr);

int main() {
    Pieces *pieceptr; // Points to first piece in piece array.
    int *keyptr; // Points to first key in key array.


    readFile(pieceptr, keyptr); // pass these Pointers to readFile function

    cout << (*keyptr) << endl;


    return 0;
}

void readFile(Pieces *&pieceptr, int *&keyptr) {


    ifstream fin;
    fin.open("data");
    int keyCount, pieceCount;
    if(fin.is_open()) {
        cout << "opened" << endl;
        fin >> pieceCount >> keyCount;
    }
    fin.close();

    pieceptr = new Pieces[pieceCount]; // Pieces
    keyptr = new int[keyCount]; // Keys
    (*pieceptr).word = new char[5]; // Allocate mem for a word
    (*pieceptr).jump = 1;
    (*keyptr) = 5;

    cout << (*keyptr) << endl;
}
