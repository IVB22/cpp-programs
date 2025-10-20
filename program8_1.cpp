// Program 8.1: Pointers to Objects
// Author: Roll No 24B11AI450

#include <iostream>
#include <string>
using namespace std;

class student {
private:
    string name;
    int age;

public:
    void setdata(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << "name: " << name << endl;
        cout << "age: " << age << endl;
    }
};

int main() {
    cout << "Roll No:24B11AI450" << endl;

    student s1;
    s1.setdata("VEESAM BHARTH", 19);
    cout << "\nDirect object access:" << endl;
    s1.display();

    student* ptr;
    ptr = &s1;
    cout << "\nAccess via pointer to existing object:" << endl;
    ptr->display();

    student* ptr2 = new student;
    ptr2->setdata("munna", 21);
    cout << "\nAccess via dynamically allocated object:" << endl;
    ptr2->display();

    delete ptr2;

    return 0;
}