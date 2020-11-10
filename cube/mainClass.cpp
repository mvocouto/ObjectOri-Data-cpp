#include <iostream>
#include "CubeClass.h"

int main() {

    uiuc::Cube c;
    c.setLength(2);
    double volume = c.getVolume();
    std::cout << "Volume of the cube: " << volume << std::endl;
    double surface = c.getSurfaceArea();
    std::cout << "Surface area of the cube: " << surface << std::endl;

    return 0;
}