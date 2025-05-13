#include <bits/stdc++.h>
using namespace std;
int main(){

    string greet;
    cin>> greet;
    int num = greet.size();
    int counte = 0;
    for(int i=0; i<num; i++){
        if(greet[i] == 'e'){
            counte+=1;
        }

    }
    int tot = counte * 2;
    
    
    cout<<'h' <<  string(tot, 'e')  << 'y';
    

    return 0;
}