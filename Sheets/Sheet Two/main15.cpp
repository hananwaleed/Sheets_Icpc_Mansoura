#include <iostream>
#include <string>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int count[M + 1] = {0}; 
    string result = "";

    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        count[x]++;
    }

    for (int i = 1; i <= M; i++) {
        result += to_string(count[i]) + "\n";
    }

    cout << result;

    return 0;
}
