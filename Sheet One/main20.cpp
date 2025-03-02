#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long n;
        cin >> n;
        long long total_sum = n * (n + 1) / 2;
        long long power_sum = 0;
        long long power = 1;
        while (power <= n) {
            power_sum += power;
            power *= 2;
        }
        cout << (total_sum - 2 * power_sum) << "\n";
    }
    return 0;
}