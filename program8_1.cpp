// Program 8.1: Pointers to Objects
// Author: Roll No 24B11AI136
// Demonstrates how to use pointers to access and manipulate class objects

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    
public:
    void setData(string n, int a) {
        name = n;
        age = a;
    }
    
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    cout << "Roll No: 24B11AI136" << endl;
    
    // Creating object normally
    Student s1;
    s1.setData("Sathvik", 20);
    cout << "Direct object access:" << endl;
    s1.display();
    cout << endl;
    
    // Using pointer to existing object
    Student* ptr = &s1;
    cout << "Access via pointer to existing object:" << endl;
    ptr->display();
    cout << endl;
    
    // Dynamic memory allocation
    Student* ptr2 = new Student;
    ptr2->setData("Gowtham", 21);
    cout << "Access via dynamically allocated object:" << endl;
    ptr2->display();
    cout << endl;
    
    // Clean up dynamic memory
    delete ptr2;
    
    cout << "Program completed successfully!" << endl;
    return 0;
}

/*
Sample Output:
Roll No: 24B11AI136
Direct object access:
Name: Sathvik
Age: 20

Access via pointer to existing object:
Name: Sathvik
Age: 20

Access via dynamically allocated object:
Name: Gowtham
Age: 21

Program completed successfully!
*/