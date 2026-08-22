#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    string s;
    cin >> s;
    string o = "codeforces";
    int index = 0;
 
    for(int i = 0; i < 10; i++) {
        if(s[i] != o[i]) {
            index++;
        }
    }
    cout << index << '
';
    
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