
//wolidemedhin_CSEC_9
#include <bits/stdc++.h> 
using namespace std;

int main(){
    unordered_map<int,int> freq;
    
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0; i<n; i++){
        cin>>nums[i];
        freq[nums[i]]++;
    }
    int x=0;
    for(auto m: freq){
        int u = m.second;
        x = max(x,u);


    }
    int total = n-x;
    cout<<total;
    


    return 0;
}