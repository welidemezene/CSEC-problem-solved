#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize I/O performance
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int max_len = 1; // Initialize to 1, as the minimum length of a valid subarray is 1
    int left = 0;    // Start of the current non-decreasing subarray

    for (int right = 1; right < n; ++right) {
        // If the current element is less than the previous, the sequence is broken
        if (nums[right] <= nums[right - 1]) {
            left = right; // Reset the start of the subarray
        }
        // Update the maximum length of the non-decreasing subarray
        max_len = max(max_len, right - left + 1);
    }

    cout << max_len; // Output the result

    return 0;
}