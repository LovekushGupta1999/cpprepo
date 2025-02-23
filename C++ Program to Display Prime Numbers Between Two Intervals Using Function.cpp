#include <iostream>
#include <cmath>
using namespace std;

bool isprime(int num){
   if(num <= 1) return false;
     for(int i=2; i<num;i++){
       if(num%i==0){
         return false;}}
         return true;
}

int main() {
  int n1,n2;
  cout<<"enter 2 num for intervals to print prime num of inside it";
  cin>>n1;
  cin>>n2;
  if(n1>n2) 
  swap(n1,n2);
  
  for(int i=n1; i<=n2; i++){
   if(isprime(i)){
     cout << i << " ";}
}
}