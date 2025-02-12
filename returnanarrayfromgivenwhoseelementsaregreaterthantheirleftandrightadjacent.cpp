#include<iostream>
using namespace std;

int greater_ele(int arr[],int n){
    for(int i=0; i<n;i++){
        if(arr[i-1]<arr[i]&& arr[i]>arr[i+1]){

        }
    }

}

int main(){
    int arr[]={4,9,6,8,10,2,4};
    int size=sizeof arr /sizeof (int);
    for (int i=0;i<size;i++){
        cout<<arr[i];
    } 
    greater_ele(arr,size);
    for(int i=0; i<size; i++){
        if(i==size-1){
            cout<<arr[i];
        }
        else{
            cout<<arr[i];
        }
    }

}