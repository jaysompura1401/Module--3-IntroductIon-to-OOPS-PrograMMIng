//Functions and Scope
/*Q13-2. Factorial Calculation Using Recursion  
o Write a C++ program that calculates the factorial of a number using recursion.*/
#include <iostream>
using namespace std;

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1)  // Base case
        return 1;
    else
        return n * factorial(n - 1);  // Recursive call
}

int main() {
    int number;

    // Input from user
    cout << "Enter a positive number to find its factorial: ";
    cin >> number;

    // Factorial is not defined for negative numbers
    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        int result = factorial(number);
        cout << "Factorial of " << number << " is: " << result << endl;
    }

    return 0;
}
