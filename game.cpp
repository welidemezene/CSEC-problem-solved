#include <bits/stdc++.h> 
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int officer=0;
    int untreated =0;
    
    for(int i=0;i<n; i++){
        cin>>arr[i];
        if(arr[i] >0){
            officer+=arr[i];

        }
        else if(arr[i]==-1){
            
            if(officer>0){
                officer--;

            }
            else{
                untreated++;
            }


        }
    }
    cout<<untreated;
    
    
    return 0;
}