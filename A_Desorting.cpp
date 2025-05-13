#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        int n;
        cin >> n; // Length of the array
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i]; // Read the array elements
        }

        // Check if the array is already not sorted
        bool isAlreadyNotSorted = false;
        for (int i = 0; i < n - 1; ++i) {
            if (a[i] > a[i + 1]) {
                isAlreadyNotSorted = true;
                break;
            }
        }

        if (isAlreadyNotSorted) {
            // If the array is already not sorted, output 0
            cout << 0 << endl;
            continue;
        }

        // If the array is sorted, perform operations until it becomes not sorted
        int operations = 0;
        while (true) {
            operations++;
            // Perform the operation: increment first i elements, decrement the rest
            for (int i = 0; i < n - 1; ++i) {
                a[i] += 1;
            }
            for (int i = n - 1; i < n; ++i) {
                a[i] -= 1;
            }

            // Check if the array is now not sorted
            bool isNotSorted = false;
            for (int i = 0; i < n - 1; ++i) {
                if (a[i] > a[i + 1]) {
                    isNotSorted = true;
                    break;
                }
            }

            if (isNotSorted) {
                // Output the number of operations
                cout << operations << endl;
                break;
            }
        }
    }
    return 0;
}