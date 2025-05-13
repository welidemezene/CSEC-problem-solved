#include <iostream>
using namespace std;

int main(){


    int n;
    cin>>n;
    int m;
    int possible = 1;
    for(int i =0; i< n; i++){
        cin>>m;
        possible *= m;
    }
    cout<<possible;
    return 0;
}