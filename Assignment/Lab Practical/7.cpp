// Variables, Data Types, and Operators
/*Q7 - 3.Operator Demonstration 
 o Write a C++ program that demonstrates arithmetic, relational, logical, and bitwise operators. 
Perform operations using each type of operator and display the results.*/

#include <iostream>     
using namespace std;
int main() {
    // Arithmetic Operators
    int a = 10, b = 5;
    cout << "Arithmetic Operators:" << endl;
    cout << "a + b = " << (a + b) << endl; // Addition
    cout << "a - b = " << (a - b) << endl; // Subtraction
    cout << "a * b = " << (a * b) << endl; // Multiplication
    cout << "a / b = " << (a / b) << endl; // Division
    cout << "a % b = " << (a % b) << endl; // Modulus

    // Relational Operators
    cout << "\nRelational Operators:" << endl;
    cout << "a == b: " << (a == b) << endl; // Equal to
    cout << "a != b: " << (a != b) << endl; // Not equal to
    cout << "a > b: " << (a > b) << endl;   // Greater than
    cout << "a < b: " << (a < b) << endl;   // Less than
    cout << "a >= b: " << (a >= b) << endl; // Greater than or equal to
    cout << "a <= b: " << (a <= b) << endl; // Less than or equal to

    // Logical Operators
    bool x = true, y = false;
    cout << "\nLogical Operators:" << endl;
    cout << "(x && y): " << (x && y) << endl; // Logical AND
    cout << "(x || y): " << (x || y) << endl; // Logical OR
    cout << "(!x): " << (!x) << endl;         // Logical NOT


    return 0; 
}
