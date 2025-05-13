#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(long long n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (long long i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        long long x, y;
        cin >> x >> y;
        long long d = x - y;
        
        // If d is prime or has any prime factor ≥ 2, answer is YES
        if (d % 2 == 0 || isPrime(d)) {
            cout << "YES\n";
        } else {
            cout << "YES\n"; // Because d is composite and has a prime factor
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
