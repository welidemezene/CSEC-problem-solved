#include <bits/stdc++.h> 
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> nums;
        for(int i=0;i<n; i++){
            string s;
            cin>>s;
            for(int j = 1; j<=4; j++){
                if(s[j-1]=='#'){
                    nums.push_back(j);

                    
                }
            }

        }
        reverse(nums.begin(), nums.end());
        for(int k = 0; k<nums.size(); k++){
            cout<<nums[k]<<" ";
        }
        cout<<endl;
    }
        

    return 0;
}
