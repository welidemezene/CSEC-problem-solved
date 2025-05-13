#include <iostream>
using namespace std;

int main() {
    string input;
    getline(cin, input); // Read the first line (number of test cases)
    int t = stoi(input);

    while (t--) {
        long long n, m;
        cin >> n >> m;
        cout << (m * (m - 1 + n * n + n)) / 2 << "\n";
    }

    return 0;
}
