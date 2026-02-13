#include <iostream>
#include <string>
#include <vector>

int main(){
 return 0;   
}

class Chai{
    public:
    std::string* teaName;
    int servings;
    std::vector<std::string> ingredients;

    // parameter constructor
    Chai(std::string name,int serve,std::vector<std::string> ingr){
        teaName=new std::string(name); //here dynamically memory allocated because of the pointer so we need to free it using destructor
        servings=serve;
        ingredients=ingr;
        std::cout<<"Parameter Constructor called"<<std::endl;
    }

    ~Chai(){
        delete teaName;
        std::cout<<"Destructor Called...."<<std::endl;
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