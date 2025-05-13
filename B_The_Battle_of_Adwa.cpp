//wolidemedhin_ICPC_mezene
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize I/O performance
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        int si = s.size();
        if(si>10){
            cout<<s[0]<<si -2<<s[si-1]<<endl;
            
        }
        else{
            cout<<s<<endl;
            
        }
    }

    
    return 0;
}