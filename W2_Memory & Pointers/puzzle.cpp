#include <iostream>
#include "CubeClass.h"

using uiuc::Cube;

Cube *CreateUnitCube () {
    Cube cube;
    cube.setLength(15);
    return &cube;
}

int main() {
    Cube * c = CreateUnitCube();
    // someotherfunction();
    double a = c->getSurfaceArea();
    std::cout << "Surface area: " << a << std::endl;
    double v = c->getVolume();
    std::cout << "Volume area: " << v << std::endl;
    
    return 0;
}