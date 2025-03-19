#include <iostream>
using namespace std;

int main() {
    long long L, R, N;
    cin >> L >> R >> N;

    long long totalNumbers = R - L + 1;
    long long divisibleByN = (R / N) - ((L - 1) / N);
    long long result = totalNumbers - divisibleByN;

    cout << result << endl;
    return 0;
}
