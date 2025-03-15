#include <iostream>
#include <set>
#include <cctype>

using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    set<char> letters;
    
    for (char c : s) {
        letters.insert(tolower(c));
    }

    if (letters.size() == 26)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
