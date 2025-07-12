//Arrays and Strings
/* Q16-2Matrix Addition 
  o Write a C++ program to perform matrix addition on two 2x2 matrices.*/
#include <iostream>
using namespace std;

int main() {
    int matrix1[2][2], matrix2[2][2], result[2][2];

    // Input for first matrix
    cout << "Enter elements for the first 2x2 matrix:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix1[i][j];
        }
    }

    // Input for second matrix
    cout << "\nEnter elements for the second 2x2 matrix:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix2[i][j];
        }
    }

    // Perform matrix addition
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Display result
    cout << "\nResultant Matrix after Addition:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << result[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
