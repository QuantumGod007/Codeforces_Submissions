#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 1;
    for(int i=0;i<n;i++) {
        if(s[i] == 'R') {
            cnt++;
        }
        else {
            break;
        }
    }
    cout << cnt << '
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