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