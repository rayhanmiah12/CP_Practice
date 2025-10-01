#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, y;
        cin >> x >> y;
        int chocolate = 2 * x;
        int candy = 5 * y;
        if (chocolate > candy) 
        {
            cout << "Chocolate" << endl;
        } 
        else if (chocolate < candy) 
        {
            cout << "Candy" << endl;
        } else 
        {
            cout << "Either" << endl;
        }
    }
    return 0;
}
