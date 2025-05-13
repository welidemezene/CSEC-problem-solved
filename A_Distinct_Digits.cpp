//wolidemedhin_ICPC_mezene
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize I/O performance
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int l,r;
    cin>>l>>r;
    for(int i = l; i<=r; i++){
        string m = to_string(i);
        set<char> myset = {m.begin(), m.end()};
        if(m.size() == myset.size()){
            cout<<i;
            break;
        }
        else if(i==r){
            cout<<-1;

        }
        

    }
    

    
    return 0;
}