#include <iostream>
using namespace std;

int main() {
    // Input: dimensions of the square and the flagstone size
    long long n, m, a;
    cin >> n >> m >> a;

    // Calculate the number of flagstones needed for each side
    long long flagstones_along_n = (n + a - 1) / a;
    long long flagstones_along_m = (m + a - 1) / a;

    // Calculate the total number of flagstones
    long long total_flagstones = flagstones_along_n * flagstones_along_m;

    // Output the result
    cout << total_flagstones << endl;

    return 0;
}
