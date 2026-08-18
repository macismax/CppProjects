#include <iostream>


double heightOfTower()
{

     std::cout << "Enter the height of the tower in meters: ";
     double height {};
     std::cin >> height;

     return height;
}   

double calculateHeightSec(double height, int seconds)
{
    
 
     while (seconds <= 5)
    {
        height = (height - 9.8);
        seconds++ ;
        std::cout << "At" << seconds << "Seconds, height is; " << height << '\n';
    }
    
    return height;

}


int main ()
{
    int seconds {0};
    double height {heightOfTower()};
    double x {calculateHeightSec(height, seconds)};

    std::cout << x;
    

}