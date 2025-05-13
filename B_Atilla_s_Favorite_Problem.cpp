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
        sort(s.begin(),s.end());
        char t = s[n-1];
        int x = 0;
        if(t=='a'){
            x = 1;
        }
        else{
            x = abs(('a' - t) -1);

        }
       
        cout<<x<<endl;
    }


    
    return 0;
}