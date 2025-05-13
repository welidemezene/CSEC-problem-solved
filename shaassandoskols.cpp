#include <bits/stdc++.h> 
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> nums(n+1);
    for(int i=1; i<=n; i++){
        cin>>nums[i];
    }
    int m;
    cin>>m;
    while(m--){
        int x,y;
        cin>>x>>y;
        if(x>1){
            nums[x-1]+=(y-1);
        }
        if(x<n){
            nums[x+1]+=nums[x]-y;
        }
        nums[x] = 0;
    }
    for(int i =1; i<=n; i++){
        cout<<nums[i]<<endl;
    }
    
    
    return 0;
}