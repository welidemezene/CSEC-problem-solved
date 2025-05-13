#include <bits/stdc++.h> 
using namespace std;

int main(){
    
    int t;
    cin>>t;
    
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        
        vector<int> nums(n);
        for(int j=0; j<n; j++){
            cin>>nums[j];

        }
        sort(nums.begin(), nums.end());
        nums[0]=nums[0] + 1;
        int product=1;
        
        for(int k=0; k<n; k++){
            product*=nums[k];

        }
        cout<<product<<endl;
    }
    
    
    
    return 0;
}