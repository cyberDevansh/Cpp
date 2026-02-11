#include <iostream>

void passbyReference(int &value){
    value=value+5;
    std::cout<<"CopyValue: "<<value<<std::endl;
  
};

int main(){
    int value=20;
    passbyReference(value);
    std::cout<<"OriginalValue: "<<value<<std::endl;

    return 0;
}