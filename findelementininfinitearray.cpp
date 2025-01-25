#include<iostream>
using namespace std;
#include<vector>
  
 

int binary_search(vector<int> a, int target, int st ,int end){
       if(st<end){
           int mid=st+(end-st)/2;
           if(a[mid]==target){
            return mid;
           }
           else if(a[mid]>target){
             return binary_search(a,target,mid+1,end);

           }
           else{
            return binary_search(a,target,st,mid-1);
           }
       }
       else{
          return -1;
       }
}
 int search_ele(vector<int> a, int target, int st , int end){
  label:
    while(target>a[end]){
       int temp=end+1;
        end=end+(end-st+1)*2;
        st=temp;
    }
    int result=binary_search(a, target, st,end);
    if(result==-1){
         goto label;
    }
    else{
      return result;
    }
    
  }




int main() {
   vector<int> a={1,5,4,8,7,6,7,8,9,10,11,12,13,14,15,16,17};
   int target =17;
  
  
 int   st=0;
     int end=1;
   cout<<search_ele(a, target,st ,end);
            
    return 0;
}