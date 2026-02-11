#include <iostream>
#include <string>
#include <vector>

class Chai{
    public:
    std::string teaName;
    int serving;
    std::vector<std::string> ingredients;

    void displayChaiDetails(){
        std::cout<<"Tea Name: "<< teaName<<std::endl;
        std::cout<<"Serving: "<< serving<<std::endl;
        std::cout<<"Ingredients: ";
        // better way as no copy needed as it refrences to original 
        // for(const std::string& ingredient : ingredients)
        for(std::string ingreeds:ingredients){
            std::cout<<ingreeds<<" ";
        }
        std::cout<<std::endl;
    }
};

int main(){
    // object

    Chai chaiOne;
    chaiOne.teaName="Lemon Tea";
    chaiOne.serving=2;
    chaiOne.ingredients={"Water","Tea","Milk","Lemon"};
    chaiOne.displayChaiDetails();
    
    std::cout<<"-----------------"<<std::endl;
    
    Chai chaiTwo;
    chaiTwo.teaName="Honey Tea";
    chaiTwo.serving=3;
    chaiTwo.ingredients={"Tea", "Water", "Honey", "Milk"};
    chaiTwo.displayChaiDetails();
    
    std::cout<<"-----------------"<<std::endl;
    return 0;
}