#include <iostream>
#include <unordered_map>
#include <vector>
#include <set>
using namespace std;

int main() {
    int t;  // Number of test cases
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<set<string>> words(3);  // List of sets for each player's words
        unordered_map<string, int> word_count;  // Map to track word occurrences

        // Read words for each player
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < n; j++) {
                string word;
                cin >> word;
                words[i].insert(word);
                word_count[word]++;
            }
        }

        // Points for each player
        vector<int> points(3, 0);

        // Calculate points based on the word count
        for (const auto& entry : word_count) {
            if (entry.second == 1) {
                // Word appeared in one list, give 3 points to the player
                for (int i = 0; i < 3; i++) {
                    if (words[i].count(entry.first)) {
                        points[i] += 3;
                        break;
                    }
                }
            } else if (entry.second == 2) {
                // Word appeared in two lists, give 1 point to each player
                int count = 0;
                for (int i = 0; i < 3; i++) {
                    if (words[i].count(entry.first)) {
                        points[i] += 1;
                        count++;
                    }
                }
            }
        }

        // Output the points for each player
        cout << points[0] << " " << points[1] << " " << points[2] << endl;
    }

    return 0;
}
