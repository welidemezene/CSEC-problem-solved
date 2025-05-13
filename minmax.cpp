#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> num(n);

    for (int i = 0; i < n; i++) {
        cin >> num[i]; // Read input values
    }

    sort(num.begin(), num.end()); // Correct sorting method

    cout << num[0] << " " << num[n-1] << endl; // Print min and max
    return 0;
}
