#include <bits/stdc++.h> 
using namespace std;

int main(){
    string name = "Timur";
    sort(name.begin(),name.end());
    int t;
    cin>>t;
    for(int i=0; i<t;i++){
        int n;
        cin>>n;
        string m;
        cin>>m;
        sort(m.begin(),m.end());
        if(name==m){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    
    return 0;
}