#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int k;
    cin >> k;
    int cnt = 0;
    int i=1;
    while (cnt < k) {
    if (i % 3 != 0 && i % 10 != 3) {
        cnt++;
        if (cnt == k) {
            cout << i << '
';
            break;
        }
    }
    i++;
}
 
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}