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

        // Calculate the optimal c2 (number of 2-burle coins)
        int c2 = n / 3;

        // Calculate c1 (number of 1-burle coins)
        int c1 = n - 2 * c2;

        // Check if adjusting c2 by 1 gives a better result
        if (abs(c1 - c2) > abs((n - 2 * (c2 + 1)) - (c2 + 1))) {
            c2 += 1;
            c1 = n - 2 * c2;
        }

        // Output the result
        cout << c1 << " " << c2 << "\n";
    }

    return 0;
}