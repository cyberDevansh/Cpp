// This is not a correct implementation,It will compile, but it contains a serious memory management bug
// That leads to a shallow copy problem.
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Chai{

    public:
    string* teaName;
    int servings;
    vector<string> ingredients;

    // parameter constructor
    Chai(string name,int serve,vector<string> ingr){

        teaName=new string(name);
        servings=serve;
        ingredients=ingr;
        cout<<"Parameter Constructor called"<<endl;

    }

    ~Chai(){

        delete teaName;
        cout<<"Destructor Called...."<<endl;

    }

    void displayChaiDetails(){

        cout<<"Tea Name: " <<*teaName<<endl;
        cout<<"Servings: "<<servings<<endl;
        cout<<"Ingredients: ";

        for(string ingreed: ingredients){
            
            cout<<ingreed<<" ";
            
        }
        cout<<endl;
    }
};


int main(){

    Chai lemonTea("Lemon Tea", 2, {"Water","Lemon","Honey"});
    lemonTea.displayChaiDetails();
    
    Chai copiedChai=lemonTea;
    copiedChai.displayChaiDetails();
     
    *copiedChai.teaName="Masala chai"; //same as *(copiedChai.teaName)
    copiedChai.displayChaiDetails();
    lemonTea.displayChaiDetails();
    return 0;
}