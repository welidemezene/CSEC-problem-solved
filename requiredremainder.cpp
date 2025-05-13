#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        long long x, y, n;
        cin >> x >> y >> n;

        // Find the maximum k
        long long k = n - (n % x) + y;

        // If k > n, subtract x to ensure 0 <= k <= n
        if (k > n) {
            k -= x;
        }

        cout << k << endl;
    }

    return 0;
}
