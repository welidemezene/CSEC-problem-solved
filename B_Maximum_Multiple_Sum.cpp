#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int maxSum = 0;
        int bestX = 2;

        // Iterate over all possible x from 2 to n
        for (int x = 2; x <= n; ++x) {
            int k = n / x; // Number of multiples of x <= n
            int sum = x * k * (k + 1) / 2; // Sum of multiples

            // Update the best x if this sum is greater
            if (sum > maxSum) {
                maxSum = sum;
                bestX = x;
            }
        }

        cout << bestX << '\n';
    }

    return 0;
}