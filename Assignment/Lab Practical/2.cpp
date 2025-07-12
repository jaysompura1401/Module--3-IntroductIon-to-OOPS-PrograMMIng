//introkduction to c++
/*Q2. Basic Input/Output 
 o Write a C++ program that accepts user input for their name and age and then displays a 
personalized greeting. */
#include <iostream>
using namespace std;
int main() {
    string name;
    int age;

    // Accept user input
    cout << "Enter your name: ";
    getline(cin, name); // Using getline to allow spaces in the name
    cout << "Enter your age: ";
    cin >> age;

    // Display personalized greeting
    cout << "Hello, " << name << "! You are " << age << " years old." << endl;

    return 0; // Return 0 to indicate successful execution
}