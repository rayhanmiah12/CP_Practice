#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int steps =a/5;
    if(a%5!=0)
    {
        steps++;
    }
    cout << steps << endl;
    return 0;
}