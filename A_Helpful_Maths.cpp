#include <bits/stdc++.h> 
using namespace std;

int main(){
    string s;
    cin>>s;
    sort(s.begin(), s.end());
    int siz = s.size();
    int si = siz/2;
    
    for(int i=si; i<=siz; i++){
        if(i<siz-1){
            cout<<s[i]<<'+';
        }
        else if(i==siz-1){
            cout<<s[i];
        }

    }
    
    return 0;
}