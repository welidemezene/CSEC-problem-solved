#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        // Calculate the circle size
        int n = 2 * abs(a - b);

        // Check if the circle is valid
        if (max({a, b, c}) > n) {
            cout << -1 << endl;
            continue;
        }

        // Calculate the person opposite to c
        int d = c + n / 2;
        if (d > n) d -= n;

        cout << d << endl;
    }

    return 0;
}
