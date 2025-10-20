// Program 6.1: Operator Overloading using Member Functions
// Author: Roll No 24B11AI136
// Demonstrates unary and binary operator overloading using member functions

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
    
    void display() {
        cout << real << "+" << image << "i" << endl;
    }
    
    // Unary minus operator overloading (member function)
    Complex operator-() {
        return Complex(-real, -image);
    }
    
    // Unary ++ operator overloading (prefix)
    Complex operator++() {
        ++real;
        ++image;
        return *this;
    }
    
    // Binary + operator overloading (member function)
    Complex operator+(const Complex& obj) {
        return Complex(real + obj.real, image + obj.image);
    }
    
    // Binary - operator overloading (member function)
    Complex operator-(const Complex& obj) {
        return Complex(real - obj.real, image - obj.image);
    }
};

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
c1: 3+4i
c2: 1+2i
After unary - on c1:
c3: -3+-4i
After unary ++ on c1:
c1: 4+5i
After c1 + c2:
c3: 5+7i
After c1 - c2:
c3: 3+3i
*/