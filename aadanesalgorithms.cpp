// Online C++ compiler to run C++ program online
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int sum=0,temp=0;
    int num=4;

 int a[num]={1,-2,3,4};

 for(int i=0; i<num; ++i)
 {
 
       
           
            sum=sum+a[i];
       if(sum>temp){
            temp=sum;
            
        }
        if(sum<0){
            sum=0;
        }
        
         
}
cout<<temp;
return 0;
}

