#include <bits/stdc++.h> 
using namespace std;

int main(){
    string s;
    cin>>s;
    int siz = s.size();
    int upper = 0;
    int lower =0;
    for(int i=0; i<siz;i++){
        if(isupper(s[i])){
            upper+=1;

        }
        else if(islower(s[i])){
            lower+=1;
        }
    }
    if(lower>=upper){
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout<<s;
    }
    else if(upper>lower){
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout<<s;


    }

    return 0;
}