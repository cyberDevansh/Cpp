#include <iostream>
#include <string>


class StudentName{
    public:
    std::string Name;
    int age;

    // constructor
    StudentName(){
        std::cout<<"Contructor called when object is created...."<<std::endl;
    }
};



int main(){
    StudentName Object;
    Object.Name="Devansh";
    Object.age=22;
    std::cout<<Object.Name<<"\n"<<Object.age<<std::endl;
    
    return 0;
}