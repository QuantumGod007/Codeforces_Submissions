#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int a,b;
    cin >> a >> b;
    int diff = abs(a-b);
    cout << (diff+9)/10 << '
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