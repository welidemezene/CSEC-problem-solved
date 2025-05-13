#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize I/O performance
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n;
        cin >> n; // Length of the array

        vector<int> a(n); // Array to store elements
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        // Check parity of elements at odd indices (1-based)
        bool oddParity = a[0] % 2; // First element (index 0 in 0-based)
        bool evenParity = a[1] % 2; // Second element (index 1 in 0-based)

        bool possible = true;

        // Check if all odd indices have the same parity
        for (int i = 0; i < n; i += 2) {
            if (a[i] % 2 != oddParity) {
                possible = false;
                break;
            }
        }

        // Check if all even indices have the same parity
        for (int i = 1; i < n; i += 2) {
            if (a[i] % 2 != evenParity) {
                possible = false;
                break;
            }
        }

        // Output the result
        if (possible) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}