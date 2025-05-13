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
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long prefix_sum = 0;
        unordered_map<long long, int> count_map;
        int good_prefix_count = 0;

        for (int i = 0; i < n; i++) {
            prefix_sum += a[i];
            // Check if current element satisfies the condition
            if (2LL * a[i] == prefix_sum) {
                good_prefix_count++;
            }
            // Update the frequency map
            count_map[a[i]]++;
        }

        cout << good_prefix_count << endl;
    }

    return 0;
}
