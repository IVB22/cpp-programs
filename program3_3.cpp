// Program 3.3: This Pointer Demonstration
// Author: Roll No 24B11AI450
// Demonstrates use of 'this' pointer to refer to current object

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    float marks;
    
public:
    Student() {
        name = "";
        rollNumber = 0;
        marks = 0.0;
    }
    
    void setDetails(string name, int rollNumber, float marks) {
        this->name = name;
        this->rollNumber = rollNumber;
        this->marks = marks;
    }
    
    Student& updateName(string name) {
        this->name = name;
        return *this;
    }
    
    Student& updateMarks(float marks) {
        this->marks = marks;
        return *this;
    }
    
    void display() {
        cout << "\n--- Student Record ---\n";
        cout << "Name: " << name << endl;
        cout << "Roll No.: " << rollNumber << endl;
        cout << "Marks: " << marks << "/100\n";
    }
};

int main() {
    Student s1;
    string n;
    int r;
    float m;
    
    cout << "Enter Student Name: ";
    getline(cin, n);
    cout << "Enter Roll Number: ";
    cin >> r;
    cout << "Enter Marks (out of 100): ";
    cin >> m;
    
    s1.setDetails(n, r, m);
    s1.display();
    
    string updatedName;
    float updatedMarks;
    cout << "\nUpdate Name: ";
    cin.ignore();
    getline(cin, updatedName);
    cout << "Update Marks: ";
    cin >> updatedMarks;
    
    s1.updateName(updatedName).updateMarks(updatedMarks);
    s1.display();
    
    return 0;
}

/*
Sample Output:
Enter Student Name: BHARATH
Enter Roll Number: 450
Enter Marks (out of 100): 90

--- Student Record ---
Name: BHARATH
Roll No.: 450
Marks: 90/100

Update Name: RAMA
Update Marks: 91

--- Student Record ---
Name: RAMA
Roll No.: 450
Marks: 91/100
*/