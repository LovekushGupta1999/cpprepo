/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include<string>

string reverse(string str){
    for(int i=0; i<=(str.size()-1)/2;++i){
        char temp =str[str.size()-i-1];
        str[str.size()-i-1]=str[i];
        str[i]=temp;
    }
    return str;
    
}
int main() {
  string str="lovekush";
  cout<<reverse(str)<<endl;
  if (str==reverse(str)){
      cout<<"palindrom";
  }
  else{
      cout<<"not palindrom";
  }

    return 0;
}