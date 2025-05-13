#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t; // Read the number of test cases
    
    while (t--) { // Loop through each test case
        int x; // Input value x
        cin >> x; // Read x
        
        int bestY = 1; // Initialize best y as 1
        int maxValue = 1; // Initialize the maximum value found
        
        // Iterate through all possible values of y (1 ≤ y < x)
        for (int y = 1; y < x; ++y) {
            int currentGCD = __gcd(x, y); // Compute gcd(x, y)
            int currentValue = currentGCD + y; // Compute the sum of gcd(x, y) and y
            
            // Update bestY if we find a better value
            if (currentValue > maxValue) {
                maxValue = currentValue;
                bestY = y;
            }
        }
        
        cout << bestY << "\n"; // Output the best y for the given x
    }
    
    return 0; // Exit the program
}
