#include <bits/stdc++.h> 
using namespace std;

int main(){
    int t;
    cin>>t;
   
    string m = "codeforces";
    for(int i=0; i<t; i++){
        int count = 0;
        string s;
        cin>>s;
        for(int j=0; j<10; j++){
            if(m[j]!=s[j]){
                count+=1;
            }
           
    }
    cout<<count<<endl;
    
    

    }
   
    return 0;
}