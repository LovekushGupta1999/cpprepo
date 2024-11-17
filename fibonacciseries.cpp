#include<iostream>
using namespace std;

int main(){
    int a=0, b=1, term=10, c;
    cout<<a<<"\t";
    cout<<b<<"\t";
    while(term-2>0){
c=a+b;
cout<<c<<"\t";
a=b;
b=c;

term--;

    }
    
}

int main(){
    int term=0, num=8, t1,t2,next ;
   while(term-2<=num){
       if(term==0){
           cout<<term<<"\t";
           t1=term;
           term++;
       }
       if(term==1){
           cout<<term<<"\t";
           t2=term;
           term++;
       }
        next=t1+t2;
        cout<<next<<"\t";
        t1=t2;
        t2=next;
     term++;
       
   }
}