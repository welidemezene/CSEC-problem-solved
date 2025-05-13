#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int t;
    cin >> t; // Read the number of test cases
    while (t--) {
        int n, m;
        cin >> n >> m; // Read the number of words and their length
        vector<string> words(n);
        for (int i = 0; i < n; ++i) {
            cin >> words[i]; // Read each word
        }

        int minDifference = INT_MAX; // Initialize the minimum difference to a large value

        // Compare all pairs of words
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                int difference = 0; // Initialize the difference for the current pair
                for (int k = 0; k < m; ++k) {
                    // Calculate the absolute difference between corresponding characters
                    difference += abs(words[i][k] - words[j][k]);
                }
                // Update the minimum difference if the current difference is smaller
                if (difference < minDifference) {
                    minDifference = difference;
                }
            }
        }

        // Output the minimum difference for the current test case
        cout << minDifference << endl;
    }
    return 0;
}