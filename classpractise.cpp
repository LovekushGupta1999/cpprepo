#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int rollno;

    student(){

    }

    student(string name, int rollno){
        this->name=name;
        this->rollno=rollno;
    }
    student(student &c){
        name=c.name;
        rollno=c.rollno;
    }
    void getvalue(){
        cout<<name;
        cout<<rollno;
    }

};

int main(){
    student a("lovekush",24), b(a);
//    a.getvalue();
   b.getvalue();

   
}