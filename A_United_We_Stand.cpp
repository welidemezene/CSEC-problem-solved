#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void solve() {
    int n = 0;
    cin >> n; 
    vector<int> inp(n);
    for (auto& x : inp) cin >> x;
    
    sort(inp.begin(), inp.end()); // Sort the array in non-decreasing order
    
    // If all elements are the same, it's impossible to divide them into two valid groups
    if (inp.back() == inp[0]) {
        cout << "-1\n";
        return;
    }
    
    int it = 0;
    while (inp[it] == inp[0]) it++; // Find the index where elements start to be different
    
    cout << it << " " << n - it << "\n";
    for (int j = 0; j < it; ++j) cout << inp[j] << " "; // First group (b)
    cout << "\n";
    for (int j = it; j < n; ++j) cout << inp[j] << " "; // Second group (c)
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t = 0;
    cin >> t;
    while (t--) solve();
    
    return 0;
}
