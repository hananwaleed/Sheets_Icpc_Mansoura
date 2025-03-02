#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int x = a + b;
	int y = a + c;
	int z = b + c;
	int maxSum = max(x,max (y, z));
	cout << maxSum;

	return 0;
}