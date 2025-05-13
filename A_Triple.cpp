//wolidemedhin_ICPC_mezene
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
            freq[nums[i]]+=1;
        }
        bool che = false;
        for(auto k: freq){
            if(k.second >= 3){
                cout<<k.first<<endl;
                che = true;
                break;
                }
            }
        if(che != true){
            cout<<-1<<endl;
        }
    }

    
    return 0;
}