// Variables, Data Types, and Operators
/*Q5 - 1.Variables and Constants  
o Write a C++ program that demonstrates the use of variables and constants. Create variables of 
different data types and perform operations on them. */

#include <iostream>
using namespace std;
int main() {
    // Declare variables of different data types
    int integerVar = 10;          // Integer variable
    float floatVar = 5.5f;       // Float variable
    double doubleVar = 3.14159;  // Double variable
    char charVar = 'A';          // Character variable
    const int constantVar = 100; // Constant variable

    // Perform operations on the variables
    int sum = integerVar + constantVar;
    float product = floatVar * 2.0f;
    double division = doubleVar / 2.0;

    // Display the results
    cout << "Integer Variable: " << integerVar << endl;
    cout << "Float Variable: " << floatVar << endl;
    cout << "Double Variable: " << doubleVar << endl;
    cout << "Character Variable: " << charVar << endl;
    cout << "Constant Variable: " << constantVar << endl;
    
    cout << "Sum of integer and constant: " << sum << endl;
    cout << "Product of float variable: " << product << endl;
    cout << "Division of double variable: " << division << endl;

    return 0; // Return 0 to indicate successful execution
}