#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	long long x, y;
	cin >> x >> y;
	long long z = (x % 10) + (y % 10);
	cout << z;
	return 0;
}