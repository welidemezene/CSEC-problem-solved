#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int remainder = a % b;
        if (remainder == 0)
            cout << 0 << "\n"; // Already divisible
        else
            cout << (b - remainder) << "\n"; // Moves needed to reach next multiple
    }
    return 0;
}
