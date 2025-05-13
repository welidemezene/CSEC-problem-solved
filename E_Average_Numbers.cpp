#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    int sum = 0;
    
    // Reading input array and calculating the total sum
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    
    vector<int> result;
    
    // Check for each element if it's equal to the arithmetic mean of all others
    for (int i = 0; i < n; i++) {
        if (a[i] * n == sum) {
            result.push_back(i + 1);  // Store index (1-based)
        }
    }
    
    // Output the result
    cout << result.size() << endl;
    if (!result.empty()) {
        for (int index : result) {
            cout << index << " ";
        }
        cout << endl;
    }
    
    return 0;
}
