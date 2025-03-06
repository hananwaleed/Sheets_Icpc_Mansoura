

#include <iostream>
using namespace std;
int main()
{
	int n, count = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		if (a + b + c >= 2) {
			count++;
		}
	}
	cout << count << endl;
	return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	
 
	int t;
		cin >> t;
		string result = "";
		while (t--) {
			int a, b, c;
			cin>> a >> b >> c;
			if (a + b == c || a + c == b || c + b == a) {
				result += "YES\n";
			}
			else {
				result += "NO\n";
			}
		}
		cout << result;
	return 0;
}
