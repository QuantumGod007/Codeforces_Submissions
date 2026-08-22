#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long n;
    cin >> n;
    long long cnt = 0;
 
    cnt += n / 100;
    n = n % 100;
    cnt += n / 20;
    n = n % 20;
    cnt += n / 10;
    n = n % 10;
    cnt += n / 5;
    n = n % 5;
    cnt += n/1;
    
    cout << cnt << '
';
 
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve();
 
    return 0;
}