#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n;
        cin >> n; // Size of the array
        vector<int> nums(n);

        unordered_map<int, int> freq; // Frequency map to count occurrences

        for (int i = 0; i < n; i++) {
            cin >> nums[i];
            freq[nums[i]]++; // Count frequency of each number
        }

        int uniqueNum = 0;
        for (auto &num : freq) {
            if (num.second == 1) { // Find the number that appears only once
                uniqueNum = num.first;
                break;
            }
        }

        for (int i = 0; i < n; i++) {
            if (nums[i] == uniqueNum) {
                cout << i + 1 << endl; // Output 1-based index
                break;
            }
        }
    }

    return 0;
}
