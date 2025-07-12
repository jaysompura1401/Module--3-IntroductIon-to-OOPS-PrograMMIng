// Control Flow Statements 
/*Q11-4. Nested Control Structures  
o Write a program that prints a right-angled triangle using stars (*) with a nested loop*/
#include <iostream>
using namespace std;

int main() {
    int rows;

    // Ask the user for number of rows
    cout << "Enter the number of rows for the triangle: ";
    cin >> rows;

    // Outer loop for rows
    for (int i = 1; i <= rows; i++) {
        // Inner loop for printing stars
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        // Move to the next line
        cout << endl;
    }

    return 0;
}
