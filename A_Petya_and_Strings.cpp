#include <bits/stdc++.h> 
using namespace std;

int main(){
    string s,b;
    cin>>s;
    cin>>b;
    transform(s.begin(),s.end(),s.begin(), ::tolower);
    transform(b.begin(),b.end(),b.begin(), ::tolower);
    if(s<b){
        cout<<-1;
    }
    else if(b<s){
        cout<<1;
    }
    else{
        cout<<0;
    }


    return 0;
}