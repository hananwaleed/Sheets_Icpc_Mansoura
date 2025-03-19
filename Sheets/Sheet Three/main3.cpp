#include<iostream>
using namespace std;
int sumOfSquarse(long long n){
    return  (n * (n + 1) * (2 * n + 1)) / 6;
}

int main(){
    long long n;
    cin>> n;
  cout<<sumOfSquarse(n)<<endl;
}