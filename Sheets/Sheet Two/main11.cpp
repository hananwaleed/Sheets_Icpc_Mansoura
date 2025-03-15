#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;  
    
    int a[n]; 
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int minIdx = min_element(a, a + n) - a;  
    int maxIdx = max_element(a, a + n) - a;  

    swap(a[minIdx], a[maxIdx]);


    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
