#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int a;
	cin >> a;
	int z;
	for (int i = 1; i < 11; i++)
	{
		z = i * a;
		cout << i << " x " << a << " = " << z<<endl;
	}
	return 0;
}