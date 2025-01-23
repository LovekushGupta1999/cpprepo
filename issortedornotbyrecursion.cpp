// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
static int x;
 int is_sort(int arr[], int n ){
     if(n==0){
         return n;}
     int y=is_sort(arr, (n-1));
     if(arr[y]>arr[n]){
         x++;
        }
     return n;
   
 }
 

int main() {
    int arr[]={1,2,3,4,5};
    int size=sizeof arr/sizeof arr[0];
    is_sort(arr,size-1);
 if(x==0){
     cout<<"sorted";
 }
 else{
     cout<<"not sorted";
 }
 return 0;
}