//Functions and Scope
/*Q14-3Variable Scope  
o Write a program that demonstrates the difference between local and global variables in C++. Use 
functions to show scope.*/

#include <iostream>
using namespace std;

// Global variable
int globalVar = 100;

void showLocalScope() {
    // Local variable (only accessible inside this function)
    int localVar = 50;
    cout << "Inside showLocalScope() function:" << endl;
    cout << "Local variable = " << localVar << endl;
    cout << "Global variable = " << globalVar << endl;
}

void modifyGlobal() {
    // Modify global variable
    globalVar = 200;
    cout << "Inside modifyGlobal() function:" << endl;
    cout << "Global variable changed to = " << globalVar << endl;
}

int main() {
    // Local variable in main()
    int localVar = 10;

    cout << "Inside main() function:" << endl;
    cout << "Local variable = " << localVar << endl;
    cout << "Global variable = " << globalVar << endl;

    // Call function to show local scope
    showLocalScope();

    // Modify global variable
    modifyGlobal();

    // Show globalVar after modification
    cout << "Back in main(), global variable = " << globalVar << endl;

    return 0;
}
