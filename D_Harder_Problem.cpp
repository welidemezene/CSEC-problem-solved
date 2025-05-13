#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int& x : a) cin >> x;

        vector<int> freq(n + 1, 0); // Frequency of each number in b
        vector<int> b;
        int max_freq = 0;

        for (int i = 0; i < n; ++i) {
            int current_a = a[i];
            // If setting b[i] to current_a makes it a mode, use it
            if (freq[current_a] + 1 >= max_freq) {
                b.push_back(current_a);
                freq[current_a]++;
                max_freq = max(max_freq, freq[current_a]);
            } else {
                // Otherwise, find a number that has the current max_freq
                // To simplify, we use a new unique number not present before
                int new_num = -1;
                for (int j = 1; j <= n; ++j) {
                    if (freq[j] == 0) {
                        new_num = j;
                        break;
                    }
                }
                if (new_num == -1) new_num = 1; // Fallback, though not expected
                b.push_back(new_num);
                freq[new_num]++;
                // Since new_num was unused, its frequency is 1, so max_freq remains the same
                // Check if current_a is a mode
                if (freq[current_a] >= max_freq) {
                    max_freq = freq[current_a];
                }
            }
        }

        for (int x : b) {
            cout << x << ' ';
        }
        cout << '\n';
    }
    return 0;
}