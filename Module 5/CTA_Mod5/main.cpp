/**
 * Semisi Rigby
 *
 * Project Name:
 * CSC450-CTA05
 *
 * Project Purpose:
 * Part 1: Open a text file and append user input to the file
 * Part 2: Use a custom reversal method for the user input and append
 * to the file.
 *
 * Algorithm Used:
 * algorithm header for reverse method function
 *
 * Program Inputs:
 * Text file provided from Module 5.
 * Output file
 * User Input to append to the file.
 *
 * Program Outputs:
 * Appended text file.
 *
 * Program Limitations:
 * The current implementation allows for a maximum length for input
 * of 1000 characters at a time to prevent buffer overflow vulnerability. This
 * can be changed as needed. Additionally, current implementation is case sensitive for
 * exiting the application.
 *
 * Program Errors:
 *
 */

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

// create a constant max length variable to prevent buffer overflows
const int MAX_INPUT_LEN = 1000;
// create constant file paths
const string INPUT_FILE_PATH = "D:/Personal/OneDrive/Documents/CSUG/CSC450 Programming III/Module5/CSC450_CT5_mod5.txt";
const string OUTPUT_FILE_PATH = "D:/Personal/OneDrive/Documents/CSUG/CSC450 Programming III/Module5/CSC450_CT5_mod5_reverse.txt";

// function for reversing the text in a file line by line.
void reverseFileText(const string& inputFilePath, const string& outputFilePath) {
    // open the input file for reading
    ifstream inputFile(inputFilePath);
    // check if file can be opened
    if (!inputFile) {
        cerr << "Unable to open the desired file for reading." << endl;
        return;
    }

    // open the output file for writing
    ofstream outputFile(outputFilePath);
    // check if file can be opened
    if (!outputFile) {
        cerr << "Unable to open the desired file for writing." << endl;
        return;
    }

    // create a variable to store each line of the input file
    string line;
    // while loop to iterate over the input file
    while (getline(inputFile, line)) {
        // call the reverse method
        reverse(line.begin(), line.end());
        // write the reversed line to the output file
        outputFile << line << endl;
    }

    // close the files
    inputFile.close();
    outputFile.close();

    // confirm reverse text to console
    cout << "Text from the file has been reversed and stored in reverse text file." << endl;

} // end of reverse function

int main() {
    // create a variable to store the file
    ofstream file(INPUT_FILE_PATH, ios::app);

    // check if file can be opened
    if (!file) {
        cerr << "Unable to open the desired file for writing." << endl;
        // return error code for main
        return 1;
    }

    // create a user input variable
    string userInput;

    // Initial Text
    cout << "Enter the information to append to the file (type 'EXIT' to finish appending): " << endl;
    // get user input via getline function
    getline(cin, userInput);

    // while loop for testing against userInput
    while (userInput != "EXIT") {
        // check the length of userInput
        if (userInput.length() > MAX_INPUT_LEN) {
            cout << "Your input exceeds the maximum length available. Enter something shorter." << endl;
        } else {
            file << userInput << endl;
        }
        // confirm input has been appended
        cout << "Text has been appended successfully. Continue to append or enter 'EXIT' to finish: " << endl;
        getline(cin, userInput);

    }

    cout << "Appendages added." << endl;

    cout << "Reversing the provided text from the input file to new output file." << endl;

    // call the created reverse method
    reverseFileText(INPUT_FILE_PATH, OUTPUT_FILE_PATH);

    cout << "\nExiting application..." << endl;

    // main return statement
    return 0;

}


