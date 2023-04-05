#include<iostream>
using namespace std;

int g=10;

void getter(){
    cout<<g<<endl;
}

int setter(int x){
    g=x;
    return g;
}

int main () {
    getter();
    return 0;

}