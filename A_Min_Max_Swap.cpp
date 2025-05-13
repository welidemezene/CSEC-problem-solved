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
        int n;
        cin>>n;
        vector<int> a(n), b(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            cin>>b[i];
        }
        for(int i=0; i<n; i++){
           if(a[i] > b[i]){
            swap(a[i], b[i]);
           }
        }
        int max1 = *max_element (a.begin(), a.end());
        int max2 = *max_element (b.begin(), b.end());
        cout<<max1*max2<<endl;
    }

    
    return 0;
}