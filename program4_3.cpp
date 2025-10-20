// Program 4.3: Friend Functions
// Author: Roll No 24B11AI450
// Demonstrates friend function to access private data of a class

#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    float balance;
    
public:
    BankAccount(string name, float amount) {
        accountHolder = name;
        balance = amount;
    }
    
    friend void showAccountDetails(BankAccount acc);
};

void showAccountDetails(BankAccount acc) {
    cout << "\n--- Account Details ---\n";
    cout << "Account Holder: " << acc.accountHolder << endl;
    cout << "Balance: ₹" << acc.balance << endl;
}

int main() {
    string name;
    float amount;
    
    cout << "Enter Account Holder Name: ";
    getline(cin, name);
    cout << "Enter Initial Balance: ₹";
    cin >> amount;
    
    BankAccount userAccount(name, amount);
    showAccountDetails(userAccount);
    
    return 0;
}

/*
Sample Output:
Enter Account Holder Name: BHARATH
Enter Initial Balance: ₹87001000000

--- Account Details ---
Account Holder: BHARATH
Balance: ₹87001000000
*/