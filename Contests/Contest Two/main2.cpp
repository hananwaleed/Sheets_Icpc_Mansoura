#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    string result = ""; 

    while (t--) {
        string a;
        cin >> a;
        int n = a.size();
        char b[n + 1]; 

       
        for (int i = 0; i < n; i++) {
            if (a[n - 1 - i] == 'p') 
                b[i] = 'q';
            else if (a[n - 1 - i] == 'q') 
                b[i] = 'p';
            else 
                b[i] = 'w';
        }
        b[n] = '\0'; 

        result += string(b) + "\n"; 
    }

    cout << result; 
    return 0;
}

