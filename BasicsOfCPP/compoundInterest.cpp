#include <iostream>
#include <cmath> // Include the cmath library for the pow() function

int main() {
    // 1. Declare variables
    double principal;
    double rate;
    double time;
    int compounding_frequency;

    // 2. Take user input for all the variables
    std::cout << "Enter the principal amount: ";
    std::cin >> principal;

    std::cout << "Enter the annual interest rate (in percent, e.g., 5 for 5%): ";
    std::cin >> rate;

    std::cout << "Enter the time period in years: ";
    std::cin >> time;

    std::cout << "Enter the number of times interest is compounded per year "
                 "(e.g., 1 for annually, 4 for quarterly, 12 for monthly): ";
    std::cin >> compounding_frequency;

    // 3. Convert the rate from a percentage to a decimal
    rate = rate / 100.0;

    // 4. Calculate the Final Amount using the compound interest formula
    // We use the pow() function for the exponent part
    double amount = principal * pow((1 + rate / compounding_frequency), (compounding_frequency * time));

    // 5. Calculate the Compound Interest
    double compound_interest = amount - principal;

    // 6. Display the results
    std::cout << "\n--- Compound Interest Calculation ---" << std::endl;
    std::cout << "Principal Amount: " << principal << std::endl;
    std::cout << "Annual Interest Rate: " << rate * 100 << "%" << std::endl;
    std::cout << "Time Period: " << time << " years" << std::endl;
    std::cout << "Compounding Frequency: " << compounding_frequency << " times/year" << std::endl;
    std::cout << "---------------------------------------" << std::endl;
    std::cout << "Compound Interest: " << compound_interest << std::endl;
    std::cout << "Total Amount: " << amount << std::endl;

    return 0;
}