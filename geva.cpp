#include <iostream>
#include <string>

using namespace std;

int main() {
    string arr;
    cin >> arr;

    int sum = 0;
    int consecutiveOs = 0; // To track the streak of consecutive 'o's

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 'o') {
            consecutiveOs++;
            sum += consecutiveOs; // Add the current streak to the total sum
        } else {
            consecutiveOs = 0; // Reset streak when encountering an 'X'
        }
    }

    cout << sum << endl; // Print the final result
    return 0;
}
