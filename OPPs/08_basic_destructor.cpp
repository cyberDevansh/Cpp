#include <iostream>
#include <string>
using namespace std;

class Dev{

    public:
    string Name;
    string* Name2;
    int Age;

    //  constructor
    Dev(string name,string name2,int age){

    cout<<"COnstructor called..."<<endl;
    string Name=name;
    string* Name2=new string(name2);
    int Age=age;

    }

    // destructor
    ~Dev(){
        delete Name2;
        cout<<"Destructor called...."<<endl;
    }
};

int main(){
    
    Dev guppe("Devansh","Gopalji",22);
    return 0;
}