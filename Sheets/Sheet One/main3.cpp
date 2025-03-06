#include <iostream>
#include <iomanip>
using namespace std;
int main() {

	const double pi = 3.14159;
	double a;
	double r;
	cin >> r;
	a = pi * r * r;
	cout << fixed<<setprecision(4)<< "A=" << a;
}