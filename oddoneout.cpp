#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; // Number of test cases

    while (n--) {
        vector<int> nums(3);
        unordered_map<int, int> freq;

        // Input the three numbers and build the frequency map
        for (int i = 0; i < 3; i++) {
            cin >> nums[i];
            freq[nums[i]]++;
        }

        int result = 0;
        // Find the number that occurs exactly once
        for (auto &entry : freq) {
            if (entry.second == 1) {
                result = entry.first;
                break;
            }
        }

        cout << result << endl;
    }

    return 0;
}


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; // Number of test cases

    while (n--) {
        int a, b, c;
        cin >> a >> b >> c;

        if (a == b) {
            cout << c << endl; // c is the unique number
        } else if (b == c) {
            cout << a << endl; // a is the unique number
        } else {
            cout << b << endl; // b is the unique number
        }
    }

    return 0;
}
