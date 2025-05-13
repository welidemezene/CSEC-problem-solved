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
        unordered_map<int, int> freq;
        
        for(int i=0; i<n; i++){
            cin>>nums[i];
            freq[nums[i]]++;

        }
        bool s = false;
        for(auto m:freq){
            int sec = m.second;
            if(sec>=3){
                cout<<m.first<<endl;
                s = true;
                break;
            }
            
        }
        if(!s){
            cout<<-1<<endl;
        
        }
        
        
    }

    
    return 0;
}
