// Functions and Scope
/*Q12-1 Simple Calculator Using Functions    
       o Write a C++ program that defines functions for basic arithmetic operations (add, subtract, multiply, 
divide). The main function should call these based on user input.*/
#include <iostream>
using namespace std;

// Function for Addition
float add(float a, float b) {
    return a + b;
}

// Function for Subtraction
float subtract(float a, float b) {
    return a - b;
}

// Function for Multiplication
float multiply(float a, float b) {
    return a * b;
}

// Function for Division
float divide(float a, float b) {
    if (b == 0) {
        cout << "Error: Cannot divide by zero!" << endl;
        return 0;
    }
    return a / b;
}

int main() {
    float num1, num2;
    char op;

    // Input from user
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    // Switch case to call appropriate function
    switch(op) {
        case '+':
            cout << "Result = " << add(num1, num2) << endl;
            break;
        case '-':
            cout << "Result = " << subtract(num1, num2) << endl;
            break;
        case '*':
            cout << "Result = " << multiply(num1, num2) << endl;
            break;
        case '/':
            cout << "Result = " << divide(num1, num2) << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
    }

    return 0;
}
