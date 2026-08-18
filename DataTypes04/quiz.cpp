#include <iostream>

double chosenValue()
{

    std::cout<< "Enter a value: ";
    double value {};
    std::cin >> value;

    return value;
}

char chosenOperator()
{
    std::cout << "Enter +, -, *, or /" << '\n';
    char op {};
    std::cin >> op;

    return op;
}



void calculateMath(double valueone, double valuetwo, char op)

{
    if (op == '+')
       std::cout << (valueone + valuetwo);
    
    else if (op == '-')
       std::cout << (valueone - valuetwo);

    else if (op == '*')
       std::cout << (valueone * valuetwo);

    else if (op == '/')
       std::cout << (valueone / valuetwo);

    else 
        std:: cout << "invlaid operator selected";

    

}

int main()
{
    
    double valueone = chosenValue();
    double valuetwo = chosenValue();
    char op {chosenOperator()};

    std:: cout<< valueone << op << valuetwo << "is: ";
    calculateMath(valueone, valuetwo, op);

    


}