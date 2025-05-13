#include <bits/stdc++.h> 
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[3];
    
    int check =0;
    for(int i=0;i<n; i++){
        int sum = 0;
        for(int j =0; j<3; j++){
            cin>>arr[j];
            sum+=arr[j];
        }
        if(sum >=2){
            check+=1;
        }
        
    }
    cout<<check;
    
    return 0;
}