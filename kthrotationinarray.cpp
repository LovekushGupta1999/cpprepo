#include<iostream>
#include<bits/stdc++.h>
#include <vector>
using namespace std;

    vector<int> rotating_array(vector<int> arr , int k){
  
     int j;
     int str,itr=0;
     
     
    for(int i=0; i<arr.size(); ++i)
      {  
         str=arr[(arr.size()-1)];
         for(int j=(arr.size()-2); j>=0; --j)
        {
        arr[j+1]=arr[j];
        }
        itr++;
        arr[0]=str;
        if(k==itr){
            cout<<"After kth rotation array is:-";

        for(int i=0; i<5; ++i){
        cout<<arr[i];
     }break;
        }
     cout<<endl;
        
    }return arr;
    }
    int main()
{    int k;
    cout<<"enter kth rotation"<<endl;
    cin>>k;


        vector<int> a = {1,2,3,4,5};
        // for(int val: a){
        //     cin>>val;

        // }
        k=k%(a.size());
        rotating_array(a, k);
   
}