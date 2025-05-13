#include <bits/stdc++.h> 
using namespace std;

int main(){
    string text;
    string text1;
    
    
    cin>>text;
     cin>>text1;
     transform(text.begin(), text.end(), text.begin(), ::tolower);
   
     transform(text1.begin(), text1.end(), text1.begin(), ::tolower);
    
  
    
    if(text<text1){
        cout<<-1;

    }
    else if(text1<text){
        cout<<1;
    }
    else if(text == text1){
        cout<<0;
    }
    

    
    return 0;
}