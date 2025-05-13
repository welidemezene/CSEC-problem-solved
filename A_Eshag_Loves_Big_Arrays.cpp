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
        int min = *min_element(nums.begin(), nums.end());

        int count = 0;
        for(int i=0; i<n; i++){
            if(nums[i] > min){
                count++;
            }
        }
        cout<<count<<endl;

    }

    
    return 0;
}