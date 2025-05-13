#include <iostream>
#include <vector>
using namespace std;

// Function to check if a number is composite
bool isComposite(int num) {
    if (num <= 3) return false; // Numbers <= 3 are not composite
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return true; // Divisible by a number other than 1 and itself
    }
    return false; // If no divisors are found, it's not composite
}

int main() {
    int n;
    cin >> n;

    for (int x = 4; x < n; x++) {
        int y = n - x; // Calculate the second number
        if (isComposite(x) && isComposite(y)) {
            cout << x << " " << y << endl; // Output the pair
            break; // Exit the loop once a valid pair is found
        }
    }

    return 0;
}
