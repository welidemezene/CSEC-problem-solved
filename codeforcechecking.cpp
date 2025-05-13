#include <iostream>
#include <set>

using namespace std;

int main() {
    // Create a set of characters from "codeforces"
    set<char> codeforcesSet = {'c', 'o', 'd', 'e', 'f', 'r', 'c', 's'};

    int t; // Number of test cases
    cin >> t;

    while (t--) {
        char c;
        cin >> c;

        // Check if c exists in the set
        if (codeforcesSet.count(c)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
