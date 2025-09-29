#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        int sum = 0;
        while(n>0)
        {
            sum += n%10;
            n /= 10;
        }
        if(sum%2==0)
        {
            cout << "Even" << endl;
        }
        else
        {
            cout << "Odd" << endl;
        }
    }
    return 0;
}