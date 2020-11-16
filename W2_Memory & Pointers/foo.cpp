#include <iostream>

// - The memory alocated for x will be smaller than the memory of the
// variable x, the alocation is done sequentially by a larger number
// to the smaller number.

void foo() {
    int x = 42;
    std::cout << " x in foo(): " << x << std::endl;
    std::cout << "&x in foo(): " << &x << std::endl;
}

int main() {
    int num = 7;
    std::cout << " num in main(): " << num << std::endl;
    std::cout << "&num in main(): " << &num << std::endl;

    foo();
    
    return 0;
}