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
        int x = n/4;
        if(x==0){
            int m = n/2;
            cout<<m<<endl;
        }
        else if(x>=1){
            int l = x*4;
            int k = n-l;
            int s = k/2;
            cout<<x+s<<endl;
        }


    }

    
    return 0;
}