#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<tuple<int, int, int>> stars(n);
    map<int, int> x_count, y_count, z_count;
    string result = "";

    for (int i = 0; i < n; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        stars[i] = {x, y, z};

        x_count[x]++;
        y_count[y]++;
        z_count[z]++;
    }

    for (auto [x, y, z] : stars) {
        int shared_x = x_count[x] - 1;
        int shared_y = y_count[y] - 1;
        int shared_z = z_count[z] - 1;
        result += to_string(shared_x) + " " + to_string(shared_y) + " " + to_string(shared_z) + "\n";
    }

    cout << result;
    return 0;
}
