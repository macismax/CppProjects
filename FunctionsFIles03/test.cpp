#include <iostream> 

int getValue()
{
    int value {};
    std::cout << "Enter a value: ";
    std::cin >> value;
    return value;
}

int main ()
{

    int num {getValue()};
    std::cout << "You entered: " << num << std::endl;
}


//Another example of function returing a value 
// Function asks user to enter a value
// Return value is the integer entered by the user from the keyboard
int getValueFromUser()
{
 	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;

	return input; // return the value the user entered back to the caller
}