#include <iostream>
#include <iomanip>
#include "Agency.h"

using namespace std;

void readData(Agency *agency);

int main() {

    Agency agency = Agency();

    agency.print();

    //
    // int selection = 0;
    // do {
    //
    //   /* Print Menu Title */
    //   cout << setfill('-') << setw(80) << "-" << endl
    //        << "Rent-A-Vehicle" << endl << setfill('-')
    //        << setw(80) << "-" << endl;
    //
    //   /* Display Items */
    //   cout << "[1] Read data from file" << endl;
    //   cout << "[2] Print out all data for all cars" << endl;
    //   cout << "[3] Estimate car rental cost" << endl;
    //   cout << "[4] Find most expensive car" << endl;
    //   cout << "[5] Print out all available cars" << endl;
    //   cout << "[6] Exit program" << endl;
    //   cout << setfill('-') << setw(80) << "-" << endl;
    //
    //   /* Get Menu Selection */
    //   cout << "Selection: ";
    //   cin >> selection; // get user input and save it to selection variable
    //   cout << setfill('-') << setw(80) << "-" << endl;
    //
    //   switch (selection) {
    //     case 1:
    //       readData(&agency);
    //       break;
    //     case 2:
    //       agency.print();
    //       break;
    //     case 3:
    //
    //       break;
    //     case 4:
    //
    //       break;
    //     case 5:
    //       agency.printAvailableCars();
    //       break;
    //     case 6:
    //       cout << "Exiting program" << endl;
    //       break;
    //     default:
    //       cout << "Incorrect input" << endl;
    //   }
    //
    // } while (selection != 6);
    // return 0;
}

void readData(Agency *agency) {
    char *ifileName = new char[20];
    cout << "Enter file name: ";
    cin >> ifileName;

    agency->readInData(ifileName);
}
