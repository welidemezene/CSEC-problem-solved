#include <bits/stdc++.h> 
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        reverse(s.begin(),s.end());
        for(char m:s){
            if(m=='w'){
                cout<<'w';
            }
            else if(m=='q'){
                cout<<'p';
            }
            else if(m=='p'){
                cout<<'q';
            }
        }
        cout<<endl;
    }

    return 0;
}