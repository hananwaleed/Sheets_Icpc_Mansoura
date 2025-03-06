#include <iostream>
using namespace std;

int main() {
    int V, A, B, C;
    cin >> V >> A >> B >> C;

    while (true) {
        if (V < A) {
            cout << "F" << endl;
            break;
        }
        V -= A;

        if (V < B) {
            cout << "M" << endl;
            break;
        }
        V -= B;

        if (V < C) {
            cout << "T" << endl;
            break;
        }
        V -= C;
    }

    return 0;
}
