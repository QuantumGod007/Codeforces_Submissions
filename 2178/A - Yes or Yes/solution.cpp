#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    string s;
    cin >> s;
    int cnt_of_y = 0;
    int n = s.length();
    for(int i=0;i<n;i++) {
        if(s[i] == 'Y') {
            cnt_of_y++;
        }
    }
    if(cnt_of_y > 1) 
        cout << "NO
";
    else
        cout << "YES
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