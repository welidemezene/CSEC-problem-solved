#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize I/O performance
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int k,r;
    cin>>k>>r;
    for(int i=1; i<=10; i++){
        int total = i*k;
        if(total%10==0||total%10==r){
            cout<<i;
            return 0;

        }
    }

    
    return 0;
}