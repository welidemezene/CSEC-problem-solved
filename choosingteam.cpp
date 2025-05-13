#include <bits/stdc++.h> 
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int>nums(n);
    for(int i=0; i<n;i++){
        cin>>nums[i];
    }
    int count =0;
    for(int i=0; i<n; i++){
        int sum = 5-nums[i];
        if(sum>=k){
            count++;
        }
    }
    cout<<count/3;
    
    
    return 0;
}