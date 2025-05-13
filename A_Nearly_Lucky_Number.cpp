#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;

    int luckyCount = 0;

    // Count the lucky digits (4 or 7)
    for (char c : n) {
        if (c == '4' || c == '7') {
            luckyCount++;
        }
    }

    // Check if luckyCount is a lucky number
    bool isNearlyLucky = true;
    if (luckyCount == 0) {
        isNearlyLucky = false;
    } else {
        while (luckyCount > 0) {
            int digit = luckyCount % 10;
            if (digit != 4 && digit != 7) {
                isNearlyLucky = false;
                break;
            }
            luckyCount /= 10;
        }
    }

    // Output result
    if (isNearlyLucky) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
