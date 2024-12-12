#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int *ptrage;

    student(){

    }

    student(string name, int age){
        this->name=name;
        ptrage=new int;
        *ptrage=age;
    }
    //  student(student &c){
    //     this->name=c.name;
    //     ptrage=c.ptrage;//shallow copy
    // }
    student(student &c){
        this->name=c.name;
        ptrage=new int;//deep copy
        *ptrage=*c.ptrage;
    }
    void getvalue(){
        cout<<name<<endl;
        cout<<*ptrage;
    }

};

int main(){
    student s1("rahul",23),s2(s1);
   *s2.ptrage=24;
   s2.name="shayam";
   s2.getvalue();
   
        cout<<endl;
        cout<<endl;


   s1.getvalue();


   
}