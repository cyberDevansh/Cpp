#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    BankAccount(string name, double initialBalance) {
        accountHolder = name;
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
        }
    }

    double getBalance() const {
        return balance;
    }

    string getAccountHolder() const {
        return accountHolder;
    }
};

int main() {
    BankAccount acc("Guppe", 1000.0);

    acc.deposit(500);
    acc.withdraw(300);

    cout << "Account Holder: " << acc.getAccountHolder() << endl;
    cout << "Balance: " << acc.getBalance() << endl;

    return 0;
}
