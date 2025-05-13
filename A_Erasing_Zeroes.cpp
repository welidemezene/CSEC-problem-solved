#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize I/O performance
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int m = -1, n = -1;

        // Find the first '1'
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1') {
                m = i;
                break;
            }
        }

        // Find the last '1'
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == '1') {
                n = i;
                break;
            }
        }

        // If no '1's are found, output 0
        if (m == -1 || n == -1) {
            cout << 0 << endl;
            continue;
        }

        // Count the number of '0's between the first and last '1'
        int count = 0;
        for (int i = m; i <= n; i++) {
            if (s[i] == '0') {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}