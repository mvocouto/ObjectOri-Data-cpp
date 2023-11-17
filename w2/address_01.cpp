/*
This code is being used to demonstrate the usage
address in CPP, and also the beggining concept of
how a pointer works.
*/

#include <iostream>

int main(){
    int num = 7;

    std::cout << "value: " << num << std::endl;
    std::cout << "variable address: " << &num << std::endl;

    return 0;

    // just for information due to the course being done,
    // return 0 is important to identify if the code was
    // executed currectly without erros.
    // If an error happen, the value 0 will not be returned.
}