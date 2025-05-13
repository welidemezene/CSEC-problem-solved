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
        vector<int> nums;
        for(int i=0; i<n; i++){
            string s;
            cin>>s;
            for(int i=0; i<4; i++){
                if(s[i] == '#'){
                    nums.push_back(i+1);
                }
            }
        }
        reverse(nums.begin() ,nums.end());
        for(int m: nums){
            cout<<m<<" ";
        }
        cout<<endl;
    }


    
    return 0;
}