// Program 3.1: Bank Account Class with Encapsulation
// Author: Roll No 24B11AI450
// Demonstrates classes, objects, data members, member functions, and encapsulation

#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string name;
    float balance;
    
public:
    void createAccount() {
        cout << "Enter Account Number: ";
        cin >> accountNumber;
        cin.ignore();
        cout << "Enter Account Holder Name: ";
        getline(cin, name);
        cout << "Enter Initial Balance: ₹";
        cin >> balance;
        cout << "\nAccount Created Successfully!\n";
    }
    
    void deposit() {
        float amount;
        cout << "Enter amount to deposit: ₹";
        cin >> amount;
        if (amount > 0) {
            balance += amount;
            cout << "₹" << amount << " deposited successfully.\n";
        } else {
            cout << "Invalid deposit amount.\n";
        }
    }
    
    void withdraw() {
        float amount;
        cout << "Enter amount to withdraw: ₹";
        cin >> amount;
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "₹" << amount << " withdrawn successfully.\n";
        } else {
            cout << "Insufficient balance or invalid amount.\n";
        }
    }
    
    void displayBalance() const {
        cout << "\n--- Account Details ---\n";
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << name << endl;
        cout << "Current Balance: ₹" << balance << endl;
    }
};

int main() {
    BankAccount myAccount;
    int choice;
    
    myAccount.createAccount();
    
    do {
        cout << "\n--- Bank Menu ---\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Display Balance\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                myAccount.deposit();
                break;
            case 2:
                myAccount.withdraw();
                break;
            case 3:
                myAccount.displayBalance();
                break;
            case 4:
                cout << "Thank you for using our banking system.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);
    
    return 0;
}

/*
Sample Output:
Enter Account Number: 254675450
Enter Account Holder Name: BHARATH
Enter Initial Balance: ₹87000000000

Account Created Successfully!

--- Bank Menu ---
1. Deposit
2. Withdraw  
3. Display Balance
4. Exit
Enter your choice: 1
Enter amount to deposit: ₹10000000
₹10000000 deposited successfully.

--- Bank Menu ---
1. Deposit
2. Withdraw
3. Display Balance
4. Exit
Enter your choice: 3

--- Account Details ---
Account Number: 254675450
Account Holder: BHARATH
Current Balance: ₹87010000000
*/