#include <iostream> 
#include <vector>  
#include<algorithm>       
using namespace std;
int main() {
    int a; 
    cin >> a; 

    vector<int> v(a); 
    for (int j = 0; j < a; j++) 
    {
        cin >> v[j];
    }
    sort(v.begin(), v.end());
    for (int j = 0; j < a; j++)
     {
        cout << v[j] << " "; 
    }

    return 0;
}
