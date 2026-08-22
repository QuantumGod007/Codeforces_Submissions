#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    string c;
    cin >> c;
    for(int i=0;i<n;i++) {
        if(s[i] =='B') {
            s[i] = 'G';
        }
        if(c[i] == 'B') {
            c[i] = 'G';
        }
    }
    if(s==c)
        cout << "YES
";
    else 
        cout << "NO
";
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