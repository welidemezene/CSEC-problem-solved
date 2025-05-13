#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input. Enter a positive integer." << endl;
        return 0;
    }

    int a = 0, b = 1;
    cout << "Fibonacci series (first " << n << " terms): ";

    if (n >= 1) cout << a << " ";
    if (n >= 2) cout << b << " ";

    for (int i = 3; i <= n; i++) {
        int next = a + b;
        cout << next << " ";
        a = b;
        b = next;
    }

    cout << endl;
    return 0;
}