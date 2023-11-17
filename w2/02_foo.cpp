/*
  Code did to understand more the concept of stack memory
  and pointers.
*/

// as always the cpp program start with the input ouput
// declaration iostream.

#include <iostream>

/*
  The cpp code understand that it has to run first (ALWAYS)
  the int main routine, that why every program created has an
  int main().
*/

void foo(){

    int x = 42;
    std::cout << " x in foo(): " << x << std::endl;
    std::cout << "&x in foo(): " << &x << std::endl;

}

int main (){

    int num = 7;
    std::cout << " num in main(): " << num << std::endl;
    std::cout << "&num in main(): " << &num << std::endl;

    foo(); // this is used to call the foo function

    // When running this code it is important to understand if

    return 0;

}

/*
  As expected the address of the variable declared inside int main()
  have a higher value when compared to the address of the variable 
  declared inside function foo(). This happens because when the program
  is compilled, the compiler reads first the information inside int main(),
  and after that it goes for the others functions called inside int main().

  In other words, varible "num" is allocated first in the memory.

*/