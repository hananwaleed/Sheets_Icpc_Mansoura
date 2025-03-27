#include <iostream>
using namespace std;


bool has_repeated_digit(int num) {
    int freq[10] = {0};

    while (num > 0) {
        int digit = num % 10;
        if (++freq[digit] > 1) return true; 
        num /= 10;
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    
    long long sum = 0; 

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if (has_repeated_digit(num)) {
            sum += num;
        }
    }

    cout << sum << endl; 

    return 0;
}
