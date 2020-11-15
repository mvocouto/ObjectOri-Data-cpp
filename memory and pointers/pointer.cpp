#include <iostream>

// - This is an example of stack memory application in cpp
// whenever it is used, in most cases varying in some compuler the memory
// address will be from a bigger to lower value.

int main() {
    int num = 7;
    std::cout << "num: " << num << std::endl;
    std::cout << "&num: " << &num << std::endl;

    int *p = &num;
    std::cout << "p: " << p << std::endl;
    std::cout << "&p: " << &p << std::endl;
    std::cout << "*p: " << *p << std::endl;

    *p = 42;
    std::cout << "p changed to 42" << std::endl;
    std::cout << "num: " << num << std::endl;

    return 0;
}