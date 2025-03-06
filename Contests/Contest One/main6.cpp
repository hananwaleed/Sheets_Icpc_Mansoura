#include <iostream>
using namespace std;
 
int main() {
    int xr, yr, xw, yw;
    cin >> xr >> yr >> xw >> yw;
 
   
    int d_r = xr * xr + yr * yr;
    int d_w = xw * xw + yw * yw;
 
 
    if (d_r < d_w)
        cout << "Russo" << endl;
    else if (d_r > d_w)
        cout << "Wil" << endl;
    else
        cout << "Empate" << endl;
 
    return 0;
}