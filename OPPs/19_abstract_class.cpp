// A class becomes abstract when it has at least one pure virtual function
// A pure virtual function is declared using = 0.
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Payment{
    public:
    // purre virtual function 
    virtual void pay(double amount)=0;

    void receipt (double amount){
        cout<<"Payment of "<<amount <<" processed.\n";
    }

    //virtual destructor (imp in abstract classes) 
    virtual ~Payment(){}
};

class UPI : public Payment{
    public:
    void pay(double amount) override{
        cout << "Paying "<< amount<< " using UPI\n";
    }
};
class CreditCard : public Payment {
public:
    void pay(double amount) override {
        cout << "Paying " << amount << " using Credit Card.\n";
    }
};

int main() {

    // Payment p;  Not allowed (abstract class)

    Payment* p1 = new UPI();
    Payment* p2 = new CreditCard();

    p1->pay(500);
    p1->receipt(500);

    p2->pay(1000);
    p2->receipt(1000);

    delete p1;
    delete p2;

    return 0;
}