// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int selection_sort(int a[], n){
    for(int i=0; i<n; ++i){
        for(int j=i+1; i<n; ++i){
            if(a[i]>a[j]){
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
}
int main() {
   int a[]={1,5,4,8,7,6};
   int size=sizeof a/sizeof a[0];
   int b[]=selection_sort(a,size);
            for(int i=0; i<size; ++i){
                cout<<a[i];}
    return 0;
}