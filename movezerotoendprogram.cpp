 #include<iostream>
 #include<vector>
#include<bits/stdc++.h>
using namespace std;
vector<int> move_zerotoend(vector<int> & arr){
      

    for(int i=0; i<arr.size(); ++i){
           for(int j=i+1; j<arr.size(); ++j){
            if(arr[i]==0){
            if(arr[j]!=0){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
                }}
            else {
                break;
            }
    
           }
    } 
    
     return arr;
}

int main(){
    vector<int> arr={0,0,0,3,5,0,9,0};
    move_zerotoend(arr);
    for(int val : arr){
        cout<<val;
    }
    return 0;
}



