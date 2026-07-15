/*
1
01
101
0101
10101
*/

#include <iostream>
#include<stdio.h>
int main() {
int k,j,n=5;

for(int i=1; i<=n;i++){
  if(i%2==0){
     k=0;
    }
    else{ 
    k=1;}
  
   for(j=1;j<=i;j++){
     std::cout<<k;

     if(k==0){
       k++;}
     else{
       k--;}
  }
   std::cout<<std::endl;
  
   
  }
  return 0;
}