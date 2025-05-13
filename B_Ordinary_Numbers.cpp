#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // Step 1: Precompute all ordinary numbers
    vector<int> ordinaryNumbers;
    
    for (int digit = 1; digit <= 9; digit++) { // Digits from 1 to 9
        long long num = digit;  // Start with the digit itself
        while (num <= 1e9) {  // Ensure it doesn't exceed the limit
            ordinaryNumbers.push_back(num);
            num = num * 10 + digit;  // Create numbers like 1, 11, 111, 1111, ...
        }
    }
    
    // Step 2: Sort the list of ordinary numbers
    sort(ordinaryNumbers.begin(), ordinaryNumbers.end());

    int t;
    cin >> t;
    
    // Step 3: Process each test case
    while (t--) {
        int n;
        cin >> n;
        
        // Step 4: Count how many ordinary numbers are <= n
        int count = upper_bound(ordinaryNumbers.begin(), ordinaryNumbers.end(), n) - ordinaryNumbers.begin();
        
        cout << count << '\n';
    }
    
    return 0;
}
