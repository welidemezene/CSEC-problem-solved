#include <iostream>
#include <string>
using namespace std;

int shortestInitialLength(string s) {
    int left = 0, right = s.length() - 1;
    while (left < right) {
        if ((s[left] == '0' && s[right] == '1') || (s[left] == '1' && s[right] == '0')) {
            left++;
            right--;
        } else {
            break;
        }
    }
    return right - left + 1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << shortestInitialLength(s) << endl;
    }
    return 0;
}