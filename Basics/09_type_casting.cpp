#include <iostream>
int main(){
    float value1=55.57;
    int typecast_value1= (int)value1;  //c style typecasting
    std::cout<<"Typecasted value1: "<<typecast_value1;

    float value2=66.67;
    int typecast_value2= static_cast<int>(value2);
    std::cout<<"Typecasted value1: "<<typecast_value2;

    return 0;
}