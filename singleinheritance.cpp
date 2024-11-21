// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class a{
    protected:
    int x =10;
};
class b: public a
{   int y;
    public:
    void display(){
        cout<<x;
    }
};
int main() {
    b obj;
    obj.display();
  

    return 0;
}


// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


class a{
    protected:
    int x =10;
};


class b : public a
{  protected:
    int y=11;
    public:
     void display(){
        cout<<x<<endl;}
   
};
class c :public a
{   public:
    void display(){
        cout<<x<<endl;
        // cout<<y;
    }
    
};
int main() {
    b obj1;
    c obj;
    obj1.display();
    obj.display();
  

    return 0;
}