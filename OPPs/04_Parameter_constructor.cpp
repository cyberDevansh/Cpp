#include <iostream>
#include <string>


class StudentName{
    public:
    std::string Name;
    int age;

    // constructor
    StudentName(int rollno, std::string period){
        std::cout<<"Parameter Contructor called when object is created...."<<std::endl;
        std::cout<<rollno<<"\n"<< period <<std::endl;
    }
};



int main(){
    StudentName Object(21,"Fifth");
    Object.Name="Devansh";
    Object.age=22;
    std::cout<<Object.Name<<"\n"<<Object.age<<std::endl;
    
    return 0;
}