#include <iostream>
#include <fstream>

using namespace std;

struct Pieces {
    char *word;
    int jump;
};

void readFile(ifstream *fin, Pieces *pptr, int *kptr, int pieceCount, int keyCount);
int stringLength(char *str);
void stringCopy(char *str1, char *str2);

int main() {
    /* Prompt user for file name */
    char *ifileName = new char[20];
    cout << "Please enter file name: ";
    cin >> ifileName;

    ifstream fin;
    fin.open(ifileName);

    int pieceCount, keyCount;

    if(fin.good()) {
        cout << "File opened." << endl;
        /* Get pieceCount and keyCount */
        fin >> pieceCount >> keyCount;
    } else {
        cout << "Error opening file." << endl;
    }

    cout << pieceCount << " " << keyCount << endl;

    /* Allocate arrays */
    Pieces *pptr = new Pieces[pieceCount];
    int *kptr = new int[keyCount];

    /* Read in data */
    readFile(&fin, pptr, kptr, pieceCount, keyCount);

    cout << (*pptr).jump << endl;


    return 0;
}

void readFile(ifstream *fin, Pieces *pptr, int *kptr, int pieceCount, int keyCount) {
    Pieces *pptrHome = pptr;
    int *kptrHome = kptr;

    for (int i = 0; i < pieceCount; i++) {
        char *tempWord = new char[20]; // create pointer to first char in char array.
        *fin >> tempWord >> (*pptr).jump; // Because tempWord actually returns the string it points to, not the address of the pointer
        (*pptr).word = new char[stringLength(tempWord)]; // Create exact amount of memory needed for word.
        stringCopy((*pptr).word, tempWord);
        delete []tempWord; // Done with tempWord
        tempWord = NULL;
        cout << (*pptr).word << endl;
        pptr++;
    }

    for (int j = 0; j < keyCount; j++) {
        *fin >> *kptr;
        kptr++;
    }

    pptr = pptrHome;
    kptr = kptrHome;
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
         *str1 = *str2;
         str1++;
         str2++;
    }
    *str1 = '\0';
}
