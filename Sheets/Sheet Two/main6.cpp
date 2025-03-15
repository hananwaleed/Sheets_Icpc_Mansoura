#include <iostream>
#include <algorithm>  
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int* minPtr = min_element(arr, arr + n);
    int minVal = *minPtr;   
    int minIndex = (minPtr - arr) + 1;  

    cout << minVal << " " << minIndex << endl;

    return 0;
}
