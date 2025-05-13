#include <iostream>
#include <climits>
using namespace std;

int minSubArrayLen(int arr[], int n, int S) {
    int minLength = INT_MAX, left = 0, sum = 0;

    for (int right = 0; right < n; right++) {
        sum += arr[right];  // Expand window

        // Shrink window while sum ≥ S
        while (sum >= S) {
            minLength = min(minLength, right - left + 1);
            sum -= arr[left];  // Remove left element
            left++;  // Move window
        }
    }

    return (minLength == INT_MAX) ? 0 : minLength;
}

int main() {
    int arr[] = {2, 3, 1, 2, 4, 3};
    int S = 7;
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Smallest subarray length: " << minSubArrayLen(arr, n, S) << endl;
    return 0;
}
