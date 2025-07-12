//Control Flow Statements

/*Q8-1.Grade Calculator
 o Write a C++ program that demonstrates arithmetic, relational, logical, and bitwise operators. 
Perform operations using each type of operator and display the results. */

#include <iostream>
using namespace std;
int main() {
    int marks;
    cout << "Enter your marks (0-100): ";
    cin >> marks;

    // Grade calculation using relational operators
    if (marks >= 90) {
        cout << "Grade: A" << endl;
    } else if (marks >= 80) {
        cout << "Grade: B" << endl;
    } else if (marks >= 70) {
        cout << "Grade: C" << endl;
    } else if (marks >= 60) {
        cout << "Grade: D" << endl;
    } else if (marks >= 50) {
        cout << "Grade: E" << endl;
    } else {
        cout << "Grade: F" << endl;
    }

    // Bitwise operation example
    int a = 5; // 0101 in binary
    int b = 3; // 0011 in binary
    cout << "Bitwise AND of a and b: " << (a & b) << endl; // Should output 1 (0001 in binary)

    return 0;
}