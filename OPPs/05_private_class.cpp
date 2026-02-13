#include <iostream>
#include <string>

class Sensitive_Details {
private:
    int _account_no;
    std::string _OwnerName;

public:
    Sensitive_Details(int acc_no, const std::string& name)
        : _account_no(acc_no), _OwnerName(name) {}  //member initializer list and it is equivalent to _account_no = acc_no; but it happens during initialization,not assignment

    void setAccountNo(int acc_no) {
        _account_no = acc_no;
    }

    int getAccountNo() const {
        return _account_no;
    }

    void setOwnerName(const std::string& name) {
        _OwnerName = name;
    }

    std::string getOwnerName() const {
        return _OwnerName;
    }
    
    void display() const {
        std::cout << "Account No: " << _account_no << std::endl;
        std::cout << "Owner Name: " << _OwnerName << std::endl;
    }
};

int main() {
    Sensitive_Details account(123456, "Guppe");

    account.display();

    account.setOwnerName("Alex");
    account.setAccountNo(654321);

    account.display();

    return 0;
}
