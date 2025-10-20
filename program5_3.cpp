// Program 5.3: Copy Constructor Demo
// Author: Roll No 24B11AI136
// Demonstrates the use of copy constructor to initialize objects

#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;
    
public:
    // Parameterized Constructor
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }
    
    // Copy Constructor
    Rectangle(const Rectangle& r) {
        length = r.length;
        width = r.width;
        cout << "Copy constructor called!" << endl;
    }
    
    void setLength(int l) {
        length = l;
    }
    
    void display() {
        cout << "Length: " << length << ", Width: " << width << endl;
    }
};

int main() {
    int l, w;
    
    cout << "Enter length and width: ";
    cin >> l >> w;
    
    Rectangle rect1(l, w);
    cout << "Original Rectangle (rect1):" << endl;
    rect1.display();
    
    Rectangle rect2 = rect1;  // Copy constructor called
    cout << "Copied Rectangle (rect2):" << endl;
    rect2.display();
    
    rect1.setLength(l + 10);
    cout << "After changing rect1's length:" << endl;
    cout << "rect1: ";
    rect1.display();
    cout << "rect2: ";
    rect2.display();
    
    return 0;
}

/*
Sample Output:
Enter length and width: 4 2
Original Rectangle (rect1):
Length: 4, Width: 2
Copy constructor called!
Copied Rectangle (rect2):
Length: 4, Width: 2
After changing rect1's length:
rect1: Length: 14, Width: 2
rect2: Length: 4, Width: 2
*/