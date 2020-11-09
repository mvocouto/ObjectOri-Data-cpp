#include <iostream>
#include "cube.h"

int main(){
    Cube c;
    
    c.setLength(3.2);
    
    double volume = c.getVolume();
    std::cout << "Volume: " << volume << std::endl;

    double surfaceArea = c.getSurfaceArea();
    std::cout << "Surface are of the cube: " << surfaceArea << std::endl;

    return 0;
}