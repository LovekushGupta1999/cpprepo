#include<iostream>
using namespace std;
template<typename type>

class fact{
    type num;
    type res=1;
    public:
  
    type factorial(type num){
    for(type i=1;i<=num;i++){
       res=res*i;
    }
    return res;
}
};
int main(){
    fact<int>obj;
    cout<<obj.factorial(6);
    return 0;
}