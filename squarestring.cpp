#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;  // Number of test cases
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;
        
        int n = s.length();  // Length of the string
        
        // Check if the string is square
        if (n % 2 == 0) {  // Length must be even
            string first_half = s.substr(0, n / 2);
            string second_half = s.substr(n / 2);
            if (first_half == second_half) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            cout << "NO" << endl;  // Odd-length strings cannot be square
        }
    }
    
    return 0;
}
