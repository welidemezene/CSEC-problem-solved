#include <bits/stdc++.h> 
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>nums(2);
    int cha = 0;
    int mis=0;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<2; j++){
            cin>>nums[i];
        }
       
            if(nums[i]>nums[i+1]){
                mis+=1;
                
            }
            else if(nums[i]<nums[i+1]){
                cha+=1;
            }
        
      


        }
        if(mis>cha){
            cout<<"mishka";
        }
        else{
            cout<<"charis";
        }
    
        
    
    

    
    
    return 0;
}