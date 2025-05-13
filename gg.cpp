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
        vector<int> nums;
        while(n>0){
            int place = 1;
           
            int digit = n%10;
            if(digit !=0){
                digit*=place;
                n/=10;
                place*=10;
                nums.push_back(digit);

            }
        }
        cout<<nums.size()<<endl;
        for(int i = 0; i<nums.size();i++){
            cout<<nums[i]<<" ";
        }
    }

    
    return 0;
}