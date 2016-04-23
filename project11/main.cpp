#include <iostream>
#include <string>
#include "listarray.h"
#include "listnode.h"

using namespace std;

int main() {
    ListNode nodelist;
    int removed;

    /* Insert from data file into node list  */
    string fileName;
    cout << "Enter file name for binary search: ";
    cin >> fileName;

    if (nodelist.readFile(fileName)) {
        cout << "Did read file." << endl;
    } else {
        cout << "Failed to read file." << endl;
    }
    cout << "Node list: " << nodelist << endl;

    /* Sort node list */
    nodelist.sort();
    cout << "Sorted node list: " << nodelist << endl;

    /* Copy from node list to array list */
    ListArray arraylist = ListArray(nodelist.count());
    while(!nodelist.isEmpty()) {
        int data;
        nodelist.get(data);
        arraylist.insertAfter(data);
        nodelist.remove(removed);
    }
    cout << "Array list: " << arraylist << endl;

    /* Prompt for search number */
    int searchNum;
    cout << "Enter search number: ";
    cin >> searchNum;

    /* Perform binary search */
    

    return 0;
}
