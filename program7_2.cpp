// Program 7.2: Constructor and Destructor Order in Inheritance
// Author: Roll No 24B11AI136
// Demonstrates the order of constructor and destructor execution in inheritance

#include <iostream>
using namespace std;

class Parent {
public:
    Parent() {
        cout << "Parent class constructor" << endl;
    }
    
    ~Parent() {
        cout << "Parent class destructor" << endl;
    }
};

class Child : public Parent {
public:
    Child() {
        cout << "Child class constructor" << endl;
    }
    
    ~Child() {
        cout << "Child class destructor" << endl;
    }
};

int main() {
    cout << "Roll No: 24B11AI136" << endl;
    cout << "Creating Child object..." << endl;
    
    Child c;  // Object creation
    
    cout << "End of main function" << endl;
    return 0;  // Object destruction occurs here
}

/*
Sample Output:
Roll No: 24B11AI136
Creating Child object...
Parent class constructor
Child class constructor
End of main function
Child class destructor
Parent class destructor

Note: Constructors are called from base to derived.
      Destructors are called from derived to base.
*/