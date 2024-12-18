// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int bubble_sort(int a[7],int n){
for(int i=0; i<n;++i){
    for(int j=0;j<n-1-i;++j){
        if(a[j]>a[j+1]){
           int temp=a[j+1];
            a[j+1]=a[j];
            a[j]=temp;
        }
    }
} return a;
}
int main() {
int a[]={1,2,3,4,1,5,4};
int size=sizeof a/sizeof a[0];
int b[]=bubble_sort(a,size);
 for(int j=0;j<size;++j){
     cout<<b[j];
 }

    return 0;
}