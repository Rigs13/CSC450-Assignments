/**
 * Semisi Rigby
 *
 * Project Name:
 * CSC450-CTA01; Corrections for CT1_mod1-2
 *
 * Project Purpose:
 * Correct Errors contained within the provided
 * code segment in CT1_mod1-2.cpp
 *
 * Algorithm Used: N/A
 *
 * Program Inputs: N/A
 *
 * Program Outputs:
 * Corrected Statements provided in the code segment
 *
 * Program Limitations: N/A
 *
 * Program Errors: none
 */

#include <iostream>
#include <iomanip>

// standard namespace declaration
using namespace std;

// main function
int main() {

    // declaration
    double dMyMoney = 1000.50;

    // set the precision for dMyMoney to 2 with fixed decimal point
    cout << setprecision(2) << setiosflags(ios::fixed);
    // standard output statement
    cout << "Please be sure to correct all syntax errors in this program." << endl;
    cout << "The total amount of money available is: " << dMyMoney << endl;

    // wait for output screen

    // main function return statement
    return 0;

}
