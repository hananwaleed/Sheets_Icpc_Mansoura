#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k; 

    int arr[n]; 
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }


    int l = k, r = n - 1;
    while (l < r) {
        swap(arr[l], arr[r]); 
        l++;
        r--;
    }

  
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

