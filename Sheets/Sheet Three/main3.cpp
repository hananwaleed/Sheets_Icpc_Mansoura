#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long sum = (n * (n + 1) * (2 * n + 1)) / 6;
    cout << sum << endl;
    return 0;
}
