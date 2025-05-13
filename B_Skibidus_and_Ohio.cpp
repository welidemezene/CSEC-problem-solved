#include <iostream>
#include <string>
using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        string stack; // Simulating a stack using a string
        for (char c : s) {
            if (!stack.empty() && stack.back() == c) {
                stack.pop_back(); // Remove the duplicate
            } else {
                stack.push_back(c); // Add the current character
            }
        }

        // The size of the stack is the minimum achievable length
        cout << stack.size() << endl;
    }

    return 0;
}
