#include <bits/stdc++.h> 
using namespace std;

int main(){
    string n;
    cin>>n;
    
    
    set<char> distinictc(n.begin(), n.end());
    int siz = distinictc.size();
    if(siz %2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
    

    
    return 0;
}