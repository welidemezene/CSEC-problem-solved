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
        int sum1 = 0;
        int sum2 = 0;
        for(int i=0; i<s.size(); i++){
            if(i<3){
                int l = s[i] - '0';
                sum1+=l;

            }
            else if(i>=3){
                int k = s[i]-'0';
                sum2+=k;


            }
        }
        if(sum1==sum2){
            cout<<"YES"<<endl;

        }
        else{
            cout<<"NO"<<endl;
        }
          
        
    }

    
    return 0;
}