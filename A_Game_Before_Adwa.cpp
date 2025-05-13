#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main() {
    int t;
    cin >> t; // number of test cases
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> x(n);
        for (int i = 0; i < n; i++) {
            cin >> x[i];
        }
        
        // Frequency map to count occurrences of each number
        unordered_map<int, int> freq;
        for (int i = 0; i < n; i++) {
            freq[x[i]]++;
        }
        
        int score = 0;
        
        // Process each number in the range 1 to n
        for (int i = 1; i <= n; i++) {
            if (freq[i] > 0) {
                int complement = k - i; // the number that would sum with i to make k
                if (complement >= 1 && complement <= n && freq[complement] > 0) {
                    // If complement exists and has a non-zero frequency
                    int pairs = min(freq[i], freq[complement]);
                    if (i == complement) {
                        // If the number is the same as its complement, we can form pairs
                        pairs /= 2;  // We can pair only half the occurrences with themselves
                    }
                    // Each pair adds 1 to the score
                    score += pairs;
                    freq[i] -= pairs;
                    freq[complement] -= pairs;
                }
            }
        }
        
        cout << score << endl;  // Output the score for the current test case
    }

    return 0;
}
