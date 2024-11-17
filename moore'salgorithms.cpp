#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> majority_ele(vector<int> arr){

int ans, frq=0;
 for(int i=0; i<arr.size(); ++i){
     if(frq==0){
        ans=arr[i];
     }
     if(ans==arr[i]){
        frq++;

     }
     else{
        frq--;
     }
 }   int count=0;
    for(int i=0; i<arr.size(); ++i){
        if(ans==arr[i]){
            count++;
        }
     }
     if(count>(arr.size()/2))
       {
        return arr;
       }
       else{
        // return -1;
       }
}
int main(){
    vector<int> arr={1,2,1,4,1,1};

     cout<<"majority element is:"; majority_ele(arr);


}