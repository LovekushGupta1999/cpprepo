/*
Output
*
**
***
****
*****
****
***
**
*
*/


#include <iostream>
#include<stdio.h>
int main() {
int n=5;
int count=0;
for(int i=1; i<=n;){
  count++;
  for(int j=1;j<=i;j++){
  std::cout<<"*";
  }
  if(i==0){
    break;
    }
  else if(count>=5 && i>0){
    i--;
    }
    else{
    i++;
    }
   
   std::cout<<std::endl;
  }
  return 0;
}