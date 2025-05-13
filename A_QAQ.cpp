#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s; // Input string

    int n = s.length();
    int totalQ = 0, result = 0;

    // Count the total number of 'Q's in the string
    for (char c : s) {
        if (c == 'Q') totalQ++;
    }

    int prefixQ = 0; // Count of 'Q's encountered so far
    for (int i = 0; i < n; i++) {
        if (s[i] == 'A') {
            // For each 'A', calculate the number of subsequences
            result += prefixQ * (totalQ - prefixQ);
        } else if (s[i] == 'Q') {
            // Update the count of 'Q's encountered so far
            prefixQ++;
        }
    }

    cout << result << endl; // Output the total number of subsequences
    return 0;
}
