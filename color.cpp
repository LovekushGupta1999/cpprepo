#include<iostream>
using namespace std;
int main()
{
    int n1 , n2;
    cout<<"enter 1 for choose red color\n";
    cout<<"enter 2 for choose green color\n";
    cout<<"enter 3 for choose blue color\n";
    cout<<"enter any two combination only";
    cin>>n1>>n2;
    if((n1==1 && n2==2)||(n1==2 && n2==1)){
        cout<<"you chose red & green \n";
        cout<<"result color is :- yellow";

    } 
    else if((n1==1 && n2== 3)||(n1== 3 && n2== 1))
{

    cout<<"you chose red & blue\n";
        cout<<"result color is :- purple";
}    
 else((n1==2 && n2== 3)||(n1== 3 && n2== 2))
 {
    cout<<"you chose blue & green \n";
    cout<<"result color is :- aqua";
 }
 return 0;
}