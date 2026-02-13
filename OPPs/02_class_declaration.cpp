#include <iostream>
#include <string>
using namespace std;

class Cybo
{

private:
    string Name;
    int Age;

public:
    Cybo(string name, int age) : Name(name), Age(age){}  //new way to construct

void display() const{

cout<<"Name: "<< Name << endl;
cout<<"Age: "<< Age << endl;

}
    
};

int main(){
    Cybo student("Devansh", 22);
    student.display();
}