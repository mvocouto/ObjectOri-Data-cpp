#include <iostream>
#include "Cube.h"

using uiuc::Cube;

Cube *CreateUnitCube() {
    Cube cube;
    cube.setLength(6);
    return &cube;
}

void someOtherFunction(){
    int b = 10;
}

int main() {
    Cube *c = CreateUnitCube();
    someOtherFunction();
    double a = c->getSurfaceArea();
    std::cout << "Surface area: " << a << std::endl;
    double v = c->getVolume();
    std::cout << "Cube volume: " << v << std::endl;

    return 0;
}

/*
The dot operator (.) is used to access the members of an object or struct
when working with objects. The arrow operator (->) is used to access
the members of an object or struct when working with pointers.
The dot operator is used on objects and references, whereas the arrow operator
is used on pointers only
*/