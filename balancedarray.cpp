#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        // Check if n/2 is odd
        if ((n / 2) % 2 != 0) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;

            vector<int> a;
            int sum_even = 0, sum_odd = 0;

            // Generate the first n/2 even numbers
            for (int i = 1; i <= n / 2; ++i) {
                a.push_back(2 * i);
                sum_even += 2 * i;
            }

            // Generate the first n/2 - 1 odd numbers
            for (int i = 1; i < n / 2; ++i) {
                a.push_back(2 * i - 1);
                sum_odd += 2 * i - 1;
            }

            // Add the final odd number to balance the sums
            a.push_back(sum_even - sum_odd);

            // Print the array
            for (int num : a) {
                cout << num << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
