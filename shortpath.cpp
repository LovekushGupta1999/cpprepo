#include<iostream>
using namespace std;
int main(){
    int loc,dist;
    cout<<"even and odd number path is shortest path considered";
    cout<<"enter your location by given number 1 t o 8 ";
    cin>>loc;
    cout<<"enter your destination by given number 1 t o 8 ";
    cin>>dist;

   
for(int j=1; j<=8; j++){
if(loc==j){
    if(loc<dist){
        cout<<"your location is"<<loc;
        for( int i=loc; i<dist; i+=2){
            cout<<"->i";

        }
        cout<<dist<<"your destionation";

               }
    else(){
        cout<<"your location is"<<loc;
        for( int i=loc; i>dist; i-=2){
            cout<<"->i";

        }
        cout<<dist<<"your destionation";
         }

    
         }

}











    }



    

