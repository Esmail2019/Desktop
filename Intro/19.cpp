#include<iostream>
using namespace std;

  int dectoHex(int a){
    cout<<std::hex;
    cout<<a<<endl;
    return a;
}


int main () {
     int a;
     cin >>a ;
     dectoHex(a);

return 0;
}