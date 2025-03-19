#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int getDifference(const string& a, const string& b) {
    int diff = 0;
    for (size_t i = 0; i < a.size(); i++) {
        diff += abs(a[i] - b[i]);
    }
    return diff;
}

int main() {
    int t;
    cin >> t;
    string result = "";

    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<string> words(n);

        for (int i = 0; i < n; i++) {
            cin >> words[i];
        }

        int minDiff = INT_MAX;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                minDiff = min(minDiff, getDifference(words[i], words[j]));
            }
        }

        result += to_string(minDiff) + "\n";
    }

    cout << result;
    return 0;
}
