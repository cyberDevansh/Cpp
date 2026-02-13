#include <iostream>
#include <string>
#include <vector>


class Chai{
    public:
    std::string teaName;
    int servings;
    std::vector<std::string> ingredients;

    // parameter constructor
    Chai(std::string name,int serve,std::vector<std::string> ingr){
        teaName=name;
        servings=serve;
        ingredients=ingr;
        std::cout<<"Parameter Constructor called"<<std::endl;
    }

    void displayChaiDetails(){
        std::cout<<"Tea Name: " <<teaName<<std::endl;
        std::cout<<"Servings: "<<servings<<std::endl;
        std::cout<<"Ingredients: ";
        for(std::string ingreed: ingredients){
            std::cout<<ingreed<<" ";
        }
        std::cout<<std::endl;
    }
};

int main(){
    Chai lemonTea("Lemon Tea", 2, {"Water","Lemon","Honey"});
    lemonTea.displayChaiDetails();
    // copy object
    Chai copiedChai=lemonTea;
    copiedChai.displayChaiDetails();

    lemonTea.teaName="Modified Lemon Tea";
    std::cout<<"Lemon Tea"<< std::endl;
    lemonTea.displayChaiDetails();
    std::cout<<"Copied Tea"<<std::endl;
    copiedChai.displayChaiDetails();
    
    return 0;
}