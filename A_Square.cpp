#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize I/O performance
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int minx= INT_MAX;
        int maxx = INT_MIN;
        for(int i=0; i<4; i++){
            int xi , yi;
            cin>>xi>>yi;
            minx= min(minx, xi);
            maxx = max(maxx, xi);
        }
        int len = abs(minx-maxx);
        int square = len*len;
        cout<<square<<endl;
    }

    
    return 0;
}