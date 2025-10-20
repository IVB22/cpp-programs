// Program 8.2: Virtual Base Classes
// Author: Roll No 24B11AI450

#include <iostream>
using namespace std;

class A {
public:
    A() {
        cout << "A is constructor" << endl;
    }

    ~A() {
        cout << "A is destructor" << endl;
    }

    void show() {
        cout << "Hello from A" << endl;
    }
};

class B : public virtual A {
public:
    B() {
        cout << "B is constructor" << endl;
    }

    ~B() {
        cout << "B is destructor" << endl;
    }
};

class C : public virtual A {
public:
    C() {
        cout << "C is constructor" << endl;
    }

    ~C() {
        cout << "C is destructor" << endl;
    }
};

class D : public B, public C {
public:
    D() {
        cout << "D is constructor" << endl;
    }

    ~D() {
        cout << "D is destructor" << endl;
    }
};

int main() {
    cout << "Roll No:24B11AI450" << endl;
    D obj;
    obj.show();
    return 0;
}