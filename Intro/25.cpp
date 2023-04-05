#include <iostream>
using namespace std;

int main()
{
    //a is the first term of A.P.
    //d is the common  differerence
    int a, d, n;
    cin >> a >> d >> n;
    int nth = a + ((n - 1) * d);
    cout << nth << endl;

    return 0;
}