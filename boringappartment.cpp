#include <bits/stdc++.h> 
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int a;
        cin>>a;
        string str_a =to_string(a);
        int d= str_a[0]-'0';
        int k = str_a.size();

        int total=0;
    for(int j=1; j<d; j++){
        total+=10;
        
    }
    for(int x=1; x<=k; x++){
        total+=x;

    }
    cout<<total<<endl;

    }
    
    
    
    return 0;
}