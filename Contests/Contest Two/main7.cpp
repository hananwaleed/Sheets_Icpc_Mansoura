#include <iostream>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;

    if (m <= n && (n - m) % 2 == 0)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
