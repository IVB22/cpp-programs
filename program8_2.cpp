// Program 8.2: Virtual Base Classes
// Author: Roll No 24B11AI136
// Demonstrates virtual base classes to resolve diamond problem in multiple inheritance

#include <iostream>
using namespace std;

class A {
public:
    A() {
        cout << "A constructor" << endl;
    }
    
    ~A() {
        cout << "A destructor" << endl;
    }
    
    void show() {
        cout << "Hello from class A" << endl;
    }
};

class B : public virtual A {  // Virtual inheritance
public:
    B() {
        cout << "B constructor" << endl;
    }
    
    ~B() {
        cout << "B destructor" << endl;
    }
};

class C : public virtual A {  // Virtual inheritance
public:
    C() {
        cout << "C constructor" << endl;
    }
    
    ~C() {
        cout << "C destructor" << endl;
    }
};

class D : public B, public C {
public:
    D() {
        cout << "D constructor" << endl;
    }
    
    ~D() {
        cout << "D destructor" << endl;
    }
};

int main() {
    cout << "Roll No: 24B11AI136" << endl;
    cout << "Creating object of class D:" << endl;
    
    D obj;
    
    cout << "\nCalling show() method:" << endl;
    obj.show();  // No ambiguity due to virtual inheritance
    
    cout << "\nEnd of program:" << endl;
    return 0;
}

/*
Sample Output:
Roll No: 24B11AI136
Creating object of class D:
A constructor
B constructor
C constructor
D constructor

Calling show() method:
Hello from class A

End of program:
D destructor
C destructor
B destructor
A destructor

Note: Virtual inheritance ensures only one copy of base class A exists,
      preventing the diamond problem and ambiguity.
*/