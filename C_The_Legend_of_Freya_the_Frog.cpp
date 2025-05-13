#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long x, y, k;
        cin >> x >> y >> k;

        // Calculate the number of moves required for x and y directions
        long long moves_x = (x + k - 1) / k;
        long long moves_y = (y + k - 1) / k;

        // Determine the total number of moves
        long long total_moves;
        if (moves_x > moves_y) {
            total_moves = 2 * moves_x - 1;
        } else if (moves_y > moves_x) {
            total_moves = 2 * moves_y;
        } else {
            total_moves = 2 * moves_x;
        }

        cout << total_moves << '\n';
    }
    return 0;
}