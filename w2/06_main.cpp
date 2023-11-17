/*
This code is being created to test the HEAP MEMORY functinality of C++ coding.
*/

#include <iostream>

using std::cout;
using std::endl;

int main() {

    int *numPtr = new int; // a int type heap memory will be created and the pointer *numPtr will be pointing now to this address.
    // *numPtr will be stored in the stack(local) memory, and this variable will be ponting to a new address in heap memory (global memory)
    
    cout << "*numPtr: " << *numPtr << endl;
    cout << " numPtr: " << numPtr << endl;
    cout << "&numPtr: " << &numPtr << endl;

    *numPtr = 42; // again this line make the addres that numPtr is pointing to be changed to the 42 value.
    cout << "*numPtr assigned 42." << endl;

    cout << "*numPtr: " << *numPtr << endl;
    cout << " numPtr: " << numPtr << endl;
    cout << "&numPtr: " << &numPtr << endl;

    return 0; // ending of the int main cycle.
}