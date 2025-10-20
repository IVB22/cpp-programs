// Program 5.2: Constructor Overloading Demo
// Author: Roll No 24B11AI136
// Demonstrates constructor overloading with different parameter lists

#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;
    
public:
    // Default Constructor
    Rectangle() {
        length = 0;
        width = 0;
        cout << "Default constructor called!" << endl;
    }
    
    // Constructor for Square (one parameter)
    Rectangle(int side) {
        length = side;
        width = side;
        cout << "Square constructor called!" << endl;
    }
    
    // Constructor for Rectangle (two parameters)
    Rectangle(int l, int w) {
        length = l;
        width = w;
        cout << "Rectangle constructor called!" << endl;
    }
    
    void display() {
        cout << "Length: " << length << ", Width: " << width << endl;
    }
};

int main() {
    int choice;
    
    cout << "Choose how to create the rectangle:" << endl;
    cout << "1. Default (0x0)" << endl;
    cout << "2. Square (one side)" << endl;
    cout << "3. Rectangle (length & width)" << endl;
    cout << "Enter choice: ";
    cin >> choice;
    
    if (choice == 1) {
        Rectangle r1;
        r1.display();
    }
    else if (choice == 2) {
        int side;
        cout << "Enter side length: ";
        cin >> side;
        Rectangle r2(side);
        r2.display();
    }
    else if (choice == 3) {
        int l, w;
        cout << "Enter length: ";
        cin >> l;
        cout << "Enter width: ";
        cin >> w;
        Rectangle r3(l, w);
        r3.display();
    }
    else {
        cout << "Invalid choice!" << endl;
    }
    
    return 0;
}

/*
Sample Outputs:
Choice 1: Default constructor called! Length: 0, Width: 0
Choice 2: Square constructor called! Length: 4, Width: 4  
Choice 3: Rectangle constructor called! Length: 18, Width: 6
*/