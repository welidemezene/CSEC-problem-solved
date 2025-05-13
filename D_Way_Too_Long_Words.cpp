#include <bits/stdc++.h> 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string s;
        cin>>s;
        int siz = s.size();
        if(siz <=12){
            cout<<s<<endl;
        }
        else{
            cout<<s[0]<<siz-2<<s[siz-1]<<endl;
 
        }
    }
 
    return 0;
}