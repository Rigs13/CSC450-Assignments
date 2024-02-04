/**
 * Semisi Rigby
 *
 * Project Name:
 * CSC450-CTA02
 *
 * Project Purpose:
 * Take three integer values from the user, store in three variables,
 * create an integer pointer to dynamic memory, and display the contents
 * of the variables and pointers.
 *
 * Algorithm Used:
 * N/A
 *
 * Program Inputs:
 * Integers from the user
 *
 * Program Outputs:
 * Variable and pointer outputs
 *
 * Program Limitations:
 *
 * Program Errors:
 * N/A
 */

// include iostream, limits (exception handling)
#include <iostream>
#include <limits>

// using namespace std
using namespace std;

// function for obtaining verified integer input
int getUserInput() {

    int value;
    while (true) {
        cout << "Enter an integer: ";
        cin >> value;

        // check for integer input
        if (cin.fail()) {
            // if input fails, clear error flag
            cin.clear();
            // discard invalid input
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Ensure that input is integer value.\n" << endl;

        } // end of if
        else {
            // discard any non-necessary input
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            break;
        } // end of else

    } // end of while loop

    // return value after validation
    return value;

} // end of getUserInput()

// main function
int main() {

    cout << "Program Start" << endl;
    cout << "--------------------" << endl;

    // get values from the user
    int value1 = getUserInput();
    int value2 = getUserInput();
    int value3 = getUserInput();

    // create pointers for the values to dynamic memory
    int* ptrV1 = new int(value1);
    int* ptrV2 = new int(value2);
    int* ptrV3 = new int(value3);

    // display the contents of variables and the pointers
    cout << "\nContents of the variables:" << endl;
    cout << "Value 1: " << value1 << endl;
    cout << "Value 2: " << value2 << endl;
    cout << "Value 3: " << value3 << endl;

    cout << "\nContents of the pointers:" << endl;
    cout << "Pointer for Value 1: " << *ptrV1 << endl;
    cout << "Pointer for Value 2: " << *ptrV2 << endl;
    cout << "Pointer for Value 3: " << *ptrV3 << endl;

    cout << "\nPointer Addresses:" << endl;
    cout << "Pointer 1: " << ptrV1 << endl;
    cout << "Pointer 2: " << ptrV2 << endl;
    cout << "Pointer 3: " << ptrV3 << endl;

    // free the allocated dynamic memory of the pointers
    delete ptrV1;
    delete ptrV2;
    delete ptrV3;

    // main return statement
    return 0;

} // end of main()
