#include <iostream>
#include <vector>
using namespace std;

vector<int> majorityele_sortedarr(vector<int> arr) {


         int frq=0;
         int n=(arr.size()/2);
         int preterm=arr[0];
         for(int val: arr){
            if(val==preterm){
                frq++;
            }
            else{
                preterm=val;
                frq=(-1);
            }
            if(frq>n){
                cout<<"majority element is:"<<val;
                break;
            }
          
         }




return arr;
}

int main() {
    vector<int> arr = {10, 10, 10, 10, 10, 12, 12, 13};
    majorityele_sortedarr(arr);

   
    return 0;
}