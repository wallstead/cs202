#include <iostream>
#include <fstream>

using namespace std;

struct Pieces {
    char *word;
    int jump;
};

void readFile(Pieces *&pieceptr, int *&keyptr);
int stringLength(char *str);
void stringCopy(char *str1, char *str2);

int main() {
    Pieces *pieceptr; // Points to first piece in piece array.
    int *keyptr; // Points to first key in key array.


    readFile(pieceptr, keyptr); // pass these Pointers to readFile function

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
    if(fin.is_open()) {
        cout << "opened" << endl;
        fin >> pieceCount >> keyCount;

        pieceptr = new Pieces[pieceCount]; // Pieces
        keyptr = new int[keyCount]; // Keys

        for (int i = 0; i < 1; i++) {
            char *tempWord = new char[20]; // create pointer to first char in char array.
            fin >> tempWord >> (*pieceptr).jump; // Because tempWord actually returns the string it points to, not the address of the pointer
            (*pieceptr).word = new char[stringLength(tempWord)]; // Create exact amount of memory needed for word.
            stringCopy((*pieceptr).word, tempWord);
            delete []tempWord; // Done with tempWord
            tempWord = NULL;
            cout << (*pieceptr).word << " " << (*pieceptr).jump << endl;
            pieceptr++;

        }

        // (*pieceptr).word = new char[5]; // Allocate mem for a word
        // (*pieceptr).jump = 1;
        // (*keyptr) = 5;

    } else {
        cout << "Error opening file." << endl;
    }
    fin.close();
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
