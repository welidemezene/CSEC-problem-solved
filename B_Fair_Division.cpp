#include <iostream>
using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t;

    while (t--) { // Iterate through each test case
        int n; // Number of candies
        cin >> n;

        int count1 = 0, count2 = 0; // Counters for 1-gram and 2-gram candies

        for (int i = 0; i < n; i++) {
            int weight;
            cin >> weight;

            if (weight == 1) {
                count1++; // Count 1-gram candies
            } else {
                count2++; // Count 2-gram candies
            }
        }

        // Calculate the total weight of candies
        int totalWeight = count1 + 2 * count2;

        // Check if the total weight is odd
        if (totalWeight % 2 != 0) {
            cout << "NO" << endl; // Odd weight cannot be divided equally
        } else {
            // If total weight is even, find half of the weight
            int halfWeight = totalWeight / 2;

            // Check if we can achieve halfWeight using the candies
            if (halfWeight % 2 == 0 || (halfWeight % 2 == 1 && count1 > 0)) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
