#include <bits/stdc++.h> 
using namespace std;

int main(){
    int arr[4];
    for(int i=0; i<4; i++){
        cin>>arr[i];

    }
    string s;
    cin>>s;
    int sum=0;

    for(char m : s){
        if(m == '1'){
            sum +=arr[0];

        }
        else if(m == '2'){
            sum += arr[1];
        }
        else if(m == '3'){
            sum += arr[2];
        }
        else if(m == '4'){
            sum += arr[3];
        }
    }
    cout<<sum;

    
    return 0;
}