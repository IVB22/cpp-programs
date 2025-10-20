// Program 2.2: Inline Functions
// Author: Roll No 24B11AI450
// Demonstrates the use of inline functions to reduce function call overhead

#include <iostream>
#include <cstdlib>
using namespace std;

inline int square(int x) {
    return x * x;
}

int main() {
    system("color F0");
    cout << "Roll No: 24B11AI450" << endl;
    
    int num = 24;
    cout << "Square of " << num << " is " << square(num) << endl;
    
    return 0;
}

/*
Sample Output:
Roll No: 24B11AI450
Square of 24 is 576
*/