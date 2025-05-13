#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n; // Input number of students
    vector<int> marks(n); // Create a vector to hold marks

    // Input marks into the vector
    for (int i = 0; i < n; i++) {
        cin >> marks[i];
    }

    // Sort the array in ascending order
    sort(marks.begin(), marks.end());

    // Second lowest is at index 1 and second highest is at index n-2
    int secondLowest = marks[1];
    int secondHighest = marks[n - 2];

    // Output the result
    cout << secondLowest << " " << secondHighest << endl;

    return 0;
}
