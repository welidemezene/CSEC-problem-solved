#include <iostream>
using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    int Y, W;
    cin >> Y >> W;
    
    int maxRoll = max(Y, W);
    int winningOutcomes = 6 - maxRoll + 1;
    
    int g = gcd(winningOutcomes, 6); // Reduce fraction
    cout << (winningOutcomes / g) << "/" << (6 / g) << endl;
    
    return 0;
}
