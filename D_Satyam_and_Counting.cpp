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
        vector<int> x0, x1;
        for (int i = 0; i < n; ++i) {
            int x, y;
            cin >> x >> y;
            if (y == 0) x0.push_back(x);
            else x1.push_back(x);
        }

        sort(x0.begin(), x0.end());
        sort(x1.begin(), x1.end());

        long long ans = 0;

        // Count triangles with right angle at y=1
        for (int x : x1) {
            auto it_left = lower_bound(x0.begin(), x0.end(), x);
            auto it_right = upper_bound(x0.begin(), x0.end(), x);
            int left = it_left - x0.begin();
            int right = x0.end() - it_right;
            ans += 1LL * left * right;
        }

        // Count triangles with right angle at y=0
        for (int x : x0) {
            auto it_left = lower_bound(x1.begin(), x1.end(), x);
            auto it_right = upper_bound(x1.begin(), x1.end(), x);
            int left = it_left - x1.begin();
            int right = x1.end() - it_right;
            ans += 1LL * left * right;
        }

        cout << ans << '\n';
    }

    return 0;
}