#include<iostream>
using namespace std;

void last_digit(int n){
    int last;
    last=n%10;
    cout<< last;

}

int main () {
    int n;
    cin >> n;
    last_digit(n);
return 0;
}