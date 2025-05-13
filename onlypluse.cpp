#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        vector<int> number(3);
        // Read input numbers
        for (int i = 0; i < 3; i++) {
            cin >> number[i];
        }
        
        // Apply the increments to the smallest number
        for (int j = 0; j < 5; j++) {
            sort(number.begin(), number.end());  // Sort the vector to get the smallest element
            number[0]++;  // Increase the smallest element
        }

        // Output the result after increments
        cout << number[0] * number[1] * number[2] << endl;
    }
    
    return 0;
}
