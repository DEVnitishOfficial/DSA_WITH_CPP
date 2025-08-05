#include <iostream>

int main() {
    // 1. Declare variables
    int n;
    double sum = 0.0;
    
    // 2. Ask the user for the total number of values (n)
    std::cout << "Enter the total number of values you want to average: ";
    std::cin >> n;

    // Handle the case where the user enters 0 or a negative number
    if (n <= 0) {
        std::cout << "The number of values must be a positive integer." << std::endl;
        return 1; // Return a non-zero value to indicate an error
    }

    // 3. Use a for loop to take 'n' numbers as input
    std::cout << "Please enter " << n << " numbers:" << std::endl;
    for (int i = 0; i < n; ++i) {
        double number;
        std::cout << "Enter number " << i + 1 << ": ";
        std::cin >> number;
        
        // 4. Add each number to the sum
        sum += number; // This is a shorthand for: sum = sum + number;
    }

    // 5. Calculate the average
    double average = sum / n;

    // 6. Display the result
    std::cout << "The average of the " << n << " numbers is: " << average << std::endl;

    return 0;
}



