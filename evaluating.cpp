#include <bits/stdc++.h> 
using namespace std;

int main(){
    string s;
    cin>>s;
    int count = 0;
    int conscutive = 0;
    for(char c: s){
        if(c == 'o'){
            conscutive +=1;
            count+=conscutive;
        }
        else{
            conscutive = 0;
        }

    }
    cout<<count;


    
    return 0;
}