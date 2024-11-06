// Online C++ compiler to run C++ program online
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int sum=0,temp=0;
    int num=4;

 int a[num]={1,-2,3,4};

 for(int str=0; str<num; ++str)
 {
    for(int end=str; end<num; ++end)
    {
       
           
            sum=sum+a[end];
       if(sum>=temp){
            temp=sum;
            
        }
        
         }sum=0;
}
cout<<temp;
return 0;
}

