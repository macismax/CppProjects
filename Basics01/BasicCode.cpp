#include <iostream>

int main ()

{

    int a {};
    int b = 12;
    [[maybe_unused]] int c = 13; // [[maybe_unused]] is saying this might not be used and dont complain and also more efficient than using a comment to say it might not be used


    std :: cout << a + b << "\n";


//initilizing sets the start and assigning gives a variable a value 
//after the variable has been alrady been created 

// so x = 1 is an assignment and int x {1} is an initialization


     std::cout << "Enter a number: "; // ask user for a number

    int x{};       // define variable x to hold user input (and value-initialize it)
    std::cin >> x; // get number from keyboard and store it in variable x
    std::cout << "You entered " << x << '\n';
    std::cout << "This is the"
                  "size in bytes: " << sizeof(x) << "\n"; // size of x in bytes
}


