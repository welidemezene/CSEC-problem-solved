//wolidemedhin_ICPC_mezene
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize I/O performance
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    
    if (n%3==0&&n%5==0){
        cout<<"FizzBuzz"<<endl;

    }
    else if(n%3==0){
        cout<<"Fizz"<<endl;

    }
    else if(n%5==0){
        cout<<"Buzz"<<endl;

    }
    

    
    return 0;
}