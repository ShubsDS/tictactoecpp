#include <iostream>   // For std::cout and std::cin
#include <string>     // For std::string
#include <vector>     // For std::vector

// Constants are preferred over macros for typed safety
const double PI = 3.14159;

// Function declaration (prototype)
void printGreeting();
int add(int a, int b);
void displayArray(const std::vector<int>& arr);

int main() {
    // Print a greeting message
    printGreeting();

    // === Variable Definitions ===
    int integerVar = 10;
    double doubleVar = 3.14;
    char charVar = 'A';
    bool boolVar = true;
    std::string stringVar = "Hello, C++";

    // === Output Values ===
    std::cout << "Integer: " << integerVar << std::endl;
    std::cout << "Double: " << doubleVar << std::endl;
    std::cout << "Char: " << charVar << std::endl;
    std::cout << "Boolean: " << std::boolalpha << boolVar << std::endl;
    std::cout << "String: " << stringVar << std::endl;

    // === Array Example using std::vector ===
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    std::cout << "Array elements: ";
    displayArray(numbers);

    // === Function Call ===
    int result = add(5, 7);
    std::cout << "Sum of 5 and 7 is: " << result << std::endl;

    return 0;  // Exit success
}

// === Function Definitions ===

// Prints a simple greeting
void printGreeting() {
    std::cout << "Welcome to the C++ basics demo!" << std::endl;
}

// Adds two integers and returns the result
int add(int a, int b) {
    return a + b;
}

// Displays elements of an array
void displayArray(const std::vector<int>& arr) {
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

