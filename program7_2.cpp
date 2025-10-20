// Program 7.2: Constructor and Destructor Order in Inheritance
// Author: Roll No 24B11AI450

#include <iostream>
using namespace std;

class parent {
public:
    parent() {
        cout << "parent class constructor" << endl;
    }

    ~parent() {
        cout << "parent class destructor" << endl;
    }
};

class child : public parent {
public:
    child() {
        cout << "child class constructor" << endl;
    }

    ~child() {
        cout << "child class destructor" << endl;
    }
};

int main() {
    cout << "Roll No:24B11AI450" << endl;
    child c;
    return 0;
}