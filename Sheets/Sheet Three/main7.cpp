#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        set<int> unique_elements;
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            unique_elements.insert(a[i]);
        }
        
        cout << (unique_elements.size() == n ? "YES" : "NO") << endl;
    }
    
    return 0;
}
