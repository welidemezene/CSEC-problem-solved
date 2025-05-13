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
        int mult = 0;
        vector<int> nums(n);
        for(int i=0; i<n; i++){
            cin>>nums[i];
            mult += nums[i];
        }
        long long x = sqrt(mult);
        if(x*x == mult){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }

    
    return 0;
}