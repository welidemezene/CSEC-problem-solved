#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize I/O performance
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        bool venWins = false; // Flag to check if Vanya wins

        // Simulate the game for up to 10 moves (5 by Vanya, 5 by Vova)
        for (int move = 1; move <= 10; move++) {
            if (move % 2 != 0) {
                // Vanya's turn
                if (n % 3 == 1) {
                    n -= 1; // Vanya subtracts 1 to make n divisible by 3
                } else if (n % 3 == 2) {
                    n += 1; // Vanya adds 1 to make n divisible by 3
                } else {
                    // If n is already divisible by 3, Vanya cannot win
                    break;
                }

                // Check if Vanya has made n divisible by 3
                if (n % 3 == 0) {
                    venWins = true;
                    break;
                }
            } else {
                // Vova's turn
                // Vova tries to prevent Vanya from winning
                if (n % 3 == 1) {
                    n += 1; // Vova adds 1 to avoid making n divisible by 3
                } else if (n % 3 == 2) {
                    n -= 1; // Vova subtracts 1 to avoid making n divisible by 3
                }
            }
        }

        // Print the result
        if (venWins) {
            cout << "First" << endl;
        } else {
            cout << "Second" << endl;
        }
    }

    return 0;
}