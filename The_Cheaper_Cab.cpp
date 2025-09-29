#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int b,c;
        cin>>b>>c;
        if(b<c)
        {
            cout << "FIRST" << endl;
        }
        else if(b>c)
        {
            cout << "SECOND" << endl;
        }
        else 
        {
            cout << "ANY" << endl;
        }

    }
}