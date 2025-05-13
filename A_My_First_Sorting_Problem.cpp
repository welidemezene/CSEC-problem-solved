#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize I/O performance
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a>b){
            swap(a,b);
            cout<<a<<" "<<b<<endl;
        }
        else{
            cout<<a<<" "<<b<<endl;
        }

    }

    
    return 0;
}