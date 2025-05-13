#include <bits/stdc++.h> 
using namespace std;

int main(){
    set<int> myset;
    for(int i=0;i<4;i++){
        int num;
        cin>>num;
        myset.insert(num);
    }
    int size= myset.size();
    int min = 4-size;
    cout<<min<<endl;

    
    
    return 0;
}