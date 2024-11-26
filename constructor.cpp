// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
   class a
   {  int  x;
        public:
      a(int y=5){
          x=y;
      }
       public:
       void getvalue(){
           cout<<x;
       }
   };
  
int main() {
  a obj(10);
  a  obj1(obj);
//   obj1=obj;
 
 
; obj1.getvalue();

    return 0;
}