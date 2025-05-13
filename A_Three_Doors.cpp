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
        int x;
        cin>>x;
        int a,b,c;
        cin>>a>>b>>c;
        vector<int> nums = {a,b,c};
        bool s = true;
        for(int i=1; i<3; i++){
            x = nums[x-1];
            if(x==0){
                s = false;
                
            }
            


        }
        if(s){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
        
    

    
    return 0;
}