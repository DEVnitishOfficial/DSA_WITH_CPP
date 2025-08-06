#include <iostream>

int main() {
    // 1. Declare variables for Principal, Rate, and Time
    double principal;
    double rate;
    double time;

    // 2. Prompt the user for the Principal amount and take input
    std::cout << "Enter the principal amount: ";
    std::cin >> principal;

    // 3. Prompt the user for the annual interest rate and take input
    std::cout << "Enter the annual interest rate (in percent, e.g., 5 for 5%): ";
    std::cin >> rate;

    // 4. Prompt the user for the time period in years and take input
    std::cout << "Enter the time period in years: ";
    std::cin >> time;

    // 5. Calculate the Simple Interest
    // The rate is typically given as a percentage, so we divide by 100
    double interest = (principal * rate * time) / 100.0;

    // 6. Calculate the total amount (Principal + Interest)
    double total_amount = principal + interest;

    // 7. Display the results
    std::cout << "\n--- Simple Interest Calculation ---" << std::endl;
    std::cout << "Principal Amount: " << principal << std::endl;
    std::cout << "Annual Interest Rate: " << rate << "%" << std::endl;
    std::cout << "Time Period: " << time << " years" << std::endl;
    std::cout << "Simple Interest: " << interest << std::endl;
    std::cout << "Total Amount after " << time << " years: " << total_amount << std::endl;

    return 0;
}