#include <bits/stdc++.h> 
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t;i++){
        int n,c;
        cin>>n>>c;
        vector<int>nums(n);
        vector<int>sec;
        for(int j=0; j<n;j++){
            cin>>nums[j];
            int tot = nums[j] +j +1;
            sec.push_back(tot);
        }
        sort(sec.begin(), sec.end());
        int count=0;
        
        for(int m:sec){
            if(c>=m){
                c-=m;
                count+=1;

            }
            else{
                break;
            }
        }
        cout<<count<<endl;
        
    }

   

    
    return 0;
}