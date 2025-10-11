#include <iostream>
#include <string>
using namespace std;
int main() {
    string S;
    cin >> S;
    
    int n = S.length() / 2;
    S.erase(n, 1);
    
    cout << S;
    return 0;
}