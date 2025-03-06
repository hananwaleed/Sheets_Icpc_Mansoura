#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    char s;
    int number;
    string result = "";

    cin >> s >> number;
    for (int i = 0; i < number; i++)
    {

        int numbers;
        cin >> numbers;
        for (int j = 0; j < numbers; j++)
        {
            result += s;
        }
        result += "\n";
    }
    cout << result;
    return 0;
}