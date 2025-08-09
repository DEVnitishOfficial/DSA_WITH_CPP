#include <iostream>
#include <vector> // Required for using std::vector

// A function to perform linear search
// It takes a vector of integers and a target value to search for
// It returns the index of the target if found, otherwise returns -1
int linearSearch(const std::vector<int>& arr, int target) {
    // Get the number of elements in the vector
    int n = arr.size();

    // Loop through each element of the vector from the beginning
    for (int i = 0; i < n; ++i) {
        // Check if the current element is equal to the target
        if (arr[i] == target) {
            // If a match is found, return the current index
            return i;
        }
    }

    // If the loop finishes without finding a match,
    // it means the target is not in the vector.
    // We return -1 to indicate this.
    return -1;
}

int main() {
    // Create a sample vector of integers
    std::vector<int> numbers = {5, 8, 2, 10, 3, 7};
    int target;

    // Prompt the user for the number to search
    std::cout << "The list of numbers is: {5, 8, 2, 10, 3, 7}" << std::endl;
    std::cout << "Enter the number you want to search for: ";
    std::cin >> target;

    // Call the linearSearch function
    int result_index = linearSearch(numbers, target);

    // Check the result and display the appropriate message
    if (result_index != -1) {
        std::cout << "Element " << target << " found at index " << result_index << "." << std::endl;
    } else {
        std::cout << "Element " << target << " was not found in the list." << std::endl;
    }

    return 0;
}