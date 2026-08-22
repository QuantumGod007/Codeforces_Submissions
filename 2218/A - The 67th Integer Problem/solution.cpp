#include <bits/stdc++.h>
using namespace std;
 
 
void solve() {
    int x,y;
    cin >> x;
    if (x < 67)
        cout << ++x << '
';
    else 
 
        cout << x << '
';
 
}
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}