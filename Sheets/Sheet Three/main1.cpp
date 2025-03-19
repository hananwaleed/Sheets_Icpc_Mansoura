#include <iostream>
using namespace std;

int f(int x) { 
    return 2 * x + 3;
}

int main() {
    int x;
    cin >> x;
    
    int result = f(f(f(x))) + 2 * f(x * f(x));
    cout << result;

    return 0;
}
