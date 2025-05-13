#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize I/O performance
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t; // Number of test cases

    while (t--) {
        long long n, k;
        cin >> n >> k;

        // Check if n >= k (since all numbers must be positive)
        if (n < k) {
            cout << "NO\n";
            continue;
        }

        // Case 1: All numbers are odd
        if ((n % 2 == k % 2) && (n >= k)) {
            cout << "YES\n";
            for (int i = 1; i < k; ++i) {
                cout << "1 "; // Use k-1 ones
            }
            cout << (n - (k - 1)) << "\n"; // Last number is n - (k-1)
            continue;
        }

        // Case 2: All numbers are even
        if ((n % 2 == 0) && (n >= 2 * k)) {
            cout << "YES\n";
            for (int i = 1; i < k; ++i) {
                cout << "2 "; // Use k-1 twos
            }
            cout << (n - 2 * (k - 1)) << "\n"; // Last number is n - 2*(k-1)
            continue;
        }

        // If neither case works, output NO
        cout << "NO\n";
    }

    return 0;
}