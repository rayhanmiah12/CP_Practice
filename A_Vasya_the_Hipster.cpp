#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if (a < b)
    {
        int s = b - a;
        cout << a << " " << s / 2 << endl;
    }
    else
    {
        int s = a - b;
        cout << b << " " << s / 2 << endl;
    }
    return 0;
}