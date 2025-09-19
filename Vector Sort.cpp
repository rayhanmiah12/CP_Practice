#include <iostream> 
#include <vector>  
#include<algorithm>       
using namespace std;
int main() {
    int a; 
    cin >> a; 

    vector<int> v; 
    for (int j = 0; j < a; j++) 
    {
        int num;
        cin >> num;       
        v.push_back(num);  
    }
    sort(v.begin(), v.end());
    for (int j = 0; j < v.size(); j++)
     {
        cout << v[j] << endl; 
    }

    return 0;
}
