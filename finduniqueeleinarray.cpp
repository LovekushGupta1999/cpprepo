#include <iostream>
#include <vector>
using namespace std;

vector<int> findDistinct(vector<int> &arr) {
    int temp=0;

        for (int i = 0; i < arr.size(); i++){

            if(arr[i]==(-1)){
                continue;
            }

             for (int j = i+1; j < arr.size(); j++){

                if(arr[i]!=arr[j]){
                    arr[temp++]=arr[i];
                }
                if(arr[i]==arr[j]){
                   arr[temp++]=arr[i];
                   arr[j]=(-1);
                }

             }


        }



 return arr;

}

int main() {
    vector<int> arr = {12, 10, 9, 45, 2, 10, 10, 45};
    vector<int> res = findDistinct(arr);

    for (int ele : res)
        cout << ele << " ";
    return 0;
}