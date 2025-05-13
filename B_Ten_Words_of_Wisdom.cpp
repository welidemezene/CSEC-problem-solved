#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int bestquality = -1, index = -1;
        
        for (int i = 1; i <= n; i++) {
            int ai, bi;
            cin >> ai >> bi;
            
            if ((ai <= 10) && bi > bestquality) {
                bestquality = bi; // Fix: Correctly update `bestquality`
                index = i;
            }
        }
        cout << index << endl;
    }
    
    return 0;
}
