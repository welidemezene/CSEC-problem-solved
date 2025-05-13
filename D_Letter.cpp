#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> grid(n);

    for (int i = 0; i < n; i++) {
        cin >> grid[i];
    }

    // Initialize bounds
    int r_min = n, r_max = 0, c_min = m, c_max = 0;

    // Find the bounds of the rectangle containing all shaded squares
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '*') {
                r_min = min(r_min, i);
                r_max = max(r_max, i);
                c_min = min(c_min, j);
                c_max = max(c_max, j);
            }
        }
    }

    // Output the required rectangle
    for (int i = r_min; i <= r_max; i++) {
        for (int j = c_min; j <= c_max; j++) {
            cout << grid[i][j];
        }
        cout << endl;
    }

    return 0;
}
