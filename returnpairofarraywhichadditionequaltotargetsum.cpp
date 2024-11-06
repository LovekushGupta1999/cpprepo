// Online C++ compiler to run C++ program online
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int target=9; 
    int num=10;

 int a[num]={1,2,3,4,5,6,7,8,9,10};

 for(int i=0; i<num; ++i)
 {
   for(int j=i+1; j<num;++j){
    
    if(a[i]+a[j]==target)
    {
        cout<<i<<"&"<<j<<endl;
    }
   }
}

return 0;
}

