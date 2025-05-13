#include <bits/stdc++.h> 
using namespace std;

int main(){
    int t;
     cin>>t;
     vector<int>nums(3);
     for(int i=0;i<t; i++){
        for(int j=0;j<3;j++){
            cin>>nums[j];

        }
        sort(nums.begin(), nums.end());
        cout<<nums[1]<<endl;
        
     }
    
    
    return 0;
}