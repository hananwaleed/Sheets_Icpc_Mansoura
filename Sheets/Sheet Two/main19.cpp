#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    int results[t];  

    for (int test = 0; test < t; test++) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        if (a[0] != a[1] && a[0] != a[2]) {
            results[test] = 1;
        } else {
            for (int i = 1; i < n; i++) {
                if (a[i] != a[0]) {
                    results[test] = i + 1;
                    break;
                }
            }
        }
    }

    for (int i = 0; i < t; i++) {
        cout << results[i] << endl;
    }

    return 0;
}
