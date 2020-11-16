#include <iostream>

// - Using heapMemory the code maitain the memory address assigned for a value
// until the program is shutdown.

// - StackMemory starts at higher address and goes down.

// - HeapMemory starts at lower address and goes up.

int main() {
    int *numPtr = new int;

    std::cout << "*numPtr: " << *numPtr << std::endl;
    std::cout << " numPtr: " << numPtr << std::endl;  // Low value address (heap Memory)
    std::cout << "&numPtr: " << &numPtr << std::endl; // High value address (stack Memory)

    *numPtr = 42;
    std::cout << "*numPtr assigned 42." << std::endl;

    std::cout << "*numPtr: " << *numPtr << std::endl;
    std::cout << " numPtr: " << numPtr << std::endl;
    std::cout << "&numPtr: " << &numPtr << std::endl;
    
    return 0;
}