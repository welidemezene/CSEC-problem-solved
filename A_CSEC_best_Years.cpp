//wolidemedhin_ICPC_mezene
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize I/O performance
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    n= n+1;
    while(true){
        string s = to_string(n);
    set<char>m;
    for(int i=0; i<4; i++){
        m.insert(s[i]);
    }
    if(m.size()== 4){
        cout<<n;
        break;
    }
    else{
        n +=1;
    }
    

    

    
    

    }
    

    
    return 0;
}