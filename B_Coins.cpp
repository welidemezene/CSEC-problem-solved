//wolidemedhin_ICPC_mezene
#include <bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n<=2)  return 1;
    return fib(n-1 ) + fib(n-2);
       
    
    
}

int main() {
    // Optimize I/O performance
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int f = fib(6);
    cout<<f;
    
    
    return 0;
}