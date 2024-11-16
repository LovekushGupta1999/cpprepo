#include<iostream>
using namespace std;
int main(){
    struct student{
        string stu_name;
        int roll_no;
        float marks[2];

        void display(struct student a){
            cout<<a.stu_name<<endl;
            cout<<a.roll_no<<endl;
            for(int i=0;i<2;++i)
            {
                cout<<a.marks[i]<<endl;
            }
            
        }
    }love;
    //  love={"lovekush",11,{99,98}};
    love.display({"lovekush",11,{99,98}});
    student *kush=&love;
    cout<<kush->display();
    
    
    
}
