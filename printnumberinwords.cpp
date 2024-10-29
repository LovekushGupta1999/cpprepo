#include <iostream>
using namespace std;
int main(){
     int num, n,rever=0;
num=1243;
// while(num>0){
   
//     rever=rever*10+num%10;
//     num=num/10;

// }
while (rever>0)
{
   n=rever%10;
   rever=rever/10;
   
switch (n)
{
case 1: cout<<"one";
    
    break;
    case 2: cout<<"two";
    /* code */
    break;
    case 3: cout<<"three";
    /* code */
    break;
    case 4: cout<<"four";
    break;
      case 5 : cout<<"five";
    /* code */
    break;  
    case 6: cout<<"six";
    /* code */
    break; 
    case 7 : cout<<"seven";
    /* code */
    break;  case 8 : cout<<"eight";
    /* code */
    break;  case 9 : cout<<"nine"; 
   
    break;

default:cout<<"wrong input";
    break;
}

}

}