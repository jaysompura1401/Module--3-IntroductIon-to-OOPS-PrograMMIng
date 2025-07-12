// Control Flow Statements
/* Q9-2Number Guessing Game 
 o Write a C++ program that asks the user to guess a number between 1 and 100. The program should 
provide hints if the guess is too high or too low. Use loops to allow the user multiple attempts. */
#include <iostream>      
using namespace std;     

int main() {
    int secretNumber = 14;  // Yeh number user ko guess karna hai
    int guess;              // User ka guess yahan store hoga

    cout << "Guess the number (1 to 100): ";
    cin >> guess;           // User se pehla guess le rahe hain

    // Jab tak user ka guess sahi nahi hota tab tak loop chalega
    while (guess != secretNumber) {

        // Agar guess chhota hai actual number se
        if (guess < secretNumber) {
            cout << "Too low! Try again: ";
        } 
        // Agar guess bada hai actual number se
        else {
            cout << "Too high! Try again: ";
        }

        cin >> guess;   // Dubara guess lene ke liye input
    }

    // Jab guess sahi ho jaata hai
    cout << "Congratulations! You guessed it right!";
    
    return 0;   
}

