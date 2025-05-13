#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string row1, row2;
        cin >> row1 >> row2;

        bool isSame = true;
        for (int i = 0; i < n; ++i) {
            // If the cell in row1 is 'R', the corresponding cell in row2 must also be 'R'
            if (row1[i] == 'R') {
                if (row2[i] != 'R') {
                    isSame = false;
                    break;
                }
            }
            // If the cell in row1 is 'G' or 'B', the corresponding cell in row2 must be 'G' or 'B'
            else if (row2[i] == 'R') {
                isSame = false;
                break;
            }
        }

        if (isSame) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}