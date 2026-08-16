#include <iostream>              //summary of chapter 1 

int main ()
{

    std:: cout << "=== Monthly Expenses Calculator ===\n\n";

    int monthlyIncome {};
    int housingCost {};
    int foodCost {};
    int transportationCost {};
    int entertainmentCost {};
    int otherExpenses {};
    
    std::cout << "Enter your monthly income: ";
    std::cin >> monthlyIncome;

    std::cout << "Enter your housing cost: ";
    std::cin >> housingCost;

    std::cout << "Enter your food cost: ";
    std::cin >> foodCost;

    std::cout << "Enter your transportation cost: ";
    std::cin >> transportationCost;

    std::cout << "Enter your entertainment cost: ";
    std::cin >> entertainmentCost;

    std::cout << "Enter your other expenses: ";
    std::cin >> otherExpenses;

    std:: cout << "===== Monthly Summary =====\n";

    std:: cout << "Income: $" << monthlyIncome << "\n";
    std:: cout << "Total Expenses: $" << (housingCost + foodCost + transportationCost + entertainmentCost + otherExpenses) << "\n"; 
    std:: cout << "Remaining Balance: $" << (monthlyIncome - (housingCost + foodCost + transportationCost + entertainmentCost + otherExpenses)) << "\n";        
    std:: cout << "Percent of Income spent: " << ((housingCost + foodCost + transportationCost + entertainmentCost + otherExpenses) / static_cast<double>(monthlyIncome)) * 100 << "%\n";
}