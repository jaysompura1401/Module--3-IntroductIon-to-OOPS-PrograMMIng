//.Introduction to Object-Oriented Programming
/*Q18-1. Class for a Simple Calculator  
o Write a C++ program that defines a class Calculator with functions for addition, subtraction, 
multiplication, and division. Create objects to use these functions. */
#include <iostream>
using namespace std;

// Define Calculator class
class Calculator {
public:
    // Function to add two numbers
    float add(float a, float b) {
        return a + b;
    }

    // Function to subtract two numbers
    float subtract(float a, float b) {
        return a - b;
    }

    // Function to multiply two numbers
    float multiply(float a, float b) {
        return a * b;
    }

    // Function to divide two numbers
    float divide(float a, float b) {
        if (b == 0) {
            cout << "Error: Cannot divide by zero!" << endl;
            return 0;
        }
        return a / b;
    }
};

int main() {
    Calculator calc;  // Create object of Calculator class
    float num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    // Use object to call class functions
    switch(op) {
        case '+':
            cout << "Result = " << calc.add(num1, num2) << endl;
            break;
        case '-':
            cout << "Result = " << calc.subtract(num1, num2) << endl;
            break;
        case '*':
            cout << "Result = " << calc.multiply(num1, num2) << endl;
            break;
        case '/':
            cout << "Result = " << calc.divide(num1, num2) << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
    }

    return 0;
}
