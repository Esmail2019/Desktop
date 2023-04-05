#include<iostream>
#include<math.h>
using namespace std;

int main () {
    int x,y;
    cin >> x>>y;
    int p=x+y;
    int q=x-y;
    int r=x*y;
    double s=double (x)/y;
    double t=(x/y);
    auto u=x%y;
    int v=pow(x,y);
    cout<<p<<" "<<q<<" "<<r<<" "<<s<<" "<<t<<" "<<u<<" "<<v;



return 0;
}