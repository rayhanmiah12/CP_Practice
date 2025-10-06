#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int rem = n%3;
        if(rem == 1)
        {
            cout << 2 << endl;
        }
        else if(rem == 0)
        {
            cout << 0 << endl;
        }
        else
        { 
            cout << 1 << endl;
        }
    }
    return 0;
}