#include <iostream>
/*
int main()
{
   int x = 22.01;
    
   std::cout << static_cast<double>(x) << '\n';
   std::cout << static_cast<char>(x) << '\n';
   x = -2;

   std::cout << static_cast<unsigned int>(x) << '\n';
   std::cout << static_cast<signed int>(x) << '\n';


    return 0;
} */


int main()
{

    std::cout << "Enter a single character: " << '\n';
    char a {};
    std::cin >> a;
    std::cout << "You entered '" << a << "' whihc has ASCCI code " ;
    std::cout << static_cast<int>(a) << '\n';

}