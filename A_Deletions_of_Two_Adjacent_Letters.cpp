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
        string s;
        cin>>s;
        char c;
        cin>>c;
        vector<int>nums;
        for(int i=1; i<=s.size(); i++){
            if(c==s[i-1]){
                nums.push_back(i);

            }
        }
        bool see = false;
        for(int m: nums){
            if(m%2!=0){
                see= true;
                break;

            }
        }
        if(see){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }


    }


    
    return 0;
}