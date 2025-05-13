#include <bits/stdc++.h>
using namespace std;

// Function to calculate score for a single grid
int calculateScore(const vector<string>& grid) {
    int score = 0;
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            if (grid[i][j] == 'X') {
                // Determine the ring value
                int ring = min({i, j, 9 - i, 9 - j}) + 1; // Distance from closest edge
                score += ring;
            }
        }
    }
    return score;
}

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        vector<string> grid(10);
        for (int i = 0; i < 10; ++i) {
            cin >> grid[i];
        }
        cout << calculateScore(grid) << endl;
    }
    return 0;
}
