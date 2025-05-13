//wolidemedhin_ICPC_mezene
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize I/O performance
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
sort(nums.begin(), nums.end());
vector<int> a,b,c;
for(int i=0; i<n; i++){
    if(i ==0){
        a.push_back(nums[i]);

    }
    else if(i==1){
        b.push_back(nums[i]);
    }
    else{
        c.push_back(nums[i]);
    }
}
int a1 = 1;
for(int i=0; i<a.size(); i++){
    a1 *= a[i];

}
if(a1 >=0  && a.size() < 2){
    a.push_back(-1);
}
int b1 = 1;
for(int i=0; i<b.size(); i++){
    b1 *= b[i];

}
if(b1 <=0){
    b.push_back(-1);
}
int c1 = 1;
for(int i=0; i<c.size(); i++){
    c1 *= c[i];

}
if(c1 > 0){
    c.push_back(0);
}
 
for(int i=0; i<a.size(); i++){
    cout<<a[i]<<" ";
}
cout<<endl;
for(int i=0; i<b.size(); i++){
    cout<<b[i]<<" ";
}
cout<<endl;
for(int i=0; i<c.size(); i++){
    cout<<c[i]<<" ";
}


    
    return 0;
}