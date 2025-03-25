#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<pair<int, int>> points(n);
    for (int i = 0; i < n; i++) {
        cin >> points[i].first >> points[i].second;
    }

    sort(points.begin(), points.end(), [](pair<int, int> a, pair<int, int> b) {
        return a.second > b.second;
    });

    string result = "";
    for (auto p : points) {
        result += to_string(p.first) + " " + to_string(p.second) + "\n";
    }

    cout << result;

    return 0;
}
