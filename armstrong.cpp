#include <iostream>
using namespace std;
int main(){
    int num1=153,a,sum=0;
   int num=num1;
    
while(num>0){
    a=num%10;
    sum=sum+(a*a*a);
    num=num/10;
}
if(sum==num1)
{
    cout<<"armstrong";
}
else{
    cout<<"not armstrong";
}

}