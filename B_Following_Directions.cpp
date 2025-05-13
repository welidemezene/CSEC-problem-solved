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
        string s; 
        cin>>s;
        int x = 0;
        int y=0;
        bool pass = false;
        for(int i=0; i<n; i++){
            if(s[i]=='U'){
                y+=1;
            }
            else if(s[i]=='D'){
                y-=1;
            }
            else if(s[i]=='R'){
                x+=1;
            }
            else if(s[i]=='L'){
                x-=1;

            }

            if(x==1&&y==1){
                pass = true;
            
            }

        }
        if(pass){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
       
       
     }

    
    return 0;
}