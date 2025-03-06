#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	

	int t;
	double a, b, c;
	cin >> a >> b >> c;
	double z = (a * 2 + b * 3 + c * 5) / 10;
   cout << fixed << setprecision(1);
	cout << "MEDIA = " << z << endl;
	return 0;
}