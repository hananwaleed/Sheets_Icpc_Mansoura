#include <iostream>
using namespace std;

int main()
{
    char s[51];
    cin >> s;

    bool Y = false, e = false, S = false;

 
    for (int i = 0; s[i]; i++)
    {
        if (s[i] == 'Y') {  
            Y = true;   
        }

        if (s[i] == 'e') {  
            e = true;  
        }

        if (s[i] == 's') {  
            S = true;   
        }
    }

    
    if (Y && e && S)
        cout << "Ziad eld3eef";
    else
        cout << "Ziad is weak";

    return 0;
}

