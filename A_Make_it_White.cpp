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
        string s;
        cin>>s;
        int l = 0;
        for(int i=0; i<n; i++){
            if(s[i]=='B'){
                l = i;
                break;
            }
        }
        int m = 0;
        for(int i = n-1; i>0;i--){
            if(s[i]=='B'){
                m = i;
                break;

            }
        }
        cout<<abs(m-l)+1<<endl;
    }

    
    return 0;
}