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
        string s;
        cin>>s;
        unordered_map<char, int> freq;
        int count = 0;
        int count1 = 0;
        for(char m : s){
            freq[m]++;
            
        }
        for(auto n : freq){
            if(n.second ==1){
                count +=1;
            }
            else if (n.second>0){
                count1++;

            }
               
            
        }
        cout<<count1 + count/2<<endl;
        
    }


    
    return 0;
}