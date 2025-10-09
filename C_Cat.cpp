#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    string s;
    cin >> n >> s;
    string result = "";
    for (int i = 0; i < n; i++) {
        if (s[i] == 'n' && s[i + 1] == 'a') 
        {
            result += "nya";
            i++;
        } else 
        {
            result += s[i];
        }
    }
    cout << result << endl;
    return 0;
}