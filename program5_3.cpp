// Program 5.3: Copy Constructor
// Author: Roll No 24B11AI450

#include <iostream>
using namespace std;

class Rectangle {
private:
    int len;
    int wid;

public:
    Rectangle(int l, int w) {
        len = l;
        wid = w;
    }

    Rectangle(const Rectangle& r) {
        len = r.len;
        wid = r.wid;
        cout << "Copy call!" << endl;
    }

    void setLen(int l) {
        len = l;
    }

    void display() {
        cout << "Len: " << len << ", Wid: " << wid << endl;
    }
};

int main() {
    int l, w;

    cout << "Enter len and wid: ";
    cin >> l >> w;

    Rectangle rect1(l, w);
    cout << "\nOriginal Rectangle (rect1):" << endl;
    rect1.display();

    Rectangle rect2 = rect1;
    cout << "\nCopied Rectangle (rect2):" << endl;
    rect2.display();

    rect1.setLen(l + 10);
    cout << "\nAfter changing rect1's len:" << endl;
    cout << "rect1: ";
    rect1.display();
    cout << "rect2: ";
    rect2.display();

    return 0;
}