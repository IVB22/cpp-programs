// Program 5.1: Constructor and Destructor Demo
// Author: Roll No 24B11AI136
// Demonstrates the use of constructors and destructors in a class

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    
public:
    // Parameterized Constructor
    Student(string n, int a) {
        name = n;
        age = a;
        cout << "Constructor called for " << name << endl;
    }
    
    // Destructor
    ~Student() {
        cout << "Destructor called for " << name << endl;
    }
    
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    string n;
    int a;
    
    cout << "Enter student name: ";
    getline(cin, n);
    cout << "Enter student age: ";
    cin >> a;
    
    Student s1(n, a);
    s1.display();
    
    cout << "End of program." << endl;
    return 0;
}

/*
Sample Output:
Enter student name: SATHVIK
Enter student age: 20
Constructor called for SATHVIK
Name: SATHVIK, Age: 20
End of program.
Destructor called for SATHVIK
*/