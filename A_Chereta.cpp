//wolidemedhin_ICPC_mezene
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize I/O performance
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    int max1 = *max_element(nums.begin(),nums.end());
    
    for(int i=0; i<n; i++){
        if(nums[i]==max1){
            cout<<i+1<<" ";
        }
        
    }
    sort(nums.begin(), nums.end());
    cout<<nums[n-2];

    
    return 0;
}