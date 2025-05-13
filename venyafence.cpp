#include <bits/stdc++.h> 
using namespace std;

int main() {
    int n, h;
    cin >> n >> h;

    int minwidth = 0;
    
    for (int i = 0; i < n; i++) {
        int height;
        cin >> height; 

        if (height > h) {
            minwidth += 2; 
        } else {
            minwidth += 1; 
        }
    }

    cout << minwidth << endl;
    
    return 0;
}
