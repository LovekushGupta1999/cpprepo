#include <iostream>
#include <vector>
using namespace std;

vector<int> findDistinct(vector<int> arr) {
   vector<int> ans;
  int temp=0;
        for (int i = 0; i < arr.size(); i++){

            if(arr[i]==(-1)){
                continue;
            }
            bool k=false;
             for (int j = i+1; j < arr.size(); j++){

               
                if(arr[i]==arr[j]){
                   k=true;
                   arr[j]=(-1);
                }

             }
             if(k!=1){
             ans[temp++]=arr[i];
             }
               
        }



 return ans;

}

int main() {
    vector<int> arr = {12, 10, 9, 45, 2, 10, 9, 4};
    vector<int> res = findDistinct(arr);

    for (int ele : res)
        cout << ele << " ";
    return 0;
}