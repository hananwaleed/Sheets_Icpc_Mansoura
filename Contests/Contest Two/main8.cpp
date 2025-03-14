#include <iostream>
using namespace std;
 
void fastInputOutput() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
int main() {
    fastInputOutput();
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
 
        for (int i = s.size() - 1; i > 0; i--) {
            while (s[i] > '0' && s[i] - 1 > s[i - 1]) {
                s[i]--;
                swap(s[i], s[i - 1]);
                i = min(i + 1, (int)s.size() - 1);
            }
        }
 
        cout << s << "\n";
    }
 
    return 0;
}