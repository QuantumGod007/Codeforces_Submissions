 
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >>n;
    int temp = n;
    int digits = 0;
    int firstDigit = 0;
 
    while (temp > 0) {
        firstDigit = temp%10;
        temp /= 10;
        digits++;
    }
 
    if(digits==1)
        cout << 1 << '
';
    else {
        digits--;
        int second = (firstDigit + 1) * pow(10, digits);
        cout << second - n << '
';
    }
 
}