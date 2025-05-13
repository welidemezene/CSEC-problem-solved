#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll n;
    cin >> n;
    
    if (n % 2050 != 0) {
        cout << "-1\n";
        return;
    }
    
    ll m = n / 2050; // Reduce n to the quotient
    int sum_digits = 0;
    
    while (m > 0) {
        sum_digits += m % 10; // Sum the digits of m
        m /= 10;
    }
    
    cout << sum_digits << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}