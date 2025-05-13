#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(2 * n);
        for (int i = 0; i < 2 * n; i++) {
            cin >> a[i];
        }

        int even_count = 0, odd_count = 0;
        for (int num : a) {
            if (num % 2 == 0) {
                even_count++;
            } else {
                odd_count++;
            }
        }

        // Check if the counts of even and odd numbers are exactly n each
        if (even_count == n && odd_count == n) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}