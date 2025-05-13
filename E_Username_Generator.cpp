//wolidemedhin_CSEC_9

#include <bits/stdc++.h> 
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<string>nums(n);
    unordered_map<string,int> freq;
    for(int i=0; i<n;i++){
        cin>>nums[i];
        int t = freq[nums[i]]++;
        

        int x = t;
        string m= to_string(x);
        if(t==0){
            cout<<"OK"<<endl;
        }
        else if(t>=1){
            cout<<nums[i]+m<<endl;
        }
        

    }


    return 0;
}