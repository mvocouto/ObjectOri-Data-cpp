#include <iostream>

int main(){

    int num = 7;
    std::cout << "current value o 'num': " << num << std::endl;
    std::cout << "current value of the '&num' address: " << &num << std::endl;

    int * p = &num;
    std::cout << "current address of the pointer, 'p': " << p << std::endl;
    std::cout << "current address of the pointer, '&p': " << &p << std::endl;
    
    /* The point "p" will store the address and always point and
    redirect the information to the original variable "num". */

    int value_in_num = *p;
    std::cout << "current value is new variable 'value_in_num': " << value_in_num << std::endl;
    
    std::cout << "Declaring a new value for '*p' " << std::endl;
    *p = 42;

    std::cout << "Since '*p' is a pointer the value will be redirect to num as well" << std::endl;

    std::cout << "Value of num: " << num << std::endl;

    return 0;

}