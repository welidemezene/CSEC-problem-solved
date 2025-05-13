#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  // Number of cubes

    int height = 0;  // Maximum height of the pyramid
    int cubes_used = 0;  // Total cubes used

    for (int i = 1; ; ++i) {
        int cubes_needed = (i * (i + 1)) / 2;  // Cubes needed for level i
        if (cubes_used + cubes_needed <= n) {
            cubes_used += cubes_needed;  // Use these cubes
            height++;  // Increment height
        } else {
            break;  // Stop if we don't have enough cubes
        }
    }

    cout << height << endl;  // Output the maximum height
    return 0;
}
