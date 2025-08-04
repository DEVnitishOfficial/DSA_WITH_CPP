#include <iostream>

int main() {
    // 1. Declare variables to store the two numbers
    int number1;
    int number2;

    // 2. Prompt the user for the first number
    std::cout << "Enter the first number: ";
    
    // 3. Take the first number as input and store it in number1
    std::cin >> number1;

    // 4. Prompt the user for the second number
    std::cout << "Enter the second number: ";
    
    // 5. Take the second number as input and store it in number2
    std::cin >> number2;

    // 6. Calculate the sum of the two numbers
    int sum = number1 + number2;

    // 7. Display the result to the user
    std::cout << "The sum of " << number1 << " and " << number2 << " is: " << sum << std::endl;

    return 0;
}






























