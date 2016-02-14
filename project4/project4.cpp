#include <iostream>
#include <fstream>

using namespace std;

struct Pieces {
    char *word;
    int jump;
};

void readFile(Pieces *&pieceptr, int *&keyptr);
void decodeMessage(Pieces *pieceptr, int *keyptr);
int stringLength(char *str);
void stringCopy(char *str1, char *str2);

int main() {
    Pieces *pieceptr; // Points to first piece in piece array.
    int *keyptr; // Points to first key in key array.
    char *decoded; // Decoded message



    readFile(pieceptr, keyptr); // pass these Pointers to readFile function

    decodeMessage(pieceptr, keyptr);
    // cout << (*keyptr) << endl;


    return 0;
}

void readFile(Pieces *&pieceptr, int *&keyptr) {
    char ifileName[20];
    cout << "Please enter file name: ";
    cin >> ifileName;

    ifstream fin;
    fin.open(ifileName);
    int keyCount, pieceCount;
    if(fin.good()) {
        cout << "Opened File Successfully" << endl;
        fin >> pieceCount >> keyCount;

        pieceptr = new Pieces[pieceCount]; // Pieces
        Pieces *pieceCopy = pieceptr;
        keyptr = new int[keyCount]; // Keys

        for (int i = 0; i < pieceCount; i++) {
            char *tempWord = new char[20]; // create pointer to first char in char array.
            fin >> tempWord >> (*pieceCopy).jump; // Because tempWord actually returns the string it points to, not the address of the pointer
            (*pieceCopy).word = new char[stringLength(tempWord)]; // Create exact amount of memory needed for word.
            stringCopy((*pieceCopy).word, tempWord);
            delete []tempWord; // Done with tempWord
            tempWord = NULL;
            pieceCopy++;
        }

        for (int j = 0; j < keyCount; j++) {
            fin >> *keyptr;
            keyptr++;
        }
    } else { cout << "Cannot opening file." << endl; }
    fin.close();
}

void decodeMessage(Pieces *pieceptr, int *keyptr) {
    pieceptr++;
    cout << (*pieceptr).word << endl;
}

int stringLength(char *str) {
    int length = 0;
    while (*str != '\0') {
        str++;
        length++;
    }
    return length;
}

void stringCopy(char *str1, char *str2) {
    while (*str2 != '\0') {
         *str1++ = *str2++;
    }
}
