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
        int n,m;
        cin>>n>>m;
        if((n+m)%2==0){
            cout<<"Tonya"<<endl;
        }
        else{
            cout<<"Burenka"<<endl;
        }
    }

    
    return 0;
}