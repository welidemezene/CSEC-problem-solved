#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int badDays = 0;
        int minPrice = INT_MAX;

        // Iterate from the end to the start
        for (int i = n - 1; i >= 0; i--) {
            if (a[i] > minPrice) {
                badDays++;
            } else {
                minPrice = a[i];
            }
        }

        cout << badDays << "\n";
    }

    return 0;
}