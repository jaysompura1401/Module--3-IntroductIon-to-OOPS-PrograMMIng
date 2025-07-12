//.Introduction to Object-Oriented Programming
/* Q20-3Inheritance Example  
     o Write a program that implements inheritance using a base class Person and derived classes Student and 
Teacher. Demonstrate reusability through inheritance.*/
#include <iostream>
using namespace std;

// Base class
class Person {
public:
    string name;
    int age;

    void getDetails() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void showDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class: Student
class Student : public Person {
public:
    int rollNo;

    void getStudentDetails() {
        getDetails(); // Reuse base class function
        cout << "Enter roll number: ";
        cin >> rollNo;
    }

    void showStudentDetails() {
        showDetails(); // Reuse base class function
        cout << "Roll No: " << rollNo << endl;
    }
};

// Derived class: Teacher
class Teacher : public Person {
public:
    string subject;

    void getTeacherDetails() {
        getDetails(); // Reuse base class function
        cout << "Enter subject: ";
        cin >> subject;
    }

    void showTeacherDetails() {
        showDetails(); // Reuse base class function
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    cout << "Student Details:\n";
    Student s;
    s.getStudentDetails();
    s.showStudentDetails();

    cout << "\nTeacher Details:\n";
    Teacher t;
    t.getTeacherDetails();
    t.showTeacherDetails();

    return 0;
}
