#include <bits/stdc++.h> 
using namespace std;

int main(){
    string n;
    cin>>n;
    char m = 'a';
    int siz = n.size();
    int sum=0;
    for(int i=0; i<siz; i++){
        if(abs(n[i] -m) >13){
            sum += (26-abs(n[i] -m));
            m = n[i];
        }
        else{
            sum += abs(n[i]-m);
        m = n[i];

        }
        



    }
    cout<<sum;

    
    return 0;
}