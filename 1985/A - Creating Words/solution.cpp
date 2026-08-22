#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    string s1,s2;
    cin >> s1 >> s2;
    char temp = s1[0];
    s1[0] = s2[0];
    s2[0] = temp;
 
    cout << s1 << " " << s2 << '
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