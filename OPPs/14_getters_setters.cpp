#include <iostream>
#include <string>

class Bank{
private:
    int accountNo;
    std::string ownerName;
    double balance;

public:
    Bank(int accNo, std::string owner, double initialBalance)
        : accountNo(accNo), ownerName(owner), balance(initialBalance)
    {
        std::cout << "Account created successfully.\n";
    }

    // Getter for account number
    int getAccountNo() const{
        return accountNo;
    }

    // Getter for owner name
    std::string getOwnerName() const{
        return ownerName;
    }

    // Getter for balance
    double getBalance() const {
        return balance;
    }

    // Setter for owner name
    void setOwnerName(const std::string& newName) {
        if (!newName.empty()) {
            ownerName = newName;
        }
    }

    // Deposit function
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }

    // Withdraw function
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
        }
        else {
            std::cout << "Invalid withdrawal attempt.\n";
        }
    }
};

int main() {
    Bank user1(12345, "Dev", 50000);

    std::cout << "Account No: " << user1.getAccountNo() << "\n";
    std::cout << "Owner: " << user1.getOwnerName() << "\n";
    std::cout << "Balance: " << user1.getBalance() << "\n";

    user1.deposit(5000);
    user1.withdraw(2000);

    std::cout << "Updated Balance: " << user1.getBalance() << "\n";

    return 0;
}
