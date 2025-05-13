#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t;

    while (t--) {
        int n; // Size of the array
        cin >> n;

        vector<int> a(n);
        set<int> uniqueElements;

        // Input the array and populate the set
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            uniqueElements.insert(a[i]);
        }

        // Check if the size of the set is equal to the size of the array
        if (uniqueElements.size() == n) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
