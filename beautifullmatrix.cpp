#include <bits/stdc++.h> 
using namespace std;

int main(){
    int arr[5][5];
    int ith=0;
    int jth =0;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>>arr[i][j];
            if(arr[i][j]== 1){
                ith = abs(i-2);
                jth =abs(j-2);

            }
        }
    }
    cout<<ith + jth;
    
    return 0;
}