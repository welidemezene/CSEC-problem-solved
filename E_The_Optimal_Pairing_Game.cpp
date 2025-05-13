#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int j = 0; j < n; j++) {
            cin >> arr[j];
        }

        unordered_map<int, int> freq; // Frequency map
        for (int num : arr) {
            freq[num]++;
        }

        int score = 0;
        for (auto &[num, count] : freq) {
            if (count > 0) { // Only process if the frequency is non-zero
                int complement = k - num;
                if (freq.find(complement) != freq.end() && freq[complement] > 0) {
                    int pairs = min(count, freq[complement]);
                    if (num == complement) { // Special case: num == complement
                        pairs /= 2; // Avoid over-counting
                    }
                    score += pairs;
                    freq[num] -= pairs;
                    freq[complement] -= pairs;
                }
            }
        }

        cout << score << endl; // Output result for the current test case
    }

    return 0;
}
