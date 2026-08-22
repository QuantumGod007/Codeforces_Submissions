#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long m, n, a;
    cin >> m >> n >> a;
 
    long long x = (m + a - 1) / a;
    long long y = (n + a - 1) / a;
 
    cout << x * y << '
';
}