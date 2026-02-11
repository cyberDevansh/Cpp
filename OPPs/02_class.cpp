#include <iostream>
#include <string>
#include <vector>

class BTech{
    public:
    std::string Branch;
    std::string coordinator;
    int fees;
    std::vector<std::string> courses;
    
    // Method
    void display(){
        std::cout<<"Branch: "<<Branch<<std::endl;
        std::cout<<"Coordinator: "<<coordinator<<std::endl;
        std::cout<<"Fees: "<<fees<<std::endl;
        std::cout<<"Courses: ";
        for ( const std::string &course:courses){
            std::cout<<course<<" ";
        }
        std::cout<<std::endl;
    }
};


class BTech {
public:
    std::string branch;
    std::string coordinator;
    int fees;
    std::vector<std::string> courses;

    void display() const {
        std::cout << "Branch: " << branch << std::endl;
        std::cout << "Coordinator: " << coordinator << std::endl;
        std::cout << "Fees: " << fees << std::endl;
        std::cout << "Courses: ";
        for (const std::string &course : courses) {
            std::cout << course << " ";
        }

        std::cout << std::endl;
    }
};
