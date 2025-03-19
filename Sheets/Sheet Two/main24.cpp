#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int c = a + b;


    int a_no_zeros = 0, b_no_zeros = 0, c_no_zeros = 0;
    int factor_a = 1, factor_b = 1, factor_c = 1;


    int temp = a;
    while (temp > 0) {
        int digit = temp % 10;
        if (digit != 0) {
            a_no_zeros += digit * factor_a;
            factor_a *= 10;
        }
        temp /= 10;
    }

    temp = b;
    while (temp > 0) {
        int digit = temp % 10;
        if (digit != 0) {
            b_no_zeros += digit * factor_b;
            factor_b *= 10;
        }
        temp /= 10;
    }

 
    temp = c;
    while (temp > 0) {
        int digit = temp % 10;
        if (digit != 0) {
            c_no_zeros += digit * factor_c;
            factor_c *= 10;
        }
        temp /= 10;
    }

  
    if (a_no_zeros + b_no_zeros == c_no_zeros) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
