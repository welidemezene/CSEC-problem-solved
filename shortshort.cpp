#include <bits/stdc++.h> 
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string m;
        cin>>m;
        if(m=="abc"){
            cout<<"YES"<<endl;
        }
        else if(m=="bac"){
            cout<<"YES"<<endl;

        }
        else if(m=="cba"){
            cout<<"YES"<<endl;
        }
        else if(m=="acb"){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}