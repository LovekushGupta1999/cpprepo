  
#include <iostream>
using namespace std;

int main() {
   for(int i=0; i<5; i++){
     
       for (int j=0; j<=9;++j){
           if(j>=5-i && j<6+i){
               cout<<"*";
           }
           else{
               cout<<" ";
           }
       }cout<<endl;
   }
    return 0;
}