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
        int x, y;
        cin>>x>>y;
        int x1, y1;
        cin>>x1>>y1;

        if(x>=y&&x1>=y1||x<=y&&x1<=y1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    
    return 0;
}