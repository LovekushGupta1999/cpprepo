#include<iostream>
using namespace std;

int fibonacci_series(int n){
    if(n==0){
        return 0;
    }
    int result=fibonacci_series(n-1)+fibonacci_series(n-2);
}
int main(){
 int series_size=10;
 fibonacci_series(series_size)  ;

}