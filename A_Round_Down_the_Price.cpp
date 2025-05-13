#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize I/O performance
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        string s = to_string(a);
        int si =s.size();
        int x = abs(a-pow(10, si-1));
        cout<<x<<endl;
    }

    
    return 0;
}