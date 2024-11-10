#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> dupli_num(vector<int> arr){
     bool a=false;

    for(int i=0; i<arr.size(); ++i){
          
         

        for(int j=i+1; j<arr.size(); ++j){

           if(arr[i]==arr[j]){
             a=true;
              cout<<"duplicate present of "<<arr[i];
               return arr;
           }

        }
     
     

    } 
       if(a==0){
        cout<<"Duplicate not present ";
        return arr;
       }
}


int main(){
    vector<int> arr={1,2,3,4,5,8};

    dupli_num(arr);


}