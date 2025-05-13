#include <bits/stdc++.h> 
using namespace std;

int main(){
    int t;
    cin>>t;
    
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        vector<int>nums(n);
        for(int j=0; j<n; j++){
            cin>>nums[j];
        }
        int minx = *min_element(nums.begin(), nums.end());
        int maxx = *max_element(nums.begin(), nums.end());
        cout<<maxx-minx<<endl;
    }
    
    
    return 0;
}