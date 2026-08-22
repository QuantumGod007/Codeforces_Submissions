#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    string s;
    cin >> s;
    int len = s.length();
    for(int i=0;i<len;i++) {
        int n = s[i] - '0';
        int inv = 9 - n;
        if(n > inv) {
            if(i == 0 && n== 9) {
                continue;
            }
            if(inv < n) {
                s[i] = inv + '0';
 
            }
        }
        
    }
    cout << s << '
';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve();
 
    return 0;
}