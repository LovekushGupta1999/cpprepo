/*
4444444
4333334
4322234
4321234
4322234
4333334
4444444
*/
#include <iostream>
#include<stdio.h>
int main() {
int j,n=7;

for(int i=1; i<=n;i++){
 
  for(j=1;j<=n;j++){
    if(j==1 || i==1 || i==n || j==n)
     std::cout<<"4";
     else if(j==2 || i==2 || i==n-1 || j==n-1 )
     std::cout<<"3";
      else if(j==3 || i==3 || i==n-2 || j==n-2 )
     std::cout<<"2";
    else if(j==4 || i==4 || i==n-3 || j==n-3 )
     std::cout<<"1";
  }
   std::cout<<std::endl;
  
   
  }
  return 0;
}