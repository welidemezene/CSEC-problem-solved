//wolidemedhin_ICPC_mezene
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize I/O performance
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin>>n>>k;
    vector<int> nums;
    set<int> s;
    
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
    if(!s.count(x)){
        s.insert(x);
        nums.push_back(i);

    }
    

        
        
        
    }
    if(nums.size() < k){
        cout<<"NO"<<endl;
        
    }
    else{
        cout<<"YES"<<endl;
        for(int i=0; i<k; i++){
            cout<<nums[i]+1<<" ";
        }
    }
    
    
    

    

    
    return 0;
}