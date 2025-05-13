#include <iostream>
using namespace std;

int main() {
    int n, anton = 0, danik = 0;
    cin >> n;
    
    string gameResults;
    cin >> gameResults;

    for (char result : gameResults) {
        if (result == 'A') anton++;
        else danik++;
    }

    if (anton > danik) cout << "Anton\n";
    else if (danik > anton) cout << "Danik\n";
    else cout << "Friendship\n";

    return 0;
}
