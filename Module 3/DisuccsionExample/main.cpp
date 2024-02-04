#include <iostream>

using namespace std;

int main() {

   // create a variable
   int var = 13;

   // address-of operator usage for pointer
   int *ptr = &var;

   // display both address and values of the variable

   // pointer holds the address of the variable
   cout << "Address of our variable: " << ptr << endl;
   // use the dereference operator to display the value
   cout << "Value of our variable: " << *ptr << endl;

   // main return statement
    return 0;

}