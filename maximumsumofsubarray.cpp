#include <bits/stdc++.h> 
using namespace std;

int main(){
    int k;
    cin>>k;
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    int currentsum =0;
    int maxsum =0;

    for(int i=0; i<k; i++){
        currentsum+=nums[i];
        maxsum =currentsum;

    }
    for(int i=k; i<n; i++){
        currentsum +=nums[i];
        currentsum -=nums[i-k];
        maxsum = max(maxsum, currentsum);
    }
    cout<<maxsum;
    
    
    return 0;
}