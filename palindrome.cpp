#include <iostream>
using namespace std;
int main(){
    int num1=353,a,rev=1;
   int num=num1;
    
while(num>0){
    a=num%10;
    rev=rev*10+a;
    num=num/10;
}
if(rev==num1)
{
    cout<<"palindrome";
}
else{
    cout<<"not palindrome";
}

}