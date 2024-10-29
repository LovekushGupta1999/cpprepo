#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cin>>n1>>n2;
    for(int i=n2 ;; n2+=n2 )
{
    if(n2%n1==0)
    {
        cout<<n2;
        break;
    }


}
return 0;
}