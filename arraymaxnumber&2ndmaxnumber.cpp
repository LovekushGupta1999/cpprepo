#include <iostream>
using namespace std;

int main() {
  int maxnum=0;
  int secmax;

  int a[]={23,45,123,8,79,165,150};
  for(int i=0; i<7; ++i)
  {
    if(a[i]>maxnum){
        maxnum=a[i];
       }
  }
  for(int i=0; i<7; ++i)
  {
    if(a[i]>secmax && a[i]!=maxnum)
    {
        secmax=a[i];
    }
    
  
  }
  cout<<maxnum<<endl;
  cout<<secmax;
  return 0;
}