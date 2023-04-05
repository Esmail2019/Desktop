#include<iostream>
#include<iomanip>
using namespace std;

int main () {
    float a ,b ;
    cin >> a >> b;
    float sol=(a/b);
    cout << sol << endl;
    cout << fixed << setprecision(3) ;
    cout << sol << endl;    
    return 0;

}