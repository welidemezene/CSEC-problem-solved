#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; // Read the number of test cases

    while (t--) {
        int n;
        cin >> n; // Read the size of the array

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i]; // Read the array elements
        }

        // Initialize left and right boundaries
        int left = a[0], right = a[0];

        // Check if the array forms a valid sequence
        bool isValid = true;
        for (int i = 1; i < n; i++) {
            if (a[i] + 1 == left) {
                left = a[i]; // Extend sequence to the left
            }
            else if (a[i] - 1 == right) {
                right = a[i]; // Extend sequence to the right
            }
            else {
                isValid = false; // Invalid sequence
                break;
            }
        }

        if (isValid) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
