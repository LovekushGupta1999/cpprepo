#include<iostream>
using namespace std;
class person{
    public:
    string name;
    int age;
    person(string name, int age)
    {   cout<<"iam parent constructor"<<endl;
        this->name=name;
        this->age=age;
    }

    
};
class student: public person{
    public:
      int rollno;
      student(string name, int age, int rollno):person(name, age){
      cout<<"iam child constructor"<<endl;

        this->rollno=rollno;
      }

      void get(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<rollno<<endl;
        
      }
};
int main(){
    student s1("abhishek",23,101);
    s1.get();
}