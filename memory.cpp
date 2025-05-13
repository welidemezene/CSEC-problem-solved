#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_map<string, int> type_size = {
        {"int", 4}, {"bool", 1}, {"char", 1}, {"double", 8}, {"float", 4}
    };
    
    int total_bytes = 0;
    for (int i = 0; i < n; i++) {
        string type;
        int size;
        cin >> type >> size;
        total_bytes += type_size[type] * size;
    }
    
    cout << total_bytes << endl;
    return 0;
}
