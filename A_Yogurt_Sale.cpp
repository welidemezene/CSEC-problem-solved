#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize I/O performance
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        if((2*a) >b){
            int l = n/2;
            int minz = (l*b) + (n-l*2)*(a);
            cout<<minz<<endl;
        }
        else if((2*a)<=b){
            int x = n*a;
            cout<<x<<endl;

        }
    }

    
    return 0;
}