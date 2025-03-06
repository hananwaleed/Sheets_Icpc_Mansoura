#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

    int t;
    cin >> t;
    string result = "";
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b == c || a + c == b || c + b == a)
        {
            result += "YES\n";
        }
        else
        {
            result += "NO\n";
        }
    }
    cout << result;
    return 0;
}