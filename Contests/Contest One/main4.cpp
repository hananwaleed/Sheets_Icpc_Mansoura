#include <iostream>
#include <string>  
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    string results = "";  
 
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int count = 0;
 
        if (b > a) count++;
        if (c > a) count++;
        if (d > a) count++;
 
        results += to_string(count) + "\n";
    }
 
    cout << results;  
    return 0;
}