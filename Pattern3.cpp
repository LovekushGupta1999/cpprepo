/*
*****
*   *
*   *
*   *
*****
*/


#include <iostream>
#include<stdio.h>
int main() {
int j,n=5;

for(int i=1; i<=n;i++){
  if(i==1 || i==n){
  for(j=1;j<=n;j++){
     std::cout<<"*";
  }}
  else{
  for(j=1;j<=n;j++){
    if(j==1 || j==n)
     std::cout<<"*";
     else
     std::cout<<" ";
  }}
   std::cout<<std::endl;
  
   
  }
  return 0;
}