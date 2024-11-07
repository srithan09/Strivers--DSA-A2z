#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Step 1: Define the BankAccount Class
class BankAccount {
public:
    int accountNumber;
    string holderName;
    double balance;

    BankAccount(int accNum, string name, double bal) {
        accountNumber = accNum;
        holderName = name;
        balance = bal;
    }

    void display() const {
        cout << "Account Number: " << accountNumber << ", Name: " << holderName << ", Balance: " << balance << endl;
    }
};

// Step 4: Sorting functions for different attributes
bool sortByAccountNumber(const BankAccount &a, const BankAccount &b) {
    return a.accountNumber < b.accountNumber;
}

bool sortByHolderName(const BankAccount &a, const BankAccount &b) {
    return a.holderName < b.holderName;
}

bool sortByBalance(const BankAccount &a, const BankAccount &b) {
    return a.balance < b.balance;
}

int main() {
    // Step 2: Create a list of bank account objects
    vector<BankAccount> accounts = {
        BankAccount(101, "Alice", 5000),
        BankAccount(102, "Bob", 3000),
        BankAccount(103, "Charlie", 7000)
    };

    // Step 3: Get User Input for Sorting Criteria
    int choice;
    cout << "Sort accounts by:\n1. Account Number\n2. Holder Name\n3. Balance" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    // Step 5: Sort the List Based on User Input
    switch (choice) {
        case 1:
            sort(accounts.begin(), accounts.end(), sortByAccountNumber);
            break;
        case 2:
            sort(accounts.begin(), accounts.end(), sortByHolderName);
            break;
        case 3:
            sort(accounts.begin(), accounts.end(), sortByBalance);
            break;
        default:
            cout << "Invalid choice!" << endl;
            return 1;  // Exit the program if invalid choice
    }

    // Step 6: Display Sorted Accounts
    cout << "\nSorted Accounts:" << endl;
    for (const auto &account : accounts) {
        account.display();
    }

    return 0;
}
