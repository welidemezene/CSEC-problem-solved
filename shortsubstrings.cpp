#include <bits/stdc++.h> 
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        string s;
        cin>>s;
        for(int j=1; j<=s.size();j++){
            if(j==1){
                cout<<s[j-1];
    
            }
            else if(j==2){
                cout<<s[j-1];
            }
            else if(j%2 ==0){
                cout<<s[j-1];
            }

        }
        cout<<endl;
        
    }

    
    
    return 0;
}