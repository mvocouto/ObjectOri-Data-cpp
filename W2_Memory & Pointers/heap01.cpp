#include <iostream>
#include "CubeClass.h"

using uiuc::Cube;

// THIS EXAMPLE SEAMS NOT TO BE RUNNING CORRECTLY, SOME ERROS DURING COMPILING

int main() {
    int *p = new int; // creates a pointer to a specif heapMemory location
    Cube *c = new Cube;

    *p = 42;
    // (*c).setLength(4.0); // When using a pointer to set a value, it is necessary to use (*x). or x->
    c->setLength(4);

    delete c; 
    // Will delete the value of location used for c and return the memory for the program use when necessary
    c = nullptr; // pointer now poiting to a null location to avoid problem in the code
                 // like using data replaced in the deleted memory address mistaken.
    delete p; // Will delete the value of location used for p and return the memory for the program use when necessary
    p = nullptr; // pointer now poiting to a null location to avoid problem in the code
                 // like using data replaced in the deleted memory address mistaken.
    
    // - In this code, not using nullptr function wont generates a lot of problem because the memory will be released after
    // the code ends, since it is running inside main(). However, not using it after delete is not a good practice and might
    // cause problems in code implementation. So it is recommended to use the function always during proggraming after deleting
    // some pointer data location of the memory being used.
    
    return 0;
}