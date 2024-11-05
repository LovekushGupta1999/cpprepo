#include<iostream>
using namespace std;
int main(){
    int sum=0,temp=0;

 int a[]={1,2,3,4};

 for(int str=0; str<a.size(); ++str)
 {
    for(int end=str; end<a.size(); ++end)
    {
        for(int i=str; i<=end; ++i)
        {
            cout<<a[i];
            sum=sum+a[i];
        }cout<<" ";

        if(sum>=temp){
            temp=sum;
            
        }
        sum=0;
        
        
        
    }cout<<endl;
}
cout<<temp;
return 0;

}