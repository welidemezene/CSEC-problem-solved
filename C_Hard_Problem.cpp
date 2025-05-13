#include <bits/stdc++.h> 
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int m,a,b,c;
        cin>>m>>a>>b>>c;
        int min1 = min(a,m);
        int min2 = min(b,m);
        int remainder = (m-min1) + (m-min2);
        int min3 = min(c,remainder);
        cout<<min1+min2+min3<<endl;
    }

    return 0;
}