#include <bits/stdc++.h> 
using namespace std;

int main(){
    int t; // Number of test cases
    cin >> t;
    vector<int> kValues(t);
    
    // Read all the k values
    for (int i = 0; i < t; i++) {
        cin >> kValues[i];
    }

    // Find the maximum k value to generate enough numbers
    int maxK = *max_element(kValues.begin(), kValues.end());
    
    vector<int> likedNumbers;
    int num = 1;

    // Generate liked numbers until we have enough
    while (likedNumbers.size() < maxK) {
        if (num % 3 != 0 && num % 10 != 3) {
            likedNumbers.push_back(num);
        }
        num++;
    }

    // Output the k-th liked number for each test case
    for (int i = 0; i < t; i++) {
        cout << likedNumbers[kValues[i] - 1] << endl;
    }
    
    
    return 0;
}