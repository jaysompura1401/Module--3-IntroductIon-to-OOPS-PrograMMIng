// introoduction to c++
/*Q3.POP vs. OOP Comparison Program  
o Write two small programs: one using Procedural Programming (POP) to calculate the area of a 
rectangle, and another using Object-Oriented Programming (OOP) with a class and object for the 
same task.*/


#include <iostream>
using namespace std;


// Procedural Programming (POP) version
 int main() {
    float length, width, area;

    // Accept user input for length and width
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    // Calculate area
    area = length * width;

    // Display area
    cout << "Area of the rectangle (POP): " << area << endl;

    return 0; // Return 0 to indicate successful execution
}


// Object-Oriented Programming (OOP) version
class Rectangle {
private:
    float length;
    float width;
public:
    // Constructor to initialize length and width
    Rectangle(float l, float w) : length(l), width(w) {}

    // Method to calculate area
    float calculateArea() {
        return length * width;
    }
};
int main() {
    float length, width;

    // Accept user input for length and width
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    // Create a Rectangle object
    Rectangle rect(length, width);

    // Display area using OOP
    cout << "Area of the rectangle (OOP): " << rect.calculateArea() << endl;

    return 0; // Return 0 to indicate successful execution
}
