// Variables, Data Types, and Operators in c++
/*Q6-2.Type Conversion  
o Write a C++ program that performs both implicit and explicit type conversions and prints the 
results.*/

#include <iostream>
using namespace std;

int main() {
    int a = 5;
    float b = 2.5;

    // Implicit conversion: int + float => float
    float result1 = a + b;
    cout << "Implicit conversion (int + float): " << result1 << endl;

    // Explicit conversion: float to int
    int result2 = (int)b;
    cout << "Explicit conversion (float to int): " << result2 << endl;

    return 0;
}


        

                