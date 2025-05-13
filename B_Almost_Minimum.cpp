
//wolidemedhin_CSEC_9
#include <bits/stdc++.h> 
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    sort(nums.begin(),nums.end());
   
    for(int i=0; i<n;i++){
        if(nums[0]<nums[i]){
            cout<<nums[i];
            break;
        }
        else if(i==n-1){
            cout<<"NO";
        }
    }

    return 0;
}