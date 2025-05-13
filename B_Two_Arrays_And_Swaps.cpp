#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n), b(n);

        // Input arrays a and b
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        // Sort a in ascending order and b in descending order
        sort(a.begin(), a.end());
        sort(b.rbegin(), b.rend());

        // Perform up to k swaps
        for (int i = 0; i < k && i < n; i++) {
            if (a[i] < b[i]) {
                swap(a[i], b[i]); // Swap if b[i] is greater
            } else {
                break; // No more beneficial swaps
            }
        }

        // Calculate the sum of array a
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += a[i];
        }

        // Output the result for the current test case
        cout << sum << endl;
    }

    return 0;
}
