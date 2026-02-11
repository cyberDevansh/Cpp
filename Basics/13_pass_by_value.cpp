#include <iostream>

void passbyValue(int value){
    value=value+5;
    std::cout<<"CopyValue: "<<value<<std::endl;
  
};

int main(){
    int value=20;
    passbyValue(value);
    std::cout<<"OriginalValue: "<<value<<std::endl;
    return 0;
}