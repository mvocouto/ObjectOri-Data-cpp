// First information and test for HeapMemory

#include <iostream>
#include "Cube.h"

using uiuc::Cube;
using std::cout;
using std::endl;

int main() {
    int *p = new int;
    Cube *c = new Cube;

    *p = 42;
    (*c).setLength(4);
    cout << "The volume of the cube when Length is 04: " << (*c).getVolume() << endl;
    // The line above would do the same function as if it was declared
    // as c->setLength(4);
    c->setLength(5);
    cout << "The volume of the cube when Length is 05: " << c->getVolume() << endl;

    /*
    Checking the declaration for the pointer *p above, there is two ways of settings values
    and calling a defined function when a pointer for an object is created.S
    */

    delete c;
    delete p;
    return 0;
}