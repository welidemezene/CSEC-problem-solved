#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize I/O performance
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    vector<string> s(t);
    
    // Reading the bus row configurations
    for (int i = 0; i < t; i++) {
        cin >> s[i];
    }

    bool check = false;
    // Loop through each row to check for empty neighbouring seats
    for (int i = 0; i < t; i++) {
        // Check first pair (before the walkway)
        if (s[i][0] == 'o' && s[i][1] == 'o') {
            s[i][0] = s[i][1] = '+';
            check = true;
            break;  // We found the pair, no need to continue checking
        }
        // Check second pair (after the walkway)
        if (s[i][3] == 'o' && s[i][4] == 'o') {
            s[i][3] = s[i][4] = '+';
            check = true;
            break;  // We found the pair, no need to continue checking
        }
    }

    if (check) {
        cout << "YES" << endl;
        // Output the updated bus configuration
        for (int i = 0; i < t; i++) {
            cout << s[i] << endl;
        }
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
