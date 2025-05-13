#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> getRoundNumbers(int n) {
    vector<int> roundNumbers;
    int place = 1; // Represents the current place value (1, 10, 100, etc.)
    
    while (n > 0) {
        int digit = n % 10; // Extract the last digit
        if (digit != 0) {
            roundNumbers.push_back(digit * place); // Add the round number
        }
        n /= 10; // Remove the last digit
        place *= 10; // Move to the next place value
    }
    
    return roundNumbers;
}

int main() {
    int t;
    cin >> t; // Number of test cases
    
    while (t--) {
        int n;
        cin >> n; // Input number
        
        vector<int> roundNumbers = getRoundNumbers(n);
        
        // Output the number of round numbers
        cout << roundNumbers.size() << endl;
        
        // Output the round numbers
        for (int num : roundNumbers) {
            cout << num << " ";
        }
        cout << endl;
    }
    
    return 0;
}