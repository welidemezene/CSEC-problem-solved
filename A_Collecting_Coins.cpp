#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c, n;
        cin >> a >> b >> c >> n;

        // Find the maximum number of coins among the three sisters
        long long max_coins = max({a, b, c});

        // Calculate the total coins required to make all sisters have max_coins
        long long required = (max_coins - a) + (max_coins - b) + (max_coins - c);

        // Check if n is sufficient and the remaining coins are divisible by 3
        if (n >= required && (n - required) % 3 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}