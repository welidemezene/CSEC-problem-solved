#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        vector<string> grid(3);
        
        // Read the 3x3 Latin square
        for (int i = 0; i < 3; i++) {
            cin >> grid[i];
        }

        // Find the row containing '?'
        for (int i = 0; i < 3; i++) {
            size_t pos = grid[i].find('?');  // Find the '?' position
            if (pos != string::npos) {
                set<char> letters = {'A', 'B', 'C'};
                // Remove existing letters from the set
                for (char ch : grid[i]) {
                    letters.erase(ch);
                }
                cout << *letters.begin() << '\n';  // The remaining letter is the answer
                break;  // Exit since there's only one '?'
            }
        }
    }

    return 0;
}
