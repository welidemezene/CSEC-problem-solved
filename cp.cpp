//wolidemedhin_ICPC_mezene
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize I/O performance
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int > nums = {1,2,3};
    vector<int> fruits = {5,4};
    vector<int> newli = fruits;

    newli.insert(newli.end(), nums.begin() , nums.end());
    for(int n: newli){
        cout<<n;
    }
   
    
    
    

    
    return 0;
}