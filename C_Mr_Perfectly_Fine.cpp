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

        int min1 = INT_MAX, min2 = INT_MAX, min3 = INT_MAX;

        for (int i = 0; i < n; i++) {
            int m;
            string s;
            cin >> m >> s;

            if (s == "10") {
                min1 = min(min1, m); // Minimum time for skill 1
            } 
            else if (s == "01") {
                min2 = min(min2, m); // Minimum time for skill 2
            } 
            else if (s == "11") {
                min3 = min(min3, m); // Minimum time for both skills
            }
        }

        int allmin;
        if (min1 == INT_MAX || min2 == INT_MAX) {
            // If either "10" or "01" is missing, we must rely on "11" (if exists)
            allmin = min3;
        } else {
            // Otherwise, we take the minimum of "11" or ("10" + "01")
            allmin = min(min3, min1 + min2);
        }

        if (allmin == INT_MAX) {
            cout << -1 << endl;
        } else {
            cout << allmin << endl;
        }
    }

    return 0;
}
