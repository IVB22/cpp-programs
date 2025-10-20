// Program 7.1: Different Forms of Inheritance
// Author: Roll No 24B11AI450

#include <iostream>
using namespace std;

void singleInheritanceDemo() {
    class vehicle {
    public:
        vehicle() {
            cout << "This is a vehicle" << endl;
        }
    };

    class car : public vehicle {
    public:
        car() {
            cout << "This vehicle is a car" << endl;
        }
    };

    cout << "Roll No:24B11AI450" << endl;
    car obj;
    cout << endl;
}

void multipleInheritanceDemo() {
    class roadvehicle {
    public:
        roadvehicle() {
            cout << "This is a land vehicle" << endl;
        }
    };

    class watervehicle {
    public:
        watervehicle() {
            cout << "This is a water vehicle" << endl;
        }
    };

    class ampvehicle : public watervehicle, public roadvehicle {
    public:
        ampvehicle() {
            cout << "This is both land and water vehicle" << endl;
        }
    };

    cout << "Roll No:24B11AI450" << endl;
    ampvehicle obj;
    cout << endl;
}

void multilevelInheritanceDemo() {
    class vehicle {
    public:
        vehicle() {
            cout << "This is a vehicle" << endl;
        }
    };

    class fourwheeler : public vehicle {
    public:
        fourwheeler() {
            cout << "Four wheels vehicles" << endl;
        }
    };

    class car : public fourwheeler {
    public:
        car() {
            cout << "This four wheels vehicle is a car" << endl;
        }
    };

    cout << "Roll No:24B11AI450" << endl;
    car obj;
    cout << endl;
}

void hierarchicalInheritanceDemo() {
    class vehicle {
    public:
        vehicle() {
            cout << "This is a vehicle" << endl;
        }
    };

    class car : public vehicle {
    public:
        car() {
            cout << "This vehicle is a car" << endl;
        }
    };

    class bus : public vehicle {
    public:
        bus() {
            cout << "This vehicle is bus" << endl;
        }
    };

    cout << "Roll No:24B11AI450" << endl;
    car obj1;
    bus obj2;
    cout << endl;
}

void hybridInheritanceDemo() {
    class vehicle {
    public:
        vehicle() {
            cout << "This is a vehicle" << endl;
        }
    };

    class fare {
    public:
        fare() {
            cout << "Fare of a vehicle" << endl;
        }
    };

    class car : public vehicle {
    public:
        car() {
            cout << "This vehicle is a car" << endl;
        }
    };

    class bus : public vehicle, public fare {
    public:
        bus() {
            cout << "This vehicle is a bus with fare" << endl;
        }
    };

    cout << "Roll No:24B11AI450" << endl;
    bus obj2;
}

int main() {
    cout << "=== Single Inheritance ===" << endl;
    singleInheritanceDemo();

    cout << "\n=== Multiple Inheritance ===" << endl;
    multipleInheritanceDemo();

    cout << "\n=== Multilevel Inheritance ===" << endl;
    multilevelInheritanceDemo();

    cout << "\n=== Hierarchical Inheritance ===" << endl;
    hierarchicalInheritanceDemo();

    cout << "\n=== Hybrid Inheritance ===" << endl;
    hybridInheritanceDemo();

    return 0;
}