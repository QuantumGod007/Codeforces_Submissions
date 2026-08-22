#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    int max_cnt = 0;
    for(int i=0;i<n;i++) {
        if(s[i] == '#') {
            cnt++;
        }
        else {
            max_cnt = max(cnt, max_cnt);
            cnt = 0;
        }
    }
    max_cnt = max(cnt, max_cnt);
 
    cout << (max_cnt + 1) / 2 << endl;
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