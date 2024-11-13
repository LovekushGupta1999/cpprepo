// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int reverse(int num){
    int rev=0;
    
    while(num>0){
    
    rev=rev*10+num%10;
    num=num%10;
}
    return rev;
}

int main() {
    // Write C++ code here
   
   int n1=1234;
   cout<<reverse(n1);
   return 0;
}