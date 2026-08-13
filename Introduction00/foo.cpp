#include <iostream>

void foo(int)
{
}

// enable the following code to see the error message
/*errors would show with advanced enable all warnings settings*/

int main()
{
    unsigned int x { 5 };
    foo(x);
    std::cout << x << "\n";
    return 0;
}