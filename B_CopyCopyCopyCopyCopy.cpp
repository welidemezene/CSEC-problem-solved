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
        int n;
        cin>>n;
        vector<int> nums(n);
        set<int> s;
        for(int i=0; i<n; i++){
            cin>>nums[i];
            s.insert(nums[i]);
        }
        int si = s.size();
        cout<<si<<endl;
    }

    
    return 0;
}