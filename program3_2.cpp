// Program 3.2: Public vs Private Access Specifiers
// Author: Roll No 24B11AI450
// Demonstrates difference between public and private access specifiers

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string studentName;
    int rollNumber;
    float marks;
    
public:
    string college;
    
    void setDetails() {
        cout << "Enter student name: ";
        getline(cin, studentName);
        cout << "Enter roll number: ";
        cin >> rollNumber;
        cout << "Enter marks (out of 100): ";
        cin >> marks;
    }
    
    void displayDetails() {
        cout << "\n--- Student Details ---\n";
        cout << "Name: " << studentName << endl;
        cout << "Roll No: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "College: " << college << endl;
    }
};

int main() {
    Student s1;
    
    cout << "Enter college name: ";
    getline(cin, s1.college);
    
    s1.setDetails();
    s1.displayDetails();
    
    s1.college = "Aditya University";
    cout << "\nUpdated College Name: " << s1.college << endl;
    
    return 0;
}

/*
Sample Output:
Enter college name: ADITYA
Enter student name: BHARATH
Enter roll number: 450
Enter marks (out of 100): 85

--- Student Details ---
Name: BHARATH
Roll No: 450
Marks: 85
College: ADITYA

Updated College Name: Aditya University
*/