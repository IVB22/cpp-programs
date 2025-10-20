// Program 5.2: Constructor Overloading
// Author: Roll No 24B11AI450

#include <iostream>
using namespace std;

class rectangle {
private:
    int len;
    int wid;

public:
    rectangle() {
        len = 0;
        wid = 0;
        cout << "default call" << endl;
    }

    rectangle(int side) {
        len = side;
        wid = side;
        cout << "square call" << endl;
    }

    rectangle(int l, int w) {
        len = l;
        wid = w;
        cout << "rectangle call" << endl;
    }

    void display() {
        cout << "len: " << len << ", wid: " << wid << endl;
    }
};

int main() {
    int choice;

    cout << "Choose how to create the rectangle:" << endl;
    cout << "1. default" << endl;
    cout << "2. square" << endl;
    cout << "3. rectangle (l and w)" << endl;
    cout << "enter choice: ";
    cin >> choice;

    if (choice == 1) {
        rectangle r1;
        r1.display();
    }
    else if (choice == 2) {
        int side;
        cout << "enter len: ";
        cin >> side;
        rectangle r2(side);
        r2.display();
    }
    else if (choice == 3) {
        int l, w;
        cout << "enter len: ";
        cin >> l;
        cout << "enter wid: ";
        cin >> w;
        rectangle r3(l, w);
        r3.display();
    }

    return 0;
}