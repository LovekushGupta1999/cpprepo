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
  int num;
//   cout<<"enter 2 num for intervals to print prime num of inside it";
  cin>>num;
  bool res=false;
  int n1=2;
  int n2=num-2;
  while(n2>=n1){
      
          if(isprime(num) && n1+n2==num && isprime(n1) && isprime(n2) ){
              cout<<n1<<" "<<n2<<endl;
              res=true;
          
      }
      n1++;
      n2--;
  }
  if(res!=true){
      cout<<"no combination possible";
  }

  
return 0;
}