#include<iostream>
using namespace std;
int main(){
    struct student{
        string stu_name;
        int roll_no;
        float marks[2];

        void display(struct student a){
            cout<<a.stu_name;
            cout<<a.roll_no;
            
        }
    }love;
     love={"lovekush",11,{99,98}};
    love.display(love);
}
