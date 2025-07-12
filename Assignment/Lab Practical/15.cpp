//5.Arrays and Strings 
/*. Array Sum and Average 
  o Write a C++ program that accepts an array of integers, calculates the sum and average, and displays the 
results.*/
#include <iostream>
using namespace std;

int main() {
    int n;

    // Ask the user for number of elements
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n]; // Array declaration
    int sum = 0;
    float average;

    // Input elements in array
    cout << "Enter " << n << " integer values:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
        sum += arr[i]; // Add to sum
    }

    // Calculate average
    average = (float)sum / n;

    // Display results
    cout << "\nSum of array elements = " << sum << endl;
    cout << "Average of array elements = " << average << endl;

    return 0;
}
