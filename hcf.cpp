#include<iostream>
using namespace std;
int main(){
    int  num1, num2;
    cout<<"enter any two numbers:-"<<endl;
    cin>>num1>>num2;
    for(int i=num1; i>0; --i )
    {
        if(num1 % i==0 && num2 % i==0)
        {
            cout<<i;
            break;
        }
    }
}