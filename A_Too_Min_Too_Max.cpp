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
        for(int i=0; i<n; i++){
            cin>>nums[i];
        }
        sort(nums.begin(), nums.end());
        int sum = 0;
        sum+= abs(nums[n-1] - nums[0]);
        sum+= abs(nums[n-1] - nums[1]);
        sum+= abs(nums[n-2] - nums[0]);
        sum+= abs(nums[n-2] - nums[1]);
        cout<<sum<<endl;

    }



    
    return 0;
}