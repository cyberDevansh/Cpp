#include <iostream>
#include <string>
using namespace std;

class student{
private:
    string stu_email;
    string Name;
    int Adhaar;

public:
    student(string student_email,string name,int adhaar)
        : stu_email(student_email), Name(name), Adhaar(adhaar){}

    friend class dost;
};

class dost{
public:
    void display(const student& student1){
        cout << student1.stu_email << endl;
        cout << student1.Name << endl;
        cout << student1.Adhaar << endl;
    }
};

int main(){
    student student123("abc@gmail.com","Dev",12345);
    dost friendclass;
    friendclass.display(student123);
}
