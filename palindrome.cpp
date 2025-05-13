#include <bits/stdc++.h> 
using namespace std;

bool isPalindrome(int num) {
    string s = to_string(num);
    string rev = s;
    reverse(rev.begin(), rev.end());
    return s == rev;
}

int main() {
    int n;
    cin >> n;

    while (true) {  
        n++;  // Increment n to find next palindrome
        if (isPalindrome(n)) {
            cout << n << endl;
            break;
        }
    }
    return 0;
}
