#include <bits/stdc++.h> 
using namespace std;

int main(){
   string s;
   cin>>s;
   sort(s.begin(),s.end());
   int siz = s.size();
   int m=siz/2;
   for(int n=m; n<siz; n++){
    if(n<siz-1){
        cout<<s[n]<<'+';
    }
    else if(n==siz-1){
        cout<<s[n];
    }
   }

    
    
    return 0;
}