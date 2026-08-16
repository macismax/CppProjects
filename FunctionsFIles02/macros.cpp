#include <iostream>

#define MY_NAME "Alex"  // This is a macro definition. It defines a macro named MY_NAME with the value "Alex". Whenever MY_NAME is used in the code, it will be replaced with "Alex" during preprocessing.

int main()
{
    std::cout << "My name is: " << MY_NAME << '\n';

    return 0;
}
            
            // Lean cpp states this way is not necessary to use macros and that it is better to use const variables instead of macros since they are more type safe and can be debugged more easily.