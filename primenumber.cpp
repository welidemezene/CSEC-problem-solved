#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;  // Numbers <= 1 are not prime
    if (n == 2) return true;   // 2 is a prime number
    if (n % 2 == 0) return false; // Eliminate even numbers > 2
    
    // Check divisors from 3 to sqrt(n)
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int num;
    cout << "Enter a number to check if it's prime: ";
    cin >> num;

    if (isPrime(num)) {
        cout << num << " is a prime number!" << endl;
    } else {
        cout << num << " is not a prime number!" << endl;
    }

    return 0;
}
