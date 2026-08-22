#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    char c;
    cin >> c;
    string s = "codeforces";
    int n = s.length();
    for(int i=0; i < n; i++) {
        if(c == s[i]) {
            cout << "YES
";
            return;
        }
    }
    cout << "NO
";
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