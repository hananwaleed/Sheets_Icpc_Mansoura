#include <iostream>
using namespace std;

int main() {
    string N;
    cin >> N;

    long long sum = 0;
    for (char digit : N) {
        sum += digit - '0'; 
    }

    if (sum % 3 == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
