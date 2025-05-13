//wolidemedhin_ICPC_mezene
#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int>& nums) {
    unordered_map<int, int> freq;
    int x ;
    for(int i=0; i<nums.size(); i++){
        x = freq[nums[i]]++;
        if(x>=1){
            cout<<nums[i]<<endl;
        }

    }
        
}

int main() {
    // Optimize I/O performance
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    
    return 0;
}