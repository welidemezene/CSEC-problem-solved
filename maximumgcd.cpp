#include <bits/stdc++.h> 
using namespace std;

int main(){
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n;
        cin >> n; // Input value for each test case

        // The maximum GCD among all 1 ≤ a < b ≤ n is n / 2
        cout << n / 2 << endl;
    }
    
    return 0;
}