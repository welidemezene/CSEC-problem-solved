#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize I/O performance
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
                char c;
                cin>>c;
                if(c!='.'){
                    cout<<c;
                }
            }
            

        }
        cout<<endl;
    }


    
    return 0;
}