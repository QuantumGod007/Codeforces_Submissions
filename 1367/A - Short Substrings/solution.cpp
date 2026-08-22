#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    string a;
    cin >> a;
    string s;
 
    int n = a.length();
    if(n != 2) {
        s.push_back(a[0]);
        for(int i=1;i<n-1;i++) {
            s.push_back(a[i]);
            i++;
        } 
        s.push_back(a[n-1]);
    }
    else {
        cout << a << '
';
        return;
    }
 
    cout << s << '
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