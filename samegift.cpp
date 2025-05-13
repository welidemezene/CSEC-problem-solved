// #include <bits/stdc++.h> 
// using namespace std;

// int main(){

//     string john;
//     string jane;
//     cin>>john;
//     cin>>jane;
//     int same = 0;
//     int num1 = john.length();
//     int num2 = jane.length();
//    for(int i =0; i<num1; i++){
//     for(int j = 0; j<num2; j++){
//         if(john[i] == jane[j]){
//             same += 1;
//         }
//     }
//    }
//    cout<<same<<endl;
    
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    string john, jane;
    cin >> john >> jane;

    set<char> johnGifts(john.begin(), john.end());
    set<char> janeGifts(jane.begin(), jane.end());

    int commonGifts = 0;
    for (char gift : johnGifts) {
        if (janeGifts.count(gift)) {
            commonGifts++;
        }
    }

    cout << commonGifts << endl;
    return 0;
}
