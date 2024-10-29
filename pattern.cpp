#include<iostream>
using namespace std;

int main(){

int r,c,a;
for(r=1; r<=5; r++){
    a=r;
  for(c=1; c<=9; c++)
  {
   if(c>=6-r && c<=4+r)
    {
       
     if(c<=4){
            cout<<a--;
        }
     
        else{
            cout<<a++;
        }

    }
   else{
    cout<<" ";
   }

  }cout<<endl;

}
return 0;
}