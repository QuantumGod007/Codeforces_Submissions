#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n,t;
    cin >> n >> t;
    int mul = n * t;
    t--;
    mul -= t;
    cout << mul << '
';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while(t--) {
        solve();
    }
 
    return 0;
}