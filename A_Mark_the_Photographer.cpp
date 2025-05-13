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
        int n,x;
        cin>>n>>x;
        vector<int> nums(2*n);
        for(int i = 0 ; i<2*n; i++){
            cin>>nums[i];

        }
        sort(nums.begin(), nums.end());
        bool check = true;
        for(int i=0; i<n; i++){
            if(nums[n + i] - nums[i]<x){
                check = false;
            }
        }
        if(check){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }

    
    return 0;
}