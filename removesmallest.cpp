#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n; // Size of the array
        vector<int> nums(n);
        
        // Input elements
        for (int j = 0; j < n; j++) {
            cin >> nums[j];
        }

        // Step 1: Sort the array
        sort(nums.begin(), nums.end());

        // Step 2: Check consecutive differences
        bool possible = true;
        for (int k = 1; k < nums.size(); k++) {
            if (nums[k] - nums[k - 1] > 1) {
                possible = false;
                break;
            }
        }

        // Step 3: Output the result
        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
