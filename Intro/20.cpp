#include<iostream>
#include<iomanip>
using namespace std;

void scientific(double a){
    cout<<std::scientific;
    cout<<std::setprecision(4);
    cout<<a;
}

int main () {
     double a=5.43;
     scientific(5.43);

return 0;
}