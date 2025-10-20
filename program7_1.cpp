// Program 7.1: Different Forms of Inheritance
// Author: Roll No 24B11AI136
// Demonstrates Single, Multiple, Multilevel, Hierarchical, and Hybrid Inheritance

#include <iostream>
using namespace std;

// ================= 1. Single Inheritance =================
namespace SingleInheritance {
    class Vehicle {
    public:
        Vehicle() {
            cout << "This is a vehicle" << endl;
        }
    };
    
    class Car : public Vehicle {
    public:
        Car() {
            cout << "This vehicle is a car" << endl;
        }
    };
    
    void demo() {
        cout << "=== Single Inheritance Demo ===" << endl;
        cout << "Roll No: 24B11AI136" << endl;
        Car obj;
        cout << endl;
    }
}

// ================= 2. Multiple Inheritance =================
namespace MultipleInheritance {
    class LandVehicle {
    public:
        LandVehicle() {
            cout << "This is a land vehicle" << endl;
        }
    };
    
    class WaterVehicle {
    public:
        WaterVehicle() {
            cout << "This is a water vehicle" << endl;
        }
    };
    
    class AmphibiousVehicle : public WaterVehicle, public LandVehicle {
    public:
        AmphibiousVehicle() {
            cout << "This is both land and water vehicle" << endl;
        }
    };
    
    void demo() {
        cout << "=== Multiple Inheritance Demo ===" << endl;
        cout << "Roll No: 24B11AI136" << endl;
        AmphibiousVehicle obj;
        cout << endl;
    }
}

// ================= 3. Multilevel Inheritance =================
namespace MultilevelInheritance {
    class Vehicle {
    public:
        Vehicle() {
            cout << "This is a vehicle" << endl;
        }
    };
    
    class FourWheeler : public Vehicle {
    public:
        FourWheeler() {
            cout << "4 wheeler vehicle" << endl;
        }
    };
    
    class Car : public FourWheeler {
    public:
        Car() {
            cout << "This 4 wheeler vehicle is a car" << endl;
        }
    };
    
    void demo() {
        cout << "=== Multilevel Inheritance Demo ===" << endl;
        cout << "Roll No: 24B11AI136" << endl;
        Car obj;
        cout << endl;
    }
}

// ================= 4. Hierarchical Inheritance =================
namespace HierarchicalInheritance {
    class Vehicle {
    public:
        Vehicle() {
            cout << "This is a vehicle" << endl;
        }
    };
    
    class Car : public Vehicle {
    public:
        Car() {
            cout << "This vehicle is a car" << endl;
        }
    };
    
    class Bus : public Vehicle {
    public:
        Bus() {
            cout << "This vehicle is a bus" << endl;
        }
    };
    
    void demo() {
        cout << "=== Hierarchical Inheritance Demo ===" << endl;
        cout << "Roll No: 24B11AI136" << endl;
        Car obj1;
        Bus obj2;
        cout << endl;
    }
}

// ================= 5. Hybrid Inheritance =================
namespace HybridInheritance {
    class Vehicle {
    public:
        Vehicle() {
            cout << "This is a vehicle" << endl;
        }
    };
    
    class Fare {
    public:
        Fare() {
            cout << "Fare of a vehicle" << endl;
        }
    };
    
    class Car : public Vehicle {
    public:
        Car() {
            cout << "This vehicle is a car" << endl;
        }
    };
    
    class Bus : public Vehicle, public Fare {
    public:
        Bus() {
            cout << "This vehicle is a bus with fare" << endl;
        }
    };
    
    void demo() {
        cout << "=== Hybrid Inheritance Demo ===" << endl;
        cout << "Roll No: 24B11AI136" << endl;
        Bus obj;
        cout << endl;
    }
}

int main() {
    SingleInheritance::demo();
    MultipleInheritance::demo();
    MultilevelInheritance::demo();
    HierarchicalInheritance::demo();
    HybridInheritance::demo();
    
    return 0;
}

/*
Sample Output:
=== Single Inheritance Demo ===
Roll No: 24B11AI136
This is a vehicle
This vehicle is a car

=== Multiple Inheritance Demo ===
Roll No: 24B11AI136
This is a water vehicle
This is a land vehicle
This is both land and water vehicle

=== Multilevel Inheritance Demo ===
Roll No: 24B11AI136
This is a vehicle
4 wheeler vehicle
This 4 wheeler vehicle is a car

=== Hierarchical Inheritance Demo ===
Roll No: 24B11AI136
This is a vehicle
This vehicle is a car
This is a vehicle
This vehicle is a bus

=== Hybrid Inheritance Demo ===
Roll No: 24B11AI136
This is a vehicle
Fare of a vehicle
This vehicle is a bus with fare
*/