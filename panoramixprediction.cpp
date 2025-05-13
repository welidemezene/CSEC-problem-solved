#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

// Function to find the next prime number after n
int nextPrime(int n) {
    int next = n + 1;
    while (!isPrime(next)) {
        next++;
    }
    return next;
}

int main() {
    int n, m;
    cin >> n >> m;

    // Find the next prime after n
    int next = nextPrime(n);

    // Check if m is the next prime
    if (next == m) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
