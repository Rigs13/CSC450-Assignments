/**
* Semisi Rigby
 *
 * Project Name:
 * CSC450-CTA02
 *
 * Project Purpose:
 * Take input from the user as a string, reverse the string, and return
 *
 * Algorithm used: N/A
 *
 * Program Inputs:
 * Strings from the user
 *
 * Program Outputs:
 * Reversed string(s)
 *
 * Program Limitations:
 * Current implementation takes up to 100 chars for input string.
 * Additionally, a for loop can be used for efficiency of obtaining
 * three strings and returning the reversal.
 *
 * Program Errors:
 * N/A
*/

// include iostream, string, and cstring files
#include <iostream>
#include <string>
#include <cstring>

// using namespace std
using namespace std;

// custom function for reversing strings
char *custom_reverse(char *str) {

    // variable declarations
    int i; // front of string
    int length = 0; // length of string
    int n; // rear of string
    char temp; // temp for swapping
    length = strlen(str);
    n = length - 1;

    // for loop to iterate over half of the string length
    // swaps rear (n) and front (i)
    for (i = 0; i <= (length/2); i++) {
        temp = str[i];
        str[i] = str[n];
        str[n] = temp;
        n--;
    }
    // return the swapped string
    return str;

} // end of custom_reverse()

// main function
int main() {

    // declarations
    char string1[100];
    char string2[100];
    char string3[100];

    // obtain string from user
    cout << "Type first string to be used for reversal: ";
    cin.getline(string1, sizeof(string1)); // read the whole line with spaces

    // output string and reversal
    cout << "Your string: " << string1 << endl;
    cout << "Reversed using custom method: " << custom_reverse(string1) << endl;

    cout << "----------------------------------------" << endl;

    // implement twice more for varying string lengths
    cout << "Enter second string to be reversed: ";
    cin.getline(string2, sizeof(string2));
    cout << "Second string: " << string2 << endl;
    cout << "Reversed second string: " << custom_reverse(string2) << endl;

    cout << "----------------------------------------" << endl;

    cout << "Enter third string to be reversed: ";
    cin.getline(string3, sizeof(string3));
    cout << "Third string: " << string3 << endl;
    cout << "Reversed third string: " << custom_reverse(string3) << endl;

    cout << "----------------------------------------" << endl;

    // main function return
    return 0;

}  // end of main function
