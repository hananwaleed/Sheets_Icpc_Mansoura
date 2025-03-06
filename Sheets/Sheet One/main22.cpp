#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    string result = "";
    while (t--) {
        char c;
        cin >> c;
        switch (c) {
        case 'c': case 'o': case 'd': case 'e':
        case 'f': case 'r': case 's':
          result +="YES\n";
            break;
        default:
            result += "NO\n";
        }
    }
    cout << result;
    return 0;
}