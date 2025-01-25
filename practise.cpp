#include<iostream>
using namespace std;
#include<array>

int main(){
 array<int,10>b={1,2,3,4,5,};
   for(int i=0; i<b.size(); i++){
       cout<<b.at(i);
   }
    for(auto p:b){
        cout<<(p);
    }
    return 0;
}