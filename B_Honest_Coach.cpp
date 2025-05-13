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
         
        
        int min = INT_MAX;
        for(int i =1; i<n; i++){
            int diff = abs(nums[i]-nums[i-1]);
            if(diff<min){
                min = diff;
            }

        }
        cout<<min<<endl;

    }

    
    return 0;
}