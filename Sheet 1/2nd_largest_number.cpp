#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int largest, second;
    if(a[0] > a[1])
    {
        largest = a[0];
        second = a[1];
    }
    else
    {
        largest = a[1];
        second = a[0];
    }
    for(int i = 2; i < n; i++)
    {
        if(a[i] > largest)
        {
            second = largest;
            largest = a[i];
        }
        else if(a[i] > second && a[i] != largest)
        {
            second = a[i];
        }
    }
    cout << second << endl;
    return 0;
}