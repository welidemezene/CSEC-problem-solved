#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;

        string current = x; // Start with the initial string x
        int operations = 0;

        // Keep doubling the string x until it is long enough to check for s
        while (current.size() < m) {
            current += current;
            operations++;
        }

        // Now the string is sufficiently long, check if s is a substring
        bool found = false;
        for (int i = 0; i < 2; ++i) { // Only extend at most one extra time
            if (current.find(s) != string::npos) {
                found = true;
                break;
            }
            current += current; // Double it one more time if necessary
            operations++;
        }

        if (found) {
            cout << operations << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}
