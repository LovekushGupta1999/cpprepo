#include<iostream>
using namespace std;
int main(){

 int a[]={1,2,3,4,5,6};

 for(int str=0; str<a.size(); ++str)
 {
    for(int end=str; end<a.size(); ++end)
    {
        for(int i=str; i<=end; ++i)
        {
            cout<<a[i];
        }cout<<"  ";
    }cout<<endl;
}return 0;

}