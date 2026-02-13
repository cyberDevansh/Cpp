#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Bank{
    private:
    int Account_no;
    string Owner_name;
    int Balance;

    public:
    Bank(int acc_no,string owner,int balance)
    :Account_no(acc_no), Owner_name(owner), Balance(balance){}

    //Friend Function
    friend void compareBalance(const Bank& acc1,const Bank& acc2); 
};

void compareBalance(const Bank& acc1,const Bank& acc2){
    if (acc1.Balance>acc2.Balance){
      cout<<"Account: "<< acc1.Account_no <<" have MORE balance."<<endl;
    }else if(acc1.Balance<acc2.Balance){
        cout<<"Account: "<< acc2.Account_no <<" have MORE balance."<<endl;
    }
    else{
        cout<<"Both have SAME balance"<<endl;
    }
}


int main(){
    Bank user1(12345,"Dev",50000);
    Bank user2(13789,"GPL",90000);
    compareBalance(user1,user2);
    return 0;
}