#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.length();
        stack<int> uppe, lowe;
        vector<bool> removed(n, false);

        for (int i = 0; i < n; i++) {
            if (s[i] == 'b') {
                removed[i] = true;
                if (!lowe.empty()) {
                    removed[lowe.top()] = true;
                    lowe.pop();
                }
                continue;
            }
            if (s[i] == 'B') {
                removed[i] = true;
                if (!uppe.empty()) {
                    removed[uppe.top()] = true;
                    uppe.pop();
                }
                continue;
            }
            if (islower(s[i])) {
                lowe.push(i);
            } else {
                uppe.push(i);
            }
        }

        for (int i = 0; i < n; i++) {
            if (!removed[i]) {
                cout << s[i];
            }
        }
        cout << "\n";
    }
    return 0;
}
