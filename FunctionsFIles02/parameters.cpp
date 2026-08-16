#include <iostream>

int doubleNumber(int x)
{
    return 2 * x;
}


int main ()
{

    std::cout << "Enter a number: ";
    int x {};
    std:: cin >> x;
    std::cout << "The double of " << x << " is " << doubleNumber(x) << "\n";
}




//         https://www.learncpp.com/images/CppTutorial/Chapter2/ParametersReturn.png



