#include <iostream>
#include <fstream>

using namespace std;

struct Pieces {
    char *word;
    int jump;
};

int main() {
    ifstream fin;
    fin.open("data");
    int keyCount, pieceCount;
    if(fin.is_open()) {
        cout << "opened" << endl;
        fin >> pieceCount >> keyCount;
    }

    int *keyptr = new int[ikeyCount]; // Keys
    *keyptr = 10;
    cout << *keyptr << endl;



    return 0;
}
