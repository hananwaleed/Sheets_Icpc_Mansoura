#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n; 
    int arr[n][n];  
    int primarySum = 0, secondarySum = 0;

 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];  
            if (i == j) primarySum += arr[i][j]; 
            if (i + j == n - 1) secondarySum += arr[i][j]; 
        }
    }

  
    cout << abs(primarySum - secondarySum) << endl;

    return 0;
}
