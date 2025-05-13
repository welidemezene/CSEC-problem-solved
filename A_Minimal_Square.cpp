#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        // Two possible configurations to calculate side of the square
        int side1 = max(2 * a, b); // Side by side (a + a, b)
        int side2 = max(2 * b, a); // Side by side (b + b, a)
        int side3 = max(a + b, max(a, b)); // Stacked

        // Take the minimum of all possible square sides
        int minSide = min({side1, side2, side3});

        // Square area
        cout << minSide * minSide << endl;
    }

    return 0;
}
