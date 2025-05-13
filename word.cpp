#include <bits/stdc++.h> 
using namespace std;

int main(){
    string n;
    
    cin>>n;
    int uppercount =0;
    int lowercount =0;
    for(char c: n){
        if(isupper(c)){
            uppercount++;

        }
        else if(islower(c)){
            lowercount++;
        }
    }
    if(uppercount>lowercount){
        ::transform(n.begin(), n.end() , n.begin(), ::toupper);
    }
    else if(lowercount >= uppercount){
        ::transform(n.begin(), n.end() , n.begin(), ::tolower);

    }
    cout<<n;

    
    
    return 0;
}