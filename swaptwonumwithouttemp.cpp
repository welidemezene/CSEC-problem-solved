#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers (a and b): ";
    cin >> a >> b;

    // Swap logic
    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After swapping: a = " << a << ", b = " << b << endl;
    return 0;
}
// Alternative (Using XOR):

// a = a ^ b;
// b = a ^ b; // Now b = original a
// a = a ^ b; // Now a = original b