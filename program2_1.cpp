// Program 2.1: Scope Resolution Operator and Namespaces
// Author: Roll No 24B11AI450
// Demonstrates global/local variables, scope resolution operator, and namespaces

#include <iostream>
#include <cstdlib>
using namespace std;

int b = 5;  // Global variable

namespace N1 {
    int a = 8;
}

namespace N2 {
    int a = 1;
}

void fun() {
    int a = 1;
    cout << "Fun A: " << a << " " << ::b << endl;
}

int main() {
    system("color F0");
    cout << "Roll No: 24B11AI450" << endl;
    
    {
        int a = 1;
        cout << "Inner A: " << a << endl;
        cout << "Outer B: " << b << endl;
        fun();
        cout << "Name space 1: " << N1::a << endl;
        cout << "Name space 2: " << N2::a << endl;
    }
    
    return 0;
}

/*
Sample Output:
Roll No: 24B11AI450
Inner A: 1
Outer B: 5
Fun A: 1 5
Name space 1: 8
Name space 2: 1
*/