#include <iostream>

// Function prototypes (declarations) are needed before the functions are called
void calculateAge(int age);
void IdentifyChar(char ch);

int main() {
    // Declare a variable to store the user's age and character
    int age;
    char ch;

    // Prompt the user to enter their age
    std::cout << "Please enter your age: ";
    std::cin >> age;

    // Call the function to calculate age
    calculateAge(age);

    // Prompt the user to enter a character
    std::cout << "Please enter your character: ";
    std::cin >> ch;

    // Call the function to identify the character
    IdentifyChar(ch);

    return 0;
}

// Function definition for calculateAge
void calculateAge(int age) {
    // Check if the user is eligible to vote
    if (age >= 18) {
        std::cout << "You are eligible to vote." << std::endl;
    } else {
        std::cout << "You are not eligible to vote." << std::endl;
    }
}

// Function definition for IdentifyChar
void IdentifyChar(char ch) {
    // Correctly check if the character is in a given range
    // We use single quotes '' for single characters and '&&' for logical AND
    if (ch >= 'a' && ch <= 'z') {
        std::cout << "Given character is a lowercase letter." << std::endl;
    } else if (ch >= 'A' && ch <= 'Z') {
        std::cout << "Given character is an uppercase letter." << std::endl;
    } else if (ch >= '0' && ch <= '9') {
        std::cout << "Given character is a digit." << std::endl;
    } else {
        // Add an else block to handle any other characters (symbols, etc.)
        std::cout << "Given character is a special character." << std::endl;
    }
}