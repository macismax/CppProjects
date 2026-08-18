#include <iostream>


bool checkDivison(int value)
{

    return value == 2 || value == 3 || value == 5 || value == 7;
}



int main()
{
    int x {};
    std::cout << "Enter a number (1-10): ";
    std::cin >> x;

    int value {checkDivison(x)};

    
    std::cout << value << '\n';
    if (value)
        std::cout << "Your value is prime ";
    else
        std::cout << "Your number is odd ";
    
}