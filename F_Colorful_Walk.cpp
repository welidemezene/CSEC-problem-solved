#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize I/O performance
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin>>n>>k;
    vector<int> nums(n);
    for(int i=0 ; i<n; i++){
        cin>>nums[i];

    }
    int max1 = 0;
    int conscutive = 0;
    for(int i=1 ; i<=n; i++){
        if(nums[i]!=nums[i-1]){
            conscutive +=1;
            max1 = max(max1, conscutive);

        }
        else{
            conscutive = 0;
        }
    }
    cout<<max1+1;


    
    return 0;
}