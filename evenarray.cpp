#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n;
        cin >> n; // Length of the array
        vector<int> a(n);

        int oddIndexMismatch = 0; // Count of odd indices with even numbers
        int evenIndexMismatch = 0; // Count of even indices with odd numbers

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (i % 2 == 0 && a[i] % 2 != 0) {
                evenIndexMismatch++; // Even index, odd value
            } else if (i % 2 != 0 && a[i] % 2 == 0) {
                oddIndexMismatch++; // Odd index, even value
            }
        }

        // To fix mismatches, the number of mismatched indices must be equal
        if (oddIndexMismatch == evenIndexMismatch) {
            cout << oddIndexMismatch << endl; // Minimum swaps required
        } else {
            cout << -1 << endl; // Not possible
        }
    }

    return 0;
}
