#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, k;
        cin >> x >> k;

        if (x % k != 0) {
            // Case 1: x is not divisible by k, we can reach x in one move
            cout << 1 << endl;
            cout << x << endl;
        } else {
            // Case 2: x is divisible by k, we need at least 2 moves
            cout << 2 << endl;
            cout << x - 1 << " " << 1 << endl; // x-1 and 1 are not divisible by k
        }
    }

    return 0;
}
