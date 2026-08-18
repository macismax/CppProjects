#include <iomanip> // for std::setw (which sets the width of the subsequent output)
#include <iostream>
#include <climits> // for CHAR_BIT

int main()
{
    std::cout << "A byte is " << CHAR_BIT << " bits\n\n";

    std::cout << std::left; // left justify output

    std::cout << std::setw(8) << "bool:" << sizeof(bool) << " bytes\n";
    std::cout << std::setw(8) << "char:" << sizeof(char) << " bytes\n";
    std::cout << std::setw(8) << "short:" << sizeof(short) << " bytes\n";
    std::cout << std::setw(8) << "int:" << sizeof(int) << " bytes\n";
    std::cout << std::setw(8) << "long:" << sizeof(long) << " bytes\n";
    std::cout << std::setw(8) << "longlong:" << sizeof(long long) << " bytes\n";
    std::cout << std::setw(8) << "float:" << sizeof(float) << " bytes\n";
    std::cout << std::setw(8) << "double:" << sizeof(double) << " bytes\n";
    std::cout << std::setw(8) << "long double:" << sizeof(long double) << " bytes\n";

    return 0;

}