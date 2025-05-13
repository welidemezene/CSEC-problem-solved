#include <bits/stdc++.h> 
using namespace std;

int main(){
    string n;
    cin>>n;
   
    for(int i=1; i<=n.size();i++){
        int ternary =0;
        if(n[i-1] == '.'){
            cout<<ternary;}
        
        if(n[i-1] =='-'){
            if(n[i] == '.'){
                ternary=1;
                cout<<ternary;
                i++;
            }
            else if(n[i] == '-'){
                ternary=2;
                cout<<ternary;
                i++;
            }
        
        }
    }
    
    
    return 0;
}