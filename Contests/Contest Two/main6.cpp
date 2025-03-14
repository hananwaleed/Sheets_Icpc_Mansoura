#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{   
    int t;
    cin >> t; 
    string result = ""; 

    while (t--)  
    {
        string s;
        cin >> s; 

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
                s[i] = s[i] + ('a' - 'A');
            else if (s[i] >= 'a' && s[i] <= 'z')
                s[i] = s[i] - ('a' - 'A');
        }

        reverse(s.begin(), s.end());

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
                s[i] = 'Z' - (s[i] - 'A');
            else if (s[i] >= 'a' && s[i] <= 'z')
                s[i] = 'z' - (s[i] - 'a');
        }

        result += s + "\n";
    }

    cout << result;

    return 0;
}
