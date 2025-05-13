//wolidemedhin_ICPC_mezene
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize I/O performance
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int sum = 1;
    for(int i=1; i<n; i++){
        sum+=i;
        if(sum>n){
            sum-=n;
        }
        cout<<sum<<" ";
        
    }

    
    return 0;
}