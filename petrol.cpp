#include <iostream>
#include <vector>
using namespace std;

int main(){

    int c;
    cin>>c;
    
    vector<int>petrol(c);
    vector<int>price(c);
    int totalprice=0;
    int totalliter = 0;
    
    for(int i= 0; i<c; i++){
        cin>>petrol[i];
        int totalliter = totalliter + petrol[i];

    }
    for(int j =0; j<c; j++){
        cin>>price[j];

    }
    for(int k =0; k<c; k++){
        int totalprice =  totalprice+ (price[k] * petrol[k]);
    }

    cout<<totalliter << totalprice;
    return 0;
}