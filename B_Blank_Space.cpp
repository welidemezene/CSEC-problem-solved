#include <bits/stdc++.h> 
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>nums(n);
        for(int i=0; i<n; i++){
            cin>>nums[i];

        }
        int space = 0;
        int conscut = 0;
        
        for(int i=0; i<n; i++){
            if(nums[i]==0){
                conscut+=1;
                space = max(space,conscut);
                
            }
            else{
                conscut=0;
            }
        }
        cout<<space<<endl;

    }

    return 0;
}