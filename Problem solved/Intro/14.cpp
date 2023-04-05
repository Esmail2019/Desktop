#include<iostream>
#include<typeinfo>
using namespace std;

void  fun(auto a ){
    cout<<typeid(a).name();
}


int main () {
  
    int x=4.5;
    fun(x);
    return 0;

}