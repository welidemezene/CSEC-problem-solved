//wolidemedhin_ICPC_mezene
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize I/O performance
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        vector<int> nums(x);
        for(int i=0; i<x; i++){
            cin>>nums[i];
            cout<<x+1-nums[i]<<" ";

        }
        cout<<endl;

    }

    
    return 0;
}