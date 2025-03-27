#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    string result = "";
    
    while (t--) {
        string s;
        cin >> s;
        

        for (char &c : s) {
            c = tolower(c);
        }
        
        if (s == "yes") {
            result += "YES\n";
        } else {
            result += "NO\n";
        }
    }
    
    cout << result;
    
    return 0;
}
