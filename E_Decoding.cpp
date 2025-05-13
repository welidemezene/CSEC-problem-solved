#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string s, original = "";

    // Input the length and encoded string
    cin >> n >> s;

    // Traverse the encoded string in reverse
    for (int i = n - 1; i >= 0; --i) {
        // Insert the current character at the correct position
        int mid = original.length() / 2;
        original.insert(original.begin() + mid, s[i]);
    }

    // Output the reconstructed original word
    cout << original << endl;

    return 0;
}
