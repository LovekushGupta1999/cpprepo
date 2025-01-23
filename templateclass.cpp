#include<iostream>
using namespace std;
template<typename cybrom>
class course{
    cybrom name;
    cybrom age;
    public:
    course(cybrom nam){
        name=nam;
    }
    void show(){
        cout<<name;
    }
    cybrom get(){
        return name;
    }
};
int main(){
    course <string>obj("lovekush");
//   obj("age");
    obj.show();
    return 0;
}