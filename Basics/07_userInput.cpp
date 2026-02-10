#include <iostream>
#include <string>
int main(){
    int age;
    std::string name;

    std::cout<<"Enter your age: ";
    std::cin>>age;

    std::cin.ignore(); /// Clear the buffer so getline doesn't read the previous Enter key

    std::cout<<"Enter name: ";
    std::getline(std::cin,name);

   
    std::cout << "Age: " << age << "\n";
    std::cout << "Name: " << name << "\n";
    return 0;
}