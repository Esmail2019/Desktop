#include <iostream>
using namespace std;

int main()
{
    int a;
    float b;
    double c;
    long long l;
    string d;
    cin >> a >> b >> c >> l >> d;
    cout << b / c << endl;
    cout << b / a << endl;
    cout << c / a << endl;
    cout << (c / a) + l << endl;
    cout << d << " " << d[3] << endl;
    return 0;
}
