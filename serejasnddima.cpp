#include <bits/stdc++.h> 
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n; i++){
        cin>>nums[i];
    }
    int left =0;
    int right = n-1;
    int sereja =0;
    int dima =0;
    for(int i=0; i<n; i++){
        if(i%2==0){
            if(nums[left] > nums[right]){
                sereja +=nums[left];
                left++;
            }
            else{
                sereja+=nums[right];
                right--;
            }

        }
        else{
            if(nums[left] > nums[right]){
                dima +=nums[left];
                left++;
            }
            else{
                dima+=nums[right];
                right--;
            }

        }
       
    }
    cout<<sereja<<" "<<dima<<endl;
   
   
    return 0;
}