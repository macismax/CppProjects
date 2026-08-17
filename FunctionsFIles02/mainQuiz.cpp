#include <iostream>


/* reads two separate integers from the user, adds them together, and  outputs the answer. 
A function named “readNumber” should be used to get (and return) a single integer from the user.
A function named “writeAnswer” should be used to output the answer. This function should take a single parameter and have no return value.
A main() function should be used to glue the above functions together. */



int readNumber()
{
    
    std:: cout << "Enter a number: "; 
    int num1 {};    
    std::cin >> num1;
    return num1;

}

void writeAnswer(int num1)
{
    
    std::cout << "Both numbers added make: " << num1 << "\n";

}


int main ()
{

    int a {readNumber()};
    int b {readNumber()};

    writeAnswer(a + b); 

}