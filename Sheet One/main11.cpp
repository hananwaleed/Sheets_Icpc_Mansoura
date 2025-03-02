#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int maxSide = max(a, max(b, c));
	int sumSides = a + b + c - maxSide;
	int minutes = max(0, maxSide - sumSides + 1);
	cout << minutes;
	return 0;
}