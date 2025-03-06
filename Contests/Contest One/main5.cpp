#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int t, n;
    cin >> t;
 
    string results = "";  
 
    while (t--) {
        cin >> n;
        long long num1 = n;
        long long num2 = n + 1;
        long long num3 = n - 1;
        long long num4 = 3 * n + 2;
 
        long long result = (num1 * num2 * num3 * num4) / 12;
 
        results += to_string(result) + "\n";  
    }
 
    cout << results;  
    return 0;
}