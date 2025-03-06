#include <iostream>
using namespace std;
 
int main() {
    long long L, R;
    cin >> L >> R;
    long long result = (R * (R + 1) / 2) - ((L - 1) * L / 2);
 
    cout << result << endl;
 
    return 0;
}