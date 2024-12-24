// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int selection_sort(int a[], int n){
    for(int i=0; i<n; ++i){
        for(int j=i+1; i<n; ++i){
            if(a[i]>a[j]){
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
     for(int i=0; i<n; ++i){
                cout<<a[i];}
}
int main() {
   int a[]={1,5,4,8,7,6};
   int size=sizeof a/sizeof a[0];
   for(int i=0; i<size; ++i){
                cout<<a[i];
    }
   cout<<"after sorting";

   selection_sort(a,size);
            
    return 0;
}