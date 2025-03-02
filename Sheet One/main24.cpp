#include <iostream>
using namespace std;
 
int main() {
    int A, B, C;
    cin >> A >> B >> C; 
 
    
    if (A <= B && A <= C) {
        if (B <= C)
            cout << A << " " << B << " " << C << endl;
        else
            cout << A << " " << C << " " << B << endl;
    }
    else if (B <= A && B <= C) {
        if (A <= C)
            cout << B << " " << A << " " << C << endl;
        else
            cout << B << " " << C << " " << A << endl;
    }
    else {
        if (A <= B)
            cout << C << " " << A << " " << B << endl;
        else
            cout << C << " " << B << " " << A << endl;
    }
 
    return 0;
}