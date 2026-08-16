#include <iostream>
#include <cmath>

double triangleMath(double a, double b)
{
    double aSquared = std::pow(a, 2);
    double bSquared = std::pow(b, 2);

    double c = std::sqrt(aSquared + bSquared);

    return c;
}

int main()
{
    double a{};
    std::cout << "Enter the triangle's a side: ";
    std::cin >> a;

    double b{};
    std::cout << "Enter the triangle's b side: ";
    std::cin >> b;

    std::cout << "The length of side c is: " << triangleMath(a, b) << '\n';

    return 0;
}
