#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t;
    vector<string> results;

    while (t--) {
        string W;
        cin >> W;

        // Remove the last two characters "us"
        W = W.substr(0, W.size() - 2);

        // Append "i" to the remaining string
        W += "i";

        // Store the result
        results.push_back(W);
    }

    // Output results
    for (const string& res : results) {
        cout << res << endl;
    }

    return 0;
}
