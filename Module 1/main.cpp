/**
 * Semisi Rigby
 *
 * Project Name: CSC450-CTA01
 *
 * Project Purpose:
 * Display information for a fictional person
 *
 * Program Inputs: N/A
 *
 * Program Outputs:
 * Fictional Person Details; name, address
 *
 * Program Limitations: N/A
 *
 * Program Errors: none
 */

// inclusion of console iostream
#include <iostream>

// using namespace standard
using namespace std;

// main function for displaying fictional character details
int main() {

    // declarations
    string sFirstName = "John";
    string sLastName = "Wick";
    string sStreetAddress = "121 Horseshoe Road";
    string sCity = "Mill Neck, NY";
    int iZip = 11765;

    // display outputs
    cout << "Fictional Character Details" << endl;
    cout << "===========================" << endl;
    cout << "First Name: " << sFirstName << endl;
    cout << "Last Name: " << sLastName << endl;
    cout << "Street Address: " << sStreetAddress << endl;
    cout << "City: " << sCity << endl;
    cout << "Zip Code: " << iZip << endl;

    // main function return statement
    return 0;

} // end of main
