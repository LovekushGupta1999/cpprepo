// Online C++ compiler to run C++ program online
#include<iostream>
using namespace std;
int main(){
    int loc,dist;
    cout<<"even and odd number path is shortest path considered here\n";
    cout<<"enter your location by given number 1 t o 8\n ";
    cin>>loc;
    cout<<"enter your destination by given number 1 t o 8\n ";
    cin>>dist;

   
for(int j=1; j<=8; j++){
if(loc==j){
    if(loc<dist){
        cout<<"your path is:-";
        for( int i=loc; i<dist; i+=2){
            cout<<i<<"->";

        }
        cout<<dist<<"(this is your destionation)";

               }
    else{
        cout<<"your path is:- ";
        for( int i=loc; i>dist; i-=2){
            cout<<i<<"->";

        }
        cout<<dist<<"(this is your destionation)";
         } }
}
return 0;
}