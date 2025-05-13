#include <bits/stdc++.h> 
using namespace std;

int main(){
    int n;
    string m;
    cin>>n;
    cin>>m;
    int nebhour =0;
    for(int i=1; i<=n;i++){
        if(m[i] == m[i-1]){
            nebhour+=1;

        }
    }
    cout<<nebhour;
    
    
    return 0;
}