//Control Flow Statements
/*Q10-3. Multiplication Table 
 o Write a C++ program to display the multiplication table of a given number using a for loop. 
 */
#include <iostream>
using namespace std;

int main() {
    int number;

    // Ask the user to enter a number
    cout << "Enter a number to display its multiplication table: ";
    cin >> number;

    // Display the multiplication table using a for loop
    cout << "Multiplication table of " << number << ":\n";
    for (int i = 1; i <= 10; i++) {
        cout << number << " x " << i << " = " << number * i << endl;
    }

    return 0;
}
