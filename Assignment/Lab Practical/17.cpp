//Arrays and Strings
/* Q17-3 String Palindrome Check  
o Write a C++ program to check if a given string is a palindrome (reads the same forwards and backwards).*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int flag = 1;

    cout << "Enter a string: ";
    cin >> str;

    int len = str.length();

    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 0;
            break;
        }
    }

    if (flag == 1) {
        cout << str << " is a palindrome." << endl;
    } else {
        cout << str << " is not a palindrome." << endl;
    }

    return 0;
}

