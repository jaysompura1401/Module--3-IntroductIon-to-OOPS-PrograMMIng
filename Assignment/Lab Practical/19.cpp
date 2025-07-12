//.Introduction to Object-Oriented Programming
/*Q19-2 Class for Bank Account  
             o Create a class BankAccount with data members like balance and member functions like deposit and 
withdraw. Implement encapsulation by keeping the data members private.*/
#include <iostream>
using namespace std;

// Define the BankAccount class
class BankAccount {
private:
    float balance;  // Private data member

public:
    // Constructor to initialize balance
    BankAccount() {
        balance = 0;
    }

    // Function to deposit amount
    void deposit(float amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: Rs. " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Function to withdraw amount
    void withdraw(float amount) {
        if (amount <= balance && amount > 0) {
            balance -= amount;
            cout << "Withdrawn: Rs. " << amount << endl;
        } else {
            cout << "Insufficient balance or invalid amount!" << endl;
        }
    }

    // Function to check current balance
    void displayBalance() {
        cout << "Current Balance: Rs. " << balance << endl;
    }
};

int main() {
    BankAccount myAccount;  // Create object of BankAccount

    myAccount.deposit(1000);     // Deposit Rs.1000
    myAccount.displayBalance();  // Show balance

    myAccount.withdraw(300);     // Withdraw Rs.300
    myAccount.displayBalance();  // Show balance

    myAccount.withdraw(800);     // Try to withdraw more than balance

    return 0;
}
