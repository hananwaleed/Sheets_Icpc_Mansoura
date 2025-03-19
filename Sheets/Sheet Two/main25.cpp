#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    int diff_count = 0;


    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i - 1]) {
            diff_count++;
        }
    }

    
    if (diff_count == 1 || (diff_count == 0 && n % 2 == 1)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
