#include <iostream>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    if (a == b) {
        cout << a << endl;  // If a == b, the GCD is a itself
    } else {
        cout << 1 << endl;   // If a ≠ b, GCD is always 1
    }

    return 0;
}
