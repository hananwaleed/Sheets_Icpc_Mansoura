#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    string results = "";

    while (t--) {
        int n;
        cin >> n;
        
        string row1, row2;
        cin >> row1 >> row2;

        for (int i = 0; i < n; i++) {
            if (row1[i] == 'G') row1[i] = 'B';
            if (row2[i] == 'G') row2[i] = 'B';
        }

        if (row1 == row2)
            results += "YES\n";
        else
            results += "NO\n";
    }

    cout << results;
    return 0;
}
