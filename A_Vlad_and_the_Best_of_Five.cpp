#include <bits/stdc++.h> 
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int counta=0;
        int countb=0;
        for(int i=0; i<5; i++){
            if(s[i]=='A'){
                counta+=1;

            }
            else if(s[i]=='B'){
                countb+=1;
            }
        }
        if(counta>countb){
            cout<<"A"<<endl;
        }
        else{
            cout<<"B"<<endl;
        }
        
    }

    return 0;
}