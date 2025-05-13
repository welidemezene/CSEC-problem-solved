#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> programmers, mathematicians, sportsmen;

    // Read skills and categorize students into groups
    for (int i = 1; i <= n; ++i) {
        int skill;
        cin >> skill;
        if (skill == 1) {
            programmers.push_back(i);
        } else if (skill == 2) {
            mathematicians.push_back(i);
        } else if (skill == 3) {
            sportsmen.push_back(i);
        }
    }

    // Find the maximum number of teams
    int w = min({programmers.size(), mathematicians.size(), sportsmen.size()});
    cout << w << endl;

    // Output the teams
    for (int i = 0; i < w; ++i) {
        cout << programmers[i] << " " << mathematicians[i] << " " << sportsmen[i] << endl;
    }

    return 0;
}
