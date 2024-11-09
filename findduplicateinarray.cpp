#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> dupli_num(vector<int> arr){

    for(int i=0; i<arr.size(); ++i){
          
          bool a=false;

        for(int j=i+1; j<arr.size(); ++j){

           if(arr[i]==arr[j]){
             a=true;
           }

        }
       if(a){
        cout<<"duplicate present if "<<arr[i];
       }
       else{
        cout<<"Duplicate not present ";
        return arr;
       }
     

    }
}


int main(){
    vector<int> arr={1,2,3,4,1,6};

    dupli_num(arr);


}