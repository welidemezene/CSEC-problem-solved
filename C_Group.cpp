//wolidemedhin_ICPC_mezene
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize I/O performance
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    int count1 = 0;
    while(t--){
        

        int a,b,c;
        cin>>a>>b>>c;
        int sum = a+b+c;
        if(sum >=2){
            count1 +=1;
        }


    }
    cout<<count1;
    

    
    return 0;
}