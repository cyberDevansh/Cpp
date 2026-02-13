// friend function is a free function(non member function) used to give member level access to functions or class that are not part of the same class

#include <iostream>
#include <string>
using namespace std;

class Chai
{
private:
    string Name;
    int Serving;

public:
    Chai(string name, int serving): Name(name), Serving(serving){}

    // friend function
    friend bool ServingComparison(const Chai &chai1,const Chai &chai2);
};

bool ServingComparison(const Chai &chai1,const Chai &chai2){
    return chai1.Serving>chai2.Serving;
}

int main(){
    Chai masalaChai("Masala Chai", 5);
    Chai gingerChai("Ginger Chai", 10);

    if (ServingComparison(masalaChai,gingerChai)){
        cout<<"Masala Chai have MORE servings";
    }
    else{
    cout<<"Masala Chai have LESS servings";
    }
}