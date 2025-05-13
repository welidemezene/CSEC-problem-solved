#include <iostream>
using namespace std;

typedef long long ll;

// Function to check if the sum of leaves is even or odd
void solve() {
    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        
        // Compute the range of years contributing leaves
        ll a = max(1LL, n - k + 1);
        
        // Sum of leaves from a to n
        ll total_leaves = (n * (n + 1) / 2) - ((a - 1) * a / 2);
        
        // Check if the total number of leaves is even or odd
        if (total_leaves % 2 == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
