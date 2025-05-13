#include <bits/stdc++.h> 
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int>nums(4);
        for(int i=0; i<4; i++){
            cin>>nums[i];
        }
        
            int m = max(nums[0],nums[1]);
            int n = max(nums[2],nums[3]);
            sort(nums.begin(),nums.end());
            
            if((m==nums[3]||m==nums[2])&&(n==nums[3]||n==nums[2])){
                cout<<"YES"<<endl;

            }
            else{
                cout<<"NO"<<endl;
            }
        

    }
    
       

    


    return 0;
}