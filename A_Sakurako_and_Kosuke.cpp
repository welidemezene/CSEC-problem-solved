#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases
    
    while (t--) {
        int x;
        cin >> x;
        
        // Find y to maximize gcd(x, y) + y
        if (x % 2 == 0) {
            // If x is even, use y = x / 2
            cout <<"Sakurako" << endl;
        } else {
            // If x is odd, use y = x - 1
            cout <<"Kosuke" << endl;
        }
    }
    
    return 0;
}
