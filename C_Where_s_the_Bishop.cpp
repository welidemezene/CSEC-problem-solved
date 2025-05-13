#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> lines;
    string line;
    while (getline(cin, line)) {
        lines.push_back(line);
    }

    int t = stoi(lines[0]);
    int ptr = 1;

    for (int test = 0; test < t; test++) {
        // Skip empty lines before the test case
        while (ptr < lines.size() && lines[ptr].empty()) {
            ptr++;
        }

        vector<string> grid;
        for (int i = 0; i < 8; i++) {
            if (ptr >= lines.size()) break;
            grid.push_back(lines[ptr]);
            ptr++;
        }

        // Check each possible (r, c) between 2 and 7 inclusive (1-based)
        for (int r = 2; r <= 7; r++) {
            for (int c = 2; c <= 7; c++) {
                bool valid = true;
                for (int i = 1; i <= 8; i++) {
                    for (int j = 1; j <= 8; j++) {
                        bool isDiagonal = (i - j == r - c) || (i + j == r + c);
                        char cell = grid[i-1][j-1];
                        if (isDiagonal) {
                            if (cell != '#') {
                                valid = false;
                                break;
                            }
                        } else {
                            if (cell != '.') {
                                valid = false;
                                break;
                            }
                        }
                    }
                    if (!valid) break;
                }
                if (valid) {
                    cout << r << " " << c << endl;
                    goto next_test;
                }
            }
        }
        next_test:;
    }

    return 0;
}