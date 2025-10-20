// Program 6.2: Operator Overloading using Friend Functions
// Author: Roll No 24B11AI136
// Demonstrates unary and binary operator overloading using friend functions

#include <iostream>
using namespace std;

class Complex {
private:
    float real, image;
    
public:
    // Constructor
    Complex(float r = 0, float i = 0) {
        real = r;
        image = i;
    }
    
    void display() const {
        cout << real << "+" << image << "i" << endl;
    }
    
    // Friend function declarations
    friend Complex operator-(const Complex& c);
    friend Complex operator++(Complex& c);
    friend Complex operator+(const Complex& a, const Complex& b);
    friend Complex operator-(const Complex& a, const Complex& b);
};

// Friend function definitions

// Unary minus operator (friend function)
Complex operator-(const Complex& c) {
    return Complex(-c.real, -c.image);
}

// Unary ++ operator (friend function) - prefix
Complex operator++(Complex& c) {
    ++c.real;
    ++c.image;
    return c;
}

// Binary + operator (friend function)
Complex operator+(const Complex& a, const Complex& b) {
    return Complex(a.real + b.real, a.image + b.image);
}

// Binary - operator (friend function)
Complex operator-(const Complex& a, const Complex& b) {
    return Complex(a.real - b.real, a.image - b.image);
}

int main() {
    Complex c1(3, 4), c2(1, 2), c3;
    
    cout << "Roll No: 24B11AI136" << endl;
    cout << "Original complex numbers:" << endl;
    cout << "c1: ";
    c1.display();
    cout << "c2: ";
    c2.display();
    
    c3 = -c1;
    cout << "After unary - on c1:" << endl;
    cout << "c3: ";
    c3.display();
    
    ++c1;
    cout << "After unary ++ on c1:" << endl;
    cout << "c1: ";
    c1.display();
    
    c3 = c1 + c2;
    cout << "After c1 + c2:" << endl;
    cout << "c3: ";
    c3.display();
    
    c3 = c1 - c2;
    cout << "After c1 - c2:" << endl;
    cout << "c3: ";
    c3.display();
    
    return 0;
}

/*
Sample Output:
Roll No: 24B11AI136
Original complex numbers:
c1: 4+5i
c2: 1+2i
After unary - on c1:
c3: -4+-5i
After unary ++ on c1:
c1: 5+6i
After c1 + c2:
c3: 7+8i
After c1 - c2:
c3: 4+4i
*/