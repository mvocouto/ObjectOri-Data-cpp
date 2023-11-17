#include <iostream>
#include "Cube.h"

using uiuc::Cube;
using std::cout;
using std::endl;

int main (){
    Cube *c1 = new Cube;
    Cube *c2 = c1;

    c2->setLength(2);

    delete c2;
    delete c1; // !! Warning
    // This last line should give us a problem since we are going to delete
    // information at the heap memory a second time, which might not contain
    // the information intended to be deleted.

    return 0;
}