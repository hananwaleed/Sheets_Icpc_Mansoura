#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int z;
	cin >> z;
	if (z % 2 == 0 && z > 2) {
		cout << "YES";
	}else{
        cout<<"No";
    }
	return 0;
}