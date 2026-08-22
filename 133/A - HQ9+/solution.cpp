#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    string s;
    cin >> s;
    int n = s.length();
    bool ans = false;
    for(int i=0;i<n;i++) {
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9') {
            ans = true;
        }
    }
    if(ans) {
        cout << "YES
";
    }
    else {
        cout << "NO
";
    }
 
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve();
 
    return 0;
}