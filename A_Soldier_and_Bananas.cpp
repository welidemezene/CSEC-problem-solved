#include <bits/stdc++.h> 
using namespace std;

int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int total =0;
    for(int i=1; i<=w; i++){
        total += i*k;
    }
    if(total>n){
        int borrow = total-n;
        cout<<borrow;

    }
    else if(total<=n){
        cout<<0;

    }
    

    return 0;
}