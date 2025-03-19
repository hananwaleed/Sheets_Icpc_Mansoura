#include <iostream>
#include <cctype> 
using namespace std;

int main() {
    string word;
    cin >> word; 

    bool all_upper = true, first_lower_rest_upper = islower(word[0]);

    for (int i = 1; i < word.size(); i++) {
        if (islower(word[i])) {
            all_upper = false;
            first_lower_rest_upper = false;
        }
    }

    if (all_upper) {
        for (char &ch : word) ch = tolower(ch);
    } 
    else if (first_lower_rest_upper) {
        word[0] = toupper(word[0]);
        for (int i = 1; i < word.size(); i++) word[i] = tolower(word[i]);
    }

    cout << word << endl; 

    return 0;
}
