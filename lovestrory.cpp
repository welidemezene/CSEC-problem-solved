#include <bits/stdc++.h> 
using namespace std;

int main(){
    string my="codeforces";
    int x;
    cin>>x;
    while(x--){
        string s;
        cin>>s;
        int indice=0;
        for(int i=0; i<10;i++){
            if(my[i] !=s[i]){
                indice+=1;
            }
        }
        cout<<indice<<endl;
    }
    
    
    return 0;
}