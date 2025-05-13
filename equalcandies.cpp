#include <bits/stdc++.h> 
using namespace std;

int main(){
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        
        vector<int> equal(n); // Resize the vector based on the number of boxes
        for (int j = 0; j < n; j++) {
            cin >> equal[j];
        }
        
        int minVal = *min_element(equal.begin(), equal.end()); // Find the minimum once
        int candies = 0;
        
        for (int j = 0; j < n; j++) {
            candies += equal[j] - minVal; // Calculate total candies to eat
        }
        
        cout << candies << endl;
    }

    return 0;
}
