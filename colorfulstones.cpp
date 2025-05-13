#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    int currentPosition = 0;  // Start at the first stone (index 0 in s)
    
    // Process each instruction in t
    for (char instruction : t) {
        if (s[currentPosition] == instruction) {
            currentPosition++;  // Move to the next stone
        }
    }

    // Output the final 1-based position
    cout << currentPosition + 1 << endl;
    
    return 0;
}
