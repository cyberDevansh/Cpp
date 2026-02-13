#include <iostream>
#include <string>

int add(int num1,int num2){
return num1+num2;
};


int main(){
int sum=add(4,5);
std::cout<<"Sum: "<< sum;
return 0;
}